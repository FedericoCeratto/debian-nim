#
#
#            Nim's Runtime Library
#        (c) Copyright 2014 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

## Implements Nim's 'Chan', a light weight channel for inter thread
## communication.

# included from threadpool.nim

type
  ChanPayload = object
    refcount: int
    cv: CondVar
    rd, wr, count, mask: int
    data: pbytes
    lock: TSysLock
    elemType: PNimType
    ready: bool
    align: float
    
  Chan*[T] = ref object ##\
    ## A light weight channel for inter thread communication.
    payload: ptr ChanPayload

proc chanFinalizer[T](c: Chan[T]) =
  if atomicDec(c.payload.refcount) <= 0:
    destroyCondVar(c.payload.cv)
    deallocShared(c.payload)

proc createChan*[T](capacity: Natural): Chan[T] =
  new(result, chanFinalizer)
  result.payload = cast[ptr ChanPayload](allocShared(
    capacity*sizeof(T) + sizeof(ChanPayload) - sizeof(float))
  result.payload.cv = createCondVar()

proc deepCopy[T](x: Chan[T]): Chan[T] {.override.} =
  new(result, chanFinalizer)
  result.payload = x.payload
  atomicInc result.payload.refcount

proc rawSend(q: PRawChannel, data: pointer, typ: PNimType) =
  ## adds an `item` to the end of the queue `q`.
  var cap = q.mask+1
  if q.count >= cap:
    # start with capacity for 2 entries in the queue:
    if cap == 0: cap = 1
    var n = cast[pbytes](alloc0(q.region, cap*2*typ.size))
    var z = 0
    var i = q.rd
    var c = q.count
    while c > 0:
      dec c
      copyMem(addr(n[z*typ.size]), addr(q.data[i*typ.size]), typ.size)
      i = (i + 1) and q.mask
      inc z
    if q.data != nil: dealloc(q.region, q.data)
    q.data = n
    q.mask = cap*2 - 1
    q.wr = q.count
    q.rd = 0
  storeAux(addr(q.data[q.wr * typ.size]), data, typ, q, mStore)
  inc q.count
  q.wr = (q.wr + 1) and q.mask

proc rawRecv(q: PRawChannel, data: pointer, typ: PNimType) =
  sysAssert q.count > 0, "rawRecv"
  dec q.count
  storeAux(data, addr(q.data[q.rd * typ.size]), typ, q, mLoad)
  q.rd = (q.rd + 1) and q.mask

template lockChannel(q: expr, action: stmt) {.immediate.} =
  acquireSys(q.lock)
  action
  releaseSys(q.lock)

template sendImpl(q: expr) {.immediate.} =  
  if q.mask == ChannelDeadMask:
    sysFatal(EDeadThread, "cannot send message; thread died")
  acquireSys(q.lock)
  var m: TMsg
  shallowCopy(m, msg)
  var typ = cast[PNimType](getTypeInfo(msg))
  rawSend(q, addr(m), typ)
  q.elemType = typ
  releaseSys(q.lock)
  signalSysCond(q.cond)

proc send*[TMsg](c: var TChannel[TMsg], msg: TMsg) =
  ## sends a message to a thread. `msg` is deeply copied.
  var q = cast[PRawChannel](addr(c))
  sendImpl(q)

proc llRecv(q: PRawChannel, res: pointer, typ: PNimType) =
  # to save space, the generic is as small as possible
  q.ready = true
  while q.count <= 0:
    waitSysCond(q.cond, q.lock)
  q.ready = false
  if typ != q.elemType:
    releaseSys(q.lock)
    sysFatal(EInvalidValue, "cannot receive message of wrong type")
  rawRecv(q, res, typ)

proc recv*[TMsg](c: var TChannel[TMsg]): TMsg =
  ## receives a message from the channel `c`. This blocks until
  ## a message has arrived! You may use ``peek`` to avoid the blocking.
  var q = cast[PRawChannel](addr(c))
  acquireSys(q.lock)
  llRecv(q, addr(result), cast[PNimType](getTypeInfo(result)))
  releaseSys(q.lock)
