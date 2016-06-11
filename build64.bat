@echo off
REM Generated by niminst
SET CC=gcc
SET LINKER=gcc
SET COMP_FLAGS=-w -O3 -fno-strict-aliasing
SET LINK_FLAGS=
SET BIN_DIR=bin

if EXIST ..\koch.nim SET BIN_DIR=..\bin

if NOT EXIST %BIN_DIR%\nul mkdir %BIN_DIR%

REM call the compiler:

ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_nim.c -o c_code\1_2\compiler_nim.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_nim.c -o c_code\1_2\compiler_nim.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_system.c -o c_code\1_2\stdlib_system.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_system.c -o c_code\1_2\stdlib_system.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_commands.c -o c_code\1_2\compiler_commands.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_commands.c -o c_code\1_2\compiler_commands.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_os.c -o c_code\1_2\stdlib_os.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_os.c -o c_code\1_2\stdlib_os.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_strutils.c -o c_code\1_2\stdlib_strutils.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_strutils.c -o c_code\1_2\stdlib_strutils.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_parseutils.c -o c_code\1_2\stdlib_parseutils.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_parseutils.c -o c_code\1_2\stdlib_parseutils.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_math.c -o c_code\1_2\stdlib_math.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_math.c -o c_code\1_2\stdlib_math.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_times.c -o c_code\1_2\stdlib_times.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_times.c -o c_code\1_2\stdlib_times.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_winlean.c -o c_code\1_2\stdlib_winlean.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_winlean.c -o c_code\1_2\stdlib_winlean.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_dynlib.c -o c_code\1_2\stdlib_dynlib.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_dynlib.c -o c_code\1_2\stdlib_dynlib.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_msgs.c -o c_code\1_2\compiler_msgs.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_msgs.c -o c_code\1_2\compiler_msgs.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_options.c -o c_code\1_2\compiler_options.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_options.c -o c_code\1_2\compiler_options.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_lists.c -o c_code\1_2\compiler_lists.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_lists.c -o c_code\1_2\compiler_lists.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_strtabs.c -o c_code\1_2\stdlib_strtabs.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_strtabs.c -o c_code\1_2\stdlib_strtabs.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_hashes.c -o c_code\1_2\stdlib_hashes.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_hashes.c -o c_code\1_2\stdlib_hashes.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_etcpriv.c -o c_code\1_2\stdlib_etcpriv.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_etcpriv.c -o c_code\1_2\stdlib_etcpriv.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_osproc.c -o c_code\1_2\stdlib_osproc.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_osproc.c -o c_code\1_2\stdlib_osproc.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_streams.c -o c_code\1_2\stdlib_streams.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_streams.c -o c_code\1_2\stdlib_streams.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_cpuinfo.c -o c_code\1_2\stdlib_cpuinfo.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_cpuinfo.c -o c_code\1_2\stdlib_cpuinfo.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_sets.c -o c_code\1_2\stdlib_sets.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_sets.c -o c_code\1_2\stdlib_sets.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_tables.c -o c_code\1_2\stdlib_tables.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_tables.c -o c_code\1_2\stdlib_tables.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_ropes.c -o c_code\1_2\compiler_ropes.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_ropes.c -o c_code\1_2\compiler_ropes.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_platform.c -o c_code\1_2\compiler_platform.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_platform.c -o c_code\1_2\compiler_platform.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_terminal.c -o c_code\1_2\stdlib_terminal.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_terminal.c -o c_code\1_2\stdlib_terminal.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_macros.c -o c_code\1_2\stdlib_macros.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_macros.c -o c_code\1_2\stdlib_macros.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_nversion.c -o c_code\1_2\compiler_nversion.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_nversion.c -o c_code\1_2\compiler_nversion.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_condsyms.c -o c_code\1_2\compiler_condsyms.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_condsyms.c -o c_code\1_2\compiler_condsyms.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_idents.c -o c_code\1_2\compiler_idents.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_idents.c -o c_code\1_2\compiler_idents.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_extccomp.c -o c_code\1_2\compiler_extccomp.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_extccomp.c -o c_code\1_2\compiler_extccomp.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_securehash.c -o c_code\1_2\stdlib_securehash.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_securehash.c -o c_code\1_2\stdlib_securehash.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_debuginfo.c -o c_code\1_2\compiler_debuginfo.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_debuginfo.c -o c_code\1_2\compiler_debuginfo.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_marshal.c -o c_code\1_2\stdlib_marshal.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_marshal.c -o c_code\1_2\stdlib_marshal.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_typeinfo.c -o c_code\1_2\stdlib_typeinfo.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_typeinfo.c -o c_code\1_2\stdlib_typeinfo.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_json.c -o c_code\1_2\stdlib_json.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_json.c -o c_code\1_2\stdlib_json.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_lexbase.c -o c_code\1_2\stdlib_lexbase.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_lexbase.c -o c_code\1_2\stdlib_lexbase.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_unicode.c -o c_code\1_2\stdlib_unicode.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_unicode.c -o c_code\1_2\stdlib_unicode.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_intsets.c -o c_code\1_2\stdlib_intsets.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_intsets.c -o c_code\1_2\stdlib_intsets.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_wordrecg.c -o c_code\1_2\compiler_wordrecg.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_wordrecg.c -o c_code\1_2\compiler_wordrecg.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_nimblecmd.c -o c_code\1_2\compiler_nimblecmd.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_nimblecmd.c -o c_code\1_2\compiler_nimblecmd.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_parseopt.c -o c_code\1_2\stdlib_parseopt.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_parseopt.c -o c_code\1_2\stdlib_parseopt.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_lexer.c -o c_code\1_2\compiler_lexer.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_lexer.c -o c_code\1_2\compiler_lexer.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_nimlexbase.c -o c_code\1_2\compiler_nimlexbase.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_nimlexbase.c -o c_code\1_2\compiler_nimlexbase.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_llstream.c -o c_code\1_2\compiler_llstream.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_llstream.c -o c_code\1_2\compiler_llstream.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_nimconf.c -o c_code\1_2\compiler_nimconf.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_nimconf.c -o c_code\1_2\compiler_nimconf.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_main.c -o c_code\1_2\compiler_main.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_main.c -o c_code\1_2\compiler_main.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_ast.c -o c_code\1_2\compiler_ast.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_ast.c -o c_code\1_2\compiler_ast.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_idgen.c -o c_code\1_2\compiler_idgen.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_idgen.c -o c_code\1_2\compiler_idgen.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_astalgo.c -o c_code\1_2\compiler_astalgo.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_astalgo.c -o c_code\1_2\compiler_astalgo.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_rodutils.c -o c_code\1_2\compiler_rodutils.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_rodutils.c -o c_code\1_2\compiler_rodutils.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_syntaxes.c -o c_code\1_2\compiler_syntaxes.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_syntaxes.c -o c_code\1_2\compiler_syntaxes.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_parser.c -o c_code\1_2\compiler_parser.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_parser.c -o c_code\1_2\compiler_parser.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_pbraces.c -o c_code\1_2\compiler_pbraces.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_pbraces.c -o c_code\1_2\compiler_pbraces.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_filters.c -o c_code\1_2\compiler_filters.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_filters.c -o c_code\1_2\compiler_filters.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_renderer.c -o c_code\1_2\compiler_renderer.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_renderer.c -o c_code\1_2\compiler_renderer.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_filter_tmpl.c -o c_code\1_2\compiler_filter_tmpl.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_filter_tmpl.c -o c_code\1_2\compiler_filter_tmpl.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_rodread.c -o c_code\1_2\compiler_rodread.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_rodread.c -o c_code\1_2\compiler_rodread.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_types.c -o c_code\1_2\compiler_types.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_types.c -o c_code\1_2\compiler_types.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_trees.c -o c_code\1_2\compiler_trees.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_trees.c -o c_code\1_2\compiler_trees.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_memfiles.c -o c_code\1_2\stdlib_memfiles.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_memfiles.c -o c_code\1_2\stdlib_memfiles.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_rodwrite.c -o c_code\1_2\compiler_rodwrite.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_rodwrite.c -o c_code\1_2\compiler_rodwrite.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_passes.c -o c_code\1_2\compiler_passes.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_passes.c -o c_code\1_2\compiler_passes.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_magicsys.c -o c_code\1_2\compiler_magicsys.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_magicsys.c -o c_code\1_2\compiler_magicsys.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_nimsets.c -o c_code\1_2\compiler_nimsets.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_nimsets.c -o c_code\1_2\compiler_nimsets.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_bitsets.c -o c_code\1_2\compiler_bitsets.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_bitsets.c -o c_code\1_2\compiler_bitsets.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_importer.c -o c_code\1_2\compiler_importer.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_importer.c -o c_code\1_2\compiler_importer.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_lookups.c -o c_code\1_2\compiler_lookups.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_lookups.c -o c_code\1_2\compiler_lookups.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_semdata.c -o c_code\1_2\compiler_semdata.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_semdata.c -o c_code\1_2\compiler_semdata.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_treetab.c -o c_code\1_2\compiler_treetab.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_treetab.c -o c_code\1_2\compiler_treetab.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_vmdef.c -o c_code\1_2\compiler_vmdef.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_vmdef.c -o c_code\1_2\compiler_vmdef.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_prettybase.c -o c_code\1_2\compiler_prettybase.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_prettybase.c -o c_code\1_2\compiler_prettybase.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_sem.c -o c_code\1_2\compiler_sem.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_sem.c -o c_code\1_2\compiler_sem.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_semfold.c -o c_code\1_2\compiler_semfold.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_semfold.c -o c_code\1_2\compiler_semfold.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_saturate.c -o c_code\1_2\compiler_saturate.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_saturate.c -o c_code\1_2\compiler_saturate.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_procfind.c -o c_code\1_2\compiler_procfind.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_procfind.c -o c_code\1_2\compiler_procfind.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_pragmas.c -o c_code\1_2\compiler_pragmas.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_pragmas.c -o c_code\1_2\compiler_pragmas.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_semtypinst.c -o c_code\1_2\compiler_semtypinst.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_semtypinst.c -o c_code\1_2\compiler_semtypinst.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_sigmatch.c -o c_code\1_2\compiler_sigmatch.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_sigmatch.c -o c_code\1_2\compiler_sigmatch.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_parampatterns.c -o c_code\1_2\compiler_parampatterns.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_parampatterns.c -o c_code\1_2\compiler_parampatterns.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_pretty.c -o c_code\1_2\compiler_pretty.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_pretty.c -o c_code\1_2\compiler_pretty.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_docgen.c -o c_code\1_2\compiler_docgen.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_docgen.c -o c_code\1_2\compiler_docgen.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rstast.c -o c_code\1_2\docutils_rstast.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rstast.c -o c_code\1_2\docutils_rstast.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rst.c -o c_code\1_2\docutils_rst.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rst.c -o c_code\1_2\docutils_rst.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rstgen.c -o c_code\1_2\docutils_rstgen.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rstgen.c -o c_code\1_2\docutils_rstgen.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_highlite.c -o c_code\1_2\docutils_highlite.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_highlite.c -o c_code\1_2\docutils_highlite.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_sequtils.c -o c_code\1_2\stdlib_sequtils.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_sequtils.c -o c_code\1_2\stdlib_sequtils.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_algorithm.c -o c_code\1_2\stdlib_algorithm.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_algorithm.c -o c_code\1_2\stdlib_algorithm.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_sempass2.c -o c_code\1_2\compiler_sempass2.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_sempass2.c -o c_code\1_2\compiler_sempass2.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_guards.c -o c_code\1_2\compiler_guards.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_guards.c -o c_code\1_2\compiler_guards.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_writetracking.c -o c_code\1_2\compiler_writetracking.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_writetracking.c -o c_code\1_2\compiler_writetracking.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_xmltree.c -o c_code\1_2\stdlib_xmltree.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_xmltree.c -o c_code\1_2\stdlib_xmltree.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_cgi.c -o c_code\1_2\stdlib_cgi.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_cgi.c -o c_code\1_2\stdlib_cgi.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_cookies.c -o c_code\1_2\stdlib_cookies.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_cookies.c -o c_code\1_2\stdlib_cookies.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_typesrenderer.c -o c_code\1_2\compiler_typesrenderer.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_typesrenderer.c -o c_code\1_2\compiler_typesrenderer.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_transf.c -o c_code\1_2\compiler_transf.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_transf.c -o c_code\1_2\compiler_transf.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_cgmeth.c -o c_code\1_2\compiler_cgmeth.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_cgmeth.c -o c_code\1_2\compiler_cgmeth.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_lambdalifting.c -o c_code\1_2\compiler_lambdalifting.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_lambdalifting.c -o c_code\1_2\compiler_lambdalifting.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_lowerings.c -o c_code\1_2\compiler_lowerings.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_lowerings.c -o c_code\1_2\compiler_lowerings.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_vm.c -o c_code\1_2\compiler_vm.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_vm.c -o c_code\1_2\compiler_vm.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_vmgen.c -o c_code\1_2\compiler_vmgen.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_vmgen.c -o c_code\1_2\compiler_vmgen.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_vmdeps.c -o c_code\1_2\compiler_vmdeps.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_vmdeps.c -o c_code\1_2\compiler_vmdeps.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_vmmarshal.c -o c_code\1_2\compiler_vmmarshal.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_vmmarshal.c -o c_code\1_2\compiler_vmmarshal.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_evaltempl.c -o c_code\1_2\compiler_evaltempl.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_evaltempl.c -o c_code\1_2\compiler_evaltempl.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_aliases.c -o c_code\1_2\compiler_aliases.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_aliases.c -o c_code\1_2\compiler_aliases.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_patterns.c -o c_code\1_2\compiler_patterns.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_patterns.c -o c_code\1_2\compiler_patterns.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_semmacrosanity.c -o c_code\1_2\compiler_semmacrosanity.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_semmacrosanity.c -o c_code\1_2\compiler_semmacrosanity.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_semparallel.c -o c_code\1_2\compiler_semparallel.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_semparallel.c -o c_code\1_2\compiler_semparallel.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_pluginsupport.c -o c_code\1_2\compiler_pluginsupport.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_pluginsupport.c -o c_code\1_2\compiler_pluginsupport.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_active.c -o c_code\1_2\compiler_active.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_active.c -o c_code\1_2\compiler_active.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_locals.c -o c_code\1_2\compiler_locals.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_locals.c -o c_code\1_2\compiler_locals.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_itersgen.c -o c_code\1_2\compiler_itersgen.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_itersgen.c -o c_code\1_2\compiler_itersgen.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_cgen.c -o c_code\1_2\compiler_cgen.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_cgen.c -o c_code\1_2\compiler_cgen.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_ccgutils.c -o c_code\1_2\compiler_ccgutils.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_ccgutils.c -o c_code\1_2\compiler_ccgutils.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_cgendata.c -o c_code\1_2\compiler_cgendata.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_cgendata.c -o c_code\1_2\compiler_cgendata.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_ccgmerge.c -o c_code\1_2\compiler_ccgmerge.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_ccgmerge.c -o c_code\1_2\compiler_ccgmerge.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_jsgen.c -o c_code\1_2\compiler_jsgen.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_jsgen.c -o c_code\1_2\compiler_jsgen.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_passaux.c -o c_code\1_2\compiler_passaux.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_passaux.c -o c_code\1_2\compiler_passaux.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_depends.c -o c_code\1_2\compiler_depends.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_depends.c -o c_code\1_2\compiler_depends.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_docgen2.c -o c_code\1_2\compiler_docgen2.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_docgen2.c -o c_code\1_2\compiler_docgen2.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_service.c -o c_code\1_2\compiler_service.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_service.c -o c_code\1_2\compiler_service.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_net.c -o c_code\1_2\stdlib_net.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_net.c -o c_code\1_2\stdlib_net.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_nativesockets.c -o c_code\1_2\stdlib_nativesockets.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_nativesockets.c -o c_code\1_2\stdlib_nativesockets.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_modules.c -o c_code\1_2\compiler_modules.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_modules.c -o c_code\1_2\compiler_modules.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_nodejs.c -o c_code\1_2\compiler_nodejs.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_nodejs.c -o c_code\1_2\compiler_nodejs.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_scriptconfig.c -o c_code\1_2\compiler_scriptconfig.o
CALL %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\compiler_scriptconfig.c -o c_code\1_2\compiler_scriptconfig.o
IF ERRORLEVEL 1 (GOTO:END)

