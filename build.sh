#! /bin/sh
# Generated from niminst
# Template is in tools/niminst/buildsh.tmpl
# To regenerate run ``niminst csource`` or ``koch csource``

set -e

while :
do
  case "$1" in
    --extraBuildArgs)
      extraBuildArgs=" $2"
      shift 2
      ;;
    --) # End of all options
      shift
      break;
      ;;
    -*)
      echo "Error: Unknown option: $1" >&2
      exit 1
      ;;
    *)  # No more options
      break
      ;;
  esac
done

CC="gcc"
LINKER="gcc"
COMP_FLAGS="-w -O3 -fno-strict-aliasing$extraBuildArgs"
LINK_FLAGS=""
# platform detection
ucpu=`uname -m`
uos=`uname`
# bin dir detection
binDir=bin

if [ -s ../koch.nim ]; then
  binDir="../bin"
fi

if [ ! -d $binDir ]; then
  mkdir $binDir
fi

# convert to lower case:
ucpu=`echo $ucpu | tr "[:upper:]" "[:lower:]"`
uos=`echo $uos | tr "[:upper:]" "[:lower:]"`

case $uos in
  *linux* ) 
    myos="linux" 
    LINK_FLAGS="$LINK_FLAGS -ldl -lm"
    ;;
  *dragonfly* )
    myos="freebsd"
    LINK_FLAGS="$LINK_FLAGS -lm"
    ;;
  *freebsd* )
    myos="freebsd"
    CC="clang"
    LINKER="clang"
    LINK_FLAGS="$LINK_FLAGS -lm"
    ;;
  *openbsd* )
    myos="openbsd" 
    LINK_FLAGS="$LINK_FLAGS -lm"
    ;;
  *netbsd* )
    myos="netbsd"
    LINK_FLAGS="$LINK_FLAGS -lm"
    ;;
  *darwin* ) 
    myos="macosx"
    CC="clang"
    LINKER="clang"
    LINK_FLAGS="$LINK_FLAGS -ldl -lm"
    if [ "$HOSTTYPE" = "x86_64" ] ; then
      ucpu="amd64"
    fi
    ;;
  *aix* )
    myos="aix"
    LINK_FLAGS="$LINK_FLAGS -ldl -lm"    
    ;;
  *solaris* | *sun* ) 
    myos="solaris"
    LINK_FLAGS="$LINK_FLAGS -ldl -lm -lsocket -lnsl"
    ;;
  *haiku* )
    myos="haiku"
    ;;
  *) 
    echo "Error: unknown operating system: $uos"
    exit 1
    ;;
esac

case $ucpu in
  *i386* | *i486* | *i586* | *i686* | *bepc* | *i86pc* ) 
    mycpu="i386" ;;
  *amd*64* | *x86-64* | *x86_64* ) 
    mycpu="amd64" ;;
  *sparc*|*sun* ) 
    mycpu="sparc" ;;
  *ppc64* ) 
    if [ "$myos" = "linux" ] ; then
      COMP_FLAGS="$COMP_FLAGS -m64"
      LINK_FLAGS="$LINK_FLAGS -m64"
    fi
    mycpu="powerpc64" ;;
  *power*|*ppc* ) 
    mycpu="powerpc" ;;
  *mips* ) 
    mycpu="mips" ;;
  *arm*|*armv6l* )
    mycpu="arm" ;;
  *) 
    echo "Error: unknown processor: $ucpu"
    exit 1
    ;;
esac

# call the compiler:

case $myos in
windows) 
  case $mycpu in
  i386)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_nim.c -o c_code/1_1/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_nim.c -o c_code/1_1/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_system.c -o c_code/1_1/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_system.c -o c_code/1_1/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_testability.c -o c_code/1_1/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_testability.c -o c_code/1_1/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_commands.c -o c_code/1_1/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_commands.c -o c_code/1_1/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_os.c -o c_code/1_1/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_os.c -o c_code/1_1/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_strutils.c -o c_code/1_1/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_strutils.c -o c_code/1_1/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_parseutils.c -o c_code/1_1/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_parseutils.c -o c_code/1_1/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_times.c -o c_code/1_1/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_times.c -o c_code/1_1/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_winlean.c -o c_code/1_1/stdlib_winlean.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_winlean.c -o c_code/1_1/stdlib_winlean.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_msgs.c -o c_code/1_1/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_msgs.c -o c_code/1_1/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_options.c -o c_code/1_1/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_options.c -o c_code/1_1/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_lists.c -o c_code/1_1/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_lists.c -o c_code/1_1/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_strtabs.c -o c_code/1_1/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_strtabs.c -o c_code/1_1/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_hashes.c -o c_code/1_1/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_hashes.c -o c_code/1_1/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_osproc.c -o c_code/1_1/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_osproc.c -o c_code/1_1/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_streams.c -o c_code/1_1/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_streams.c -o c_code/1_1/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_cpuinfo.c -o c_code/1_1/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_cpuinfo.c -o c_code/1_1/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_sets.c -o c_code/1_1/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_sets.c -o c_code/1_1/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_math.c -o c_code/1_1/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_math.c -o c_code/1_1/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_tables.c -o c_code/1_1/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_tables.c -o c_code/1_1/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_ropes.c -o c_code/1_1/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_ropes.c -o c_code/1_1/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_platform.c -o c_code/1_1/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_platform.c -o c_code/1_1/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_nversion.c -o c_code/1_1/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_nversion.c -o c_code/1_1/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_condsyms.c -o c_code/1_1/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_condsyms.c -o c_code/1_1/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_idents.c -o c_code/1_1/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_idents.c -o c_code/1_1/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_extccomp.c -o c_code/1_1/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_extccomp.c -o c_code/1_1/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_crc.c -o c_code/1_1/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_crc.c -o c_code/1_1/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_wordrecg.c -o c_code/1_1/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_wordrecg.c -o c_code/1_1/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_nimblecmd.c -o c_code/1_1/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_nimblecmd.c -o c_code/1_1/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_parseopt.c -o c_code/1_1/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_parseopt.c -o c_code/1_1/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_lexer.c -o c_code/1_1/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_lexer.c -o c_code/1_1/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_nimlexbase.c -o c_code/1_1/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_nimlexbase.c -o c_code/1_1/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_llstream.c -o c_code/1_1/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_llstream.c -o c_code/1_1/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_nimconf.c -o c_code/1_1/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_nimconf.c -o c_code/1_1/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_main.c -o c_code/1_1/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_main.c -o c_code/1_1/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_ast.c -o c_code/1_1/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_ast.c -o c_code/1_1/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_intsets.c -o c_code/1_1/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_intsets.c -o c_code/1_1/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_idgen.c -o c_code/1_1/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_idgen.c -o c_code/1_1/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_astalgo.c -o c_code/1_1/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_astalgo.c -o c_code/1_1/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_rodutils.c -o c_code/1_1/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_rodutils.c -o c_code/1_1/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_syntaxes.c -o c_code/1_1/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_syntaxes.c -o c_code/1_1/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_parser.c -o c_code/1_1/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_parser.c -o c_code/1_1/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_pbraces.c -o c_code/1_1/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_pbraces.c -o c_code/1_1/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_filters.c -o c_code/1_1/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_filters.c -o c_code/1_1/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_renderer.c -o c_code/1_1/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_renderer.c -o c_code/1_1/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_filter_tmpl.c -o c_code/1_1/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_filter_tmpl.c -o c_code/1_1/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_rodread.c -o c_code/1_1/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_rodread.c -o c_code/1_1/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_types.c -o c_code/1_1/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_types.c -o c_code/1_1/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_trees.c -o c_code/1_1/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_trees.c -o c_code/1_1/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_memfiles.c -o c_code/1_1/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_memfiles.c -o c_code/1_1/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_rodwrite.c -o c_code/1_1/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_rodwrite.c -o c_code/1_1/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_passes.c -o c_code/1_1/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_passes.c -o c_code/1_1/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_magicsys.c -o c_code/1_1/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_magicsys.c -o c_code/1_1/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_nimsets.c -o c_code/1_1/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_nimsets.c -o c_code/1_1/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_bitsets.c -o c_code/1_1/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_bitsets.c -o c_code/1_1/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_importer.c -o c_code/1_1/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_importer.c -o c_code/1_1/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_lookups.c -o c_code/1_1/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_lookups.c -o c_code/1_1/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_semdata.c -o c_code/1_1/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_semdata.c -o c_code/1_1/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_treetab.c -o c_code/1_1/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_treetab.c -o c_code/1_1/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_vmdef.c -o c_code/1_1/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_vmdef.c -o c_code/1_1/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_prettybase.c -o c_code/1_1/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_prettybase.c -o c_code/1_1/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_lexbase.c -o c_code/1_1/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_lexbase.c -o c_code/1_1/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_sem.c -o c_code/1_1/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_sem.c -o c_code/1_1/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_semfold.c -o c_code/1_1/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_semfold.c -o c_code/1_1/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_saturate.c -o c_code/1_1/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_saturate.c -o c_code/1_1/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_procfind.c -o c_code/1_1/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_procfind.c -o c_code/1_1/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_pragmas.c -o c_code/1_1/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_pragmas.c -o c_code/1_1/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_semtypinst.c -o c_code/1_1/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_semtypinst.c -o c_code/1_1/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_sigmatch.c -o c_code/1_1/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_sigmatch.c -o c_code/1_1/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_parampatterns.c -o c_code/1_1/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_parampatterns.c -o c_code/1_1/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_pretty.c -o c_code/1_1/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_pretty.c -o c_code/1_1/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_docgen.c -o c_code/1_1/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_docgen.c -o c_code/1_1/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/docutils_rstast.c -o c_code/1_1/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/docutils_rstast.c -o c_code/1_1/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_json.c -o c_code/1_1/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_json.c -o c_code/1_1/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_unicode.c -o c_code/1_1/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_unicode.c -o c_code/1_1/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_macros.c -o c_code/1_1/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_macros.c -o c_code/1_1/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/docutils_rst.c -o c_code/1_1/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/docutils_rst.c -o c_code/1_1/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/docutils_rstgen.c -o c_code/1_1/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/docutils_rstgen.c -o c_code/1_1/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/docutils_highlite.c -o c_code/1_1/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/docutils_highlite.c -o c_code/1_1/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_sequtils.c -o c_code/1_1/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_sequtils.c -o c_code/1_1/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_algorithm.c -o c_code/1_1/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_algorithm.c -o c_code/1_1/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_sempass2.c -o c_code/1_1/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_sempass2.c -o c_code/1_1/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_guards.c -o c_code/1_1/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_guards.c -o c_code/1_1/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_xmltree.c -o c_code/1_1/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_xmltree.c -o c_code/1_1/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_cgi.c -o c_code/1_1/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_cgi.c -o c_code/1_1/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_cookies.c -o c_code/1_1/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_cookies.c -o c_code/1_1/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_typesrenderer.c -o c_code/1_1/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_typesrenderer.c -o c_code/1_1/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_transf.c -o c_code/1_1/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_transf.c -o c_code/1_1/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_cgmeth.c -o c_code/1_1/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_cgmeth.c -o c_code/1_1/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_lambdalifting.c -o c_code/1_1/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_lambdalifting.c -o c_code/1_1/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_lowerings.c -o c_code/1_1/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_lowerings.c -o c_code/1_1/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_vm.c -o c_code/1_1/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_vm.c -o c_code/1_1/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_vmgen.c -o c_code/1_1/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_vmgen.c -o c_code/1_1/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_unsigned.c -o c_code/1_1/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_unsigned.c -o c_code/1_1/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_vmdeps.c -o c_code/1_1/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_vmdeps.c -o c_code/1_1/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_vmmarshal.c -o c_code/1_1/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_vmmarshal.c -o c_code/1_1/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_evaltempl.c -o c_code/1_1/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_evaltempl.c -o c_code/1_1/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_aliases.c -o c_code/1_1/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_aliases.c -o c_code/1_1/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_patterns.c -o c_code/1_1/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_patterns.c -o c_code/1_1/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_semmacrosanity.c -o c_code/1_1/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_semmacrosanity.c -o c_code/1_1/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_semparallel.c -o c_code/1_1/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_semparallel.c -o c_code/1_1/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_plugins.c -o c_code/1_1/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_plugins.c -o c_code/1_1/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_active.c -o c_code/1_1/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_active.c -o c_code/1_1/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_locals.c -o c_code/1_1/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_locals.c -o c_code/1_1/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_cgen.c -o c_code/1_1/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_cgen.c -o c_code/1_1/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_ccgutils.c -o c_code/1_1/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_ccgutils.c -o c_code/1_1/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_cgendata.c -o c_code/1_1/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_cgendata.c -o c_code/1_1/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_ccgmerge.c -o c_code/1_1/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_ccgmerge.c -o c_code/1_1/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_jsgen.c -o c_code/1_1/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_jsgen.c -o c_code/1_1/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_passaux.c -o c_code/1_1/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_passaux.c -o c_code/1_1/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_depends.c -o c_code/1_1/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_depends.c -o c_code/1_1/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_docgen2.c -o c_code/1_1/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_docgen2.c -o c_code/1_1/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_service.c -o c_code/1_1/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_service.c -o c_code/1_1/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_net.c -o c_code/1_1/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_net.c -o c_code/1_1/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_rawsockets.c -o c_code/1_1/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/stdlib_rawsockets.c -o c_code/1_1/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_modules.c -o c_code/1_1/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_modules.c -o c_code/1_1/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_nodejs.c -o c_code/1_1/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_1/nimsrc_nodejs.c -o c_code/1_1/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/1_1/nimsrc_nim.o \
c_code/1_1/stdlib_system.o \
c_code/1_1/nimsrc_testability.o \
c_code/1_1/nimsrc_commands.o \
c_code/1_1/stdlib_os.o \
c_code/1_1/stdlib_strutils.o \
c_code/1_1/stdlib_parseutils.o \
c_code/1_1/stdlib_times.o \
c_code/1_1/stdlib_winlean.o \
c_code/1_1/nimsrc_msgs.o \
c_code/1_1/nimsrc_options.o \
c_code/1_1/nimsrc_lists.o \
c_code/1_1/stdlib_strtabs.o \
c_code/1_1/stdlib_hashes.o \
c_code/1_1/stdlib_osproc.o \
c_code/1_1/stdlib_streams.o \
c_code/1_1/stdlib_cpuinfo.o \
c_code/1_1/stdlib_sets.o \
c_code/1_1/stdlib_math.o \
c_code/1_1/stdlib_tables.o \
c_code/1_1/nimsrc_ropes.o \
c_code/1_1/nimsrc_platform.o \
c_code/1_1/nimsrc_nversion.o \
c_code/1_1/nimsrc_condsyms.o \
c_code/1_1/nimsrc_idents.o \
c_code/1_1/nimsrc_extccomp.o \
c_code/1_1/nimsrc_crc.o \
c_code/1_1/nimsrc_wordrecg.o \
c_code/1_1/nimsrc_nimblecmd.o \
c_code/1_1/stdlib_parseopt.o \
c_code/1_1/nimsrc_lexer.o \
c_code/1_1/nimsrc_nimlexbase.o \
c_code/1_1/nimsrc_llstream.o \
c_code/1_1/nimsrc_nimconf.o \
c_code/1_1/nimsrc_main.o \
c_code/1_1/nimsrc_ast.o \
c_code/1_1/stdlib_intsets.o \
c_code/1_1/nimsrc_idgen.o \
c_code/1_1/nimsrc_astalgo.o \
c_code/1_1/nimsrc_rodutils.o \
c_code/1_1/nimsrc_syntaxes.o \
c_code/1_1/nimsrc_parser.o \
c_code/1_1/nimsrc_pbraces.o \
c_code/1_1/nimsrc_filters.o \
c_code/1_1/nimsrc_renderer.o \
c_code/1_1/nimsrc_filter_tmpl.o \
c_code/1_1/nimsrc_rodread.o \
c_code/1_1/nimsrc_types.o \
c_code/1_1/nimsrc_trees.o \
c_code/1_1/stdlib_memfiles.o \
c_code/1_1/nimsrc_rodwrite.o \
c_code/1_1/nimsrc_passes.o \
c_code/1_1/nimsrc_magicsys.o \
c_code/1_1/nimsrc_nimsets.o \
c_code/1_1/nimsrc_bitsets.o \
c_code/1_1/nimsrc_importer.o \
c_code/1_1/nimsrc_lookups.o \
c_code/1_1/nimsrc_semdata.o \
c_code/1_1/nimsrc_treetab.o \
c_code/1_1/nimsrc_vmdef.o \
c_code/1_1/nimsrc_prettybase.o \
c_code/1_1/stdlib_lexbase.o \
c_code/1_1/nimsrc_sem.o \
c_code/1_1/nimsrc_semfold.o \
c_code/1_1/nimsrc_saturate.o \
c_code/1_1/nimsrc_procfind.o \
c_code/1_1/nimsrc_pragmas.o \
c_code/1_1/nimsrc_semtypinst.o \
c_code/1_1/nimsrc_sigmatch.o \
c_code/1_1/nimsrc_parampatterns.o \
c_code/1_1/nimsrc_pretty.o \
c_code/1_1/nimsrc_docgen.o \
c_code/1_1/docutils_rstast.o \
c_code/1_1/stdlib_json.o \
c_code/1_1/stdlib_unicode.o \
c_code/1_1/stdlib_macros.o \
c_code/1_1/docutils_rst.o \
c_code/1_1/docutils_rstgen.o \
c_code/1_1/docutils_highlite.o \
c_code/1_1/stdlib_sequtils.o \
c_code/1_1/stdlib_algorithm.o \
c_code/1_1/nimsrc_sempass2.o \
c_code/1_1/nimsrc_guards.o \
c_code/1_1/stdlib_xmltree.o \
c_code/1_1/stdlib_cgi.o \
c_code/1_1/stdlib_cookies.o \
c_code/1_1/nimsrc_typesrenderer.o \
c_code/1_1/nimsrc_transf.o \
c_code/1_1/nimsrc_cgmeth.o \
c_code/1_1/nimsrc_lambdalifting.o \
c_code/1_1/nimsrc_lowerings.o \
c_code/1_1/nimsrc_vm.o \
c_code/1_1/nimsrc_vmgen.o \
c_code/1_1/stdlib_unsigned.o \
c_code/1_1/nimsrc_vmdeps.o \
c_code/1_1/nimsrc_vmmarshal.o \
c_code/1_1/nimsrc_evaltempl.o \
c_code/1_1/nimsrc_aliases.o \
c_code/1_1/nimsrc_patterns.o \
c_code/1_1/nimsrc_semmacrosanity.o \
c_code/1_1/nimsrc_semparallel.o \
c_code/1_1/nimsrc_plugins.o \
c_code/1_1/nimsrc_active.o \
c_code/1_1/nimsrc_locals.o \
c_code/1_1/nimsrc_cgen.o \
c_code/1_1/nimsrc_ccgutils.o \
c_code/1_1/nimsrc_cgendata.o \
c_code/1_1/nimsrc_ccgmerge.o \
c_code/1_1/nimsrc_jsgen.o \
c_code/1_1/nimsrc_passaux.o \
c_code/1_1/nimsrc_depends.o \
c_code/1_1/nimsrc_docgen2.o \
c_code/1_1/nimsrc_service.o \
c_code/1_1/stdlib_net.o \
c_code/1_1/stdlib_rawsockets.o \
c_code/1_1/nimsrc_modules.o \
c_code/1_1/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/1_1/nimsrc_nim.o \
c_code/1_1/stdlib_system.o \
c_code/1_1/nimsrc_testability.o \
c_code/1_1/nimsrc_commands.o \
c_code/1_1/stdlib_os.o \
c_code/1_1/stdlib_strutils.o \
c_code/1_1/stdlib_parseutils.o \
c_code/1_1/stdlib_times.o \
c_code/1_1/stdlib_winlean.o \
c_code/1_1/nimsrc_msgs.o \
c_code/1_1/nimsrc_options.o \
c_code/1_1/nimsrc_lists.o \
c_code/1_1/stdlib_strtabs.o \
c_code/1_1/stdlib_hashes.o \
c_code/1_1/stdlib_osproc.o \
c_code/1_1/stdlib_streams.o \
c_code/1_1/stdlib_cpuinfo.o \
c_code/1_1/stdlib_sets.o \
c_code/1_1/stdlib_math.o \
c_code/1_1/stdlib_tables.o \
c_code/1_1/nimsrc_ropes.o \
c_code/1_1/nimsrc_platform.o \
c_code/1_1/nimsrc_nversion.o \
c_code/1_1/nimsrc_condsyms.o \
c_code/1_1/nimsrc_idents.o \
c_code/1_1/nimsrc_extccomp.o \
c_code/1_1/nimsrc_crc.o \
c_code/1_1/nimsrc_wordrecg.o \
c_code/1_1/nimsrc_nimblecmd.o \
c_code/1_1/stdlib_parseopt.o \
c_code/1_1/nimsrc_lexer.o \
c_code/1_1/nimsrc_nimlexbase.o \
c_code/1_1/nimsrc_llstream.o \
c_code/1_1/nimsrc_nimconf.o \
c_code/1_1/nimsrc_main.o \
c_code/1_1/nimsrc_ast.o \
c_code/1_1/stdlib_intsets.o \
c_code/1_1/nimsrc_idgen.o \
c_code/1_1/nimsrc_astalgo.o \
c_code/1_1/nimsrc_rodutils.o \
c_code/1_1/nimsrc_syntaxes.o \
c_code/1_1/nimsrc_parser.o \
c_code/1_1/nimsrc_pbraces.o \
c_code/1_1/nimsrc_filters.o \
c_code/1_1/nimsrc_renderer.o \
c_code/1_1/nimsrc_filter_tmpl.o \
c_code/1_1/nimsrc_rodread.o \
c_code/1_1/nimsrc_types.o \
c_code/1_1/nimsrc_trees.o \
c_code/1_1/stdlib_memfiles.o \
c_code/1_1/nimsrc_rodwrite.o \
c_code/1_1/nimsrc_passes.o \
c_code/1_1/nimsrc_magicsys.o \
c_code/1_1/nimsrc_nimsets.o \
c_code/1_1/nimsrc_bitsets.o \
c_code/1_1/nimsrc_importer.o \
c_code/1_1/nimsrc_lookups.o \
c_code/1_1/nimsrc_semdata.o \
c_code/1_1/nimsrc_treetab.o \
c_code/1_1/nimsrc_vmdef.o \
c_code/1_1/nimsrc_prettybase.o \
c_code/1_1/stdlib_lexbase.o \
c_code/1_1/nimsrc_sem.o \
c_code/1_1/nimsrc_semfold.o \
c_code/1_1/nimsrc_saturate.o \
c_code/1_1/nimsrc_procfind.o \
c_code/1_1/nimsrc_pragmas.o \
c_code/1_1/nimsrc_semtypinst.o \
c_code/1_1/nimsrc_sigmatch.o \
c_code/1_1/nimsrc_parampatterns.o \
c_code/1_1/nimsrc_pretty.o \
c_code/1_1/nimsrc_docgen.o \
c_code/1_1/docutils_rstast.o \
c_code/1_1/stdlib_json.o \
c_code/1_1/stdlib_unicode.o \
c_code/1_1/stdlib_macros.o \
c_code/1_1/docutils_rst.o \
c_code/1_1/docutils_rstgen.o \
c_code/1_1/docutils_highlite.o \
c_code/1_1/stdlib_sequtils.o \
c_code/1_1/stdlib_algorithm.o \
c_code/1_1/nimsrc_sempass2.o \
c_code/1_1/nimsrc_guards.o \
c_code/1_1/stdlib_xmltree.o \
c_code/1_1/stdlib_cgi.o \
c_code/1_1/stdlib_cookies.o \
c_code/1_1/nimsrc_typesrenderer.o \
c_code/1_1/nimsrc_transf.o \
c_code/1_1/nimsrc_cgmeth.o \
c_code/1_1/nimsrc_lambdalifting.o \
c_code/1_1/nimsrc_lowerings.o \
c_code/1_1/nimsrc_vm.o \
c_code/1_1/nimsrc_vmgen.o \
c_code/1_1/stdlib_unsigned.o \
c_code/1_1/nimsrc_vmdeps.o \
c_code/1_1/nimsrc_vmmarshal.o \
c_code/1_1/nimsrc_evaltempl.o \
c_code/1_1/nimsrc_aliases.o \
c_code/1_1/nimsrc_patterns.o \
c_code/1_1/nimsrc_semmacrosanity.o \
c_code/1_1/nimsrc_semparallel.o \
c_code/1_1/nimsrc_plugins.o \
c_code/1_1/nimsrc_active.o \
c_code/1_1/nimsrc_locals.o \
c_code/1_1/nimsrc_cgen.o \
c_code/1_1/nimsrc_ccgutils.o \
c_code/1_1/nimsrc_cgendata.o \
c_code/1_1/nimsrc_ccgmerge.o \
c_code/1_1/nimsrc_jsgen.o \
c_code/1_1/nimsrc_passaux.o \
c_code/1_1/nimsrc_depends.o \
c_code/1_1/nimsrc_docgen2.o \
c_code/1_1/nimsrc_service.o \
c_code/1_1/stdlib_net.o \
c_code/1_1/stdlib_rawsockets.o \
c_code/1_1/nimsrc_modules.o \
c_code/1_1/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  amd64)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_nim.c -o c_code/1_2/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_nim.c -o c_code/1_2/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_system.c -o c_code/1_2/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_system.c -o c_code/1_2/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_testability.c -o c_code/1_2/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_testability.c -o c_code/1_2/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_commands.c -o c_code/1_2/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_commands.c -o c_code/1_2/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_os.c -o c_code/1_2/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_os.c -o c_code/1_2/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_strutils.c -o c_code/1_2/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_strutils.c -o c_code/1_2/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_parseutils.c -o c_code/1_2/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_parseutils.c -o c_code/1_2/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_times.c -o c_code/1_2/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_times.c -o c_code/1_2/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_winlean.c -o c_code/1_2/stdlib_winlean.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_winlean.c -o c_code/1_2/stdlib_winlean.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_msgs.c -o c_code/1_2/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_msgs.c -o c_code/1_2/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_options.c -o c_code/1_2/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_options.c -o c_code/1_2/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_lists.c -o c_code/1_2/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_lists.c -o c_code/1_2/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_strtabs.c -o c_code/1_2/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_strtabs.c -o c_code/1_2/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_hashes.c -o c_code/1_2/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_hashes.c -o c_code/1_2/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_osproc.c -o c_code/1_2/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_osproc.c -o c_code/1_2/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_streams.c -o c_code/1_2/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_streams.c -o c_code/1_2/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_cpuinfo.c -o c_code/1_2/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_cpuinfo.c -o c_code/1_2/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_sets.c -o c_code/1_2/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_sets.c -o c_code/1_2/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_math.c -o c_code/1_2/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_math.c -o c_code/1_2/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_tables.c -o c_code/1_2/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_tables.c -o c_code/1_2/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_ropes.c -o c_code/1_2/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_ropes.c -o c_code/1_2/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_platform.c -o c_code/1_2/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_platform.c -o c_code/1_2/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_nversion.c -o c_code/1_2/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_nversion.c -o c_code/1_2/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_condsyms.c -o c_code/1_2/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_condsyms.c -o c_code/1_2/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_idents.c -o c_code/1_2/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_idents.c -o c_code/1_2/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_extccomp.c -o c_code/1_2/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_extccomp.c -o c_code/1_2/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_crc.c -o c_code/1_2/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_crc.c -o c_code/1_2/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_wordrecg.c -o c_code/1_2/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_wordrecg.c -o c_code/1_2/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_nimblecmd.c -o c_code/1_2/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_nimblecmd.c -o c_code/1_2/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_parseopt.c -o c_code/1_2/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_parseopt.c -o c_code/1_2/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_lexer.c -o c_code/1_2/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_lexer.c -o c_code/1_2/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_nimlexbase.c -o c_code/1_2/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_nimlexbase.c -o c_code/1_2/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_llstream.c -o c_code/1_2/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_llstream.c -o c_code/1_2/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_nimconf.c -o c_code/1_2/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_nimconf.c -o c_code/1_2/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_main.c -o c_code/1_2/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_main.c -o c_code/1_2/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_ast.c -o c_code/1_2/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_ast.c -o c_code/1_2/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_intsets.c -o c_code/1_2/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_intsets.c -o c_code/1_2/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_idgen.c -o c_code/1_2/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_idgen.c -o c_code/1_2/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_astalgo.c -o c_code/1_2/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_astalgo.c -o c_code/1_2/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_rodutils.c -o c_code/1_2/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_rodutils.c -o c_code/1_2/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_syntaxes.c -o c_code/1_2/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_syntaxes.c -o c_code/1_2/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_parser.c -o c_code/1_2/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_parser.c -o c_code/1_2/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_pbraces.c -o c_code/1_2/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_pbraces.c -o c_code/1_2/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_filters.c -o c_code/1_2/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_filters.c -o c_code/1_2/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_renderer.c -o c_code/1_2/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_renderer.c -o c_code/1_2/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_filter_tmpl.c -o c_code/1_2/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_filter_tmpl.c -o c_code/1_2/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_rodread.c -o c_code/1_2/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_rodread.c -o c_code/1_2/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_types.c -o c_code/1_2/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_types.c -o c_code/1_2/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_trees.c -o c_code/1_2/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_trees.c -o c_code/1_2/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_memfiles.c -o c_code/1_2/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_memfiles.c -o c_code/1_2/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_rodwrite.c -o c_code/1_2/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_rodwrite.c -o c_code/1_2/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_passes.c -o c_code/1_2/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_passes.c -o c_code/1_2/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_magicsys.c -o c_code/1_2/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_magicsys.c -o c_code/1_2/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_nimsets.c -o c_code/1_2/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_nimsets.c -o c_code/1_2/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_bitsets.c -o c_code/1_2/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_bitsets.c -o c_code/1_2/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_importer.c -o c_code/1_2/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_importer.c -o c_code/1_2/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_lookups.c -o c_code/1_2/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_lookups.c -o c_code/1_2/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_semdata.c -o c_code/1_2/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_semdata.c -o c_code/1_2/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_treetab.c -o c_code/1_2/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_treetab.c -o c_code/1_2/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_vmdef.c -o c_code/1_2/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_vmdef.c -o c_code/1_2/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_prettybase.c -o c_code/1_2/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_prettybase.c -o c_code/1_2/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_lexbase.c -o c_code/1_2/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_lexbase.c -o c_code/1_2/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_sem.c -o c_code/1_2/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_sem.c -o c_code/1_2/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_semfold.c -o c_code/1_2/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_semfold.c -o c_code/1_2/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_saturate.c -o c_code/1_2/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_saturate.c -o c_code/1_2/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_procfind.c -o c_code/1_2/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_procfind.c -o c_code/1_2/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_pragmas.c -o c_code/1_2/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_pragmas.c -o c_code/1_2/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_semtypinst.c -o c_code/1_2/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_semtypinst.c -o c_code/1_2/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_sigmatch.c -o c_code/1_2/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_sigmatch.c -o c_code/1_2/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_parampatterns.c -o c_code/1_2/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_parampatterns.c -o c_code/1_2/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_pretty.c -o c_code/1_2/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_pretty.c -o c_code/1_2/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_docgen.c -o c_code/1_2/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_docgen.c -o c_code/1_2/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/docutils_rstast.c -o c_code/1_2/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/docutils_rstast.c -o c_code/1_2/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_json.c -o c_code/1_2/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_json.c -o c_code/1_2/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_unicode.c -o c_code/1_2/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_unicode.c -o c_code/1_2/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_macros.c -o c_code/1_2/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_macros.c -o c_code/1_2/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/docutils_rst.c -o c_code/1_2/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/docutils_rst.c -o c_code/1_2/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/docutils_rstgen.c -o c_code/1_2/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/docutils_rstgen.c -o c_code/1_2/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/docutils_highlite.c -o c_code/1_2/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/docutils_highlite.c -o c_code/1_2/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_sequtils.c -o c_code/1_2/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_sequtils.c -o c_code/1_2/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_algorithm.c -o c_code/1_2/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_algorithm.c -o c_code/1_2/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_sempass2.c -o c_code/1_2/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_sempass2.c -o c_code/1_2/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_guards.c -o c_code/1_2/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_guards.c -o c_code/1_2/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_xmltree.c -o c_code/1_2/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_xmltree.c -o c_code/1_2/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_cgi.c -o c_code/1_2/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_cgi.c -o c_code/1_2/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_cookies.c -o c_code/1_2/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_cookies.c -o c_code/1_2/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_typesrenderer.c -o c_code/1_2/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_typesrenderer.c -o c_code/1_2/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_transf.c -o c_code/1_2/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_transf.c -o c_code/1_2/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_cgmeth.c -o c_code/1_2/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_cgmeth.c -o c_code/1_2/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_lambdalifting.c -o c_code/1_2/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_lambdalifting.c -o c_code/1_2/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_lowerings.c -o c_code/1_2/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_lowerings.c -o c_code/1_2/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_vm.c -o c_code/1_2/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_vm.c -o c_code/1_2/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_vmgen.c -o c_code/1_2/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_vmgen.c -o c_code/1_2/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_unsigned.c -o c_code/1_2/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_unsigned.c -o c_code/1_2/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_vmdeps.c -o c_code/1_2/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_vmdeps.c -o c_code/1_2/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_vmmarshal.c -o c_code/1_2/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_vmmarshal.c -o c_code/1_2/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_evaltempl.c -o c_code/1_2/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_evaltempl.c -o c_code/1_2/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_aliases.c -o c_code/1_2/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_aliases.c -o c_code/1_2/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_patterns.c -o c_code/1_2/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_patterns.c -o c_code/1_2/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_semmacrosanity.c -o c_code/1_2/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_semmacrosanity.c -o c_code/1_2/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_semparallel.c -o c_code/1_2/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_semparallel.c -o c_code/1_2/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_plugins.c -o c_code/1_2/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_plugins.c -o c_code/1_2/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_active.c -o c_code/1_2/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_active.c -o c_code/1_2/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_locals.c -o c_code/1_2/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_locals.c -o c_code/1_2/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_cgen.c -o c_code/1_2/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_cgen.c -o c_code/1_2/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_ccgutils.c -o c_code/1_2/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_ccgutils.c -o c_code/1_2/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_cgendata.c -o c_code/1_2/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_cgendata.c -o c_code/1_2/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_ccgmerge.c -o c_code/1_2/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_ccgmerge.c -o c_code/1_2/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_jsgen.c -o c_code/1_2/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_jsgen.c -o c_code/1_2/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_passaux.c -o c_code/1_2/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_passaux.c -o c_code/1_2/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_depends.c -o c_code/1_2/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_depends.c -o c_code/1_2/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_docgen2.c -o c_code/1_2/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_docgen2.c -o c_code/1_2/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_service.c -o c_code/1_2/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_service.c -o c_code/1_2/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_net.c -o c_code/1_2/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_net.c -o c_code/1_2/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_rawsockets.c -o c_code/1_2/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/stdlib_rawsockets.c -o c_code/1_2/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_modules.c -o c_code/1_2/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_modules.c -o c_code/1_2/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_nodejs.c -o c_code/1_2/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/1_2/nimsrc_nodejs.c -o c_code/1_2/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/1_2/nimsrc_nim.o \
c_code/1_2/stdlib_system.o \
c_code/1_2/nimsrc_testability.o \
c_code/1_2/nimsrc_commands.o \
c_code/1_2/stdlib_os.o \
c_code/1_2/stdlib_strutils.o \
c_code/1_2/stdlib_parseutils.o \
c_code/1_2/stdlib_times.o \
c_code/1_2/stdlib_winlean.o \
c_code/1_2/nimsrc_msgs.o \
c_code/1_2/nimsrc_options.o \
c_code/1_2/nimsrc_lists.o \
c_code/1_2/stdlib_strtabs.o \
c_code/1_2/stdlib_hashes.o \
c_code/1_2/stdlib_osproc.o \
c_code/1_2/stdlib_streams.o \
c_code/1_2/stdlib_cpuinfo.o \
c_code/1_2/stdlib_sets.o \
c_code/1_2/stdlib_math.o \
c_code/1_2/stdlib_tables.o \
c_code/1_2/nimsrc_ropes.o \
c_code/1_2/nimsrc_platform.o \
c_code/1_2/nimsrc_nversion.o \
c_code/1_2/nimsrc_condsyms.o \
c_code/1_2/nimsrc_idents.o \
c_code/1_2/nimsrc_extccomp.o \
c_code/1_2/nimsrc_crc.o \
c_code/1_2/nimsrc_wordrecg.o \
c_code/1_2/nimsrc_nimblecmd.o \
c_code/1_2/stdlib_parseopt.o \
c_code/1_2/nimsrc_lexer.o \
c_code/1_2/nimsrc_nimlexbase.o \
c_code/1_2/nimsrc_llstream.o \
c_code/1_2/nimsrc_nimconf.o \
c_code/1_2/nimsrc_main.o \
c_code/1_2/nimsrc_ast.o \
c_code/1_2/stdlib_intsets.o \
c_code/1_2/nimsrc_idgen.o \
c_code/1_2/nimsrc_astalgo.o \
c_code/1_2/nimsrc_rodutils.o \
c_code/1_2/nimsrc_syntaxes.o \
c_code/1_2/nimsrc_parser.o \
c_code/1_2/nimsrc_pbraces.o \
c_code/1_2/nimsrc_filters.o \
c_code/1_2/nimsrc_renderer.o \
c_code/1_2/nimsrc_filter_tmpl.o \
c_code/1_2/nimsrc_rodread.o \
c_code/1_2/nimsrc_types.o \
c_code/1_2/nimsrc_trees.o \
c_code/1_2/stdlib_memfiles.o \
c_code/1_2/nimsrc_rodwrite.o \
c_code/1_2/nimsrc_passes.o \
c_code/1_2/nimsrc_magicsys.o \
c_code/1_2/nimsrc_nimsets.o \
c_code/1_2/nimsrc_bitsets.o \
c_code/1_2/nimsrc_importer.o \
c_code/1_2/nimsrc_lookups.o \
c_code/1_2/nimsrc_semdata.o \
c_code/1_2/nimsrc_treetab.o \
c_code/1_2/nimsrc_vmdef.o \
c_code/1_2/nimsrc_prettybase.o \
c_code/1_2/stdlib_lexbase.o \
c_code/1_2/nimsrc_sem.o \
c_code/1_2/nimsrc_semfold.o \
c_code/1_2/nimsrc_saturate.o \
c_code/1_2/nimsrc_procfind.o \
c_code/1_2/nimsrc_pragmas.o \
c_code/1_2/nimsrc_semtypinst.o \
c_code/1_2/nimsrc_sigmatch.o \
c_code/1_2/nimsrc_parampatterns.o \
c_code/1_2/nimsrc_pretty.o \
c_code/1_2/nimsrc_docgen.o \
c_code/1_2/docutils_rstast.o \
c_code/1_2/stdlib_json.o \
c_code/1_2/stdlib_unicode.o \
c_code/1_2/stdlib_macros.o \
c_code/1_2/docutils_rst.o \
c_code/1_2/docutils_rstgen.o \
c_code/1_2/docutils_highlite.o \
c_code/1_2/stdlib_sequtils.o \
c_code/1_2/stdlib_algorithm.o \
c_code/1_2/nimsrc_sempass2.o \
c_code/1_2/nimsrc_guards.o \
c_code/1_2/stdlib_xmltree.o \
c_code/1_2/stdlib_cgi.o \
c_code/1_2/stdlib_cookies.o \
c_code/1_2/nimsrc_typesrenderer.o \
c_code/1_2/nimsrc_transf.o \
c_code/1_2/nimsrc_cgmeth.o \
c_code/1_2/nimsrc_lambdalifting.o \
c_code/1_2/nimsrc_lowerings.o \
c_code/1_2/nimsrc_vm.o \
c_code/1_2/nimsrc_vmgen.o \
c_code/1_2/stdlib_unsigned.o \
c_code/1_2/nimsrc_vmdeps.o \
c_code/1_2/nimsrc_vmmarshal.o \
c_code/1_2/nimsrc_evaltempl.o \
c_code/1_2/nimsrc_aliases.o \
c_code/1_2/nimsrc_patterns.o \
c_code/1_2/nimsrc_semmacrosanity.o \
c_code/1_2/nimsrc_semparallel.o \
c_code/1_2/nimsrc_plugins.o \
c_code/1_2/nimsrc_active.o \
c_code/1_2/nimsrc_locals.o \
c_code/1_2/nimsrc_cgen.o \
c_code/1_2/nimsrc_ccgutils.o \
c_code/1_2/nimsrc_cgendata.o \
c_code/1_2/nimsrc_ccgmerge.o \
c_code/1_2/nimsrc_jsgen.o \
c_code/1_2/nimsrc_passaux.o \
c_code/1_2/nimsrc_depends.o \
c_code/1_2/nimsrc_docgen2.o \
c_code/1_2/nimsrc_service.o \
c_code/1_2/stdlib_net.o \
c_code/1_2/stdlib_rawsockets.o \
c_code/1_2/nimsrc_modules.o \
c_code/1_2/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/1_2/nimsrc_nim.o \
c_code/1_2/stdlib_system.o \
c_code/1_2/nimsrc_testability.o \
c_code/1_2/nimsrc_commands.o \
c_code/1_2/stdlib_os.o \
c_code/1_2/stdlib_strutils.o \
c_code/1_2/stdlib_parseutils.o \
c_code/1_2/stdlib_times.o \
c_code/1_2/stdlib_winlean.o \
c_code/1_2/nimsrc_msgs.o \
c_code/1_2/nimsrc_options.o \
c_code/1_2/nimsrc_lists.o \
c_code/1_2/stdlib_strtabs.o \
c_code/1_2/stdlib_hashes.o \
c_code/1_2/stdlib_osproc.o \
c_code/1_2/stdlib_streams.o \
c_code/1_2/stdlib_cpuinfo.o \
c_code/1_2/stdlib_sets.o \
c_code/1_2/stdlib_math.o \
c_code/1_2/stdlib_tables.o \
c_code/1_2/nimsrc_ropes.o \
c_code/1_2/nimsrc_platform.o \
c_code/1_2/nimsrc_nversion.o \
c_code/1_2/nimsrc_condsyms.o \
c_code/1_2/nimsrc_idents.o \
c_code/1_2/nimsrc_extccomp.o \
c_code/1_2/nimsrc_crc.o \
c_code/1_2/nimsrc_wordrecg.o \
c_code/1_2/nimsrc_nimblecmd.o \
c_code/1_2/stdlib_parseopt.o \
c_code/1_2/nimsrc_lexer.o \
c_code/1_2/nimsrc_nimlexbase.o \
c_code/1_2/nimsrc_llstream.o \
c_code/1_2/nimsrc_nimconf.o \
c_code/1_2/nimsrc_main.o \
c_code/1_2/nimsrc_ast.o \
c_code/1_2/stdlib_intsets.o \
c_code/1_2/nimsrc_idgen.o \
c_code/1_2/nimsrc_astalgo.o \
c_code/1_2/nimsrc_rodutils.o \
c_code/1_2/nimsrc_syntaxes.o \
c_code/1_2/nimsrc_parser.o \
c_code/1_2/nimsrc_pbraces.o \
c_code/1_2/nimsrc_filters.o \
c_code/1_2/nimsrc_renderer.o \
c_code/1_2/nimsrc_filter_tmpl.o \
c_code/1_2/nimsrc_rodread.o \
c_code/1_2/nimsrc_types.o \
c_code/1_2/nimsrc_trees.o \
c_code/1_2/stdlib_memfiles.o \
c_code/1_2/nimsrc_rodwrite.o \
c_code/1_2/nimsrc_passes.o \
c_code/1_2/nimsrc_magicsys.o \
c_code/1_2/nimsrc_nimsets.o \
c_code/1_2/nimsrc_bitsets.o \
c_code/1_2/nimsrc_importer.o \
c_code/1_2/nimsrc_lookups.o \
c_code/1_2/nimsrc_semdata.o \
c_code/1_2/nimsrc_treetab.o \
c_code/1_2/nimsrc_vmdef.o \
c_code/1_2/nimsrc_prettybase.o \
c_code/1_2/stdlib_lexbase.o \
c_code/1_2/nimsrc_sem.o \
c_code/1_2/nimsrc_semfold.o \
c_code/1_2/nimsrc_saturate.o \
c_code/1_2/nimsrc_procfind.o \
c_code/1_2/nimsrc_pragmas.o \
c_code/1_2/nimsrc_semtypinst.o \
c_code/1_2/nimsrc_sigmatch.o \
c_code/1_2/nimsrc_parampatterns.o \
c_code/1_2/nimsrc_pretty.o \
c_code/1_2/nimsrc_docgen.o \
c_code/1_2/docutils_rstast.o \
c_code/1_2/stdlib_json.o \
c_code/1_2/stdlib_unicode.o \
c_code/1_2/stdlib_macros.o \
c_code/1_2/docutils_rst.o \
c_code/1_2/docutils_rstgen.o \
c_code/1_2/docutils_highlite.o \
c_code/1_2/stdlib_sequtils.o \
c_code/1_2/stdlib_algorithm.o \
c_code/1_2/nimsrc_sempass2.o \
c_code/1_2/nimsrc_guards.o \
c_code/1_2/stdlib_xmltree.o \
c_code/1_2/stdlib_cgi.o \
c_code/1_2/stdlib_cookies.o \
c_code/1_2/nimsrc_typesrenderer.o \
c_code/1_2/nimsrc_transf.o \
c_code/1_2/nimsrc_cgmeth.o \
c_code/1_2/nimsrc_lambdalifting.o \
c_code/1_2/nimsrc_lowerings.o \
c_code/1_2/nimsrc_vm.o \
c_code/1_2/nimsrc_vmgen.o \
c_code/1_2/stdlib_unsigned.o \
c_code/1_2/nimsrc_vmdeps.o \
c_code/1_2/nimsrc_vmmarshal.o \
c_code/1_2/nimsrc_evaltempl.o \
c_code/1_2/nimsrc_aliases.o \
c_code/1_2/nimsrc_patterns.o \
c_code/1_2/nimsrc_semmacrosanity.o \
c_code/1_2/nimsrc_semparallel.o \
c_code/1_2/nimsrc_plugins.o \
c_code/1_2/nimsrc_active.o \
c_code/1_2/nimsrc_locals.o \
c_code/1_2/nimsrc_cgen.o \
c_code/1_2/nimsrc_ccgutils.o \
c_code/1_2/nimsrc_cgendata.o \
c_code/1_2/nimsrc_ccgmerge.o \
c_code/1_2/nimsrc_jsgen.o \
c_code/1_2/nimsrc_passaux.o \
c_code/1_2/nimsrc_depends.o \
c_code/1_2/nimsrc_docgen2.o \
c_code/1_2/nimsrc_service.o \
c_code/1_2/stdlib_net.o \
c_code/1_2/stdlib_rawsockets.o \
c_code/1_2/nimsrc_modules.o \
c_code/1_2/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  powerpc64)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  arm)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  sparc)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  mips)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  powerpc)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  *)
    echo "Error: no C code generated for: [$myos: $mycpu]"
    exit 1
    ;;
  esac
  ;;
linux) 
  case $mycpu in
  i386)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_nim.c -o c_code/2_1/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_nim.c -o c_code/2_1/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_system.c -o c_code/2_1/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_system.c -o c_code/2_1/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_testability.c -o c_code/2_1/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_testability.c -o c_code/2_1/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_commands.c -o c_code/2_1/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_commands.c -o c_code/2_1/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_os.c -o c_code/2_1/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_os.c -o c_code/2_1/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_strutils.c -o c_code/2_1/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_strutils.c -o c_code/2_1/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_parseutils.c -o c_code/2_1/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_parseutils.c -o c_code/2_1/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_times.c -o c_code/2_1/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_times.c -o c_code/2_1/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_posix.c -o c_code/2_1/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_posix.c -o c_code/2_1/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_msgs.c -o c_code/2_1/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_msgs.c -o c_code/2_1/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_options.c -o c_code/2_1/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_options.c -o c_code/2_1/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_lists.c -o c_code/2_1/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_lists.c -o c_code/2_1/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_strtabs.c -o c_code/2_1/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_strtabs.c -o c_code/2_1/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_hashes.c -o c_code/2_1/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_hashes.c -o c_code/2_1/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_osproc.c -o c_code/2_1/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_osproc.c -o c_code/2_1/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_streams.c -o c_code/2_1/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_streams.c -o c_code/2_1/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_cpuinfo.c -o c_code/2_1/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_cpuinfo.c -o c_code/2_1/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_linux.c -o c_code/2_1/stdlib_linux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_linux.c -o c_code/2_1/stdlib_linux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_sets.c -o c_code/2_1/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_sets.c -o c_code/2_1/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_math.c -o c_code/2_1/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_math.c -o c_code/2_1/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_tables.c -o c_code/2_1/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_tables.c -o c_code/2_1/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_ropes.c -o c_code/2_1/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_ropes.c -o c_code/2_1/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_platform.c -o c_code/2_1/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_platform.c -o c_code/2_1/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_nversion.c -o c_code/2_1/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_nversion.c -o c_code/2_1/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_condsyms.c -o c_code/2_1/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_condsyms.c -o c_code/2_1/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_idents.c -o c_code/2_1/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_idents.c -o c_code/2_1/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_extccomp.c -o c_code/2_1/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_extccomp.c -o c_code/2_1/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_crc.c -o c_code/2_1/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_crc.c -o c_code/2_1/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_wordrecg.c -o c_code/2_1/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_wordrecg.c -o c_code/2_1/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_nimblecmd.c -o c_code/2_1/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_nimblecmd.c -o c_code/2_1/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_parseopt.c -o c_code/2_1/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_parseopt.c -o c_code/2_1/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_lexer.c -o c_code/2_1/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_lexer.c -o c_code/2_1/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_nimlexbase.c -o c_code/2_1/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_nimlexbase.c -o c_code/2_1/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_llstream.c -o c_code/2_1/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_llstream.c -o c_code/2_1/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_nimconf.c -o c_code/2_1/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_nimconf.c -o c_code/2_1/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_main.c -o c_code/2_1/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_main.c -o c_code/2_1/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_ast.c -o c_code/2_1/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_ast.c -o c_code/2_1/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_intsets.c -o c_code/2_1/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_intsets.c -o c_code/2_1/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_idgen.c -o c_code/2_1/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_idgen.c -o c_code/2_1/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_astalgo.c -o c_code/2_1/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_astalgo.c -o c_code/2_1/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_rodutils.c -o c_code/2_1/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_rodutils.c -o c_code/2_1/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_syntaxes.c -o c_code/2_1/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_syntaxes.c -o c_code/2_1/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_parser.c -o c_code/2_1/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_parser.c -o c_code/2_1/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_pbraces.c -o c_code/2_1/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_pbraces.c -o c_code/2_1/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_filters.c -o c_code/2_1/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_filters.c -o c_code/2_1/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_renderer.c -o c_code/2_1/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_renderer.c -o c_code/2_1/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_filter_tmpl.c -o c_code/2_1/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_filter_tmpl.c -o c_code/2_1/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_rodread.c -o c_code/2_1/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_rodread.c -o c_code/2_1/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_types.c -o c_code/2_1/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_types.c -o c_code/2_1/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_trees.c -o c_code/2_1/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_trees.c -o c_code/2_1/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_memfiles.c -o c_code/2_1/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_memfiles.c -o c_code/2_1/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_rodwrite.c -o c_code/2_1/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_rodwrite.c -o c_code/2_1/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_passes.c -o c_code/2_1/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_passes.c -o c_code/2_1/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_magicsys.c -o c_code/2_1/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_magicsys.c -o c_code/2_1/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_nimsets.c -o c_code/2_1/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_nimsets.c -o c_code/2_1/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_bitsets.c -o c_code/2_1/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_bitsets.c -o c_code/2_1/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_importer.c -o c_code/2_1/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_importer.c -o c_code/2_1/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_lookups.c -o c_code/2_1/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_lookups.c -o c_code/2_1/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_semdata.c -o c_code/2_1/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_semdata.c -o c_code/2_1/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_treetab.c -o c_code/2_1/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_treetab.c -o c_code/2_1/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_vmdef.c -o c_code/2_1/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_vmdef.c -o c_code/2_1/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_prettybase.c -o c_code/2_1/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_prettybase.c -o c_code/2_1/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_lexbase.c -o c_code/2_1/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_lexbase.c -o c_code/2_1/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_sem.c -o c_code/2_1/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_sem.c -o c_code/2_1/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_semfold.c -o c_code/2_1/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_semfold.c -o c_code/2_1/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_saturate.c -o c_code/2_1/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_saturate.c -o c_code/2_1/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_procfind.c -o c_code/2_1/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_procfind.c -o c_code/2_1/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_pragmas.c -o c_code/2_1/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_pragmas.c -o c_code/2_1/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_semtypinst.c -o c_code/2_1/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_semtypinst.c -o c_code/2_1/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_sigmatch.c -o c_code/2_1/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_sigmatch.c -o c_code/2_1/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_parampatterns.c -o c_code/2_1/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_parampatterns.c -o c_code/2_1/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_pretty.c -o c_code/2_1/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_pretty.c -o c_code/2_1/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_docgen.c -o c_code/2_1/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_docgen.c -o c_code/2_1/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/docutils_rstast.c -o c_code/2_1/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/docutils_rstast.c -o c_code/2_1/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_json.c -o c_code/2_1/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_json.c -o c_code/2_1/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_unicode.c -o c_code/2_1/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_unicode.c -o c_code/2_1/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_macros.c -o c_code/2_1/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_macros.c -o c_code/2_1/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/docutils_rst.c -o c_code/2_1/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/docutils_rst.c -o c_code/2_1/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/docutils_rstgen.c -o c_code/2_1/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/docutils_rstgen.c -o c_code/2_1/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/docutils_highlite.c -o c_code/2_1/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/docutils_highlite.c -o c_code/2_1/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_sequtils.c -o c_code/2_1/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_sequtils.c -o c_code/2_1/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_algorithm.c -o c_code/2_1/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_algorithm.c -o c_code/2_1/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_sempass2.c -o c_code/2_1/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_sempass2.c -o c_code/2_1/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_guards.c -o c_code/2_1/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_guards.c -o c_code/2_1/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_xmltree.c -o c_code/2_1/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_xmltree.c -o c_code/2_1/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_cgi.c -o c_code/2_1/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_cgi.c -o c_code/2_1/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_cookies.c -o c_code/2_1/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_cookies.c -o c_code/2_1/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_typesrenderer.c -o c_code/2_1/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_typesrenderer.c -o c_code/2_1/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_transf.c -o c_code/2_1/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_transf.c -o c_code/2_1/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_cgmeth.c -o c_code/2_1/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_cgmeth.c -o c_code/2_1/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_lambdalifting.c -o c_code/2_1/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_lambdalifting.c -o c_code/2_1/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_lowerings.c -o c_code/2_1/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_lowerings.c -o c_code/2_1/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_vm.c -o c_code/2_1/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_vm.c -o c_code/2_1/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_vmgen.c -o c_code/2_1/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_vmgen.c -o c_code/2_1/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_unsigned.c -o c_code/2_1/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_unsigned.c -o c_code/2_1/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_vmdeps.c -o c_code/2_1/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_vmdeps.c -o c_code/2_1/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_vmmarshal.c -o c_code/2_1/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_vmmarshal.c -o c_code/2_1/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_evaltempl.c -o c_code/2_1/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_evaltempl.c -o c_code/2_1/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_aliases.c -o c_code/2_1/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_aliases.c -o c_code/2_1/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_patterns.c -o c_code/2_1/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_patterns.c -o c_code/2_1/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_semmacrosanity.c -o c_code/2_1/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_semmacrosanity.c -o c_code/2_1/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_semparallel.c -o c_code/2_1/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_semparallel.c -o c_code/2_1/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_plugins.c -o c_code/2_1/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_plugins.c -o c_code/2_1/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_active.c -o c_code/2_1/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_active.c -o c_code/2_1/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_locals.c -o c_code/2_1/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_locals.c -o c_code/2_1/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_cgen.c -o c_code/2_1/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_cgen.c -o c_code/2_1/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_ccgutils.c -o c_code/2_1/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_ccgutils.c -o c_code/2_1/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_cgendata.c -o c_code/2_1/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_cgendata.c -o c_code/2_1/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_ccgmerge.c -o c_code/2_1/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_ccgmerge.c -o c_code/2_1/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_jsgen.c -o c_code/2_1/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_jsgen.c -o c_code/2_1/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_passaux.c -o c_code/2_1/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_passaux.c -o c_code/2_1/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_depends.c -o c_code/2_1/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_depends.c -o c_code/2_1/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_docgen2.c -o c_code/2_1/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_docgen2.c -o c_code/2_1/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_service.c -o c_code/2_1/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_service.c -o c_code/2_1/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_net.c -o c_code/2_1/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_net.c -o c_code/2_1/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_rawsockets.c -o c_code/2_1/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/stdlib_rawsockets.c -o c_code/2_1/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_modules.c -o c_code/2_1/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_modules.c -o c_code/2_1/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_nodejs.c -o c_code/2_1/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_1/nimsrc_nodejs.c -o c_code/2_1/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/2_1/nimsrc_nim.o \
c_code/2_1/stdlib_system.o \
c_code/2_1/nimsrc_testability.o \
c_code/2_1/nimsrc_commands.o \
c_code/2_1/stdlib_os.o \
c_code/2_1/stdlib_strutils.o \
c_code/2_1/stdlib_parseutils.o \
c_code/2_1/stdlib_times.o \
c_code/2_1/stdlib_posix.o \
c_code/2_1/nimsrc_msgs.o \
c_code/2_1/nimsrc_options.o \
c_code/2_1/nimsrc_lists.o \
c_code/2_1/stdlib_strtabs.o \
c_code/2_1/stdlib_hashes.o \
c_code/2_1/stdlib_osproc.o \
c_code/2_1/stdlib_streams.o \
c_code/2_1/stdlib_cpuinfo.o \
c_code/2_1/stdlib_linux.o \
c_code/2_1/stdlib_sets.o \
c_code/2_1/stdlib_math.o \
c_code/2_1/stdlib_tables.o \
c_code/2_1/nimsrc_ropes.o \
c_code/2_1/nimsrc_platform.o \
c_code/2_1/nimsrc_nversion.o \
c_code/2_1/nimsrc_condsyms.o \
c_code/2_1/nimsrc_idents.o \
c_code/2_1/nimsrc_extccomp.o \
c_code/2_1/nimsrc_crc.o \
c_code/2_1/nimsrc_wordrecg.o \
c_code/2_1/nimsrc_nimblecmd.o \
c_code/2_1/stdlib_parseopt.o \
c_code/2_1/nimsrc_lexer.o \
c_code/2_1/nimsrc_nimlexbase.o \
c_code/2_1/nimsrc_llstream.o \
c_code/2_1/nimsrc_nimconf.o \
c_code/2_1/nimsrc_main.o \
c_code/2_1/nimsrc_ast.o \
c_code/2_1/stdlib_intsets.o \
c_code/2_1/nimsrc_idgen.o \
c_code/2_1/nimsrc_astalgo.o \
c_code/2_1/nimsrc_rodutils.o \
c_code/2_1/nimsrc_syntaxes.o \
c_code/2_1/nimsrc_parser.o \
c_code/2_1/nimsrc_pbraces.o \
c_code/2_1/nimsrc_filters.o \
c_code/2_1/nimsrc_renderer.o \
c_code/2_1/nimsrc_filter_tmpl.o \
c_code/2_1/nimsrc_rodread.o \
c_code/2_1/nimsrc_types.o \
c_code/2_1/nimsrc_trees.o \
c_code/2_1/stdlib_memfiles.o \
c_code/2_1/nimsrc_rodwrite.o \
c_code/2_1/nimsrc_passes.o \
c_code/2_1/nimsrc_magicsys.o \
c_code/2_1/nimsrc_nimsets.o \
c_code/2_1/nimsrc_bitsets.o \
c_code/2_1/nimsrc_importer.o \
c_code/2_1/nimsrc_lookups.o \
c_code/2_1/nimsrc_semdata.o \
c_code/2_1/nimsrc_treetab.o \
c_code/2_1/nimsrc_vmdef.o \
c_code/2_1/nimsrc_prettybase.o \
c_code/2_1/stdlib_lexbase.o \
c_code/2_1/nimsrc_sem.o \
c_code/2_1/nimsrc_semfold.o \
c_code/2_1/nimsrc_saturate.o \
c_code/2_1/nimsrc_procfind.o \
c_code/2_1/nimsrc_pragmas.o \
c_code/2_1/nimsrc_semtypinst.o \
c_code/2_1/nimsrc_sigmatch.o \
c_code/2_1/nimsrc_parampatterns.o \
c_code/2_1/nimsrc_pretty.o \
c_code/2_1/nimsrc_docgen.o \
c_code/2_1/docutils_rstast.o \
c_code/2_1/stdlib_json.o \
c_code/2_1/stdlib_unicode.o \
c_code/2_1/stdlib_macros.o \
c_code/2_1/docutils_rst.o \
c_code/2_1/docutils_rstgen.o \
c_code/2_1/docutils_highlite.o \
c_code/2_1/stdlib_sequtils.o \
c_code/2_1/stdlib_algorithm.o \
c_code/2_1/nimsrc_sempass2.o \
c_code/2_1/nimsrc_guards.o \
c_code/2_1/stdlib_xmltree.o \
c_code/2_1/stdlib_cgi.o \
c_code/2_1/stdlib_cookies.o \
c_code/2_1/nimsrc_typesrenderer.o \
c_code/2_1/nimsrc_transf.o \
c_code/2_1/nimsrc_cgmeth.o \
c_code/2_1/nimsrc_lambdalifting.o \
c_code/2_1/nimsrc_lowerings.o \
c_code/2_1/nimsrc_vm.o \
c_code/2_1/nimsrc_vmgen.o \
c_code/2_1/stdlib_unsigned.o \
c_code/2_1/nimsrc_vmdeps.o \
c_code/2_1/nimsrc_vmmarshal.o \
c_code/2_1/nimsrc_evaltempl.o \
c_code/2_1/nimsrc_aliases.o \
c_code/2_1/nimsrc_patterns.o \
c_code/2_1/nimsrc_semmacrosanity.o \
c_code/2_1/nimsrc_semparallel.o \
c_code/2_1/nimsrc_plugins.o \
c_code/2_1/nimsrc_active.o \
c_code/2_1/nimsrc_locals.o \
c_code/2_1/nimsrc_cgen.o \
c_code/2_1/nimsrc_ccgutils.o \
c_code/2_1/nimsrc_cgendata.o \
c_code/2_1/nimsrc_ccgmerge.o \
c_code/2_1/nimsrc_jsgen.o \
c_code/2_1/nimsrc_passaux.o \
c_code/2_1/nimsrc_depends.o \
c_code/2_1/nimsrc_docgen2.o \
c_code/2_1/nimsrc_service.o \
c_code/2_1/stdlib_net.o \
c_code/2_1/stdlib_rawsockets.o \
c_code/2_1/nimsrc_modules.o \
c_code/2_1/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/2_1/nimsrc_nim.o \
c_code/2_1/stdlib_system.o \
c_code/2_1/nimsrc_testability.o \
c_code/2_1/nimsrc_commands.o \
c_code/2_1/stdlib_os.o \
c_code/2_1/stdlib_strutils.o \
c_code/2_1/stdlib_parseutils.o \
c_code/2_1/stdlib_times.o \
c_code/2_1/stdlib_posix.o \
c_code/2_1/nimsrc_msgs.o \
c_code/2_1/nimsrc_options.o \
c_code/2_1/nimsrc_lists.o \
c_code/2_1/stdlib_strtabs.o \
c_code/2_1/stdlib_hashes.o \
c_code/2_1/stdlib_osproc.o \
c_code/2_1/stdlib_streams.o \
c_code/2_1/stdlib_cpuinfo.o \
c_code/2_1/stdlib_linux.o \
c_code/2_1/stdlib_sets.o \
c_code/2_1/stdlib_math.o \
c_code/2_1/stdlib_tables.o \
c_code/2_1/nimsrc_ropes.o \
c_code/2_1/nimsrc_platform.o \
c_code/2_1/nimsrc_nversion.o \
c_code/2_1/nimsrc_condsyms.o \
c_code/2_1/nimsrc_idents.o \
c_code/2_1/nimsrc_extccomp.o \
c_code/2_1/nimsrc_crc.o \
c_code/2_1/nimsrc_wordrecg.o \
c_code/2_1/nimsrc_nimblecmd.o \
c_code/2_1/stdlib_parseopt.o \
c_code/2_1/nimsrc_lexer.o \
c_code/2_1/nimsrc_nimlexbase.o \
c_code/2_1/nimsrc_llstream.o \
c_code/2_1/nimsrc_nimconf.o \
c_code/2_1/nimsrc_main.o \
c_code/2_1/nimsrc_ast.o \
c_code/2_1/stdlib_intsets.o \
c_code/2_1/nimsrc_idgen.o \
c_code/2_1/nimsrc_astalgo.o \
c_code/2_1/nimsrc_rodutils.o \
c_code/2_1/nimsrc_syntaxes.o \
c_code/2_1/nimsrc_parser.o \
c_code/2_1/nimsrc_pbraces.o \
c_code/2_1/nimsrc_filters.o \
c_code/2_1/nimsrc_renderer.o \
c_code/2_1/nimsrc_filter_tmpl.o \
c_code/2_1/nimsrc_rodread.o \
c_code/2_1/nimsrc_types.o \
c_code/2_1/nimsrc_trees.o \
c_code/2_1/stdlib_memfiles.o \
c_code/2_1/nimsrc_rodwrite.o \
c_code/2_1/nimsrc_passes.o \
c_code/2_1/nimsrc_magicsys.o \
c_code/2_1/nimsrc_nimsets.o \
c_code/2_1/nimsrc_bitsets.o \
c_code/2_1/nimsrc_importer.o \
c_code/2_1/nimsrc_lookups.o \
c_code/2_1/nimsrc_semdata.o \
c_code/2_1/nimsrc_treetab.o \
c_code/2_1/nimsrc_vmdef.o \
c_code/2_1/nimsrc_prettybase.o \
c_code/2_1/stdlib_lexbase.o \
c_code/2_1/nimsrc_sem.o \
c_code/2_1/nimsrc_semfold.o \
c_code/2_1/nimsrc_saturate.o \
c_code/2_1/nimsrc_procfind.o \
c_code/2_1/nimsrc_pragmas.o \
c_code/2_1/nimsrc_semtypinst.o \
c_code/2_1/nimsrc_sigmatch.o \
c_code/2_1/nimsrc_parampatterns.o \
c_code/2_1/nimsrc_pretty.o \
c_code/2_1/nimsrc_docgen.o \
c_code/2_1/docutils_rstast.o \
c_code/2_1/stdlib_json.o \
c_code/2_1/stdlib_unicode.o \
c_code/2_1/stdlib_macros.o \
c_code/2_1/docutils_rst.o \
c_code/2_1/docutils_rstgen.o \
c_code/2_1/docutils_highlite.o \
c_code/2_1/stdlib_sequtils.o \
c_code/2_1/stdlib_algorithm.o \
c_code/2_1/nimsrc_sempass2.o \
c_code/2_1/nimsrc_guards.o \
c_code/2_1/stdlib_xmltree.o \
c_code/2_1/stdlib_cgi.o \
c_code/2_1/stdlib_cookies.o \
c_code/2_1/nimsrc_typesrenderer.o \
c_code/2_1/nimsrc_transf.o \
c_code/2_1/nimsrc_cgmeth.o \
c_code/2_1/nimsrc_lambdalifting.o \
c_code/2_1/nimsrc_lowerings.o \
c_code/2_1/nimsrc_vm.o \
c_code/2_1/nimsrc_vmgen.o \
c_code/2_1/stdlib_unsigned.o \
c_code/2_1/nimsrc_vmdeps.o \
c_code/2_1/nimsrc_vmmarshal.o \
c_code/2_1/nimsrc_evaltempl.o \
c_code/2_1/nimsrc_aliases.o \
c_code/2_1/nimsrc_patterns.o \
c_code/2_1/nimsrc_semmacrosanity.o \
c_code/2_1/nimsrc_semparallel.o \
c_code/2_1/nimsrc_plugins.o \
c_code/2_1/nimsrc_active.o \
c_code/2_1/nimsrc_locals.o \
c_code/2_1/nimsrc_cgen.o \
c_code/2_1/nimsrc_ccgutils.o \
c_code/2_1/nimsrc_cgendata.o \
c_code/2_1/nimsrc_ccgmerge.o \
c_code/2_1/nimsrc_jsgen.o \
c_code/2_1/nimsrc_passaux.o \
c_code/2_1/nimsrc_depends.o \
c_code/2_1/nimsrc_docgen2.o \
c_code/2_1/nimsrc_service.o \
c_code/2_1/stdlib_net.o \
c_code/2_1/stdlib_rawsockets.o \
c_code/2_1/nimsrc_modules.o \
c_code/2_1/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  amd64)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_nim.c -o c_code/2_2/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_nim.c -o c_code/2_2/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_system.c -o c_code/2_2/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_system.c -o c_code/2_2/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_testability.c -o c_code/2_2/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_testability.c -o c_code/2_2/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_commands.c -o c_code/2_2/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_commands.c -o c_code/2_2/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_os.c -o c_code/2_2/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_os.c -o c_code/2_2/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_strutils.c -o c_code/2_2/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_strutils.c -o c_code/2_2/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_parseutils.c -o c_code/2_2/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_parseutils.c -o c_code/2_2/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_times.c -o c_code/2_2/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_times.c -o c_code/2_2/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_posix.c -o c_code/2_2/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_posix.c -o c_code/2_2/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_msgs.c -o c_code/2_2/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_msgs.c -o c_code/2_2/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_options.c -o c_code/2_2/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_options.c -o c_code/2_2/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_lists.c -o c_code/2_2/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_lists.c -o c_code/2_2/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_strtabs.c -o c_code/2_2/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_strtabs.c -o c_code/2_2/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_hashes.c -o c_code/2_2/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_hashes.c -o c_code/2_2/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_osproc.c -o c_code/2_2/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_osproc.c -o c_code/2_2/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_streams.c -o c_code/2_2/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_streams.c -o c_code/2_2/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_cpuinfo.c -o c_code/2_2/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_cpuinfo.c -o c_code/2_2/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_linux.c -o c_code/2_2/stdlib_linux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_linux.c -o c_code/2_2/stdlib_linux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_sets.c -o c_code/2_2/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_sets.c -o c_code/2_2/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_math.c -o c_code/2_2/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_math.c -o c_code/2_2/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_tables.c -o c_code/2_2/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_tables.c -o c_code/2_2/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_ropes.c -o c_code/2_2/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_ropes.c -o c_code/2_2/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_platform.c -o c_code/2_2/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_platform.c -o c_code/2_2/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_nversion.c -o c_code/2_2/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_nversion.c -o c_code/2_2/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_condsyms.c -o c_code/2_2/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_condsyms.c -o c_code/2_2/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_idents.c -o c_code/2_2/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_idents.c -o c_code/2_2/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_extccomp.c -o c_code/2_2/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_extccomp.c -o c_code/2_2/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_crc.c -o c_code/2_2/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_crc.c -o c_code/2_2/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_wordrecg.c -o c_code/2_2/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_wordrecg.c -o c_code/2_2/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_nimblecmd.c -o c_code/2_2/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_nimblecmd.c -o c_code/2_2/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_parseopt.c -o c_code/2_2/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_parseopt.c -o c_code/2_2/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_lexer.c -o c_code/2_2/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_lexer.c -o c_code/2_2/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_nimlexbase.c -o c_code/2_2/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_nimlexbase.c -o c_code/2_2/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_llstream.c -o c_code/2_2/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_llstream.c -o c_code/2_2/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_nimconf.c -o c_code/2_2/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_nimconf.c -o c_code/2_2/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_main.c -o c_code/2_2/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_main.c -o c_code/2_2/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_ast.c -o c_code/2_2/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_ast.c -o c_code/2_2/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_intsets.c -o c_code/2_2/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_intsets.c -o c_code/2_2/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_idgen.c -o c_code/2_2/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_idgen.c -o c_code/2_2/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_astalgo.c -o c_code/2_2/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_astalgo.c -o c_code/2_2/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_rodutils.c -o c_code/2_2/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_rodutils.c -o c_code/2_2/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_syntaxes.c -o c_code/2_2/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_syntaxes.c -o c_code/2_2/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_parser.c -o c_code/2_2/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_parser.c -o c_code/2_2/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_pbraces.c -o c_code/2_2/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_pbraces.c -o c_code/2_2/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_filters.c -o c_code/2_2/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_filters.c -o c_code/2_2/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_renderer.c -o c_code/2_2/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_renderer.c -o c_code/2_2/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_filter_tmpl.c -o c_code/2_2/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_filter_tmpl.c -o c_code/2_2/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_rodread.c -o c_code/2_2/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_rodread.c -o c_code/2_2/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_types.c -o c_code/2_2/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_types.c -o c_code/2_2/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_trees.c -o c_code/2_2/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_trees.c -o c_code/2_2/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_memfiles.c -o c_code/2_2/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_memfiles.c -o c_code/2_2/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_rodwrite.c -o c_code/2_2/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_rodwrite.c -o c_code/2_2/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_passes.c -o c_code/2_2/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_passes.c -o c_code/2_2/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_magicsys.c -o c_code/2_2/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_magicsys.c -o c_code/2_2/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_nimsets.c -o c_code/2_2/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_nimsets.c -o c_code/2_2/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_bitsets.c -o c_code/2_2/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_bitsets.c -o c_code/2_2/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_importer.c -o c_code/2_2/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_importer.c -o c_code/2_2/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_lookups.c -o c_code/2_2/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_lookups.c -o c_code/2_2/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_semdata.c -o c_code/2_2/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_semdata.c -o c_code/2_2/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_treetab.c -o c_code/2_2/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_treetab.c -o c_code/2_2/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_vmdef.c -o c_code/2_2/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_vmdef.c -o c_code/2_2/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_prettybase.c -o c_code/2_2/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_prettybase.c -o c_code/2_2/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_lexbase.c -o c_code/2_2/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_lexbase.c -o c_code/2_2/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_sem.c -o c_code/2_2/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_sem.c -o c_code/2_2/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_semfold.c -o c_code/2_2/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_semfold.c -o c_code/2_2/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_saturate.c -o c_code/2_2/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_saturate.c -o c_code/2_2/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_procfind.c -o c_code/2_2/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_procfind.c -o c_code/2_2/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_pragmas.c -o c_code/2_2/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_pragmas.c -o c_code/2_2/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_semtypinst.c -o c_code/2_2/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_semtypinst.c -o c_code/2_2/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_sigmatch.c -o c_code/2_2/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_sigmatch.c -o c_code/2_2/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_parampatterns.c -o c_code/2_2/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_parampatterns.c -o c_code/2_2/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_pretty.c -o c_code/2_2/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_pretty.c -o c_code/2_2/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_docgen.c -o c_code/2_2/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_docgen.c -o c_code/2_2/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/docutils_rstast.c -o c_code/2_2/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/docutils_rstast.c -o c_code/2_2/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_json.c -o c_code/2_2/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_json.c -o c_code/2_2/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_unicode.c -o c_code/2_2/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_unicode.c -o c_code/2_2/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_macros.c -o c_code/2_2/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_macros.c -o c_code/2_2/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/docutils_rst.c -o c_code/2_2/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/docutils_rst.c -o c_code/2_2/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/docutils_rstgen.c -o c_code/2_2/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/docutils_rstgen.c -o c_code/2_2/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/docutils_highlite.c -o c_code/2_2/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/docutils_highlite.c -o c_code/2_2/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_sequtils.c -o c_code/2_2/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_sequtils.c -o c_code/2_2/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_algorithm.c -o c_code/2_2/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_algorithm.c -o c_code/2_2/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_sempass2.c -o c_code/2_2/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_sempass2.c -o c_code/2_2/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_guards.c -o c_code/2_2/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_guards.c -o c_code/2_2/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_xmltree.c -o c_code/2_2/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_xmltree.c -o c_code/2_2/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_cgi.c -o c_code/2_2/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_cgi.c -o c_code/2_2/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_cookies.c -o c_code/2_2/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_cookies.c -o c_code/2_2/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_typesrenderer.c -o c_code/2_2/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_typesrenderer.c -o c_code/2_2/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_transf.c -o c_code/2_2/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_transf.c -o c_code/2_2/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_cgmeth.c -o c_code/2_2/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_cgmeth.c -o c_code/2_2/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_lambdalifting.c -o c_code/2_2/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_lambdalifting.c -o c_code/2_2/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_lowerings.c -o c_code/2_2/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_lowerings.c -o c_code/2_2/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_vm.c -o c_code/2_2/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_vm.c -o c_code/2_2/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_vmgen.c -o c_code/2_2/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_vmgen.c -o c_code/2_2/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_unsigned.c -o c_code/2_2/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_unsigned.c -o c_code/2_2/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_vmdeps.c -o c_code/2_2/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_vmdeps.c -o c_code/2_2/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_vmmarshal.c -o c_code/2_2/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_vmmarshal.c -o c_code/2_2/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_evaltempl.c -o c_code/2_2/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_evaltempl.c -o c_code/2_2/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_aliases.c -o c_code/2_2/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_aliases.c -o c_code/2_2/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_patterns.c -o c_code/2_2/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_patterns.c -o c_code/2_2/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_semmacrosanity.c -o c_code/2_2/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_semmacrosanity.c -o c_code/2_2/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_semparallel.c -o c_code/2_2/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_semparallel.c -o c_code/2_2/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_plugins.c -o c_code/2_2/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_plugins.c -o c_code/2_2/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_active.c -o c_code/2_2/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_active.c -o c_code/2_2/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_locals.c -o c_code/2_2/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_locals.c -o c_code/2_2/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_cgen.c -o c_code/2_2/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_cgen.c -o c_code/2_2/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_ccgutils.c -o c_code/2_2/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_ccgutils.c -o c_code/2_2/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_cgendata.c -o c_code/2_2/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_cgendata.c -o c_code/2_2/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_ccgmerge.c -o c_code/2_2/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_ccgmerge.c -o c_code/2_2/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_jsgen.c -o c_code/2_2/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_jsgen.c -o c_code/2_2/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_passaux.c -o c_code/2_2/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_passaux.c -o c_code/2_2/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_depends.c -o c_code/2_2/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_depends.c -o c_code/2_2/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_docgen2.c -o c_code/2_2/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_docgen2.c -o c_code/2_2/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_service.c -o c_code/2_2/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_service.c -o c_code/2_2/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_net.c -o c_code/2_2/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_net.c -o c_code/2_2/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_rawsockets.c -o c_code/2_2/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/stdlib_rawsockets.c -o c_code/2_2/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_modules.c -o c_code/2_2/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_modules.c -o c_code/2_2/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_nodejs.c -o c_code/2_2/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_2/nimsrc_nodejs.c -o c_code/2_2/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/2_2/nimsrc_nim.o \
c_code/2_2/stdlib_system.o \
c_code/2_2/nimsrc_testability.o \
c_code/2_2/nimsrc_commands.o \
c_code/2_2/stdlib_os.o \
c_code/2_2/stdlib_strutils.o \
c_code/2_2/stdlib_parseutils.o \
c_code/2_2/stdlib_times.o \
c_code/2_2/stdlib_posix.o \
c_code/2_2/nimsrc_msgs.o \
c_code/2_2/nimsrc_options.o \
c_code/2_2/nimsrc_lists.o \
c_code/2_2/stdlib_strtabs.o \
c_code/2_2/stdlib_hashes.o \
c_code/2_2/stdlib_osproc.o \
c_code/2_2/stdlib_streams.o \
c_code/2_2/stdlib_cpuinfo.o \
c_code/2_2/stdlib_linux.o \
c_code/2_2/stdlib_sets.o \
c_code/2_2/stdlib_math.o \
c_code/2_2/stdlib_tables.o \
c_code/2_2/nimsrc_ropes.o \
c_code/2_2/nimsrc_platform.o \
c_code/2_2/nimsrc_nversion.o \
c_code/2_2/nimsrc_condsyms.o \
c_code/2_2/nimsrc_idents.o \
c_code/2_2/nimsrc_extccomp.o \
c_code/2_2/nimsrc_crc.o \
c_code/2_2/nimsrc_wordrecg.o \
c_code/2_2/nimsrc_nimblecmd.o \
c_code/2_2/stdlib_parseopt.o \
c_code/2_2/nimsrc_lexer.o \
c_code/2_2/nimsrc_nimlexbase.o \
c_code/2_2/nimsrc_llstream.o \
c_code/2_2/nimsrc_nimconf.o \
c_code/2_2/nimsrc_main.o \
c_code/2_2/nimsrc_ast.o \
c_code/2_2/stdlib_intsets.o \
c_code/2_2/nimsrc_idgen.o \
c_code/2_2/nimsrc_astalgo.o \
c_code/2_2/nimsrc_rodutils.o \
c_code/2_2/nimsrc_syntaxes.o \
c_code/2_2/nimsrc_parser.o \
c_code/2_2/nimsrc_pbraces.o \
c_code/2_2/nimsrc_filters.o \
c_code/2_2/nimsrc_renderer.o \
c_code/2_2/nimsrc_filter_tmpl.o \
c_code/2_2/nimsrc_rodread.o \
c_code/2_2/nimsrc_types.o \
c_code/2_2/nimsrc_trees.o \
c_code/2_2/stdlib_memfiles.o \
c_code/2_2/nimsrc_rodwrite.o \
c_code/2_2/nimsrc_passes.o \
c_code/2_2/nimsrc_magicsys.o \
c_code/2_2/nimsrc_nimsets.o \
c_code/2_2/nimsrc_bitsets.o \
c_code/2_2/nimsrc_importer.o \
c_code/2_2/nimsrc_lookups.o \
c_code/2_2/nimsrc_semdata.o \
c_code/2_2/nimsrc_treetab.o \
c_code/2_2/nimsrc_vmdef.o \
c_code/2_2/nimsrc_prettybase.o \
c_code/2_2/stdlib_lexbase.o \
c_code/2_2/nimsrc_sem.o \
c_code/2_2/nimsrc_semfold.o \
c_code/2_2/nimsrc_saturate.o \
c_code/2_2/nimsrc_procfind.o \
c_code/2_2/nimsrc_pragmas.o \
c_code/2_2/nimsrc_semtypinst.o \
c_code/2_2/nimsrc_sigmatch.o \
c_code/2_2/nimsrc_parampatterns.o \
c_code/2_2/nimsrc_pretty.o \
c_code/2_2/nimsrc_docgen.o \
c_code/2_2/docutils_rstast.o \
c_code/2_2/stdlib_json.o \
c_code/2_2/stdlib_unicode.o \
c_code/2_2/stdlib_macros.o \
c_code/2_2/docutils_rst.o \
c_code/2_2/docutils_rstgen.o \
c_code/2_2/docutils_highlite.o \
c_code/2_2/stdlib_sequtils.o \
c_code/2_2/stdlib_algorithm.o \
c_code/2_2/nimsrc_sempass2.o \
c_code/2_2/nimsrc_guards.o \
c_code/2_2/stdlib_xmltree.o \
c_code/2_2/stdlib_cgi.o \
c_code/2_2/stdlib_cookies.o \
c_code/2_2/nimsrc_typesrenderer.o \
c_code/2_2/nimsrc_transf.o \
c_code/2_2/nimsrc_cgmeth.o \
c_code/2_2/nimsrc_lambdalifting.o \
c_code/2_2/nimsrc_lowerings.o \
c_code/2_2/nimsrc_vm.o \
c_code/2_2/nimsrc_vmgen.o \
c_code/2_2/stdlib_unsigned.o \
c_code/2_2/nimsrc_vmdeps.o \
c_code/2_2/nimsrc_vmmarshal.o \
c_code/2_2/nimsrc_evaltempl.o \
c_code/2_2/nimsrc_aliases.o \
c_code/2_2/nimsrc_patterns.o \
c_code/2_2/nimsrc_semmacrosanity.o \
c_code/2_2/nimsrc_semparallel.o \
c_code/2_2/nimsrc_plugins.o \
c_code/2_2/nimsrc_active.o \
c_code/2_2/nimsrc_locals.o \
c_code/2_2/nimsrc_cgen.o \
c_code/2_2/nimsrc_ccgutils.o \
c_code/2_2/nimsrc_cgendata.o \
c_code/2_2/nimsrc_ccgmerge.o \
c_code/2_2/nimsrc_jsgen.o \
c_code/2_2/nimsrc_passaux.o \
c_code/2_2/nimsrc_depends.o \
c_code/2_2/nimsrc_docgen2.o \
c_code/2_2/nimsrc_service.o \
c_code/2_2/stdlib_net.o \
c_code/2_2/stdlib_rawsockets.o \
c_code/2_2/nimsrc_modules.o \
c_code/2_2/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/2_2/nimsrc_nim.o \
c_code/2_2/stdlib_system.o \
c_code/2_2/nimsrc_testability.o \
c_code/2_2/nimsrc_commands.o \
c_code/2_2/stdlib_os.o \
c_code/2_2/stdlib_strutils.o \
c_code/2_2/stdlib_parseutils.o \
c_code/2_2/stdlib_times.o \
c_code/2_2/stdlib_posix.o \
c_code/2_2/nimsrc_msgs.o \
c_code/2_2/nimsrc_options.o \
c_code/2_2/nimsrc_lists.o \
c_code/2_2/stdlib_strtabs.o \
c_code/2_2/stdlib_hashes.o \
c_code/2_2/stdlib_osproc.o \
c_code/2_2/stdlib_streams.o \
c_code/2_2/stdlib_cpuinfo.o \
c_code/2_2/stdlib_linux.o \
c_code/2_2/stdlib_sets.o \
c_code/2_2/stdlib_math.o \
c_code/2_2/stdlib_tables.o \
c_code/2_2/nimsrc_ropes.o \
c_code/2_2/nimsrc_platform.o \
c_code/2_2/nimsrc_nversion.o \
c_code/2_2/nimsrc_condsyms.o \
c_code/2_2/nimsrc_idents.o \
c_code/2_2/nimsrc_extccomp.o \
c_code/2_2/nimsrc_crc.o \
c_code/2_2/nimsrc_wordrecg.o \
c_code/2_2/nimsrc_nimblecmd.o \
c_code/2_2/stdlib_parseopt.o \
c_code/2_2/nimsrc_lexer.o \
c_code/2_2/nimsrc_nimlexbase.o \
c_code/2_2/nimsrc_llstream.o \
c_code/2_2/nimsrc_nimconf.o \
c_code/2_2/nimsrc_main.o \
c_code/2_2/nimsrc_ast.o \
c_code/2_2/stdlib_intsets.o \
c_code/2_2/nimsrc_idgen.o \
c_code/2_2/nimsrc_astalgo.o \
c_code/2_2/nimsrc_rodutils.o \
c_code/2_2/nimsrc_syntaxes.o \
c_code/2_2/nimsrc_parser.o \
c_code/2_2/nimsrc_pbraces.o \
c_code/2_2/nimsrc_filters.o \
c_code/2_2/nimsrc_renderer.o \
c_code/2_2/nimsrc_filter_tmpl.o \
c_code/2_2/nimsrc_rodread.o \
c_code/2_2/nimsrc_types.o \
c_code/2_2/nimsrc_trees.o \
c_code/2_2/stdlib_memfiles.o \
c_code/2_2/nimsrc_rodwrite.o \
c_code/2_2/nimsrc_passes.o \
c_code/2_2/nimsrc_magicsys.o \
c_code/2_2/nimsrc_nimsets.o \
c_code/2_2/nimsrc_bitsets.o \
c_code/2_2/nimsrc_importer.o \
c_code/2_2/nimsrc_lookups.o \
c_code/2_2/nimsrc_semdata.o \
c_code/2_2/nimsrc_treetab.o \
c_code/2_2/nimsrc_vmdef.o \
c_code/2_2/nimsrc_prettybase.o \
c_code/2_2/stdlib_lexbase.o \
c_code/2_2/nimsrc_sem.o \
c_code/2_2/nimsrc_semfold.o \
c_code/2_2/nimsrc_saturate.o \
c_code/2_2/nimsrc_procfind.o \
c_code/2_2/nimsrc_pragmas.o \
c_code/2_2/nimsrc_semtypinst.o \
c_code/2_2/nimsrc_sigmatch.o \
c_code/2_2/nimsrc_parampatterns.o \
c_code/2_2/nimsrc_pretty.o \
c_code/2_2/nimsrc_docgen.o \
c_code/2_2/docutils_rstast.o \
c_code/2_2/stdlib_json.o \
c_code/2_2/stdlib_unicode.o \
c_code/2_2/stdlib_macros.o \
c_code/2_2/docutils_rst.o \
c_code/2_2/docutils_rstgen.o \
c_code/2_2/docutils_highlite.o \
c_code/2_2/stdlib_sequtils.o \
c_code/2_2/stdlib_algorithm.o \
c_code/2_2/nimsrc_sempass2.o \
c_code/2_2/nimsrc_guards.o \
c_code/2_2/stdlib_xmltree.o \
c_code/2_2/stdlib_cgi.o \
c_code/2_2/stdlib_cookies.o \
c_code/2_2/nimsrc_typesrenderer.o \
c_code/2_2/nimsrc_transf.o \
c_code/2_2/nimsrc_cgmeth.o \
c_code/2_2/nimsrc_lambdalifting.o \
c_code/2_2/nimsrc_lowerings.o \
c_code/2_2/nimsrc_vm.o \
c_code/2_2/nimsrc_vmgen.o \
c_code/2_2/stdlib_unsigned.o \
c_code/2_2/nimsrc_vmdeps.o \
c_code/2_2/nimsrc_vmmarshal.o \
c_code/2_2/nimsrc_evaltempl.o \
c_code/2_2/nimsrc_aliases.o \
c_code/2_2/nimsrc_patterns.o \
c_code/2_2/nimsrc_semmacrosanity.o \
c_code/2_2/nimsrc_semparallel.o \
c_code/2_2/nimsrc_plugins.o \
c_code/2_2/nimsrc_active.o \
c_code/2_2/nimsrc_locals.o \
c_code/2_2/nimsrc_cgen.o \
c_code/2_2/nimsrc_ccgutils.o \
c_code/2_2/nimsrc_cgendata.o \
c_code/2_2/nimsrc_ccgmerge.o \
c_code/2_2/nimsrc_jsgen.o \
c_code/2_2/nimsrc_passaux.o \
c_code/2_2/nimsrc_depends.o \
c_code/2_2/nimsrc_docgen2.o \
c_code/2_2/nimsrc_service.o \
c_code/2_2/stdlib_net.o \
c_code/2_2/stdlib_rawsockets.o \
c_code/2_2/nimsrc_modules.o \
c_code/2_2/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  powerpc64)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_nim.c -o c_code/2_3/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_nim.c -o c_code/2_3/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_system.c -o c_code/2_3/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_system.c -o c_code/2_3/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_testability.c -o c_code/2_3/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_testability.c -o c_code/2_3/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_commands.c -o c_code/2_3/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_commands.c -o c_code/2_3/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_os.c -o c_code/2_3/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_os.c -o c_code/2_3/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_strutils.c -o c_code/2_3/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_strutils.c -o c_code/2_3/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_parseutils.c -o c_code/2_3/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_parseutils.c -o c_code/2_3/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_times.c -o c_code/2_3/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_times.c -o c_code/2_3/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_posix.c -o c_code/2_3/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_posix.c -o c_code/2_3/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_msgs.c -o c_code/2_3/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_msgs.c -o c_code/2_3/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_options.c -o c_code/2_3/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_options.c -o c_code/2_3/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_lists.c -o c_code/2_3/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_lists.c -o c_code/2_3/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_strtabs.c -o c_code/2_3/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_strtabs.c -o c_code/2_3/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_hashes.c -o c_code/2_3/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_hashes.c -o c_code/2_3/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_osproc.c -o c_code/2_3/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_osproc.c -o c_code/2_3/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_streams.c -o c_code/2_3/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_streams.c -o c_code/2_3/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_cpuinfo.c -o c_code/2_3/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_cpuinfo.c -o c_code/2_3/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_linux.c -o c_code/2_3/stdlib_linux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_linux.c -o c_code/2_3/stdlib_linux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_sets.c -o c_code/2_3/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_sets.c -o c_code/2_3/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_math.c -o c_code/2_3/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_math.c -o c_code/2_3/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_tables.c -o c_code/2_3/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_tables.c -o c_code/2_3/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_ropes.c -o c_code/2_3/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_ropes.c -o c_code/2_3/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_platform.c -o c_code/2_3/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_platform.c -o c_code/2_3/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_nversion.c -o c_code/2_3/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_nversion.c -o c_code/2_3/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_condsyms.c -o c_code/2_3/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_condsyms.c -o c_code/2_3/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_idents.c -o c_code/2_3/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_idents.c -o c_code/2_3/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_extccomp.c -o c_code/2_3/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_extccomp.c -o c_code/2_3/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_crc.c -o c_code/2_3/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_crc.c -o c_code/2_3/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_wordrecg.c -o c_code/2_3/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_wordrecg.c -o c_code/2_3/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_nimblecmd.c -o c_code/2_3/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_nimblecmd.c -o c_code/2_3/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_parseopt.c -o c_code/2_3/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_parseopt.c -o c_code/2_3/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_lexer.c -o c_code/2_3/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_lexer.c -o c_code/2_3/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_nimlexbase.c -o c_code/2_3/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_nimlexbase.c -o c_code/2_3/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_llstream.c -o c_code/2_3/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_llstream.c -o c_code/2_3/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_nimconf.c -o c_code/2_3/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_nimconf.c -o c_code/2_3/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_main.c -o c_code/2_3/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_main.c -o c_code/2_3/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_ast.c -o c_code/2_3/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_ast.c -o c_code/2_3/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_intsets.c -o c_code/2_3/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_intsets.c -o c_code/2_3/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_idgen.c -o c_code/2_3/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_idgen.c -o c_code/2_3/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_astalgo.c -o c_code/2_3/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_astalgo.c -o c_code/2_3/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_rodutils.c -o c_code/2_3/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_rodutils.c -o c_code/2_3/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_syntaxes.c -o c_code/2_3/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_syntaxes.c -o c_code/2_3/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_parser.c -o c_code/2_3/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_parser.c -o c_code/2_3/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_pbraces.c -o c_code/2_3/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_pbraces.c -o c_code/2_3/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_filters.c -o c_code/2_3/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_filters.c -o c_code/2_3/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_renderer.c -o c_code/2_3/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_renderer.c -o c_code/2_3/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_filter_tmpl.c -o c_code/2_3/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_filter_tmpl.c -o c_code/2_3/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_rodread.c -o c_code/2_3/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_rodread.c -o c_code/2_3/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_types.c -o c_code/2_3/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_types.c -o c_code/2_3/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_trees.c -o c_code/2_3/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_trees.c -o c_code/2_3/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_memfiles.c -o c_code/2_3/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_memfiles.c -o c_code/2_3/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_rodwrite.c -o c_code/2_3/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_rodwrite.c -o c_code/2_3/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_passes.c -o c_code/2_3/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_passes.c -o c_code/2_3/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_magicsys.c -o c_code/2_3/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_magicsys.c -o c_code/2_3/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_nimsets.c -o c_code/2_3/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_nimsets.c -o c_code/2_3/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_bitsets.c -o c_code/2_3/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_bitsets.c -o c_code/2_3/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_importer.c -o c_code/2_3/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_importer.c -o c_code/2_3/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_lookups.c -o c_code/2_3/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_lookups.c -o c_code/2_3/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_semdata.c -o c_code/2_3/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_semdata.c -o c_code/2_3/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_treetab.c -o c_code/2_3/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_treetab.c -o c_code/2_3/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_vmdef.c -o c_code/2_3/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_vmdef.c -o c_code/2_3/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_prettybase.c -o c_code/2_3/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_prettybase.c -o c_code/2_3/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_lexbase.c -o c_code/2_3/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_lexbase.c -o c_code/2_3/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_sem.c -o c_code/2_3/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_sem.c -o c_code/2_3/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_semfold.c -o c_code/2_3/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_semfold.c -o c_code/2_3/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_saturate.c -o c_code/2_3/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_saturate.c -o c_code/2_3/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_procfind.c -o c_code/2_3/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_procfind.c -o c_code/2_3/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_pragmas.c -o c_code/2_3/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_pragmas.c -o c_code/2_3/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_semtypinst.c -o c_code/2_3/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_semtypinst.c -o c_code/2_3/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_sigmatch.c -o c_code/2_3/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_sigmatch.c -o c_code/2_3/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_parampatterns.c -o c_code/2_3/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_parampatterns.c -o c_code/2_3/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_pretty.c -o c_code/2_3/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_pretty.c -o c_code/2_3/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_docgen.c -o c_code/2_3/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_docgen.c -o c_code/2_3/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/docutils_rstast.c -o c_code/2_3/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/docutils_rstast.c -o c_code/2_3/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_json.c -o c_code/2_3/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_json.c -o c_code/2_3/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_unicode.c -o c_code/2_3/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_unicode.c -o c_code/2_3/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_macros.c -o c_code/2_3/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_macros.c -o c_code/2_3/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/docutils_rst.c -o c_code/2_3/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/docutils_rst.c -o c_code/2_3/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/docutils_rstgen.c -o c_code/2_3/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/docutils_rstgen.c -o c_code/2_3/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/docutils_highlite.c -o c_code/2_3/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/docutils_highlite.c -o c_code/2_3/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_sequtils.c -o c_code/2_3/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_sequtils.c -o c_code/2_3/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_algorithm.c -o c_code/2_3/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_algorithm.c -o c_code/2_3/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_sempass2.c -o c_code/2_3/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_sempass2.c -o c_code/2_3/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_guards.c -o c_code/2_3/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_guards.c -o c_code/2_3/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_xmltree.c -o c_code/2_3/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_xmltree.c -o c_code/2_3/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_cgi.c -o c_code/2_3/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_cgi.c -o c_code/2_3/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_cookies.c -o c_code/2_3/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_cookies.c -o c_code/2_3/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_typesrenderer.c -o c_code/2_3/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_typesrenderer.c -o c_code/2_3/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_transf.c -o c_code/2_3/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_transf.c -o c_code/2_3/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_cgmeth.c -o c_code/2_3/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_cgmeth.c -o c_code/2_3/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_lambdalifting.c -o c_code/2_3/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_lambdalifting.c -o c_code/2_3/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_lowerings.c -o c_code/2_3/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_lowerings.c -o c_code/2_3/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_vm.c -o c_code/2_3/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_vm.c -o c_code/2_3/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_vmgen.c -o c_code/2_3/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_vmgen.c -o c_code/2_3/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_unsigned.c -o c_code/2_3/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_unsigned.c -o c_code/2_3/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_vmdeps.c -o c_code/2_3/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_vmdeps.c -o c_code/2_3/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_vmmarshal.c -o c_code/2_3/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_vmmarshal.c -o c_code/2_3/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_evaltempl.c -o c_code/2_3/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_evaltempl.c -o c_code/2_3/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_aliases.c -o c_code/2_3/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_aliases.c -o c_code/2_3/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_patterns.c -o c_code/2_3/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_patterns.c -o c_code/2_3/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_semmacrosanity.c -o c_code/2_3/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_semmacrosanity.c -o c_code/2_3/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_semparallel.c -o c_code/2_3/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_semparallel.c -o c_code/2_3/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_plugins.c -o c_code/2_3/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_plugins.c -o c_code/2_3/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_active.c -o c_code/2_3/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_active.c -o c_code/2_3/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_locals.c -o c_code/2_3/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_locals.c -o c_code/2_3/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_cgen.c -o c_code/2_3/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_cgen.c -o c_code/2_3/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_ccgutils.c -o c_code/2_3/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_ccgutils.c -o c_code/2_3/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_cgendata.c -o c_code/2_3/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_cgendata.c -o c_code/2_3/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_ccgmerge.c -o c_code/2_3/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_ccgmerge.c -o c_code/2_3/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_jsgen.c -o c_code/2_3/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_jsgen.c -o c_code/2_3/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_passaux.c -o c_code/2_3/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_passaux.c -o c_code/2_3/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_depends.c -o c_code/2_3/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_depends.c -o c_code/2_3/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_docgen2.c -o c_code/2_3/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_docgen2.c -o c_code/2_3/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_service.c -o c_code/2_3/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_service.c -o c_code/2_3/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_net.c -o c_code/2_3/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_net.c -o c_code/2_3/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_rawsockets.c -o c_code/2_3/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/stdlib_rawsockets.c -o c_code/2_3/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_modules.c -o c_code/2_3/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_modules.c -o c_code/2_3/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_nodejs.c -o c_code/2_3/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_3/nimsrc_nodejs.c -o c_code/2_3/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/2_3/nimsrc_nim.o \
c_code/2_3/stdlib_system.o \
c_code/2_3/nimsrc_testability.o \
c_code/2_3/nimsrc_commands.o \
c_code/2_3/stdlib_os.o \
c_code/2_3/stdlib_strutils.o \
c_code/2_3/stdlib_parseutils.o \
c_code/2_3/stdlib_times.o \
c_code/2_3/stdlib_posix.o \
c_code/2_3/nimsrc_msgs.o \
c_code/2_3/nimsrc_options.o \
c_code/2_3/nimsrc_lists.o \
c_code/2_3/stdlib_strtabs.o \
c_code/2_3/stdlib_hashes.o \
c_code/2_3/stdlib_osproc.o \
c_code/2_3/stdlib_streams.o \
c_code/2_3/stdlib_cpuinfo.o \
c_code/2_3/stdlib_linux.o \
c_code/2_3/stdlib_sets.o \
c_code/2_3/stdlib_math.o \
c_code/2_3/stdlib_tables.o \
c_code/2_3/nimsrc_ropes.o \
c_code/2_3/nimsrc_platform.o \
c_code/2_3/nimsrc_nversion.o \
c_code/2_3/nimsrc_condsyms.o \
c_code/2_3/nimsrc_idents.o \
c_code/2_3/nimsrc_extccomp.o \
c_code/2_3/nimsrc_crc.o \
c_code/2_3/nimsrc_wordrecg.o \
c_code/2_3/nimsrc_nimblecmd.o \
c_code/2_3/stdlib_parseopt.o \
c_code/2_3/nimsrc_lexer.o \
c_code/2_3/nimsrc_nimlexbase.o \
c_code/2_3/nimsrc_llstream.o \
c_code/2_3/nimsrc_nimconf.o \
c_code/2_3/nimsrc_main.o \
c_code/2_3/nimsrc_ast.o \
c_code/2_3/stdlib_intsets.o \
c_code/2_3/nimsrc_idgen.o \
c_code/2_3/nimsrc_astalgo.o \
c_code/2_3/nimsrc_rodutils.o \
c_code/2_3/nimsrc_syntaxes.o \
c_code/2_3/nimsrc_parser.o \
c_code/2_3/nimsrc_pbraces.o \
c_code/2_3/nimsrc_filters.o \
c_code/2_3/nimsrc_renderer.o \
c_code/2_3/nimsrc_filter_tmpl.o \
c_code/2_3/nimsrc_rodread.o \
c_code/2_3/nimsrc_types.o \
c_code/2_3/nimsrc_trees.o \
c_code/2_3/stdlib_memfiles.o \
c_code/2_3/nimsrc_rodwrite.o \
c_code/2_3/nimsrc_passes.o \
c_code/2_3/nimsrc_magicsys.o \
c_code/2_3/nimsrc_nimsets.o \
c_code/2_3/nimsrc_bitsets.o \
c_code/2_3/nimsrc_importer.o \
c_code/2_3/nimsrc_lookups.o \
c_code/2_3/nimsrc_semdata.o \
c_code/2_3/nimsrc_treetab.o \
c_code/2_3/nimsrc_vmdef.o \
c_code/2_3/nimsrc_prettybase.o \
c_code/2_3/stdlib_lexbase.o \
c_code/2_3/nimsrc_sem.o \
c_code/2_3/nimsrc_semfold.o \
c_code/2_3/nimsrc_saturate.o \
c_code/2_3/nimsrc_procfind.o \
c_code/2_3/nimsrc_pragmas.o \
c_code/2_3/nimsrc_semtypinst.o \
c_code/2_3/nimsrc_sigmatch.o \
c_code/2_3/nimsrc_parampatterns.o \
c_code/2_3/nimsrc_pretty.o \
c_code/2_3/nimsrc_docgen.o \
c_code/2_3/docutils_rstast.o \
c_code/2_3/stdlib_json.o \
c_code/2_3/stdlib_unicode.o \
c_code/2_3/stdlib_macros.o \
c_code/2_3/docutils_rst.o \
c_code/2_3/docutils_rstgen.o \
c_code/2_3/docutils_highlite.o \
c_code/2_3/stdlib_sequtils.o \
c_code/2_3/stdlib_algorithm.o \
c_code/2_3/nimsrc_sempass2.o \
c_code/2_3/nimsrc_guards.o \
c_code/2_3/stdlib_xmltree.o \
c_code/2_3/stdlib_cgi.o \
c_code/2_3/stdlib_cookies.o \
c_code/2_3/nimsrc_typesrenderer.o \
c_code/2_3/nimsrc_transf.o \
c_code/2_3/nimsrc_cgmeth.o \
c_code/2_3/nimsrc_lambdalifting.o \
c_code/2_3/nimsrc_lowerings.o \
c_code/2_3/nimsrc_vm.o \
c_code/2_3/nimsrc_vmgen.o \
c_code/2_3/stdlib_unsigned.o \
c_code/2_3/nimsrc_vmdeps.o \
c_code/2_3/nimsrc_vmmarshal.o \
c_code/2_3/nimsrc_evaltempl.o \
c_code/2_3/nimsrc_aliases.o \
c_code/2_3/nimsrc_patterns.o \
c_code/2_3/nimsrc_semmacrosanity.o \
c_code/2_3/nimsrc_semparallel.o \
c_code/2_3/nimsrc_plugins.o \
c_code/2_3/nimsrc_active.o \
c_code/2_3/nimsrc_locals.o \
c_code/2_3/nimsrc_cgen.o \
c_code/2_3/nimsrc_ccgutils.o \
c_code/2_3/nimsrc_cgendata.o \
c_code/2_3/nimsrc_ccgmerge.o \
c_code/2_3/nimsrc_jsgen.o \
c_code/2_3/nimsrc_passaux.o \
c_code/2_3/nimsrc_depends.o \
c_code/2_3/nimsrc_docgen2.o \
c_code/2_3/nimsrc_service.o \
c_code/2_3/stdlib_net.o \
c_code/2_3/stdlib_rawsockets.o \
c_code/2_3/nimsrc_modules.o \
c_code/2_3/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/2_3/nimsrc_nim.o \
c_code/2_3/stdlib_system.o \
c_code/2_3/nimsrc_testability.o \
c_code/2_3/nimsrc_commands.o \
c_code/2_3/stdlib_os.o \
c_code/2_3/stdlib_strutils.o \
c_code/2_3/stdlib_parseutils.o \
c_code/2_3/stdlib_times.o \
c_code/2_3/stdlib_posix.o \
c_code/2_3/nimsrc_msgs.o \
c_code/2_3/nimsrc_options.o \
c_code/2_3/nimsrc_lists.o \
c_code/2_3/stdlib_strtabs.o \
c_code/2_3/stdlib_hashes.o \
c_code/2_3/stdlib_osproc.o \
c_code/2_3/stdlib_streams.o \
c_code/2_3/stdlib_cpuinfo.o \
c_code/2_3/stdlib_linux.o \
c_code/2_3/stdlib_sets.o \
c_code/2_3/stdlib_math.o \
c_code/2_3/stdlib_tables.o \
c_code/2_3/nimsrc_ropes.o \
c_code/2_3/nimsrc_platform.o \
c_code/2_3/nimsrc_nversion.o \
c_code/2_3/nimsrc_condsyms.o \
c_code/2_3/nimsrc_idents.o \
c_code/2_3/nimsrc_extccomp.o \
c_code/2_3/nimsrc_crc.o \
c_code/2_3/nimsrc_wordrecg.o \
c_code/2_3/nimsrc_nimblecmd.o \
c_code/2_3/stdlib_parseopt.o \
c_code/2_3/nimsrc_lexer.o \
c_code/2_3/nimsrc_nimlexbase.o \
c_code/2_3/nimsrc_llstream.o \
c_code/2_3/nimsrc_nimconf.o \
c_code/2_3/nimsrc_main.o \
c_code/2_3/nimsrc_ast.o \
c_code/2_3/stdlib_intsets.o \
c_code/2_3/nimsrc_idgen.o \
c_code/2_3/nimsrc_astalgo.o \
c_code/2_3/nimsrc_rodutils.o \
c_code/2_3/nimsrc_syntaxes.o \
c_code/2_3/nimsrc_parser.o \
c_code/2_3/nimsrc_pbraces.o \
c_code/2_3/nimsrc_filters.o \
c_code/2_3/nimsrc_renderer.o \
c_code/2_3/nimsrc_filter_tmpl.o \
c_code/2_3/nimsrc_rodread.o \
c_code/2_3/nimsrc_types.o \
c_code/2_3/nimsrc_trees.o \
c_code/2_3/stdlib_memfiles.o \
c_code/2_3/nimsrc_rodwrite.o \
c_code/2_3/nimsrc_passes.o \
c_code/2_3/nimsrc_magicsys.o \
c_code/2_3/nimsrc_nimsets.o \
c_code/2_3/nimsrc_bitsets.o \
c_code/2_3/nimsrc_importer.o \
c_code/2_3/nimsrc_lookups.o \
c_code/2_3/nimsrc_semdata.o \
c_code/2_3/nimsrc_treetab.o \
c_code/2_3/nimsrc_vmdef.o \
c_code/2_3/nimsrc_prettybase.o \
c_code/2_3/stdlib_lexbase.o \
c_code/2_3/nimsrc_sem.o \
c_code/2_3/nimsrc_semfold.o \
c_code/2_3/nimsrc_saturate.o \
c_code/2_3/nimsrc_procfind.o \
c_code/2_3/nimsrc_pragmas.o \
c_code/2_3/nimsrc_semtypinst.o \
c_code/2_3/nimsrc_sigmatch.o \
c_code/2_3/nimsrc_parampatterns.o \
c_code/2_3/nimsrc_pretty.o \
c_code/2_3/nimsrc_docgen.o \
c_code/2_3/docutils_rstast.o \
c_code/2_3/stdlib_json.o \
c_code/2_3/stdlib_unicode.o \
c_code/2_3/stdlib_macros.o \
c_code/2_3/docutils_rst.o \
c_code/2_3/docutils_rstgen.o \
c_code/2_3/docutils_highlite.o \
c_code/2_3/stdlib_sequtils.o \
c_code/2_3/stdlib_algorithm.o \
c_code/2_3/nimsrc_sempass2.o \
c_code/2_3/nimsrc_guards.o \
c_code/2_3/stdlib_xmltree.o \
c_code/2_3/stdlib_cgi.o \
c_code/2_3/stdlib_cookies.o \
c_code/2_3/nimsrc_typesrenderer.o \
c_code/2_3/nimsrc_transf.o \
c_code/2_3/nimsrc_cgmeth.o \
c_code/2_3/nimsrc_lambdalifting.o \
c_code/2_3/nimsrc_lowerings.o \
c_code/2_3/nimsrc_vm.o \
c_code/2_3/nimsrc_vmgen.o \
c_code/2_3/stdlib_unsigned.o \
c_code/2_3/nimsrc_vmdeps.o \
c_code/2_3/nimsrc_vmmarshal.o \
c_code/2_3/nimsrc_evaltempl.o \
c_code/2_3/nimsrc_aliases.o \
c_code/2_3/nimsrc_patterns.o \
c_code/2_3/nimsrc_semmacrosanity.o \
c_code/2_3/nimsrc_semparallel.o \
c_code/2_3/nimsrc_plugins.o \
c_code/2_3/nimsrc_active.o \
c_code/2_3/nimsrc_locals.o \
c_code/2_3/nimsrc_cgen.o \
c_code/2_3/nimsrc_ccgutils.o \
c_code/2_3/nimsrc_cgendata.o \
c_code/2_3/nimsrc_ccgmerge.o \
c_code/2_3/nimsrc_jsgen.o \
c_code/2_3/nimsrc_passaux.o \
c_code/2_3/nimsrc_depends.o \
c_code/2_3/nimsrc_docgen2.o \
c_code/2_3/nimsrc_service.o \
c_code/2_3/stdlib_net.o \
c_code/2_3/stdlib_rawsockets.o \
c_code/2_3/nimsrc_modules.o \
c_code/2_3/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  arm)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_nim.c -o c_code/2_4/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_nim.c -o c_code/2_4/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_system.c -o c_code/2_4/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_system.c -o c_code/2_4/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_testability.c -o c_code/2_4/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_testability.c -o c_code/2_4/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_commands.c -o c_code/2_4/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_commands.c -o c_code/2_4/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_os.c -o c_code/2_4/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_os.c -o c_code/2_4/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_strutils.c -o c_code/2_4/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_strutils.c -o c_code/2_4/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_parseutils.c -o c_code/2_4/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_parseutils.c -o c_code/2_4/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_times.c -o c_code/2_4/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_times.c -o c_code/2_4/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_posix.c -o c_code/2_4/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_posix.c -o c_code/2_4/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_msgs.c -o c_code/2_4/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_msgs.c -o c_code/2_4/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_options.c -o c_code/2_4/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_options.c -o c_code/2_4/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_lists.c -o c_code/2_4/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_lists.c -o c_code/2_4/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_strtabs.c -o c_code/2_4/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_strtabs.c -o c_code/2_4/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_hashes.c -o c_code/2_4/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_hashes.c -o c_code/2_4/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_osproc.c -o c_code/2_4/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_osproc.c -o c_code/2_4/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_streams.c -o c_code/2_4/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_streams.c -o c_code/2_4/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_cpuinfo.c -o c_code/2_4/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_cpuinfo.c -o c_code/2_4/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_linux.c -o c_code/2_4/stdlib_linux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_linux.c -o c_code/2_4/stdlib_linux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_sets.c -o c_code/2_4/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_sets.c -o c_code/2_4/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_math.c -o c_code/2_4/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_math.c -o c_code/2_4/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_tables.c -o c_code/2_4/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_tables.c -o c_code/2_4/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_ropes.c -o c_code/2_4/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_ropes.c -o c_code/2_4/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_platform.c -o c_code/2_4/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_platform.c -o c_code/2_4/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_nversion.c -o c_code/2_4/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_nversion.c -o c_code/2_4/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_condsyms.c -o c_code/2_4/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_condsyms.c -o c_code/2_4/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_idents.c -o c_code/2_4/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_idents.c -o c_code/2_4/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_extccomp.c -o c_code/2_4/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_extccomp.c -o c_code/2_4/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_crc.c -o c_code/2_4/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_crc.c -o c_code/2_4/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_wordrecg.c -o c_code/2_4/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_wordrecg.c -o c_code/2_4/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_nimblecmd.c -o c_code/2_4/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_nimblecmd.c -o c_code/2_4/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_parseopt.c -o c_code/2_4/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_parseopt.c -o c_code/2_4/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_lexer.c -o c_code/2_4/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_lexer.c -o c_code/2_4/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_nimlexbase.c -o c_code/2_4/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_nimlexbase.c -o c_code/2_4/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_llstream.c -o c_code/2_4/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_llstream.c -o c_code/2_4/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_nimconf.c -o c_code/2_4/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_nimconf.c -o c_code/2_4/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_main.c -o c_code/2_4/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_main.c -o c_code/2_4/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_ast.c -o c_code/2_4/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_ast.c -o c_code/2_4/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_intsets.c -o c_code/2_4/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_intsets.c -o c_code/2_4/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_idgen.c -o c_code/2_4/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_idgen.c -o c_code/2_4/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_astalgo.c -o c_code/2_4/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_astalgo.c -o c_code/2_4/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_rodutils.c -o c_code/2_4/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_rodutils.c -o c_code/2_4/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_syntaxes.c -o c_code/2_4/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_syntaxes.c -o c_code/2_4/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_parser.c -o c_code/2_4/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_parser.c -o c_code/2_4/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_pbraces.c -o c_code/2_4/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_pbraces.c -o c_code/2_4/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_filters.c -o c_code/2_4/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_filters.c -o c_code/2_4/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_renderer.c -o c_code/2_4/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_renderer.c -o c_code/2_4/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_filter_tmpl.c -o c_code/2_4/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_filter_tmpl.c -o c_code/2_4/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_rodread.c -o c_code/2_4/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_rodread.c -o c_code/2_4/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_types.c -o c_code/2_4/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_types.c -o c_code/2_4/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_trees.c -o c_code/2_4/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_trees.c -o c_code/2_4/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_memfiles.c -o c_code/2_4/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_memfiles.c -o c_code/2_4/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_rodwrite.c -o c_code/2_4/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_rodwrite.c -o c_code/2_4/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_passes.c -o c_code/2_4/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_passes.c -o c_code/2_4/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_magicsys.c -o c_code/2_4/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_magicsys.c -o c_code/2_4/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_nimsets.c -o c_code/2_4/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_nimsets.c -o c_code/2_4/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_bitsets.c -o c_code/2_4/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_bitsets.c -o c_code/2_4/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_importer.c -o c_code/2_4/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_importer.c -o c_code/2_4/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_lookups.c -o c_code/2_4/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_lookups.c -o c_code/2_4/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_semdata.c -o c_code/2_4/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_semdata.c -o c_code/2_4/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_treetab.c -o c_code/2_4/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_treetab.c -o c_code/2_4/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_vmdef.c -o c_code/2_4/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_vmdef.c -o c_code/2_4/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_prettybase.c -o c_code/2_4/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_prettybase.c -o c_code/2_4/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_lexbase.c -o c_code/2_4/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_lexbase.c -o c_code/2_4/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_sem.c -o c_code/2_4/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_sem.c -o c_code/2_4/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_semfold.c -o c_code/2_4/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_semfold.c -o c_code/2_4/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_saturate.c -o c_code/2_4/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_saturate.c -o c_code/2_4/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_procfind.c -o c_code/2_4/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_procfind.c -o c_code/2_4/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_pragmas.c -o c_code/2_4/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_pragmas.c -o c_code/2_4/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_semtypinst.c -o c_code/2_4/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_semtypinst.c -o c_code/2_4/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_sigmatch.c -o c_code/2_4/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_sigmatch.c -o c_code/2_4/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_parampatterns.c -o c_code/2_4/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_parampatterns.c -o c_code/2_4/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_pretty.c -o c_code/2_4/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_pretty.c -o c_code/2_4/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_docgen.c -o c_code/2_4/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_docgen.c -o c_code/2_4/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/docutils_rstast.c -o c_code/2_4/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/docutils_rstast.c -o c_code/2_4/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_json.c -o c_code/2_4/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_json.c -o c_code/2_4/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_unicode.c -o c_code/2_4/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_unicode.c -o c_code/2_4/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_macros.c -o c_code/2_4/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_macros.c -o c_code/2_4/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/docutils_rst.c -o c_code/2_4/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/docutils_rst.c -o c_code/2_4/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/docutils_rstgen.c -o c_code/2_4/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/docutils_rstgen.c -o c_code/2_4/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/docutils_highlite.c -o c_code/2_4/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/docutils_highlite.c -o c_code/2_4/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_sequtils.c -o c_code/2_4/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_sequtils.c -o c_code/2_4/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_algorithm.c -o c_code/2_4/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_algorithm.c -o c_code/2_4/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_sempass2.c -o c_code/2_4/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_sempass2.c -o c_code/2_4/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_guards.c -o c_code/2_4/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_guards.c -o c_code/2_4/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_xmltree.c -o c_code/2_4/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_xmltree.c -o c_code/2_4/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_cgi.c -o c_code/2_4/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_cgi.c -o c_code/2_4/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_cookies.c -o c_code/2_4/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_cookies.c -o c_code/2_4/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_typesrenderer.c -o c_code/2_4/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_typesrenderer.c -o c_code/2_4/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_transf.c -o c_code/2_4/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_transf.c -o c_code/2_4/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_cgmeth.c -o c_code/2_4/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_cgmeth.c -o c_code/2_4/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_lambdalifting.c -o c_code/2_4/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_lambdalifting.c -o c_code/2_4/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_lowerings.c -o c_code/2_4/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_lowerings.c -o c_code/2_4/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_vm.c -o c_code/2_4/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_vm.c -o c_code/2_4/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_vmgen.c -o c_code/2_4/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_vmgen.c -o c_code/2_4/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_unsigned.c -o c_code/2_4/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_unsigned.c -o c_code/2_4/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_vmdeps.c -o c_code/2_4/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_vmdeps.c -o c_code/2_4/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_vmmarshal.c -o c_code/2_4/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_vmmarshal.c -o c_code/2_4/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_evaltempl.c -o c_code/2_4/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_evaltempl.c -o c_code/2_4/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_aliases.c -o c_code/2_4/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_aliases.c -o c_code/2_4/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_patterns.c -o c_code/2_4/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_patterns.c -o c_code/2_4/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_semmacrosanity.c -o c_code/2_4/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_semmacrosanity.c -o c_code/2_4/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_semparallel.c -o c_code/2_4/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_semparallel.c -o c_code/2_4/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_plugins.c -o c_code/2_4/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_plugins.c -o c_code/2_4/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_active.c -o c_code/2_4/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_active.c -o c_code/2_4/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_locals.c -o c_code/2_4/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_locals.c -o c_code/2_4/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_cgen.c -o c_code/2_4/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_cgen.c -o c_code/2_4/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_ccgutils.c -o c_code/2_4/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_ccgutils.c -o c_code/2_4/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_cgendata.c -o c_code/2_4/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_cgendata.c -o c_code/2_4/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_ccgmerge.c -o c_code/2_4/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_ccgmerge.c -o c_code/2_4/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_jsgen.c -o c_code/2_4/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_jsgen.c -o c_code/2_4/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_passaux.c -o c_code/2_4/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_passaux.c -o c_code/2_4/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_depends.c -o c_code/2_4/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_depends.c -o c_code/2_4/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_docgen2.c -o c_code/2_4/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_docgen2.c -o c_code/2_4/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_service.c -o c_code/2_4/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_service.c -o c_code/2_4/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_net.c -o c_code/2_4/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_net.c -o c_code/2_4/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_rawsockets.c -o c_code/2_4/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/stdlib_rawsockets.c -o c_code/2_4/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_modules.c -o c_code/2_4/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_modules.c -o c_code/2_4/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_nodejs.c -o c_code/2_4/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_4/nimsrc_nodejs.c -o c_code/2_4/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/2_4/nimsrc_nim.o \
c_code/2_4/stdlib_system.o \
c_code/2_4/nimsrc_testability.o \
c_code/2_4/nimsrc_commands.o \
c_code/2_4/stdlib_os.o \
c_code/2_4/stdlib_strutils.o \
c_code/2_4/stdlib_parseutils.o \
c_code/2_4/stdlib_times.o \
c_code/2_4/stdlib_posix.o \
c_code/2_4/nimsrc_msgs.o \
c_code/2_4/nimsrc_options.o \
c_code/2_4/nimsrc_lists.o \
c_code/2_4/stdlib_strtabs.o \
c_code/2_4/stdlib_hashes.o \
c_code/2_4/stdlib_osproc.o \
c_code/2_4/stdlib_streams.o \
c_code/2_4/stdlib_cpuinfo.o \
c_code/2_4/stdlib_linux.o \
c_code/2_4/stdlib_sets.o \
c_code/2_4/stdlib_math.o \
c_code/2_4/stdlib_tables.o \
c_code/2_4/nimsrc_ropes.o \
c_code/2_4/nimsrc_platform.o \
c_code/2_4/nimsrc_nversion.o \
c_code/2_4/nimsrc_condsyms.o \
c_code/2_4/nimsrc_idents.o \
c_code/2_4/nimsrc_extccomp.o \
c_code/2_4/nimsrc_crc.o \
c_code/2_4/nimsrc_wordrecg.o \
c_code/2_4/nimsrc_nimblecmd.o \
c_code/2_4/stdlib_parseopt.o \
c_code/2_4/nimsrc_lexer.o \
c_code/2_4/nimsrc_nimlexbase.o \
c_code/2_4/nimsrc_llstream.o \
c_code/2_4/nimsrc_nimconf.o \
c_code/2_4/nimsrc_main.o \
c_code/2_4/nimsrc_ast.o \
c_code/2_4/stdlib_intsets.o \
c_code/2_4/nimsrc_idgen.o \
c_code/2_4/nimsrc_astalgo.o \
c_code/2_4/nimsrc_rodutils.o \
c_code/2_4/nimsrc_syntaxes.o \
c_code/2_4/nimsrc_parser.o \
c_code/2_4/nimsrc_pbraces.o \
c_code/2_4/nimsrc_filters.o \
c_code/2_4/nimsrc_renderer.o \
c_code/2_4/nimsrc_filter_tmpl.o \
c_code/2_4/nimsrc_rodread.o \
c_code/2_4/nimsrc_types.o \
c_code/2_4/nimsrc_trees.o \
c_code/2_4/stdlib_memfiles.o \
c_code/2_4/nimsrc_rodwrite.o \
c_code/2_4/nimsrc_passes.o \
c_code/2_4/nimsrc_magicsys.o \
c_code/2_4/nimsrc_nimsets.o \
c_code/2_4/nimsrc_bitsets.o \
c_code/2_4/nimsrc_importer.o \
c_code/2_4/nimsrc_lookups.o \
c_code/2_4/nimsrc_semdata.o \
c_code/2_4/nimsrc_treetab.o \
c_code/2_4/nimsrc_vmdef.o \
c_code/2_4/nimsrc_prettybase.o \
c_code/2_4/stdlib_lexbase.o \
c_code/2_4/nimsrc_sem.o \
c_code/2_4/nimsrc_semfold.o \
c_code/2_4/nimsrc_saturate.o \
c_code/2_4/nimsrc_procfind.o \
c_code/2_4/nimsrc_pragmas.o \
c_code/2_4/nimsrc_semtypinst.o \
c_code/2_4/nimsrc_sigmatch.o \
c_code/2_4/nimsrc_parampatterns.o \
c_code/2_4/nimsrc_pretty.o \
c_code/2_4/nimsrc_docgen.o \
c_code/2_4/docutils_rstast.o \
c_code/2_4/stdlib_json.o \
c_code/2_4/stdlib_unicode.o \
c_code/2_4/stdlib_macros.o \
c_code/2_4/docutils_rst.o \
c_code/2_4/docutils_rstgen.o \
c_code/2_4/docutils_highlite.o \
c_code/2_4/stdlib_sequtils.o \
c_code/2_4/stdlib_algorithm.o \
c_code/2_4/nimsrc_sempass2.o \
c_code/2_4/nimsrc_guards.o \
c_code/2_4/stdlib_xmltree.o \
c_code/2_4/stdlib_cgi.o \
c_code/2_4/stdlib_cookies.o \
c_code/2_4/nimsrc_typesrenderer.o \
c_code/2_4/nimsrc_transf.o \
c_code/2_4/nimsrc_cgmeth.o \
c_code/2_4/nimsrc_lambdalifting.o \
c_code/2_4/nimsrc_lowerings.o \
c_code/2_4/nimsrc_vm.o \
c_code/2_4/nimsrc_vmgen.o \
c_code/2_4/stdlib_unsigned.o \
c_code/2_4/nimsrc_vmdeps.o \
c_code/2_4/nimsrc_vmmarshal.o \
c_code/2_4/nimsrc_evaltempl.o \
c_code/2_4/nimsrc_aliases.o \
c_code/2_4/nimsrc_patterns.o \
c_code/2_4/nimsrc_semmacrosanity.o \
c_code/2_4/nimsrc_semparallel.o \
c_code/2_4/nimsrc_plugins.o \
c_code/2_4/nimsrc_active.o \
c_code/2_4/nimsrc_locals.o \
c_code/2_4/nimsrc_cgen.o \
c_code/2_4/nimsrc_ccgutils.o \
c_code/2_4/nimsrc_cgendata.o \
c_code/2_4/nimsrc_ccgmerge.o \
c_code/2_4/nimsrc_jsgen.o \
c_code/2_4/nimsrc_passaux.o \
c_code/2_4/nimsrc_depends.o \
c_code/2_4/nimsrc_docgen2.o \
c_code/2_4/nimsrc_service.o \
c_code/2_4/stdlib_net.o \
c_code/2_4/stdlib_rawsockets.o \
c_code/2_4/nimsrc_modules.o \
c_code/2_4/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/2_4/nimsrc_nim.o \
c_code/2_4/stdlib_system.o \
c_code/2_4/nimsrc_testability.o \
c_code/2_4/nimsrc_commands.o \
c_code/2_4/stdlib_os.o \
c_code/2_4/stdlib_strutils.o \
c_code/2_4/stdlib_parseutils.o \
c_code/2_4/stdlib_times.o \
c_code/2_4/stdlib_posix.o \
c_code/2_4/nimsrc_msgs.o \
c_code/2_4/nimsrc_options.o \
c_code/2_4/nimsrc_lists.o \
c_code/2_4/stdlib_strtabs.o \
c_code/2_4/stdlib_hashes.o \
c_code/2_4/stdlib_osproc.o \
c_code/2_4/stdlib_streams.o \
c_code/2_4/stdlib_cpuinfo.o \
c_code/2_4/stdlib_linux.o \
c_code/2_4/stdlib_sets.o \
c_code/2_4/stdlib_math.o \
c_code/2_4/stdlib_tables.o \
c_code/2_4/nimsrc_ropes.o \
c_code/2_4/nimsrc_platform.o \
c_code/2_4/nimsrc_nversion.o \
c_code/2_4/nimsrc_condsyms.o \
c_code/2_4/nimsrc_idents.o \
c_code/2_4/nimsrc_extccomp.o \
c_code/2_4/nimsrc_crc.o \
c_code/2_4/nimsrc_wordrecg.o \
c_code/2_4/nimsrc_nimblecmd.o \
c_code/2_4/stdlib_parseopt.o \
c_code/2_4/nimsrc_lexer.o \
c_code/2_4/nimsrc_nimlexbase.o \
c_code/2_4/nimsrc_llstream.o \
c_code/2_4/nimsrc_nimconf.o \
c_code/2_4/nimsrc_main.o \
c_code/2_4/nimsrc_ast.o \
c_code/2_4/stdlib_intsets.o \
c_code/2_4/nimsrc_idgen.o \
c_code/2_4/nimsrc_astalgo.o \
c_code/2_4/nimsrc_rodutils.o \
c_code/2_4/nimsrc_syntaxes.o \
c_code/2_4/nimsrc_parser.o \
c_code/2_4/nimsrc_pbraces.o \
c_code/2_4/nimsrc_filters.o \
c_code/2_4/nimsrc_renderer.o \
c_code/2_4/nimsrc_filter_tmpl.o \
c_code/2_4/nimsrc_rodread.o \
c_code/2_4/nimsrc_types.o \
c_code/2_4/nimsrc_trees.o \
c_code/2_4/stdlib_memfiles.o \
c_code/2_4/nimsrc_rodwrite.o \
c_code/2_4/nimsrc_passes.o \
c_code/2_4/nimsrc_magicsys.o \
c_code/2_4/nimsrc_nimsets.o \
c_code/2_4/nimsrc_bitsets.o \
c_code/2_4/nimsrc_importer.o \
c_code/2_4/nimsrc_lookups.o \
c_code/2_4/nimsrc_semdata.o \
c_code/2_4/nimsrc_treetab.o \
c_code/2_4/nimsrc_vmdef.o \
c_code/2_4/nimsrc_prettybase.o \
c_code/2_4/stdlib_lexbase.o \
c_code/2_4/nimsrc_sem.o \
c_code/2_4/nimsrc_semfold.o \
c_code/2_4/nimsrc_saturate.o \
c_code/2_4/nimsrc_procfind.o \
c_code/2_4/nimsrc_pragmas.o \
c_code/2_4/nimsrc_semtypinst.o \
c_code/2_4/nimsrc_sigmatch.o \
c_code/2_4/nimsrc_parampatterns.o \
c_code/2_4/nimsrc_pretty.o \
c_code/2_4/nimsrc_docgen.o \
c_code/2_4/docutils_rstast.o \
c_code/2_4/stdlib_json.o \
c_code/2_4/stdlib_unicode.o \
c_code/2_4/stdlib_macros.o \
c_code/2_4/docutils_rst.o \
c_code/2_4/docutils_rstgen.o \
c_code/2_4/docutils_highlite.o \
c_code/2_4/stdlib_sequtils.o \
c_code/2_4/stdlib_algorithm.o \
c_code/2_4/nimsrc_sempass2.o \
c_code/2_4/nimsrc_guards.o \
c_code/2_4/stdlib_xmltree.o \
c_code/2_4/stdlib_cgi.o \
c_code/2_4/stdlib_cookies.o \
c_code/2_4/nimsrc_typesrenderer.o \
c_code/2_4/nimsrc_transf.o \
c_code/2_4/nimsrc_cgmeth.o \
c_code/2_4/nimsrc_lambdalifting.o \
c_code/2_4/nimsrc_lowerings.o \
c_code/2_4/nimsrc_vm.o \
c_code/2_4/nimsrc_vmgen.o \
c_code/2_4/stdlib_unsigned.o \
c_code/2_4/nimsrc_vmdeps.o \
c_code/2_4/nimsrc_vmmarshal.o \
c_code/2_4/nimsrc_evaltempl.o \
c_code/2_4/nimsrc_aliases.o \
c_code/2_4/nimsrc_patterns.o \
c_code/2_4/nimsrc_semmacrosanity.o \
c_code/2_4/nimsrc_semparallel.o \
c_code/2_4/nimsrc_plugins.o \
c_code/2_4/nimsrc_active.o \
c_code/2_4/nimsrc_locals.o \
c_code/2_4/nimsrc_cgen.o \
c_code/2_4/nimsrc_ccgutils.o \
c_code/2_4/nimsrc_cgendata.o \
c_code/2_4/nimsrc_ccgmerge.o \
c_code/2_4/nimsrc_jsgen.o \
c_code/2_4/nimsrc_passaux.o \
c_code/2_4/nimsrc_depends.o \
c_code/2_4/nimsrc_docgen2.o \
c_code/2_4/nimsrc_service.o \
c_code/2_4/stdlib_net.o \
c_code/2_4/stdlib_rawsockets.o \
c_code/2_4/nimsrc_modules.o \
c_code/2_4/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  sparc)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_nim.c -o c_code/2_5/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_nim.c -o c_code/2_5/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_system.c -o c_code/2_5/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_system.c -o c_code/2_5/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_testability.c -o c_code/2_5/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_testability.c -o c_code/2_5/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_commands.c -o c_code/2_5/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_commands.c -o c_code/2_5/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_os.c -o c_code/2_5/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_os.c -o c_code/2_5/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_strutils.c -o c_code/2_5/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_strutils.c -o c_code/2_5/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_parseutils.c -o c_code/2_5/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_parseutils.c -o c_code/2_5/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_times.c -o c_code/2_5/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_times.c -o c_code/2_5/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_posix.c -o c_code/2_5/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_posix.c -o c_code/2_5/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_msgs.c -o c_code/2_5/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_msgs.c -o c_code/2_5/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_options.c -o c_code/2_5/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_options.c -o c_code/2_5/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_lists.c -o c_code/2_5/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_lists.c -o c_code/2_5/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_strtabs.c -o c_code/2_5/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_strtabs.c -o c_code/2_5/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_hashes.c -o c_code/2_5/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_hashes.c -o c_code/2_5/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_osproc.c -o c_code/2_5/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_osproc.c -o c_code/2_5/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_streams.c -o c_code/2_5/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_streams.c -o c_code/2_5/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_cpuinfo.c -o c_code/2_5/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_cpuinfo.c -o c_code/2_5/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_linux.c -o c_code/2_5/stdlib_linux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_linux.c -o c_code/2_5/stdlib_linux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_sets.c -o c_code/2_5/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_sets.c -o c_code/2_5/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_math.c -o c_code/2_5/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_math.c -o c_code/2_5/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_tables.c -o c_code/2_5/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_tables.c -o c_code/2_5/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_ropes.c -o c_code/2_5/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_ropes.c -o c_code/2_5/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_platform.c -o c_code/2_5/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_platform.c -o c_code/2_5/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_nversion.c -o c_code/2_5/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_nversion.c -o c_code/2_5/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_condsyms.c -o c_code/2_5/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_condsyms.c -o c_code/2_5/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_idents.c -o c_code/2_5/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_idents.c -o c_code/2_5/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_extccomp.c -o c_code/2_5/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_extccomp.c -o c_code/2_5/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_crc.c -o c_code/2_5/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_crc.c -o c_code/2_5/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_wordrecg.c -o c_code/2_5/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_wordrecg.c -o c_code/2_5/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_nimblecmd.c -o c_code/2_5/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_nimblecmd.c -o c_code/2_5/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_parseopt.c -o c_code/2_5/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_parseopt.c -o c_code/2_5/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_lexer.c -o c_code/2_5/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_lexer.c -o c_code/2_5/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_nimlexbase.c -o c_code/2_5/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_nimlexbase.c -o c_code/2_5/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_llstream.c -o c_code/2_5/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_llstream.c -o c_code/2_5/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_nimconf.c -o c_code/2_5/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_nimconf.c -o c_code/2_5/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_main.c -o c_code/2_5/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_main.c -o c_code/2_5/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_ast.c -o c_code/2_5/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_ast.c -o c_code/2_5/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_intsets.c -o c_code/2_5/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_intsets.c -o c_code/2_5/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_idgen.c -o c_code/2_5/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_idgen.c -o c_code/2_5/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_astalgo.c -o c_code/2_5/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_astalgo.c -o c_code/2_5/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_rodutils.c -o c_code/2_5/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_rodutils.c -o c_code/2_5/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_syntaxes.c -o c_code/2_5/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_syntaxes.c -o c_code/2_5/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_parser.c -o c_code/2_5/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_parser.c -o c_code/2_5/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_pbraces.c -o c_code/2_5/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_pbraces.c -o c_code/2_5/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_filters.c -o c_code/2_5/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_filters.c -o c_code/2_5/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_renderer.c -o c_code/2_5/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_renderer.c -o c_code/2_5/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_filter_tmpl.c -o c_code/2_5/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_filter_tmpl.c -o c_code/2_5/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_rodread.c -o c_code/2_5/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_rodread.c -o c_code/2_5/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_types.c -o c_code/2_5/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_types.c -o c_code/2_5/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_trees.c -o c_code/2_5/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_trees.c -o c_code/2_5/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_memfiles.c -o c_code/2_5/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_memfiles.c -o c_code/2_5/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_rodwrite.c -o c_code/2_5/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_rodwrite.c -o c_code/2_5/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_passes.c -o c_code/2_5/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_passes.c -o c_code/2_5/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_magicsys.c -o c_code/2_5/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_magicsys.c -o c_code/2_5/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_nimsets.c -o c_code/2_5/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_nimsets.c -o c_code/2_5/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_bitsets.c -o c_code/2_5/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_bitsets.c -o c_code/2_5/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_importer.c -o c_code/2_5/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_importer.c -o c_code/2_5/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_lookups.c -o c_code/2_5/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_lookups.c -o c_code/2_5/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_semdata.c -o c_code/2_5/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_semdata.c -o c_code/2_5/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_treetab.c -o c_code/2_5/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_treetab.c -o c_code/2_5/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_vmdef.c -o c_code/2_5/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_vmdef.c -o c_code/2_5/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_prettybase.c -o c_code/2_5/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_prettybase.c -o c_code/2_5/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_lexbase.c -o c_code/2_5/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_lexbase.c -o c_code/2_5/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_sem.c -o c_code/2_5/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_sem.c -o c_code/2_5/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_semfold.c -o c_code/2_5/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_semfold.c -o c_code/2_5/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_saturate.c -o c_code/2_5/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_saturate.c -o c_code/2_5/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_procfind.c -o c_code/2_5/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_procfind.c -o c_code/2_5/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_pragmas.c -o c_code/2_5/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_pragmas.c -o c_code/2_5/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_semtypinst.c -o c_code/2_5/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_semtypinst.c -o c_code/2_5/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_sigmatch.c -o c_code/2_5/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_sigmatch.c -o c_code/2_5/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_parampatterns.c -o c_code/2_5/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_parampatterns.c -o c_code/2_5/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_pretty.c -o c_code/2_5/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_pretty.c -o c_code/2_5/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_docgen.c -o c_code/2_5/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_docgen.c -o c_code/2_5/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/docutils_rstast.c -o c_code/2_5/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/docutils_rstast.c -o c_code/2_5/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_json.c -o c_code/2_5/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_json.c -o c_code/2_5/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_unicode.c -o c_code/2_5/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_unicode.c -o c_code/2_5/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_macros.c -o c_code/2_5/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_macros.c -o c_code/2_5/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/docutils_rst.c -o c_code/2_5/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/docutils_rst.c -o c_code/2_5/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/docutils_rstgen.c -o c_code/2_5/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/docutils_rstgen.c -o c_code/2_5/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/docutils_highlite.c -o c_code/2_5/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/docutils_highlite.c -o c_code/2_5/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_sequtils.c -o c_code/2_5/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_sequtils.c -o c_code/2_5/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_algorithm.c -o c_code/2_5/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_algorithm.c -o c_code/2_5/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_sempass2.c -o c_code/2_5/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_sempass2.c -o c_code/2_5/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_guards.c -o c_code/2_5/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_guards.c -o c_code/2_5/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_xmltree.c -o c_code/2_5/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_xmltree.c -o c_code/2_5/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_cgi.c -o c_code/2_5/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_cgi.c -o c_code/2_5/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_cookies.c -o c_code/2_5/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_cookies.c -o c_code/2_5/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_typesrenderer.c -o c_code/2_5/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_typesrenderer.c -o c_code/2_5/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_transf.c -o c_code/2_5/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_transf.c -o c_code/2_5/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_cgmeth.c -o c_code/2_5/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_cgmeth.c -o c_code/2_5/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_lambdalifting.c -o c_code/2_5/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_lambdalifting.c -o c_code/2_5/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_lowerings.c -o c_code/2_5/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_lowerings.c -o c_code/2_5/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_vm.c -o c_code/2_5/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_vm.c -o c_code/2_5/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_vmgen.c -o c_code/2_5/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_vmgen.c -o c_code/2_5/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_unsigned.c -o c_code/2_5/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_unsigned.c -o c_code/2_5/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_vmdeps.c -o c_code/2_5/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_vmdeps.c -o c_code/2_5/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_vmmarshal.c -o c_code/2_5/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_vmmarshal.c -o c_code/2_5/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_evaltempl.c -o c_code/2_5/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_evaltempl.c -o c_code/2_5/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_aliases.c -o c_code/2_5/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_aliases.c -o c_code/2_5/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_patterns.c -o c_code/2_5/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_patterns.c -o c_code/2_5/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_semmacrosanity.c -o c_code/2_5/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_semmacrosanity.c -o c_code/2_5/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_semparallel.c -o c_code/2_5/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_semparallel.c -o c_code/2_5/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_plugins.c -o c_code/2_5/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_plugins.c -o c_code/2_5/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_active.c -o c_code/2_5/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_active.c -o c_code/2_5/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_locals.c -o c_code/2_5/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_locals.c -o c_code/2_5/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_cgen.c -o c_code/2_5/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_cgen.c -o c_code/2_5/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_ccgutils.c -o c_code/2_5/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_ccgutils.c -o c_code/2_5/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_cgendata.c -o c_code/2_5/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_cgendata.c -o c_code/2_5/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_ccgmerge.c -o c_code/2_5/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_ccgmerge.c -o c_code/2_5/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_jsgen.c -o c_code/2_5/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_jsgen.c -o c_code/2_5/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_passaux.c -o c_code/2_5/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_passaux.c -o c_code/2_5/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_depends.c -o c_code/2_5/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_depends.c -o c_code/2_5/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_docgen2.c -o c_code/2_5/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_docgen2.c -o c_code/2_5/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_service.c -o c_code/2_5/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_service.c -o c_code/2_5/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_net.c -o c_code/2_5/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_net.c -o c_code/2_5/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_rawsockets.c -o c_code/2_5/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/stdlib_rawsockets.c -o c_code/2_5/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_modules.c -o c_code/2_5/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_modules.c -o c_code/2_5/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_nodejs.c -o c_code/2_5/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_5/nimsrc_nodejs.c -o c_code/2_5/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/2_5/nimsrc_nim.o \
c_code/2_5/stdlib_system.o \
c_code/2_5/nimsrc_testability.o \
c_code/2_5/nimsrc_commands.o \
c_code/2_5/stdlib_os.o \
c_code/2_5/stdlib_strutils.o \
c_code/2_5/stdlib_parseutils.o \
c_code/2_5/stdlib_times.o \
c_code/2_5/stdlib_posix.o \
c_code/2_5/nimsrc_msgs.o \
c_code/2_5/nimsrc_options.o \
c_code/2_5/nimsrc_lists.o \
c_code/2_5/stdlib_strtabs.o \
c_code/2_5/stdlib_hashes.o \
c_code/2_5/stdlib_osproc.o \
c_code/2_5/stdlib_streams.o \
c_code/2_5/stdlib_cpuinfo.o \
c_code/2_5/stdlib_linux.o \
c_code/2_5/stdlib_sets.o \
c_code/2_5/stdlib_math.o \
c_code/2_5/stdlib_tables.o \
c_code/2_5/nimsrc_ropes.o \
c_code/2_5/nimsrc_platform.o \
c_code/2_5/nimsrc_nversion.o \
c_code/2_5/nimsrc_condsyms.o \
c_code/2_5/nimsrc_idents.o \
c_code/2_5/nimsrc_extccomp.o \
c_code/2_5/nimsrc_crc.o \
c_code/2_5/nimsrc_wordrecg.o \
c_code/2_5/nimsrc_nimblecmd.o \
c_code/2_5/stdlib_parseopt.o \
c_code/2_5/nimsrc_lexer.o \
c_code/2_5/nimsrc_nimlexbase.o \
c_code/2_5/nimsrc_llstream.o \
c_code/2_5/nimsrc_nimconf.o \
c_code/2_5/nimsrc_main.o \
c_code/2_5/nimsrc_ast.o \
c_code/2_5/stdlib_intsets.o \
c_code/2_5/nimsrc_idgen.o \
c_code/2_5/nimsrc_astalgo.o \
c_code/2_5/nimsrc_rodutils.o \
c_code/2_5/nimsrc_syntaxes.o \
c_code/2_5/nimsrc_parser.o \
c_code/2_5/nimsrc_pbraces.o \
c_code/2_5/nimsrc_filters.o \
c_code/2_5/nimsrc_renderer.o \
c_code/2_5/nimsrc_filter_tmpl.o \
c_code/2_5/nimsrc_rodread.o \
c_code/2_5/nimsrc_types.o \
c_code/2_5/nimsrc_trees.o \
c_code/2_5/stdlib_memfiles.o \
c_code/2_5/nimsrc_rodwrite.o \
c_code/2_5/nimsrc_passes.o \
c_code/2_5/nimsrc_magicsys.o \
c_code/2_5/nimsrc_nimsets.o \
c_code/2_5/nimsrc_bitsets.o \
c_code/2_5/nimsrc_importer.o \
c_code/2_5/nimsrc_lookups.o \
c_code/2_5/nimsrc_semdata.o \
c_code/2_5/nimsrc_treetab.o \
c_code/2_5/nimsrc_vmdef.o \
c_code/2_5/nimsrc_prettybase.o \
c_code/2_5/stdlib_lexbase.o \
c_code/2_5/nimsrc_sem.o \
c_code/2_5/nimsrc_semfold.o \
c_code/2_5/nimsrc_saturate.o \
c_code/2_5/nimsrc_procfind.o \
c_code/2_5/nimsrc_pragmas.o \
c_code/2_5/nimsrc_semtypinst.o \
c_code/2_5/nimsrc_sigmatch.o \
c_code/2_5/nimsrc_parampatterns.o \
c_code/2_5/nimsrc_pretty.o \
c_code/2_5/nimsrc_docgen.o \
c_code/2_5/docutils_rstast.o \
c_code/2_5/stdlib_json.o \
c_code/2_5/stdlib_unicode.o \
c_code/2_5/stdlib_macros.o \
c_code/2_5/docutils_rst.o \
c_code/2_5/docutils_rstgen.o \
c_code/2_5/docutils_highlite.o \
c_code/2_5/stdlib_sequtils.o \
c_code/2_5/stdlib_algorithm.o \
c_code/2_5/nimsrc_sempass2.o \
c_code/2_5/nimsrc_guards.o \
c_code/2_5/stdlib_xmltree.o \
c_code/2_5/stdlib_cgi.o \
c_code/2_5/stdlib_cookies.o \
c_code/2_5/nimsrc_typesrenderer.o \
c_code/2_5/nimsrc_transf.o \
c_code/2_5/nimsrc_cgmeth.o \
c_code/2_5/nimsrc_lambdalifting.o \
c_code/2_5/nimsrc_lowerings.o \
c_code/2_5/nimsrc_vm.o \
c_code/2_5/nimsrc_vmgen.o \
c_code/2_5/stdlib_unsigned.o \
c_code/2_5/nimsrc_vmdeps.o \
c_code/2_5/nimsrc_vmmarshal.o \
c_code/2_5/nimsrc_evaltempl.o \
c_code/2_5/nimsrc_aliases.o \
c_code/2_5/nimsrc_patterns.o \
c_code/2_5/nimsrc_semmacrosanity.o \
c_code/2_5/nimsrc_semparallel.o \
c_code/2_5/nimsrc_plugins.o \
c_code/2_5/nimsrc_active.o \
c_code/2_5/nimsrc_locals.o \
c_code/2_5/nimsrc_cgen.o \
c_code/2_5/nimsrc_ccgutils.o \
c_code/2_5/nimsrc_cgendata.o \
c_code/2_5/nimsrc_ccgmerge.o \
c_code/2_5/nimsrc_jsgen.o \
c_code/2_5/nimsrc_passaux.o \
c_code/2_5/nimsrc_depends.o \
c_code/2_5/nimsrc_docgen2.o \
c_code/2_5/nimsrc_service.o \
c_code/2_5/stdlib_net.o \
c_code/2_5/stdlib_rawsockets.o \
c_code/2_5/nimsrc_modules.o \
c_code/2_5/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/2_5/nimsrc_nim.o \
c_code/2_5/stdlib_system.o \
c_code/2_5/nimsrc_testability.o \
c_code/2_5/nimsrc_commands.o \
c_code/2_5/stdlib_os.o \
c_code/2_5/stdlib_strutils.o \
c_code/2_5/stdlib_parseutils.o \
c_code/2_5/stdlib_times.o \
c_code/2_5/stdlib_posix.o \
c_code/2_5/nimsrc_msgs.o \
c_code/2_5/nimsrc_options.o \
c_code/2_5/nimsrc_lists.o \
c_code/2_5/stdlib_strtabs.o \
c_code/2_5/stdlib_hashes.o \
c_code/2_5/stdlib_osproc.o \
c_code/2_5/stdlib_streams.o \
c_code/2_5/stdlib_cpuinfo.o \
c_code/2_5/stdlib_linux.o \
c_code/2_5/stdlib_sets.o \
c_code/2_5/stdlib_math.o \
c_code/2_5/stdlib_tables.o \
c_code/2_5/nimsrc_ropes.o \
c_code/2_5/nimsrc_platform.o \
c_code/2_5/nimsrc_nversion.o \
c_code/2_5/nimsrc_condsyms.o \
c_code/2_5/nimsrc_idents.o \
c_code/2_5/nimsrc_extccomp.o \
c_code/2_5/nimsrc_crc.o \
c_code/2_5/nimsrc_wordrecg.o \
c_code/2_5/nimsrc_nimblecmd.o \
c_code/2_5/stdlib_parseopt.o \
c_code/2_5/nimsrc_lexer.o \
c_code/2_5/nimsrc_nimlexbase.o \
c_code/2_5/nimsrc_llstream.o \
c_code/2_5/nimsrc_nimconf.o \
c_code/2_5/nimsrc_main.o \
c_code/2_5/nimsrc_ast.o \
c_code/2_5/stdlib_intsets.o \
c_code/2_5/nimsrc_idgen.o \
c_code/2_5/nimsrc_astalgo.o \
c_code/2_5/nimsrc_rodutils.o \
c_code/2_5/nimsrc_syntaxes.o \
c_code/2_5/nimsrc_parser.o \
c_code/2_5/nimsrc_pbraces.o \
c_code/2_5/nimsrc_filters.o \
c_code/2_5/nimsrc_renderer.o \
c_code/2_5/nimsrc_filter_tmpl.o \
c_code/2_5/nimsrc_rodread.o \
c_code/2_5/nimsrc_types.o \
c_code/2_5/nimsrc_trees.o \
c_code/2_5/stdlib_memfiles.o \
c_code/2_5/nimsrc_rodwrite.o \
c_code/2_5/nimsrc_passes.o \
c_code/2_5/nimsrc_magicsys.o \
c_code/2_5/nimsrc_nimsets.o \
c_code/2_5/nimsrc_bitsets.o \
c_code/2_5/nimsrc_importer.o \
c_code/2_5/nimsrc_lookups.o \
c_code/2_5/nimsrc_semdata.o \
c_code/2_5/nimsrc_treetab.o \
c_code/2_5/nimsrc_vmdef.o \
c_code/2_5/nimsrc_prettybase.o \
c_code/2_5/stdlib_lexbase.o \
c_code/2_5/nimsrc_sem.o \
c_code/2_5/nimsrc_semfold.o \
c_code/2_5/nimsrc_saturate.o \
c_code/2_5/nimsrc_procfind.o \
c_code/2_5/nimsrc_pragmas.o \
c_code/2_5/nimsrc_semtypinst.o \
c_code/2_5/nimsrc_sigmatch.o \
c_code/2_5/nimsrc_parampatterns.o \
c_code/2_5/nimsrc_pretty.o \
c_code/2_5/nimsrc_docgen.o \
c_code/2_5/docutils_rstast.o \
c_code/2_5/stdlib_json.o \
c_code/2_5/stdlib_unicode.o \
c_code/2_5/stdlib_macros.o \
c_code/2_5/docutils_rst.o \
c_code/2_5/docutils_rstgen.o \
c_code/2_5/docutils_highlite.o \
c_code/2_5/stdlib_sequtils.o \
c_code/2_5/stdlib_algorithm.o \
c_code/2_5/nimsrc_sempass2.o \
c_code/2_5/nimsrc_guards.o \
c_code/2_5/stdlib_xmltree.o \
c_code/2_5/stdlib_cgi.o \
c_code/2_5/stdlib_cookies.o \
c_code/2_5/nimsrc_typesrenderer.o \
c_code/2_5/nimsrc_transf.o \
c_code/2_5/nimsrc_cgmeth.o \
c_code/2_5/nimsrc_lambdalifting.o \
c_code/2_5/nimsrc_lowerings.o \
c_code/2_5/nimsrc_vm.o \
c_code/2_5/nimsrc_vmgen.o \
c_code/2_5/stdlib_unsigned.o \
c_code/2_5/nimsrc_vmdeps.o \
c_code/2_5/nimsrc_vmmarshal.o \
c_code/2_5/nimsrc_evaltempl.o \
c_code/2_5/nimsrc_aliases.o \
c_code/2_5/nimsrc_patterns.o \
c_code/2_5/nimsrc_semmacrosanity.o \
c_code/2_5/nimsrc_semparallel.o \
c_code/2_5/nimsrc_plugins.o \
c_code/2_5/nimsrc_active.o \
c_code/2_5/nimsrc_locals.o \
c_code/2_5/nimsrc_cgen.o \
c_code/2_5/nimsrc_ccgutils.o \
c_code/2_5/nimsrc_cgendata.o \
c_code/2_5/nimsrc_ccgmerge.o \
c_code/2_5/nimsrc_jsgen.o \
c_code/2_5/nimsrc_passaux.o \
c_code/2_5/nimsrc_depends.o \
c_code/2_5/nimsrc_docgen2.o \
c_code/2_5/nimsrc_service.o \
c_code/2_5/stdlib_net.o \
c_code/2_5/stdlib_rawsockets.o \
c_code/2_5/nimsrc_modules.o \
c_code/2_5/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  mips)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_nim.c -o c_code/2_6/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_nim.c -o c_code/2_6/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_system.c -o c_code/2_6/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_system.c -o c_code/2_6/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_testability.c -o c_code/2_6/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_testability.c -o c_code/2_6/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_commands.c -o c_code/2_6/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_commands.c -o c_code/2_6/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_os.c -o c_code/2_6/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_os.c -o c_code/2_6/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_strutils.c -o c_code/2_6/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_strutils.c -o c_code/2_6/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_parseutils.c -o c_code/2_6/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_parseutils.c -o c_code/2_6/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_times.c -o c_code/2_6/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_times.c -o c_code/2_6/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_posix.c -o c_code/2_6/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_posix.c -o c_code/2_6/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_msgs.c -o c_code/2_6/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_msgs.c -o c_code/2_6/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_options.c -o c_code/2_6/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_options.c -o c_code/2_6/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_lists.c -o c_code/2_6/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_lists.c -o c_code/2_6/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_strtabs.c -o c_code/2_6/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_strtabs.c -o c_code/2_6/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_hashes.c -o c_code/2_6/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_hashes.c -o c_code/2_6/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_osproc.c -o c_code/2_6/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_osproc.c -o c_code/2_6/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_streams.c -o c_code/2_6/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_streams.c -o c_code/2_6/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_cpuinfo.c -o c_code/2_6/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_cpuinfo.c -o c_code/2_6/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_linux.c -o c_code/2_6/stdlib_linux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_linux.c -o c_code/2_6/stdlib_linux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_sets.c -o c_code/2_6/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_sets.c -o c_code/2_6/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_math.c -o c_code/2_6/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_math.c -o c_code/2_6/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_tables.c -o c_code/2_6/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_tables.c -o c_code/2_6/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_ropes.c -o c_code/2_6/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_ropes.c -o c_code/2_6/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_platform.c -o c_code/2_6/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_platform.c -o c_code/2_6/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_nversion.c -o c_code/2_6/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_nversion.c -o c_code/2_6/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_condsyms.c -o c_code/2_6/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_condsyms.c -o c_code/2_6/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_idents.c -o c_code/2_6/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_idents.c -o c_code/2_6/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_extccomp.c -o c_code/2_6/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_extccomp.c -o c_code/2_6/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_crc.c -o c_code/2_6/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_crc.c -o c_code/2_6/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_wordrecg.c -o c_code/2_6/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_wordrecg.c -o c_code/2_6/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_nimblecmd.c -o c_code/2_6/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_nimblecmd.c -o c_code/2_6/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_parseopt.c -o c_code/2_6/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_parseopt.c -o c_code/2_6/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_lexer.c -o c_code/2_6/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_lexer.c -o c_code/2_6/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_nimlexbase.c -o c_code/2_6/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_nimlexbase.c -o c_code/2_6/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_llstream.c -o c_code/2_6/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_llstream.c -o c_code/2_6/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_nimconf.c -o c_code/2_6/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_nimconf.c -o c_code/2_6/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_main.c -o c_code/2_6/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_main.c -o c_code/2_6/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_ast.c -o c_code/2_6/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_ast.c -o c_code/2_6/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_intsets.c -o c_code/2_6/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_intsets.c -o c_code/2_6/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_idgen.c -o c_code/2_6/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_idgen.c -o c_code/2_6/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_astalgo.c -o c_code/2_6/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_astalgo.c -o c_code/2_6/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_rodutils.c -o c_code/2_6/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_rodutils.c -o c_code/2_6/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_syntaxes.c -o c_code/2_6/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_syntaxes.c -o c_code/2_6/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_parser.c -o c_code/2_6/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_parser.c -o c_code/2_6/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_pbraces.c -o c_code/2_6/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_pbraces.c -o c_code/2_6/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_filters.c -o c_code/2_6/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_filters.c -o c_code/2_6/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_renderer.c -o c_code/2_6/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_renderer.c -o c_code/2_6/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_filter_tmpl.c -o c_code/2_6/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_filter_tmpl.c -o c_code/2_6/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_rodread.c -o c_code/2_6/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_rodread.c -o c_code/2_6/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_types.c -o c_code/2_6/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_types.c -o c_code/2_6/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_trees.c -o c_code/2_6/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_trees.c -o c_code/2_6/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_memfiles.c -o c_code/2_6/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_memfiles.c -o c_code/2_6/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_rodwrite.c -o c_code/2_6/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_rodwrite.c -o c_code/2_6/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_passes.c -o c_code/2_6/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_passes.c -o c_code/2_6/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_magicsys.c -o c_code/2_6/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_magicsys.c -o c_code/2_6/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_nimsets.c -o c_code/2_6/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_nimsets.c -o c_code/2_6/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_bitsets.c -o c_code/2_6/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_bitsets.c -o c_code/2_6/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_importer.c -o c_code/2_6/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_importer.c -o c_code/2_6/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_lookups.c -o c_code/2_6/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_lookups.c -o c_code/2_6/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_semdata.c -o c_code/2_6/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_semdata.c -o c_code/2_6/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_treetab.c -o c_code/2_6/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_treetab.c -o c_code/2_6/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_vmdef.c -o c_code/2_6/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_vmdef.c -o c_code/2_6/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_prettybase.c -o c_code/2_6/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_prettybase.c -o c_code/2_6/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_lexbase.c -o c_code/2_6/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_lexbase.c -o c_code/2_6/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_sem.c -o c_code/2_6/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_sem.c -o c_code/2_6/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_semfold.c -o c_code/2_6/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_semfold.c -o c_code/2_6/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_saturate.c -o c_code/2_6/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_saturate.c -o c_code/2_6/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_procfind.c -o c_code/2_6/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_procfind.c -o c_code/2_6/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_pragmas.c -o c_code/2_6/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_pragmas.c -o c_code/2_6/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_semtypinst.c -o c_code/2_6/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_semtypinst.c -o c_code/2_6/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_sigmatch.c -o c_code/2_6/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_sigmatch.c -o c_code/2_6/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_parampatterns.c -o c_code/2_6/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_parampatterns.c -o c_code/2_6/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_pretty.c -o c_code/2_6/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_pretty.c -o c_code/2_6/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_docgen.c -o c_code/2_6/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_docgen.c -o c_code/2_6/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/docutils_rstast.c -o c_code/2_6/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/docutils_rstast.c -o c_code/2_6/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_json.c -o c_code/2_6/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_json.c -o c_code/2_6/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_unicode.c -o c_code/2_6/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_unicode.c -o c_code/2_6/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_macros.c -o c_code/2_6/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_macros.c -o c_code/2_6/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/docutils_rst.c -o c_code/2_6/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/docutils_rst.c -o c_code/2_6/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/docutils_rstgen.c -o c_code/2_6/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/docutils_rstgen.c -o c_code/2_6/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/docutils_highlite.c -o c_code/2_6/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/docutils_highlite.c -o c_code/2_6/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_sequtils.c -o c_code/2_6/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_sequtils.c -o c_code/2_6/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_algorithm.c -o c_code/2_6/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_algorithm.c -o c_code/2_6/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_sempass2.c -o c_code/2_6/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_sempass2.c -o c_code/2_6/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_guards.c -o c_code/2_6/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_guards.c -o c_code/2_6/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_xmltree.c -o c_code/2_6/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_xmltree.c -o c_code/2_6/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_cgi.c -o c_code/2_6/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_cgi.c -o c_code/2_6/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_cookies.c -o c_code/2_6/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_cookies.c -o c_code/2_6/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_typesrenderer.c -o c_code/2_6/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_typesrenderer.c -o c_code/2_6/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_transf.c -o c_code/2_6/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_transf.c -o c_code/2_6/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_cgmeth.c -o c_code/2_6/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_cgmeth.c -o c_code/2_6/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_lambdalifting.c -o c_code/2_6/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_lambdalifting.c -o c_code/2_6/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_lowerings.c -o c_code/2_6/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_lowerings.c -o c_code/2_6/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_vm.c -o c_code/2_6/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_vm.c -o c_code/2_6/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_vmgen.c -o c_code/2_6/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_vmgen.c -o c_code/2_6/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_unsigned.c -o c_code/2_6/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_unsigned.c -o c_code/2_6/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_vmdeps.c -o c_code/2_6/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_vmdeps.c -o c_code/2_6/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_vmmarshal.c -o c_code/2_6/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_vmmarshal.c -o c_code/2_6/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_evaltempl.c -o c_code/2_6/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_evaltempl.c -o c_code/2_6/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_aliases.c -o c_code/2_6/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_aliases.c -o c_code/2_6/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_patterns.c -o c_code/2_6/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_patterns.c -o c_code/2_6/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_semmacrosanity.c -o c_code/2_6/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_semmacrosanity.c -o c_code/2_6/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_semparallel.c -o c_code/2_6/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_semparallel.c -o c_code/2_6/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_plugins.c -o c_code/2_6/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_plugins.c -o c_code/2_6/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_active.c -o c_code/2_6/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_active.c -o c_code/2_6/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_locals.c -o c_code/2_6/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_locals.c -o c_code/2_6/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_cgen.c -o c_code/2_6/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_cgen.c -o c_code/2_6/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_ccgutils.c -o c_code/2_6/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_ccgutils.c -o c_code/2_6/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_cgendata.c -o c_code/2_6/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_cgendata.c -o c_code/2_6/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_ccgmerge.c -o c_code/2_6/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_ccgmerge.c -o c_code/2_6/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_jsgen.c -o c_code/2_6/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_jsgen.c -o c_code/2_6/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_passaux.c -o c_code/2_6/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_passaux.c -o c_code/2_6/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_depends.c -o c_code/2_6/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_depends.c -o c_code/2_6/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_docgen2.c -o c_code/2_6/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_docgen2.c -o c_code/2_6/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_service.c -o c_code/2_6/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_service.c -o c_code/2_6/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_net.c -o c_code/2_6/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_net.c -o c_code/2_6/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_rawsockets.c -o c_code/2_6/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/stdlib_rawsockets.c -o c_code/2_6/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_modules.c -o c_code/2_6/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_modules.c -o c_code/2_6/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_nodejs.c -o c_code/2_6/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_6/nimsrc_nodejs.c -o c_code/2_6/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/2_6/nimsrc_nim.o \
c_code/2_6/stdlib_system.o \
c_code/2_6/nimsrc_testability.o \
c_code/2_6/nimsrc_commands.o \
c_code/2_6/stdlib_os.o \
c_code/2_6/stdlib_strutils.o \
c_code/2_6/stdlib_parseutils.o \
c_code/2_6/stdlib_times.o \
c_code/2_6/stdlib_posix.o \
c_code/2_6/nimsrc_msgs.o \
c_code/2_6/nimsrc_options.o \
c_code/2_6/nimsrc_lists.o \
c_code/2_6/stdlib_strtabs.o \
c_code/2_6/stdlib_hashes.o \
c_code/2_6/stdlib_osproc.o \
c_code/2_6/stdlib_streams.o \
c_code/2_6/stdlib_cpuinfo.o \
c_code/2_6/stdlib_linux.o \
c_code/2_6/stdlib_sets.o \
c_code/2_6/stdlib_math.o \
c_code/2_6/stdlib_tables.o \
c_code/2_6/nimsrc_ropes.o \
c_code/2_6/nimsrc_platform.o \
c_code/2_6/nimsrc_nversion.o \
c_code/2_6/nimsrc_condsyms.o \
c_code/2_6/nimsrc_idents.o \
c_code/2_6/nimsrc_extccomp.o \
c_code/2_6/nimsrc_crc.o \
c_code/2_6/nimsrc_wordrecg.o \
c_code/2_6/nimsrc_nimblecmd.o \
c_code/2_6/stdlib_parseopt.o \
c_code/2_6/nimsrc_lexer.o \
c_code/2_6/nimsrc_nimlexbase.o \
c_code/2_6/nimsrc_llstream.o \
c_code/2_6/nimsrc_nimconf.o \
c_code/2_6/nimsrc_main.o \
c_code/2_6/nimsrc_ast.o \
c_code/2_6/stdlib_intsets.o \
c_code/2_6/nimsrc_idgen.o \
c_code/2_6/nimsrc_astalgo.o \
c_code/2_6/nimsrc_rodutils.o \
c_code/2_6/nimsrc_syntaxes.o \
c_code/2_6/nimsrc_parser.o \
c_code/2_6/nimsrc_pbraces.o \
c_code/2_6/nimsrc_filters.o \
c_code/2_6/nimsrc_renderer.o \
c_code/2_6/nimsrc_filter_tmpl.o \
c_code/2_6/nimsrc_rodread.o \
c_code/2_6/nimsrc_types.o \
c_code/2_6/nimsrc_trees.o \
c_code/2_6/stdlib_memfiles.o \
c_code/2_6/nimsrc_rodwrite.o \
c_code/2_6/nimsrc_passes.o \
c_code/2_6/nimsrc_magicsys.o \
c_code/2_6/nimsrc_nimsets.o \
c_code/2_6/nimsrc_bitsets.o \
c_code/2_6/nimsrc_importer.o \
c_code/2_6/nimsrc_lookups.o \
c_code/2_6/nimsrc_semdata.o \
c_code/2_6/nimsrc_treetab.o \
c_code/2_6/nimsrc_vmdef.o \
c_code/2_6/nimsrc_prettybase.o \
c_code/2_6/stdlib_lexbase.o \
c_code/2_6/nimsrc_sem.o \
c_code/2_6/nimsrc_semfold.o \
c_code/2_6/nimsrc_saturate.o \
c_code/2_6/nimsrc_procfind.o \
c_code/2_6/nimsrc_pragmas.o \
c_code/2_6/nimsrc_semtypinst.o \
c_code/2_6/nimsrc_sigmatch.o \
c_code/2_6/nimsrc_parampatterns.o \
c_code/2_6/nimsrc_pretty.o \
c_code/2_6/nimsrc_docgen.o \
c_code/2_6/docutils_rstast.o \
c_code/2_6/stdlib_json.o \
c_code/2_6/stdlib_unicode.o \
c_code/2_6/stdlib_macros.o \
c_code/2_6/docutils_rst.o \
c_code/2_6/docutils_rstgen.o \
c_code/2_6/docutils_highlite.o \
c_code/2_6/stdlib_sequtils.o \
c_code/2_6/stdlib_algorithm.o \
c_code/2_6/nimsrc_sempass2.o \
c_code/2_6/nimsrc_guards.o \
c_code/2_6/stdlib_xmltree.o \
c_code/2_6/stdlib_cgi.o \
c_code/2_6/stdlib_cookies.o \
c_code/2_6/nimsrc_typesrenderer.o \
c_code/2_6/nimsrc_transf.o \
c_code/2_6/nimsrc_cgmeth.o \
c_code/2_6/nimsrc_lambdalifting.o \
c_code/2_6/nimsrc_lowerings.o \
c_code/2_6/nimsrc_vm.o \
c_code/2_6/nimsrc_vmgen.o \
c_code/2_6/stdlib_unsigned.o \
c_code/2_6/nimsrc_vmdeps.o \
c_code/2_6/nimsrc_vmmarshal.o \
c_code/2_6/nimsrc_evaltempl.o \
c_code/2_6/nimsrc_aliases.o \
c_code/2_6/nimsrc_patterns.o \
c_code/2_6/nimsrc_semmacrosanity.o \
c_code/2_6/nimsrc_semparallel.o \
c_code/2_6/nimsrc_plugins.o \
c_code/2_6/nimsrc_active.o \
c_code/2_6/nimsrc_locals.o \
c_code/2_6/nimsrc_cgen.o \
c_code/2_6/nimsrc_ccgutils.o \
c_code/2_6/nimsrc_cgendata.o \
c_code/2_6/nimsrc_ccgmerge.o \
c_code/2_6/nimsrc_jsgen.o \
c_code/2_6/nimsrc_passaux.o \
c_code/2_6/nimsrc_depends.o \
c_code/2_6/nimsrc_docgen2.o \
c_code/2_6/nimsrc_service.o \
c_code/2_6/stdlib_net.o \
c_code/2_6/stdlib_rawsockets.o \
c_code/2_6/nimsrc_modules.o \
c_code/2_6/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/2_6/nimsrc_nim.o \
c_code/2_6/stdlib_system.o \
c_code/2_6/nimsrc_testability.o \
c_code/2_6/nimsrc_commands.o \
c_code/2_6/stdlib_os.o \
c_code/2_6/stdlib_strutils.o \
c_code/2_6/stdlib_parseutils.o \
c_code/2_6/stdlib_times.o \
c_code/2_6/stdlib_posix.o \
c_code/2_6/nimsrc_msgs.o \
c_code/2_6/nimsrc_options.o \
c_code/2_6/nimsrc_lists.o \
c_code/2_6/stdlib_strtabs.o \
c_code/2_6/stdlib_hashes.o \
c_code/2_6/stdlib_osproc.o \
c_code/2_6/stdlib_streams.o \
c_code/2_6/stdlib_cpuinfo.o \
c_code/2_6/stdlib_linux.o \
c_code/2_6/stdlib_sets.o \
c_code/2_6/stdlib_math.o \
c_code/2_6/stdlib_tables.o \
c_code/2_6/nimsrc_ropes.o \
c_code/2_6/nimsrc_platform.o \
c_code/2_6/nimsrc_nversion.o \
c_code/2_6/nimsrc_condsyms.o \
c_code/2_6/nimsrc_idents.o \
c_code/2_6/nimsrc_extccomp.o \
c_code/2_6/nimsrc_crc.o \
c_code/2_6/nimsrc_wordrecg.o \
c_code/2_6/nimsrc_nimblecmd.o \
c_code/2_6/stdlib_parseopt.o \
c_code/2_6/nimsrc_lexer.o \
c_code/2_6/nimsrc_nimlexbase.o \
c_code/2_6/nimsrc_llstream.o \
c_code/2_6/nimsrc_nimconf.o \
c_code/2_6/nimsrc_main.o \
c_code/2_6/nimsrc_ast.o \
c_code/2_6/stdlib_intsets.o \
c_code/2_6/nimsrc_idgen.o \
c_code/2_6/nimsrc_astalgo.o \
c_code/2_6/nimsrc_rodutils.o \
c_code/2_6/nimsrc_syntaxes.o \
c_code/2_6/nimsrc_parser.o \
c_code/2_6/nimsrc_pbraces.o \
c_code/2_6/nimsrc_filters.o \
c_code/2_6/nimsrc_renderer.o \
c_code/2_6/nimsrc_filter_tmpl.o \
c_code/2_6/nimsrc_rodread.o \
c_code/2_6/nimsrc_types.o \
c_code/2_6/nimsrc_trees.o \
c_code/2_6/stdlib_memfiles.o \
c_code/2_6/nimsrc_rodwrite.o \
c_code/2_6/nimsrc_passes.o \
c_code/2_6/nimsrc_magicsys.o \
c_code/2_6/nimsrc_nimsets.o \
c_code/2_6/nimsrc_bitsets.o \
c_code/2_6/nimsrc_importer.o \
c_code/2_6/nimsrc_lookups.o \
c_code/2_6/nimsrc_semdata.o \
c_code/2_6/nimsrc_treetab.o \
c_code/2_6/nimsrc_vmdef.o \
c_code/2_6/nimsrc_prettybase.o \
c_code/2_6/stdlib_lexbase.o \
c_code/2_6/nimsrc_sem.o \
c_code/2_6/nimsrc_semfold.o \
c_code/2_6/nimsrc_saturate.o \
c_code/2_6/nimsrc_procfind.o \
c_code/2_6/nimsrc_pragmas.o \
c_code/2_6/nimsrc_semtypinst.o \
c_code/2_6/nimsrc_sigmatch.o \
c_code/2_6/nimsrc_parampatterns.o \
c_code/2_6/nimsrc_pretty.o \
c_code/2_6/nimsrc_docgen.o \
c_code/2_6/docutils_rstast.o \
c_code/2_6/stdlib_json.o \
c_code/2_6/stdlib_unicode.o \
c_code/2_6/stdlib_macros.o \
c_code/2_6/docutils_rst.o \
c_code/2_6/docutils_rstgen.o \
c_code/2_6/docutils_highlite.o \
c_code/2_6/stdlib_sequtils.o \
c_code/2_6/stdlib_algorithm.o \
c_code/2_6/nimsrc_sempass2.o \
c_code/2_6/nimsrc_guards.o \
c_code/2_6/stdlib_xmltree.o \
c_code/2_6/stdlib_cgi.o \
c_code/2_6/stdlib_cookies.o \
c_code/2_6/nimsrc_typesrenderer.o \
c_code/2_6/nimsrc_transf.o \
c_code/2_6/nimsrc_cgmeth.o \
c_code/2_6/nimsrc_lambdalifting.o \
c_code/2_6/nimsrc_lowerings.o \
c_code/2_6/nimsrc_vm.o \
c_code/2_6/nimsrc_vmgen.o \
c_code/2_6/stdlib_unsigned.o \
c_code/2_6/nimsrc_vmdeps.o \
c_code/2_6/nimsrc_vmmarshal.o \
c_code/2_6/nimsrc_evaltempl.o \
c_code/2_6/nimsrc_aliases.o \
c_code/2_6/nimsrc_patterns.o \
c_code/2_6/nimsrc_semmacrosanity.o \
c_code/2_6/nimsrc_semparallel.o \
c_code/2_6/nimsrc_plugins.o \
c_code/2_6/nimsrc_active.o \
c_code/2_6/nimsrc_locals.o \
c_code/2_6/nimsrc_cgen.o \
c_code/2_6/nimsrc_ccgutils.o \
c_code/2_6/nimsrc_cgendata.o \
c_code/2_6/nimsrc_ccgmerge.o \
c_code/2_6/nimsrc_jsgen.o \
c_code/2_6/nimsrc_passaux.o \
c_code/2_6/nimsrc_depends.o \
c_code/2_6/nimsrc_docgen2.o \
c_code/2_6/nimsrc_service.o \
c_code/2_6/stdlib_net.o \
c_code/2_6/stdlib_rawsockets.o \
c_code/2_6/nimsrc_modules.o \
c_code/2_6/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  powerpc)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_nim.c -o c_code/2_7/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_nim.c -o c_code/2_7/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_system.c -o c_code/2_7/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_system.c -o c_code/2_7/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_testability.c -o c_code/2_7/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_testability.c -o c_code/2_7/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_commands.c -o c_code/2_7/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_commands.c -o c_code/2_7/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_os.c -o c_code/2_7/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_os.c -o c_code/2_7/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_strutils.c -o c_code/2_7/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_strutils.c -o c_code/2_7/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_parseutils.c -o c_code/2_7/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_parseutils.c -o c_code/2_7/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_times.c -o c_code/2_7/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_times.c -o c_code/2_7/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_posix.c -o c_code/2_7/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_posix.c -o c_code/2_7/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_msgs.c -o c_code/2_7/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_msgs.c -o c_code/2_7/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_options.c -o c_code/2_7/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_options.c -o c_code/2_7/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_lists.c -o c_code/2_7/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_lists.c -o c_code/2_7/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_strtabs.c -o c_code/2_7/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_strtabs.c -o c_code/2_7/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_hashes.c -o c_code/2_7/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_hashes.c -o c_code/2_7/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_osproc.c -o c_code/2_7/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_osproc.c -o c_code/2_7/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_streams.c -o c_code/2_7/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_streams.c -o c_code/2_7/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_cpuinfo.c -o c_code/2_7/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_cpuinfo.c -o c_code/2_7/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_linux.c -o c_code/2_7/stdlib_linux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_linux.c -o c_code/2_7/stdlib_linux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_sets.c -o c_code/2_7/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_sets.c -o c_code/2_7/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_math.c -o c_code/2_7/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_math.c -o c_code/2_7/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_tables.c -o c_code/2_7/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_tables.c -o c_code/2_7/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_ropes.c -o c_code/2_7/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_ropes.c -o c_code/2_7/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_platform.c -o c_code/2_7/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_platform.c -o c_code/2_7/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_nversion.c -o c_code/2_7/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_nversion.c -o c_code/2_7/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_condsyms.c -o c_code/2_7/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_condsyms.c -o c_code/2_7/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_idents.c -o c_code/2_7/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_idents.c -o c_code/2_7/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_extccomp.c -o c_code/2_7/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_extccomp.c -o c_code/2_7/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_crc.c -o c_code/2_7/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_crc.c -o c_code/2_7/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_wordrecg.c -o c_code/2_7/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_wordrecg.c -o c_code/2_7/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_nimblecmd.c -o c_code/2_7/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_nimblecmd.c -o c_code/2_7/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_parseopt.c -o c_code/2_7/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_parseopt.c -o c_code/2_7/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_lexer.c -o c_code/2_7/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_lexer.c -o c_code/2_7/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_nimlexbase.c -o c_code/2_7/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_nimlexbase.c -o c_code/2_7/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_llstream.c -o c_code/2_7/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_llstream.c -o c_code/2_7/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_nimconf.c -o c_code/2_7/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_nimconf.c -o c_code/2_7/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_main.c -o c_code/2_7/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_main.c -o c_code/2_7/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_ast.c -o c_code/2_7/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_ast.c -o c_code/2_7/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_intsets.c -o c_code/2_7/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_intsets.c -o c_code/2_7/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_idgen.c -o c_code/2_7/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_idgen.c -o c_code/2_7/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_astalgo.c -o c_code/2_7/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_astalgo.c -o c_code/2_7/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_rodutils.c -o c_code/2_7/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_rodutils.c -o c_code/2_7/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_syntaxes.c -o c_code/2_7/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_syntaxes.c -o c_code/2_7/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_parser.c -o c_code/2_7/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_parser.c -o c_code/2_7/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_pbraces.c -o c_code/2_7/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_pbraces.c -o c_code/2_7/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_filters.c -o c_code/2_7/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_filters.c -o c_code/2_7/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_renderer.c -o c_code/2_7/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_renderer.c -o c_code/2_7/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_filter_tmpl.c -o c_code/2_7/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_filter_tmpl.c -o c_code/2_7/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_rodread.c -o c_code/2_7/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_rodread.c -o c_code/2_7/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_types.c -o c_code/2_7/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_types.c -o c_code/2_7/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_trees.c -o c_code/2_7/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_trees.c -o c_code/2_7/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_memfiles.c -o c_code/2_7/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_memfiles.c -o c_code/2_7/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_rodwrite.c -o c_code/2_7/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_rodwrite.c -o c_code/2_7/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_passes.c -o c_code/2_7/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_passes.c -o c_code/2_7/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_magicsys.c -o c_code/2_7/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_magicsys.c -o c_code/2_7/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_nimsets.c -o c_code/2_7/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_nimsets.c -o c_code/2_7/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_bitsets.c -o c_code/2_7/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_bitsets.c -o c_code/2_7/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_importer.c -o c_code/2_7/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_importer.c -o c_code/2_7/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_lookups.c -o c_code/2_7/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_lookups.c -o c_code/2_7/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_semdata.c -o c_code/2_7/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_semdata.c -o c_code/2_7/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_treetab.c -o c_code/2_7/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_treetab.c -o c_code/2_7/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_vmdef.c -o c_code/2_7/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_vmdef.c -o c_code/2_7/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_prettybase.c -o c_code/2_7/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_prettybase.c -o c_code/2_7/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_lexbase.c -o c_code/2_7/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_lexbase.c -o c_code/2_7/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_sem.c -o c_code/2_7/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_sem.c -o c_code/2_7/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_semfold.c -o c_code/2_7/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_semfold.c -o c_code/2_7/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_saturate.c -o c_code/2_7/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_saturate.c -o c_code/2_7/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_procfind.c -o c_code/2_7/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_procfind.c -o c_code/2_7/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_pragmas.c -o c_code/2_7/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_pragmas.c -o c_code/2_7/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_semtypinst.c -o c_code/2_7/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_semtypinst.c -o c_code/2_7/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_sigmatch.c -o c_code/2_7/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_sigmatch.c -o c_code/2_7/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_parampatterns.c -o c_code/2_7/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_parampatterns.c -o c_code/2_7/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_pretty.c -o c_code/2_7/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_pretty.c -o c_code/2_7/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_docgen.c -o c_code/2_7/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_docgen.c -o c_code/2_7/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/docutils_rstast.c -o c_code/2_7/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/docutils_rstast.c -o c_code/2_7/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_json.c -o c_code/2_7/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_json.c -o c_code/2_7/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_unicode.c -o c_code/2_7/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_unicode.c -o c_code/2_7/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_macros.c -o c_code/2_7/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_macros.c -o c_code/2_7/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/docutils_rst.c -o c_code/2_7/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/docutils_rst.c -o c_code/2_7/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/docutils_rstgen.c -o c_code/2_7/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/docutils_rstgen.c -o c_code/2_7/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/docutils_highlite.c -o c_code/2_7/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/docutils_highlite.c -o c_code/2_7/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_sequtils.c -o c_code/2_7/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_sequtils.c -o c_code/2_7/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_algorithm.c -o c_code/2_7/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_algorithm.c -o c_code/2_7/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_sempass2.c -o c_code/2_7/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_sempass2.c -o c_code/2_7/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_guards.c -o c_code/2_7/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_guards.c -o c_code/2_7/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_xmltree.c -o c_code/2_7/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_xmltree.c -o c_code/2_7/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_cgi.c -o c_code/2_7/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_cgi.c -o c_code/2_7/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_cookies.c -o c_code/2_7/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_cookies.c -o c_code/2_7/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_typesrenderer.c -o c_code/2_7/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_typesrenderer.c -o c_code/2_7/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_transf.c -o c_code/2_7/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_transf.c -o c_code/2_7/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_cgmeth.c -o c_code/2_7/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_cgmeth.c -o c_code/2_7/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_lambdalifting.c -o c_code/2_7/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_lambdalifting.c -o c_code/2_7/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_lowerings.c -o c_code/2_7/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_lowerings.c -o c_code/2_7/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_vm.c -o c_code/2_7/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_vm.c -o c_code/2_7/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_vmgen.c -o c_code/2_7/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_vmgen.c -o c_code/2_7/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_unsigned.c -o c_code/2_7/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_unsigned.c -o c_code/2_7/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_vmdeps.c -o c_code/2_7/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_vmdeps.c -o c_code/2_7/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_vmmarshal.c -o c_code/2_7/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_vmmarshal.c -o c_code/2_7/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_evaltempl.c -o c_code/2_7/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_evaltempl.c -o c_code/2_7/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_aliases.c -o c_code/2_7/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_aliases.c -o c_code/2_7/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_patterns.c -o c_code/2_7/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_patterns.c -o c_code/2_7/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_semmacrosanity.c -o c_code/2_7/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_semmacrosanity.c -o c_code/2_7/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_semparallel.c -o c_code/2_7/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_semparallel.c -o c_code/2_7/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_plugins.c -o c_code/2_7/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_plugins.c -o c_code/2_7/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_active.c -o c_code/2_7/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_active.c -o c_code/2_7/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_locals.c -o c_code/2_7/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_locals.c -o c_code/2_7/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_cgen.c -o c_code/2_7/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_cgen.c -o c_code/2_7/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_ccgutils.c -o c_code/2_7/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_ccgutils.c -o c_code/2_7/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_cgendata.c -o c_code/2_7/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_cgendata.c -o c_code/2_7/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_ccgmerge.c -o c_code/2_7/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_ccgmerge.c -o c_code/2_7/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_jsgen.c -o c_code/2_7/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_jsgen.c -o c_code/2_7/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_passaux.c -o c_code/2_7/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_passaux.c -o c_code/2_7/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_depends.c -o c_code/2_7/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_depends.c -o c_code/2_7/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_docgen2.c -o c_code/2_7/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_docgen2.c -o c_code/2_7/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_service.c -o c_code/2_7/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_service.c -o c_code/2_7/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_net.c -o c_code/2_7/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_net.c -o c_code/2_7/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_rawsockets.c -o c_code/2_7/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/stdlib_rawsockets.c -o c_code/2_7/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_modules.c -o c_code/2_7/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_modules.c -o c_code/2_7/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_nodejs.c -o c_code/2_7/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/2_7/nimsrc_nodejs.c -o c_code/2_7/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/2_7/nimsrc_nim.o \
c_code/2_7/stdlib_system.o \
c_code/2_7/nimsrc_testability.o \
c_code/2_7/nimsrc_commands.o \
c_code/2_7/stdlib_os.o \
c_code/2_7/stdlib_strutils.o \
c_code/2_7/stdlib_parseutils.o \
c_code/2_7/stdlib_times.o \
c_code/2_7/stdlib_posix.o \
c_code/2_7/nimsrc_msgs.o \
c_code/2_7/nimsrc_options.o \
c_code/2_7/nimsrc_lists.o \
c_code/2_7/stdlib_strtabs.o \
c_code/2_7/stdlib_hashes.o \
c_code/2_7/stdlib_osproc.o \
c_code/2_7/stdlib_streams.o \
c_code/2_7/stdlib_cpuinfo.o \
c_code/2_7/stdlib_linux.o \
c_code/2_7/stdlib_sets.o \
c_code/2_7/stdlib_math.o \
c_code/2_7/stdlib_tables.o \
c_code/2_7/nimsrc_ropes.o \
c_code/2_7/nimsrc_platform.o \
c_code/2_7/nimsrc_nversion.o \
c_code/2_7/nimsrc_condsyms.o \
c_code/2_7/nimsrc_idents.o \
c_code/2_7/nimsrc_extccomp.o \
c_code/2_7/nimsrc_crc.o \
c_code/2_7/nimsrc_wordrecg.o \
c_code/2_7/nimsrc_nimblecmd.o \
c_code/2_7/stdlib_parseopt.o \
c_code/2_7/nimsrc_lexer.o \
c_code/2_7/nimsrc_nimlexbase.o \
c_code/2_7/nimsrc_llstream.o \
c_code/2_7/nimsrc_nimconf.o \
c_code/2_7/nimsrc_main.o \
c_code/2_7/nimsrc_ast.o \
c_code/2_7/stdlib_intsets.o \
c_code/2_7/nimsrc_idgen.o \
c_code/2_7/nimsrc_astalgo.o \
c_code/2_7/nimsrc_rodutils.o \
c_code/2_7/nimsrc_syntaxes.o \
c_code/2_7/nimsrc_parser.o \
c_code/2_7/nimsrc_pbraces.o \
c_code/2_7/nimsrc_filters.o \
c_code/2_7/nimsrc_renderer.o \
c_code/2_7/nimsrc_filter_tmpl.o \
c_code/2_7/nimsrc_rodread.o \
c_code/2_7/nimsrc_types.o \
c_code/2_7/nimsrc_trees.o \
c_code/2_7/stdlib_memfiles.o \
c_code/2_7/nimsrc_rodwrite.o \
c_code/2_7/nimsrc_passes.o \
c_code/2_7/nimsrc_magicsys.o \
c_code/2_7/nimsrc_nimsets.o \
c_code/2_7/nimsrc_bitsets.o \
c_code/2_7/nimsrc_importer.o \
c_code/2_7/nimsrc_lookups.o \
c_code/2_7/nimsrc_semdata.o \
c_code/2_7/nimsrc_treetab.o \
c_code/2_7/nimsrc_vmdef.o \
c_code/2_7/nimsrc_prettybase.o \
c_code/2_7/stdlib_lexbase.o \
c_code/2_7/nimsrc_sem.o \
c_code/2_7/nimsrc_semfold.o \
c_code/2_7/nimsrc_saturate.o \
c_code/2_7/nimsrc_procfind.o \
c_code/2_7/nimsrc_pragmas.o \
c_code/2_7/nimsrc_semtypinst.o \
c_code/2_7/nimsrc_sigmatch.o \
c_code/2_7/nimsrc_parampatterns.o \
c_code/2_7/nimsrc_pretty.o \
c_code/2_7/nimsrc_docgen.o \
c_code/2_7/docutils_rstast.o \
c_code/2_7/stdlib_json.o \
c_code/2_7/stdlib_unicode.o \
c_code/2_7/stdlib_macros.o \
c_code/2_7/docutils_rst.o \
c_code/2_7/docutils_rstgen.o \
c_code/2_7/docutils_highlite.o \
c_code/2_7/stdlib_sequtils.o \
c_code/2_7/stdlib_algorithm.o \
c_code/2_7/nimsrc_sempass2.o \
c_code/2_7/nimsrc_guards.o \
c_code/2_7/stdlib_xmltree.o \
c_code/2_7/stdlib_cgi.o \
c_code/2_7/stdlib_cookies.o \
c_code/2_7/nimsrc_typesrenderer.o \
c_code/2_7/nimsrc_transf.o \
c_code/2_7/nimsrc_cgmeth.o \
c_code/2_7/nimsrc_lambdalifting.o \
c_code/2_7/nimsrc_lowerings.o \
c_code/2_7/nimsrc_vm.o \
c_code/2_7/nimsrc_vmgen.o \
c_code/2_7/stdlib_unsigned.o \
c_code/2_7/nimsrc_vmdeps.o \
c_code/2_7/nimsrc_vmmarshal.o \
c_code/2_7/nimsrc_evaltempl.o \
c_code/2_7/nimsrc_aliases.o \
c_code/2_7/nimsrc_patterns.o \
c_code/2_7/nimsrc_semmacrosanity.o \
c_code/2_7/nimsrc_semparallel.o \
c_code/2_7/nimsrc_plugins.o \
c_code/2_7/nimsrc_active.o \
c_code/2_7/nimsrc_locals.o \
c_code/2_7/nimsrc_cgen.o \
c_code/2_7/nimsrc_ccgutils.o \
c_code/2_7/nimsrc_cgendata.o \
c_code/2_7/nimsrc_ccgmerge.o \
c_code/2_7/nimsrc_jsgen.o \
c_code/2_7/nimsrc_passaux.o \
c_code/2_7/nimsrc_depends.o \
c_code/2_7/nimsrc_docgen2.o \
c_code/2_7/nimsrc_service.o \
c_code/2_7/stdlib_net.o \
c_code/2_7/stdlib_rawsockets.o \
c_code/2_7/nimsrc_modules.o \
c_code/2_7/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/2_7/nimsrc_nim.o \
c_code/2_7/stdlib_system.o \
c_code/2_7/nimsrc_testability.o \
c_code/2_7/nimsrc_commands.o \
c_code/2_7/stdlib_os.o \
c_code/2_7/stdlib_strutils.o \
c_code/2_7/stdlib_parseutils.o \
c_code/2_7/stdlib_times.o \
c_code/2_7/stdlib_posix.o \
c_code/2_7/nimsrc_msgs.o \
c_code/2_7/nimsrc_options.o \
c_code/2_7/nimsrc_lists.o \
c_code/2_7/stdlib_strtabs.o \
c_code/2_7/stdlib_hashes.o \
c_code/2_7/stdlib_osproc.o \
c_code/2_7/stdlib_streams.o \
c_code/2_7/stdlib_cpuinfo.o \
c_code/2_7/stdlib_linux.o \
c_code/2_7/stdlib_sets.o \
c_code/2_7/stdlib_math.o \
c_code/2_7/stdlib_tables.o \
c_code/2_7/nimsrc_ropes.o \
c_code/2_7/nimsrc_platform.o \
c_code/2_7/nimsrc_nversion.o \
c_code/2_7/nimsrc_condsyms.o \
c_code/2_7/nimsrc_idents.o \
c_code/2_7/nimsrc_extccomp.o \
c_code/2_7/nimsrc_crc.o \
c_code/2_7/nimsrc_wordrecg.o \
c_code/2_7/nimsrc_nimblecmd.o \
c_code/2_7/stdlib_parseopt.o \
c_code/2_7/nimsrc_lexer.o \
c_code/2_7/nimsrc_nimlexbase.o \
c_code/2_7/nimsrc_llstream.o \
c_code/2_7/nimsrc_nimconf.o \
c_code/2_7/nimsrc_main.o \
c_code/2_7/nimsrc_ast.o \
c_code/2_7/stdlib_intsets.o \
c_code/2_7/nimsrc_idgen.o \
c_code/2_7/nimsrc_astalgo.o \
c_code/2_7/nimsrc_rodutils.o \
c_code/2_7/nimsrc_syntaxes.o \
c_code/2_7/nimsrc_parser.o \
c_code/2_7/nimsrc_pbraces.o \
c_code/2_7/nimsrc_filters.o \
c_code/2_7/nimsrc_renderer.o \
c_code/2_7/nimsrc_filter_tmpl.o \
c_code/2_7/nimsrc_rodread.o \
c_code/2_7/nimsrc_types.o \
c_code/2_7/nimsrc_trees.o \
c_code/2_7/stdlib_memfiles.o \
c_code/2_7/nimsrc_rodwrite.o \
c_code/2_7/nimsrc_passes.o \
c_code/2_7/nimsrc_magicsys.o \
c_code/2_7/nimsrc_nimsets.o \
c_code/2_7/nimsrc_bitsets.o \
c_code/2_7/nimsrc_importer.o \
c_code/2_7/nimsrc_lookups.o \
c_code/2_7/nimsrc_semdata.o \
c_code/2_7/nimsrc_treetab.o \
c_code/2_7/nimsrc_vmdef.o \
c_code/2_7/nimsrc_prettybase.o \
c_code/2_7/stdlib_lexbase.o \
c_code/2_7/nimsrc_sem.o \
c_code/2_7/nimsrc_semfold.o \
c_code/2_7/nimsrc_saturate.o \
c_code/2_7/nimsrc_procfind.o \
c_code/2_7/nimsrc_pragmas.o \
c_code/2_7/nimsrc_semtypinst.o \
c_code/2_7/nimsrc_sigmatch.o \
c_code/2_7/nimsrc_parampatterns.o \
c_code/2_7/nimsrc_pretty.o \
c_code/2_7/nimsrc_docgen.o \
c_code/2_7/docutils_rstast.o \
c_code/2_7/stdlib_json.o \
c_code/2_7/stdlib_unicode.o \
c_code/2_7/stdlib_macros.o \
c_code/2_7/docutils_rst.o \
c_code/2_7/docutils_rstgen.o \
c_code/2_7/docutils_highlite.o \
c_code/2_7/stdlib_sequtils.o \
c_code/2_7/stdlib_algorithm.o \
c_code/2_7/nimsrc_sempass2.o \
c_code/2_7/nimsrc_guards.o \
c_code/2_7/stdlib_xmltree.o \
c_code/2_7/stdlib_cgi.o \
c_code/2_7/stdlib_cookies.o \
c_code/2_7/nimsrc_typesrenderer.o \
c_code/2_7/nimsrc_transf.o \
c_code/2_7/nimsrc_cgmeth.o \
c_code/2_7/nimsrc_lambdalifting.o \
c_code/2_7/nimsrc_lowerings.o \
c_code/2_7/nimsrc_vm.o \
c_code/2_7/nimsrc_vmgen.o \
c_code/2_7/stdlib_unsigned.o \
c_code/2_7/nimsrc_vmdeps.o \
c_code/2_7/nimsrc_vmmarshal.o \
c_code/2_7/nimsrc_evaltempl.o \
c_code/2_7/nimsrc_aliases.o \
c_code/2_7/nimsrc_patterns.o \
c_code/2_7/nimsrc_semmacrosanity.o \
c_code/2_7/nimsrc_semparallel.o \
c_code/2_7/nimsrc_plugins.o \
c_code/2_7/nimsrc_active.o \
c_code/2_7/nimsrc_locals.o \
c_code/2_7/nimsrc_cgen.o \
c_code/2_7/nimsrc_ccgutils.o \
c_code/2_7/nimsrc_cgendata.o \
c_code/2_7/nimsrc_ccgmerge.o \
c_code/2_7/nimsrc_jsgen.o \
c_code/2_7/nimsrc_passaux.o \
c_code/2_7/nimsrc_depends.o \
c_code/2_7/nimsrc_docgen2.o \
c_code/2_7/nimsrc_service.o \
c_code/2_7/stdlib_net.o \
c_code/2_7/stdlib_rawsockets.o \
c_code/2_7/nimsrc_modules.o \
c_code/2_7/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  *)
    echo "Error: no C code generated for: [$myos: $mycpu]"
    exit 1
    ;;
  esac
  ;;
macosx) 
  case $mycpu in
  i386)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_nim.c -o c_code/3_1/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_nim.c -o c_code/3_1/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_system.c -o c_code/3_1/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_system.c -o c_code/3_1/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_testability.c -o c_code/3_1/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_testability.c -o c_code/3_1/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_commands.c -o c_code/3_1/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_commands.c -o c_code/3_1/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_os.c -o c_code/3_1/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_os.c -o c_code/3_1/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_strutils.c -o c_code/3_1/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_strutils.c -o c_code/3_1/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_parseutils.c -o c_code/3_1/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_parseutils.c -o c_code/3_1/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_times.c -o c_code/3_1/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_times.c -o c_code/3_1/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_posix.c -o c_code/3_1/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_posix.c -o c_code/3_1/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_msgs.c -o c_code/3_1/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_msgs.c -o c_code/3_1/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_options.c -o c_code/3_1/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_options.c -o c_code/3_1/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_lists.c -o c_code/3_1/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_lists.c -o c_code/3_1/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_strtabs.c -o c_code/3_1/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_strtabs.c -o c_code/3_1/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_hashes.c -o c_code/3_1/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_hashes.c -o c_code/3_1/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_osproc.c -o c_code/3_1/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_osproc.c -o c_code/3_1/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_streams.c -o c_code/3_1/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_streams.c -o c_code/3_1/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_cpuinfo.c -o c_code/3_1/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_cpuinfo.c -o c_code/3_1/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_sets.c -o c_code/3_1/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_sets.c -o c_code/3_1/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_math.c -o c_code/3_1/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_math.c -o c_code/3_1/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_tables.c -o c_code/3_1/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_tables.c -o c_code/3_1/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_ropes.c -o c_code/3_1/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_ropes.c -o c_code/3_1/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_platform.c -o c_code/3_1/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_platform.c -o c_code/3_1/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_nversion.c -o c_code/3_1/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_nversion.c -o c_code/3_1/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_condsyms.c -o c_code/3_1/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_condsyms.c -o c_code/3_1/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_idents.c -o c_code/3_1/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_idents.c -o c_code/3_1/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_extccomp.c -o c_code/3_1/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_extccomp.c -o c_code/3_1/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_crc.c -o c_code/3_1/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_crc.c -o c_code/3_1/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_wordrecg.c -o c_code/3_1/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_wordrecg.c -o c_code/3_1/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_nimblecmd.c -o c_code/3_1/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_nimblecmd.c -o c_code/3_1/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_parseopt.c -o c_code/3_1/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_parseopt.c -o c_code/3_1/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_lexer.c -o c_code/3_1/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_lexer.c -o c_code/3_1/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_nimlexbase.c -o c_code/3_1/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_nimlexbase.c -o c_code/3_1/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_llstream.c -o c_code/3_1/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_llstream.c -o c_code/3_1/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_nimconf.c -o c_code/3_1/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_nimconf.c -o c_code/3_1/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_main.c -o c_code/3_1/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_main.c -o c_code/3_1/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_ast.c -o c_code/3_1/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_ast.c -o c_code/3_1/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_intsets.c -o c_code/3_1/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_intsets.c -o c_code/3_1/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_idgen.c -o c_code/3_1/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_idgen.c -o c_code/3_1/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_astalgo.c -o c_code/3_1/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_astalgo.c -o c_code/3_1/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_rodutils.c -o c_code/3_1/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_rodutils.c -o c_code/3_1/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_syntaxes.c -o c_code/3_1/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_syntaxes.c -o c_code/3_1/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_parser.c -o c_code/3_1/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_parser.c -o c_code/3_1/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_pbraces.c -o c_code/3_1/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_pbraces.c -o c_code/3_1/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_filters.c -o c_code/3_1/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_filters.c -o c_code/3_1/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_renderer.c -o c_code/3_1/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_renderer.c -o c_code/3_1/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_filter_tmpl.c -o c_code/3_1/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_filter_tmpl.c -o c_code/3_1/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_rodread.c -o c_code/3_1/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_rodread.c -o c_code/3_1/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_types.c -o c_code/3_1/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_types.c -o c_code/3_1/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_trees.c -o c_code/3_1/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_trees.c -o c_code/3_1/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_memfiles.c -o c_code/3_1/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_memfiles.c -o c_code/3_1/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_rodwrite.c -o c_code/3_1/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_rodwrite.c -o c_code/3_1/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_passes.c -o c_code/3_1/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_passes.c -o c_code/3_1/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_magicsys.c -o c_code/3_1/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_magicsys.c -o c_code/3_1/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_nimsets.c -o c_code/3_1/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_nimsets.c -o c_code/3_1/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_bitsets.c -o c_code/3_1/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_bitsets.c -o c_code/3_1/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_importer.c -o c_code/3_1/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_importer.c -o c_code/3_1/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_lookups.c -o c_code/3_1/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_lookups.c -o c_code/3_1/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_semdata.c -o c_code/3_1/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_semdata.c -o c_code/3_1/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_treetab.c -o c_code/3_1/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_treetab.c -o c_code/3_1/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_vmdef.c -o c_code/3_1/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_vmdef.c -o c_code/3_1/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_prettybase.c -o c_code/3_1/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_prettybase.c -o c_code/3_1/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_lexbase.c -o c_code/3_1/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_lexbase.c -o c_code/3_1/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_sem.c -o c_code/3_1/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_sem.c -o c_code/3_1/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_semfold.c -o c_code/3_1/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_semfold.c -o c_code/3_1/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_saturate.c -o c_code/3_1/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_saturate.c -o c_code/3_1/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_procfind.c -o c_code/3_1/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_procfind.c -o c_code/3_1/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_pragmas.c -o c_code/3_1/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_pragmas.c -o c_code/3_1/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_semtypinst.c -o c_code/3_1/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_semtypinst.c -o c_code/3_1/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_sigmatch.c -o c_code/3_1/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_sigmatch.c -o c_code/3_1/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_parampatterns.c -o c_code/3_1/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_parampatterns.c -o c_code/3_1/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_pretty.c -o c_code/3_1/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_pretty.c -o c_code/3_1/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_docgen.c -o c_code/3_1/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_docgen.c -o c_code/3_1/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/docutils_rstast.c -o c_code/3_1/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/docutils_rstast.c -o c_code/3_1/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_json.c -o c_code/3_1/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_json.c -o c_code/3_1/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_unicode.c -o c_code/3_1/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_unicode.c -o c_code/3_1/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_macros.c -o c_code/3_1/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_macros.c -o c_code/3_1/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/docutils_rst.c -o c_code/3_1/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/docutils_rst.c -o c_code/3_1/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/docutils_rstgen.c -o c_code/3_1/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/docutils_rstgen.c -o c_code/3_1/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/docutils_highlite.c -o c_code/3_1/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/docutils_highlite.c -o c_code/3_1/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_sequtils.c -o c_code/3_1/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_sequtils.c -o c_code/3_1/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_algorithm.c -o c_code/3_1/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_algorithm.c -o c_code/3_1/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_sempass2.c -o c_code/3_1/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_sempass2.c -o c_code/3_1/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_guards.c -o c_code/3_1/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_guards.c -o c_code/3_1/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_xmltree.c -o c_code/3_1/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_xmltree.c -o c_code/3_1/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_cgi.c -o c_code/3_1/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_cgi.c -o c_code/3_1/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_cookies.c -o c_code/3_1/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_cookies.c -o c_code/3_1/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_typesrenderer.c -o c_code/3_1/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_typesrenderer.c -o c_code/3_1/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_transf.c -o c_code/3_1/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_transf.c -o c_code/3_1/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_cgmeth.c -o c_code/3_1/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_cgmeth.c -o c_code/3_1/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_lambdalifting.c -o c_code/3_1/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_lambdalifting.c -o c_code/3_1/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_lowerings.c -o c_code/3_1/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_lowerings.c -o c_code/3_1/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_vm.c -o c_code/3_1/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_vm.c -o c_code/3_1/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_vmgen.c -o c_code/3_1/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_vmgen.c -o c_code/3_1/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_unsigned.c -o c_code/3_1/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_unsigned.c -o c_code/3_1/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_vmdeps.c -o c_code/3_1/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_vmdeps.c -o c_code/3_1/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_vmmarshal.c -o c_code/3_1/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_vmmarshal.c -o c_code/3_1/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_evaltempl.c -o c_code/3_1/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_evaltempl.c -o c_code/3_1/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_aliases.c -o c_code/3_1/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_aliases.c -o c_code/3_1/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_patterns.c -o c_code/3_1/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_patterns.c -o c_code/3_1/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_semmacrosanity.c -o c_code/3_1/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_semmacrosanity.c -o c_code/3_1/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_semparallel.c -o c_code/3_1/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_semparallel.c -o c_code/3_1/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_plugins.c -o c_code/3_1/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_plugins.c -o c_code/3_1/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_active.c -o c_code/3_1/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_active.c -o c_code/3_1/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_locals.c -o c_code/3_1/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_locals.c -o c_code/3_1/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_cgen.c -o c_code/3_1/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_cgen.c -o c_code/3_1/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_ccgutils.c -o c_code/3_1/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_ccgutils.c -o c_code/3_1/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_cgendata.c -o c_code/3_1/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_cgendata.c -o c_code/3_1/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_ccgmerge.c -o c_code/3_1/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_ccgmerge.c -o c_code/3_1/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_jsgen.c -o c_code/3_1/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_jsgen.c -o c_code/3_1/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_passaux.c -o c_code/3_1/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_passaux.c -o c_code/3_1/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_depends.c -o c_code/3_1/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_depends.c -o c_code/3_1/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_docgen2.c -o c_code/3_1/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_docgen2.c -o c_code/3_1/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_service.c -o c_code/3_1/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_service.c -o c_code/3_1/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_net.c -o c_code/3_1/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_net.c -o c_code/3_1/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_rawsockets.c -o c_code/3_1/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/stdlib_rawsockets.c -o c_code/3_1/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_modules.c -o c_code/3_1/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_modules.c -o c_code/3_1/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_nodejs.c -o c_code/3_1/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_1/nimsrc_nodejs.c -o c_code/3_1/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/3_1/nimsrc_nim.o \
c_code/3_1/stdlib_system.o \
c_code/3_1/nimsrc_testability.o \
c_code/3_1/nimsrc_commands.o \
c_code/3_1/stdlib_os.o \
c_code/3_1/stdlib_strutils.o \
c_code/3_1/stdlib_parseutils.o \
c_code/3_1/stdlib_times.o \
c_code/3_1/stdlib_posix.o \
c_code/3_1/nimsrc_msgs.o \
c_code/3_1/nimsrc_options.o \
c_code/3_1/nimsrc_lists.o \
c_code/3_1/stdlib_strtabs.o \
c_code/3_1/stdlib_hashes.o \
c_code/3_1/stdlib_osproc.o \
c_code/3_1/stdlib_streams.o \
c_code/3_1/stdlib_cpuinfo.o \
c_code/3_1/stdlib_sets.o \
c_code/3_1/stdlib_math.o \
c_code/3_1/stdlib_tables.o \
c_code/3_1/nimsrc_ropes.o \
c_code/3_1/nimsrc_platform.o \
c_code/3_1/nimsrc_nversion.o \
c_code/3_1/nimsrc_condsyms.o \
c_code/3_1/nimsrc_idents.o \
c_code/3_1/nimsrc_extccomp.o \
c_code/3_1/nimsrc_crc.o \
c_code/3_1/nimsrc_wordrecg.o \
c_code/3_1/nimsrc_nimblecmd.o \
c_code/3_1/stdlib_parseopt.o \
c_code/3_1/nimsrc_lexer.o \
c_code/3_1/nimsrc_nimlexbase.o \
c_code/3_1/nimsrc_llstream.o \
c_code/3_1/nimsrc_nimconf.o \
c_code/3_1/nimsrc_main.o \
c_code/3_1/nimsrc_ast.o \
c_code/3_1/stdlib_intsets.o \
c_code/3_1/nimsrc_idgen.o \
c_code/3_1/nimsrc_astalgo.o \
c_code/3_1/nimsrc_rodutils.o \
c_code/3_1/nimsrc_syntaxes.o \
c_code/3_1/nimsrc_parser.o \
c_code/3_1/nimsrc_pbraces.o \
c_code/3_1/nimsrc_filters.o \
c_code/3_1/nimsrc_renderer.o \
c_code/3_1/nimsrc_filter_tmpl.o \
c_code/3_1/nimsrc_rodread.o \
c_code/3_1/nimsrc_types.o \
c_code/3_1/nimsrc_trees.o \
c_code/3_1/stdlib_memfiles.o \
c_code/3_1/nimsrc_rodwrite.o \
c_code/3_1/nimsrc_passes.o \
c_code/3_1/nimsrc_magicsys.o \
c_code/3_1/nimsrc_nimsets.o \
c_code/3_1/nimsrc_bitsets.o \
c_code/3_1/nimsrc_importer.o \
c_code/3_1/nimsrc_lookups.o \
c_code/3_1/nimsrc_semdata.o \
c_code/3_1/nimsrc_treetab.o \
c_code/3_1/nimsrc_vmdef.o \
c_code/3_1/nimsrc_prettybase.o \
c_code/3_1/stdlib_lexbase.o \
c_code/3_1/nimsrc_sem.o \
c_code/3_1/nimsrc_semfold.o \
c_code/3_1/nimsrc_saturate.o \
c_code/3_1/nimsrc_procfind.o \
c_code/3_1/nimsrc_pragmas.o \
c_code/3_1/nimsrc_semtypinst.o \
c_code/3_1/nimsrc_sigmatch.o \
c_code/3_1/nimsrc_parampatterns.o \
c_code/3_1/nimsrc_pretty.o \
c_code/3_1/nimsrc_docgen.o \
c_code/3_1/docutils_rstast.o \
c_code/3_1/stdlib_json.o \
c_code/3_1/stdlib_unicode.o \
c_code/3_1/stdlib_macros.o \
c_code/3_1/docutils_rst.o \
c_code/3_1/docutils_rstgen.o \
c_code/3_1/docutils_highlite.o \
c_code/3_1/stdlib_sequtils.o \
c_code/3_1/stdlib_algorithm.o \
c_code/3_1/nimsrc_sempass2.o \
c_code/3_1/nimsrc_guards.o \
c_code/3_1/stdlib_xmltree.o \
c_code/3_1/stdlib_cgi.o \
c_code/3_1/stdlib_cookies.o \
c_code/3_1/nimsrc_typesrenderer.o \
c_code/3_1/nimsrc_transf.o \
c_code/3_1/nimsrc_cgmeth.o \
c_code/3_1/nimsrc_lambdalifting.o \
c_code/3_1/nimsrc_lowerings.o \
c_code/3_1/nimsrc_vm.o \
c_code/3_1/nimsrc_vmgen.o \
c_code/3_1/stdlib_unsigned.o \
c_code/3_1/nimsrc_vmdeps.o \
c_code/3_1/nimsrc_vmmarshal.o \
c_code/3_1/nimsrc_evaltempl.o \
c_code/3_1/nimsrc_aliases.o \
c_code/3_1/nimsrc_patterns.o \
c_code/3_1/nimsrc_semmacrosanity.o \
c_code/3_1/nimsrc_semparallel.o \
c_code/3_1/nimsrc_plugins.o \
c_code/3_1/nimsrc_active.o \
c_code/3_1/nimsrc_locals.o \
c_code/3_1/nimsrc_cgen.o \
c_code/3_1/nimsrc_ccgutils.o \
c_code/3_1/nimsrc_cgendata.o \
c_code/3_1/nimsrc_ccgmerge.o \
c_code/3_1/nimsrc_jsgen.o \
c_code/3_1/nimsrc_passaux.o \
c_code/3_1/nimsrc_depends.o \
c_code/3_1/nimsrc_docgen2.o \
c_code/3_1/nimsrc_service.o \
c_code/3_1/stdlib_net.o \
c_code/3_1/stdlib_rawsockets.o \
c_code/3_1/nimsrc_modules.o \
c_code/3_1/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/3_1/nimsrc_nim.o \
c_code/3_1/stdlib_system.o \
c_code/3_1/nimsrc_testability.o \
c_code/3_1/nimsrc_commands.o \
c_code/3_1/stdlib_os.o \
c_code/3_1/stdlib_strutils.o \
c_code/3_1/stdlib_parseutils.o \
c_code/3_1/stdlib_times.o \
c_code/3_1/stdlib_posix.o \
c_code/3_1/nimsrc_msgs.o \
c_code/3_1/nimsrc_options.o \
c_code/3_1/nimsrc_lists.o \
c_code/3_1/stdlib_strtabs.o \
c_code/3_1/stdlib_hashes.o \
c_code/3_1/stdlib_osproc.o \
c_code/3_1/stdlib_streams.o \
c_code/3_1/stdlib_cpuinfo.o \
c_code/3_1/stdlib_sets.o \
c_code/3_1/stdlib_math.o \
c_code/3_1/stdlib_tables.o \
c_code/3_1/nimsrc_ropes.o \
c_code/3_1/nimsrc_platform.o \
c_code/3_1/nimsrc_nversion.o \
c_code/3_1/nimsrc_condsyms.o \
c_code/3_1/nimsrc_idents.o \
c_code/3_1/nimsrc_extccomp.o \
c_code/3_1/nimsrc_crc.o \
c_code/3_1/nimsrc_wordrecg.o \
c_code/3_1/nimsrc_nimblecmd.o \
c_code/3_1/stdlib_parseopt.o \
c_code/3_1/nimsrc_lexer.o \
c_code/3_1/nimsrc_nimlexbase.o \
c_code/3_1/nimsrc_llstream.o \
c_code/3_1/nimsrc_nimconf.o \
c_code/3_1/nimsrc_main.o \
c_code/3_1/nimsrc_ast.o \
c_code/3_1/stdlib_intsets.o \
c_code/3_1/nimsrc_idgen.o \
c_code/3_1/nimsrc_astalgo.o \
c_code/3_1/nimsrc_rodutils.o \
c_code/3_1/nimsrc_syntaxes.o \
c_code/3_1/nimsrc_parser.o \
c_code/3_1/nimsrc_pbraces.o \
c_code/3_1/nimsrc_filters.o \
c_code/3_1/nimsrc_renderer.o \
c_code/3_1/nimsrc_filter_tmpl.o \
c_code/3_1/nimsrc_rodread.o \
c_code/3_1/nimsrc_types.o \
c_code/3_1/nimsrc_trees.o \
c_code/3_1/stdlib_memfiles.o \
c_code/3_1/nimsrc_rodwrite.o \
c_code/3_1/nimsrc_passes.o \
c_code/3_1/nimsrc_magicsys.o \
c_code/3_1/nimsrc_nimsets.o \
c_code/3_1/nimsrc_bitsets.o \
c_code/3_1/nimsrc_importer.o \
c_code/3_1/nimsrc_lookups.o \
c_code/3_1/nimsrc_semdata.o \
c_code/3_1/nimsrc_treetab.o \
c_code/3_1/nimsrc_vmdef.o \
c_code/3_1/nimsrc_prettybase.o \
c_code/3_1/stdlib_lexbase.o \
c_code/3_1/nimsrc_sem.o \
c_code/3_1/nimsrc_semfold.o \
c_code/3_1/nimsrc_saturate.o \
c_code/3_1/nimsrc_procfind.o \
c_code/3_1/nimsrc_pragmas.o \
c_code/3_1/nimsrc_semtypinst.o \
c_code/3_1/nimsrc_sigmatch.o \
c_code/3_1/nimsrc_parampatterns.o \
c_code/3_1/nimsrc_pretty.o \
c_code/3_1/nimsrc_docgen.o \
c_code/3_1/docutils_rstast.o \
c_code/3_1/stdlib_json.o \
c_code/3_1/stdlib_unicode.o \
c_code/3_1/stdlib_macros.o \
c_code/3_1/docutils_rst.o \
c_code/3_1/docutils_rstgen.o \
c_code/3_1/docutils_highlite.o \
c_code/3_1/stdlib_sequtils.o \
c_code/3_1/stdlib_algorithm.o \
c_code/3_1/nimsrc_sempass2.o \
c_code/3_1/nimsrc_guards.o \
c_code/3_1/stdlib_xmltree.o \
c_code/3_1/stdlib_cgi.o \
c_code/3_1/stdlib_cookies.o \
c_code/3_1/nimsrc_typesrenderer.o \
c_code/3_1/nimsrc_transf.o \
c_code/3_1/nimsrc_cgmeth.o \
c_code/3_1/nimsrc_lambdalifting.o \
c_code/3_1/nimsrc_lowerings.o \
c_code/3_1/nimsrc_vm.o \
c_code/3_1/nimsrc_vmgen.o \
c_code/3_1/stdlib_unsigned.o \
c_code/3_1/nimsrc_vmdeps.o \
c_code/3_1/nimsrc_vmmarshal.o \
c_code/3_1/nimsrc_evaltempl.o \
c_code/3_1/nimsrc_aliases.o \
c_code/3_1/nimsrc_patterns.o \
c_code/3_1/nimsrc_semmacrosanity.o \
c_code/3_1/nimsrc_semparallel.o \
c_code/3_1/nimsrc_plugins.o \
c_code/3_1/nimsrc_active.o \
c_code/3_1/nimsrc_locals.o \
c_code/3_1/nimsrc_cgen.o \
c_code/3_1/nimsrc_ccgutils.o \
c_code/3_1/nimsrc_cgendata.o \
c_code/3_1/nimsrc_ccgmerge.o \
c_code/3_1/nimsrc_jsgen.o \
c_code/3_1/nimsrc_passaux.o \
c_code/3_1/nimsrc_depends.o \
c_code/3_1/nimsrc_docgen2.o \
c_code/3_1/nimsrc_service.o \
c_code/3_1/stdlib_net.o \
c_code/3_1/stdlib_rawsockets.o \
c_code/3_1/nimsrc_modules.o \
c_code/3_1/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  amd64)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_nim.c -o c_code/3_2/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_nim.c -o c_code/3_2/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_system.c -o c_code/3_2/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_system.c -o c_code/3_2/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_testability.c -o c_code/3_2/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_testability.c -o c_code/3_2/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_commands.c -o c_code/3_2/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_commands.c -o c_code/3_2/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_os.c -o c_code/3_2/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_os.c -o c_code/3_2/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_strutils.c -o c_code/3_2/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_strutils.c -o c_code/3_2/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_parseutils.c -o c_code/3_2/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_parseutils.c -o c_code/3_2/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_times.c -o c_code/3_2/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_times.c -o c_code/3_2/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_posix.c -o c_code/3_2/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_posix.c -o c_code/3_2/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_msgs.c -o c_code/3_2/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_msgs.c -o c_code/3_2/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_options.c -o c_code/3_2/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_options.c -o c_code/3_2/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_lists.c -o c_code/3_2/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_lists.c -o c_code/3_2/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_strtabs.c -o c_code/3_2/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_strtabs.c -o c_code/3_2/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_hashes.c -o c_code/3_2/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_hashes.c -o c_code/3_2/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_osproc.c -o c_code/3_2/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_osproc.c -o c_code/3_2/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_streams.c -o c_code/3_2/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_streams.c -o c_code/3_2/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_cpuinfo.c -o c_code/3_2/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_cpuinfo.c -o c_code/3_2/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_sets.c -o c_code/3_2/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_sets.c -o c_code/3_2/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_math.c -o c_code/3_2/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_math.c -o c_code/3_2/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_tables.c -o c_code/3_2/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_tables.c -o c_code/3_2/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_ropes.c -o c_code/3_2/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_ropes.c -o c_code/3_2/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_platform.c -o c_code/3_2/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_platform.c -o c_code/3_2/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_nversion.c -o c_code/3_2/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_nversion.c -o c_code/3_2/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_condsyms.c -o c_code/3_2/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_condsyms.c -o c_code/3_2/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_idents.c -o c_code/3_2/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_idents.c -o c_code/3_2/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_extccomp.c -o c_code/3_2/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_extccomp.c -o c_code/3_2/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_crc.c -o c_code/3_2/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_crc.c -o c_code/3_2/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_wordrecg.c -o c_code/3_2/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_wordrecg.c -o c_code/3_2/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_nimblecmd.c -o c_code/3_2/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_nimblecmd.c -o c_code/3_2/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_parseopt.c -o c_code/3_2/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_parseopt.c -o c_code/3_2/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_lexer.c -o c_code/3_2/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_lexer.c -o c_code/3_2/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_nimlexbase.c -o c_code/3_2/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_nimlexbase.c -o c_code/3_2/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_llstream.c -o c_code/3_2/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_llstream.c -o c_code/3_2/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_nimconf.c -o c_code/3_2/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_nimconf.c -o c_code/3_2/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_main.c -o c_code/3_2/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_main.c -o c_code/3_2/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_ast.c -o c_code/3_2/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_ast.c -o c_code/3_2/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_intsets.c -o c_code/3_2/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_intsets.c -o c_code/3_2/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_idgen.c -o c_code/3_2/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_idgen.c -o c_code/3_2/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_astalgo.c -o c_code/3_2/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_astalgo.c -o c_code/3_2/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_rodutils.c -o c_code/3_2/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_rodutils.c -o c_code/3_2/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_syntaxes.c -o c_code/3_2/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_syntaxes.c -o c_code/3_2/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_parser.c -o c_code/3_2/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_parser.c -o c_code/3_2/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_pbraces.c -o c_code/3_2/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_pbraces.c -o c_code/3_2/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_filters.c -o c_code/3_2/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_filters.c -o c_code/3_2/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_renderer.c -o c_code/3_2/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_renderer.c -o c_code/3_2/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_filter_tmpl.c -o c_code/3_2/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_filter_tmpl.c -o c_code/3_2/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_rodread.c -o c_code/3_2/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_rodread.c -o c_code/3_2/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_types.c -o c_code/3_2/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_types.c -o c_code/3_2/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_trees.c -o c_code/3_2/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_trees.c -o c_code/3_2/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_memfiles.c -o c_code/3_2/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_memfiles.c -o c_code/3_2/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_rodwrite.c -o c_code/3_2/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_rodwrite.c -o c_code/3_2/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_passes.c -o c_code/3_2/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_passes.c -o c_code/3_2/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_magicsys.c -o c_code/3_2/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_magicsys.c -o c_code/3_2/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_nimsets.c -o c_code/3_2/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_nimsets.c -o c_code/3_2/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_bitsets.c -o c_code/3_2/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_bitsets.c -o c_code/3_2/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_importer.c -o c_code/3_2/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_importer.c -o c_code/3_2/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_lookups.c -o c_code/3_2/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_lookups.c -o c_code/3_2/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_semdata.c -o c_code/3_2/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_semdata.c -o c_code/3_2/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_treetab.c -o c_code/3_2/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_treetab.c -o c_code/3_2/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_vmdef.c -o c_code/3_2/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_vmdef.c -o c_code/3_2/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_prettybase.c -o c_code/3_2/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_prettybase.c -o c_code/3_2/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_lexbase.c -o c_code/3_2/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_lexbase.c -o c_code/3_2/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_sem.c -o c_code/3_2/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_sem.c -o c_code/3_2/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_semfold.c -o c_code/3_2/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_semfold.c -o c_code/3_2/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_saturate.c -o c_code/3_2/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_saturate.c -o c_code/3_2/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_procfind.c -o c_code/3_2/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_procfind.c -o c_code/3_2/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_pragmas.c -o c_code/3_2/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_pragmas.c -o c_code/3_2/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_semtypinst.c -o c_code/3_2/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_semtypinst.c -o c_code/3_2/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_sigmatch.c -o c_code/3_2/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_sigmatch.c -o c_code/3_2/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_parampatterns.c -o c_code/3_2/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_parampatterns.c -o c_code/3_2/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_pretty.c -o c_code/3_2/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_pretty.c -o c_code/3_2/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_docgen.c -o c_code/3_2/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_docgen.c -o c_code/3_2/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/docutils_rstast.c -o c_code/3_2/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/docutils_rstast.c -o c_code/3_2/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_json.c -o c_code/3_2/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_json.c -o c_code/3_2/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_unicode.c -o c_code/3_2/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_unicode.c -o c_code/3_2/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_macros.c -o c_code/3_2/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_macros.c -o c_code/3_2/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/docutils_rst.c -o c_code/3_2/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/docutils_rst.c -o c_code/3_2/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/docutils_rstgen.c -o c_code/3_2/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/docutils_rstgen.c -o c_code/3_2/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/docutils_highlite.c -o c_code/3_2/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/docutils_highlite.c -o c_code/3_2/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_sequtils.c -o c_code/3_2/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_sequtils.c -o c_code/3_2/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_algorithm.c -o c_code/3_2/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_algorithm.c -o c_code/3_2/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_sempass2.c -o c_code/3_2/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_sempass2.c -o c_code/3_2/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_guards.c -o c_code/3_2/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_guards.c -o c_code/3_2/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_xmltree.c -o c_code/3_2/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_xmltree.c -o c_code/3_2/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_cgi.c -o c_code/3_2/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_cgi.c -o c_code/3_2/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_cookies.c -o c_code/3_2/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_cookies.c -o c_code/3_2/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_typesrenderer.c -o c_code/3_2/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_typesrenderer.c -o c_code/3_2/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_transf.c -o c_code/3_2/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_transf.c -o c_code/3_2/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_cgmeth.c -o c_code/3_2/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_cgmeth.c -o c_code/3_2/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_lambdalifting.c -o c_code/3_2/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_lambdalifting.c -o c_code/3_2/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_lowerings.c -o c_code/3_2/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_lowerings.c -o c_code/3_2/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_vm.c -o c_code/3_2/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_vm.c -o c_code/3_2/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_vmgen.c -o c_code/3_2/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_vmgen.c -o c_code/3_2/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_unsigned.c -o c_code/3_2/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_unsigned.c -o c_code/3_2/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_vmdeps.c -o c_code/3_2/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_vmdeps.c -o c_code/3_2/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_vmmarshal.c -o c_code/3_2/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_vmmarshal.c -o c_code/3_2/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_evaltempl.c -o c_code/3_2/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_evaltempl.c -o c_code/3_2/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_aliases.c -o c_code/3_2/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_aliases.c -o c_code/3_2/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_patterns.c -o c_code/3_2/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_patterns.c -o c_code/3_2/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_semmacrosanity.c -o c_code/3_2/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_semmacrosanity.c -o c_code/3_2/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_semparallel.c -o c_code/3_2/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_semparallel.c -o c_code/3_2/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_plugins.c -o c_code/3_2/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_plugins.c -o c_code/3_2/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_active.c -o c_code/3_2/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_active.c -o c_code/3_2/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_locals.c -o c_code/3_2/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_locals.c -o c_code/3_2/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_cgen.c -o c_code/3_2/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_cgen.c -o c_code/3_2/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_ccgutils.c -o c_code/3_2/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_ccgutils.c -o c_code/3_2/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_cgendata.c -o c_code/3_2/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_cgendata.c -o c_code/3_2/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_ccgmerge.c -o c_code/3_2/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_ccgmerge.c -o c_code/3_2/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_jsgen.c -o c_code/3_2/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_jsgen.c -o c_code/3_2/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_passaux.c -o c_code/3_2/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_passaux.c -o c_code/3_2/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_depends.c -o c_code/3_2/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_depends.c -o c_code/3_2/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_docgen2.c -o c_code/3_2/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_docgen2.c -o c_code/3_2/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_service.c -o c_code/3_2/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_service.c -o c_code/3_2/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_net.c -o c_code/3_2/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_net.c -o c_code/3_2/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_rawsockets.c -o c_code/3_2/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/stdlib_rawsockets.c -o c_code/3_2/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_modules.c -o c_code/3_2/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_modules.c -o c_code/3_2/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_nodejs.c -o c_code/3_2/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_2/nimsrc_nodejs.c -o c_code/3_2/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/3_2/nimsrc_nim.o \
c_code/3_2/stdlib_system.o \
c_code/3_2/nimsrc_testability.o \
c_code/3_2/nimsrc_commands.o \
c_code/3_2/stdlib_os.o \
c_code/3_2/stdlib_strutils.o \
c_code/3_2/stdlib_parseutils.o \
c_code/3_2/stdlib_times.o \
c_code/3_2/stdlib_posix.o \
c_code/3_2/nimsrc_msgs.o \
c_code/3_2/nimsrc_options.o \
c_code/3_2/nimsrc_lists.o \
c_code/3_2/stdlib_strtabs.o \
c_code/3_2/stdlib_hashes.o \
c_code/3_2/stdlib_osproc.o \
c_code/3_2/stdlib_streams.o \
c_code/3_2/stdlib_cpuinfo.o \
c_code/3_2/stdlib_sets.o \
c_code/3_2/stdlib_math.o \
c_code/3_2/stdlib_tables.o \
c_code/3_2/nimsrc_ropes.o \
c_code/3_2/nimsrc_platform.o \
c_code/3_2/nimsrc_nversion.o \
c_code/3_2/nimsrc_condsyms.o \
c_code/3_2/nimsrc_idents.o \
c_code/3_2/nimsrc_extccomp.o \
c_code/3_2/nimsrc_crc.o \
c_code/3_2/nimsrc_wordrecg.o \
c_code/3_2/nimsrc_nimblecmd.o \
c_code/3_2/stdlib_parseopt.o \
c_code/3_2/nimsrc_lexer.o \
c_code/3_2/nimsrc_nimlexbase.o \
c_code/3_2/nimsrc_llstream.o \
c_code/3_2/nimsrc_nimconf.o \
c_code/3_2/nimsrc_main.o \
c_code/3_2/nimsrc_ast.o \
c_code/3_2/stdlib_intsets.o \
c_code/3_2/nimsrc_idgen.o \
c_code/3_2/nimsrc_astalgo.o \
c_code/3_2/nimsrc_rodutils.o \
c_code/3_2/nimsrc_syntaxes.o \
c_code/3_2/nimsrc_parser.o \
c_code/3_2/nimsrc_pbraces.o \
c_code/3_2/nimsrc_filters.o \
c_code/3_2/nimsrc_renderer.o \
c_code/3_2/nimsrc_filter_tmpl.o \
c_code/3_2/nimsrc_rodread.o \
c_code/3_2/nimsrc_types.o \
c_code/3_2/nimsrc_trees.o \
c_code/3_2/stdlib_memfiles.o \
c_code/3_2/nimsrc_rodwrite.o \
c_code/3_2/nimsrc_passes.o \
c_code/3_2/nimsrc_magicsys.o \
c_code/3_2/nimsrc_nimsets.o \
c_code/3_2/nimsrc_bitsets.o \
c_code/3_2/nimsrc_importer.o \
c_code/3_2/nimsrc_lookups.o \
c_code/3_2/nimsrc_semdata.o \
c_code/3_2/nimsrc_treetab.o \
c_code/3_2/nimsrc_vmdef.o \
c_code/3_2/nimsrc_prettybase.o \
c_code/3_2/stdlib_lexbase.o \
c_code/3_2/nimsrc_sem.o \
c_code/3_2/nimsrc_semfold.o \
c_code/3_2/nimsrc_saturate.o \
c_code/3_2/nimsrc_procfind.o \
c_code/3_2/nimsrc_pragmas.o \
c_code/3_2/nimsrc_semtypinst.o \
c_code/3_2/nimsrc_sigmatch.o \
c_code/3_2/nimsrc_parampatterns.o \
c_code/3_2/nimsrc_pretty.o \
c_code/3_2/nimsrc_docgen.o \
c_code/3_2/docutils_rstast.o \
c_code/3_2/stdlib_json.o \
c_code/3_2/stdlib_unicode.o \
c_code/3_2/stdlib_macros.o \
c_code/3_2/docutils_rst.o \
c_code/3_2/docutils_rstgen.o \
c_code/3_2/docutils_highlite.o \
c_code/3_2/stdlib_sequtils.o \
c_code/3_2/stdlib_algorithm.o \
c_code/3_2/nimsrc_sempass2.o \
c_code/3_2/nimsrc_guards.o \
c_code/3_2/stdlib_xmltree.o \
c_code/3_2/stdlib_cgi.o \
c_code/3_2/stdlib_cookies.o \
c_code/3_2/nimsrc_typesrenderer.o \
c_code/3_2/nimsrc_transf.o \
c_code/3_2/nimsrc_cgmeth.o \
c_code/3_2/nimsrc_lambdalifting.o \
c_code/3_2/nimsrc_lowerings.o \
c_code/3_2/nimsrc_vm.o \
c_code/3_2/nimsrc_vmgen.o \
c_code/3_2/stdlib_unsigned.o \
c_code/3_2/nimsrc_vmdeps.o \
c_code/3_2/nimsrc_vmmarshal.o \
c_code/3_2/nimsrc_evaltempl.o \
c_code/3_2/nimsrc_aliases.o \
c_code/3_2/nimsrc_patterns.o \
c_code/3_2/nimsrc_semmacrosanity.o \
c_code/3_2/nimsrc_semparallel.o \
c_code/3_2/nimsrc_plugins.o \
c_code/3_2/nimsrc_active.o \
c_code/3_2/nimsrc_locals.o \
c_code/3_2/nimsrc_cgen.o \
c_code/3_2/nimsrc_ccgutils.o \
c_code/3_2/nimsrc_cgendata.o \
c_code/3_2/nimsrc_ccgmerge.o \
c_code/3_2/nimsrc_jsgen.o \
c_code/3_2/nimsrc_passaux.o \
c_code/3_2/nimsrc_depends.o \
c_code/3_2/nimsrc_docgen2.o \
c_code/3_2/nimsrc_service.o \
c_code/3_2/stdlib_net.o \
c_code/3_2/stdlib_rawsockets.o \
c_code/3_2/nimsrc_modules.o \
c_code/3_2/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/3_2/nimsrc_nim.o \
c_code/3_2/stdlib_system.o \
c_code/3_2/nimsrc_testability.o \
c_code/3_2/nimsrc_commands.o \
c_code/3_2/stdlib_os.o \
c_code/3_2/stdlib_strutils.o \
c_code/3_2/stdlib_parseutils.o \
c_code/3_2/stdlib_times.o \
c_code/3_2/stdlib_posix.o \
c_code/3_2/nimsrc_msgs.o \
c_code/3_2/nimsrc_options.o \
c_code/3_2/nimsrc_lists.o \
c_code/3_2/stdlib_strtabs.o \
c_code/3_2/stdlib_hashes.o \
c_code/3_2/stdlib_osproc.o \
c_code/3_2/stdlib_streams.o \
c_code/3_2/stdlib_cpuinfo.o \
c_code/3_2/stdlib_sets.o \
c_code/3_2/stdlib_math.o \
c_code/3_2/stdlib_tables.o \
c_code/3_2/nimsrc_ropes.o \
c_code/3_2/nimsrc_platform.o \
c_code/3_2/nimsrc_nversion.o \
c_code/3_2/nimsrc_condsyms.o \
c_code/3_2/nimsrc_idents.o \
c_code/3_2/nimsrc_extccomp.o \
c_code/3_2/nimsrc_crc.o \
c_code/3_2/nimsrc_wordrecg.o \
c_code/3_2/nimsrc_nimblecmd.o \
c_code/3_2/stdlib_parseopt.o \
c_code/3_2/nimsrc_lexer.o \
c_code/3_2/nimsrc_nimlexbase.o \
c_code/3_2/nimsrc_llstream.o \
c_code/3_2/nimsrc_nimconf.o \
c_code/3_2/nimsrc_main.o \
c_code/3_2/nimsrc_ast.o \
c_code/3_2/stdlib_intsets.o \
c_code/3_2/nimsrc_idgen.o \
c_code/3_2/nimsrc_astalgo.o \
c_code/3_2/nimsrc_rodutils.o \
c_code/3_2/nimsrc_syntaxes.o \
c_code/3_2/nimsrc_parser.o \
c_code/3_2/nimsrc_pbraces.o \
c_code/3_2/nimsrc_filters.o \
c_code/3_2/nimsrc_renderer.o \
c_code/3_2/nimsrc_filter_tmpl.o \
c_code/3_2/nimsrc_rodread.o \
c_code/3_2/nimsrc_types.o \
c_code/3_2/nimsrc_trees.o \
c_code/3_2/stdlib_memfiles.o \
c_code/3_2/nimsrc_rodwrite.o \
c_code/3_2/nimsrc_passes.o \
c_code/3_2/nimsrc_magicsys.o \
c_code/3_2/nimsrc_nimsets.o \
c_code/3_2/nimsrc_bitsets.o \
c_code/3_2/nimsrc_importer.o \
c_code/3_2/nimsrc_lookups.o \
c_code/3_2/nimsrc_semdata.o \
c_code/3_2/nimsrc_treetab.o \
c_code/3_2/nimsrc_vmdef.o \
c_code/3_2/nimsrc_prettybase.o \
c_code/3_2/stdlib_lexbase.o \
c_code/3_2/nimsrc_sem.o \
c_code/3_2/nimsrc_semfold.o \
c_code/3_2/nimsrc_saturate.o \
c_code/3_2/nimsrc_procfind.o \
c_code/3_2/nimsrc_pragmas.o \
c_code/3_2/nimsrc_semtypinst.o \
c_code/3_2/nimsrc_sigmatch.o \
c_code/3_2/nimsrc_parampatterns.o \
c_code/3_2/nimsrc_pretty.o \
c_code/3_2/nimsrc_docgen.o \
c_code/3_2/docutils_rstast.o \
c_code/3_2/stdlib_json.o \
c_code/3_2/stdlib_unicode.o \
c_code/3_2/stdlib_macros.o \
c_code/3_2/docutils_rst.o \
c_code/3_2/docutils_rstgen.o \
c_code/3_2/docutils_highlite.o \
c_code/3_2/stdlib_sequtils.o \
c_code/3_2/stdlib_algorithm.o \
c_code/3_2/nimsrc_sempass2.o \
c_code/3_2/nimsrc_guards.o \
c_code/3_2/stdlib_xmltree.o \
c_code/3_2/stdlib_cgi.o \
c_code/3_2/stdlib_cookies.o \
c_code/3_2/nimsrc_typesrenderer.o \
c_code/3_2/nimsrc_transf.o \
c_code/3_2/nimsrc_cgmeth.o \
c_code/3_2/nimsrc_lambdalifting.o \
c_code/3_2/nimsrc_lowerings.o \
c_code/3_2/nimsrc_vm.o \
c_code/3_2/nimsrc_vmgen.o \
c_code/3_2/stdlib_unsigned.o \
c_code/3_2/nimsrc_vmdeps.o \
c_code/3_2/nimsrc_vmmarshal.o \
c_code/3_2/nimsrc_evaltempl.o \
c_code/3_2/nimsrc_aliases.o \
c_code/3_2/nimsrc_patterns.o \
c_code/3_2/nimsrc_semmacrosanity.o \
c_code/3_2/nimsrc_semparallel.o \
c_code/3_2/nimsrc_plugins.o \
c_code/3_2/nimsrc_active.o \
c_code/3_2/nimsrc_locals.o \
c_code/3_2/nimsrc_cgen.o \
c_code/3_2/nimsrc_ccgutils.o \
c_code/3_2/nimsrc_cgendata.o \
c_code/3_2/nimsrc_ccgmerge.o \
c_code/3_2/nimsrc_jsgen.o \
c_code/3_2/nimsrc_passaux.o \
c_code/3_2/nimsrc_depends.o \
c_code/3_2/nimsrc_docgen2.o \
c_code/3_2/nimsrc_service.o \
c_code/3_2/stdlib_net.o \
c_code/3_2/stdlib_rawsockets.o \
c_code/3_2/nimsrc_modules.o \
c_code/3_2/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  powerpc64)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_nim.c -o c_code/3_3/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_nim.c -o c_code/3_3/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_system.c -o c_code/3_3/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_system.c -o c_code/3_3/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_testability.c -o c_code/3_3/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_testability.c -o c_code/3_3/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_commands.c -o c_code/3_3/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_commands.c -o c_code/3_3/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_os.c -o c_code/3_3/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_os.c -o c_code/3_3/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_strutils.c -o c_code/3_3/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_strutils.c -o c_code/3_3/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_parseutils.c -o c_code/3_3/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_parseutils.c -o c_code/3_3/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_times.c -o c_code/3_3/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_times.c -o c_code/3_3/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_posix.c -o c_code/3_3/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_posix.c -o c_code/3_3/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_msgs.c -o c_code/3_3/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_msgs.c -o c_code/3_3/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_options.c -o c_code/3_3/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_options.c -o c_code/3_3/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_lists.c -o c_code/3_3/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_lists.c -o c_code/3_3/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_strtabs.c -o c_code/3_3/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_strtabs.c -o c_code/3_3/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_hashes.c -o c_code/3_3/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_hashes.c -o c_code/3_3/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_osproc.c -o c_code/3_3/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_osproc.c -o c_code/3_3/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_streams.c -o c_code/3_3/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_streams.c -o c_code/3_3/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_cpuinfo.c -o c_code/3_3/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_cpuinfo.c -o c_code/3_3/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_sets.c -o c_code/3_3/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_sets.c -o c_code/3_3/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_math.c -o c_code/3_3/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_math.c -o c_code/3_3/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_tables.c -o c_code/3_3/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_tables.c -o c_code/3_3/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_ropes.c -o c_code/3_3/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_ropes.c -o c_code/3_3/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_platform.c -o c_code/3_3/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_platform.c -o c_code/3_3/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_nversion.c -o c_code/3_3/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_nversion.c -o c_code/3_3/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_condsyms.c -o c_code/3_3/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_condsyms.c -o c_code/3_3/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_idents.c -o c_code/3_3/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_idents.c -o c_code/3_3/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_extccomp.c -o c_code/3_3/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_extccomp.c -o c_code/3_3/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_crc.c -o c_code/3_3/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_crc.c -o c_code/3_3/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_wordrecg.c -o c_code/3_3/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_wordrecg.c -o c_code/3_3/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_nimblecmd.c -o c_code/3_3/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_nimblecmd.c -o c_code/3_3/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_parseopt.c -o c_code/3_3/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_parseopt.c -o c_code/3_3/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_lexer.c -o c_code/3_3/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_lexer.c -o c_code/3_3/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_nimlexbase.c -o c_code/3_3/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_nimlexbase.c -o c_code/3_3/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_llstream.c -o c_code/3_3/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_llstream.c -o c_code/3_3/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_nimconf.c -o c_code/3_3/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_nimconf.c -o c_code/3_3/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_main.c -o c_code/3_3/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_main.c -o c_code/3_3/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_ast.c -o c_code/3_3/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_ast.c -o c_code/3_3/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_intsets.c -o c_code/3_3/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_intsets.c -o c_code/3_3/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_idgen.c -o c_code/3_3/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_idgen.c -o c_code/3_3/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_astalgo.c -o c_code/3_3/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_astalgo.c -o c_code/3_3/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_rodutils.c -o c_code/3_3/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_rodutils.c -o c_code/3_3/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_syntaxes.c -o c_code/3_3/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_syntaxes.c -o c_code/3_3/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_parser.c -o c_code/3_3/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_parser.c -o c_code/3_3/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_pbraces.c -o c_code/3_3/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_pbraces.c -o c_code/3_3/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_filters.c -o c_code/3_3/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_filters.c -o c_code/3_3/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_renderer.c -o c_code/3_3/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_renderer.c -o c_code/3_3/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_filter_tmpl.c -o c_code/3_3/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_filter_tmpl.c -o c_code/3_3/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_rodread.c -o c_code/3_3/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_rodread.c -o c_code/3_3/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_types.c -o c_code/3_3/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_types.c -o c_code/3_3/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_trees.c -o c_code/3_3/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_trees.c -o c_code/3_3/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_memfiles.c -o c_code/3_3/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_memfiles.c -o c_code/3_3/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_rodwrite.c -o c_code/3_3/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_rodwrite.c -o c_code/3_3/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_passes.c -o c_code/3_3/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_passes.c -o c_code/3_3/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_magicsys.c -o c_code/3_3/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_magicsys.c -o c_code/3_3/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_nimsets.c -o c_code/3_3/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_nimsets.c -o c_code/3_3/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_bitsets.c -o c_code/3_3/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_bitsets.c -o c_code/3_3/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_importer.c -o c_code/3_3/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_importer.c -o c_code/3_3/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_lookups.c -o c_code/3_3/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_lookups.c -o c_code/3_3/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_semdata.c -o c_code/3_3/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_semdata.c -o c_code/3_3/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_treetab.c -o c_code/3_3/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_treetab.c -o c_code/3_3/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_vmdef.c -o c_code/3_3/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_vmdef.c -o c_code/3_3/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_prettybase.c -o c_code/3_3/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_prettybase.c -o c_code/3_3/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_lexbase.c -o c_code/3_3/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_lexbase.c -o c_code/3_3/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_sem.c -o c_code/3_3/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_sem.c -o c_code/3_3/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_semfold.c -o c_code/3_3/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_semfold.c -o c_code/3_3/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_saturate.c -o c_code/3_3/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_saturate.c -o c_code/3_3/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_procfind.c -o c_code/3_3/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_procfind.c -o c_code/3_3/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_pragmas.c -o c_code/3_3/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_pragmas.c -o c_code/3_3/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_semtypinst.c -o c_code/3_3/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_semtypinst.c -o c_code/3_3/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_sigmatch.c -o c_code/3_3/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_sigmatch.c -o c_code/3_3/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_parampatterns.c -o c_code/3_3/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_parampatterns.c -o c_code/3_3/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_pretty.c -o c_code/3_3/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_pretty.c -o c_code/3_3/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_docgen.c -o c_code/3_3/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_docgen.c -o c_code/3_3/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/docutils_rstast.c -o c_code/3_3/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/docutils_rstast.c -o c_code/3_3/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_json.c -o c_code/3_3/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_json.c -o c_code/3_3/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_unicode.c -o c_code/3_3/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_unicode.c -o c_code/3_3/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_macros.c -o c_code/3_3/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_macros.c -o c_code/3_3/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/docutils_rst.c -o c_code/3_3/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/docutils_rst.c -o c_code/3_3/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/docutils_rstgen.c -o c_code/3_3/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/docutils_rstgen.c -o c_code/3_3/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/docutils_highlite.c -o c_code/3_3/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/docutils_highlite.c -o c_code/3_3/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_sequtils.c -o c_code/3_3/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_sequtils.c -o c_code/3_3/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_algorithm.c -o c_code/3_3/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_algorithm.c -o c_code/3_3/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_sempass2.c -o c_code/3_3/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_sempass2.c -o c_code/3_3/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_guards.c -o c_code/3_3/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_guards.c -o c_code/3_3/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_xmltree.c -o c_code/3_3/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_xmltree.c -o c_code/3_3/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_cgi.c -o c_code/3_3/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_cgi.c -o c_code/3_3/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_cookies.c -o c_code/3_3/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_cookies.c -o c_code/3_3/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_typesrenderer.c -o c_code/3_3/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_typesrenderer.c -o c_code/3_3/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_transf.c -o c_code/3_3/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_transf.c -o c_code/3_3/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_cgmeth.c -o c_code/3_3/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_cgmeth.c -o c_code/3_3/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_lambdalifting.c -o c_code/3_3/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_lambdalifting.c -o c_code/3_3/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_lowerings.c -o c_code/3_3/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_lowerings.c -o c_code/3_3/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_vm.c -o c_code/3_3/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_vm.c -o c_code/3_3/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_vmgen.c -o c_code/3_3/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_vmgen.c -o c_code/3_3/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_unsigned.c -o c_code/3_3/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_unsigned.c -o c_code/3_3/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_vmdeps.c -o c_code/3_3/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_vmdeps.c -o c_code/3_3/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_vmmarshal.c -o c_code/3_3/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_vmmarshal.c -o c_code/3_3/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_evaltempl.c -o c_code/3_3/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_evaltempl.c -o c_code/3_3/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_aliases.c -o c_code/3_3/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_aliases.c -o c_code/3_3/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_patterns.c -o c_code/3_3/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_patterns.c -o c_code/3_3/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_semmacrosanity.c -o c_code/3_3/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_semmacrosanity.c -o c_code/3_3/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_semparallel.c -o c_code/3_3/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_semparallel.c -o c_code/3_3/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_plugins.c -o c_code/3_3/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_plugins.c -o c_code/3_3/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_active.c -o c_code/3_3/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_active.c -o c_code/3_3/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_locals.c -o c_code/3_3/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_locals.c -o c_code/3_3/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_cgen.c -o c_code/3_3/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_cgen.c -o c_code/3_3/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_ccgutils.c -o c_code/3_3/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_ccgutils.c -o c_code/3_3/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_cgendata.c -o c_code/3_3/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_cgendata.c -o c_code/3_3/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_ccgmerge.c -o c_code/3_3/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_ccgmerge.c -o c_code/3_3/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_jsgen.c -o c_code/3_3/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_jsgen.c -o c_code/3_3/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_passaux.c -o c_code/3_3/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_passaux.c -o c_code/3_3/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_depends.c -o c_code/3_3/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_depends.c -o c_code/3_3/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_docgen2.c -o c_code/3_3/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_docgen2.c -o c_code/3_3/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_service.c -o c_code/3_3/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_service.c -o c_code/3_3/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_net.c -o c_code/3_3/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_net.c -o c_code/3_3/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_rawsockets.c -o c_code/3_3/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/stdlib_rawsockets.c -o c_code/3_3/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_modules.c -o c_code/3_3/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_modules.c -o c_code/3_3/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_nodejs.c -o c_code/3_3/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/3_3/nimsrc_nodejs.c -o c_code/3_3/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/3_3/nimsrc_nim.o \
c_code/3_3/stdlib_system.o \
c_code/3_3/nimsrc_testability.o \
c_code/3_3/nimsrc_commands.o \
c_code/3_3/stdlib_os.o \
c_code/3_3/stdlib_strutils.o \
c_code/3_3/stdlib_parseutils.o \
c_code/3_3/stdlib_times.o \
c_code/3_3/stdlib_posix.o \
c_code/3_3/nimsrc_msgs.o \
c_code/3_3/nimsrc_options.o \
c_code/3_3/nimsrc_lists.o \
c_code/3_3/stdlib_strtabs.o \
c_code/3_3/stdlib_hashes.o \
c_code/3_3/stdlib_osproc.o \
c_code/3_3/stdlib_streams.o \
c_code/3_3/stdlib_cpuinfo.o \
c_code/3_3/stdlib_sets.o \
c_code/3_3/stdlib_math.o \
c_code/3_3/stdlib_tables.o \
c_code/3_3/nimsrc_ropes.o \
c_code/3_3/nimsrc_platform.o \
c_code/3_3/nimsrc_nversion.o \
c_code/3_3/nimsrc_condsyms.o \
c_code/3_3/nimsrc_idents.o \
c_code/3_3/nimsrc_extccomp.o \
c_code/3_3/nimsrc_crc.o \
c_code/3_3/nimsrc_wordrecg.o \
c_code/3_3/nimsrc_nimblecmd.o \
c_code/3_3/stdlib_parseopt.o \
c_code/3_3/nimsrc_lexer.o \
c_code/3_3/nimsrc_nimlexbase.o \
c_code/3_3/nimsrc_llstream.o \
c_code/3_3/nimsrc_nimconf.o \
c_code/3_3/nimsrc_main.o \
c_code/3_3/nimsrc_ast.o \
c_code/3_3/stdlib_intsets.o \
c_code/3_3/nimsrc_idgen.o \
c_code/3_3/nimsrc_astalgo.o \
c_code/3_3/nimsrc_rodutils.o \
c_code/3_3/nimsrc_syntaxes.o \
c_code/3_3/nimsrc_parser.o \
c_code/3_3/nimsrc_pbraces.o \
c_code/3_3/nimsrc_filters.o \
c_code/3_3/nimsrc_renderer.o \
c_code/3_3/nimsrc_filter_tmpl.o \
c_code/3_3/nimsrc_rodread.o \
c_code/3_3/nimsrc_types.o \
c_code/3_3/nimsrc_trees.o \
c_code/3_3/stdlib_memfiles.o \
c_code/3_3/nimsrc_rodwrite.o \
c_code/3_3/nimsrc_passes.o \
c_code/3_3/nimsrc_magicsys.o \
c_code/3_3/nimsrc_nimsets.o \
c_code/3_3/nimsrc_bitsets.o \
c_code/3_3/nimsrc_importer.o \
c_code/3_3/nimsrc_lookups.o \
c_code/3_3/nimsrc_semdata.o \
c_code/3_3/nimsrc_treetab.o \
c_code/3_3/nimsrc_vmdef.o \
c_code/3_3/nimsrc_prettybase.o \
c_code/3_3/stdlib_lexbase.o \
c_code/3_3/nimsrc_sem.o \
c_code/3_3/nimsrc_semfold.o \
c_code/3_3/nimsrc_saturate.o \
c_code/3_3/nimsrc_procfind.o \
c_code/3_3/nimsrc_pragmas.o \
c_code/3_3/nimsrc_semtypinst.o \
c_code/3_3/nimsrc_sigmatch.o \
c_code/3_3/nimsrc_parampatterns.o \
c_code/3_3/nimsrc_pretty.o \
c_code/3_3/nimsrc_docgen.o \
c_code/3_3/docutils_rstast.o \
c_code/3_3/stdlib_json.o \
c_code/3_3/stdlib_unicode.o \
c_code/3_3/stdlib_macros.o \
c_code/3_3/docutils_rst.o \
c_code/3_3/docutils_rstgen.o \
c_code/3_3/docutils_highlite.o \
c_code/3_3/stdlib_sequtils.o \
c_code/3_3/stdlib_algorithm.o \
c_code/3_3/nimsrc_sempass2.o \
c_code/3_3/nimsrc_guards.o \
c_code/3_3/stdlib_xmltree.o \
c_code/3_3/stdlib_cgi.o \
c_code/3_3/stdlib_cookies.o \
c_code/3_3/nimsrc_typesrenderer.o \
c_code/3_3/nimsrc_transf.o \
c_code/3_3/nimsrc_cgmeth.o \
c_code/3_3/nimsrc_lambdalifting.o \
c_code/3_3/nimsrc_lowerings.o \
c_code/3_3/nimsrc_vm.o \
c_code/3_3/nimsrc_vmgen.o \
c_code/3_3/stdlib_unsigned.o \
c_code/3_3/nimsrc_vmdeps.o \
c_code/3_3/nimsrc_vmmarshal.o \
c_code/3_3/nimsrc_evaltempl.o \
c_code/3_3/nimsrc_aliases.o \
c_code/3_3/nimsrc_patterns.o \
c_code/3_3/nimsrc_semmacrosanity.o \
c_code/3_3/nimsrc_semparallel.o \
c_code/3_3/nimsrc_plugins.o \
c_code/3_3/nimsrc_active.o \
c_code/3_3/nimsrc_locals.o \
c_code/3_3/nimsrc_cgen.o \
c_code/3_3/nimsrc_ccgutils.o \
c_code/3_3/nimsrc_cgendata.o \
c_code/3_3/nimsrc_ccgmerge.o \
c_code/3_3/nimsrc_jsgen.o \
c_code/3_3/nimsrc_passaux.o \
c_code/3_3/nimsrc_depends.o \
c_code/3_3/nimsrc_docgen2.o \
c_code/3_3/nimsrc_service.o \
c_code/3_3/stdlib_net.o \
c_code/3_3/stdlib_rawsockets.o \
c_code/3_3/nimsrc_modules.o \
c_code/3_3/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/3_3/nimsrc_nim.o \
c_code/3_3/stdlib_system.o \
c_code/3_3/nimsrc_testability.o \
c_code/3_3/nimsrc_commands.o \
c_code/3_3/stdlib_os.o \
c_code/3_3/stdlib_strutils.o \
c_code/3_3/stdlib_parseutils.o \
c_code/3_3/stdlib_times.o \
c_code/3_3/stdlib_posix.o \
c_code/3_3/nimsrc_msgs.o \
c_code/3_3/nimsrc_options.o \
c_code/3_3/nimsrc_lists.o \
c_code/3_3/stdlib_strtabs.o \
c_code/3_3/stdlib_hashes.o \
c_code/3_3/stdlib_osproc.o \
c_code/3_3/stdlib_streams.o \
c_code/3_3/stdlib_cpuinfo.o \
c_code/3_3/stdlib_sets.o \
c_code/3_3/stdlib_math.o \
c_code/3_3/stdlib_tables.o \
c_code/3_3/nimsrc_ropes.o \
c_code/3_3/nimsrc_platform.o \
c_code/3_3/nimsrc_nversion.o \
c_code/3_3/nimsrc_condsyms.o \
c_code/3_3/nimsrc_idents.o \
c_code/3_3/nimsrc_extccomp.o \
c_code/3_3/nimsrc_crc.o \
c_code/3_3/nimsrc_wordrecg.o \
c_code/3_3/nimsrc_nimblecmd.o \
c_code/3_3/stdlib_parseopt.o \
c_code/3_3/nimsrc_lexer.o \
c_code/3_3/nimsrc_nimlexbase.o \
c_code/3_3/nimsrc_llstream.o \
c_code/3_3/nimsrc_nimconf.o \
c_code/3_3/nimsrc_main.o \
c_code/3_3/nimsrc_ast.o \
c_code/3_3/stdlib_intsets.o \
c_code/3_3/nimsrc_idgen.o \
c_code/3_3/nimsrc_astalgo.o \
c_code/3_3/nimsrc_rodutils.o \
c_code/3_3/nimsrc_syntaxes.o \
c_code/3_3/nimsrc_parser.o \
c_code/3_3/nimsrc_pbraces.o \
c_code/3_3/nimsrc_filters.o \
c_code/3_3/nimsrc_renderer.o \
c_code/3_3/nimsrc_filter_tmpl.o \
c_code/3_3/nimsrc_rodread.o \
c_code/3_3/nimsrc_types.o \
c_code/3_3/nimsrc_trees.o \
c_code/3_3/stdlib_memfiles.o \
c_code/3_3/nimsrc_rodwrite.o \
c_code/3_3/nimsrc_passes.o \
c_code/3_3/nimsrc_magicsys.o \
c_code/3_3/nimsrc_nimsets.o \
c_code/3_3/nimsrc_bitsets.o \
c_code/3_3/nimsrc_importer.o \
c_code/3_3/nimsrc_lookups.o \
c_code/3_3/nimsrc_semdata.o \
c_code/3_3/nimsrc_treetab.o \
c_code/3_3/nimsrc_vmdef.o \
c_code/3_3/nimsrc_prettybase.o \
c_code/3_3/stdlib_lexbase.o \
c_code/3_3/nimsrc_sem.o \
c_code/3_3/nimsrc_semfold.o \
c_code/3_3/nimsrc_saturate.o \
c_code/3_3/nimsrc_procfind.o \
c_code/3_3/nimsrc_pragmas.o \
c_code/3_3/nimsrc_semtypinst.o \
c_code/3_3/nimsrc_sigmatch.o \
c_code/3_3/nimsrc_parampatterns.o \
c_code/3_3/nimsrc_pretty.o \
c_code/3_3/nimsrc_docgen.o \
c_code/3_3/docutils_rstast.o \
c_code/3_3/stdlib_json.o \
c_code/3_3/stdlib_unicode.o \
c_code/3_3/stdlib_macros.o \
c_code/3_3/docutils_rst.o \
c_code/3_3/docutils_rstgen.o \
c_code/3_3/docutils_highlite.o \
c_code/3_3/stdlib_sequtils.o \
c_code/3_3/stdlib_algorithm.o \
c_code/3_3/nimsrc_sempass2.o \
c_code/3_3/nimsrc_guards.o \
c_code/3_3/stdlib_xmltree.o \
c_code/3_3/stdlib_cgi.o \
c_code/3_3/stdlib_cookies.o \
c_code/3_3/nimsrc_typesrenderer.o \
c_code/3_3/nimsrc_transf.o \
c_code/3_3/nimsrc_cgmeth.o \
c_code/3_3/nimsrc_lambdalifting.o \
c_code/3_3/nimsrc_lowerings.o \
c_code/3_3/nimsrc_vm.o \
c_code/3_3/nimsrc_vmgen.o \
c_code/3_3/stdlib_unsigned.o \
c_code/3_3/nimsrc_vmdeps.o \
c_code/3_3/nimsrc_vmmarshal.o \
c_code/3_3/nimsrc_evaltempl.o \
c_code/3_3/nimsrc_aliases.o \
c_code/3_3/nimsrc_patterns.o \
c_code/3_3/nimsrc_semmacrosanity.o \
c_code/3_3/nimsrc_semparallel.o \
c_code/3_3/nimsrc_plugins.o \
c_code/3_3/nimsrc_active.o \
c_code/3_3/nimsrc_locals.o \
c_code/3_3/nimsrc_cgen.o \
c_code/3_3/nimsrc_ccgutils.o \
c_code/3_3/nimsrc_cgendata.o \
c_code/3_3/nimsrc_ccgmerge.o \
c_code/3_3/nimsrc_jsgen.o \
c_code/3_3/nimsrc_passaux.o \
c_code/3_3/nimsrc_depends.o \
c_code/3_3/nimsrc_docgen2.o \
c_code/3_3/nimsrc_service.o \
c_code/3_3/stdlib_net.o \
c_code/3_3/stdlib_rawsockets.o \
c_code/3_3/nimsrc_modules.o \
c_code/3_3/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  arm)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  sparc)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  mips)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  powerpc)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  *)
    echo "Error: no C code generated for: [$myos: $mycpu]"
    exit 1
    ;;
  esac
  ;;
solaris) 
  case $mycpu in
  i386)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_nim.c -o c_code/4_1/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_nim.c -o c_code/4_1/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_system.c -o c_code/4_1/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_system.c -o c_code/4_1/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_testability.c -o c_code/4_1/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_testability.c -o c_code/4_1/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_commands.c -o c_code/4_1/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_commands.c -o c_code/4_1/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_os.c -o c_code/4_1/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_os.c -o c_code/4_1/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_strutils.c -o c_code/4_1/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_strutils.c -o c_code/4_1/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_parseutils.c -o c_code/4_1/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_parseutils.c -o c_code/4_1/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_times.c -o c_code/4_1/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_times.c -o c_code/4_1/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_posix.c -o c_code/4_1/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_posix.c -o c_code/4_1/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_msgs.c -o c_code/4_1/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_msgs.c -o c_code/4_1/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_options.c -o c_code/4_1/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_options.c -o c_code/4_1/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_lists.c -o c_code/4_1/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_lists.c -o c_code/4_1/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_strtabs.c -o c_code/4_1/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_strtabs.c -o c_code/4_1/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_hashes.c -o c_code/4_1/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_hashes.c -o c_code/4_1/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_osproc.c -o c_code/4_1/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_osproc.c -o c_code/4_1/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_streams.c -o c_code/4_1/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_streams.c -o c_code/4_1/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_cpuinfo.c -o c_code/4_1/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_cpuinfo.c -o c_code/4_1/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_sets.c -o c_code/4_1/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_sets.c -o c_code/4_1/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_math.c -o c_code/4_1/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_math.c -o c_code/4_1/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_tables.c -o c_code/4_1/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_tables.c -o c_code/4_1/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_ropes.c -o c_code/4_1/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_ropes.c -o c_code/4_1/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_platform.c -o c_code/4_1/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_platform.c -o c_code/4_1/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_nversion.c -o c_code/4_1/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_nversion.c -o c_code/4_1/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_condsyms.c -o c_code/4_1/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_condsyms.c -o c_code/4_1/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_idents.c -o c_code/4_1/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_idents.c -o c_code/4_1/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_extccomp.c -o c_code/4_1/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_extccomp.c -o c_code/4_1/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_crc.c -o c_code/4_1/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_crc.c -o c_code/4_1/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_wordrecg.c -o c_code/4_1/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_wordrecg.c -o c_code/4_1/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_nimblecmd.c -o c_code/4_1/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_nimblecmd.c -o c_code/4_1/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_parseopt.c -o c_code/4_1/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_parseopt.c -o c_code/4_1/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_lexer.c -o c_code/4_1/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_lexer.c -o c_code/4_1/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_nimlexbase.c -o c_code/4_1/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_nimlexbase.c -o c_code/4_1/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_llstream.c -o c_code/4_1/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_llstream.c -o c_code/4_1/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_nimconf.c -o c_code/4_1/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_nimconf.c -o c_code/4_1/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_main.c -o c_code/4_1/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_main.c -o c_code/4_1/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_ast.c -o c_code/4_1/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_ast.c -o c_code/4_1/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_intsets.c -o c_code/4_1/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_intsets.c -o c_code/4_1/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_idgen.c -o c_code/4_1/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_idgen.c -o c_code/4_1/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_astalgo.c -o c_code/4_1/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_astalgo.c -o c_code/4_1/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_rodutils.c -o c_code/4_1/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_rodutils.c -o c_code/4_1/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_syntaxes.c -o c_code/4_1/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_syntaxes.c -o c_code/4_1/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_parser.c -o c_code/4_1/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_parser.c -o c_code/4_1/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_pbraces.c -o c_code/4_1/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_pbraces.c -o c_code/4_1/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_filters.c -o c_code/4_1/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_filters.c -o c_code/4_1/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_renderer.c -o c_code/4_1/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_renderer.c -o c_code/4_1/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_filter_tmpl.c -o c_code/4_1/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_filter_tmpl.c -o c_code/4_1/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_rodread.c -o c_code/4_1/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_rodread.c -o c_code/4_1/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_types.c -o c_code/4_1/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_types.c -o c_code/4_1/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_trees.c -o c_code/4_1/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_trees.c -o c_code/4_1/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_memfiles.c -o c_code/4_1/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_memfiles.c -o c_code/4_1/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_rodwrite.c -o c_code/4_1/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_rodwrite.c -o c_code/4_1/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_passes.c -o c_code/4_1/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_passes.c -o c_code/4_1/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_magicsys.c -o c_code/4_1/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_magicsys.c -o c_code/4_1/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_nimsets.c -o c_code/4_1/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_nimsets.c -o c_code/4_1/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_bitsets.c -o c_code/4_1/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_bitsets.c -o c_code/4_1/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_importer.c -o c_code/4_1/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_importer.c -o c_code/4_1/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_lookups.c -o c_code/4_1/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_lookups.c -o c_code/4_1/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_semdata.c -o c_code/4_1/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_semdata.c -o c_code/4_1/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_treetab.c -o c_code/4_1/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_treetab.c -o c_code/4_1/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_vmdef.c -o c_code/4_1/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_vmdef.c -o c_code/4_1/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_prettybase.c -o c_code/4_1/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_prettybase.c -o c_code/4_1/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_lexbase.c -o c_code/4_1/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_lexbase.c -o c_code/4_1/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_sem.c -o c_code/4_1/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_sem.c -o c_code/4_1/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_semfold.c -o c_code/4_1/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_semfold.c -o c_code/4_1/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_saturate.c -o c_code/4_1/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_saturate.c -o c_code/4_1/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_procfind.c -o c_code/4_1/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_procfind.c -o c_code/4_1/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_pragmas.c -o c_code/4_1/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_pragmas.c -o c_code/4_1/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_semtypinst.c -o c_code/4_1/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_semtypinst.c -o c_code/4_1/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_sigmatch.c -o c_code/4_1/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_sigmatch.c -o c_code/4_1/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_parampatterns.c -o c_code/4_1/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_parampatterns.c -o c_code/4_1/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_pretty.c -o c_code/4_1/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_pretty.c -o c_code/4_1/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_docgen.c -o c_code/4_1/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_docgen.c -o c_code/4_1/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/docutils_rstast.c -o c_code/4_1/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/docutils_rstast.c -o c_code/4_1/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_json.c -o c_code/4_1/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_json.c -o c_code/4_1/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_unicode.c -o c_code/4_1/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_unicode.c -o c_code/4_1/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_macros.c -o c_code/4_1/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_macros.c -o c_code/4_1/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/docutils_rst.c -o c_code/4_1/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/docutils_rst.c -o c_code/4_1/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/docutils_rstgen.c -o c_code/4_1/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/docutils_rstgen.c -o c_code/4_1/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/docutils_highlite.c -o c_code/4_1/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/docutils_highlite.c -o c_code/4_1/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_sequtils.c -o c_code/4_1/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_sequtils.c -o c_code/4_1/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_algorithm.c -o c_code/4_1/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_algorithm.c -o c_code/4_1/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_sempass2.c -o c_code/4_1/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_sempass2.c -o c_code/4_1/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_guards.c -o c_code/4_1/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_guards.c -o c_code/4_1/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_xmltree.c -o c_code/4_1/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_xmltree.c -o c_code/4_1/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_cgi.c -o c_code/4_1/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_cgi.c -o c_code/4_1/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_cookies.c -o c_code/4_1/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_cookies.c -o c_code/4_1/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_typesrenderer.c -o c_code/4_1/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_typesrenderer.c -o c_code/4_1/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_transf.c -o c_code/4_1/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_transf.c -o c_code/4_1/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_cgmeth.c -o c_code/4_1/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_cgmeth.c -o c_code/4_1/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_lambdalifting.c -o c_code/4_1/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_lambdalifting.c -o c_code/4_1/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_lowerings.c -o c_code/4_1/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_lowerings.c -o c_code/4_1/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_vm.c -o c_code/4_1/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_vm.c -o c_code/4_1/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_vmgen.c -o c_code/4_1/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_vmgen.c -o c_code/4_1/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_unsigned.c -o c_code/4_1/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_unsigned.c -o c_code/4_1/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_vmdeps.c -o c_code/4_1/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_vmdeps.c -o c_code/4_1/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_vmmarshal.c -o c_code/4_1/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_vmmarshal.c -o c_code/4_1/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_evaltempl.c -o c_code/4_1/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_evaltempl.c -o c_code/4_1/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_aliases.c -o c_code/4_1/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_aliases.c -o c_code/4_1/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_patterns.c -o c_code/4_1/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_patterns.c -o c_code/4_1/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_semmacrosanity.c -o c_code/4_1/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_semmacrosanity.c -o c_code/4_1/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_semparallel.c -o c_code/4_1/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_semparallel.c -o c_code/4_1/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_plugins.c -o c_code/4_1/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_plugins.c -o c_code/4_1/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_active.c -o c_code/4_1/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_active.c -o c_code/4_1/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_locals.c -o c_code/4_1/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_locals.c -o c_code/4_1/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_cgen.c -o c_code/4_1/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_cgen.c -o c_code/4_1/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_ccgutils.c -o c_code/4_1/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_ccgutils.c -o c_code/4_1/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_cgendata.c -o c_code/4_1/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_cgendata.c -o c_code/4_1/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_ccgmerge.c -o c_code/4_1/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_ccgmerge.c -o c_code/4_1/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_jsgen.c -o c_code/4_1/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_jsgen.c -o c_code/4_1/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_passaux.c -o c_code/4_1/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_passaux.c -o c_code/4_1/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_depends.c -o c_code/4_1/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_depends.c -o c_code/4_1/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_docgen2.c -o c_code/4_1/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_docgen2.c -o c_code/4_1/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_service.c -o c_code/4_1/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_service.c -o c_code/4_1/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_net.c -o c_code/4_1/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_net.c -o c_code/4_1/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_rawsockets.c -o c_code/4_1/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/stdlib_rawsockets.c -o c_code/4_1/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_modules.c -o c_code/4_1/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_modules.c -o c_code/4_1/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_nodejs.c -o c_code/4_1/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_1/nimsrc_nodejs.c -o c_code/4_1/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/4_1/nimsrc_nim.o \
c_code/4_1/stdlib_system.o \
c_code/4_1/nimsrc_testability.o \
c_code/4_1/nimsrc_commands.o \
c_code/4_1/stdlib_os.o \
c_code/4_1/stdlib_strutils.o \
c_code/4_1/stdlib_parseutils.o \
c_code/4_1/stdlib_times.o \
c_code/4_1/stdlib_posix.o \
c_code/4_1/nimsrc_msgs.o \
c_code/4_1/nimsrc_options.o \
c_code/4_1/nimsrc_lists.o \
c_code/4_1/stdlib_strtabs.o \
c_code/4_1/stdlib_hashes.o \
c_code/4_1/stdlib_osproc.o \
c_code/4_1/stdlib_streams.o \
c_code/4_1/stdlib_cpuinfo.o \
c_code/4_1/stdlib_sets.o \
c_code/4_1/stdlib_math.o \
c_code/4_1/stdlib_tables.o \
c_code/4_1/nimsrc_ropes.o \
c_code/4_1/nimsrc_platform.o \
c_code/4_1/nimsrc_nversion.o \
c_code/4_1/nimsrc_condsyms.o \
c_code/4_1/nimsrc_idents.o \
c_code/4_1/nimsrc_extccomp.o \
c_code/4_1/nimsrc_crc.o \
c_code/4_1/nimsrc_wordrecg.o \
c_code/4_1/nimsrc_nimblecmd.o \
c_code/4_1/stdlib_parseopt.o \
c_code/4_1/nimsrc_lexer.o \
c_code/4_1/nimsrc_nimlexbase.o \
c_code/4_1/nimsrc_llstream.o \
c_code/4_1/nimsrc_nimconf.o \
c_code/4_1/nimsrc_main.o \
c_code/4_1/nimsrc_ast.o \
c_code/4_1/stdlib_intsets.o \
c_code/4_1/nimsrc_idgen.o \
c_code/4_1/nimsrc_astalgo.o \
c_code/4_1/nimsrc_rodutils.o \
c_code/4_1/nimsrc_syntaxes.o \
c_code/4_1/nimsrc_parser.o \
c_code/4_1/nimsrc_pbraces.o \
c_code/4_1/nimsrc_filters.o \
c_code/4_1/nimsrc_renderer.o \
c_code/4_1/nimsrc_filter_tmpl.o \
c_code/4_1/nimsrc_rodread.o \
c_code/4_1/nimsrc_types.o \
c_code/4_1/nimsrc_trees.o \
c_code/4_1/stdlib_memfiles.o \
c_code/4_1/nimsrc_rodwrite.o \
c_code/4_1/nimsrc_passes.o \
c_code/4_1/nimsrc_magicsys.o \
c_code/4_1/nimsrc_nimsets.o \
c_code/4_1/nimsrc_bitsets.o \
c_code/4_1/nimsrc_importer.o \
c_code/4_1/nimsrc_lookups.o \
c_code/4_1/nimsrc_semdata.o \
c_code/4_1/nimsrc_treetab.o \
c_code/4_1/nimsrc_vmdef.o \
c_code/4_1/nimsrc_prettybase.o \
c_code/4_1/stdlib_lexbase.o \
c_code/4_1/nimsrc_sem.o \
c_code/4_1/nimsrc_semfold.o \
c_code/4_1/nimsrc_saturate.o \
c_code/4_1/nimsrc_procfind.o \
c_code/4_1/nimsrc_pragmas.o \
c_code/4_1/nimsrc_semtypinst.o \
c_code/4_1/nimsrc_sigmatch.o \
c_code/4_1/nimsrc_parampatterns.o \
c_code/4_1/nimsrc_pretty.o \
c_code/4_1/nimsrc_docgen.o \
c_code/4_1/docutils_rstast.o \
c_code/4_1/stdlib_json.o \
c_code/4_1/stdlib_unicode.o \
c_code/4_1/stdlib_macros.o \
c_code/4_1/docutils_rst.o \
c_code/4_1/docutils_rstgen.o \
c_code/4_1/docutils_highlite.o \
c_code/4_1/stdlib_sequtils.o \
c_code/4_1/stdlib_algorithm.o \
c_code/4_1/nimsrc_sempass2.o \
c_code/4_1/nimsrc_guards.o \
c_code/4_1/stdlib_xmltree.o \
c_code/4_1/stdlib_cgi.o \
c_code/4_1/stdlib_cookies.o \
c_code/4_1/nimsrc_typesrenderer.o \
c_code/4_1/nimsrc_transf.o \
c_code/4_1/nimsrc_cgmeth.o \
c_code/4_1/nimsrc_lambdalifting.o \
c_code/4_1/nimsrc_lowerings.o \
c_code/4_1/nimsrc_vm.o \
c_code/4_1/nimsrc_vmgen.o \
c_code/4_1/stdlib_unsigned.o \
c_code/4_1/nimsrc_vmdeps.o \
c_code/4_1/nimsrc_vmmarshal.o \
c_code/4_1/nimsrc_evaltempl.o \
c_code/4_1/nimsrc_aliases.o \
c_code/4_1/nimsrc_patterns.o \
c_code/4_1/nimsrc_semmacrosanity.o \
c_code/4_1/nimsrc_semparallel.o \
c_code/4_1/nimsrc_plugins.o \
c_code/4_1/nimsrc_active.o \
c_code/4_1/nimsrc_locals.o \
c_code/4_1/nimsrc_cgen.o \
c_code/4_1/nimsrc_ccgutils.o \
c_code/4_1/nimsrc_cgendata.o \
c_code/4_1/nimsrc_ccgmerge.o \
c_code/4_1/nimsrc_jsgen.o \
c_code/4_1/nimsrc_passaux.o \
c_code/4_1/nimsrc_depends.o \
c_code/4_1/nimsrc_docgen2.o \
c_code/4_1/nimsrc_service.o \
c_code/4_1/stdlib_net.o \
c_code/4_1/stdlib_rawsockets.o \
c_code/4_1/nimsrc_modules.o \
c_code/4_1/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/4_1/nimsrc_nim.o \
c_code/4_1/stdlib_system.o \
c_code/4_1/nimsrc_testability.o \
c_code/4_1/nimsrc_commands.o \
c_code/4_1/stdlib_os.o \
c_code/4_1/stdlib_strutils.o \
c_code/4_1/stdlib_parseutils.o \
c_code/4_1/stdlib_times.o \
c_code/4_1/stdlib_posix.o \
c_code/4_1/nimsrc_msgs.o \
c_code/4_1/nimsrc_options.o \
c_code/4_1/nimsrc_lists.o \
c_code/4_1/stdlib_strtabs.o \
c_code/4_1/stdlib_hashes.o \
c_code/4_1/stdlib_osproc.o \
c_code/4_1/stdlib_streams.o \
c_code/4_1/stdlib_cpuinfo.o \
c_code/4_1/stdlib_sets.o \
c_code/4_1/stdlib_math.o \
c_code/4_1/stdlib_tables.o \
c_code/4_1/nimsrc_ropes.o \
c_code/4_1/nimsrc_platform.o \
c_code/4_1/nimsrc_nversion.o \
c_code/4_1/nimsrc_condsyms.o \
c_code/4_1/nimsrc_idents.o \
c_code/4_1/nimsrc_extccomp.o \
c_code/4_1/nimsrc_crc.o \
c_code/4_1/nimsrc_wordrecg.o \
c_code/4_1/nimsrc_nimblecmd.o \
c_code/4_1/stdlib_parseopt.o \
c_code/4_1/nimsrc_lexer.o \
c_code/4_1/nimsrc_nimlexbase.o \
c_code/4_1/nimsrc_llstream.o \
c_code/4_1/nimsrc_nimconf.o \
c_code/4_1/nimsrc_main.o \
c_code/4_1/nimsrc_ast.o \
c_code/4_1/stdlib_intsets.o \
c_code/4_1/nimsrc_idgen.o \
c_code/4_1/nimsrc_astalgo.o \
c_code/4_1/nimsrc_rodutils.o \
c_code/4_1/nimsrc_syntaxes.o \
c_code/4_1/nimsrc_parser.o \
c_code/4_1/nimsrc_pbraces.o \
c_code/4_1/nimsrc_filters.o \
c_code/4_1/nimsrc_renderer.o \
c_code/4_1/nimsrc_filter_tmpl.o \
c_code/4_1/nimsrc_rodread.o \
c_code/4_1/nimsrc_types.o \
c_code/4_1/nimsrc_trees.o \
c_code/4_1/stdlib_memfiles.o \
c_code/4_1/nimsrc_rodwrite.o \
c_code/4_1/nimsrc_passes.o \
c_code/4_1/nimsrc_magicsys.o \
c_code/4_1/nimsrc_nimsets.o \
c_code/4_1/nimsrc_bitsets.o \
c_code/4_1/nimsrc_importer.o \
c_code/4_1/nimsrc_lookups.o \
c_code/4_1/nimsrc_semdata.o \
c_code/4_1/nimsrc_treetab.o \
c_code/4_1/nimsrc_vmdef.o \
c_code/4_1/nimsrc_prettybase.o \
c_code/4_1/stdlib_lexbase.o \
c_code/4_1/nimsrc_sem.o \
c_code/4_1/nimsrc_semfold.o \
c_code/4_1/nimsrc_saturate.o \
c_code/4_1/nimsrc_procfind.o \
c_code/4_1/nimsrc_pragmas.o \
c_code/4_1/nimsrc_semtypinst.o \
c_code/4_1/nimsrc_sigmatch.o \
c_code/4_1/nimsrc_parampatterns.o \
c_code/4_1/nimsrc_pretty.o \
c_code/4_1/nimsrc_docgen.o \
c_code/4_1/docutils_rstast.o \
c_code/4_1/stdlib_json.o \
c_code/4_1/stdlib_unicode.o \
c_code/4_1/stdlib_macros.o \
c_code/4_1/docutils_rst.o \
c_code/4_1/docutils_rstgen.o \
c_code/4_1/docutils_highlite.o \
c_code/4_1/stdlib_sequtils.o \
c_code/4_1/stdlib_algorithm.o \
c_code/4_1/nimsrc_sempass2.o \
c_code/4_1/nimsrc_guards.o \
c_code/4_1/stdlib_xmltree.o \
c_code/4_1/stdlib_cgi.o \
c_code/4_1/stdlib_cookies.o \
c_code/4_1/nimsrc_typesrenderer.o \
c_code/4_1/nimsrc_transf.o \
c_code/4_1/nimsrc_cgmeth.o \
c_code/4_1/nimsrc_lambdalifting.o \
c_code/4_1/nimsrc_lowerings.o \
c_code/4_1/nimsrc_vm.o \
c_code/4_1/nimsrc_vmgen.o \
c_code/4_1/stdlib_unsigned.o \
c_code/4_1/nimsrc_vmdeps.o \
c_code/4_1/nimsrc_vmmarshal.o \
c_code/4_1/nimsrc_evaltempl.o \
c_code/4_1/nimsrc_aliases.o \
c_code/4_1/nimsrc_patterns.o \
c_code/4_1/nimsrc_semmacrosanity.o \
c_code/4_1/nimsrc_semparallel.o \
c_code/4_1/nimsrc_plugins.o \
c_code/4_1/nimsrc_active.o \
c_code/4_1/nimsrc_locals.o \
c_code/4_1/nimsrc_cgen.o \
c_code/4_1/nimsrc_ccgutils.o \
c_code/4_1/nimsrc_cgendata.o \
c_code/4_1/nimsrc_ccgmerge.o \
c_code/4_1/nimsrc_jsgen.o \
c_code/4_1/nimsrc_passaux.o \
c_code/4_1/nimsrc_depends.o \
c_code/4_1/nimsrc_docgen2.o \
c_code/4_1/nimsrc_service.o \
c_code/4_1/stdlib_net.o \
c_code/4_1/stdlib_rawsockets.o \
c_code/4_1/nimsrc_modules.o \
c_code/4_1/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  amd64)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_nim.c -o c_code/4_2/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_nim.c -o c_code/4_2/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_system.c -o c_code/4_2/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_system.c -o c_code/4_2/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_testability.c -o c_code/4_2/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_testability.c -o c_code/4_2/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_commands.c -o c_code/4_2/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_commands.c -o c_code/4_2/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_os.c -o c_code/4_2/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_os.c -o c_code/4_2/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_strutils.c -o c_code/4_2/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_strutils.c -o c_code/4_2/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_parseutils.c -o c_code/4_2/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_parseutils.c -o c_code/4_2/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_times.c -o c_code/4_2/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_times.c -o c_code/4_2/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_posix.c -o c_code/4_2/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_posix.c -o c_code/4_2/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_msgs.c -o c_code/4_2/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_msgs.c -o c_code/4_2/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_options.c -o c_code/4_2/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_options.c -o c_code/4_2/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_lists.c -o c_code/4_2/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_lists.c -o c_code/4_2/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_strtabs.c -o c_code/4_2/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_strtabs.c -o c_code/4_2/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_hashes.c -o c_code/4_2/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_hashes.c -o c_code/4_2/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_osproc.c -o c_code/4_2/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_osproc.c -o c_code/4_2/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_streams.c -o c_code/4_2/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_streams.c -o c_code/4_2/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_cpuinfo.c -o c_code/4_2/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_cpuinfo.c -o c_code/4_2/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_sets.c -o c_code/4_2/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_sets.c -o c_code/4_2/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_math.c -o c_code/4_2/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_math.c -o c_code/4_2/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_tables.c -o c_code/4_2/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_tables.c -o c_code/4_2/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_ropes.c -o c_code/4_2/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_ropes.c -o c_code/4_2/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_platform.c -o c_code/4_2/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_platform.c -o c_code/4_2/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_nversion.c -o c_code/4_2/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_nversion.c -o c_code/4_2/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_condsyms.c -o c_code/4_2/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_condsyms.c -o c_code/4_2/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_idents.c -o c_code/4_2/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_idents.c -o c_code/4_2/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_extccomp.c -o c_code/4_2/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_extccomp.c -o c_code/4_2/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_crc.c -o c_code/4_2/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_crc.c -o c_code/4_2/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_wordrecg.c -o c_code/4_2/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_wordrecg.c -o c_code/4_2/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_nimblecmd.c -o c_code/4_2/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_nimblecmd.c -o c_code/4_2/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_parseopt.c -o c_code/4_2/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_parseopt.c -o c_code/4_2/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_lexer.c -o c_code/4_2/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_lexer.c -o c_code/4_2/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_nimlexbase.c -o c_code/4_2/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_nimlexbase.c -o c_code/4_2/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_llstream.c -o c_code/4_2/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_llstream.c -o c_code/4_2/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_nimconf.c -o c_code/4_2/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_nimconf.c -o c_code/4_2/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_main.c -o c_code/4_2/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_main.c -o c_code/4_2/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_ast.c -o c_code/4_2/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_ast.c -o c_code/4_2/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_intsets.c -o c_code/4_2/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_intsets.c -o c_code/4_2/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_idgen.c -o c_code/4_2/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_idgen.c -o c_code/4_2/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_astalgo.c -o c_code/4_2/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_astalgo.c -o c_code/4_2/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_rodutils.c -o c_code/4_2/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_rodutils.c -o c_code/4_2/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_syntaxes.c -o c_code/4_2/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_syntaxes.c -o c_code/4_2/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_parser.c -o c_code/4_2/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_parser.c -o c_code/4_2/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_pbraces.c -o c_code/4_2/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_pbraces.c -o c_code/4_2/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_filters.c -o c_code/4_2/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_filters.c -o c_code/4_2/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_renderer.c -o c_code/4_2/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_renderer.c -o c_code/4_2/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_filter_tmpl.c -o c_code/4_2/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_filter_tmpl.c -o c_code/4_2/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_rodread.c -o c_code/4_2/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_rodread.c -o c_code/4_2/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_types.c -o c_code/4_2/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_types.c -o c_code/4_2/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_trees.c -o c_code/4_2/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_trees.c -o c_code/4_2/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_memfiles.c -o c_code/4_2/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_memfiles.c -o c_code/4_2/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_rodwrite.c -o c_code/4_2/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_rodwrite.c -o c_code/4_2/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_passes.c -o c_code/4_2/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_passes.c -o c_code/4_2/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_magicsys.c -o c_code/4_2/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_magicsys.c -o c_code/4_2/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_nimsets.c -o c_code/4_2/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_nimsets.c -o c_code/4_2/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_bitsets.c -o c_code/4_2/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_bitsets.c -o c_code/4_2/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_importer.c -o c_code/4_2/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_importer.c -o c_code/4_2/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_lookups.c -o c_code/4_2/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_lookups.c -o c_code/4_2/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_semdata.c -o c_code/4_2/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_semdata.c -o c_code/4_2/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_treetab.c -o c_code/4_2/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_treetab.c -o c_code/4_2/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_vmdef.c -o c_code/4_2/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_vmdef.c -o c_code/4_2/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_prettybase.c -o c_code/4_2/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_prettybase.c -o c_code/4_2/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_lexbase.c -o c_code/4_2/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_lexbase.c -o c_code/4_2/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_sem.c -o c_code/4_2/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_sem.c -o c_code/4_2/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_semfold.c -o c_code/4_2/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_semfold.c -o c_code/4_2/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_saturate.c -o c_code/4_2/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_saturate.c -o c_code/4_2/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_procfind.c -o c_code/4_2/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_procfind.c -o c_code/4_2/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_pragmas.c -o c_code/4_2/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_pragmas.c -o c_code/4_2/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_semtypinst.c -o c_code/4_2/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_semtypinst.c -o c_code/4_2/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_sigmatch.c -o c_code/4_2/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_sigmatch.c -o c_code/4_2/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_parampatterns.c -o c_code/4_2/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_parampatterns.c -o c_code/4_2/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_pretty.c -o c_code/4_2/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_pretty.c -o c_code/4_2/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_docgen.c -o c_code/4_2/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_docgen.c -o c_code/4_2/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/docutils_rstast.c -o c_code/4_2/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/docutils_rstast.c -o c_code/4_2/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_json.c -o c_code/4_2/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_json.c -o c_code/4_2/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_unicode.c -o c_code/4_2/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_unicode.c -o c_code/4_2/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_macros.c -o c_code/4_2/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_macros.c -o c_code/4_2/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/docutils_rst.c -o c_code/4_2/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/docutils_rst.c -o c_code/4_2/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/docutils_rstgen.c -o c_code/4_2/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/docutils_rstgen.c -o c_code/4_2/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/docutils_highlite.c -o c_code/4_2/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/docutils_highlite.c -o c_code/4_2/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_sequtils.c -o c_code/4_2/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_sequtils.c -o c_code/4_2/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_algorithm.c -o c_code/4_2/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_algorithm.c -o c_code/4_2/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_sempass2.c -o c_code/4_2/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_sempass2.c -o c_code/4_2/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_guards.c -o c_code/4_2/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_guards.c -o c_code/4_2/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_xmltree.c -o c_code/4_2/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_xmltree.c -o c_code/4_2/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_cgi.c -o c_code/4_2/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_cgi.c -o c_code/4_2/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_cookies.c -o c_code/4_2/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_cookies.c -o c_code/4_2/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_typesrenderer.c -o c_code/4_2/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_typesrenderer.c -o c_code/4_2/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_transf.c -o c_code/4_2/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_transf.c -o c_code/4_2/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_cgmeth.c -o c_code/4_2/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_cgmeth.c -o c_code/4_2/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_lambdalifting.c -o c_code/4_2/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_lambdalifting.c -o c_code/4_2/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_lowerings.c -o c_code/4_2/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_lowerings.c -o c_code/4_2/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_vm.c -o c_code/4_2/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_vm.c -o c_code/4_2/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_vmgen.c -o c_code/4_2/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_vmgen.c -o c_code/4_2/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_unsigned.c -o c_code/4_2/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_unsigned.c -o c_code/4_2/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_vmdeps.c -o c_code/4_2/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_vmdeps.c -o c_code/4_2/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_vmmarshal.c -o c_code/4_2/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_vmmarshal.c -o c_code/4_2/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_evaltempl.c -o c_code/4_2/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_evaltempl.c -o c_code/4_2/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_aliases.c -o c_code/4_2/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_aliases.c -o c_code/4_2/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_patterns.c -o c_code/4_2/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_patterns.c -o c_code/4_2/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_semmacrosanity.c -o c_code/4_2/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_semmacrosanity.c -o c_code/4_2/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_semparallel.c -o c_code/4_2/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_semparallel.c -o c_code/4_2/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_plugins.c -o c_code/4_2/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_plugins.c -o c_code/4_2/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_active.c -o c_code/4_2/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_active.c -o c_code/4_2/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_locals.c -o c_code/4_2/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_locals.c -o c_code/4_2/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_cgen.c -o c_code/4_2/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_cgen.c -o c_code/4_2/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_ccgutils.c -o c_code/4_2/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_ccgutils.c -o c_code/4_2/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_cgendata.c -o c_code/4_2/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_cgendata.c -o c_code/4_2/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_ccgmerge.c -o c_code/4_2/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_ccgmerge.c -o c_code/4_2/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_jsgen.c -o c_code/4_2/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_jsgen.c -o c_code/4_2/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_passaux.c -o c_code/4_2/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_passaux.c -o c_code/4_2/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_depends.c -o c_code/4_2/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_depends.c -o c_code/4_2/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_docgen2.c -o c_code/4_2/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_docgen2.c -o c_code/4_2/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_service.c -o c_code/4_2/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_service.c -o c_code/4_2/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_net.c -o c_code/4_2/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_net.c -o c_code/4_2/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_rawsockets.c -o c_code/4_2/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/stdlib_rawsockets.c -o c_code/4_2/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_modules.c -o c_code/4_2/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_modules.c -o c_code/4_2/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_nodejs.c -o c_code/4_2/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_2/nimsrc_nodejs.c -o c_code/4_2/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/4_2/nimsrc_nim.o \
c_code/4_2/stdlib_system.o \
c_code/4_2/nimsrc_testability.o \
c_code/4_2/nimsrc_commands.o \
c_code/4_2/stdlib_os.o \
c_code/4_2/stdlib_strutils.o \
c_code/4_2/stdlib_parseutils.o \
c_code/4_2/stdlib_times.o \
c_code/4_2/stdlib_posix.o \
c_code/4_2/nimsrc_msgs.o \
c_code/4_2/nimsrc_options.o \
c_code/4_2/nimsrc_lists.o \
c_code/4_2/stdlib_strtabs.o \
c_code/4_2/stdlib_hashes.o \
c_code/4_2/stdlib_osproc.o \
c_code/4_2/stdlib_streams.o \
c_code/4_2/stdlib_cpuinfo.o \
c_code/4_2/stdlib_sets.o \
c_code/4_2/stdlib_math.o \
c_code/4_2/stdlib_tables.o \
c_code/4_2/nimsrc_ropes.o \
c_code/4_2/nimsrc_platform.o \
c_code/4_2/nimsrc_nversion.o \
c_code/4_2/nimsrc_condsyms.o \
c_code/4_2/nimsrc_idents.o \
c_code/4_2/nimsrc_extccomp.o \
c_code/4_2/nimsrc_crc.o \
c_code/4_2/nimsrc_wordrecg.o \
c_code/4_2/nimsrc_nimblecmd.o \
c_code/4_2/stdlib_parseopt.o \
c_code/4_2/nimsrc_lexer.o \
c_code/4_2/nimsrc_nimlexbase.o \
c_code/4_2/nimsrc_llstream.o \
c_code/4_2/nimsrc_nimconf.o \
c_code/4_2/nimsrc_main.o \
c_code/4_2/nimsrc_ast.o \
c_code/4_2/stdlib_intsets.o \
c_code/4_2/nimsrc_idgen.o \
c_code/4_2/nimsrc_astalgo.o \
c_code/4_2/nimsrc_rodutils.o \
c_code/4_2/nimsrc_syntaxes.o \
c_code/4_2/nimsrc_parser.o \
c_code/4_2/nimsrc_pbraces.o \
c_code/4_2/nimsrc_filters.o \
c_code/4_2/nimsrc_renderer.o \
c_code/4_2/nimsrc_filter_tmpl.o \
c_code/4_2/nimsrc_rodread.o \
c_code/4_2/nimsrc_types.o \
c_code/4_2/nimsrc_trees.o \
c_code/4_2/stdlib_memfiles.o \
c_code/4_2/nimsrc_rodwrite.o \
c_code/4_2/nimsrc_passes.o \
c_code/4_2/nimsrc_magicsys.o \
c_code/4_2/nimsrc_nimsets.o \
c_code/4_2/nimsrc_bitsets.o \
c_code/4_2/nimsrc_importer.o \
c_code/4_2/nimsrc_lookups.o \
c_code/4_2/nimsrc_semdata.o \
c_code/4_2/nimsrc_treetab.o \
c_code/4_2/nimsrc_vmdef.o \
c_code/4_2/nimsrc_prettybase.o \
c_code/4_2/stdlib_lexbase.o \
c_code/4_2/nimsrc_sem.o \
c_code/4_2/nimsrc_semfold.o \
c_code/4_2/nimsrc_saturate.o \
c_code/4_2/nimsrc_procfind.o \
c_code/4_2/nimsrc_pragmas.o \
c_code/4_2/nimsrc_semtypinst.o \
c_code/4_2/nimsrc_sigmatch.o \
c_code/4_2/nimsrc_parampatterns.o \
c_code/4_2/nimsrc_pretty.o \
c_code/4_2/nimsrc_docgen.o \
c_code/4_2/docutils_rstast.o \
c_code/4_2/stdlib_json.o \
c_code/4_2/stdlib_unicode.o \
c_code/4_2/stdlib_macros.o \
c_code/4_2/docutils_rst.o \
c_code/4_2/docutils_rstgen.o \
c_code/4_2/docutils_highlite.o \
c_code/4_2/stdlib_sequtils.o \
c_code/4_2/stdlib_algorithm.o \
c_code/4_2/nimsrc_sempass2.o \
c_code/4_2/nimsrc_guards.o \
c_code/4_2/stdlib_xmltree.o \
c_code/4_2/stdlib_cgi.o \
c_code/4_2/stdlib_cookies.o \
c_code/4_2/nimsrc_typesrenderer.o \
c_code/4_2/nimsrc_transf.o \
c_code/4_2/nimsrc_cgmeth.o \
c_code/4_2/nimsrc_lambdalifting.o \
c_code/4_2/nimsrc_lowerings.o \
c_code/4_2/nimsrc_vm.o \
c_code/4_2/nimsrc_vmgen.o \
c_code/4_2/stdlib_unsigned.o \
c_code/4_2/nimsrc_vmdeps.o \
c_code/4_2/nimsrc_vmmarshal.o \
c_code/4_2/nimsrc_evaltempl.o \
c_code/4_2/nimsrc_aliases.o \
c_code/4_2/nimsrc_patterns.o \
c_code/4_2/nimsrc_semmacrosanity.o \
c_code/4_2/nimsrc_semparallel.o \
c_code/4_2/nimsrc_plugins.o \
c_code/4_2/nimsrc_active.o \
c_code/4_2/nimsrc_locals.o \
c_code/4_2/nimsrc_cgen.o \
c_code/4_2/nimsrc_ccgutils.o \
c_code/4_2/nimsrc_cgendata.o \
c_code/4_2/nimsrc_ccgmerge.o \
c_code/4_2/nimsrc_jsgen.o \
c_code/4_2/nimsrc_passaux.o \
c_code/4_2/nimsrc_depends.o \
c_code/4_2/nimsrc_docgen2.o \
c_code/4_2/nimsrc_service.o \
c_code/4_2/stdlib_net.o \
c_code/4_2/stdlib_rawsockets.o \
c_code/4_2/nimsrc_modules.o \
c_code/4_2/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/4_2/nimsrc_nim.o \
c_code/4_2/stdlib_system.o \
c_code/4_2/nimsrc_testability.o \
c_code/4_2/nimsrc_commands.o \
c_code/4_2/stdlib_os.o \
c_code/4_2/stdlib_strutils.o \
c_code/4_2/stdlib_parseutils.o \
c_code/4_2/stdlib_times.o \
c_code/4_2/stdlib_posix.o \
c_code/4_2/nimsrc_msgs.o \
c_code/4_2/nimsrc_options.o \
c_code/4_2/nimsrc_lists.o \
c_code/4_2/stdlib_strtabs.o \
c_code/4_2/stdlib_hashes.o \
c_code/4_2/stdlib_osproc.o \
c_code/4_2/stdlib_streams.o \
c_code/4_2/stdlib_cpuinfo.o \
c_code/4_2/stdlib_sets.o \
c_code/4_2/stdlib_math.o \
c_code/4_2/stdlib_tables.o \
c_code/4_2/nimsrc_ropes.o \
c_code/4_2/nimsrc_platform.o \
c_code/4_2/nimsrc_nversion.o \
c_code/4_2/nimsrc_condsyms.o \
c_code/4_2/nimsrc_idents.o \
c_code/4_2/nimsrc_extccomp.o \
c_code/4_2/nimsrc_crc.o \
c_code/4_2/nimsrc_wordrecg.o \
c_code/4_2/nimsrc_nimblecmd.o \
c_code/4_2/stdlib_parseopt.o \
c_code/4_2/nimsrc_lexer.o \
c_code/4_2/nimsrc_nimlexbase.o \
c_code/4_2/nimsrc_llstream.o \
c_code/4_2/nimsrc_nimconf.o \
c_code/4_2/nimsrc_main.o \
c_code/4_2/nimsrc_ast.o \
c_code/4_2/stdlib_intsets.o \
c_code/4_2/nimsrc_idgen.o \
c_code/4_2/nimsrc_astalgo.o \
c_code/4_2/nimsrc_rodutils.o \
c_code/4_2/nimsrc_syntaxes.o \
c_code/4_2/nimsrc_parser.o \
c_code/4_2/nimsrc_pbraces.o \
c_code/4_2/nimsrc_filters.o \
c_code/4_2/nimsrc_renderer.o \
c_code/4_2/nimsrc_filter_tmpl.o \
c_code/4_2/nimsrc_rodread.o \
c_code/4_2/nimsrc_types.o \
c_code/4_2/nimsrc_trees.o \
c_code/4_2/stdlib_memfiles.o \
c_code/4_2/nimsrc_rodwrite.o \
c_code/4_2/nimsrc_passes.o \
c_code/4_2/nimsrc_magicsys.o \
c_code/4_2/nimsrc_nimsets.o \
c_code/4_2/nimsrc_bitsets.o \
c_code/4_2/nimsrc_importer.o \
c_code/4_2/nimsrc_lookups.o \
c_code/4_2/nimsrc_semdata.o \
c_code/4_2/nimsrc_treetab.o \
c_code/4_2/nimsrc_vmdef.o \
c_code/4_2/nimsrc_prettybase.o \
c_code/4_2/stdlib_lexbase.o \
c_code/4_2/nimsrc_sem.o \
c_code/4_2/nimsrc_semfold.o \
c_code/4_2/nimsrc_saturate.o \
c_code/4_2/nimsrc_procfind.o \
c_code/4_2/nimsrc_pragmas.o \
c_code/4_2/nimsrc_semtypinst.o \
c_code/4_2/nimsrc_sigmatch.o \
c_code/4_2/nimsrc_parampatterns.o \
c_code/4_2/nimsrc_pretty.o \
c_code/4_2/nimsrc_docgen.o \
c_code/4_2/docutils_rstast.o \
c_code/4_2/stdlib_json.o \
c_code/4_2/stdlib_unicode.o \
c_code/4_2/stdlib_macros.o \
c_code/4_2/docutils_rst.o \
c_code/4_2/docutils_rstgen.o \
c_code/4_2/docutils_highlite.o \
c_code/4_2/stdlib_sequtils.o \
c_code/4_2/stdlib_algorithm.o \
c_code/4_2/nimsrc_sempass2.o \
c_code/4_2/nimsrc_guards.o \
c_code/4_2/stdlib_xmltree.o \
c_code/4_2/stdlib_cgi.o \
c_code/4_2/stdlib_cookies.o \
c_code/4_2/nimsrc_typesrenderer.o \
c_code/4_2/nimsrc_transf.o \
c_code/4_2/nimsrc_cgmeth.o \
c_code/4_2/nimsrc_lambdalifting.o \
c_code/4_2/nimsrc_lowerings.o \
c_code/4_2/nimsrc_vm.o \
c_code/4_2/nimsrc_vmgen.o \
c_code/4_2/stdlib_unsigned.o \
c_code/4_2/nimsrc_vmdeps.o \
c_code/4_2/nimsrc_vmmarshal.o \
c_code/4_2/nimsrc_evaltempl.o \
c_code/4_2/nimsrc_aliases.o \
c_code/4_2/nimsrc_patterns.o \
c_code/4_2/nimsrc_semmacrosanity.o \
c_code/4_2/nimsrc_semparallel.o \
c_code/4_2/nimsrc_plugins.o \
c_code/4_2/nimsrc_active.o \
c_code/4_2/nimsrc_locals.o \
c_code/4_2/nimsrc_cgen.o \
c_code/4_2/nimsrc_ccgutils.o \
c_code/4_2/nimsrc_cgendata.o \
c_code/4_2/nimsrc_ccgmerge.o \
c_code/4_2/nimsrc_jsgen.o \
c_code/4_2/nimsrc_passaux.o \
c_code/4_2/nimsrc_depends.o \
c_code/4_2/nimsrc_docgen2.o \
c_code/4_2/nimsrc_service.o \
c_code/4_2/stdlib_net.o \
c_code/4_2/stdlib_rawsockets.o \
c_code/4_2/nimsrc_modules.o \
c_code/4_2/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  powerpc64)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  arm)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  sparc)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_nim.c -o c_code/4_5/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_nim.c -o c_code/4_5/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_system.c -o c_code/4_5/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_system.c -o c_code/4_5/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_testability.c -o c_code/4_5/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_testability.c -o c_code/4_5/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_commands.c -o c_code/4_5/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_commands.c -o c_code/4_5/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_os.c -o c_code/4_5/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_os.c -o c_code/4_5/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_strutils.c -o c_code/4_5/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_strutils.c -o c_code/4_5/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_parseutils.c -o c_code/4_5/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_parseutils.c -o c_code/4_5/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_times.c -o c_code/4_5/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_times.c -o c_code/4_5/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_posix.c -o c_code/4_5/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_posix.c -o c_code/4_5/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_msgs.c -o c_code/4_5/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_msgs.c -o c_code/4_5/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_options.c -o c_code/4_5/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_options.c -o c_code/4_5/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_lists.c -o c_code/4_5/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_lists.c -o c_code/4_5/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_strtabs.c -o c_code/4_5/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_strtabs.c -o c_code/4_5/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_hashes.c -o c_code/4_5/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_hashes.c -o c_code/4_5/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_osproc.c -o c_code/4_5/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_osproc.c -o c_code/4_5/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_streams.c -o c_code/4_5/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_streams.c -o c_code/4_5/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_cpuinfo.c -o c_code/4_5/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_cpuinfo.c -o c_code/4_5/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_sets.c -o c_code/4_5/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_sets.c -o c_code/4_5/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_math.c -o c_code/4_5/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_math.c -o c_code/4_5/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_tables.c -o c_code/4_5/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_tables.c -o c_code/4_5/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_ropes.c -o c_code/4_5/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_ropes.c -o c_code/4_5/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_platform.c -o c_code/4_5/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_platform.c -o c_code/4_5/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_nversion.c -o c_code/4_5/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_nversion.c -o c_code/4_5/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_condsyms.c -o c_code/4_5/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_condsyms.c -o c_code/4_5/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_idents.c -o c_code/4_5/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_idents.c -o c_code/4_5/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_extccomp.c -o c_code/4_5/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_extccomp.c -o c_code/4_5/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_crc.c -o c_code/4_5/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_crc.c -o c_code/4_5/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_wordrecg.c -o c_code/4_5/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_wordrecg.c -o c_code/4_5/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_nimblecmd.c -o c_code/4_5/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_nimblecmd.c -o c_code/4_5/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_parseopt.c -o c_code/4_5/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_parseopt.c -o c_code/4_5/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_lexer.c -o c_code/4_5/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_lexer.c -o c_code/4_5/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_nimlexbase.c -o c_code/4_5/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_nimlexbase.c -o c_code/4_5/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_llstream.c -o c_code/4_5/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_llstream.c -o c_code/4_5/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_nimconf.c -o c_code/4_5/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_nimconf.c -o c_code/4_5/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_main.c -o c_code/4_5/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_main.c -o c_code/4_5/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_ast.c -o c_code/4_5/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_ast.c -o c_code/4_5/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_intsets.c -o c_code/4_5/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_intsets.c -o c_code/4_5/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_idgen.c -o c_code/4_5/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_idgen.c -o c_code/4_5/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_astalgo.c -o c_code/4_5/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_astalgo.c -o c_code/4_5/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_rodutils.c -o c_code/4_5/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_rodutils.c -o c_code/4_5/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_syntaxes.c -o c_code/4_5/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_syntaxes.c -o c_code/4_5/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_parser.c -o c_code/4_5/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_parser.c -o c_code/4_5/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_pbraces.c -o c_code/4_5/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_pbraces.c -o c_code/4_5/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_filters.c -o c_code/4_5/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_filters.c -o c_code/4_5/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_renderer.c -o c_code/4_5/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_renderer.c -o c_code/4_5/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_filter_tmpl.c -o c_code/4_5/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_filter_tmpl.c -o c_code/4_5/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_rodread.c -o c_code/4_5/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_rodread.c -o c_code/4_5/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_types.c -o c_code/4_5/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_types.c -o c_code/4_5/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_trees.c -o c_code/4_5/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_trees.c -o c_code/4_5/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_memfiles.c -o c_code/4_5/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_memfiles.c -o c_code/4_5/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_rodwrite.c -o c_code/4_5/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_rodwrite.c -o c_code/4_5/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_passes.c -o c_code/4_5/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_passes.c -o c_code/4_5/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_magicsys.c -o c_code/4_5/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_magicsys.c -o c_code/4_5/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_nimsets.c -o c_code/4_5/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_nimsets.c -o c_code/4_5/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_bitsets.c -o c_code/4_5/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_bitsets.c -o c_code/4_5/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_importer.c -o c_code/4_5/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_importer.c -o c_code/4_5/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_lookups.c -o c_code/4_5/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_lookups.c -o c_code/4_5/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_semdata.c -o c_code/4_5/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_semdata.c -o c_code/4_5/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_treetab.c -o c_code/4_5/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_treetab.c -o c_code/4_5/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_vmdef.c -o c_code/4_5/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_vmdef.c -o c_code/4_5/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_prettybase.c -o c_code/4_5/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_prettybase.c -o c_code/4_5/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_lexbase.c -o c_code/4_5/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_lexbase.c -o c_code/4_5/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_sem.c -o c_code/4_5/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_sem.c -o c_code/4_5/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_semfold.c -o c_code/4_5/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_semfold.c -o c_code/4_5/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_saturate.c -o c_code/4_5/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_saturate.c -o c_code/4_5/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_procfind.c -o c_code/4_5/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_procfind.c -o c_code/4_5/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_pragmas.c -o c_code/4_5/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_pragmas.c -o c_code/4_5/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_semtypinst.c -o c_code/4_5/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_semtypinst.c -o c_code/4_5/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_sigmatch.c -o c_code/4_5/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_sigmatch.c -o c_code/4_5/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_parampatterns.c -o c_code/4_5/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_parampatterns.c -o c_code/4_5/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_pretty.c -o c_code/4_5/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_pretty.c -o c_code/4_5/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_docgen.c -o c_code/4_5/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_docgen.c -o c_code/4_5/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/docutils_rstast.c -o c_code/4_5/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/docutils_rstast.c -o c_code/4_5/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_json.c -o c_code/4_5/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_json.c -o c_code/4_5/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_unicode.c -o c_code/4_5/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_unicode.c -o c_code/4_5/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_macros.c -o c_code/4_5/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_macros.c -o c_code/4_5/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/docutils_rst.c -o c_code/4_5/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/docutils_rst.c -o c_code/4_5/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/docutils_rstgen.c -o c_code/4_5/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/docutils_rstgen.c -o c_code/4_5/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/docutils_highlite.c -o c_code/4_5/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/docutils_highlite.c -o c_code/4_5/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_sequtils.c -o c_code/4_5/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_sequtils.c -o c_code/4_5/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_algorithm.c -o c_code/4_5/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_algorithm.c -o c_code/4_5/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_sempass2.c -o c_code/4_5/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_sempass2.c -o c_code/4_5/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_guards.c -o c_code/4_5/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_guards.c -o c_code/4_5/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_xmltree.c -o c_code/4_5/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_xmltree.c -o c_code/4_5/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_cgi.c -o c_code/4_5/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_cgi.c -o c_code/4_5/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_cookies.c -o c_code/4_5/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_cookies.c -o c_code/4_5/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_typesrenderer.c -o c_code/4_5/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_typesrenderer.c -o c_code/4_5/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_transf.c -o c_code/4_5/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_transf.c -o c_code/4_5/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_cgmeth.c -o c_code/4_5/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_cgmeth.c -o c_code/4_5/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_lambdalifting.c -o c_code/4_5/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_lambdalifting.c -o c_code/4_5/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_lowerings.c -o c_code/4_5/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_lowerings.c -o c_code/4_5/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_vm.c -o c_code/4_5/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_vm.c -o c_code/4_5/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_vmgen.c -o c_code/4_5/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_vmgen.c -o c_code/4_5/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_unsigned.c -o c_code/4_5/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_unsigned.c -o c_code/4_5/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_vmdeps.c -o c_code/4_5/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_vmdeps.c -o c_code/4_5/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_vmmarshal.c -o c_code/4_5/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_vmmarshal.c -o c_code/4_5/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_evaltempl.c -o c_code/4_5/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_evaltempl.c -o c_code/4_5/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_aliases.c -o c_code/4_5/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_aliases.c -o c_code/4_5/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_patterns.c -o c_code/4_5/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_patterns.c -o c_code/4_5/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_semmacrosanity.c -o c_code/4_5/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_semmacrosanity.c -o c_code/4_5/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_semparallel.c -o c_code/4_5/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_semparallel.c -o c_code/4_5/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_plugins.c -o c_code/4_5/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_plugins.c -o c_code/4_5/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_active.c -o c_code/4_5/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_active.c -o c_code/4_5/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_locals.c -o c_code/4_5/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_locals.c -o c_code/4_5/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_cgen.c -o c_code/4_5/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_cgen.c -o c_code/4_5/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_ccgutils.c -o c_code/4_5/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_ccgutils.c -o c_code/4_5/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_cgendata.c -o c_code/4_5/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_cgendata.c -o c_code/4_5/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_ccgmerge.c -o c_code/4_5/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_ccgmerge.c -o c_code/4_5/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_jsgen.c -o c_code/4_5/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_jsgen.c -o c_code/4_5/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_passaux.c -o c_code/4_5/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_passaux.c -o c_code/4_5/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_depends.c -o c_code/4_5/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_depends.c -o c_code/4_5/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_docgen2.c -o c_code/4_5/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_docgen2.c -o c_code/4_5/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_service.c -o c_code/4_5/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_service.c -o c_code/4_5/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_net.c -o c_code/4_5/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_net.c -o c_code/4_5/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_rawsockets.c -o c_code/4_5/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/stdlib_rawsockets.c -o c_code/4_5/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_modules.c -o c_code/4_5/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_modules.c -o c_code/4_5/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_nodejs.c -o c_code/4_5/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/4_5/nimsrc_nodejs.c -o c_code/4_5/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/4_5/nimsrc_nim.o \
c_code/4_5/stdlib_system.o \
c_code/4_5/nimsrc_testability.o \
c_code/4_5/nimsrc_commands.o \
c_code/4_5/stdlib_os.o \
c_code/4_5/stdlib_strutils.o \
c_code/4_5/stdlib_parseutils.o \
c_code/4_5/stdlib_times.o \
c_code/4_5/stdlib_posix.o \
c_code/4_5/nimsrc_msgs.o \
c_code/4_5/nimsrc_options.o \
c_code/4_5/nimsrc_lists.o \
c_code/4_5/stdlib_strtabs.o \
c_code/4_5/stdlib_hashes.o \
c_code/4_5/stdlib_osproc.o \
c_code/4_5/stdlib_streams.o \
c_code/4_5/stdlib_cpuinfo.o \
c_code/4_5/stdlib_sets.o \
c_code/4_5/stdlib_math.o \
c_code/4_5/stdlib_tables.o \
c_code/4_5/nimsrc_ropes.o \
c_code/4_5/nimsrc_platform.o \
c_code/4_5/nimsrc_nversion.o \
c_code/4_5/nimsrc_condsyms.o \
c_code/4_5/nimsrc_idents.o \
c_code/4_5/nimsrc_extccomp.o \
c_code/4_5/nimsrc_crc.o \
c_code/4_5/nimsrc_wordrecg.o \
c_code/4_5/nimsrc_nimblecmd.o \
c_code/4_5/stdlib_parseopt.o \
c_code/4_5/nimsrc_lexer.o \
c_code/4_5/nimsrc_nimlexbase.o \
c_code/4_5/nimsrc_llstream.o \
c_code/4_5/nimsrc_nimconf.o \
c_code/4_5/nimsrc_main.o \
c_code/4_5/nimsrc_ast.o \
c_code/4_5/stdlib_intsets.o \
c_code/4_5/nimsrc_idgen.o \
c_code/4_5/nimsrc_astalgo.o \
c_code/4_5/nimsrc_rodutils.o \
c_code/4_5/nimsrc_syntaxes.o \
c_code/4_5/nimsrc_parser.o \
c_code/4_5/nimsrc_pbraces.o \
c_code/4_5/nimsrc_filters.o \
c_code/4_5/nimsrc_renderer.o \
c_code/4_5/nimsrc_filter_tmpl.o \
c_code/4_5/nimsrc_rodread.o \
c_code/4_5/nimsrc_types.o \
c_code/4_5/nimsrc_trees.o \
c_code/4_5/stdlib_memfiles.o \
c_code/4_5/nimsrc_rodwrite.o \
c_code/4_5/nimsrc_passes.o \
c_code/4_5/nimsrc_magicsys.o \
c_code/4_5/nimsrc_nimsets.o \
c_code/4_5/nimsrc_bitsets.o \
c_code/4_5/nimsrc_importer.o \
c_code/4_5/nimsrc_lookups.o \
c_code/4_5/nimsrc_semdata.o \
c_code/4_5/nimsrc_treetab.o \
c_code/4_5/nimsrc_vmdef.o \
c_code/4_5/nimsrc_prettybase.o \
c_code/4_5/stdlib_lexbase.o \
c_code/4_5/nimsrc_sem.o \
c_code/4_5/nimsrc_semfold.o \
c_code/4_5/nimsrc_saturate.o \
c_code/4_5/nimsrc_procfind.o \
c_code/4_5/nimsrc_pragmas.o \
c_code/4_5/nimsrc_semtypinst.o \
c_code/4_5/nimsrc_sigmatch.o \
c_code/4_5/nimsrc_parampatterns.o \
c_code/4_5/nimsrc_pretty.o \
c_code/4_5/nimsrc_docgen.o \
c_code/4_5/docutils_rstast.o \
c_code/4_5/stdlib_json.o \
c_code/4_5/stdlib_unicode.o \
c_code/4_5/stdlib_macros.o \
c_code/4_5/docutils_rst.o \
c_code/4_5/docutils_rstgen.o \
c_code/4_5/docutils_highlite.o \
c_code/4_5/stdlib_sequtils.o \
c_code/4_5/stdlib_algorithm.o \
c_code/4_5/nimsrc_sempass2.o \
c_code/4_5/nimsrc_guards.o \
c_code/4_5/stdlib_xmltree.o \
c_code/4_5/stdlib_cgi.o \
c_code/4_5/stdlib_cookies.o \
c_code/4_5/nimsrc_typesrenderer.o \
c_code/4_5/nimsrc_transf.o \
c_code/4_5/nimsrc_cgmeth.o \
c_code/4_5/nimsrc_lambdalifting.o \
c_code/4_5/nimsrc_lowerings.o \
c_code/4_5/nimsrc_vm.o \
c_code/4_5/nimsrc_vmgen.o \
c_code/4_5/stdlib_unsigned.o \
c_code/4_5/nimsrc_vmdeps.o \
c_code/4_5/nimsrc_vmmarshal.o \
c_code/4_5/nimsrc_evaltempl.o \
c_code/4_5/nimsrc_aliases.o \
c_code/4_5/nimsrc_patterns.o \
c_code/4_5/nimsrc_semmacrosanity.o \
c_code/4_5/nimsrc_semparallel.o \
c_code/4_5/nimsrc_plugins.o \
c_code/4_5/nimsrc_active.o \
c_code/4_5/nimsrc_locals.o \
c_code/4_5/nimsrc_cgen.o \
c_code/4_5/nimsrc_ccgutils.o \
c_code/4_5/nimsrc_cgendata.o \
c_code/4_5/nimsrc_ccgmerge.o \
c_code/4_5/nimsrc_jsgen.o \
c_code/4_5/nimsrc_passaux.o \
c_code/4_5/nimsrc_depends.o \
c_code/4_5/nimsrc_docgen2.o \
c_code/4_5/nimsrc_service.o \
c_code/4_5/stdlib_net.o \
c_code/4_5/stdlib_rawsockets.o \
c_code/4_5/nimsrc_modules.o \
c_code/4_5/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/4_5/nimsrc_nim.o \
c_code/4_5/stdlib_system.o \
c_code/4_5/nimsrc_testability.o \
c_code/4_5/nimsrc_commands.o \
c_code/4_5/stdlib_os.o \
c_code/4_5/stdlib_strutils.o \
c_code/4_5/stdlib_parseutils.o \
c_code/4_5/stdlib_times.o \
c_code/4_5/stdlib_posix.o \
c_code/4_5/nimsrc_msgs.o \
c_code/4_5/nimsrc_options.o \
c_code/4_5/nimsrc_lists.o \
c_code/4_5/stdlib_strtabs.o \
c_code/4_5/stdlib_hashes.o \
c_code/4_5/stdlib_osproc.o \
c_code/4_5/stdlib_streams.o \
c_code/4_5/stdlib_cpuinfo.o \
c_code/4_5/stdlib_sets.o \
c_code/4_5/stdlib_math.o \
c_code/4_5/stdlib_tables.o \
c_code/4_5/nimsrc_ropes.o \
c_code/4_5/nimsrc_platform.o \
c_code/4_5/nimsrc_nversion.o \
c_code/4_5/nimsrc_condsyms.o \
c_code/4_5/nimsrc_idents.o \
c_code/4_5/nimsrc_extccomp.o \
c_code/4_5/nimsrc_crc.o \
c_code/4_5/nimsrc_wordrecg.o \
c_code/4_5/nimsrc_nimblecmd.o \
c_code/4_5/stdlib_parseopt.o \
c_code/4_5/nimsrc_lexer.o \
c_code/4_5/nimsrc_nimlexbase.o \
c_code/4_5/nimsrc_llstream.o \
c_code/4_5/nimsrc_nimconf.o \
c_code/4_5/nimsrc_main.o \
c_code/4_5/nimsrc_ast.o \
c_code/4_5/stdlib_intsets.o \
c_code/4_5/nimsrc_idgen.o \
c_code/4_5/nimsrc_astalgo.o \
c_code/4_5/nimsrc_rodutils.o \
c_code/4_5/nimsrc_syntaxes.o \
c_code/4_5/nimsrc_parser.o \
c_code/4_5/nimsrc_pbraces.o \
c_code/4_5/nimsrc_filters.o \
c_code/4_5/nimsrc_renderer.o \
c_code/4_5/nimsrc_filter_tmpl.o \
c_code/4_5/nimsrc_rodread.o \
c_code/4_5/nimsrc_types.o \
c_code/4_5/nimsrc_trees.o \
c_code/4_5/stdlib_memfiles.o \
c_code/4_5/nimsrc_rodwrite.o \
c_code/4_5/nimsrc_passes.o \
c_code/4_5/nimsrc_magicsys.o \
c_code/4_5/nimsrc_nimsets.o \
c_code/4_5/nimsrc_bitsets.o \
c_code/4_5/nimsrc_importer.o \
c_code/4_5/nimsrc_lookups.o \
c_code/4_5/nimsrc_semdata.o \
c_code/4_5/nimsrc_treetab.o \
c_code/4_5/nimsrc_vmdef.o \
c_code/4_5/nimsrc_prettybase.o \
c_code/4_5/stdlib_lexbase.o \
c_code/4_5/nimsrc_sem.o \
c_code/4_5/nimsrc_semfold.o \
c_code/4_5/nimsrc_saturate.o \
c_code/4_5/nimsrc_procfind.o \
c_code/4_5/nimsrc_pragmas.o \
c_code/4_5/nimsrc_semtypinst.o \
c_code/4_5/nimsrc_sigmatch.o \
c_code/4_5/nimsrc_parampatterns.o \
c_code/4_5/nimsrc_pretty.o \
c_code/4_5/nimsrc_docgen.o \
c_code/4_5/docutils_rstast.o \
c_code/4_5/stdlib_json.o \
c_code/4_5/stdlib_unicode.o \
c_code/4_5/stdlib_macros.o \
c_code/4_5/docutils_rst.o \
c_code/4_5/docutils_rstgen.o \
c_code/4_5/docutils_highlite.o \
c_code/4_5/stdlib_sequtils.o \
c_code/4_5/stdlib_algorithm.o \
c_code/4_5/nimsrc_sempass2.o \
c_code/4_5/nimsrc_guards.o \
c_code/4_5/stdlib_xmltree.o \
c_code/4_5/stdlib_cgi.o \
c_code/4_5/stdlib_cookies.o \
c_code/4_5/nimsrc_typesrenderer.o \
c_code/4_5/nimsrc_transf.o \
c_code/4_5/nimsrc_cgmeth.o \
c_code/4_5/nimsrc_lambdalifting.o \
c_code/4_5/nimsrc_lowerings.o \
c_code/4_5/nimsrc_vm.o \
c_code/4_5/nimsrc_vmgen.o \
c_code/4_5/stdlib_unsigned.o \
c_code/4_5/nimsrc_vmdeps.o \
c_code/4_5/nimsrc_vmmarshal.o \
c_code/4_5/nimsrc_evaltempl.o \
c_code/4_5/nimsrc_aliases.o \
c_code/4_5/nimsrc_patterns.o \
c_code/4_5/nimsrc_semmacrosanity.o \
c_code/4_5/nimsrc_semparallel.o \
c_code/4_5/nimsrc_plugins.o \
c_code/4_5/nimsrc_active.o \
c_code/4_5/nimsrc_locals.o \
c_code/4_5/nimsrc_cgen.o \
c_code/4_5/nimsrc_ccgutils.o \
c_code/4_5/nimsrc_cgendata.o \
c_code/4_5/nimsrc_ccgmerge.o \
c_code/4_5/nimsrc_jsgen.o \
c_code/4_5/nimsrc_passaux.o \
c_code/4_5/nimsrc_depends.o \
c_code/4_5/nimsrc_docgen2.o \
c_code/4_5/nimsrc_service.o \
c_code/4_5/stdlib_net.o \
c_code/4_5/stdlib_rawsockets.o \
c_code/4_5/nimsrc_modules.o \
c_code/4_5/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  mips)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  powerpc)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  *)
    echo "Error: no C code generated for: [$myos: $mycpu]"
    exit 1
    ;;
  esac
  ;;
freebsd) 
  case $mycpu in
  i386)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_nim.c -o c_code/5_1/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_nim.c -o c_code/5_1/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_system.c -o c_code/5_1/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_system.c -o c_code/5_1/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_testability.c -o c_code/5_1/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_testability.c -o c_code/5_1/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_commands.c -o c_code/5_1/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_commands.c -o c_code/5_1/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_os.c -o c_code/5_1/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_os.c -o c_code/5_1/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_strutils.c -o c_code/5_1/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_strutils.c -o c_code/5_1/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_parseutils.c -o c_code/5_1/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_parseutils.c -o c_code/5_1/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_times.c -o c_code/5_1/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_times.c -o c_code/5_1/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_posix.c -o c_code/5_1/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_posix.c -o c_code/5_1/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_msgs.c -o c_code/5_1/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_msgs.c -o c_code/5_1/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_options.c -o c_code/5_1/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_options.c -o c_code/5_1/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_lists.c -o c_code/5_1/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_lists.c -o c_code/5_1/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_strtabs.c -o c_code/5_1/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_strtabs.c -o c_code/5_1/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_hashes.c -o c_code/5_1/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_hashes.c -o c_code/5_1/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_osproc.c -o c_code/5_1/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_osproc.c -o c_code/5_1/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_streams.c -o c_code/5_1/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_streams.c -o c_code/5_1/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_cpuinfo.c -o c_code/5_1/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_cpuinfo.c -o c_code/5_1/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_sets.c -o c_code/5_1/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_sets.c -o c_code/5_1/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_math.c -o c_code/5_1/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_math.c -o c_code/5_1/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_tables.c -o c_code/5_1/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_tables.c -o c_code/5_1/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_ropes.c -o c_code/5_1/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_ropes.c -o c_code/5_1/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_platform.c -o c_code/5_1/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_platform.c -o c_code/5_1/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_nversion.c -o c_code/5_1/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_nversion.c -o c_code/5_1/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_condsyms.c -o c_code/5_1/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_condsyms.c -o c_code/5_1/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_idents.c -o c_code/5_1/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_idents.c -o c_code/5_1/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_extccomp.c -o c_code/5_1/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_extccomp.c -o c_code/5_1/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_crc.c -o c_code/5_1/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_crc.c -o c_code/5_1/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_wordrecg.c -o c_code/5_1/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_wordrecg.c -o c_code/5_1/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_nimblecmd.c -o c_code/5_1/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_nimblecmd.c -o c_code/5_1/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_parseopt.c -o c_code/5_1/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_parseopt.c -o c_code/5_1/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_lexer.c -o c_code/5_1/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_lexer.c -o c_code/5_1/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_nimlexbase.c -o c_code/5_1/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_nimlexbase.c -o c_code/5_1/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_llstream.c -o c_code/5_1/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_llstream.c -o c_code/5_1/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_nimconf.c -o c_code/5_1/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_nimconf.c -o c_code/5_1/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_main.c -o c_code/5_1/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_main.c -o c_code/5_1/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_ast.c -o c_code/5_1/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_ast.c -o c_code/5_1/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_intsets.c -o c_code/5_1/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_intsets.c -o c_code/5_1/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_idgen.c -o c_code/5_1/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_idgen.c -o c_code/5_1/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_astalgo.c -o c_code/5_1/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_astalgo.c -o c_code/5_1/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_rodutils.c -o c_code/5_1/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_rodutils.c -o c_code/5_1/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_syntaxes.c -o c_code/5_1/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_syntaxes.c -o c_code/5_1/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_parser.c -o c_code/5_1/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_parser.c -o c_code/5_1/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_pbraces.c -o c_code/5_1/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_pbraces.c -o c_code/5_1/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_filters.c -o c_code/5_1/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_filters.c -o c_code/5_1/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_renderer.c -o c_code/5_1/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_renderer.c -o c_code/5_1/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_filter_tmpl.c -o c_code/5_1/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_filter_tmpl.c -o c_code/5_1/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_rodread.c -o c_code/5_1/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_rodread.c -o c_code/5_1/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_types.c -o c_code/5_1/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_types.c -o c_code/5_1/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_trees.c -o c_code/5_1/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_trees.c -o c_code/5_1/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_memfiles.c -o c_code/5_1/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_memfiles.c -o c_code/5_1/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_rodwrite.c -o c_code/5_1/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_rodwrite.c -o c_code/5_1/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_passes.c -o c_code/5_1/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_passes.c -o c_code/5_1/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_magicsys.c -o c_code/5_1/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_magicsys.c -o c_code/5_1/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_nimsets.c -o c_code/5_1/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_nimsets.c -o c_code/5_1/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_bitsets.c -o c_code/5_1/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_bitsets.c -o c_code/5_1/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_importer.c -o c_code/5_1/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_importer.c -o c_code/5_1/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_lookups.c -o c_code/5_1/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_lookups.c -o c_code/5_1/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_semdata.c -o c_code/5_1/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_semdata.c -o c_code/5_1/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_treetab.c -o c_code/5_1/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_treetab.c -o c_code/5_1/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_vmdef.c -o c_code/5_1/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_vmdef.c -o c_code/5_1/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_prettybase.c -o c_code/5_1/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_prettybase.c -o c_code/5_1/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_lexbase.c -o c_code/5_1/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_lexbase.c -o c_code/5_1/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_sem.c -o c_code/5_1/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_sem.c -o c_code/5_1/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_semfold.c -o c_code/5_1/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_semfold.c -o c_code/5_1/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_saturate.c -o c_code/5_1/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_saturate.c -o c_code/5_1/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_procfind.c -o c_code/5_1/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_procfind.c -o c_code/5_1/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_pragmas.c -o c_code/5_1/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_pragmas.c -o c_code/5_1/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_semtypinst.c -o c_code/5_1/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_semtypinst.c -o c_code/5_1/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_sigmatch.c -o c_code/5_1/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_sigmatch.c -o c_code/5_1/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_parampatterns.c -o c_code/5_1/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_parampatterns.c -o c_code/5_1/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_pretty.c -o c_code/5_1/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_pretty.c -o c_code/5_1/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_docgen.c -o c_code/5_1/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_docgen.c -o c_code/5_1/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/docutils_rstast.c -o c_code/5_1/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/docutils_rstast.c -o c_code/5_1/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_json.c -o c_code/5_1/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_json.c -o c_code/5_1/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_unicode.c -o c_code/5_1/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_unicode.c -o c_code/5_1/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_macros.c -o c_code/5_1/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_macros.c -o c_code/5_1/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/docutils_rst.c -o c_code/5_1/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/docutils_rst.c -o c_code/5_1/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/docutils_rstgen.c -o c_code/5_1/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/docutils_rstgen.c -o c_code/5_1/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/docutils_highlite.c -o c_code/5_1/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/docutils_highlite.c -o c_code/5_1/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_sequtils.c -o c_code/5_1/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_sequtils.c -o c_code/5_1/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_algorithm.c -o c_code/5_1/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_algorithm.c -o c_code/5_1/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_sempass2.c -o c_code/5_1/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_sempass2.c -o c_code/5_1/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_guards.c -o c_code/5_1/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_guards.c -o c_code/5_1/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_xmltree.c -o c_code/5_1/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_xmltree.c -o c_code/5_1/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_cgi.c -o c_code/5_1/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_cgi.c -o c_code/5_1/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_cookies.c -o c_code/5_1/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_cookies.c -o c_code/5_1/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_typesrenderer.c -o c_code/5_1/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_typesrenderer.c -o c_code/5_1/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_transf.c -o c_code/5_1/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_transf.c -o c_code/5_1/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_cgmeth.c -o c_code/5_1/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_cgmeth.c -o c_code/5_1/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_lambdalifting.c -o c_code/5_1/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_lambdalifting.c -o c_code/5_1/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_lowerings.c -o c_code/5_1/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_lowerings.c -o c_code/5_1/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_vm.c -o c_code/5_1/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_vm.c -o c_code/5_1/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_vmgen.c -o c_code/5_1/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_vmgen.c -o c_code/5_1/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_unsigned.c -o c_code/5_1/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_unsigned.c -o c_code/5_1/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_vmdeps.c -o c_code/5_1/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_vmdeps.c -o c_code/5_1/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_vmmarshal.c -o c_code/5_1/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_vmmarshal.c -o c_code/5_1/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_evaltempl.c -o c_code/5_1/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_evaltempl.c -o c_code/5_1/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_aliases.c -o c_code/5_1/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_aliases.c -o c_code/5_1/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_patterns.c -o c_code/5_1/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_patterns.c -o c_code/5_1/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_semmacrosanity.c -o c_code/5_1/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_semmacrosanity.c -o c_code/5_1/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_semparallel.c -o c_code/5_1/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_semparallel.c -o c_code/5_1/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_plugins.c -o c_code/5_1/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_plugins.c -o c_code/5_1/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_active.c -o c_code/5_1/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_active.c -o c_code/5_1/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_locals.c -o c_code/5_1/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_locals.c -o c_code/5_1/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_cgen.c -o c_code/5_1/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_cgen.c -o c_code/5_1/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_ccgutils.c -o c_code/5_1/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_ccgutils.c -o c_code/5_1/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_cgendata.c -o c_code/5_1/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_cgendata.c -o c_code/5_1/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_ccgmerge.c -o c_code/5_1/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_ccgmerge.c -o c_code/5_1/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_jsgen.c -o c_code/5_1/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_jsgen.c -o c_code/5_1/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_passaux.c -o c_code/5_1/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_passaux.c -o c_code/5_1/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_depends.c -o c_code/5_1/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_depends.c -o c_code/5_1/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_docgen2.c -o c_code/5_1/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_docgen2.c -o c_code/5_1/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_service.c -o c_code/5_1/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_service.c -o c_code/5_1/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_net.c -o c_code/5_1/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_net.c -o c_code/5_1/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_rawsockets.c -o c_code/5_1/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/stdlib_rawsockets.c -o c_code/5_1/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_modules.c -o c_code/5_1/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_modules.c -o c_code/5_1/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_nodejs.c -o c_code/5_1/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_1/nimsrc_nodejs.c -o c_code/5_1/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/5_1/nimsrc_nim.o \
c_code/5_1/stdlib_system.o \
c_code/5_1/nimsrc_testability.o \
c_code/5_1/nimsrc_commands.o \
c_code/5_1/stdlib_os.o \
c_code/5_1/stdlib_strutils.o \
c_code/5_1/stdlib_parseutils.o \
c_code/5_1/stdlib_times.o \
c_code/5_1/stdlib_posix.o \
c_code/5_1/nimsrc_msgs.o \
c_code/5_1/nimsrc_options.o \
c_code/5_1/nimsrc_lists.o \
c_code/5_1/stdlib_strtabs.o \
c_code/5_1/stdlib_hashes.o \
c_code/5_1/stdlib_osproc.o \
c_code/5_1/stdlib_streams.o \
c_code/5_1/stdlib_cpuinfo.o \
c_code/5_1/stdlib_sets.o \
c_code/5_1/stdlib_math.o \
c_code/5_1/stdlib_tables.o \
c_code/5_1/nimsrc_ropes.o \
c_code/5_1/nimsrc_platform.o \
c_code/5_1/nimsrc_nversion.o \
c_code/5_1/nimsrc_condsyms.o \
c_code/5_1/nimsrc_idents.o \
c_code/5_1/nimsrc_extccomp.o \
c_code/5_1/nimsrc_crc.o \
c_code/5_1/nimsrc_wordrecg.o \
c_code/5_1/nimsrc_nimblecmd.o \
c_code/5_1/stdlib_parseopt.o \
c_code/5_1/nimsrc_lexer.o \
c_code/5_1/nimsrc_nimlexbase.o \
c_code/5_1/nimsrc_llstream.o \
c_code/5_1/nimsrc_nimconf.o \
c_code/5_1/nimsrc_main.o \
c_code/5_1/nimsrc_ast.o \
c_code/5_1/stdlib_intsets.o \
c_code/5_1/nimsrc_idgen.o \
c_code/5_1/nimsrc_astalgo.o \
c_code/5_1/nimsrc_rodutils.o \
c_code/5_1/nimsrc_syntaxes.o \
c_code/5_1/nimsrc_parser.o \
c_code/5_1/nimsrc_pbraces.o \
c_code/5_1/nimsrc_filters.o \
c_code/5_1/nimsrc_renderer.o \
c_code/5_1/nimsrc_filter_tmpl.o \
c_code/5_1/nimsrc_rodread.o \
c_code/5_1/nimsrc_types.o \
c_code/5_1/nimsrc_trees.o \
c_code/5_1/stdlib_memfiles.o \
c_code/5_1/nimsrc_rodwrite.o \
c_code/5_1/nimsrc_passes.o \
c_code/5_1/nimsrc_magicsys.o \
c_code/5_1/nimsrc_nimsets.o \
c_code/5_1/nimsrc_bitsets.o \
c_code/5_1/nimsrc_importer.o \
c_code/5_1/nimsrc_lookups.o \
c_code/5_1/nimsrc_semdata.o \
c_code/5_1/nimsrc_treetab.o \
c_code/5_1/nimsrc_vmdef.o \
c_code/5_1/nimsrc_prettybase.o \
c_code/5_1/stdlib_lexbase.o \
c_code/5_1/nimsrc_sem.o \
c_code/5_1/nimsrc_semfold.o \
c_code/5_1/nimsrc_saturate.o \
c_code/5_1/nimsrc_procfind.o \
c_code/5_1/nimsrc_pragmas.o \
c_code/5_1/nimsrc_semtypinst.o \
c_code/5_1/nimsrc_sigmatch.o \
c_code/5_1/nimsrc_parampatterns.o \
c_code/5_1/nimsrc_pretty.o \
c_code/5_1/nimsrc_docgen.o \
c_code/5_1/docutils_rstast.o \
c_code/5_1/stdlib_json.o \
c_code/5_1/stdlib_unicode.o \
c_code/5_1/stdlib_macros.o \
c_code/5_1/docutils_rst.o \
c_code/5_1/docutils_rstgen.o \
c_code/5_1/docutils_highlite.o \
c_code/5_1/stdlib_sequtils.o \
c_code/5_1/stdlib_algorithm.o \
c_code/5_1/nimsrc_sempass2.o \
c_code/5_1/nimsrc_guards.o \
c_code/5_1/stdlib_xmltree.o \
c_code/5_1/stdlib_cgi.o \
c_code/5_1/stdlib_cookies.o \
c_code/5_1/nimsrc_typesrenderer.o \
c_code/5_1/nimsrc_transf.o \
c_code/5_1/nimsrc_cgmeth.o \
c_code/5_1/nimsrc_lambdalifting.o \
c_code/5_1/nimsrc_lowerings.o \
c_code/5_1/nimsrc_vm.o \
c_code/5_1/nimsrc_vmgen.o \
c_code/5_1/stdlib_unsigned.o \
c_code/5_1/nimsrc_vmdeps.o \
c_code/5_1/nimsrc_vmmarshal.o \
c_code/5_1/nimsrc_evaltempl.o \
c_code/5_1/nimsrc_aliases.o \
c_code/5_1/nimsrc_patterns.o \
c_code/5_1/nimsrc_semmacrosanity.o \
c_code/5_1/nimsrc_semparallel.o \
c_code/5_1/nimsrc_plugins.o \
c_code/5_1/nimsrc_active.o \
c_code/5_1/nimsrc_locals.o \
c_code/5_1/nimsrc_cgen.o \
c_code/5_1/nimsrc_ccgutils.o \
c_code/5_1/nimsrc_cgendata.o \
c_code/5_1/nimsrc_ccgmerge.o \
c_code/5_1/nimsrc_jsgen.o \
c_code/5_1/nimsrc_passaux.o \
c_code/5_1/nimsrc_depends.o \
c_code/5_1/nimsrc_docgen2.o \
c_code/5_1/nimsrc_service.o \
c_code/5_1/stdlib_net.o \
c_code/5_1/stdlib_rawsockets.o \
c_code/5_1/nimsrc_modules.o \
c_code/5_1/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/5_1/nimsrc_nim.o \
c_code/5_1/stdlib_system.o \
c_code/5_1/nimsrc_testability.o \
c_code/5_1/nimsrc_commands.o \
c_code/5_1/stdlib_os.o \
c_code/5_1/stdlib_strutils.o \
c_code/5_1/stdlib_parseutils.o \
c_code/5_1/stdlib_times.o \
c_code/5_1/stdlib_posix.o \
c_code/5_1/nimsrc_msgs.o \
c_code/5_1/nimsrc_options.o \
c_code/5_1/nimsrc_lists.o \
c_code/5_1/stdlib_strtabs.o \
c_code/5_1/stdlib_hashes.o \
c_code/5_1/stdlib_osproc.o \
c_code/5_1/stdlib_streams.o \
c_code/5_1/stdlib_cpuinfo.o \
c_code/5_1/stdlib_sets.o \
c_code/5_1/stdlib_math.o \
c_code/5_1/stdlib_tables.o \
c_code/5_1/nimsrc_ropes.o \
c_code/5_1/nimsrc_platform.o \
c_code/5_1/nimsrc_nversion.o \
c_code/5_1/nimsrc_condsyms.o \
c_code/5_1/nimsrc_idents.o \
c_code/5_1/nimsrc_extccomp.o \
c_code/5_1/nimsrc_crc.o \
c_code/5_1/nimsrc_wordrecg.o \
c_code/5_1/nimsrc_nimblecmd.o \
c_code/5_1/stdlib_parseopt.o \
c_code/5_1/nimsrc_lexer.o \
c_code/5_1/nimsrc_nimlexbase.o \
c_code/5_1/nimsrc_llstream.o \
c_code/5_1/nimsrc_nimconf.o \
c_code/5_1/nimsrc_main.o \
c_code/5_1/nimsrc_ast.o \
c_code/5_1/stdlib_intsets.o \
c_code/5_1/nimsrc_idgen.o \
c_code/5_1/nimsrc_astalgo.o \
c_code/5_1/nimsrc_rodutils.o \
c_code/5_1/nimsrc_syntaxes.o \
c_code/5_1/nimsrc_parser.o \
c_code/5_1/nimsrc_pbraces.o \
c_code/5_1/nimsrc_filters.o \
c_code/5_1/nimsrc_renderer.o \
c_code/5_1/nimsrc_filter_tmpl.o \
c_code/5_1/nimsrc_rodread.o \
c_code/5_1/nimsrc_types.o \
c_code/5_1/nimsrc_trees.o \
c_code/5_1/stdlib_memfiles.o \
c_code/5_1/nimsrc_rodwrite.o \
c_code/5_1/nimsrc_passes.o \
c_code/5_1/nimsrc_magicsys.o \
c_code/5_1/nimsrc_nimsets.o \
c_code/5_1/nimsrc_bitsets.o \
c_code/5_1/nimsrc_importer.o \
c_code/5_1/nimsrc_lookups.o \
c_code/5_1/nimsrc_semdata.o \
c_code/5_1/nimsrc_treetab.o \
c_code/5_1/nimsrc_vmdef.o \
c_code/5_1/nimsrc_prettybase.o \
c_code/5_1/stdlib_lexbase.o \
c_code/5_1/nimsrc_sem.o \
c_code/5_1/nimsrc_semfold.o \
c_code/5_1/nimsrc_saturate.o \
c_code/5_1/nimsrc_procfind.o \
c_code/5_1/nimsrc_pragmas.o \
c_code/5_1/nimsrc_semtypinst.o \
c_code/5_1/nimsrc_sigmatch.o \
c_code/5_1/nimsrc_parampatterns.o \
c_code/5_1/nimsrc_pretty.o \
c_code/5_1/nimsrc_docgen.o \
c_code/5_1/docutils_rstast.o \
c_code/5_1/stdlib_json.o \
c_code/5_1/stdlib_unicode.o \
c_code/5_1/stdlib_macros.o \
c_code/5_1/docutils_rst.o \
c_code/5_1/docutils_rstgen.o \
c_code/5_1/docutils_highlite.o \
c_code/5_1/stdlib_sequtils.o \
c_code/5_1/stdlib_algorithm.o \
c_code/5_1/nimsrc_sempass2.o \
c_code/5_1/nimsrc_guards.o \
c_code/5_1/stdlib_xmltree.o \
c_code/5_1/stdlib_cgi.o \
c_code/5_1/stdlib_cookies.o \
c_code/5_1/nimsrc_typesrenderer.o \
c_code/5_1/nimsrc_transf.o \
c_code/5_1/nimsrc_cgmeth.o \
c_code/5_1/nimsrc_lambdalifting.o \
c_code/5_1/nimsrc_lowerings.o \
c_code/5_1/nimsrc_vm.o \
c_code/5_1/nimsrc_vmgen.o \
c_code/5_1/stdlib_unsigned.o \
c_code/5_1/nimsrc_vmdeps.o \
c_code/5_1/nimsrc_vmmarshal.o \
c_code/5_1/nimsrc_evaltempl.o \
c_code/5_1/nimsrc_aliases.o \
c_code/5_1/nimsrc_patterns.o \
c_code/5_1/nimsrc_semmacrosanity.o \
c_code/5_1/nimsrc_semparallel.o \
c_code/5_1/nimsrc_plugins.o \
c_code/5_1/nimsrc_active.o \
c_code/5_1/nimsrc_locals.o \
c_code/5_1/nimsrc_cgen.o \
c_code/5_1/nimsrc_ccgutils.o \
c_code/5_1/nimsrc_cgendata.o \
c_code/5_1/nimsrc_ccgmerge.o \
c_code/5_1/nimsrc_jsgen.o \
c_code/5_1/nimsrc_passaux.o \
c_code/5_1/nimsrc_depends.o \
c_code/5_1/nimsrc_docgen2.o \
c_code/5_1/nimsrc_service.o \
c_code/5_1/stdlib_net.o \
c_code/5_1/stdlib_rawsockets.o \
c_code/5_1/nimsrc_modules.o \
c_code/5_1/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  amd64)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_nim.c -o c_code/5_2/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_nim.c -o c_code/5_2/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_system.c -o c_code/5_2/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_system.c -o c_code/5_2/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_testability.c -o c_code/5_2/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_testability.c -o c_code/5_2/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_commands.c -o c_code/5_2/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_commands.c -o c_code/5_2/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_os.c -o c_code/5_2/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_os.c -o c_code/5_2/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_strutils.c -o c_code/5_2/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_strutils.c -o c_code/5_2/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_parseutils.c -o c_code/5_2/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_parseutils.c -o c_code/5_2/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_times.c -o c_code/5_2/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_times.c -o c_code/5_2/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_posix.c -o c_code/5_2/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_posix.c -o c_code/5_2/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_msgs.c -o c_code/5_2/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_msgs.c -o c_code/5_2/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_options.c -o c_code/5_2/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_options.c -o c_code/5_2/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_lists.c -o c_code/5_2/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_lists.c -o c_code/5_2/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_strtabs.c -o c_code/5_2/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_strtabs.c -o c_code/5_2/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_hashes.c -o c_code/5_2/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_hashes.c -o c_code/5_2/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_osproc.c -o c_code/5_2/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_osproc.c -o c_code/5_2/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_streams.c -o c_code/5_2/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_streams.c -o c_code/5_2/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_cpuinfo.c -o c_code/5_2/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_cpuinfo.c -o c_code/5_2/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_sets.c -o c_code/5_2/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_sets.c -o c_code/5_2/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_math.c -o c_code/5_2/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_math.c -o c_code/5_2/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_tables.c -o c_code/5_2/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_tables.c -o c_code/5_2/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_ropes.c -o c_code/5_2/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_ropes.c -o c_code/5_2/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_platform.c -o c_code/5_2/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_platform.c -o c_code/5_2/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_nversion.c -o c_code/5_2/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_nversion.c -o c_code/5_2/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_condsyms.c -o c_code/5_2/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_condsyms.c -o c_code/5_2/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_idents.c -o c_code/5_2/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_idents.c -o c_code/5_2/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_extccomp.c -o c_code/5_2/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_extccomp.c -o c_code/5_2/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_crc.c -o c_code/5_2/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_crc.c -o c_code/5_2/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_wordrecg.c -o c_code/5_2/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_wordrecg.c -o c_code/5_2/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_nimblecmd.c -o c_code/5_2/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_nimblecmd.c -o c_code/5_2/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_parseopt.c -o c_code/5_2/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_parseopt.c -o c_code/5_2/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_lexer.c -o c_code/5_2/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_lexer.c -o c_code/5_2/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_nimlexbase.c -o c_code/5_2/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_nimlexbase.c -o c_code/5_2/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_llstream.c -o c_code/5_2/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_llstream.c -o c_code/5_2/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_nimconf.c -o c_code/5_2/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_nimconf.c -o c_code/5_2/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_main.c -o c_code/5_2/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_main.c -o c_code/5_2/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_ast.c -o c_code/5_2/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_ast.c -o c_code/5_2/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_intsets.c -o c_code/5_2/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_intsets.c -o c_code/5_2/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_idgen.c -o c_code/5_2/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_idgen.c -o c_code/5_2/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_astalgo.c -o c_code/5_2/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_astalgo.c -o c_code/5_2/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_rodutils.c -o c_code/5_2/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_rodutils.c -o c_code/5_2/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_syntaxes.c -o c_code/5_2/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_syntaxes.c -o c_code/5_2/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_parser.c -o c_code/5_2/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_parser.c -o c_code/5_2/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_pbraces.c -o c_code/5_2/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_pbraces.c -o c_code/5_2/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_filters.c -o c_code/5_2/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_filters.c -o c_code/5_2/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_renderer.c -o c_code/5_2/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_renderer.c -o c_code/5_2/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_filter_tmpl.c -o c_code/5_2/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_filter_tmpl.c -o c_code/5_2/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_rodread.c -o c_code/5_2/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_rodread.c -o c_code/5_2/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_types.c -o c_code/5_2/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_types.c -o c_code/5_2/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_trees.c -o c_code/5_2/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_trees.c -o c_code/5_2/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_memfiles.c -o c_code/5_2/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_memfiles.c -o c_code/5_2/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_rodwrite.c -o c_code/5_2/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_rodwrite.c -o c_code/5_2/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_passes.c -o c_code/5_2/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_passes.c -o c_code/5_2/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_magicsys.c -o c_code/5_2/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_magicsys.c -o c_code/5_2/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_nimsets.c -o c_code/5_2/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_nimsets.c -o c_code/5_2/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_bitsets.c -o c_code/5_2/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_bitsets.c -o c_code/5_2/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_importer.c -o c_code/5_2/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_importer.c -o c_code/5_2/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_lookups.c -o c_code/5_2/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_lookups.c -o c_code/5_2/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_semdata.c -o c_code/5_2/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_semdata.c -o c_code/5_2/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_treetab.c -o c_code/5_2/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_treetab.c -o c_code/5_2/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_vmdef.c -o c_code/5_2/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_vmdef.c -o c_code/5_2/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_prettybase.c -o c_code/5_2/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_prettybase.c -o c_code/5_2/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_lexbase.c -o c_code/5_2/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_lexbase.c -o c_code/5_2/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_sem.c -o c_code/5_2/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_sem.c -o c_code/5_2/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_semfold.c -o c_code/5_2/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_semfold.c -o c_code/5_2/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_saturate.c -o c_code/5_2/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_saturate.c -o c_code/5_2/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_procfind.c -o c_code/5_2/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_procfind.c -o c_code/5_2/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_pragmas.c -o c_code/5_2/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_pragmas.c -o c_code/5_2/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_semtypinst.c -o c_code/5_2/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_semtypinst.c -o c_code/5_2/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_sigmatch.c -o c_code/5_2/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_sigmatch.c -o c_code/5_2/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_parampatterns.c -o c_code/5_2/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_parampatterns.c -o c_code/5_2/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_pretty.c -o c_code/5_2/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_pretty.c -o c_code/5_2/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_docgen.c -o c_code/5_2/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_docgen.c -o c_code/5_2/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/docutils_rstast.c -o c_code/5_2/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/docutils_rstast.c -o c_code/5_2/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_json.c -o c_code/5_2/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_json.c -o c_code/5_2/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_unicode.c -o c_code/5_2/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_unicode.c -o c_code/5_2/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_macros.c -o c_code/5_2/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_macros.c -o c_code/5_2/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/docutils_rst.c -o c_code/5_2/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/docutils_rst.c -o c_code/5_2/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/docutils_rstgen.c -o c_code/5_2/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/docutils_rstgen.c -o c_code/5_2/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/docutils_highlite.c -o c_code/5_2/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/docutils_highlite.c -o c_code/5_2/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_sequtils.c -o c_code/5_2/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_sequtils.c -o c_code/5_2/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_algorithm.c -o c_code/5_2/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_algorithm.c -o c_code/5_2/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_sempass2.c -o c_code/5_2/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_sempass2.c -o c_code/5_2/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_guards.c -o c_code/5_2/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_guards.c -o c_code/5_2/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_xmltree.c -o c_code/5_2/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_xmltree.c -o c_code/5_2/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_cgi.c -o c_code/5_2/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_cgi.c -o c_code/5_2/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_cookies.c -o c_code/5_2/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_cookies.c -o c_code/5_2/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_typesrenderer.c -o c_code/5_2/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_typesrenderer.c -o c_code/5_2/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_transf.c -o c_code/5_2/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_transf.c -o c_code/5_2/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_cgmeth.c -o c_code/5_2/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_cgmeth.c -o c_code/5_2/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_lambdalifting.c -o c_code/5_2/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_lambdalifting.c -o c_code/5_2/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_lowerings.c -o c_code/5_2/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_lowerings.c -o c_code/5_2/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_vm.c -o c_code/5_2/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_vm.c -o c_code/5_2/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_vmgen.c -o c_code/5_2/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_vmgen.c -o c_code/5_2/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_unsigned.c -o c_code/5_2/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_unsigned.c -o c_code/5_2/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_vmdeps.c -o c_code/5_2/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_vmdeps.c -o c_code/5_2/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_vmmarshal.c -o c_code/5_2/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_vmmarshal.c -o c_code/5_2/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_evaltempl.c -o c_code/5_2/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_evaltempl.c -o c_code/5_2/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_aliases.c -o c_code/5_2/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_aliases.c -o c_code/5_2/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_patterns.c -o c_code/5_2/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_patterns.c -o c_code/5_2/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_semmacrosanity.c -o c_code/5_2/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_semmacrosanity.c -o c_code/5_2/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_semparallel.c -o c_code/5_2/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_semparallel.c -o c_code/5_2/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_plugins.c -o c_code/5_2/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_plugins.c -o c_code/5_2/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_active.c -o c_code/5_2/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_active.c -o c_code/5_2/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_locals.c -o c_code/5_2/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_locals.c -o c_code/5_2/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_cgen.c -o c_code/5_2/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_cgen.c -o c_code/5_2/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_ccgutils.c -o c_code/5_2/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_ccgutils.c -o c_code/5_2/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_cgendata.c -o c_code/5_2/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_cgendata.c -o c_code/5_2/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_ccgmerge.c -o c_code/5_2/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_ccgmerge.c -o c_code/5_2/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_jsgen.c -o c_code/5_2/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_jsgen.c -o c_code/5_2/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_passaux.c -o c_code/5_2/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_passaux.c -o c_code/5_2/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_depends.c -o c_code/5_2/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_depends.c -o c_code/5_2/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_docgen2.c -o c_code/5_2/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_docgen2.c -o c_code/5_2/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_service.c -o c_code/5_2/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_service.c -o c_code/5_2/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_net.c -o c_code/5_2/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_net.c -o c_code/5_2/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_rawsockets.c -o c_code/5_2/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/stdlib_rawsockets.c -o c_code/5_2/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_modules.c -o c_code/5_2/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_modules.c -o c_code/5_2/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_nodejs.c -o c_code/5_2/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/5_2/nimsrc_nodejs.c -o c_code/5_2/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/5_2/nimsrc_nim.o \
c_code/5_2/stdlib_system.o \
c_code/5_2/nimsrc_testability.o \
c_code/5_2/nimsrc_commands.o \
c_code/5_2/stdlib_os.o \
c_code/5_2/stdlib_strutils.o \
c_code/5_2/stdlib_parseutils.o \
c_code/5_2/stdlib_times.o \
c_code/5_2/stdlib_posix.o \
c_code/5_2/nimsrc_msgs.o \
c_code/5_2/nimsrc_options.o \
c_code/5_2/nimsrc_lists.o \
c_code/5_2/stdlib_strtabs.o \
c_code/5_2/stdlib_hashes.o \
c_code/5_2/stdlib_osproc.o \
c_code/5_2/stdlib_streams.o \
c_code/5_2/stdlib_cpuinfo.o \
c_code/5_2/stdlib_sets.o \
c_code/5_2/stdlib_math.o \
c_code/5_2/stdlib_tables.o \
c_code/5_2/nimsrc_ropes.o \
c_code/5_2/nimsrc_platform.o \
c_code/5_2/nimsrc_nversion.o \
c_code/5_2/nimsrc_condsyms.o \
c_code/5_2/nimsrc_idents.o \
c_code/5_2/nimsrc_extccomp.o \
c_code/5_2/nimsrc_crc.o \
c_code/5_2/nimsrc_wordrecg.o \
c_code/5_2/nimsrc_nimblecmd.o \
c_code/5_2/stdlib_parseopt.o \
c_code/5_2/nimsrc_lexer.o \
c_code/5_2/nimsrc_nimlexbase.o \
c_code/5_2/nimsrc_llstream.o \
c_code/5_2/nimsrc_nimconf.o \
c_code/5_2/nimsrc_main.o \
c_code/5_2/nimsrc_ast.o \
c_code/5_2/stdlib_intsets.o \
c_code/5_2/nimsrc_idgen.o \
c_code/5_2/nimsrc_astalgo.o \
c_code/5_2/nimsrc_rodutils.o \
c_code/5_2/nimsrc_syntaxes.o \
c_code/5_2/nimsrc_parser.o \
c_code/5_2/nimsrc_pbraces.o \
c_code/5_2/nimsrc_filters.o \
c_code/5_2/nimsrc_renderer.o \
c_code/5_2/nimsrc_filter_tmpl.o \
c_code/5_2/nimsrc_rodread.o \
c_code/5_2/nimsrc_types.o \
c_code/5_2/nimsrc_trees.o \
c_code/5_2/stdlib_memfiles.o \
c_code/5_2/nimsrc_rodwrite.o \
c_code/5_2/nimsrc_passes.o \
c_code/5_2/nimsrc_magicsys.o \
c_code/5_2/nimsrc_nimsets.o \
c_code/5_2/nimsrc_bitsets.o \
c_code/5_2/nimsrc_importer.o \
c_code/5_2/nimsrc_lookups.o \
c_code/5_2/nimsrc_semdata.o \
c_code/5_2/nimsrc_treetab.o \
c_code/5_2/nimsrc_vmdef.o \
c_code/5_2/nimsrc_prettybase.o \
c_code/5_2/stdlib_lexbase.o \
c_code/5_2/nimsrc_sem.o \
c_code/5_2/nimsrc_semfold.o \
c_code/5_2/nimsrc_saturate.o \
c_code/5_2/nimsrc_procfind.o \
c_code/5_2/nimsrc_pragmas.o \
c_code/5_2/nimsrc_semtypinst.o \
c_code/5_2/nimsrc_sigmatch.o \
c_code/5_2/nimsrc_parampatterns.o \
c_code/5_2/nimsrc_pretty.o \
c_code/5_2/nimsrc_docgen.o \
c_code/5_2/docutils_rstast.o \
c_code/5_2/stdlib_json.o \
c_code/5_2/stdlib_unicode.o \
c_code/5_2/stdlib_macros.o \
c_code/5_2/docutils_rst.o \
c_code/5_2/docutils_rstgen.o \
c_code/5_2/docutils_highlite.o \
c_code/5_2/stdlib_sequtils.o \
c_code/5_2/stdlib_algorithm.o \
c_code/5_2/nimsrc_sempass2.o \
c_code/5_2/nimsrc_guards.o \
c_code/5_2/stdlib_xmltree.o \
c_code/5_2/stdlib_cgi.o \
c_code/5_2/stdlib_cookies.o \
c_code/5_2/nimsrc_typesrenderer.o \
c_code/5_2/nimsrc_transf.o \
c_code/5_2/nimsrc_cgmeth.o \
c_code/5_2/nimsrc_lambdalifting.o \
c_code/5_2/nimsrc_lowerings.o \
c_code/5_2/nimsrc_vm.o \
c_code/5_2/nimsrc_vmgen.o \
c_code/5_2/stdlib_unsigned.o \
c_code/5_2/nimsrc_vmdeps.o \
c_code/5_2/nimsrc_vmmarshal.o \
c_code/5_2/nimsrc_evaltempl.o \
c_code/5_2/nimsrc_aliases.o \
c_code/5_2/nimsrc_patterns.o \
c_code/5_2/nimsrc_semmacrosanity.o \
c_code/5_2/nimsrc_semparallel.o \
c_code/5_2/nimsrc_plugins.o \
c_code/5_2/nimsrc_active.o \
c_code/5_2/nimsrc_locals.o \
c_code/5_2/nimsrc_cgen.o \
c_code/5_2/nimsrc_ccgutils.o \
c_code/5_2/nimsrc_cgendata.o \
c_code/5_2/nimsrc_ccgmerge.o \
c_code/5_2/nimsrc_jsgen.o \
c_code/5_2/nimsrc_passaux.o \
c_code/5_2/nimsrc_depends.o \
c_code/5_2/nimsrc_docgen2.o \
c_code/5_2/nimsrc_service.o \
c_code/5_2/stdlib_net.o \
c_code/5_2/stdlib_rawsockets.o \
c_code/5_2/nimsrc_modules.o \
c_code/5_2/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/5_2/nimsrc_nim.o \
c_code/5_2/stdlib_system.o \
c_code/5_2/nimsrc_testability.o \
c_code/5_2/nimsrc_commands.o \
c_code/5_2/stdlib_os.o \
c_code/5_2/stdlib_strutils.o \
c_code/5_2/stdlib_parseutils.o \
c_code/5_2/stdlib_times.o \
c_code/5_2/stdlib_posix.o \
c_code/5_2/nimsrc_msgs.o \
c_code/5_2/nimsrc_options.o \
c_code/5_2/nimsrc_lists.o \
c_code/5_2/stdlib_strtabs.o \
c_code/5_2/stdlib_hashes.o \
c_code/5_2/stdlib_osproc.o \
c_code/5_2/stdlib_streams.o \
c_code/5_2/stdlib_cpuinfo.o \
c_code/5_2/stdlib_sets.o \
c_code/5_2/stdlib_math.o \
c_code/5_2/stdlib_tables.o \
c_code/5_2/nimsrc_ropes.o \
c_code/5_2/nimsrc_platform.o \
c_code/5_2/nimsrc_nversion.o \
c_code/5_2/nimsrc_condsyms.o \
c_code/5_2/nimsrc_idents.o \
c_code/5_2/nimsrc_extccomp.o \
c_code/5_2/nimsrc_crc.o \
c_code/5_2/nimsrc_wordrecg.o \
c_code/5_2/nimsrc_nimblecmd.o \
c_code/5_2/stdlib_parseopt.o \
c_code/5_2/nimsrc_lexer.o \
c_code/5_2/nimsrc_nimlexbase.o \
c_code/5_2/nimsrc_llstream.o \
c_code/5_2/nimsrc_nimconf.o \
c_code/5_2/nimsrc_main.o \
c_code/5_2/nimsrc_ast.o \
c_code/5_2/stdlib_intsets.o \
c_code/5_2/nimsrc_idgen.o \
c_code/5_2/nimsrc_astalgo.o \
c_code/5_2/nimsrc_rodutils.o \
c_code/5_2/nimsrc_syntaxes.o \
c_code/5_2/nimsrc_parser.o \
c_code/5_2/nimsrc_pbraces.o \
c_code/5_2/nimsrc_filters.o \
c_code/5_2/nimsrc_renderer.o \
c_code/5_2/nimsrc_filter_tmpl.o \
c_code/5_2/nimsrc_rodread.o \
c_code/5_2/nimsrc_types.o \
c_code/5_2/nimsrc_trees.o \
c_code/5_2/stdlib_memfiles.o \
c_code/5_2/nimsrc_rodwrite.o \
c_code/5_2/nimsrc_passes.o \
c_code/5_2/nimsrc_magicsys.o \
c_code/5_2/nimsrc_nimsets.o \
c_code/5_2/nimsrc_bitsets.o \
c_code/5_2/nimsrc_importer.o \
c_code/5_2/nimsrc_lookups.o \
c_code/5_2/nimsrc_semdata.o \
c_code/5_2/nimsrc_treetab.o \
c_code/5_2/nimsrc_vmdef.o \
c_code/5_2/nimsrc_prettybase.o \
c_code/5_2/stdlib_lexbase.o \
c_code/5_2/nimsrc_sem.o \
c_code/5_2/nimsrc_semfold.o \
c_code/5_2/nimsrc_saturate.o \
c_code/5_2/nimsrc_procfind.o \
c_code/5_2/nimsrc_pragmas.o \
c_code/5_2/nimsrc_semtypinst.o \
c_code/5_2/nimsrc_sigmatch.o \
c_code/5_2/nimsrc_parampatterns.o \
c_code/5_2/nimsrc_pretty.o \
c_code/5_2/nimsrc_docgen.o \
c_code/5_2/docutils_rstast.o \
c_code/5_2/stdlib_json.o \
c_code/5_2/stdlib_unicode.o \
c_code/5_2/stdlib_macros.o \
c_code/5_2/docutils_rst.o \
c_code/5_2/docutils_rstgen.o \
c_code/5_2/docutils_highlite.o \
c_code/5_2/stdlib_sequtils.o \
c_code/5_2/stdlib_algorithm.o \
c_code/5_2/nimsrc_sempass2.o \
c_code/5_2/nimsrc_guards.o \
c_code/5_2/stdlib_xmltree.o \
c_code/5_2/stdlib_cgi.o \
c_code/5_2/stdlib_cookies.o \
c_code/5_2/nimsrc_typesrenderer.o \
c_code/5_2/nimsrc_transf.o \
c_code/5_2/nimsrc_cgmeth.o \
c_code/5_2/nimsrc_lambdalifting.o \
c_code/5_2/nimsrc_lowerings.o \
c_code/5_2/nimsrc_vm.o \
c_code/5_2/nimsrc_vmgen.o \
c_code/5_2/stdlib_unsigned.o \
c_code/5_2/nimsrc_vmdeps.o \
c_code/5_2/nimsrc_vmmarshal.o \
c_code/5_2/nimsrc_evaltempl.o \
c_code/5_2/nimsrc_aliases.o \
c_code/5_2/nimsrc_patterns.o \
c_code/5_2/nimsrc_semmacrosanity.o \
c_code/5_2/nimsrc_semparallel.o \
c_code/5_2/nimsrc_plugins.o \
c_code/5_2/nimsrc_active.o \
c_code/5_2/nimsrc_locals.o \
c_code/5_2/nimsrc_cgen.o \
c_code/5_2/nimsrc_ccgutils.o \
c_code/5_2/nimsrc_cgendata.o \
c_code/5_2/nimsrc_ccgmerge.o \
c_code/5_2/nimsrc_jsgen.o \
c_code/5_2/nimsrc_passaux.o \
c_code/5_2/nimsrc_depends.o \
c_code/5_2/nimsrc_docgen2.o \
c_code/5_2/nimsrc_service.o \
c_code/5_2/stdlib_net.o \
c_code/5_2/stdlib_rawsockets.o \
c_code/5_2/nimsrc_modules.o \
c_code/5_2/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  powerpc64)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  arm)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  sparc)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  mips)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  powerpc)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  *)
    echo "Error: no C code generated for: [$myos: $mycpu]"
    exit 1
    ;;
  esac
  ;;
netbsd) 
  case $mycpu in
  i386)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_nim.c -o c_code/6_1/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_nim.c -o c_code/6_1/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_system.c -o c_code/6_1/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_system.c -o c_code/6_1/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_testability.c -o c_code/6_1/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_testability.c -o c_code/6_1/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_commands.c -o c_code/6_1/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_commands.c -o c_code/6_1/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_os.c -o c_code/6_1/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_os.c -o c_code/6_1/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_strutils.c -o c_code/6_1/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_strutils.c -o c_code/6_1/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_parseutils.c -o c_code/6_1/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_parseutils.c -o c_code/6_1/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_times.c -o c_code/6_1/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_times.c -o c_code/6_1/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_posix.c -o c_code/6_1/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_posix.c -o c_code/6_1/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_msgs.c -o c_code/6_1/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_msgs.c -o c_code/6_1/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_options.c -o c_code/6_1/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_options.c -o c_code/6_1/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_lists.c -o c_code/6_1/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_lists.c -o c_code/6_1/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_strtabs.c -o c_code/6_1/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_strtabs.c -o c_code/6_1/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_hashes.c -o c_code/6_1/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_hashes.c -o c_code/6_1/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_osproc.c -o c_code/6_1/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_osproc.c -o c_code/6_1/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_streams.c -o c_code/6_1/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_streams.c -o c_code/6_1/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_cpuinfo.c -o c_code/6_1/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_cpuinfo.c -o c_code/6_1/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_sets.c -o c_code/6_1/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_sets.c -o c_code/6_1/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_math.c -o c_code/6_1/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_math.c -o c_code/6_1/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_tables.c -o c_code/6_1/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_tables.c -o c_code/6_1/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_ropes.c -o c_code/6_1/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_ropes.c -o c_code/6_1/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_platform.c -o c_code/6_1/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_platform.c -o c_code/6_1/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_nversion.c -o c_code/6_1/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_nversion.c -o c_code/6_1/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_condsyms.c -o c_code/6_1/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_condsyms.c -o c_code/6_1/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_idents.c -o c_code/6_1/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_idents.c -o c_code/6_1/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_extccomp.c -o c_code/6_1/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_extccomp.c -o c_code/6_1/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_crc.c -o c_code/6_1/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_crc.c -o c_code/6_1/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_wordrecg.c -o c_code/6_1/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_wordrecg.c -o c_code/6_1/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_nimblecmd.c -o c_code/6_1/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_nimblecmd.c -o c_code/6_1/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_parseopt.c -o c_code/6_1/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_parseopt.c -o c_code/6_1/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_lexer.c -o c_code/6_1/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_lexer.c -o c_code/6_1/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_nimlexbase.c -o c_code/6_1/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_nimlexbase.c -o c_code/6_1/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_llstream.c -o c_code/6_1/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_llstream.c -o c_code/6_1/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_nimconf.c -o c_code/6_1/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_nimconf.c -o c_code/6_1/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_main.c -o c_code/6_1/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_main.c -o c_code/6_1/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_ast.c -o c_code/6_1/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_ast.c -o c_code/6_1/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_intsets.c -o c_code/6_1/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_intsets.c -o c_code/6_1/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_idgen.c -o c_code/6_1/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_idgen.c -o c_code/6_1/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_astalgo.c -o c_code/6_1/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_astalgo.c -o c_code/6_1/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_rodutils.c -o c_code/6_1/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_rodutils.c -o c_code/6_1/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_syntaxes.c -o c_code/6_1/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_syntaxes.c -o c_code/6_1/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_parser.c -o c_code/6_1/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_parser.c -o c_code/6_1/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_pbraces.c -o c_code/6_1/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_pbraces.c -o c_code/6_1/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_filters.c -o c_code/6_1/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_filters.c -o c_code/6_1/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_renderer.c -o c_code/6_1/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_renderer.c -o c_code/6_1/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_filter_tmpl.c -o c_code/6_1/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_filter_tmpl.c -o c_code/6_1/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_rodread.c -o c_code/6_1/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_rodread.c -o c_code/6_1/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_types.c -o c_code/6_1/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_types.c -o c_code/6_1/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_trees.c -o c_code/6_1/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_trees.c -o c_code/6_1/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_memfiles.c -o c_code/6_1/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_memfiles.c -o c_code/6_1/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_rodwrite.c -o c_code/6_1/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_rodwrite.c -o c_code/6_1/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_passes.c -o c_code/6_1/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_passes.c -o c_code/6_1/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_magicsys.c -o c_code/6_1/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_magicsys.c -o c_code/6_1/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_nimsets.c -o c_code/6_1/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_nimsets.c -o c_code/6_1/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_bitsets.c -o c_code/6_1/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_bitsets.c -o c_code/6_1/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_importer.c -o c_code/6_1/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_importer.c -o c_code/6_1/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_lookups.c -o c_code/6_1/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_lookups.c -o c_code/6_1/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_semdata.c -o c_code/6_1/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_semdata.c -o c_code/6_1/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_treetab.c -o c_code/6_1/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_treetab.c -o c_code/6_1/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_vmdef.c -o c_code/6_1/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_vmdef.c -o c_code/6_1/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_prettybase.c -o c_code/6_1/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_prettybase.c -o c_code/6_1/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_lexbase.c -o c_code/6_1/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_lexbase.c -o c_code/6_1/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_sem.c -o c_code/6_1/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_sem.c -o c_code/6_1/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_semfold.c -o c_code/6_1/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_semfold.c -o c_code/6_1/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_saturate.c -o c_code/6_1/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_saturate.c -o c_code/6_1/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_procfind.c -o c_code/6_1/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_procfind.c -o c_code/6_1/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_pragmas.c -o c_code/6_1/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_pragmas.c -o c_code/6_1/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_semtypinst.c -o c_code/6_1/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_semtypinst.c -o c_code/6_1/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_sigmatch.c -o c_code/6_1/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_sigmatch.c -o c_code/6_1/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_parampatterns.c -o c_code/6_1/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_parampatterns.c -o c_code/6_1/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_pretty.c -o c_code/6_1/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_pretty.c -o c_code/6_1/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_docgen.c -o c_code/6_1/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_docgen.c -o c_code/6_1/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/docutils_rstast.c -o c_code/6_1/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/docutils_rstast.c -o c_code/6_1/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_json.c -o c_code/6_1/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_json.c -o c_code/6_1/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_unicode.c -o c_code/6_1/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_unicode.c -o c_code/6_1/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_macros.c -o c_code/6_1/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_macros.c -o c_code/6_1/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/docutils_rst.c -o c_code/6_1/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/docutils_rst.c -o c_code/6_1/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/docutils_rstgen.c -o c_code/6_1/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/docutils_rstgen.c -o c_code/6_1/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/docutils_highlite.c -o c_code/6_1/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/docutils_highlite.c -o c_code/6_1/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_sequtils.c -o c_code/6_1/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_sequtils.c -o c_code/6_1/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_algorithm.c -o c_code/6_1/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_algorithm.c -o c_code/6_1/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_sempass2.c -o c_code/6_1/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_sempass2.c -o c_code/6_1/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_guards.c -o c_code/6_1/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_guards.c -o c_code/6_1/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_xmltree.c -o c_code/6_1/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_xmltree.c -o c_code/6_1/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_cgi.c -o c_code/6_1/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_cgi.c -o c_code/6_1/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_cookies.c -o c_code/6_1/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_cookies.c -o c_code/6_1/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_typesrenderer.c -o c_code/6_1/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_typesrenderer.c -o c_code/6_1/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_transf.c -o c_code/6_1/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_transf.c -o c_code/6_1/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_cgmeth.c -o c_code/6_1/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_cgmeth.c -o c_code/6_1/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_lambdalifting.c -o c_code/6_1/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_lambdalifting.c -o c_code/6_1/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_lowerings.c -o c_code/6_1/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_lowerings.c -o c_code/6_1/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_vm.c -o c_code/6_1/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_vm.c -o c_code/6_1/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_vmgen.c -o c_code/6_1/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_vmgen.c -o c_code/6_1/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_unsigned.c -o c_code/6_1/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_unsigned.c -o c_code/6_1/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_vmdeps.c -o c_code/6_1/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_vmdeps.c -o c_code/6_1/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_vmmarshal.c -o c_code/6_1/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_vmmarshal.c -o c_code/6_1/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_evaltempl.c -o c_code/6_1/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_evaltempl.c -o c_code/6_1/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_aliases.c -o c_code/6_1/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_aliases.c -o c_code/6_1/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_patterns.c -o c_code/6_1/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_patterns.c -o c_code/6_1/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_semmacrosanity.c -o c_code/6_1/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_semmacrosanity.c -o c_code/6_1/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_semparallel.c -o c_code/6_1/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_semparallel.c -o c_code/6_1/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_plugins.c -o c_code/6_1/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_plugins.c -o c_code/6_1/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_active.c -o c_code/6_1/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_active.c -o c_code/6_1/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_locals.c -o c_code/6_1/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_locals.c -o c_code/6_1/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_cgen.c -o c_code/6_1/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_cgen.c -o c_code/6_1/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_ccgutils.c -o c_code/6_1/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_ccgutils.c -o c_code/6_1/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_cgendata.c -o c_code/6_1/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_cgendata.c -o c_code/6_1/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_ccgmerge.c -o c_code/6_1/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_ccgmerge.c -o c_code/6_1/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_jsgen.c -o c_code/6_1/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_jsgen.c -o c_code/6_1/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_passaux.c -o c_code/6_1/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_passaux.c -o c_code/6_1/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_depends.c -o c_code/6_1/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_depends.c -o c_code/6_1/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_docgen2.c -o c_code/6_1/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_docgen2.c -o c_code/6_1/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_service.c -o c_code/6_1/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_service.c -o c_code/6_1/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_net.c -o c_code/6_1/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_net.c -o c_code/6_1/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_rawsockets.c -o c_code/6_1/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/stdlib_rawsockets.c -o c_code/6_1/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_modules.c -o c_code/6_1/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_modules.c -o c_code/6_1/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_nodejs.c -o c_code/6_1/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_1/nimsrc_nodejs.c -o c_code/6_1/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/6_1/nimsrc_nim.o \
c_code/6_1/stdlib_system.o \
c_code/6_1/nimsrc_testability.o \
c_code/6_1/nimsrc_commands.o \
c_code/6_1/stdlib_os.o \
c_code/6_1/stdlib_strutils.o \
c_code/6_1/stdlib_parseutils.o \
c_code/6_1/stdlib_times.o \
c_code/6_1/stdlib_posix.o \
c_code/6_1/nimsrc_msgs.o \
c_code/6_1/nimsrc_options.o \
c_code/6_1/nimsrc_lists.o \
c_code/6_1/stdlib_strtabs.o \
c_code/6_1/stdlib_hashes.o \
c_code/6_1/stdlib_osproc.o \
c_code/6_1/stdlib_streams.o \
c_code/6_1/stdlib_cpuinfo.o \
c_code/6_1/stdlib_sets.o \
c_code/6_1/stdlib_math.o \
c_code/6_1/stdlib_tables.o \
c_code/6_1/nimsrc_ropes.o \
c_code/6_1/nimsrc_platform.o \
c_code/6_1/nimsrc_nversion.o \
c_code/6_1/nimsrc_condsyms.o \
c_code/6_1/nimsrc_idents.o \
c_code/6_1/nimsrc_extccomp.o \
c_code/6_1/nimsrc_crc.o \
c_code/6_1/nimsrc_wordrecg.o \
c_code/6_1/nimsrc_nimblecmd.o \
c_code/6_1/stdlib_parseopt.o \
c_code/6_1/nimsrc_lexer.o \
c_code/6_1/nimsrc_nimlexbase.o \
c_code/6_1/nimsrc_llstream.o \
c_code/6_1/nimsrc_nimconf.o \
c_code/6_1/nimsrc_main.o \
c_code/6_1/nimsrc_ast.o \
c_code/6_1/stdlib_intsets.o \
c_code/6_1/nimsrc_idgen.o \
c_code/6_1/nimsrc_astalgo.o \
c_code/6_1/nimsrc_rodutils.o \
c_code/6_1/nimsrc_syntaxes.o \
c_code/6_1/nimsrc_parser.o \
c_code/6_1/nimsrc_pbraces.o \
c_code/6_1/nimsrc_filters.o \
c_code/6_1/nimsrc_renderer.o \
c_code/6_1/nimsrc_filter_tmpl.o \
c_code/6_1/nimsrc_rodread.o \
c_code/6_1/nimsrc_types.o \
c_code/6_1/nimsrc_trees.o \
c_code/6_1/stdlib_memfiles.o \
c_code/6_1/nimsrc_rodwrite.o \
c_code/6_1/nimsrc_passes.o \
c_code/6_1/nimsrc_magicsys.o \
c_code/6_1/nimsrc_nimsets.o \
c_code/6_1/nimsrc_bitsets.o \
c_code/6_1/nimsrc_importer.o \
c_code/6_1/nimsrc_lookups.o \
c_code/6_1/nimsrc_semdata.o \
c_code/6_1/nimsrc_treetab.o \
c_code/6_1/nimsrc_vmdef.o \
c_code/6_1/nimsrc_prettybase.o \
c_code/6_1/stdlib_lexbase.o \
c_code/6_1/nimsrc_sem.o \
c_code/6_1/nimsrc_semfold.o \
c_code/6_1/nimsrc_saturate.o \
c_code/6_1/nimsrc_procfind.o \
c_code/6_1/nimsrc_pragmas.o \
c_code/6_1/nimsrc_semtypinst.o \
c_code/6_1/nimsrc_sigmatch.o \
c_code/6_1/nimsrc_parampatterns.o \
c_code/6_1/nimsrc_pretty.o \
c_code/6_1/nimsrc_docgen.o \
c_code/6_1/docutils_rstast.o \
c_code/6_1/stdlib_json.o \
c_code/6_1/stdlib_unicode.o \
c_code/6_1/stdlib_macros.o \
c_code/6_1/docutils_rst.o \
c_code/6_1/docutils_rstgen.o \
c_code/6_1/docutils_highlite.o \
c_code/6_1/stdlib_sequtils.o \
c_code/6_1/stdlib_algorithm.o \
c_code/6_1/nimsrc_sempass2.o \
c_code/6_1/nimsrc_guards.o \
c_code/6_1/stdlib_xmltree.o \
c_code/6_1/stdlib_cgi.o \
c_code/6_1/stdlib_cookies.o \
c_code/6_1/nimsrc_typesrenderer.o \
c_code/6_1/nimsrc_transf.o \
c_code/6_1/nimsrc_cgmeth.o \
c_code/6_1/nimsrc_lambdalifting.o \
c_code/6_1/nimsrc_lowerings.o \
c_code/6_1/nimsrc_vm.o \
c_code/6_1/nimsrc_vmgen.o \
c_code/6_1/stdlib_unsigned.o \
c_code/6_1/nimsrc_vmdeps.o \
c_code/6_1/nimsrc_vmmarshal.o \
c_code/6_1/nimsrc_evaltempl.o \
c_code/6_1/nimsrc_aliases.o \
c_code/6_1/nimsrc_patterns.o \
c_code/6_1/nimsrc_semmacrosanity.o \
c_code/6_1/nimsrc_semparallel.o \
c_code/6_1/nimsrc_plugins.o \
c_code/6_1/nimsrc_active.o \
c_code/6_1/nimsrc_locals.o \
c_code/6_1/nimsrc_cgen.o \
c_code/6_1/nimsrc_ccgutils.o \
c_code/6_1/nimsrc_cgendata.o \
c_code/6_1/nimsrc_ccgmerge.o \
c_code/6_1/nimsrc_jsgen.o \
c_code/6_1/nimsrc_passaux.o \
c_code/6_1/nimsrc_depends.o \
c_code/6_1/nimsrc_docgen2.o \
c_code/6_1/nimsrc_service.o \
c_code/6_1/stdlib_net.o \
c_code/6_1/stdlib_rawsockets.o \
c_code/6_1/nimsrc_modules.o \
c_code/6_1/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/6_1/nimsrc_nim.o \
c_code/6_1/stdlib_system.o \
c_code/6_1/nimsrc_testability.o \
c_code/6_1/nimsrc_commands.o \
c_code/6_1/stdlib_os.o \
c_code/6_1/stdlib_strutils.o \
c_code/6_1/stdlib_parseutils.o \
c_code/6_1/stdlib_times.o \
c_code/6_1/stdlib_posix.o \
c_code/6_1/nimsrc_msgs.o \
c_code/6_1/nimsrc_options.o \
c_code/6_1/nimsrc_lists.o \
c_code/6_1/stdlib_strtabs.o \
c_code/6_1/stdlib_hashes.o \
c_code/6_1/stdlib_osproc.o \
c_code/6_1/stdlib_streams.o \
c_code/6_1/stdlib_cpuinfo.o \
c_code/6_1/stdlib_sets.o \
c_code/6_1/stdlib_math.o \
c_code/6_1/stdlib_tables.o \
c_code/6_1/nimsrc_ropes.o \
c_code/6_1/nimsrc_platform.o \
c_code/6_1/nimsrc_nversion.o \
c_code/6_1/nimsrc_condsyms.o \
c_code/6_1/nimsrc_idents.o \
c_code/6_1/nimsrc_extccomp.o \
c_code/6_1/nimsrc_crc.o \
c_code/6_1/nimsrc_wordrecg.o \
c_code/6_1/nimsrc_nimblecmd.o \
c_code/6_1/stdlib_parseopt.o \
c_code/6_1/nimsrc_lexer.o \
c_code/6_1/nimsrc_nimlexbase.o \
c_code/6_1/nimsrc_llstream.o \
c_code/6_1/nimsrc_nimconf.o \
c_code/6_1/nimsrc_main.o \
c_code/6_1/nimsrc_ast.o \
c_code/6_1/stdlib_intsets.o \
c_code/6_1/nimsrc_idgen.o \
c_code/6_1/nimsrc_astalgo.o \
c_code/6_1/nimsrc_rodutils.o \
c_code/6_1/nimsrc_syntaxes.o \
c_code/6_1/nimsrc_parser.o \
c_code/6_1/nimsrc_pbraces.o \
c_code/6_1/nimsrc_filters.o \
c_code/6_1/nimsrc_renderer.o \
c_code/6_1/nimsrc_filter_tmpl.o \
c_code/6_1/nimsrc_rodread.o \
c_code/6_1/nimsrc_types.o \
c_code/6_1/nimsrc_trees.o \
c_code/6_1/stdlib_memfiles.o \
c_code/6_1/nimsrc_rodwrite.o \
c_code/6_1/nimsrc_passes.o \
c_code/6_1/nimsrc_magicsys.o \
c_code/6_1/nimsrc_nimsets.o \
c_code/6_1/nimsrc_bitsets.o \
c_code/6_1/nimsrc_importer.o \
c_code/6_1/nimsrc_lookups.o \
c_code/6_1/nimsrc_semdata.o \
c_code/6_1/nimsrc_treetab.o \
c_code/6_1/nimsrc_vmdef.o \
c_code/6_1/nimsrc_prettybase.o \
c_code/6_1/stdlib_lexbase.o \
c_code/6_1/nimsrc_sem.o \
c_code/6_1/nimsrc_semfold.o \
c_code/6_1/nimsrc_saturate.o \
c_code/6_1/nimsrc_procfind.o \
c_code/6_1/nimsrc_pragmas.o \
c_code/6_1/nimsrc_semtypinst.o \
c_code/6_1/nimsrc_sigmatch.o \
c_code/6_1/nimsrc_parampatterns.o \
c_code/6_1/nimsrc_pretty.o \
c_code/6_1/nimsrc_docgen.o \
c_code/6_1/docutils_rstast.o \
c_code/6_1/stdlib_json.o \
c_code/6_1/stdlib_unicode.o \
c_code/6_1/stdlib_macros.o \
c_code/6_1/docutils_rst.o \
c_code/6_1/docutils_rstgen.o \
c_code/6_1/docutils_highlite.o \
c_code/6_1/stdlib_sequtils.o \
c_code/6_1/stdlib_algorithm.o \
c_code/6_1/nimsrc_sempass2.o \
c_code/6_1/nimsrc_guards.o \
c_code/6_1/stdlib_xmltree.o \
c_code/6_1/stdlib_cgi.o \
c_code/6_1/stdlib_cookies.o \
c_code/6_1/nimsrc_typesrenderer.o \
c_code/6_1/nimsrc_transf.o \
c_code/6_1/nimsrc_cgmeth.o \
c_code/6_1/nimsrc_lambdalifting.o \
c_code/6_1/nimsrc_lowerings.o \
c_code/6_1/nimsrc_vm.o \
c_code/6_1/nimsrc_vmgen.o \
c_code/6_1/stdlib_unsigned.o \
c_code/6_1/nimsrc_vmdeps.o \
c_code/6_1/nimsrc_vmmarshal.o \
c_code/6_1/nimsrc_evaltempl.o \
c_code/6_1/nimsrc_aliases.o \
c_code/6_1/nimsrc_patterns.o \
c_code/6_1/nimsrc_semmacrosanity.o \
c_code/6_1/nimsrc_semparallel.o \
c_code/6_1/nimsrc_plugins.o \
c_code/6_1/nimsrc_active.o \
c_code/6_1/nimsrc_locals.o \
c_code/6_1/nimsrc_cgen.o \
c_code/6_1/nimsrc_ccgutils.o \
c_code/6_1/nimsrc_cgendata.o \
c_code/6_1/nimsrc_ccgmerge.o \
c_code/6_1/nimsrc_jsgen.o \
c_code/6_1/nimsrc_passaux.o \
c_code/6_1/nimsrc_depends.o \
c_code/6_1/nimsrc_docgen2.o \
c_code/6_1/nimsrc_service.o \
c_code/6_1/stdlib_net.o \
c_code/6_1/stdlib_rawsockets.o \
c_code/6_1/nimsrc_modules.o \
c_code/6_1/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  amd64)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_nim.c -o c_code/6_2/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_nim.c -o c_code/6_2/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_system.c -o c_code/6_2/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_system.c -o c_code/6_2/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_testability.c -o c_code/6_2/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_testability.c -o c_code/6_2/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_commands.c -o c_code/6_2/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_commands.c -o c_code/6_2/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_os.c -o c_code/6_2/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_os.c -o c_code/6_2/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_strutils.c -o c_code/6_2/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_strutils.c -o c_code/6_2/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_parseutils.c -o c_code/6_2/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_parseutils.c -o c_code/6_2/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_times.c -o c_code/6_2/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_times.c -o c_code/6_2/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_posix.c -o c_code/6_2/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_posix.c -o c_code/6_2/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_msgs.c -o c_code/6_2/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_msgs.c -o c_code/6_2/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_options.c -o c_code/6_2/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_options.c -o c_code/6_2/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_lists.c -o c_code/6_2/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_lists.c -o c_code/6_2/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_strtabs.c -o c_code/6_2/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_strtabs.c -o c_code/6_2/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_hashes.c -o c_code/6_2/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_hashes.c -o c_code/6_2/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_osproc.c -o c_code/6_2/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_osproc.c -o c_code/6_2/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_streams.c -o c_code/6_2/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_streams.c -o c_code/6_2/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_cpuinfo.c -o c_code/6_2/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_cpuinfo.c -o c_code/6_2/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_sets.c -o c_code/6_2/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_sets.c -o c_code/6_2/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_math.c -o c_code/6_2/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_math.c -o c_code/6_2/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_tables.c -o c_code/6_2/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_tables.c -o c_code/6_2/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_ropes.c -o c_code/6_2/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_ropes.c -o c_code/6_2/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_platform.c -o c_code/6_2/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_platform.c -o c_code/6_2/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_nversion.c -o c_code/6_2/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_nversion.c -o c_code/6_2/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_condsyms.c -o c_code/6_2/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_condsyms.c -o c_code/6_2/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_idents.c -o c_code/6_2/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_idents.c -o c_code/6_2/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_extccomp.c -o c_code/6_2/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_extccomp.c -o c_code/6_2/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_crc.c -o c_code/6_2/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_crc.c -o c_code/6_2/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_wordrecg.c -o c_code/6_2/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_wordrecg.c -o c_code/6_2/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_nimblecmd.c -o c_code/6_2/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_nimblecmd.c -o c_code/6_2/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_parseopt.c -o c_code/6_2/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_parseopt.c -o c_code/6_2/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_lexer.c -o c_code/6_2/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_lexer.c -o c_code/6_2/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_nimlexbase.c -o c_code/6_2/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_nimlexbase.c -o c_code/6_2/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_llstream.c -o c_code/6_2/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_llstream.c -o c_code/6_2/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_nimconf.c -o c_code/6_2/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_nimconf.c -o c_code/6_2/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_main.c -o c_code/6_2/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_main.c -o c_code/6_2/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_ast.c -o c_code/6_2/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_ast.c -o c_code/6_2/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_intsets.c -o c_code/6_2/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_intsets.c -o c_code/6_2/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_idgen.c -o c_code/6_2/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_idgen.c -o c_code/6_2/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_astalgo.c -o c_code/6_2/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_astalgo.c -o c_code/6_2/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_rodutils.c -o c_code/6_2/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_rodutils.c -o c_code/6_2/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_syntaxes.c -o c_code/6_2/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_syntaxes.c -o c_code/6_2/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_parser.c -o c_code/6_2/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_parser.c -o c_code/6_2/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_pbraces.c -o c_code/6_2/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_pbraces.c -o c_code/6_2/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_filters.c -o c_code/6_2/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_filters.c -o c_code/6_2/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_renderer.c -o c_code/6_2/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_renderer.c -o c_code/6_2/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_filter_tmpl.c -o c_code/6_2/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_filter_tmpl.c -o c_code/6_2/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_rodread.c -o c_code/6_2/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_rodread.c -o c_code/6_2/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_types.c -o c_code/6_2/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_types.c -o c_code/6_2/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_trees.c -o c_code/6_2/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_trees.c -o c_code/6_2/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_memfiles.c -o c_code/6_2/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_memfiles.c -o c_code/6_2/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_rodwrite.c -o c_code/6_2/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_rodwrite.c -o c_code/6_2/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_passes.c -o c_code/6_2/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_passes.c -o c_code/6_2/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_magicsys.c -o c_code/6_2/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_magicsys.c -o c_code/6_2/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_nimsets.c -o c_code/6_2/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_nimsets.c -o c_code/6_2/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_bitsets.c -o c_code/6_2/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_bitsets.c -o c_code/6_2/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_importer.c -o c_code/6_2/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_importer.c -o c_code/6_2/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_lookups.c -o c_code/6_2/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_lookups.c -o c_code/6_2/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_semdata.c -o c_code/6_2/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_semdata.c -o c_code/6_2/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_treetab.c -o c_code/6_2/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_treetab.c -o c_code/6_2/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_vmdef.c -o c_code/6_2/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_vmdef.c -o c_code/6_2/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_prettybase.c -o c_code/6_2/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_prettybase.c -o c_code/6_2/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_lexbase.c -o c_code/6_2/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_lexbase.c -o c_code/6_2/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_sem.c -o c_code/6_2/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_sem.c -o c_code/6_2/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_semfold.c -o c_code/6_2/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_semfold.c -o c_code/6_2/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_saturate.c -o c_code/6_2/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_saturate.c -o c_code/6_2/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_procfind.c -o c_code/6_2/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_procfind.c -o c_code/6_2/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_pragmas.c -o c_code/6_2/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_pragmas.c -o c_code/6_2/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_semtypinst.c -o c_code/6_2/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_semtypinst.c -o c_code/6_2/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_sigmatch.c -o c_code/6_2/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_sigmatch.c -o c_code/6_2/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_parampatterns.c -o c_code/6_2/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_parampatterns.c -o c_code/6_2/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_pretty.c -o c_code/6_2/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_pretty.c -o c_code/6_2/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_docgen.c -o c_code/6_2/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_docgen.c -o c_code/6_2/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/docutils_rstast.c -o c_code/6_2/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/docutils_rstast.c -o c_code/6_2/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_json.c -o c_code/6_2/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_json.c -o c_code/6_2/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_unicode.c -o c_code/6_2/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_unicode.c -o c_code/6_2/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_macros.c -o c_code/6_2/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_macros.c -o c_code/6_2/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/docutils_rst.c -o c_code/6_2/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/docutils_rst.c -o c_code/6_2/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/docutils_rstgen.c -o c_code/6_2/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/docutils_rstgen.c -o c_code/6_2/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/docutils_highlite.c -o c_code/6_2/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/docutils_highlite.c -o c_code/6_2/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_sequtils.c -o c_code/6_2/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_sequtils.c -o c_code/6_2/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_algorithm.c -o c_code/6_2/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_algorithm.c -o c_code/6_2/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_sempass2.c -o c_code/6_2/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_sempass2.c -o c_code/6_2/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_guards.c -o c_code/6_2/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_guards.c -o c_code/6_2/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_xmltree.c -o c_code/6_2/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_xmltree.c -o c_code/6_2/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_cgi.c -o c_code/6_2/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_cgi.c -o c_code/6_2/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_cookies.c -o c_code/6_2/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_cookies.c -o c_code/6_2/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_typesrenderer.c -o c_code/6_2/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_typesrenderer.c -o c_code/6_2/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_transf.c -o c_code/6_2/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_transf.c -o c_code/6_2/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_cgmeth.c -o c_code/6_2/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_cgmeth.c -o c_code/6_2/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_lambdalifting.c -o c_code/6_2/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_lambdalifting.c -o c_code/6_2/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_lowerings.c -o c_code/6_2/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_lowerings.c -o c_code/6_2/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_vm.c -o c_code/6_2/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_vm.c -o c_code/6_2/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_vmgen.c -o c_code/6_2/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_vmgen.c -o c_code/6_2/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_unsigned.c -o c_code/6_2/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_unsigned.c -o c_code/6_2/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_vmdeps.c -o c_code/6_2/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_vmdeps.c -o c_code/6_2/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_vmmarshal.c -o c_code/6_2/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_vmmarshal.c -o c_code/6_2/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_evaltempl.c -o c_code/6_2/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_evaltempl.c -o c_code/6_2/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_aliases.c -o c_code/6_2/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_aliases.c -o c_code/6_2/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_patterns.c -o c_code/6_2/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_patterns.c -o c_code/6_2/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_semmacrosanity.c -o c_code/6_2/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_semmacrosanity.c -o c_code/6_2/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_semparallel.c -o c_code/6_2/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_semparallel.c -o c_code/6_2/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_plugins.c -o c_code/6_2/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_plugins.c -o c_code/6_2/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_active.c -o c_code/6_2/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_active.c -o c_code/6_2/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_locals.c -o c_code/6_2/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_locals.c -o c_code/6_2/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_cgen.c -o c_code/6_2/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_cgen.c -o c_code/6_2/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_ccgutils.c -o c_code/6_2/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_ccgutils.c -o c_code/6_2/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_cgendata.c -o c_code/6_2/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_cgendata.c -o c_code/6_2/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_ccgmerge.c -o c_code/6_2/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_ccgmerge.c -o c_code/6_2/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_jsgen.c -o c_code/6_2/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_jsgen.c -o c_code/6_2/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_passaux.c -o c_code/6_2/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_passaux.c -o c_code/6_2/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_depends.c -o c_code/6_2/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_depends.c -o c_code/6_2/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_docgen2.c -o c_code/6_2/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_docgen2.c -o c_code/6_2/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_service.c -o c_code/6_2/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_service.c -o c_code/6_2/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_net.c -o c_code/6_2/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_net.c -o c_code/6_2/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_rawsockets.c -o c_code/6_2/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/stdlib_rawsockets.c -o c_code/6_2/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_modules.c -o c_code/6_2/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_modules.c -o c_code/6_2/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_nodejs.c -o c_code/6_2/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/6_2/nimsrc_nodejs.c -o c_code/6_2/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/6_2/nimsrc_nim.o \
c_code/6_2/stdlib_system.o \
c_code/6_2/nimsrc_testability.o \
c_code/6_2/nimsrc_commands.o \
c_code/6_2/stdlib_os.o \
c_code/6_2/stdlib_strutils.o \
c_code/6_2/stdlib_parseutils.o \
c_code/6_2/stdlib_times.o \
c_code/6_2/stdlib_posix.o \
c_code/6_2/nimsrc_msgs.o \
c_code/6_2/nimsrc_options.o \
c_code/6_2/nimsrc_lists.o \
c_code/6_2/stdlib_strtabs.o \
c_code/6_2/stdlib_hashes.o \
c_code/6_2/stdlib_osproc.o \
c_code/6_2/stdlib_streams.o \
c_code/6_2/stdlib_cpuinfo.o \
c_code/6_2/stdlib_sets.o \
c_code/6_2/stdlib_math.o \
c_code/6_2/stdlib_tables.o \
c_code/6_2/nimsrc_ropes.o \
c_code/6_2/nimsrc_platform.o \
c_code/6_2/nimsrc_nversion.o \
c_code/6_2/nimsrc_condsyms.o \
c_code/6_2/nimsrc_idents.o \
c_code/6_2/nimsrc_extccomp.o \
c_code/6_2/nimsrc_crc.o \
c_code/6_2/nimsrc_wordrecg.o \
c_code/6_2/nimsrc_nimblecmd.o \
c_code/6_2/stdlib_parseopt.o \
c_code/6_2/nimsrc_lexer.o \
c_code/6_2/nimsrc_nimlexbase.o \
c_code/6_2/nimsrc_llstream.o \
c_code/6_2/nimsrc_nimconf.o \
c_code/6_2/nimsrc_main.o \
c_code/6_2/nimsrc_ast.o \
c_code/6_2/stdlib_intsets.o \
c_code/6_2/nimsrc_idgen.o \
c_code/6_2/nimsrc_astalgo.o \
c_code/6_2/nimsrc_rodutils.o \
c_code/6_2/nimsrc_syntaxes.o \
c_code/6_2/nimsrc_parser.o \
c_code/6_2/nimsrc_pbraces.o \
c_code/6_2/nimsrc_filters.o \
c_code/6_2/nimsrc_renderer.o \
c_code/6_2/nimsrc_filter_tmpl.o \
c_code/6_2/nimsrc_rodread.o \
c_code/6_2/nimsrc_types.o \
c_code/6_2/nimsrc_trees.o \
c_code/6_2/stdlib_memfiles.o \
c_code/6_2/nimsrc_rodwrite.o \
c_code/6_2/nimsrc_passes.o \
c_code/6_2/nimsrc_magicsys.o \
c_code/6_2/nimsrc_nimsets.o \
c_code/6_2/nimsrc_bitsets.o \
c_code/6_2/nimsrc_importer.o \
c_code/6_2/nimsrc_lookups.o \
c_code/6_2/nimsrc_semdata.o \
c_code/6_2/nimsrc_treetab.o \
c_code/6_2/nimsrc_vmdef.o \
c_code/6_2/nimsrc_prettybase.o \
c_code/6_2/stdlib_lexbase.o \
c_code/6_2/nimsrc_sem.o \
c_code/6_2/nimsrc_semfold.o \
c_code/6_2/nimsrc_saturate.o \
c_code/6_2/nimsrc_procfind.o \
c_code/6_2/nimsrc_pragmas.o \
c_code/6_2/nimsrc_semtypinst.o \
c_code/6_2/nimsrc_sigmatch.o \
c_code/6_2/nimsrc_parampatterns.o \
c_code/6_2/nimsrc_pretty.o \
c_code/6_2/nimsrc_docgen.o \
c_code/6_2/docutils_rstast.o \
c_code/6_2/stdlib_json.o \
c_code/6_2/stdlib_unicode.o \
c_code/6_2/stdlib_macros.o \
c_code/6_2/docutils_rst.o \
c_code/6_2/docutils_rstgen.o \
c_code/6_2/docutils_highlite.o \
c_code/6_2/stdlib_sequtils.o \
c_code/6_2/stdlib_algorithm.o \
c_code/6_2/nimsrc_sempass2.o \
c_code/6_2/nimsrc_guards.o \
c_code/6_2/stdlib_xmltree.o \
c_code/6_2/stdlib_cgi.o \
c_code/6_2/stdlib_cookies.o \
c_code/6_2/nimsrc_typesrenderer.o \
c_code/6_2/nimsrc_transf.o \
c_code/6_2/nimsrc_cgmeth.o \
c_code/6_2/nimsrc_lambdalifting.o \
c_code/6_2/nimsrc_lowerings.o \
c_code/6_2/nimsrc_vm.o \
c_code/6_2/nimsrc_vmgen.o \
c_code/6_2/stdlib_unsigned.o \
c_code/6_2/nimsrc_vmdeps.o \
c_code/6_2/nimsrc_vmmarshal.o \
c_code/6_2/nimsrc_evaltempl.o \
c_code/6_2/nimsrc_aliases.o \
c_code/6_2/nimsrc_patterns.o \
c_code/6_2/nimsrc_semmacrosanity.o \
c_code/6_2/nimsrc_semparallel.o \
c_code/6_2/nimsrc_plugins.o \
c_code/6_2/nimsrc_active.o \
c_code/6_2/nimsrc_locals.o \
c_code/6_2/nimsrc_cgen.o \
c_code/6_2/nimsrc_ccgutils.o \
c_code/6_2/nimsrc_cgendata.o \
c_code/6_2/nimsrc_ccgmerge.o \
c_code/6_2/nimsrc_jsgen.o \
c_code/6_2/nimsrc_passaux.o \
c_code/6_2/nimsrc_depends.o \
c_code/6_2/nimsrc_docgen2.o \
c_code/6_2/nimsrc_service.o \
c_code/6_2/stdlib_net.o \
c_code/6_2/stdlib_rawsockets.o \
c_code/6_2/nimsrc_modules.o \
c_code/6_2/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/6_2/nimsrc_nim.o \
c_code/6_2/stdlib_system.o \
c_code/6_2/nimsrc_testability.o \
c_code/6_2/nimsrc_commands.o \
c_code/6_2/stdlib_os.o \
c_code/6_2/stdlib_strutils.o \
c_code/6_2/stdlib_parseutils.o \
c_code/6_2/stdlib_times.o \
c_code/6_2/stdlib_posix.o \
c_code/6_2/nimsrc_msgs.o \
c_code/6_2/nimsrc_options.o \
c_code/6_2/nimsrc_lists.o \
c_code/6_2/stdlib_strtabs.o \
c_code/6_2/stdlib_hashes.o \
c_code/6_2/stdlib_osproc.o \
c_code/6_2/stdlib_streams.o \
c_code/6_2/stdlib_cpuinfo.o \
c_code/6_2/stdlib_sets.o \
c_code/6_2/stdlib_math.o \
c_code/6_2/stdlib_tables.o \
c_code/6_2/nimsrc_ropes.o \
c_code/6_2/nimsrc_platform.o \
c_code/6_2/nimsrc_nversion.o \
c_code/6_2/nimsrc_condsyms.o \
c_code/6_2/nimsrc_idents.o \
c_code/6_2/nimsrc_extccomp.o \
c_code/6_2/nimsrc_crc.o \
c_code/6_2/nimsrc_wordrecg.o \
c_code/6_2/nimsrc_nimblecmd.o \
c_code/6_2/stdlib_parseopt.o \
c_code/6_2/nimsrc_lexer.o \
c_code/6_2/nimsrc_nimlexbase.o \
c_code/6_2/nimsrc_llstream.o \
c_code/6_2/nimsrc_nimconf.o \
c_code/6_2/nimsrc_main.o \
c_code/6_2/nimsrc_ast.o \
c_code/6_2/stdlib_intsets.o \
c_code/6_2/nimsrc_idgen.o \
c_code/6_2/nimsrc_astalgo.o \
c_code/6_2/nimsrc_rodutils.o \
c_code/6_2/nimsrc_syntaxes.o \
c_code/6_2/nimsrc_parser.o \
c_code/6_2/nimsrc_pbraces.o \
c_code/6_2/nimsrc_filters.o \
c_code/6_2/nimsrc_renderer.o \
c_code/6_2/nimsrc_filter_tmpl.o \
c_code/6_2/nimsrc_rodread.o \
c_code/6_2/nimsrc_types.o \
c_code/6_2/nimsrc_trees.o \
c_code/6_2/stdlib_memfiles.o \
c_code/6_2/nimsrc_rodwrite.o \
c_code/6_2/nimsrc_passes.o \
c_code/6_2/nimsrc_magicsys.o \
c_code/6_2/nimsrc_nimsets.o \
c_code/6_2/nimsrc_bitsets.o \
c_code/6_2/nimsrc_importer.o \
c_code/6_2/nimsrc_lookups.o \
c_code/6_2/nimsrc_semdata.o \
c_code/6_2/nimsrc_treetab.o \
c_code/6_2/nimsrc_vmdef.o \
c_code/6_2/nimsrc_prettybase.o \
c_code/6_2/stdlib_lexbase.o \
c_code/6_2/nimsrc_sem.o \
c_code/6_2/nimsrc_semfold.o \
c_code/6_2/nimsrc_saturate.o \
c_code/6_2/nimsrc_procfind.o \
c_code/6_2/nimsrc_pragmas.o \
c_code/6_2/nimsrc_semtypinst.o \
c_code/6_2/nimsrc_sigmatch.o \
c_code/6_2/nimsrc_parampatterns.o \
c_code/6_2/nimsrc_pretty.o \
c_code/6_2/nimsrc_docgen.o \
c_code/6_2/docutils_rstast.o \
c_code/6_2/stdlib_json.o \
c_code/6_2/stdlib_unicode.o \
c_code/6_2/stdlib_macros.o \
c_code/6_2/docutils_rst.o \
c_code/6_2/docutils_rstgen.o \
c_code/6_2/docutils_highlite.o \
c_code/6_2/stdlib_sequtils.o \
c_code/6_2/stdlib_algorithm.o \
c_code/6_2/nimsrc_sempass2.o \
c_code/6_2/nimsrc_guards.o \
c_code/6_2/stdlib_xmltree.o \
c_code/6_2/stdlib_cgi.o \
c_code/6_2/stdlib_cookies.o \
c_code/6_2/nimsrc_typesrenderer.o \
c_code/6_2/nimsrc_transf.o \
c_code/6_2/nimsrc_cgmeth.o \
c_code/6_2/nimsrc_lambdalifting.o \
c_code/6_2/nimsrc_lowerings.o \
c_code/6_2/nimsrc_vm.o \
c_code/6_2/nimsrc_vmgen.o \
c_code/6_2/stdlib_unsigned.o \
c_code/6_2/nimsrc_vmdeps.o \
c_code/6_2/nimsrc_vmmarshal.o \
c_code/6_2/nimsrc_evaltempl.o \
c_code/6_2/nimsrc_aliases.o \
c_code/6_2/nimsrc_patterns.o \
c_code/6_2/nimsrc_semmacrosanity.o \
c_code/6_2/nimsrc_semparallel.o \
c_code/6_2/nimsrc_plugins.o \
c_code/6_2/nimsrc_active.o \
c_code/6_2/nimsrc_locals.o \
c_code/6_2/nimsrc_cgen.o \
c_code/6_2/nimsrc_ccgutils.o \
c_code/6_2/nimsrc_cgendata.o \
c_code/6_2/nimsrc_ccgmerge.o \
c_code/6_2/nimsrc_jsgen.o \
c_code/6_2/nimsrc_passaux.o \
c_code/6_2/nimsrc_depends.o \
c_code/6_2/nimsrc_docgen2.o \
c_code/6_2/nimsrc_service.o \
c_code/6_2/stdlib_net.o \
c_code/6_2/stdlib_rawsockets.o \
c_code/6_2/nimsrc_modules.o \
c_code/6_2/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  powerpc64)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  arm)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  sparc)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  mips)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  powerpc)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  *)
    echo "Error: no C code generated for: [$myos: $mycpu]"
    exit 1
    ;;
  esac
  ;;
openbsd) 
  case $mycpu in
  i386)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_nim.c -o c_code/7_1/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_nim.c -o c_code/7_1/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_system.c -o c_code/7_1/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_system.c -o c_code/7_1/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_testability.c -o c_code/7_1/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_testability.c -o c_code/7_1/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_commands.c -o c_code/7_1/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_commands.c -o c_code/7_1/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_os.c -o c_code/7_1/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_os.c -o c_code/7_1/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_strutils.c -o c_code/7_1/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_strutils.c -o c_code/7_1/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_parseutils.c -o c_code/7_1/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_parseutils.c -o c_code/7_1/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_times.c -o c_code/7_1/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_times.c -o c_code/7_1/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_posix.c -o c_code/7_1/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_posix.c -o c_code/7_1/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_msgs.c -o c_code/7_1/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_msgs.c -o c_code/7_1/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_options.c -o c_code/7_1/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_options.c -o c_code/7_1/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_lists.c -o c_code/7_1/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_lists.c -o c_code/7_1/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_strtabs.c -o c_code/7_1/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_strtabs.c -o c_code/7_1/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_hashes.c -o c_code/7_1/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_hashes.c -o c_code/7_1/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_osproc.c -o c_code/7_1/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_osproc.c -o c_code/7_1/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_streams.c -o c_code/7_1/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_streams.c -o c_code/7_1/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_cpuinfo.c -o c_code/7_1/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_cpuinfo.c -o c_code/7_1/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_sets.c -o c_code/7_1/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_sets.c -o c_code/7_1/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_math.c -o c_code/7_1/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_math.c -o c_code/7_1/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_tables.c -o c_code/7_1/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_tables.c -o c_code/7_1/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_ropes.c -o c_code/7_1/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_ropes.c -o c_code/7_1/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_platform.c -o c_code/7_1/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_platform.c -o c_code/7_1/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_nversion.c -o c_code/7_1/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_nversion.c -o c_code/7_1/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_condsyms.c -o c_code/7_1/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_condsyms.c -o c_code/7_1/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_idents.c -o c_code/7_1/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_idents.c -o c_code/7_1/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_extccomp.c -o c_code/7_1/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_extccomp.c -o c_code/7_1/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_crc.c -o c_code/7_1/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_crc.c -o c_code/7_1/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_wordrecg.c -o c_code/7_1/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_wordrecg.c -o c_code/7_1/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_nimblecmd.c -o c_code/7_1/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_nimblecmd.c -o c_code/7_1/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_parseopt.c -o c_code/7_1/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_parseopt.c -o c_code/7_1/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_lexer.c -o c_code/7_1/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_lexer.c -o c_code/7_1/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_nimlexbase.c -o c_code/7_1/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_nimlexbase.c -o c_code/7_1/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_llstream.c -o c_code/7_1/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_llstream.c -o c_code/7_1/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_nimconf.c -o c_code/7_1/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_nimconf.c -o c_code/7_1/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_main.c -o c_code/7_1/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_main.c -o c_code/7_1/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_ast.c -o c_code/7_1/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_ast.c -o c_code/7_1/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_intsets.c -o c_code/7_1/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_intsets.c -o c_code/7_1/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_idgen.c -o c_code/7_1/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_idgen.c -o c_code/7_1/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_astalgo.c -o c_code/7_1/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_astalgo.c -o c_code/7_1/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_rodutils.c -o c_code/7_1/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_rodutils.c -o c_code/7_1/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_syntaxes.c -o c_code/7_1/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_syntaxes.c -o c_code/7_1/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_parser.c -o c_code/7_1/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_parser.c -o c_code/7_1/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_pbraces.c -o c_code/7_1/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_pbraces.c -o c_code/7_1/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_filters.c -o c_code/7_1/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_filters.c -o c_code/7_1/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_renderer.c -o c_code/7_1/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_renderer.c -o c_code/7_1/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_filter_tmpl.c -o c_code/7_1/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_filter_tmpl.c -o c_code/7_1/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_rodread.c -o c_code/7_1/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_rodread.c -o c_code/7_1/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_types.c -o c_code/7_1/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_types.c -o c_code/7_1/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_trees.c -o c_code/7_1/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_trees.c -o c_code/7_1/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_memfiles.c -o c_code/7_1/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_memfiles.c -o c_code/7_1/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_rodwrite.c -o c_code/7_1/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_rodwrite.c -o c_code/7_1/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_passes.c -o c_code/7_1/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_passes.c -o c_code/7_1/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_magicsys.c -o c_code/7_1/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_magicsys.c -o c_code/7_1/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_nimsets.c -o c_code/7_1/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_nimsets.c -o c_code/7_1/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_bitsets.c -o c_code/7_1/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_bitsets.c -o c_code/7_1/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_importer.c -o c_code/7_1/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_importer.c -o c_code/7_1/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_lookups.c -o c_code/7_1/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_lookups.c -o c_code/7_1/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_semdata.c -o c_code/7_1/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_semdata.c -o c_code/7_1/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_treetab.c -o c_code/7_1/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_treetab.c -o c_code/7_1/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_vmdef.c -o c_code/7_1/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_vmdef.c -o c_code/7_1/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_prettybase.c -o c_code/7_1/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_prettybase.c -o c_code/7_1/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_lexbase.c -o c_code/7_1/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_lexbase.c -o c_code/7_1/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_sem.c -o c_code/7_1/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_sem.c -o c_code/7_1/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_semfold.c -o c_code/7_1/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_semfold.c -o c_code/7_1/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_saturate.c -o c_code/7_1/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_saturate.c -o c_code/7_1/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_procfind.c -o c_code/7_1/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_procfind.c -o c_code/7_1/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_pragmas.c -o c_code/7_1/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_pragmas.c -o c_code/7_1/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_semtypinst.c -o c_code/7_1/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_semtypinst.c -o c_code/7_1/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_sigmatch.c -o c_code/7_1/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_sigmatch.c -o c_code/7_1/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_parampatterns.c -o c_code/7_1/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_parampatterns.c -o c_code/7_1/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_pretty.c -o c_code/7_1/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_pretty.c -o c_code/7_1/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_docgen.c -o c_code/7_1/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_docgen.c -o c_code/7_1/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/docutils_rstast.c -o c_code/7_1/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/docutils_rstast.c -o c_code/7_1/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_json.c -o c_code/7_1/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_json.c -o c_code/7_1/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_unicode.c -o c_code/7_1/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_unicode.c -o c_code/7_1/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_macros.c -o c_code/7_1/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_macros.c -o c_code/7_1/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/docutils_rst.c -o c_code/7_1/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/docutils_rst.c -o c_code/7_1/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/docutils_rstgen.c -o c_code/7_1/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/docutils_rstgen.c -o c_code/7_1/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/docutils_highlite.c -o c_code/7_1/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/docutils_highlite.c -o c_code/7_1/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_sequtils.c -o c_code/7_1/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_sequtils.c -o c_code/7_1/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_algorithm.c -o c_code/7_1/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_algorithm.c -o c_code/7_1/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_sempass2.c -o c_code/7_1/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_sempass2.c -o c_code/7_1/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_guards.c -o c_code/7_1/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_guards.c -o c_code/7_1/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_xmltree.c -o c_code/7_1/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_xmltree.c -o c_code/7_1/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_cgi.c -o c_code/7_1/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_cgi.c -o c_code/7_1/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_cookies.c -o c_code/7_1/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_cookies.c -o c_code/7_1/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_typesrenderer.c -o c_code/7_1/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_typesrenderer.c -o c_code/7_1/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_transf.c -o c_code/7_1/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_transf.c -o c_code/7_1/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_cgmeth.c -o c_code/7_1/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_cgmeth.c -o c_code/7_1/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_lambdalifting.c -o c_code/7_1/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_lambdalifting.c -o c_code/7_1/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_lowerings.c -o c_code/7_1/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_lowerings.c -o c_code/7_1/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_vm.c -o c_code/7_1/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_vm.c -o c_code/7_1/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_vmgen.c -o c_code/7_1/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_vmgen.c -o c_code/7_1/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_unsigned.c -o c_code/7_1/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_unsigned.c -o c_code/7_1/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_vmdeps.c -o c_code/7_1/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_vmdeps.c -o c_code/7_1/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_vmmarshal.c -o c_code/7_1/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_vmmarshal.c -o c_code/7_1/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_evaltempl.c -o c_code/7_1/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_evaltempl.c -o c_code/7_1/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_aliases.c -o c_code/7_1/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_aliases.c -o c_code/7_1/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_patterns.c -o c_code/7_1/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_patterns.c -o c_code/7_1/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_semmacrosanity.c -o c_code/7_1/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_semmacrosanity.c -o c_code/7_1/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_semparallel.c -o c_code/7_1/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_semparallel.c -o c_code/7_1/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_plugins.c -o c_code/7_1/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_plugins.c -o c_code/7_1/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_active.c -o c_code/7_1/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_active.c -o c_code/7_1/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_locals.c -o c_code/7_1/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_locals.c -o c_code/7_1/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_cgen.c -o c_code/7_1/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_cgen.c -o c_code/7_1/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_ccgutils.c -o c_code/7_1/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_ccgutils.c -o c_code/7_1/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_cgendata.c -o c_code/7_1/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_cgendata.c -o c_code/7_1/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_ccgmerge.c -o c_code/7_1/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_ccgmerge.c -o c_code/7_1/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_jsgen.c -o c_code/7_1/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_jsgen.c -o c_code/7_1/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_passaux.c -o c_code/7_1/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_passaux.c -o c_code/7_1/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_depends.c -o c_code/7_1/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_depends.c -o c_code/7_1/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_docgen2.c -o c_code/7_1/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_docgen2.c -o c_code/7_1/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_service.c -o c_code/7_1/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_service.c -o c_code/7_1/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_net.c -o c_code/7_1/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_net.c -o c_code/7_1/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_rawsockets.c -o c_code/7_1/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/stdlib_rawsockets.c -o c_code/7_1/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_modules.c -o c_code/7_1/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_modules.c -o c_code/7_1/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_nodejs.c -o c_code/7_1/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_1/nimsrc_nodejs.c -o c_code/7_1/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/7_1/nimsrc_nim.o \
c_code/7_1/stdlib_system.o \
c_code/7_1/nimsrc_testability.o \
c_code/7_1/nimsrc_commands.o \
c_code/7_1/stdlib_os.o \
c_code/7_1/stdlib_strutils.o \
c_code/7_1/stdlib_parseutils.o \
c_code/7_1/stdlib_times.o \
c_code/7_1/stdlib_posix.o \
c_code/7_1/nimsrc_msgs.o \
c_code/7_1/nimsrc_options.o \
c_code/7_1/nimsrc_lists.o \
c_code/7_1/stdlib_strtabs.o \
c_code/7_1/stdlib_hashes.o \
c_code/7_1/stdlib_osproc.o \
c_code/7_1/stdlib_streams.o \
c_code/7_1/stdlib_cpuinfo.o \
c_code/7_1/stdlib_sets.o \
c_code/7_1/stdlib_math.o \
c_code/7_1/stdlib_tables.o \
c_code/7_1/nimsrc_ropes.o \
c_code/7_1/nimsrc_platform.o \
c_code/7_1/nimsrc_nversion.o \
c_code/7_1/nimsrc_condsyms.o \
c_code/7_1/nimsrc_idents.o \
c_code/7_1/nimsrc_extccomp.o \
c_code/7_1/nimsrc_crc.o \
c_code/7_1/nimsrc_wordrecg.o \
c_code/7_1/nimsrc_nimblecmd.o \
c_code/7_1/stdlib_parseopt.o \
c_code/7_1/nimsrc_lexer.o \
c_code/7_1/nimsrc_nimlexbase.o \
c_code/7_1/nimsrc_llstream.o \
c_code/7_1/nimsrc_nimconf.o \
c_code/7_1/nimsrc_main.o \
c_code/7_1/nimsrc_ast.o \
c_code/7_1/stdlib_intsets.o \
c_code/7_1/nimsrc_idgen.o \
c_code/7_1/nimsrc_astalgo.o \
c_code/7_1/nimsrc_rodutils.o \
c_code/7_1/nimsrc_syntaxes.o \
c_code/7_1/nimsrc_parser.o \
c_code/7_1/nimsrc_pbraces.o \
c_code/7_1/nimsrc_filters.o \
c_code/7_1/nimsrc_renderer.o \
c_code/7_1/nimsrc_filter_tmpl.o \
c_code/7_1/nimsrc_rodread.o \
c_code/7_1/nimsrc_types.o \
c_code/7_1/nimsrc_trees.o \
c_code/7_1/stdlib_memfiles.o \
c_code/7_1/nimsrc_rodwrite.o \
c_code/7_1/nimsrc_passes.o \
c_code/7_1/nimsrc_magicsys.o \
c_code/7_1/nimsrc_nimsets.o \
c_code/7_1/nimsrc_bitsets.o \
c_code/7_1/nimsrc_importer.o \
c_code/7_1/nimsrc_lookups.o \
c_code/7_1/nimsrc_semdata.o \
c_code/7_1/nimsrc_treetab.o \
c_code/7_1/nimsrc_vmdef.o \
c_code/7_1/nimsrc_prettybase.o \
c_code/7_1/stdlib_lexbase.o \
c_code/7_1/nimsrc_sem.o \
c_code/7_1/nimsrc_semfold.o \
c_code/7_1/nimsrc_saturate.o \
c_code/7_1/nimsrc_procfind.o \
c_code/7_1/nimsrc_pragmas.o \
c_code/7_1/nimsrc_semtypinst.o \
c_code/7_1/nimsrc_sigmatch.o \
c_code/7_1/nimsrc_parampatterns.o \
c_code/7_1/nimsrc_pretty.o \
c_code/7_1/nimsrc_docgen.o \
c_code/7_1/docutils_rstast.o \
c_code/7_1/stdlib_json.o \
c_code/7_1/stdlib_unicode.o \
c_code/7_1/stdlib_macros.o \
c_code/7_1/docutils_rst.o \
c_code/7_1/docutils_rstgen.o \
c_code/7_1/docutils_highlite.o \
c_code/7_1/stdlib_sequtils.o \
c_code/7_1/stdlib_algorithm.o \
c_code/7_1/nimsrc_sempass2.o \
c_code/7_1/nimsrc_guards.o \
c_code/7_1/stdlib_xmltree.o \
c_code/7_1/stdlib_cgi.o \
c_code/7_1/stdlib_cookies.o \
c_code/7_1/nimsrc_typesrenderer.o \
c_code/7_1/nimsrc_transf.o \
c_code/7_1/nimsrc_cgmeth.o \
c_code/7_1/nimsrc_lambdalifting.o \
c_code/7_1/nimsrc_lowerings.o \
c_code/7_1/nimsrc_vm.o \
c_code/7_1/nimsrc_vmgen.o \
c_code/7_1/stdlib_unsigned.o \
c_code/7_1/nimsrc_vmdeps.o \
c_code/7_1/nimsrc_vmmarshal.o \
c_code/7_1/nimsrc_evaltempl.o \
c_code/7_1/nimsrc_aliases.o \
c_code/7_1/nimsrc_patterns.o \
c_code/7_1/nimsrc_semmacrosanity.o \
c_code/7_1/nimsrc_semparallel.o \
c_code/7_1/nimsrc_plugins.o \
c_code/7_1/nimsrc_active.o \
c_code/7_1/nimsrc_locals.o \
c_code/7_1/nimsrc_cgen.o \
c_code/7_1/nimsrc_ccgutils.o \
c_code/7_1/nimsrc_cgendata.o \
c_code/7_1/nimsrc_ccgmerge.o \
c_code/7_1/nimsrc_jsgen.o \
c_code/7_1/nimsrc_passaux.o \
c_code/7_1/nimsrc_depends.o \
c_code/7_1/nimsrc_docgen2.o \
c_code/7_1/nimsrc_service.o \
c_code/7_1/stdlib_net.o \
c_code/7_1/stdlib_rawsockets.o \
c_code/7_1/nimsrc_modules.o \
c_code/7_1/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/7_1/nimsrc_nim.o \
c_code/7_1/stdlib_system.o \
c_code/7_1/nimsrc_testability.o \
c_code/7_1/nimsrc_commands.o \
c_code/7_1/stdlib_os.o \
c_code/7_1/stdlib_strutils.o \
c_code/7_1/stdlib_parseutils.o \
c_code/7_1/stdlib_times.o \
c_code/7_1/stdlib_posix.o \
c_code/7_1/nimsrc_msgs.o \
c_code/7_1/nimsrc_options.o \
c_code/7_1/nimsrc_lists.o \
c_code/7_1/stdlib_strtabs.o \
c_code/7_1/stdlib_hashes.o \
c_code/7_1/stdlib_osproc.o \
c_code/7_1/stdlib_streams.o \
c_code/7_1/stdlib_cpuinfo.o \
c_code/7_1/stdlib_sets.o \
c_code/7_1/stdlib_math.o \
c_code/7_1/stdlib_tables.o \
c_code/7_1/nimsrc_ropes.o \
c_code/7_1/nimsrc_platform.o \
c_code/7_1/nimsrc_nversion.o \
c_code/7_1/nimsrc_condsyms.o \
c_code/7_1/nimsrc_idents.o \
c_code/7_1/nimsrc_extccomp.o \
c_code/7_1/nimsrc_crc.o \
c_code/7_1/nimsrc_wordrecg.o \
c_code/7_1/nimsrc_nimblecmd.o \
c_code/7_1/stdlib_parseopt.o \
c_code/7_1/nimsrc_lexer.o \
c_code/7_1/nimsrc_nimlexbase.o \
c_code/7_1/nimsrc_llstream.o \
c_code/7_1/nimsrc_nimconf.o \
c_code/7_1/nimsrc_main.o \
c_code/7_1/nimsrc_ast.o \
c_code/7_1/stdlib_intsets.o \
c_code/7_1/nimsrc_idgen.o \
c_code/7_1/nimsrc_astalgo.o \
c_code/7_1/nimsrc_rodutils.o \
c_code/7_1/nimsrc_syntaxes.o \
c_code/7_1/nimsrc_parser.o \
c_code/7_1/nimsrc_pbraces.o \
c_code/7_1/nimsrc_filters.o \
c_code/7_1/nimsrc_renderer.o \
c_code/7_1/nimsrc_filter_tmpl.o \
c_code/7_1/nimsrc_rodread.o \
c_code/7_1/nimsrc_types.o \
c_code/7_1/nimsrc_trees.o \
c_code/7_1/stdlib_memfiles.o \
c_code/7_1/nimsrc_rodwrite.o \
c_code/7_1/nimsrc_passes.o \
c_code/7_1/nimsrc_magicsys.o \
c_code/7_1/nimsrc_nimsets.o \
c_code/7_1/nimsrc_bitsets.o \
c_code/7_1/nimsrc_importer.o \
c_code/7_1/nimsrc_lookups.o \
c_code/7_1/nimsrc_semdata.o \
c_code/7_1/nimsrc_treetab.o \
c_code/7_1/nimsrc_vmdef.o \
c_code/7_1/nimsrc_prettybase.o \
c_code/7_1/stdlib_lexbase.o \
c_code/7_1/nimsrc_sem.o \
c_code/7_1/nimsrc_semfold.o \
c_code/7_1/nimsrc_saturate.o \
c_code/7_1/nimsrc_procfind.o \
c_code/7_1/nimsrc_pragmas.o \
c_code/7_1/nimsrc_semtypinst.o \
c_code/7_1/nimsrc_sigmatch.o \
c_code/7_1/nimsrc_parampatterns.o \
c_code/7_1/nimsrc_pretty.o \
c_code/7_1/nimsrc_docgen.o \
c_code/7_1/docutils_rstast.o \
c_code/7_1/stdlib_json.o \
c_code/7_1/stdlib_unicode.o \
c_code/7_1/stdlib_macros.o \
c_code/7_1/docutils_rst.o \
c_code/7_1/docutils_rstgen.o \
c_code/7_1/docutils_highlite.o \
c_code/7_1/stdlib_sequtils.o \
c_code/7_1/stdlib_algorithm.o \
c_code/7_1/nimsrc_sempass2.o \
c_code/7_1/nimsrc_guards.o \
c_code/7_1/stdlib_xmltree.o \
c_code/7_1/stdlib_cgi.o \
c_code/7_1/stdlib_cookies.o \
c_code/7_1/nimsrc_typesrenderer.o \
c_code/7_1/nimsrc_transf.o \
c_code/7_1/nimsrc_cgmeth.o \
c_code/7_1/nimsrc_lambdalifting.o \
c_code/7_1/nimsrc_lowerings.o \
c_code/7_1/nimsrc_vm.o \
c_code/7_1/nimsrc_vmgen.o \
c_code/7_1/stdlib_unsigned.o \
c_code/7_1/nimsrc_vmdeps.o \
c_code/7_1/nimsrc_vmmarshal.o \
c_code/7_1/nimsrc_evaltempl.o \
c_code/7_1/nimsrc_aliases.o \
c_code/7_1/nimsrc_patterns.o \
c_code/7_1/nimsrc_semmacrosanity.o \
c_code/7_1/nimsrc_semparallel.o \
c_code/7_1/nimsrc_plugins.o \
c_code/7_1/nimsrc_active.o \
c_code/7_1/nimsrc_locals.o \
c_code/7_1/nimsrc_cgen.o \
c_code/7_1/nimsrc_ccgutils.o \
c_code/7_1/nimsrc_cgendata.o \
c_code/7_1/nimsrc_ccgmerge.o \
c_code/7_1/nimsrc_jsgen.o \
c_code/7_1/nimsrc_passaux.o \
c_code/7_1/nimsrc_depends.o \
c_code/7_1/nimsrc_docgen2.o \
c_code/7_1/nimsrc_service.o \
c_code/7_1/stdlib_net.o \
c_code/7_1/stdlib_rawsockets.o \
c_code/7_1/nimsrc_modules.o \
c_code/7_1/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  amd64)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_nim.c -o c_code/7_2/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_nim.c -o c_code/7_2/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_system.c -o c_code/7_2/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_system.c -o c_code/7_2/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_testability.c -o c_code/7_2/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_testability.c -o c_code/7_2/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_commands.c -o c_code/7_2/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_commands.c -o c_code/7_2/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_os.c -o c_code/7_2/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_os.c -o c_code/7_2/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_strutils.c -o c_code/7_2/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_strutils.c -o c_code/7_2/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_parseutils.c -o c_code/7_2/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_parseutils.c -o c_code/7_2/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_times.c -o c_code/7_2/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_times.c -o c_code/7_2/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_posix.c -o c_code/7_2/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_posix.c -o c_code/7_2/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_msgs.c -o c_code/7_2/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_msgs.c -o c_code/7_2/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_options.c -o c_code/7_2/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_options.c -o c_code/7_2/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_lists.c -o c_code/7_2/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_lists.c -o c_code/7_2/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_strtabs.c -o c_code/7_2/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_strtabs.c -o c_code/7_2/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_hashes.c -o c_code/7_2/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_hashes.c -o c_code/7_2/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_osproc.c -o c_code/7_2/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_osproc.c -o c_code/7_2/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_streams.c -o c_code/7_2/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_streams.c -o c_code/7_2/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_cpuinfo.c -o c_code/7_2/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_cpuinfo.c -o c_code/7_2/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_sets.c -o c_code/7_2/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_sets.c -o c_code/7_2/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_math.c -o c_code/7_2/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_math.c -o c_code/7_2/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_tables.c -o c_code/7_2/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_tables.c -o c_code/7_2/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_ropes.c -o c_code/7_2/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_ropes.c -o c_code/7_2/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_platform.c -o c_code/7_2/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_platform.c -o c_code/7_2/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_nversion.c -o c_code/7_2/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_nversion.c -o c_code/7_2/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_condsyms.c -o c_code/7_2/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_condsyms.c -o c_code/7_2/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_idents.c -o c_code/7_2/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_idents.c -o c_code/7_2/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_extccomp.c -o c_code/7_2/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_extccomp.c -o c_code/7_2/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_crc.c -o c_code/7_2/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_crc.c -o c_code/7_2/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_wordrecg.c -o c_code/7_2/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_wordrecg.c -o c_code/7_2/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_nimblecmd.c -o c_code/7_2/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_nimblecmd.c -o c_code/7_2/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_parseopt.c -o c_code/7_2/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_parseopt.c -o c_code/7_2/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_lexer.c -o c_code/7_2/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_lexer.c -o c_code/7_2/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_nimlexbase.c -o c_code/7_2/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_nimlexbase.c -o c_code/7_2/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_llstream.c -o c_code/7_2/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_llstream.c -o c_code/7_2/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_nimconf.c -o c_code/7_2/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_nimconf.c -o c_code/7_2/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_main.c -o c_code/7_2/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_main.c -o c_code/7_2/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_ast.c -o c_code/7_2/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_ast.c -o c_code/7_2/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_intsets.c -o c_code/7_2/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_intsets.c -o c_code/7_2/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_idgen.c -o c_code/7_2/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_idgen.c -o c_code/7_2/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_astalgo.c -o c_code/7_2/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_astalgo.c -o c_code/7_2/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_rodutils.c -o c_code/7_2/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_rodutils.c -o c_code/7_2/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_syntaxes.c -o c_code/7_2/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_syntaxes.c -o c_code/7_2/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_parser.c -o c_code/7_2/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_parser.c -o c_code/7_2/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_pbraces.c -o c_code/7_2/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_pbraces.c -o c_code/7_2/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_filters.c -o c_code/7_2/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_filters.c -o c_code/7_2/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_renderer.c -o c_code/7_2/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_renderer.c -o c_code/7_2/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_filter_tmpl.c -o c_code/7_2/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_filter_tmpl.c -o c_code/7_2/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_rodread.c -o c_code/7_2/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_rodread.c -o c_code/7_2/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_types.c -o c_code/7_2/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_types.c -o c_code/7_2/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_trees.c -o c_code/7_2/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_trees.c -o c_code/7_2/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_memfiles.c -o c_code/7_2/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_memfiles.c -o c_code/7_2/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_rodwrite.c -o c_code/7_2/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_rodwrite.c -o c_code/7_2/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_passes.c -o c_code/7_2/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_passes.c -o c_code/7_2/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_magicsys.c -o c_code/7_2/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_magicsys.c -o c_code/7_2/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_nimsets.c -o c_code/7_2/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_nimsets.c -o c_code/7_2/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_bitsets.c -o c_code/7_2/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_bitsets.c -o c_code/7_2/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_importer.c -o c_code/7_2/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_importer.c -o c_code/7_2/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_lookups.c -o c_code/7_2/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_lookups.c -o c_code/7_2/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_semdata.c -o c_code/7_2/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_semdata.c -o c_code/7_2/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_treetab.c -o c_code/7_2/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_treetab.c -o c_code/7_2/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_vmdef.c -o c_code/7_2/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_vmdef.c -o c_code/7_2/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_prettybase.c -o c_code/7_2/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_prettybase.c -o c_code/7_2/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_lexbase.c -o c_code/7_2/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_lexbase.c -o c_code/7_2/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_sem.c -o c_code/7_2/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_sem.c -o c_code/7_2/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_semfold.c -o c_code/7_2/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_semfold.c -o c_code/7_2/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_saturate.c -o c_code/7_2/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_saturate.c -o c_code/7_2/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_procfind.c -o c_code/7_2/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_procfind.c -o c_code/7_2/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_pragmas.c -o c_code/7_2/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_pragmas.c -o c_code/7_2/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_semtypinst.c -o c_code/7_2/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_semtypinst.c -o c_code/7_2/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_sigmatch.c -o c_code/7_2/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_sigmatch.c -o c_code/7_2/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_parampatterns.c -o c_code/7_2/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_parampatterns.c -o c_code/7_2/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_pretty.c -o c_code/7_2/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_pretty.c -o c_code/7_2/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_docgen.c -o c_code/7_2/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_docgen.c -o c_code/7_2/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/docutils_rstast.c -o c_code/7_2/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/docutils_rstast.c -o c_code/7_2/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_json.c -o c_code/7_2/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_json.c -o c_code/7_2/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_unicode.c -o c_code/7_2/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_unicode.c -o c_code/7_2/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_macros.c -o c_code/7_2/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_macros.c -o c_code/7_2/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/docutils_rst.c -o c_code/7_2/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/docutils_rst.c -o c_code/7_2/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/docutils_rstgen.c -o c_code/7_2/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/docutils_rstgen.c -o c_code/7_2/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/docutils_highlite.c -o c_code/7_2/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/docutils_highlite.c -o c_code/7_2/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_sequtils.c -o c_code/7_2/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_sequtils.c -o c_code/7_2/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_algorithm.c -o c_code/7_2/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_algorithm.c -o c_code/7_2/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_sempass2.c -o c_code/7_2/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_sempass2.c -o c_code/7_2/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_guards.c -o c_code/7_2/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_guards.c -o c_code/7_2/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_xmltree.c -o c_code/7_2/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_xmltree.c -o c_code/7_2/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_cgi.c -o c_code/7_2/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_cgi.c -o c_code/7_2/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_cookies.c -o c_code/7_2/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_cookies.c -o c_code/7_2/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_typesrenderer.c -o c_code/7_2/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_typesrenderer.c -o c_code/7_2/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_transf.c -o c_code/7_2/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_transf.c -o c_code/7_2/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_cgmeth.c -o c_code/7_2/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_cgmeth.c -o c_code/7_2/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_lambdalifting.c -o c_code/7_2/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_lambdalifting.c -o c_code/7_2/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_lowerings.c -o c_code/7_2/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_lowerings.c -o c_code/7_2/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_vm.c -o c_code/7_2/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_vm.c -o c_code/7_2/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_vmgen.c -o c_code/7_2/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_vmgen.c -o c_code/7_2/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_unsigned.c -o c_code/7_2/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_unsigned.c -o c_code/7_2/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_vmdeps.c -o c_code/7_2/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_vmdeps.c -o c_code/7_2/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_vmmarshal.c -o c_code/7_2/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_vmmarshal.c -o c_code/7_2/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_evaltempl.c -o c_code/7_2/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_evaltempl.c -o c_code/7_2/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_aliases.c -o c_code/7_2/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_aliases.c -o c_code/7_2/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_patterns.c -o c_code/7_2/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_patterns.c -o c_code/7_2/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_semmacrosanity.c -o c_code/7_2/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_semmacrosanity.c -o c_code/7_2/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_semparallel.c -o c_code/7_2/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_semparallel.c -o c_code/7_2/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_plugins.c -o c_code/7_2/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_plugins.c -o c_code/7_2/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_active.c -o c_code/7_2/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_active.c -o c_code/7_2/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_locals.c -o c_code/7_2/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_locals.c -o c_code/7_2/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_cgen.c -o c_code/7_2/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_cgen.c -o c_code/7_2/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_ccgutils.c -o c_code/7_2/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_ccgutils.c -o c_code/7_2/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_cgendata.c -o c_code/7_2/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_cgendata.c -o c_code/7_2/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_ccgmerge.c -o c_code/7_2/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_ccgmerge.c -o c_code/7_2/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_jsgen.c -o c_code/7_2/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_jsgen.c -o c_code/7_2/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_passaux.c -o c_code/7_2/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_passaux.c -o c_code/7_2/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_depends.c -o c_code/7_2/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_depends.c -o c_code/7_2/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_docgen2.c -o c_code/7_2/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_docgen2.c -o c_code/7_2/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_service.c -o c_code/7_2/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_service.c -o c_code/7_2/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_net.c -o c_code/7_2/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_net.c -o c_code/7_2/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_rawsockets.c -o c_code/7_2/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/stdlib_rawsockets.c -o c_code/7_2/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_modules.c -o c_code/7_2/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_modules.c -o c_code/7_2/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_nodejs.c -o c_code/7_2/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/7_2/nimsrc_nodejs.c -o c_code/7_2/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/7_2/nimsrc_nim.o \
c_code/7_2/stdlib_system.o \
c_code/7_2/nimsrc_testability.o \
c_code/7_2/nimsrc_commands.o \
c_code/7_2/stdlib_os.o \
c_code/7_2/stdlib_strutils.o \
c_code/7_2/stdlib_parseutils.o \
c_code/7_2/stdlib_times.o \
c_code/7_2/stdlib_posix.o \
c_code/7_2/nimsrc_msgs.o \
c_code/7_2/nimsrc_options.o \
c_code/7_2/nimsrc_lists.o \
c_code/7_2/stdlib_strtabs.o \
c_code/7_2/stdlib_hashes.o \
c_code/7_2/stdlib_osproc.o \
c_code/7_2/stdlib_streams.o \
c_code/7_2/stdlib_cpuinfo.o \
c_code/7_2/stdlib_sets.o \
c_code/7_2/stdlib_math.o \
c_code/7_2/stdlib_tables.o \
c_code/7_2/nimsrc_ropes.o \
c_code/7_2/nimsrc_platform.o \
c_code/7_2/nimsrc_nversion.o \
c_code/7_2/nimsrc_condsyms.o \
c_code/7_2/nimsrc_idents.o \
c_code/7_2/nimsrc_extccomp.o \
c_code/7_2/nimsrc_crc.o \
c_code/7_2/nimsrc_wordrecg.o \
c_code/7_2/nimsrc_nimblecmd.o \
c_code/7_2/stdlib_parseopt.o \
c_code/7_2/nimsrc_lexer.o \
c_code/7_2/nimsrc_nimlexbase.o \
c_code/7_2/nimsrc_llstream.o \
c_code/7_2/nimsrc_nimconf.o \
c_code/7_2/nimsrc_main.o \
c_code/7_2/nimsrc_ast.o \
c_code/7_2/stdlib_intsets.o \
c_code/7_2/nimsrc_idgen.o \
c_code/7_2/nimsrc_astalgo.o \
c_code/7_2/nimsrc_rodutils.o \
c_code/7_2/nimsrc_syntaxes.o \
c_code/7_2/nimsrc_parser.o \
c_code/7_2/nimsrc_pbraces.o \
c_code/7_2/nimsrc_filters.o \
c_code/7_2/nimsrc_renderer.o \
c_code/7_2/nimsrc_filter_tmpl.o \
c_code/7_2/nimsrc_rodread.o \
c_code/7_2/nimsrc_types.o \
c_code/7_2/nimsrc_trees.o \
c_code/7_2/stdlib_memfiles.o \
c_code/7_2/nimsrc_rodwrite.o \
c_code/7_2/nimsrc_passes.o \
c_code/7_2/nimsrc_magicsys.o \
c_code/7_2/nimsrc_nimsets.o \
c_code/7_2/nimsrc_bitsets.o \
c_code/7_2/nimsrc_importer.o \
c_code/7_2/nimsrc_lookups.o \
c_code/7_2/nimsrc_semdata.o \
c_code/7_2/nimsrc_treetab.o \
c_code/7_2/nimsrc_vmdef.o \
c_code/7_2/nimsrc_prettybase.o \
c_code/7_2/stdlib_lexbase.o \
c_code/7_2/nimsrc_sem.o \
c_code/7_2/nimsrc_semfold.o \
c_code/7_2/nimsrc_saturate.o \
c_code/7_2/nimsrc_procfind.o \
c_code/7_2/nimsrc_pragmas.o \
c_code/7_2/nimsrc_semtypinst.o \
c_code/7_2/nimsrc_sigmatch.o \
c_code/7_2/nimsrc_parampatterns.o \
c_code/7_2/nimsrc_pretty.o \
c_code/7_2/nimsrc_docgen.o \
c_code/7_2/docutils_rstast.o \
c_code/7_2/stdlib_json.o \
c_code/7_2/stdlib_unicode.o \
c_code/7_2/stdlib_macros.o \
c_code/7_2/docutils_rst.o \
c_code/7_2/docutils_rstgen.o \
c_code/7_2/docutils_highlite.o \
c_code/7_2/stdlib_sequtils.o \
c_code/7_2/stdlib_algorithm.o \
c_code/7_2/nimsrc_sempass2.o \
c_code/7_2/nimsrc_guards.o \
c_code/7_2/stdlib_xmltree.o \
c_code/7_2/stdlib_cgi.o \
c_code/7_2/stdlib_cookies.o \
c_code/7_2/nimsrc_typesrenderer.o \
c_code/7_2/nimsrc_transf.o \
c_code/7_2/nimsrc_cgmeth.o \
c_code/7_2/nimsrc_lambdalifting.o \
c_code/7_2/nimsrc_lowerings.o \
c_code/7_2/nimsrc_vm.o \
c_code/7_2/nimsrc_vmgen.o \
c_code/7_2/stdlib_unsigned.o \
c_code/7_2/nimsrc_vmdeps.o \
c_code/7_2/nimsrc_vmmarshal.o \
c_code/7_2/nimsrc_evaltempl.o \
c_code/7_2/nimsrc_aliases.o \
c_code/7_2/nimsrc_patterns.o \
c_code/7_2/nimsrc_semmacrosanity.o \
c_code/7_2/nimsrc_semparallel.o \
c_code/7_2/nimsrc_plugins.o \
c_code/7_2/nimsrc_active.o \
c_code/7_2/nimsrc_locals.o \
c_code/7_2/nimsrc_cgen.o \
c_code/7_2/nimsrc_ccgutils.o \
c_code/7_2/nimsrc_cgendata.o \
c_code/7_2/nimsrc_ccgmerge.o \
c_code/7_2/nimsrc_jsgen.o \
c_code/7_2/nimsrc_passaux.o \
c_code/7_2/nimsrc_depends.o \
c_code/7_2/nimsrc_docgen2.o \
c_code/7_2/nimsrc_service.o \
c_code/7_2/stdlib_net.o \
c_code/7_2/stdlib_rawsockets.o \
c_code/7_2/nimsrc_modules.o \
c_code/7_2/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/7_2/nimsrc_nim.o \
c_code/7_2/stdlib_system.o \
c_code/7_2/nimsrc_testability.o \
c_code/7_2/nimsrc_commands.o \
c_code/7_2/stdlib_os.o \
c_code/7_2/stdlib_strutils.o \
c_code/7_2/stdlib_parseutils.o \
c_code/7_2/stdlib_times.o \
c_code/7_2/stdlib_posix.o \
c_code/7_2/nimsrc_msgs.o \
c_code/7_2/nimsrc_options.o \
c_code/7_2/nimsrc_lists.o \
c_code/7_2/stdlib_strtabs.o \
c_code/7_2/stdlib_hashes.o \
c_code/7_2/stdlib_osproc.o \
c_code/7_2/stdlib_streams.o \
c_code/7_2/stdlib_cpuinfo.o \
c_code/7_2/stdlib_sets.o \
c_code/7_2/stdlib_math.o \
c_code/7_2/stdlib_tables.o \
c_code/7_2/nimsrc_ropes.o \
c_code/7_2/nimsrc_platform.o \
c_code/7_2/nimsrc_nversion.o \
c_code/7_2/nimsrc_condsyms.o \
c_code/7_2/nimsrc_idents.o \
c_code/7_2/nimsrc_extccomp.o \
c_code/7_2/nimsrc_crc.o \
c_code/7_2/nimsrc_wordrecg.o \
c_code/7_2/nimsrc_nimblecmd.o \
c_code/7_2/stdlib_parseopt.o \
c_code/7_2/nimsrc_lexer.o \
c_code/7_2/nimsrc_nimlexbase.o \
c_code/7_2/nimsrc_llstream.o \
c_code/7_2/nimsrc_nimconf.o \
c_code/7_2/nimsrc_main.o \
c_code/7_2/nimsrc_ast.o \
c_code/7_2/stdlib_intsets.o \
c_code/7_2/nimsrc_idgen.o \
c_code/7_2/nimsrc_astalgo.o \
c_code/7_2/nimsrc_rodutils.o \
c_code/7_2/nimsrc_syntaxes.o \
c_code/7_2/nimsrc_parser.o \
c_code/7_2/nimsrc_pbraces.o \
c_code/7_2/nimsrc_filters.o \
c_code/7_2/nimsrc_renderer.o \
c_code/7_2/nimsrc_filter_tmpl.o \
c_code/7_2/nimsrc_rodread.o \
c_code/7_2/nimsrc_types.o \
c_code/7_2/nimsrc_trees.o \
c_code/7_2/stdlib_memfiles.o \
c_code/7_2/nimsrc_rodwrite.o \
c_code/7_2/nimsrc_passes.o \
c_code/7_2/nimsrc_magicsys.o \
c_code/7_2/nimsrc_nimsets.o \
c_code/7_2/nimsrc_bitsets.o \
c_code/7_2/nimsrc_importer.o \
c_code/7_2/nimsrc_lookups.o \
c_code/7_2/nimsrc_semdata.o \
c_code/7_2/nimsrc_treetab.o \
c_code/7_2/nimsrc_vmdef.o \
c_code/7_2/nimsrc_prettybase.o \
c_code/7_2/stdlib_lexbase.o \
c_code/7_2/nimsrc_sem.o \
c_code/7_2/nimsrc_semfold.o \
c_code/7_2/nimsrc_saturate.o \
c_code/7_2/nimsrc_procfind.o \
c_code/7_2/nimsrc_pragmas.o \
c_code/7_2/nimsrc_semtypinst.o \
c_code/7_2/nimsrc_sigmatch.o \
c_code/7_2/nimsrc_parampatterns.o \
c_code/7_2/nimsrc_pretty.o \
c_code/7_2/nimsrc_docgen.o \
c_code/7_2/docutils_rstast.o \
c_code/7_2/stdlib_json.o \
c_code/7_2/stdlib_unicode.o \
c_code/7_2/stdlib_macros.o \
c_code/7_2/docutils_rst.o \
c_code/7_2/docutils_rstgen.o \
c_code/7_2/docutils_highlite.o \
c_code/7_2/stdlib_sequtils.o \
c_code/7_2/stdlib_algorithm.o \
c_code/7_2/nimsrc_sempass2.o \
c_code/7_2/nimsrc_guards.o \
c_code/7_2/stdlib_xmltree.o \
c_code/7_2/stdlib_cgi.o \
c_code/7_2/stdlib_cookies.o \
c_code/7_2/nimsrc_typesrenderer.o \
c_code/7_2/nimsrc_transf.o \
c_code/7_2/nimsrc_cgmeth.o \
c_code/7_2/nimsrc_lambdalifting.o \
c_code/7_2/nimsrc_lowerings.o \
c_code/7_2/nimsrc_vm.o \
c_code/7_2/nimsrc_vmgen.o \
c_code/7_2/stdlib_unsigned.o \
c_code/7_2/nimsrc_vmdeps.o \
c_code/7_2/nimsrc_vmmarshal.o \
c_code/7_2/nimsrc_evaltempl.o \
c_code/7_2/nimsrc_aliases.o \
c_code/7_2/nimsrc_patterns.o \
c_code/7_2/nimsrc_semmacrosanity.o \
c_code/7_2/nimsrc_semparallel.o \
c_code/7_2/nimsrc_plugins.o \
c_code/7_2/nimsrc_active.o \
c_code/7_2/nimsrc_locals.o \
c_code/7_2/nimsrc_cgen.o \
c_code/7_2/nimsrc_ccgutils.o \
c_code/7_2/nimsrc_cgendata.o \
c_code/7_2/nimsrc_ccgmerge.o \
c_code/7_2/nimsrc_jsgen.o \
c_code/7_2/nimsrc_passaux.o \
c_code/7_2/nimsrc_depends.o \
c_code/7_2/nimsrc_docgen2.o \
c_code/7_2/nimsrc_service.o \
c_code/7_2/stdlib_net.o \
c_code/7_2/stdlib_rawsockets.o \
c_code/7_2/nimsrc_modules.o \
c_code/7_2/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  powerpc64)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  arm)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  sparc)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  mips)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  powerpc)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  *)
    echo "Error: no C code generated for: [$myos: $mycpu]"
    exit 1
    ;;
  esac
  ;;
haiku) 
  case $mycpu in
  i386)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_nim.c -o c_code/8_1/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_nim.c -o c_code/8_1/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_system.c -o c_code/8_1/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_system.c -o c_code/8_1/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_testability.c -o c_code/8_1/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_testability.c -o c_code/8_1/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_commands.c -o c_code/8_1/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_commands.c -o c_code/8_1/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_os.c -o c_code/8_1/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_os.c -o c_code/8_1/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_strutils.c -o c_code/8_1/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_strutils.c -o c_code/8_1/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_parseutils.c -o c_code/8_1/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_parseutils.c -o c_code/8_1/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_times.c -o c_code/8_1/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_times.c -o c_code/8_1/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_posix.c -o c_code/8_1/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_posix.c -o c_code/8_1/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_msgs.c -o c_code/8_1/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_msgs.c -o c_code/8_1/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_options.c -o c_code/8_1/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_options.c -o c_code/8_1/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_lists.c -o c_code/8_1/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_lists.c -o c_code/8_1/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_strtabs.c -o c_code/8_1/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_strtabs.c -o c_code/8_1/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_hashes.c -o c_code/8_1/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_hashes.c -o c_code/8_1/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_osproc.c -o c_code/8_1/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_osproc.c -o c_code/8_1/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_streams.c -o c_code/8_1/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_streams.c -o c_code/8_1/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_cpuinfo.c -o c_code/8_1/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_cpuinfo.c -o c_code/8_1/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_sets.c -o c_code/8_1/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_sets.c -o c_code/8_1/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_math.c -o c_code/8_1/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_math.c -o c_code/8_1/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_tables.c -o c_code/8_1/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_tables.c -o c_code/8_1/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_ropes.c -o c_code/8_1/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_ropes.c -o c_code/8_1/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_platform.c -o c_code/8_1/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_platform.c -o c_code/8_1/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_nversion.c -o c_code/8_1/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_nversion.c -o c_code/8_1/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_condsyms.c -o c_code/8_1/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_condsyms.c -o c_code/8_1/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_idents.c -o c_code/8_1/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_idents.c -o c_code/8_1/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_extccomp.c -o c_code/8_1/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_extccomp.c -o c_code/8_1/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_crc.c -o c_code/8_1/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_crc.c -o c_code/8_1/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_wordrecg.c -o c_code/8_1/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_wordrecg.c -o c_code/8_1/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_nimblecmd.c -o c_code/8_1/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_nimblecmd.c -o c_code/8_1/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_parseopt.c -o c_code/8_1/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_parseopt.c -o c_code/8_1/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_lexer.c -o c_code/8_1/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_lexer.c -o c_code/8_1/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_nimlexbase.c -o c_code/8_1/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_nimlexbase.c -o c_code/8_1/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_llstream.c -o c_code/8_1/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_llstream.c -o c_code/8_1/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_nimconf.c -o c_code/8_1/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_nimconf.c -o c_code/8_1/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_main.c -o c_code/8_1/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_main.c -o c_code/8_1/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_ast.c -o c_code/8_1/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_ast.c -o c_code/8_1/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_intsets.c -o c_code/8_1/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_intsets.c -o c_code/8_1/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_idgen.c -o c_code/8_1/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_idgen.c -o c_code/8_1/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_astalgo.c -o c_code/8_1/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_astalgo.c -o c_code/8_1/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_rodutils.c -o c_code/8_1/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_rodutils.c -o c_code/8_1/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_syntaxes.c -o c_code/8_1/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_syntaxes.c -o c_code/8_1/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_parser.c -o c_code/8_1/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_parser.c -o c_code/8_1/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_pbraces.c -o c_code/8_1/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_pbraces.c -o c_code/8_1/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_filters.c -o c_code/8_1/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_filters.c -o c_code/8_1/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_renderer.c -o c_code/8_1/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_renderer.c -o c_code/8_1/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_filter_tmpl.c -o c_code/8_1/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_filter_tmpl.c -o c_code/8_1/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_rodread.c -o c_code/8_1/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_rodread.c -o c_code/8_1/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_types.c -o c_code/8_1/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_types.c -o c_code/8_1/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_trees.c -o c_code/8_1/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_trees.c -o c_code/8_1/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_memfiles.c -o c_code/8_1/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_memfiles.c -o c_code/8_1/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_rodwrite.c -o c_code/8_1/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_rodwrite.c -o c_code/8_1/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_passes.c -o c_code/8_1/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_passes.c -o c_code/8_1/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_magicsys.c -o c_code/8_1/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_magicsys.c -o c_code/8_1/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_nimsets.c -o c_code/8_1/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_nimsets.c -o c_code/8_1/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_bitsets.c -o c_code/8_1/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_bitsets.c -o c_code/8_1/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_importer.c -o c_code/8_1/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_importer.c -o c_code/8_1/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_lookups.c -o c_code/8_1/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_lookups.c -o c_code/8_1/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_semdata.c -o c_code/8_1/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_semdata.c -o c_code/8_1/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_treetab.c -o c_code/8_1/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_treetab.c -o c_code/8_1/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_vmdef.c -o c_code/8_1/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_vmdef.c -o c_code/8_1/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_prettybase.c -o c_code/8_1/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_prettybase.c -o c_code/8_1/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_lexbase.c -o c_code/8_1/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_lexbase.c -o c_code/8_1/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_sem.c -o c_code/8_1/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_sem.c -o c_code/8_1/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_semfold.c -o c_code/8_1/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_semfold.c -o c_code/8_1/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_saturate.c -o c_code/8_1/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_saturate.c -o c_code/8_1/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_procfind.c -o c_code/8_1/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_procfind.c -o c_code/8_1/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_pragmas.c -o c_code/8_1/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_pragmas.c -o c_code/8_1/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_semtypinst.c -o c_code/8_1/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_semtypinst.c -o c_code/8_1/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_sigmatch.c -o c_code/8_1/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_sigmatch.c -o c_code/8_1/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_parampatterns.c -o c_code/8_1/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_parampatterns.c -o c_code/8_1/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_pretty.c -o c_code/8_1/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_pretty.c -o c_code/8_1/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_docgen.c -o c_code/8_1/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_docgen.c -o c_code/8_1/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/docutils_rstast.c -o c_code/8_1/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/docutils_rstast.c -o c_code/8_1/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_json.c -o c_code/8_1/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_json.c -o c_code/8_1/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_unicode.c -o c_code/8_1/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_unicode.c -o c_code/8_1/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_macros.c -o c_code/8_1/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_macros.c -o c_code/8_1/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/docutils_rst.c -o c_code/8_1/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/docutils_rst.c -o c_code/8_1/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/docutils_rstgen.c -o c_code/8_1/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/docutils_rstgen.c -o c_code/8_1/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/docutils_highlite.c -o c_code/8_1/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/docutils_highlite.c -o c_code/8_1/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_sequtils.c -o c_code/8_1/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_sequtils.c -o c_code/8_1/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_algorithm.c -o c_code/8_1/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_algorithm.c -o c_code/8_1/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_sempass2.c -o c_code/8_1/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_sempass2.c -o c_code/8_1/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_guards.c -o c_code/8_1/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_guards.c -o c_code/8_1/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_xmltree.c -o c_code/8_1/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_xmltree.c -o c_code/8_1/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_cgi.c -o c_code/8_1/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_cgi.c -o c_code/8_1/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_cookies.c -o c_code/8_1/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_cookies.c -o c_code/8_1/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_typesrenderer.c -o c_code/8_1/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_typesrenderer.c -o c_code/8_1/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_transf.c -o c_code/8_1/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_transf.c -o c_code/8_1/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_cgmeth.c -o c_code/8_1/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_cgmeth.c -o c_code/8_1/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_lambdalifting.c -o c_code/8_1/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_lambdalifting.c -o c_code/8_1/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_lowerings.c -o c_code/8_1/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_lowerings.c -o c_code/8_1/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_vm.c -o c_code/8_1/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_vm.c -o c_code/8_1/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_vmgen.c -o c_code/8_1/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_vmgen.c -o c_code/8_1/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_unsigned.c -o c_code/8_1/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_unsigned.c -o c_code/8_1/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_vmdeps.c -o c_code/8_1/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_vmdeps.c -o c_code/8_1/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_vmmarshal.c -o c_code/8_1/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_vmmarshal.c -o c_code/8_1/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_evaltempl.c -o c_code/8_1/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_evaltempl.c -o c_code/8_1/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_aliases.c -o c_code/8_1/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_aliases.c -o c_code/8_1/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_patterns.c -o c_code/8_1/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_patterns.c -o c_code/8_1/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_semmacrosanity.c -o c_code/8_1/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_semmacrosanity.c -o c_code/8_1/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_semparallel.c -o c_code/8_1/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_semparallel.c -o c_code/8_1/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_plugins.c -o c_code/8_1/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_plugins.c -o c_code/8_1/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_active.c -o c_code/8_1/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_active.c -o c_code/8_1/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_locals.c -o c_code/8_1/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_locals.c -o c_code/8_1/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_cgen.c -o c_code/8_1/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_cgen.c -o c_code/8_1/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_ccgutils.c -o c_code/8_1/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_ccgutils.c -o c_code/8_1/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_cgendata.c -o c_code/8_1/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_cgendata.c -o c_code/8_1/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_ccgmerge.c -o c_code/8_1/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_ccgmerge.c -o c_code/8_1/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_jsgen.c -o c_code/8_1/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_jsgen.c -o c_code/8_1/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_passaux.c -o c_code/8_1/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_passaux.c -o c_code/8_1/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_depends.c -o c_code/8_1/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_depends.c -o c_code/8_1/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_docgen2.c -o c_code/8_1/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_docgen2.c -o c_code/8_1/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_service.c -o c_code/8_1/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_service.c -o c_code/8_1/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_net.c -o c_code/8_1/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_net.c -o c_code/8_1/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_rawsockets.c -o c_code/8_1/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/stdlib_rawsockets.c -o c_code/8_1/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_modules.c -o c_code/8_1/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_modules.c -o c_code/8_1/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_nodejs.c -o c_code/8_1/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_1/nimsrc_nodejs.c -o c_code/8_1/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/8_1/nimsrc_nim.o \
c_code/8_1/stdlib_system.o \
c_code/8_1/nimsrc_testability.o \
c_code/8_1/nimsrc_commands.o \
c_code/8_1/stdlib_os.o \
c_code/8_1/stdlib_strutils.o \
c_code/8_1/stdlib_parseutils.o \
c_code/8_1/stdlib_times.o \
c_code/8_1/stdlib_posix.o \
c_code/8_1/nimsrc_msgs.o \
c_code/8_1/nimsrc_options.o \
c_code/8_1/nimsrc_lists.o \
c_code/8_1/stdlib_strtabs.o \
c_code/8_1/stdlib_hashes.o \
c_code/8_1/stdlib_osproc.o \
c_code/8_1/stdlib_streams.o \
c_code/8_1/stdlib_cpuinfo.o \
c_code/8_1/stdlib_sets.o \
c_code/8_1/stdlib_math.o \
c_code/8_1/stdlib_tables.o \
c_code/8_1/nimsrc_ropes.o \
c_code/8_1/nimsrc_platform.o \
c_code/8_1/nimsrc_nversion.o \
c_code/8_1/nimsrc_condsyms.o \
c_code/8_1/nimsrc_idents.o \
c_code/8_1/nimsrc_extccomp.o \
c_code/8_1/nimsrc_crc.o \
c_code/8_1/nimsrc_wordrecg.o \
c_code/8_1/nimsrc_nimblecmd.o \
c_code/8_1/stdlib_parseopt.o \
c_code/8_1/nimsrc_lexer.o \
c_code/8_1/nimsrc_nimlexbase.o \
c_code/8_1/nimsrc_llstream.o \
c_code/8_1/nimsrc_nimconf.o \
c_code/8_1/nimsrc_main.o \
c_code/8_1/nimsrc_ast.o \
c_code/8_1/stdlib_intsets.o \
c_code/8_1/nimsrc_idgen.o \
c_code/8_1/nimsrc_astalgo.o \
c_code/8_1/nimsrc_rodutils.o \
c_code/8_1/nimsrc_syntaxes.o \
c_code/8_1/nimsrc_parser.o \
c_code/8_1/nimsrc_pbraces.o \
c_code/8_1/nimsrc_filters.o \
c_code/8_1/nimsrc_renderer.o \
c_code/8_1/nimsrc_filter_tmpl.o \
c_code/8_1/nimsrc_rodread.o \
c_code/8_1/nimsrc_types.o \
c_code/8_1/nimsrc_trees.o \
c_code/8_1/stdlib_memfiles.o \
c_code/8_1/nimsrc_rodwrite.o \
c_code/8_1/nimsrc_passes.o \
c_code/8_1/nimsrc_magicsys.o \
c_code/8_1/nimsrc_nimsets.o \
c_code/8_1/nimsrc_bitsets.o \
c_code/8_1/nimsrc_importer.o \
c_code/8_1/nimsrc_lookups.o \
c_code/8_1/nimsrc_semdata.o \
c_code/8_1/nimsrc_treetab.o \
c_code/8_1/nimsrc_vmdef.o \
c_code/8_1/nimsrc_prettybase.o \
c_code/8_1/stdlib_lexbase.o \
c_code/8_1/nimsrc_sem.o \
c_code/8_1/nimsrc_semfold.o \
c_code/8_1/nimsrc_saturate.o \
c_code/8_1/nimsrc_procfind.o \
c_code/8_1/nimsrc_pragmas.o \
c_code/8_1/nimsrc_semtypinst.o \
c_code/8_1/nimsrc_sigmatch.o \
c_code/8_1/nimsrc_parampatterns.o \
c_code/8_1/nimsrc_pretty.o \
c_code/8_1/nimsrc_docgen.o \
c_code/8_1/docutils_rstast.o \
c_code/8_1/stdlib_json.o \
c_code/8_1/stdlib_unicode.o \
c_code/8_1/stdlib_macros.o \
c_code/8_1/docutils_rst.o \
c_code/8_1/docutils_rstgen.o \
c_code/8_1/docutils_highlite.o \
c_code/8_1/stdlib_sequtils.o \
c_code/8_1/stdlib_algorithm.o \
c_code/8_1/nimsrc_sempass2.o \
c_code/8_1/nimsrc_guards.o \
c_code/8_1/stdlib_xmltree.o \
c_code/8_1/stdlib_cgi.o \
c_code/8_1/stdlib_cookies.o \
c_code/8_1/nimsrc_typesrenderer.o \
c_code/8_1/nimsrc_transf.o \
c_code/8_1/nimsrc_cgmeth.o \
c_code/8_1/nimsrc_lambdalifting.o \
c_code/8_1/nimsrc_lowerings.o \
c_code/8_1/nimsrc_vm.o \
c_code/8_1/nimsrc_vmgen.o \
c_code/8_1/stdlib_unsigned.o \
c_code/8_1/nimsrc_vmdeps.o \
c_code/8_1/nimsrc_vmmarshal.o \
c_code/8_1/nimsrc_evaltempl.o \
c_code/8_1/nimsrc_aliases.o \
c_code/8_1/nimsrc_patterns.o \
c_code/8_1/nimsrc_semmacrosanity.o \
c_code/8_1/nimsrc_semparallel.o \
c_code/8_1/nimsrc_plugins.o \
c_code/8_1/nimsrc_active.o \
c_code/8_1/nimsrc_locals.o \
c_code/8_1/nimsrc_cgen.o \
c_code/8_1/nimsrc_ccgutils.o \
c_code/8_1/nimsrc_cgendata.o \
c_code/8_1/nimsrc_ccgmerge.o \
c_code/8_1/nimsrc_jsgen.o \
c_code/8_1/nimsrc_passaux.o \
c_code/8_1/nimsrc_depends.o \
c_code/8_1/nimsrc_docgen2.o \
c_code/8_1/nimsrc_service.o \
c_code/8_1/stdlib_net.o \
c_code/8_1/stdlib_rawsockets.o \
c_code/8_1/nimsrc_modules.o \
c_code/8_1/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/8_1/nimsrc_nim.o \
c_code/8_1/stdlib_system.o \
c_code/8_1/nimsrc_testability.o \
c_code/8_1/nimsrc_commands.o \
c_code/8_1/stdlib_os.o \
c_code/8_1/stdlib_strutils.o \
c_code/8_1/stdlib_parseutils.o \
c_code/8_1/stdlib_times.o \
c_code/8_1/stdlib_posix.o \
c_code/8_1/nimsrc_msgs.o \
c_code/8_1/nimsrc_options.o \
c_code/8_1/nimsrc_lists.o \
c_code/8_1/stdlib_strtabs.o \
c_code/8_1/stdlib_hashes.o \
c_code/8_1/stdlib_osproc.o \
c_code/8_1/stdlib_streams.o \
c_code/8_1/stdlib_cpuinfo.o \
c_code/8_1/stdlib_sets.o \
c_code/8_1/stdlib_math.o \
c_code/8_1/stdlib_tables.o \
c_code/8_1/nimsrc_ropes.o \
c_code/8_1/nimsrc_platform.o \
c_code/8_1/nimsrc_nversion.o \
c_code/8_1/nimsrc_condsyms.o \
c_code/8_1/nimsrc_idents.o \
c_code/8_1/nimsrc_extccomp.o \
c_code/8_1/nimsrc_crc.o \
c_code/8_1/nimsrc_wordrecg.o \
c_code/8_1/nimsrc_nimblecmd.o \
c_code/8_1/stdlib_parseopt.o \
c_code/8_1/nimsrc_lexer.o \
c_code/8_1/nimsrc_nimlexbase.o \
c_code/8_1/nimsrc_llstream.o \
c_code/8_1/nimsrc_nimconf.o \
c_code/8_1/nimsrc_main.o \
c_code/8_1/nimsrc_ast.o \
c_code/8_1/stdlib_intsets.o \
c_code/8_1/nimsrc_idgen.o \
c_code/8_1/nimsrc_astalgo.o \
c_code/8_1/nimsrc_rodutils.o \
c_code/8_1/nimsrc_syntaxes.o \
c_code/8_1/nimsrc_parser.o \
c_code/8_1/nimsrc_pbraces.o \
c_code/8_1/nimsrc_filters.o \
c_code/8_1/nimsrc_renderer.o \
c_code/8_1/nimsrc_filter_tmpl.o \
c_code/8_1/nimsrc_rodread.o \
c_code/8_1/nimsrc_types.o \
c_code/8_1/nimsrc_trees.o \
c_code/8_1/stdlib_memfiles.o \
c_code/8_1/nimsrc_rodwrite.o \
c_code/8_1/nimsrc_passes.o \
c_code/8_1/nimsrc_magicsys.o \
c_code/8_1/nimsrc_nimsets.o \
c_code/8_1/nimsrc_bitsets.o \
c_code/8_1/nimsrc_importer.o \
c_code/8_1/nimsrc_lookups.o \
c_code/8_1/nimsrc_semdata.o \
c_code/8_1/nimsrc_treetab.o \
c_code/8_1/nimsrc_vmdef.o \
c_code/8_1/nimsrc_prettybase.o \
c_code/8_1/stdlib_lexbase.o \
c_code/8_1/nimsrc_sem.o \
c_code/8_1/nimsrc_semfold.o \
c_code/8_1/nimsrc_saturate.o \
c_code/8_1/nimsrc_procfind.o \
c_code/8_1/nimsrc_pragmas.o \
c_code/8_1/nimsrc_semtypinst.o \
c_code/8_1/nimsrc_sigmatch.o \
c_code/8_1/nimsrc_parampatterns.o \
c_code/8_1/nimsrc_pretty.o \
c_code/8_1/nimsrc_docgen.o \
c_code/8_1/docutils_rstast.o \
c_code/8_1/stdlib_json.o \
c_code/8_1/stdlib_unicode.o \
c_code/8_1/stdlib_macros.o \
c_code/8_1/docutils_rst.o \
c_code/8_1/docutils_rstgen.o \
c_code/8_1/docutils_highlite.o \
c_code/8_1/stdlib_sequtils.o \
c_code/8_1/stdlib_algorithm.o \
c_code/8_1/nimsrc_sempass2.o \
c_code/8_1/nimsrc_guards.o \
c_code/8_1/stdlib_xmltree.o \
c_code/8_1/stdlib_cgi.o \
c_code/8_1/stdlib_cookies.o \
c_code/8_1/nimsrc_typesrenderer.o \
c_code/8_1/nimsrc_transf.o \
c_code/8_1/nimsrc_cgmeth.o \
c_code/8_1/nimsrc_lambdalifting.o \
c_code/8_1/nimsrc_lowerings.o \
c_code/8_1/nimsrc_vm.o \
c_code/8_1/nimsrc_vmgen.o \
c_code/8_1/stdlib_unsigned.o \
c_code/8_1/nimsrc_vmdeps.o \
c_code/8_1/nimsrc_vmmarshal.o \
c_code/8_1/nimsrc_evaltempl.o \
c_code/8_1/nimsrc_aliases.o \
c_code/8_1/nimsrc_patterns.o \
c_code/8_1/nimsrc_semmacrosanity.o \
c_code/8_1/nimsrc_semparallel.o \
c_code/8_1/nimsrc_plugins.o \
c_code/8_1/nimsrc_active.o \
c_code/8_1/nimsrc_locals.o \
c_code/8_1/nimsrc_cgen.o \
c_code/8_1/nimsrc_ccgutils.o \
c_code/8_1/nimsrc_cgendata.o \
c_code/8_1/nimsrc_ccgmerge.o \
c_code/8_1/nimsrc_jsgen.o \
c_code/8_1/nimsrc_passaux.o \
c_code/8_1/nimsrc_depends.o \
c_code/8_1/nimsrc_docgen2.o \
c_code/8_1/nimsrc_service.o \
c_code/8_1/stdlib_net.o \
c_code/8_1/stdlib_rawsockets.o \
c_code/8_1/nimsrc_modules.o \
c_code/8_1/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  amd64)
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_nim.c -o c_code/8_2/nimsrc_nim.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_nim.c -o c_code/8_2/nimsrc_nim.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_system.c -o c_code/8_2/stdlib_system.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_system.c -o c_code/8_2/stdlib_system.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_testability.c -o c_code/8_2/nimsrc_testability.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_testability.c -o c_code/8_2/nimsrc_testability.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_commands.c -o c_code/8_2/nimsrc_commands.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_commands.c -o c_code/8_2/nimsrc_commands.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_os.c -o c_code/8_2/stdlib_os.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_os.c -o c_code/8_2/stdlib_os.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_strutils.c -o c_code/8_2/stdlib_strutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_strutils.c -o c_code/8_2/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_parseutils.c -o c_code/8_2/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_parseutils.c -o c_code/8_2/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_times.c -o c_code/8_2/stdlib_times.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_times.c -o c_code/8_2/stdlib_times.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_posix.c -o c_code/8_2/stdlib_posix.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_posix.c -o c_code/8_2/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_msgs.c -o c_code/8_2/nimsrc_msgs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_msgs.c -o c_code/8_2/nimsrc_msgs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_options.c -o c_code/8_2/nimsrc_options.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_options.c -o c_code/8_2/nimsrc_options.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_lists.c -o c_code/8_2/nimsrc_lists.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_lists.c -o c_code/8_2/nimsrc_lists.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_strtabs.c -o c_code/8_2/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_strtabs.c -o c_code/8_2/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_hashes.c -o c_code/8_2/stdlib_hashes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_hashes.c -o c_code/8_2/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_osproc.c -o c_code/8_2/stdlib_osproc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_osproc.c -o c_code/8_2/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_streams.c -o c_code/8_2/stdlib_streams.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_streams.c -o c_code/8_2/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_cpuinfo.c -o c_code/8_2/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_cpuinfo.c -o c_code/8_2/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_sets.c -o c_code/8_2/stdlib_sets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_sets.c -o c_code/8_2/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_math.c -o c_code/8_2/stdlib_math.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_math.c -o c_code/8_2/stdlib_math.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_tables.c -o c_code/8_2/stdlib_tables.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_tables.c -o c_code/8_2/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_ropes.c -o c_code/8_2/nimsrc_ropes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_ropes.c -o c_code/8_2/nimsrc_ropes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_platform.c -o c_code/8_2/nimsrc_platform.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_platform.c -o c_code/8_2/nimsrc_platform.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_nversion.c -o c_code/8_2/nimsrc_nversion.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_nversion.c -o c_code/8_2/nimsrc_nversion.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_condsyms.c -o c_code/8_2/nimsrc_condsyms.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_condsyms.c -o c_code/8_2/nimsrc_condsyms.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_idents.c -o c_code/8_2/nimsrc_idents.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_idents.c -o c_code/8_2/nimsrc_idents.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_extccomp.c -o c_code/8_2/nimsrc_extccomp.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_extccomp.c -o c_code/8_2/nimsrc_extccomp.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_crc.c -o c_code/8_2/nimsrc_crc.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_crc.c -o c_code/8_2/nimsrc_crc.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_wordrecg.c -o c_code/8_2/nimsrc_wordrecg.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_wordrecg.c -o c_code/8_2/nimsrc_wordrecg.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_nimblecmd.c -o c_code/8_2/nimsrc_nimblecmd.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_nimblecmd.c -o c_code/8_2/nimsrc_nimblecmd.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_parseopt.c -o c_code/8_2/stdlib_parseopt.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_parseopt.c -o c_code/8_2/stdlib_parseopt.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_lexer.c -o c_code/8_2/nimsrc_lexer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_lexer.c -o c_code/8_2/nimsrc_lexer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_nimlexbase.c -o c_code/8_2/nimsrc_nimlexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_nimlexbase.c -o c_code/8_2/nimsrc_nimlexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_llstream.c -o c_code/8_2/nimsrc_llstream.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_llstream.c -o c_code/8_2/nimsrc_llstream.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_nimconf.c -o c_code/8_2/nimsrc_nimconf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_nimconf.c -o c_code/8_2/nimsrc_nimconf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_main.c -o c_code/8_2/nimsrc_main.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_main.c -o c_code/8_2/nimsrc_main.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_ast.c -o c_code/8_2/nimsrc_ast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_ast.c -o c_code/8_2/nimsrc_ast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_intsets.c -o c_code/8_2/stdlib_intsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_intsets.c -o c_code/8_2/stdlib_intsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_idgen.c -o c_code/8_2/nimsrc_idgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_idgen.c -o c_code/8_2/nimsrc_idgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_astalgo.c -o c_code/8_2/nimsrc_astalgo.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_astalgo.c -o c_code/8_2/nimsrc_astalgo.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_rodutils.c -o c_code/8_2/nimsrc_rodutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_rodutils.c -o c_code/8_2/nimsrc_rodutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_syntaxes.c -o c_code/8_2/nimsrc_syntaxes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_syntaxes.c -o c_code/8_2/nimsrc_syntaxes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_parser.c -o c_code/8_2/nimsrc_parser.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_parser.c -o c_code/8_2/nimsrc_parser.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_pbraces.c -o c_code/8_2/nimsrc_pbraces.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_pbraces.c -o c_code/8_2/nimsrc_pbraces.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_filters.c -o c_code/8_2/nimsrc_filters.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_filters.c -o c_code/8_2/nimsrc_filters.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_renderer.c -o c_code/8_2/nimsrc_renderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_renderer.c -o c_code/8_2/nimsrc_renderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_filter_tmpl.c -o c_code/8_2/nimsrc_filter_tmpl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_filter_tmpl.c -o c_code/8_2/nimsrc_filter_tmpl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_rodread.c -o c_code/8_2/nimsrc_rodread.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_rodread.c -o c_code/8_2/nimsrc_rodread.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_types.c -o c_code/8_2/nimsrc_types.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_types.c -o c_code/8_2/nimsrc_types.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_trees.c -o c_code/8_2/nimsrc_trees.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_trees.c -o c_code/8_2/nimsrc_trees.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_memfiles.c -o c_code/8_2/stdlib_memfiles.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_memfiles.c -o c_code/8_2/stdlib_memfiles.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_rodwrite.c -o c_code/8_2/nimsrc_rodwrite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_rodwrite.c -o c_code/8_2/nimsrc_rodwrite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_passes.c -o c_code/8_2/nimsrc_passes.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_passes.c -o c_code/8_2/nimsrc_passes.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_magicsys.c -o c_code/8_2/nimsrc_magicsys.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_magicsys.c -o c_code/8_2/nimsrc_magicsys.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_nimsets.c -o c_code/8_2/nimsrc_nimsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_nimsets.c -o c_code/8_2/nimsrc_nimsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_bitsets.c -o c_code/8_2/nimsrc_bitsets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_bitsets.c -o c_code/8_2/nimsrc_bitsets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_importer.c -o c_code/8_2/nimsrc_importer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_importer.c -o c_code/8_2/nimsrc_importer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_lookups.c -o c_code/8_2/nimsrc_lookups.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_lookups.c -o c_code/8_2/nimsrc_lookups.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_semdata.c -o c_code/8_2/nimsrc_semdata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_semdata.c -o c_code/8_2/nimsrc_semdata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_treetab.c -o c_code/8_2/nimsrc_treetab.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_treetab.c -o c_code/8_2/nimsrc_treetab.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_vmdef.c -o c_code/8_2/nimsrc_vmdef.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_vmdef.c -o c_code/8_2/nimsrc_vmdef.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_prettybase.c -o c_code/8_2/nimsrc_prettybase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_prettybase.c -o c_code/8_2/nimsrc_prettybase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_lexbase.c -o c_code/8_2/stdlib_lexbase.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_lexbase.c -o c_code/8_2/stdlib_lexbase.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_sem.c -o c_code/8_2/nimsrc_sem.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_sem.c -o c_code/8_2/nimsrc_sem.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_semfold.c -o c_code/8_2/nimsrc_semfold.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_semfold.c -o c_code/8_2/nimsrc_semfold.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_saturate.c -o c_code/8_2/nimsrc_saturate.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_saturate.c -o c_code/8_2/nimsrc_saturate.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_procfind.c -o c_code/8_2/nimsrc_procfind.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_procfind.c -o c_code/8_2/nimsrc_procfind.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_pragmas.c -o c_code/8_2/nimsrc_pragmas.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_pragmas.c -o c_code/8_2/nimsrc_pragmas.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_semtypinst.c -o c_code/8_2/nimsrc_semtypinst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_semtypinst.c -o c_code/8_2/nimsrc_semtypinst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_sigmatch.c -o c_code/8_2/nimsrc_sigmatch.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_sigmatch.c -o c_code/8_2/nimsrc_sigmatch.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_parampatterns.c -o c_code/8_2/nimsrc_parampatterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_parampatterns.c -o c_code/8_2/nimsrc_parampatterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_pretty.c -o c_code/8_2/nimsrc_pretty.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_pretty.c -o c_code/8_2/nimsrc_pretty.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_docgen.c -o c_code/8_2/nimsrc_docgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_docgen.c -o c_code/8_2/nimsrc_docgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/docutils_rstast.c -o c_code/8_2/docutils_rstast.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/docutils_rstast.c -o c_code/8_2/docutils_rstast.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_json.c -o c_code/8_2/stdlib_json.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_json.c -o c_code/8_2/stdlib_json.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_unicode.c -o c_code/8_2/stdlib_unicode.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_unicode.c -o c_code/8_2/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_macros.c -o c_code/8_2/stdlib_macros.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_macros.c -o c_code/8_2/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/docutils_rst.c -o c_code/8_2/docutils_rst.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/docutils_rst.c -o c_code/8_2/docutils_rst.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/docutils_rstgen.c -o c_code/8_2/docutils_rstgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/docutils_rstgen.c -o c_code/8_2/docutils_rstgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/docutils_highlite.c -o c_code/8_2/docutils_highlite.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/docutils_highlite.c -o c_code/8_2/docutils_highlite.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_sequtils.c -o c_code/8_2/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_sequtils.c -o c_code/8_2/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_algorithm.c -o c_code/8_2/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_algorithm.c -o c_code/8_2/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_sempass2.c -o c_code/8_2/nimsrc_sempass2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_sempass2.c -o c_code/8_2/nimsrc_sempass2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_guards.c -o c_code/8_2/nimsrc_guards.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_guards.c -o c_code/8_2/nimsrc_guards.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_xmltree.c -o c_code/8_2/stdlib_xmltree.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_xmltree.c -o c_code/8_2/stdlib_xmltree.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_cgi.c -o c_code/8_2/stdlib_cgi.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_cgi.c -o c_code/8_2/stdlib_cgi.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_cookies.c -o c_code/8_2/stdlib_cookies.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_cookies.c -o c_code/8_2/stdlib_cookies.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_typesrenderer.c -o c_code/8_2/nimsrc_typesrenderer.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_typesrenderer.c -o c_code/8_2/nimsrc_typesrenderer.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_transf.c -o c_code/8_2/nimsrc_transf.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_transf.c -o c_code/8_2/nimsrc_transf.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_cgmeth.c -o c_code/8_2/nimsrc_cgmeth.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_cgmeth.c -o c_code/8_2/nimsrc_cgmeth.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_lambdalifting.c -o c_code/8_2/nimsrc_lambdalifting.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_lambdalifting.c -o c_code/8_2/nimsrc_lambdalifting.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_lowerings.c -o c_code/8_2/nimsrc_lowerings.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_lowerings.c -o c_code/8_2/nimsrc_lowerings.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_vm.c -o c_code/8_2/nimsrc_vm.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_vm.c -o c_code/8_2/nimsrc_vm.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_vmgen.c -o c_code/8_2/nimsrc_vmgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_vmgen.c -o c_code/8_2/nimsrc_vmgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_unsigned.c -o c_code/8_2/stdlib_unsigned.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_unsigned.c -o c_code/8_2/stdlib_unsigned.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_vmdeps.c -o c_code/8_2/nimsrc_vmdeps.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_vmdeps.c -o c_code/8_2/nimsrc_vmdeps.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_vmmarshal.c -o c_code/8_2/nimsrc_vmmarshal.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_vmmarshal.c -o c_code/8_2/nimsrc_vmmarshal.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_evaltempl.c -o c_code/8_2/nimsrc_evaltempl.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_evaltempl.c -o c_code/8_2/nimsrc_evaltempl.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_aliases.c -o c_code/8_2/nimsrc_aliases.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_aliases.c -o c_code/8_2/nimsrc_aliases.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_patterns.c -o c_code/8_2/nimsrc_patterns.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_patterns.c -o c_code/8_2/nimsrc_patterns.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_semmacrosanity.c -o c_code/8_2/nimsrc_semmacrosanity.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_semmacrosanity.c -o c_code/8_2/nimsrc_semmacrosanity.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_semparallel.c -o c_code/8_2/nimsrc_semparallel.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_semparallel.c -o c_code/8_2/nimsrc_semparallel.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_plugins.c -o c_code/8_2/nimsrc_plugins.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_plugins.c -o c_code/8_2/nimsrc_plugins.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_active.c -o c_code/8_2/nimsrc_active.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_active.c -o c_code/8_2/nimsrc_active.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_locals.c -o c_code/8_2/nimsrc_locals.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_locals.c -o c_code/8_2/nimsrc_locals.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_cgen.c -o c_code/8_2/nimsrc_cgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_cgen.c -o c_code/8_2/nimsrc_cgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_ccgutils.c -o c_code/8_2/nimsrc_ccgutils.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_ccgutils.c -o c_code/8_2/nimsrc_ccgutils.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_cgendata.c -o c_code/8_2/nimsrc_cgendata.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_cgendata.c -o c_code/8_2/nimsrc_cgendata.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_ccgmerge.c -o c_code/8_2/nimsrc_ccgmerge.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_ccgmerge.c -o c_code/8_2/nimsrc_ccgmerge.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_jsgen.c -o c_code/8_2/nimsrc_jsgen.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_jsgen.c -o c_code/8_2/nimsrc_jsgen.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_passaux.c -o c_code/8_2/nimsrc_passaux.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_passaux.c -o c_code/8_2/nimsrc_passaux.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_depends.c -o c_code/8_2/nimsrc_depends.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_depends.c -o c_code/8_2/nimsrc_depends.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_docgen2.c -o c_code/8_2/nimsrc_docgen2.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_docgen2.c -o c_code/8_2/nimsrc_docgen2.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_service.c -o c_code/8_2/nimsrc_service.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_service.c -o c_code/8_2/nimsrc_service.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_net.c -o c_code/8_2/stdlib_net.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_net.c -o c_code/8_2/stdlib_net.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_rawsockets.c -o c_code/8_2/stdlib_rawsockets.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/stdlib_rawsockets.c -o c_code/8_2/stdlib_rawsockets.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_modules.c -o c_code/8_2/nimsrc_modules.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_modules.c -o c_code/8_2/nimsrc_modules.o
    echo "$CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_nodejs.c -o c_code/8_2/nimsrc_nodejs.o"
    $CC $COMP_FLAGS -Ic_code -c c_code/8_2/nimsrc_nodejs.c -o c_code/8_2/nimsrc_nodejs.o
    echo "$LINKER -o $binDir/nim  \
c_code/8_2/nimsrc_nim.o \
c_code/8_2/stdlib_system.o \
c_code/8_2/nimsrc_testability.o \
c_code/8_2/nimsrc_commands.o \
c_code/8_2/stdlib_os.o \
c_code/8_2/stdlib_strutils.o \
c_code/8_2/stdlib_parseutils.o \
c_code/8_2/stdlib_times.o \
c_code/8_2/stdlib_posix.o \
c_code/8_2/nimsrc_msgs.o \
c_code/8_2/nimsrc_options.o \
c_code/8_2/nimsrc_lists.o \
c_code/8_2/stdlib_strtabs.o \
c_code/8_2/stdlib_hashes.o \
c_code/8_2/stdlib_osproc.o \
c_code/8_2/stdlib_streams.o \
c_code/8_2/stdlib_cpuinfo.o \
c_code/8_2/stdlib_sets.o \
c_code/8_2/stdlib_math.o \
c_code/8_2/stdlib_tables.o \
c_code/8_2/nimsrc_ropes.o \
c_code/8_2/nimsrc_platform.o \
c_code/8_2/nimsrc_nversion.o \
c_code/8_2/nimsrc_condsyms.o \
c_code/8_2/nimsrc_idents.o \
c_code/8_2/nimsrc_extccomp.o \
c_code/8_2/nimsrc_crc.o \
c_code/8_2/nimsrc_wordrecg.o \
c_code/8_2/nimsrc_nimblecmd.o \
c_code/8_2/stdlib_parseopt.o \
c_code/8_2/nimsrc_lexer.o \
c_code/8_2/nimsrc_nimlexbase.o \
c_code/8_2/nimsrc_llstream.o \
c_code/8_2/nimsrc_nimconf.o \
c_code/8_2/nimsrc_main.o \
c_code/8_2/nimsrc_ast.o \
c_code/8_2/stdlib_intsets.o \
c_code/8_2/nimsrc_idgen.o \
c_code/8_2/nimsrc_astalgo.o \
c_code/8_2/nimsrc_rodutils.o \
c_code/8_2/nimsrc_syntaxes.o \
c_code/8_2/nimsrc_parser.o \
c_code/8_2/nimsrc_pbraces.o \
c_code/8_2/nimsrc_filters.o \
c_code/8_2/nimsrc_renderer.o \
c_code/8_2/nimsrc_filter_tmpl.o \
c_code/8_2/nimsrc_rodread.o \
c_code/8_2/nimsrc_types.o \
c_code/8_2/nimsrc_trees.o \
c_code/8_2/stdlib_memfiles.o \
c_code/8_2/nimsrc_rodwrite.o \
c_code/8_2/nimsrc_passes.o \
c_code/8_2/nimsrc_magicsys.o \
c_code/8_2/nimsrc_nimsets.o \
c_code/8_2/nimsrc_bitsets.o \
c_code/8_2/nimsrc_importer.o \
c_code/8_2/nimsrc_lookups.o \
c_code/8_2/nimsrc_semdata.o \
c_code/8_2/nimsrc_treetab.o \
c_code/8_2/nimsrc_vmdef.o \
c_code/8_2/nimsrc_prettybase.o \
c_code/8_2/stdlib_lexbase.o \
c_code/8_2/nimsrc_sem.o \
c_code/8_2/nimsrc_semfold.o \
c_code/8_2/nimsrc_saturate.o \
c_code/8_2/nimsrc_procfind.o \
c_code/8_2/nimsrc_pragmas.o \
c_code/8_2/nimsrc_semtypinst.o \
c_code/8_2/nimsrc_sigmatch.o \
c_code/8_2/nimsrc_parampatterns.o \
c_code/8_2/nimsrc_pretty.o \
c_code/8_2/nimsrc_docgen.o \
c_code/8_2/docutils_rstast.o \
c_code/8_2/stdlib_json.o \
c_code/8_2/stdlib_unicode.o \
c_code/8_2/stdlib_macros.o \
c_code/8_2/docutils_rst.o \
c_code/8_2/docutils_rstgen.o \
c_code/8_2/docutils_highlite.o \
c_code/8_2/stdlib_sequtils.o \
c_code/8_2/stdlib_algorithm.o \
c_code/8_2/nimsrc_sempass2.o \
c_code/8_2/nimsrc_guards.o \
c_code/8_2/stdlib_xmltree.o \
c_code/8_2/stdlib_cgi.o \
c_code/8_2/stdlib_cookies.o \
c_code/8_2/nimsrc_typesrenderer.o \
c_code/8_2/nimsrc_transf.o \
c_code/8_2/nimsrc_cgmeth.o \
c_code/8_2/nimsrc_lambdalifting.o \
c_code/8_2/nimsrc_lowerings.o \
c_code/8_2/nimsrc_vm.o \
c_code/8_2/nimsrc_vmgen.o \
c_code/8_2/stdlib_unsigned.o \
c_code/8_2/nimsrc_vmdeps.o \
c_code/8_2/nimsrc_vmmarshal.o \
c_code/8_2/nimsrc_evaltempl.o \
c_code/8_2/nimsrc_aliases.o \
c_code/8_2/nimsrc_patterns.o \
c_code/8_2/nimsrc_semmacrosanity.o \
c_code/8_2/nimsrc_semparallel.o \
c_code/8_2/nimsrc_plugins.o \
c_code/8_2/nimsrc_active.o \
c_code/8_2/nimsrc_locals.o \
c_code/8_2/nimsrc_cgen.o \
c_code/8_2/nimsrc_ccgutils.o \
c_code/8_2/nimsrc_cgendata.o \
c_code/8_2/nimsrc_ccgmerge.o \
c_code/8_2/nimsrc_jsgen.o \
c_code/8_2/nimsrc_passaux.o \
c_code/8_2/nimsrc_depends.o \
c_code/8_2/nimsrc_docgen2.o \
c_code/8_2/nimsrc_service.o \
c_code/8_2/stdlib_net.o \
c_code/8_2/stdlib_rawsockets.o \
c_code/8_2/nimsrc_modules.o \
c_code/8_2/nimsrc_nodejs.o $LINK_FLAGS"
    $LINKER -o $binDir/nim  \
c_code/8_2/nimsrc_nim.o \
c_code/8_2/stdlib_system.o \
c_code/8_2/nimsrc_testability.o \
c_code/8_2/nimsrc_commands.o \
c_code/8_2/stdlib_os.o \
c_code/8_2/stdlib_strutils.o \
c_code/8_2/stdlib_parseutils.o \
c_code/8_2/stdlib_times.o \
c_code/8_2/stdlib_posix.o \
c_code/8_2/nimsrc_msgs.o \
c_code/8_2/nimsrc_options.o \
c_code/8_2/nimsrc_lists.o \
c_code/8_2/stdlib_strtabs.o \
c_code/8_2/stdlib_hashes.o \
c_code/8_2/stdlib_osproc.o \
c_code/8_2/stdlib_streams.o \
c_code/8_2/stdlib_cpuinfo.o \
c_code/8_2/stdlib_sets.o \
c_code/8_2/stdlib_math.o \
c_code/8_2/stdlib_tables.o \
c_code/8_2/nimsrc_ropes.o \
c_code/8_2/nimsrc_platform.o \
c_code/8_2/nimsrc_nversion.o \
c_code/8_2/nimsrc_condsyms.o \
c_code/8_2/nimsrc_idents.o \
c_code/8_2/nimsrc_extccomp.o \
c_code/8_2/nimsrc_crc.o \
c_code/8_2/nimsrc_wordrecg.o \
c_code/8_2/nimsrc_nimblecmd.o \
c_code/8_2/stdlib_parseopt.o \
c_code/8_2/nimsrc_lexer.o \
c_code/8_2/nimsrc_nimlexbase.o \
c_code/8_2/nimsrc_llstream.o \
c_code/8_2/nimsrc_nimconf.o \
c_code/8_2/nimsrc_main.o \
c_code/8_2/nimsrc_ast.o \
c_code/8_2/stdlib_intsets.o \
c_code/8_2/nimsrc_idgen.o \
c_code/8_2/nimsrc_astalgo.o \
c_code/8_2/nimsrc_rodutils.o \
c_code/8_2/nimsrc_syntaxes.o \
c_code/8_2/nimsrc_parser.o \
c_code/8_2/nimsrc_pbraces.o \
c_code/8_2/nimsrc_filters.o \
c_code/8_2/nimsrc_renderer.o \
c_code/8_2/nimsrc_filter_tmpl.o \
c_code/8_2/nimsrc_rodread.o \
c_code/8_2/nimsrc_types.o \
c_code/8_2/nimsrc_trees.o \
c_code/8_2/stdlib_memfiles.o \
c_code/8_2/nimsrc_rodwrite.o \
c_code/8_2/nimsrc_passes.o \
c_code/8_2/nimsrc_magicsys.o \
c_code/8_2/nimsrc_nimsets.o \
c_code/8_2/nimsrc_bitsets.o \
c_code/8_2/nimsrc_importer.o \
c_code/8_2/nimsrc_lookups.o \
c_code/8_2/nimsrc_semdata.o \
c_code/8_2/nimsrc_treetab.o \
c_code/8_2/nimsrc_vmdef.o \
c_code/8_2/nimsrc_prettybase.o \
c_code/8_2/stdlib_lexbase.o \
c_code/8_2/nimsrc_sem.o \
c_code/8_2/nimsrc_semfold.o \
c_code/8_2/nimsrc_saturate.o \
c_code/8_2/nimsrc_procfind.o \
c_code/8_2/nimsrc_pragmas.o \
c_code/8_2/nimsrc_semtypinst.o \
c_code/8_2/nimsrc_sigmatch.o \
c_code/8_2/nimsrc_parampatterns.o \
c_code/8_2/nimsrc_pretty.o \
c_code/8_2/nimsrc_docgen.o \
c_code/8_2/docutils_rstast.o \
c_code/8_2/stdlib_json.o \
c_code/8_2/stdlib_unicode.o \
c_code/8_2/stdlib_macros.o \
c_code/8_2/docutils_rst.o \
c_code/8_2/docutils_rstgen.o \
c_code/8_2/docutils_highlite.o \
c_code/8_2/stdlib_sequtils.o \
c_code/8_2/stdlib_algorithm.o \
c_code/8_2/nimsrc_sempass2.o \
c_code/8_2/nimsrc_guards.o \
c_code/8_2/stdlib_xmltree.o \
c_code/8_2/stdlib_cgi.o \
c_code/8_2/stdlib_cookies.o \
c_code/8_2/nimsrc_typesrenderer.o \
c_code/8_2/nimsrc_transf.o \
c_code/8_2/nimsrc_cgmeth.o \
c_code/8_2/nimsrc_lambdalifting.o \
c_code/8_2/nimsrc_lowerings.o \
c_code/8_2/nimsrc_vm.o \
c_code/8_2/nimsrc_vmgen.o \
c_code/8_2/stdlib_unsigned.o \
c_code/8_2/nimsrc_vmdeps.o \
c_code/8_2/nimsrc_vmmarshal.o \
c_code/8_2/nimsrc_evaltempl.o \
c_code/8_2/nimsrc_aliases.o \
c_code/8_2/nimsrc_patterns.o \
c_code/8_2/nimsrc_semmacrosanity.o \
c_code/8_2/nimsrc_semparallel.o \
c_code/8_2/nimsrc_plugins.o \
c_code/8_2/nimsrc_active.o \
c_code/8_2/nimsrc_locals.o \
c_code/8_2/nimsrc_cgen.o \
c_code/8_2/nimsrc_ccgutils.o \
c_code/8_2/nimsrc_cgendata.o \
c_code/8_2/nimsrc_ccgmerge.o \
c_code/8_2/nimsrc_jsgen.o \
c_code/8_2/nimsrc_passaux.o \
c_code/8_2/nimsrc_depends.o \
c_code/8_2/nimsrc_docgen2.o \
c_code/8_2/nimsrc_service.o \
c_code/8_2/stdlib_net.o \
c_code/8_2/stdlib_rawsockets.o \
c_code/8_2/nimsrc_modules.o \
c_code/8_2/nimsrc_nodejs.o $LINK_FLAGS
    ;;
  powerpc64)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  arm)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  sparc)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  mips)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  powerpc)
    echo "$LINKER -o $binDir/nim  $LINK_FLAGS"
    $LINKER -o $binDir/nim  $LINK_FLAGS
    ;;
  *)
    echo "Error: no C code generated for: [$myos: $mycpu]"
    exit 1
    ;;
  esac
  ;;
*) 
  echo "Error: no C code generated for: [$myos: $mycpu]"
  exit 1
  ;;
esac

echo "SUCCESS"

