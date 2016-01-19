#
#
#            Nim's Runtime Library
#        (c) Copyright 2015 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

## Shared list support.

import
  locks

const
  ElemsPerNode = 100

type
  SharedListNode[A] = ptr object
    next: SharedListNode[A]
    dataLen: int
    d: array[ElemsPerNode, A]

  SharedList*[A] = object ## generic shared list
    head, tail: SharedListNode[A]
    lock: Lock

template withLock(t, x: untyped) =
  acquire(t.lock)
  x
  release(t.lock)

iterator items*[A](x: var SharedList[A]): A =
  withLock(x):
    var it = x.head
    while it != nil:
      for i in 0..<it.dataLen:
        yield it.d[i]
      it = it.next

proc add*[A](x: var SharedList[A]; y: A) =
  withLock(x):
    var node: SharedListNode[A]
    if x.tail == nil or x.tail.dataLen == ElemsPerNode:
      node = cast[type node](allocShared0(sizeof(node[])))
      node.next = x.tail
      x.tail = node
      if x.head == nil: x.head = node
    else:
      node = x.tail
    node.d[node.dataLen] = y
    inc(node.dataLen)

proc initSharedList*[A](): SharedList[A] =
  initLock result.lock
  result.head = nil
  result.tail = nil

proc clear*[A](t: var SharedList[A]) =
  withLock(t):
    var it = t.head
    while it != nil:
      let nxt = it.next
      deallocShared(it)
      it = nxt
    t.head = nil
    t.tail = nil

proc deinitSharedList*[A](t: var SharedList[A]) =
  clear(t)
  deinitLock t.lock
