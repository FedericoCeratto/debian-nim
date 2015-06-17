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

ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_nim.c -o c_code\1_2\nimsrc_nim.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_nim.c -o c_code\1_2\nimsrc_nim.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_system.c -o c_code\1_2\stdlib_system.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_system.c -o c_code\1_2\stdlib_system.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_testability.c -o c_code\1_2\nimsrc_testability.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_testability.c -o c_code\1_2\nimsrc_testability.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_commands.c -o c_code\1_2\nimsrc_commands.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_commands.c -o c_code\1_2\nimsrc_commands.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_os.c -o c_code\1_2\stdlib_os.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_os.c -o c_code\1_2\stdlib_os.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_strutils.c -o c_code\1_2\stdlib_strutils.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_strutils.c -o c_code\1_2\stdlib_strutils.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_parseutils.c -o c_code\1_2\stdlib_parseutils.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_parseutils.c -o c_code\1_2\stdlib_parseutils.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_times.c -o c_code\1_2\stdlib_times.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_times.c -o c_code\1_2\stdlib_times.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_winlean.c -o c_code\1_2\stdlib_winlean.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_winlean.c -o c_code\1_2\stdlib_winlean.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_msgs.c -o c_code\1_2\nimsrc_msgs.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_msgs.c -o c_code\1_2\nimsrc_msgs.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_options.c -o c_code\1_2\nimsrc_options.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_options.c -o c_code\1_2\nimsrc_options.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_lists.c -o c_code\1_2\nimsrc_lists.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_lists.c -o c_code\1_2\nimsrc_lists.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_strtabs.c -o c_code\1_2\stdlib_strtabs.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_strtabs.c -o c_code\1_2\stdlib_strtabs.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_hashes.c -o c_code\1_2\stdlib_hashes.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_hashes.c -o c_code\1_2\stdlib_hashes.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_osproc.c -o c_code\1_2\stdlib_osproc.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_osproc.c -o c_code\1_2\stdlib_osproc.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_streams.c -o c_code\1_2\stdlib_streams.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_streams.c -o c_code\1_2\stdlib_streams.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_cpuinfo.c -o c_code\1_2\stdlib_cpuinfo.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_cpuinfo.c -o c_code\1_2\stdlib_cpuinfo.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_sets.c -o c_code\1_2\stdlib_sets.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_sets.c -o c_code\1_2\stdlib_sets.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_math.c -o c_code\1_2\stdlib_math.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_math.c -o c_code\1_2\stdlib_math.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_tables.c -o c_code\1_2\stdlib_tables.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_tables.c -o c_code\1_2\stdlib_tables.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_ropes.c -o c_code\1_2\nimsrc_ropes.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_ropes.c -o c_code\1_2\nimsrc_ropes.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_platform.c -o c_code\1_2\nimsrc_platform.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_platform.c -o c_code\1_2\nimsrc_platform.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_nversion.c -o c_code\1_2\nimsrc_nversion.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_nversion.c -o c_code\1_2\nimsrc_nversion.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_condsyms.c -o c_code\1_2\nimsrc_condsyms.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_condsyms.c -o c_code\1_2\nimsrc_condsyms.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_idents.c -o c_code\1_2\nimsrc_idents.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_idents.c -o c_code\1_2\nimsrc_idents.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_extccomp.c -o c_code\1_2\nimsrc_extccomp.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_extccomp.c -o c_code\1_2\nimsrc_extccomp.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_crc.c -o c_code\1_2\nimsrc_crc.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_crc.c -o c_code\1_2\nimsrc_crc.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_wordrecg.c -o c_code\1_2\nimsrc_wordrecg.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_wordrecg.c -o c_code\1_2\nimsrc_wordrecg.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_nimblecmd.c -o c_code\1_2\nimsrc_nimblecmd.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_nimblecmd.c -o c_code\1_2\nimsrc_nimblecmd.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_parseopt.c -o c_code\1_2\stdlib_parseopt.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_parseopt.c -o c_code\1_2\stdlib_parseopt.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_lexer.c -o c_code\1_2\nimsrc_lexer.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_lexer.c -o c_code\1_2\nimsrc_lexer.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_nimlexbase.c -o c_code\1_2\nimsrc_nimlexbase.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_nimlexbase.c -o c_code\1_2\nimsrc_nimlexbase.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_llstream.c -o c_code\1_2\nimsrc_llstream.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_llstream.c -o c_code\1_2\nimsrc_llstream.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_nimconf.c -o c_code\1_2\nimsrc_nimconf.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_nimconf.c -o c_code\1_2\nimsrc_nimconf.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_main.c -o c_code\1_2\nimsrc_main.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_main.c -o c_code\1_2\nimsrc_main.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_ast.c -o c_code\1_2\nimsrc_ast.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_ast.c -o c_code\1_2\nimsrc_ast.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_intsets.c -o c_code\1_2\stdlib_intsets.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_intsets.c -o c_code\1_2\stdlib_intsets.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_idgen.c -o c_code\1_2\nimsrc_idgen.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_idgen.c -o c_code\1_2\nimsrc_idgen.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_astalgo.c -o c_code\1_2\nimsrc_astalgo.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_astalgo.c -o c_code\1_2\nimsrc_astalgo.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_rodutils.c -o c_code\1_2\nimsrc_rodutils.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_rodutils.c -o c_code\1_2\nimsrc_rodutils.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_syntaxes.c -o c_code\1_2\nimsrc_syntaxes.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_syntaxes.c -o c_code\1_2\nimsrc_syntaxes.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_parser.c -o c_code\1_2\nimsrc_parser.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_parser.c -o c_code\1_2\nimsrc_parser.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_pbraces.c -o c_code\1_2\nimsrc_pbraces.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_pbraces.c -o c_code\1_2\nimsrc_pbraces.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_filters.c -o c_code\1_2\nimsrc_filters.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_filters.c -o c_code\1_2\nimsrc_filters.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_renderer.c -o c_code\1_2\nimsrc_renderer.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_renderer.c -o c_code\1_2\nimsrc_renderer.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_filter_tmpl.c -o c_code\1_2\nimsrc_filter_tmpl.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_filter_tmpl.c -o c_code\1_2\nimsrc_filter_tmpl.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_rodread.c -o c_code\1_2\nimsrc_rodread.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_rodread.c -o c_code\1_2\nimsrc_rodread.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_types.c -o c_code\1_2\nimsrc_types.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_types.c -o c_code\1_2\nimsrc_types.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_trees.c -o c_code\1_2\nimsrc_trees.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_trees.c -o c_code\1_2\nimsrc_trees.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_memfiles.c -o c_code\1_2\stdlib_memfiles.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_memfiles.c -o c_code\1_2\stdlib_memfiles.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_rodwrite.c -o c_code\1_2\nimsrc_rodwrite.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_rodwrite.c -o c_code\1_2\nimsrc_rodwrite.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_passes.c -o c_code\1_2\nimsrc_passes.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_passes.c -o c_code\1_2\nimsrc_passes.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_magicsys.c -o c_code\1_2\nimsrc_magicsys.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_magicsys.c -o c_code\1_2\nimsrc_magicsys.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_nimsets.c -o c_code\1_2\nimsrc_nimsets.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_nimsets.c -o c_code\1_2\nimsrc_nimsets.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_bitsets.c -o c_code\1_2\nimsrc_bitsets.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_bitsets.c -o c_code\1_2\nimsrc_bitsets.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_importer.c -o c_code\1_2\nimsrc_importer.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_importer.c -o c_code\1_2\nimsrc_importer.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_lookups.c -o c_code\1_2\nimsrc_lookups.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_lookups.c -o c_code\1_2\nimsrc_lookups.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_semdata.c -o c_code\1_2\nimsrc_semdata.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_semdata.c -o c_code\1_2\nimsrc_semdata.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_treetab.c -o c_code\1_2\nimsrc_treetab.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_treetab.c -o c_code\1_2\nimsrc_treetab.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_vmdef.c -o c_code\1_2\nimsrc_vmdef.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_vmdef.c -o c_code\1_2\nimsrc_vmdef.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_prettybase.c -o c_code\1_2\nimsrc_prettybase.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_prettybase.c -o c_code\1_2\nimsrc_prettybase.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_lexbase.c -o c_code\1_2\stdlib_lexbase.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_lexbase.c -o c_code\1_2\stdlib_lexbase.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_sem.c -o c_code\1_2\nimsrc_sem.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_sem.c -o c_code\1_2\nimsrc_sem.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_semfold.c -o c_code\1_2\nimsrc_semfold.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_semfold.c -o c_code\1_2\nimsrc_semfold.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_saturate.c -o c_code\1_2\nimsrc_saturate.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_saturate.c -o c_code\1_2\nimsrc_saturate.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_procfind.c -o c_code\1_2\nimsrc_procfind.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_procfind.c -o c_code\1_2\nimsrc_procfind.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_pragmas.c -o c_code\1_2\nimsrc_pragmas.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_pragmas.c -o c_code\1_2\nimsrc_pragmas.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_semtypinst.c -o c_code\1_2\nimsrc_semtypinst.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_semtypinst.c -o c_code\1_2\nimsrc_semtypinst.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_sigmatch.c -o c_code\1_2\nimsrc_sigmatch.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_sigmatch.c -o c_code\1_2\nimsrc_sigmatch.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_parampatterns.c -o c_code\1_2\nimsrc_parampatterns.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_parampatterns.c -o c_code\1_2\nimsrc_parampatterns.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_pretty.c -o c_code\1_2\nimsrc_pretty.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_pretty.c -o c_code\1_2\nimsrc_pretty.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_docgen.c -o c_code\1_2\nimsrc_docgen.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_docgen.c -o c_code\1_2\nimsrc_docgen.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rstast.c -o c_code\1_2\docutils_rstast.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rstast.c -o c_code\1_2\docutils_rstast.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_json.c -o c_code\1_2\stdlib_json.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_json.c -o c_code\1_2\stdlib_json.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_unicode.c -o c_code\1_2\stdlib_unicode.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_unicode.c -o c_code\1_2\stdlib_unicode.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_macros.c -o c_code\1_2\stdlib_macros.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_macros.c -o c_code\1_2\stdlib_macros.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rst.c -o c_code\1_2\docutils_rst.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rst.c -o c_code\1_2\docutils_rst.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rstgen.c -o c_code\1_2\docutils_rstgen.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rstgen.c -o c_code\1_2\docutils_rstgen.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_highlite.c -o c_code\1_2\docutils_highlite.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_highlite.c -o c_code\1_2\docutils_highlite.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_sequtils.c -o c_code\1_2\stdlib_sequtils.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_sequtils.c -o c_code\1_2\stdlib_sequtils.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_algorithm.c -o c_code\1_2\stdlib_algorithm.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_algorithm.c -o c_code\1_2\stdlib_algorithm.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_sempass2.c -o c_code\1_2\nimsrc_sempass2.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_sempass2.c -o c_code\1_2\nimsrc_sempass2.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_guards.c -o c_code\1_2\nimsrc_guards.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_guards.c -o c_code\1_2\nimsrc_guards.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_xmltree.c -o c_code\1_2\stdlib_xmltree.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_xmltree.c -o c_code\1_2\stdlib_xmltree.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_cgi.c -o c_code\1_2\stdlib_cgi.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_cgi.c -o c_code\1_2\stdlib_cgi.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_cookies.c -o c_code\1_2\stdlib_cookies.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_cookies.c -o c_code\1_2\stdlib_cookies.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_typesrenderer.c -o c_code\1_2\nimsrc_typesrenderer.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_typesrenderer.c -o c_code\1_2\nimsrc_typesrenderer.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_transf.c -o c_code\1_2\nimsrc_transf.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_transf.c -o c_code\1_2\nimsrc_transf.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_cgmeth.c -o c_code\1_2\nimsrc_cgmeth.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_cgmeth.c -o c_code\1_2\nimsrc_cgmeth.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_lambdalifting.c -o c_code\1_2\nimsrc_lambdalifting.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_lambdalifting.c -o c_code\1_2\nimsrc_lambdalifting.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_lowerings.c -o c_code\1_2\nimsrc_lowerings.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_lowerings.c -o c_code\1_2\nimsrc_lowerings.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_vm.c -o c_code\1_2\nimsrc_vm.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_vm.c -o c_code\1_2\nimsrc_vm.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_vmgen.c -o c_code\1_2\nimsrc_vmgen.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_vmgen.c -o c_code\1_2\nimsrc_vmgen.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_unsigned.c -o c_code\1_2\stdlib_unsigned.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_unsigned.c -o c_code\1_2\stdlib_unsigned.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_vmdeps.c -o c_code\1_2\nimsrc_vmdeps.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_vmdeps.c -o c_code\1_2\nimsrc_vmdeps.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_vmmarshal.c -o c_code\1_2\nimsrc_vmmarshal.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_vmmarshal.c -o c_code\1_2\nimsrc_vmmarshal.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_evaltempl.c -o c_code\1_2\nimsrc_evaltempl.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_evaltempl.c -o c_code\1_2\nimsrc_evaltempl.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_aliases.c -o c_code\1_2\nimsrc_aliases.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_aliases.c -o c_code\1_2\nimsrc_aliases.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_patterns.c -o c_code\1_2\nimsrc_patterns.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_patterns.c -o c_code\1_2\nimsrc_patterns.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_semmacrosanity.c -o c_code\1_2\nimsrc_semmacrosanity.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_semmacrosanity.c -o c_code\1_2\nimsrc_semmacrosanity.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_semparallel.c -o c_code\1_2\nimsrc_semparallel.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_semparallel.c -o c_code\1_2\nimsrc_semparallel.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_plugins.c -o c_code\1_2\nimsrc_plugins.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_plugins.c -o c_code\1_2\nimsrc_plugins.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_active.c -o c_code\1_2\nimsrc_active.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_active.c -o c_code\1_2\nimsrc_active.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_locals.c -o c_code\1_2\nimsrc_locals.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_locals.c -o c_code\1_2\nimsrc_locals.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_cgen.c -o c_code\1_2\nimsrc_cgen.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_cgen.c -o c_code\1_2\nimsrc_cgen.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_ccgutils.c -o c_code\1_2\nimsrc_ccgutils.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_ccgutils.c -o c_code\1_2\nimsrc_ccgutils.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_cgendata.c -o c_code\1_2\nimsrc_cgendata.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_cgendata.c -o c_code\1_2\nimsrc_cgendata.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_ccgmerge.c -o c_code\1_2\nimsrc_ccgmerge.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_ccgmerge.c -o c_code\1_2\nimsrc_ccgmerge.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_jsgen.c -o c_code\1_2\nimsrc_jsgen.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_jsgen.c -o c_code\1_2\nimsrc_jsgen.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_passaux.c -o c_code\1_2\nimsrc_passaux.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_passaux.c -o c_code\1_2\nimsrc_passaux.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_depends.c -o c_code\1_2\nimsrc_depends.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_depends.c -o c_code\1_2\nimsrc_depends.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_docgen2.c -o c_code\1_2\nimsrc_docgen2.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_docgen2.c -o c_code\1_2\nimsrc_docgen2.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_service.c -o c_code\1_2\nimsrc_service.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_service.c -o c_code\1_2\nimsrc_service.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_net.c -o c_code\1_2\stdlib_net.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_net.c -o c_code\1_2\stdlib_net.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_rawsockets.c -o c_code\1_2\stdlib_rawsockets.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_rawsockets.c -o c_code\1_2\stdlib_rawsockets.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_modules.c -o c_code\1_2\nimsrc_modules.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_modules.c -o c_code\1_2\nimsrc_modules.o
IF ERRORLEVEL 1 (GOTO:END)
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_nodejs.c -o c_code\1_2\nimsrc_nodejs.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsrc_nodejs.c -o c_code\1_2\nimsrc_nodejs.o
IF ERRORLEVEL 1 (GOTO:END)

