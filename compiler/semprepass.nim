#
#
#           The Nim Compiler
#        (c) Copyright 2016 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

# This include implements the new semantic prepass so we can ban
# forward decls from Nim for good.

proc determineProcType(c: PContext; n: PNode; s: PSym) =
  pushOwner(s)
  openScope(c)
  var gp: PNode
  if n.sons[genericParamsPos].kind != nkEmpty:
    n.sons[genericParamsPos] = semGenericParamList(c, n.sons[genericParamsPos])
    gp = n.sons[genericParamsPos]
  else:
    gp = newNodeI(nkGenericParams, n.info)
  # process parameters:
  if n.sons[paramsPos].kind != nkEmpty:
    semParamList(c, n.sons[paramsPos], gp, s)
    if sonsLen(gp) > 0:
      if n.sons[genericParamsPos].kind == nkEmpty:
        # we have a list of implicit type parameters:
        n.sons[genericParamsPos] = gp
        # check for semantics again:
        # semParamList(c, n.sons[ParamsPos], nil, s)
  else:
    s.typ = newProcType(c, n.info)
  if tfTriggersCompileTime in s.typ.flags: incl(s.flags, sfCompileTime)
  if n.sons[patternPos].kind != nkEmpty:
    n.sons[patternPos] = semPattern(c, n.sons[patternPos])
  if s.kind == skIterator:
    s.typ.flags.incl(tfIterator)
  closeScope(c)
  popOwner()

proc registerRoutineDecl(c: PContext; n: PNode; kind: TSymKind) =
  case c.phase
  of stepRegisterSymbol:
    if n[namePos].kind notin {nkEmpty, nkSym}:
      s = semIdentDef(c, n.sons[0], kind)
      n.sons[namePos] = newSymNode(s)

      addInterfaceOverloadableSymAt(c, c.currentScope, s)
      s.flags.incl sfForward
  of stepDetermineType:
    if n[namePos].kind == skSym:
      let s = n[namePos].sym
      s.owner = getCurrOwner()
      if s.typ == nil:
        determineProcType(c, n, s)
  of stepCompileBody: discard "traditional pass implemented in the legacy"

proc importModulePass1(currentModule: PSym; fileIdx: int32;
                       isCyclic: bool): PSym {.nimcall.} =
  if isCyclic:
    gImportModule(currentModule, fileIdx

proc prePass(c: PContext; n: PNode): PNode =
  # first pass: add all global symbols to the symbol table.
  #   special case: type T = someTempl(X) is not
  # second pass: resolve proc signatures
  # third pass: resolve proc bodies (the traditional pass that
  # requires var/let to come before the proc).
  case n.kind
  of nkConstSection: result = semConst(c, n)
  of nkTypeSection:
    case c.phase
    of stepRegisterSymbol:
      incl n.flags, nfSem
      typeSectionLeftSidePass(c, n)
    of stepDetermineType: typeSectionRightSidePass(c, n)
    of stepCompileBody: typeSectionFinalPass(c, n)
    result = n
  of nkUsingStmt:
    if c.phase == stepRegisterSymbol:
      result = semUsing(c, n)
  of nkIteratorDef: registerRoutineDecl(c, n, skIterator)
  of nkProcDef: registerRoutineDecl(c, n, skProc)
  of nkMethodDef: registerRoutineDecl(c, n, skMethod)
  of nkConverterDef: registerRoutineDecl(c, n, skConverter)
  of nkMacroDef: registerRoutineDecl(c, n, skMacro)
  of nkTemplateDef: registerRoutineDecl(c, n, skTemplate)
  of nkImportStmt:
    if c.phase == stepRegisterSymbol:
      result = evalImport(c, n, importModulePass1)
  of nkImportExceptStmt:
    result = evalImportExcept(c, n, importModulePass1)
  of nkFromStmt:
    result = evalFrom(c, n, importModulePass1)
  of nkIncludeStmt:
    result = evalInclude(c, n, importModulePass1)
  of nkExportStmt, nkExportExceptStmt:
    result = semExport(c, n)
  of nkStmtList:
    for i in 0 .. < n.len:
      n.sons[0] = firstPass(c, n.sons[i])
    result = n

proc semAllTopLevelDecls(c: PContext; n: PNode): PNode =
  proc gatherStmts(c: PContext; n: PNode; result: PNode) {.nimcall.} =
    case n.kind
    of nkIncludeStmt:
      for i in 0..<n.len:
        var f = checkModuleName(n.sons[i])
        if f != InvalidFileIDX:
          if containsOrIncl(c.includedFiles, f):
            localError(n.info, errRecursiveDependencyX, f.toFilename)
          else:
            let code = gIncludeFile(c.module, f)
            gatherStmts c, code, result
            excl(c.includedFiles, f)
    of nkStmtList:
      for i in 0 ..< n.len:
        gatherStmts(c, n.sons[i], result)
    of nkTypeSection:
    of nkCallKinds:
      # check for 'recimport foo':
      if n[0].kind == nkIdent and n[0].ident.id == getIdent"cyclicimport":

      else:
        result.add n
    else:
      result.add n

  result = newNodeI(nkStmtList, n.info)
  gatherStmts(c, n, result)

  template rec(name) =
    for i in 0 ..< result.len:
      if result[i].kind == nkTypeSection:
        name(c, result[i])

  rec typeSectionRightSidePass
  rec typeSectionFinalPass

