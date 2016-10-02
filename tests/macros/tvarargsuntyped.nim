discard """
  output: '''Let's go!
(left: 2, r: 7, x: 8, height: 4, s: test, width: 3, y: 9, top: 1, g: 7, b: 8)
(left: 2, r: 7, x: 8, height: 4, s: text, width: 3, y: 9, top: 1, g: 7, b: 8)
(left: 2, r: 7, x: 8, height: 4, s: text, width: 3, y: 9, top: 4, g: 7, b: 8)
(left: 2, r: 7, x: 8, height: 4, s: test, width: 3, y: 9, top: 1, g: 7, b: 8)'''
"""

import macros

proc internalBar(top, left, width, height: cint, s: string, x, y: int, r,g,b: int) =
  echo locals()

# we need these dummy constructors due to the wrong implementation
# of 'varargs[untyped]' in the compiler:

proc point(x, y: int): int = discard
proc color(r, g, b: int): int = discard
proc rect(a, b, c, d: int): int = discard

template declareUnpackingMacro(nimname,extname) =
  macro nimname(n: varargs[untyped]): untyped =
    var s: string = astToStr(extname) & "("
    var first = true
    echo repr n
    for x in n.children:
      var unpack = false
      if x.kind in nnkCallKinds:
        case $x[0]
        of "point":
          expectLen(x, 3)
          unpack = true
        of "rect":
          expectLen(x, 5)
          unpack = true
        of "color":
          expectLen(x, 4)
          unpack = true
        else: discard
      if unpack:
        for i in 1..<x.len:
          if first:
            first = false
          else:
            add(s, ", ")
          add(s, repr(x[i]))
      else:
        if first:
          first = false
        else:
          add(s, ", ")
        add(s, repr(x))

    add(s, ")")
    echo s
    result = parseStmt(s)

declareUnpackingMacro(bar,internalBar)

type MyInt = distinct int

proc myInt(i: int): MyInt = cast[MyInt](i)

converter toCInt(mi: MyInt): cint = cast[cint](mi)

echo "Let's go!"

bar(rect(1, 2, 3, 4), "test", point(8, 9), color(7,7,8))

bar(1,2,3,4,"text",8,9,7,7,8)

bar(myInt(4),2,3,4,"text",8,9,7,7,8)

let top: cint = 1
let left: cint = 2
let width: cint = 3
let height: cint = 4

bar(rect(top, left, width, height), "test", point(8, 9), color(7,7,8))
