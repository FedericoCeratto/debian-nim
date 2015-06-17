discard """
  output: "Mapper2"
"""

# bug #2590

type
  Console* = ref object
    mapper*: Mapper

  Mapper* = ref object of RootObj

  Mapper2* = ref object of Mapper

proc newMapper2*: Mapper2 =
  new result

proc newMapper*: Mapper =
  result = newMapper2()

method step*(m: Mapper2) =
  echo "Mapper2"

method step*(m: Mapper) =
  echo "Mapper"

var console = Console()
console.mapper = newMapper()
console.mapper.step()