ECHO %LINKER% -o %BIN_DIR%\nim.exe  c_code\1_2\nimsrc_nim.o c_code\1_2\stdlib_system.o c_code\1_2\nimsrc_testability.o c_code\1_2\nimsrc_commands.o c_code\1_2\stdlib_os.o c_code\1_2\stdlib_strutils.o c_code\1_2\stdlib_parseutils.o c_code\1_2\stdlib_times.o c_code\1_2\stdlib_winlean.o c_code\1_2\nimsrc_msgs.o c_code\1_2\nimsrc_options.o c_code\1_2\nimsrc_lists.o c_code\1_2\stdlib_strtabs.o c_code\1_2\stdlib_hashes.o c_code\1_2\stdlib_osproc.o c_code\1_2\stdlib_streams.o c_code\1_2\stdlib_cpuinfo.o c_code\1_2\stdlib_sets.o c_code\1_2\stdlib_math.o c_code\1_2\stdlib_tables.o c_code\1_2\nimsrc_ropes.o c_code\1_2\nimsrc_platform.o c_code\1_2\nimsrc_nversion.o c_code\1_2\nimsrc_condsyms.o c_code\1_2\nimsrc_idents.o c_code\1_2\nimsrc_extccomp.o c_code\1_2\nimsrc_crc.o c_code\1_2\nimsrc_wordrecg.o c_code\1_2\nimsrc_nimblecmd.o c_code\1_2\stdlib_parseopt.o c_code\1_2\nimsrc_lexer.o c_code\1_2\nimsrc_nimlexbase.o c_code\1_2\nimsrc_llstream.o c_code\1_2\nimsrc_nimconf.o c_code\1_2\nimsrc_main.o c_code\1_2\nimsrc_ast.o c_code\1_2\stdlib_intsets.o c_code\1_2\nimsrc_idgen.o c_code\1_2\nimsrc_astalgo.o c_code\1_2\nimsrc_rodutils.o c_code\1_2\nimsrc_syntaxes.o c_code\1_2\nimsrc_parser.o c_code\1_2\nimsrc_pbraces.o c_code\1_2\nimsrc_filters.o c_code\1_2\nimsrc_renderer.o c_code\1_2\nimsrc_filter_tmpl.o c_code\1_2\nimsrc_rodread.o c_code\1_2\nimsrc_types.o c_code\1_2\nimsrc_trees.o c_code\1_2\stdlib_memfiles.o c_code\1_2\nimsrc_rodwrite.o c_code\1_2\nimsrc_passes.o c_code\1_2\nimsrc_magicsys.o c_code\1_2\nimsrc_nimsets.o c_code\1_2\nimsrc_bitsets.o c_code\1_2\nimsrc_importer.o c_code\1_2\nimsrc_lookups.o c_code\1_2\nimsrc_semdata.o c_code\1_2\nimsrc_treetab.o c_code\1_2\nimsrc_vmdef.o c_code\1_2\nimsrc_prettybase.o c_code\1_2\stdlib_lexbase.o c_code\1_2\nimsrc_sem.o c_code\1_2\nimsrc_semfold.o c_code\1_2\nimsrc_saturate.o c_code\1_2\nimsrc_procfind.o c_code\1_2\nimsrc_pragmas.o c_code\1_2\nimsrc_semtypinst.o c_code\1_2\nimsrc_sigmatch.o c_code\1_2\nimsrc_parampatterns.o c_code\1_2\nimsrc_pretty.o c_code\1_2\nimsrc_docgen.o c_code\1_2\docutils_rstast.o c_code\1_2\stdlib_json.o c_code\1_2\stdlib_unicode.o c_code\1_2\stdlib_macros.o c_code\1_2\docutils_rst.o c_code\1_2\docutils_rstgen.o c_code\1_2\docutils_highlite.o c_code\1_2\stdlib_sequtils.o c_code\1_2\stdlib_algorithm.o c_code\1_2\nimsrc_sempass2.o c_code\1_2\nimsrc_guards.o c_code\1_2\stdlib_xmltree.o c_code\1_2\stdlib_cgi.o c_code\1_2\stdlib_cookies.o c_code\1_2\nimsrc_typesrenderer.o c_code\1_2\nimsrc_transf.o c_code\1_2\nimsrc_cgmeth.o c_code\1_2\nimsrc_lambdalifting.o c_code\1_2\nimsrc_lowerings.o c_code\1_2\nimsrc_vm.o c_code\1_2\nimsrc_vmgen.o c_code\1_2\stdlib_unsigned.o c_code\1_2\nimsrc_vmdeps.o c_code\1_2\nimsrc_vmmarshal.o c_code\1_2\nimsrc_evaltempl.o c_code\1_2\nimsrc_aliases.o c_code\1_2\nimsrc_patterns.o c_code\1_2\nimsrc_semmacrosanity.o c_code\1_2\nimsrc_semparallel.o c_code\1_2\nimsrc_plugins.o c_code\1_2\nimsrc_active.o c_code\1_2\nimsrc_locals.o c_code\1_2\nimsrc_cgen.o c_code\1_2\nimsrc_ccgutils.o c_code\1_2\nimsrc_cgendata.o c_code\1_2\nimsrc_ccgmerge.o c_code\1_2\nimsrc_jsgen.o c_code\1_2\nimsrc_passaux.o c_code\1_2\nimsrc_depends.o c_code\1_2\nimsrc_docgen2.o c_code\1_2\nimsrc_service.o c_code\1_2\stdlib_net.o c_code\1_2\stdlib_rawsockets.o c_code\1_2\nimsrc_modules.o c_code\1_2\nimsrc_nodejs.o %LINK_FLAGS%
%LINKER% -o %BIN_DIR%\nim.exe  c_code\1_2\nimsrc_nim.o c_code\1_2\stdlib_system.o c_code\1_2\nimsrc_testability.o c_code\1_2\nimsrc_commands.o c_code\1_2\stdlib_os.o c_code\1_2\stdlib_strutils.o c_code\1_2\stdlib_parseutils.o c_code\1_2\stdlib_times.o c_code\1_2\stdlib_winlean.o c_code\1_2\nimsrc_msgs.o c_code\1_2\nimsrc_options.o c_code\1_2\nimsrc_lists.o c_code\1_2\stdlib_strtabs.o c_code\1_2\stdlib_hashes.o c_code\1_2\stdlib_osproc.o c_code\1_2\stdlib_streams.o c_code\1_2\stdlib_cpuinfo.o c_code\1_2\stdlib_sets.o c_code\1_2\stdlib_math.o c_code\1_2\stdlib_tables.o c_code\1_2\nimsrc_ropes.o c_code\1_2\nimsrc_platform.o c_code\1_2\nimsrc_nversion.o c_code\1_2\nimsrc_condsyms.o c_code\1_2\nimsrc_idents.o c_code\1_2\nimsrc_extccomp.o c_code\1_2\nimsrc_crc.o c_code\1_2\nimsrc_wordrecg.o c_code\1_2\nimsrc_nimblecmd.o c_code\1_2\stdlib_parseopt.o c_code\1_2\nimsrc_lexer.o c_code\1_2\nimsrc_nimlexbase.o c_code\1_2\nimsrc_llstream.o c_code\1_2\nimsrc_nimconf.o c_code\1_2\nimsrc_main.o c_code\1_2\nimsrc_ast.o c_code\1_2\stdlib_intsets.o c_code\1_2\nimsrc_idgen.o c_code\1_2\nimsrc_astalgo.o c_code\1_2\nimsrc_rodutils.o c_code\1_2\nimsrc_syntaxes.o c_code\1_2\nimsrc_parser.o c_code\1_2\nimsrc_pbraces.o c_code\1_2\nimsrc_filters.o c_code\1_2\nimsrc_renderer.o c_code\1_2\nimsrc_filter_tmpl.o c_code\1_2\nimsrc_rodread.o c_code\1_2\nimsrc_types.o c_code\1_2\nimsrc_trees.o c_code\1_2\stdlib_memfiles.o c_code\1_2\nimsrc_rodwrite.o c_code\1_2\nimsrc_passes.o c_code\1_2\nimsrc_magicsys.o c_code\1_2\nimsrc_nimsets.o c_code\1_2\nimsrc_bitsets.o c_code\1_2\nimsrc_importer.o c_code\1_2\nimsrc_lookups.o c_code\1_2\nimsrc_semdata.o c_code\1_2\nimsrc_treetab.o c_code\1_2\nimsrc_vmdef.o c_code\1_2\nimsrc_prettybase.o c_code\1_2\stdlib_lexbase.o c_code\1_2\nimsrc_sem.o c_code\1_2\nimsrc_semfold.o c_code\1_2\nimsrc_saturate.o c_code\1_2\nimsrc_procfind.o c_code\1_2\nimsrc_pragmas.o c_code\1_2\nimsrc_semtypinst.o c_code\1_2\nimsrc_sigmatch.o c_code\1_2\nimsrc_parampatterns.o c_code\1_2\nimsrc_pretty.o c_code\1_2\nimsrc_docgen.o c_code\1_2\docutils_rstast.o c_code\1_2\stdlib_json.o c_code\1_2\stdlib_unicode.o c_code\1_2\stdlib_macros.o c_code\1_2\docutils_rst.o c_code\1_2\docutils_rstgen.o c_code\1_2\docutils_highlite.o c_code\1_2\stdlib_sequtils.o c_code\1_2\stdlib_algorithm.o c_code\1_2\nimsrc_sempass2.o c_code\1_2\nimsrc_guards.o c_code\1_2\stdlib_xmltree.o c_code\1_2\stdlib_cgi.o c_code\1_2\stdlib_cookies.o c_code\1_2\nimsrc_typesrenderer.o c_code\1_2\nimsrc_transf.o c_code\1_2\nimsrc_cgmeth.o c_code\1_2\nimsrc_lambdalifting.o c_code\1_2\nimsrc_lowerings.o c_code\1_2\nimsrc_vm.o c_code\1_2\nimsrc_vmgen.o c_code\1_2\stdlib_unsigned.o c_code\1_2\nimsrc_vmdeps.o c_code\1_2\nimsrc_vmmarshal.o c_code\1_2\nimsrc_evaltempl.o c_code\1_2\nimsrc_aliases.o c_code\1_2\nimsrc_patterns.o c_code\1_2\nimsrc_semmacrosanity.o c_code\1_2\nimsrc_semparallel.o c_code\1_2\nimsrc_plugins.o c_code\1_2\nimsrc_active.o c_code\1_2\nimsrc_locals.o c_code\1_2\nimsrc_cgen.o c_code\1_2\nimsrc_ccgutils.o c_code\1_2\nimsrc_cgendata.o c_code\1_2\nimsrc_ccgmerge.o c_code\1_2\nimsrc_jsgen.o c_code\1_2\nimsrc_passaux.o c_code\1_2\nimsrc_depends.o c_code\1_2\nimsrc_docgen2.o c_code\1_2\nimsrc_service.o c_code\1_2\stdlib_net.o c_code\1_2\stdlib_rawsockets.o c_code\1_2\nimsrc_modules.o c_code\1_2\nimsrc_nodejs.o %LINK_FLAGS%


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