ECHO %LINKER% -o %BIN_DIR%\nim.exe  c_code\1_2\compiler_nim.o c_code\1_2\stdlib_system.o c_code\1_2\compiler_commands.o c_code\1_2\stdlib_os.o c_code\1_2\stdlib_strutils.o c_code\1_2\stdlib_parseutils.o c_code\1_2\stdlib_math.o c_code\1_2\stdlib_times.o c_code\1_2\stdlib_winlean.o c_code\1_2\stdlib_dynlib.o c_code\1_2\compiler_msgs.o c_code\1_2\compiler_options.o c_code\1_2\compiler_lists.o c_code\1_2\stdlib_strtabs.o c_code\1_2\stdlib_hashes.o c_code\1_2\stdlib_etcpriv.o c_code\1_2\stdlib_osproc.o c_code\1_2\stdlib_streams.o c_code\1_2\stdlib_cpuinfo.o c_code\1_2\stdlib_sets.o c_code\1_2\stdlib_tables.o c_code\1_2\compiler_ropes.o c_code\1_2\compiler_platform.o c_code\1_2\stdlib_terminal.o c_code\1_2\stdlib_macros.o c_code\1_2\compiler_nversion.o c_code\1_2\compiler_condsyms.o c_code\1_2\compiler_idents.o c_code\1_2\compiler_extccomp.o c_code\1_2\stdlib_securehash.o c_code\1_2\compiler_debuginfo.o c_code\1_2\stdlib_marshal.o c_code\1_2\stdlib_typeinfo.o c_code\1_2\stdlib_json.o c_code\1_2\stdlib_lexbase.o c_code\1_2\stdlib_unicode.o c_code\1_2\stdlib_intsets.o c_code\1_2\compiler_wordrecg.o c_code\1_2\compiler_nimblecmd.o c_code\1_2\stdlib_parseopt.o c_code\1_2\compiler_lexer.o c_code\1_2\compiler_nimlexbase.o c_code\1_2\compiler_llstream.o c_code\1_2\compiler_nimconf.o c_code\1_2\compiler_main.o c_code\1_2\compiler_ast.o c_code\1_2\compiler_idgen.o c_code\1_2\compiler_astalgo.o c_code\1_2\compiler_rodutils.o c_code\1_2\compiler_syntaxes.o c_code\1_2\compiler_parser.o c_code\1_2\compiler_pbraces.o c_code\1_2\compiler_filters.o c_code\1_2\compiler_renderer.o c_code\1_2\compiler_filter_tmpl.o c_code\1_2\compiler_rodread.o c_code\1_2\compiler_types.o c_code\1_2\compiler_trees.o c_code\1_2\stdlib_memfiles.o c_code\1_2\compiler_rodwrite.o c_code\1_2\compiler_passes.o c_code\1_2\compiler_magicsys.o c_code\1_2\compiler_nimsets.o c_code\1_2\compiler_bitsets.o c_code\1_2\compiler_importer.o c_code\1_2\compiler_lookups.o c_code\1_2\compiler_semdata.o c_code\1_2\compiler_treetab.o c_code\1_2\compiler_vmdef.o c_code\1_2\compiler_prettybase.o c_code\1_2\compiler_sem.o c_code\1_2\compiler_semfold.o c_code\1_2\compiler_saturate.o c_code\1_2\compiler_procfind.o c_code\1_2\compiler_pragmas.o c_code\1_2\compiler_semtypinst.o c_code\1_2\compiler_sigmatch.o c_code\1_2\compiler_parampatterns.o c_code\1_2\compiler_pretty.o c_code\1_2\compiler_docgen.o c_code\1_2\docutils_rstast.o c_code\1_2\docutils_rst.o c_code\1_2\docutils_rstgen.o c_code\1_2\docutils_highlite.o c_code\1_2\stdlib_sequtils.o c_code\1_2\stdlib_algorithm.o c_code\1_2\compiler_sempass2.o c_code\1_2\compiler_guards.o c_code\1_2\compiler_writetracking.o c_code\1_2\stdlib_xmltree.o c_code\1_2\stdlib_cgi.o c_code\1_2\stdlib_cookies.o c_code\1_2\compiler_typesrenderer.o c_code\1_2\compiler_transf.o c_code\1_2\compiler_cgmeth.o c_code\1_2\compiler_lambdalifting.o c_code\1_2\compiler_lowerings.o c_code\1_2\compiler_vm.o c_code\1_2\compiler_vmgen.o c_code\1_2\compiler_vmdeps.o c_code\1_2\compiler_vmmarshal.o c_code\1_2\compiler_evaltempl.o c_code\1_2\compiler_aliases.o c_code\1_2\compiler_patterns.o c_code\1_2\compiler_semmacrosanity.o c_code\1_2\compiler_semparallel.o c_code\1_2\compiler_pluginsupport.o c_code\1_2\compiler_active.o c_code\1_2\compiler_locals.o c_code\1_2\compiler_itersgen.o c_code\1_2\compiler_cgen.o c_code\1_2\compiler_ccgutils.o c_code\1_2\compiler_cgendata.o c_code\1_2\compiler_ccgmerge.o c_code\1_2\compiler_jsgen.o c_code\1_2\compiler_passaux.o c_code\1_2\compiler_depends.o c_code\1_2\compiler_docgen2.o c_code\1_2\compiler_service.o c_code\1_2\stdlib_net.o c_code\1_2\stdlib_nativesockets.o c_code\1_2\compiler_modules.o c_code\1_2\compiler_nodejs.o c_code\1_2\compiler_scriptconfig.o %LINK_FLAGS%
CALL %LINKER% -o %BIN_DIR%\nim.exe  c_code\1_2\compiler_nim.o c_code\1_2\stdlib_system.o c_code\1_2\compiler_commands.o c_code\1_2\stdlib_os.o c_code\1_2\stdlib_strutils.o c_code\1_2\stdlib_parseutils.o c_code\1_2\stdlib_math.o c_code\1_2\stdlib_times.o c_code\1_2\stdlib_winlean.o c_code\1_2\stdlib_dynlib.o c_code\1_2\compiler_msgs.o c_code\1_2\compiler_options.o c_code\1_2\compiler_lists.o c_code\1_2\stdlib_strtabs.o c_code\1_2\stdlib_hashes.o c_code\1_2\stdlib_etcpriv.o c_code\1_2\stdlib_osproc.o c_code\1_2\stdlib_streams.o c_code\1_2\stdlib_cpuinfo.o c_code\1_2\stdlib_sets.o c_code\1_2\stdlib_tables.o c_code\1_2\compiler_ropes.o c_code\1_2\compiler_platform.o c_code\1_2\stdlib_terminal.o c_code\1_2\stdlib_macros.o c_code\1_2\compiler_nversion.o c_code\1_2\compiler_condsyms.o c_code\1_2\compiler_idents.o c_code\1_2\compiler_extccomp.o c_code\1_2\stdlib_securehash.o c_code\1_2\compiler_debuginfo.o c_code\1_2\stdlib_marshal.o c_code\1_2\stdlib_typeinfo.o c_code\1_2\stdlib_json.o c_code\1_2\stdlib_lexbase.o c_code\1_2\stdlib_unicode.o c_code\1_2\stdlib_intsets.o c_code\1_2\compiler_wordrecg.o c_code\1_2\compiler_nimblecmd.o c_code\1_2\stdlib_parseopt.o c_code\1_2\compiler_lexer.o c_code\1_2\compiler_nimlexbase.o c_code\1_2\compiler_llstream.o c_code\1_2\compiler_nimconf.o c_code\1_2\compiler_main.o c_code\1_2\compiler_ast.o c_code\1_2\compiler_idgen.o c_code\1_2\compiler_astalgo.o c_code\1_2\compiler_rodutils.o c_code\1_2\compiler_syntaxes.o c_code\1_2\compiler_parser.o c_code\1_2\compiler_pbraces.o c_code\1_2\compiler_filters.o c_code\1_2\compiler_renderer.o c_code\1_2\compiler_filter_tmpl.o c_code\1_2\compiler_rodread.o c_code\1_2\compiler_types.o c_code\1_2\compiler_trees.o c_code\1_2\stdlib_memfiles.o c_code\1_2\compiler_rodwrite.o c_code\1_2\compiler_passes.o c_code\1_2\compiler_magicsys.o c_code\1_2\compiler_nimsets.o c_code\1_2\compiler_bitsets.o c_code\1_2\compiler_importer.o c_code\1_2\compiler_lookups.o c_code\1_2\compiler_semdata.o c_code\1_2\compiler_treetab.o c_code\1_2\compiler_vmdef.o c_code\1_2\compiler_prettybase.o c_code\1_2\compiler_sem.o c_code\1_2\compiler_semfold.o c_code\1_2\compiler_saturate.o c_code\1_2\compiler_procfind.o c_code\1_2\compiler_pragmas.o c_code\1_2\compiler_semtypinst.o c_code\1_2\compiler_sigmatch.o c_code\1_2\compiler_parampatterns.o c_code\1_2\compiler_pretty.o c_code\1_2\compiler_docgen.o c_code\1_2\docutils_rstast.o c_code\1_2\docutils_rst.o c_code\1_2\docutils_rstgen.o c_code\1_2\docutils_highlite.o c_code\1_2\stdlib_sequtils.o c_code\1_2\stdlib_algorithm.o c_code\1_2\compiler_sempass2.o c_code\1_2\compiler_guards.o c_code\1_2\compiler_writetracking.o c_code\1_2\stdlib_xmltree.o c_code\1_2\stdlib_cgi.o c_code\1_2\stdlib_cookies.o c_code\1_2\compiler_typesrenderer.o c_code\1_2\compiler_transf.o c_code\1_2\compiler_cgmeth.o c_code\1_2\compiler_lambdalifting.o c_code\1_2\compiler_lowerings.o c_code\1_2\compiler_vm.o c_code\1_2\compiler_vmgen.o c_code\1_2\compiler_vmdeps.o c_code\1_2\compiler_vmmarshal.o c_code\1_2\compiler_evaltempl.o c_code\1_2\compiler_aliases.o c_code\1_2\compiler_patterns.o c_code\1_2\compiler_semmacrosanity.o c_code\1_2\compiler_semparallel.o c_code\1_2\compiler_pluginsupport.o c_code\1_2\compiler_active.o c_code\1_2\compiler_locals.o c_code\1_2\compiler_itersgen.o c_code\1_2\compiler_cgen.o c_code\1_2\compiler_ccgutils.o c_code\1_2\compiler_cgendata.o c_code\1_2\compiler_ccgmerge.o c_code\1_2\compiler_jsgen.o c_code\1_2\compiler_passaux.o c_code\1_2\compiler_depends.o c_code\1_2\compiler_docgen2.o c_code\1_2\compiler_service.o c_code\1_2\stdlib_net.o c_code\1_2\stdlib_nativesockets.o c_code\1_2\compiler_modules.o c_code\1_2\compiler_nodejs.o c_code\1_2\compiler_scriptconfig.o %LINK_FLAGS%


:END
IF ERRORLEVEL 1 (
    ECHO FAILURE
    ECHO.
    ECHO CSource compilation failed. Please check that the gcc compiler is in
    ECHO the PATH environment variable, and that you are calling the batch script
    ECHO that matches the target architecture of the compiler.
) ELSE (
    ECHO SUCCESS
)
exit /b %ERRORLEVEL%

