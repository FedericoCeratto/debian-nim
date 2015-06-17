
# Example of how to implement a simple concurrent hash table:

type
  Payload[T] = object
    rc: int
    data: T
  SharedRef*[T] = ref object
    payload: shared ptr Payload[T]

proc finalizer[T](x: SharedRef[T]) =
  if atomicDec(x.payload.rc) == 0: deallocShared(x.payload)

proc newShared*[T](x: T; additionalMem=0): SharedRef[T] =
  ## creates a reference counted shared piece of memory. ``T`` can be an
  ## unchecked array and then ``additionalMem`` of storage for its
  ## elements is reserved additionally. 
  new(result, finalizer[T])
  result.payload = cast[shared ptr Payload[T]](allocShared(
                      sizeof(Payload[T])+additionalMem))
  result.payload.rc = 1
  result.payload.data = x

proc deepCopy[T](x: SharedRef[T]): SharedRef[T] {.override.} =
  atomicInc(x.payload.rc)
  new(result, finalizer[T])
  result.payload = x.payload

proc mget*[T](x: SharedRef[T]): var T =
  result = x.payload.data


type
  UncheckedCharArray {.unchecked.} = array[1, char]
  StringDesc = object
    len, cap: int
    data: UncheckedCharArray
  SharedStr* = SharedRef[StringDesc]

proc 

    
