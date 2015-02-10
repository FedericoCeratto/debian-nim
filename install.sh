#! /bin/sh
# Generated by niminst

set -e

if [ $# -eq 1 ] ; then
  if test -f bin/nim
  then 
    echo "Nim build detected"
  else
    echo "Please build Nim before installing it"
    exit 1
  fi
  case $1 in
    "--help"|"-h"|"help"|"h")
      echo "Nim installation script"
      echo "Usage: [sudo] sh install.sh DIR"
      echo "Where DIR may be:"
      echo "  /usr/bin"
      echo "  /usr/local/bin"
      echo "  /opt"
      echo "  <some other dir> (treated like '/opt')"
      echo "To deinstall, use the command:"
      echo "sh deinstall.sh DIR"
      exit 1
      ;;
    "/usr/bin")
      bindir=/usr/bin
      configdir=/etc
      libdir=/usr/lib/nim
      docdir=/usr/share/nim/doc
      datadir=/usr/share/nim/data
      ;;
    "/usr/local/bin")
      bindir=/usr/local/bin
      configdir=/etc
      libdir=/usr/local/lib/nim
      docdir=/usr/local/share/nim/doc
      datadir=/usr/local/share/nim/data
      ;;
    *)
      bindir="$1/nim/bin"
      configdir="$1/nim/config"
      libdir="$1/nim/lib"
      docdir="$1/nim/doc"
      datadir="$1/nim/data"
      
      mkdir -p $1/nim
      mkdir -p $bindir
      mkdir -p $configdir
      ;;
  esac
  mkdir -p $libdir
  mkdir -p $docdir
  echo "copying files..."
  mkdir -p $libdir/system
  mkdir -p $libdir/core
  mkdir -p $libdir/pure
  mkdir -p $libdir/pure/collections
  mkdir -p $libdir/pure/concurrency
  mkdir -p $libdir/pure/unidecode
  mkdir -p $libdir/impure
  mkdir -p $libdir/wrappers
  mkdir -p $libdir/wrappers/readline
  mkdir -p $libdir/wrappers/sdl
  mkdir -p $libdir/wrappers/zip
  mkdir -p $libdir/windows
  mkdir -p $libdir/posix
  mkdir -p $libdir/js
  mkdir -p $libdir/packages/docutils

  cp bin/nim $bindir/nim
  chmod 755 $bindir/nim
  cp config/nim.cfg $configdir/nim.cfg
  chmod 644 $configdir/nim.cfg
  cp config/nimdoc.cfg $configdir/nimdoc.cfg
  chmod 644 $configdir/nimdoc.cfg
  cp config/nimdoc.tex.cfg $configdir/nimdoc.tex.cfg
  chmod 644 $configdir/nimdoc.tex.cfg
  if [ -f doc/overview.html ]; then
    cp doc/overview.html $docdir/overview.html
    chmod 644 $docdir/overview.html
  fi
  cp lib/nimbase.h $libdir/nimbase.h
  chmod 644 $libdir/nimbase.h
  cp lib/nimrtl.nim $libdir/nimrtl.nim
  chmod 644 $libdir/nimrtl.nim
  cp lib/prelude.nim $libdir/prelude.nim
  chmod 644 $libdir/prelude.nim
  cp lib/system.nim $libdir/system.nim
  chmod 644 $libdir/system.nim
  cp lib/nimrtl.nimrod.cfg $libdir/nimrtl.nimrod.cfg
  chmod 644 $libdir/nimrtl.nimrod.cfg
  cp lib/system/alloc.nim $libdir/system/alloc.nim
  chmod 644 $libdir/system/alloc.nim
  cp lib/system/ansi_c.nim $libdir/system/ansi_c.nim
  chmod 644 $libdir/system/ansi_c.nim
  cp lib/system/arithm.nim $libdir/system/arithm.nim
  chmod 644 $libdir/system/arithm.nim
  cp lib/system/assign.nim $libdir/system/assign.nim
  chmod 644 $libdir/system/assign.nim
  cp lib/system/atomics.nim $libdir/system/atomics.nim
  chmod 644 $libdir/system/atomics.nim
  cp lib/system/avltree.nim $libdir/system/avltree.nim
  chmod 644 $libdir/system/avltree.nim
  cp lib/system/cellsets.nim $libdir/system/cellsets.nim
  chmod 644 $libdir/system/cellsets.nim
  cp lib/system/cgprocs.nim $libdir/system/cgprocs.nim
  chmod 644 $libdir/system/cgprocs.nim
  cp lib/system/channels.nim $libdir/system/channels.nim
  chmod 644 $libdir/system/channels.nim
  cp lib/system/chcks.nim $libdir/system/chcks.nim
  chmod 644 $libdir/system/chcks.nim
  cp lib/system/debugger.nim $libdir/system/debugger.nim
  chmod 644 $libdir/system/debugger.nim
  cp lib/system/deepcopy.nim $libdir/system/deepcopy.nim
  chmod 644 $libdir/system/deepcopy.nim
  cp lib/system/dyncalls.nim $libdir/system/dyncalls.nim
  chmod 644 $libdir/system/dyncalls.nim
  cp lib/system/embedded.nim $libdir/system/embedded.nim
  chmod 644 $libdir/system/embedded.nim
  cp lib/system/endb.nim $libdir/system/endb.nim
  chmod 644 $libdir/system/endb.nim
  cp lib/system/excpt.nim $libdir/system/excpt.nim
  chmod 644 $libdir/system/excpt.nim
  cp lib/system/gc.nim $libdir/system/gc.nim
  chmod 644 $libdir/system/gc.nim
  cp lib/system/gc2.nim $libdir/system/gc2.nim
  chmod 644 $libdir/system/gc2.nim
  cp lib/system/gc_ms.nim $libdir/system/gc_ms.nim
  chmod 644 $libdir/system/gc_ms.nim
  cp lib/system/hti.nim $libdir/system/hti.nim
  chmod 644 $libdir/system/hti.nim
  cp lib/system/inclrtl.nim $libdir/system/inclrtl.nim
  chmod 644 $libdir/system/inclrtl.nim
  cp lib/system/jssys.nim $libdir/system/jssys.nim
  chmod 644 $libdir/system/jssys.nim
  cp lib/system/mmdisp.nim $libdir/system/mmdisp.nim
  chmod 644 $libdir/system/mmdisp.nim
  cp lib/system/platforms.nim $libdir/system/platforms.nim
  chmod 644 $libdir/system/platforms.nim
  cp lib/system/profiler.nim $libdir/system/profiler.nim
  chmod 644 $libdir/system/profiler.nim
  cp lib/system/repr.nim $libdir/system/repr.nim
  chmod 644 $libdir/system/repr.nim
  cp lib/system/reprjs.nim $libdir/system/reprjs.nim
  chmod 644 $libdir/system/reprjs.nim
  cp lib/system/sets.nim $libdir/system/sets.nim
  chmod 644 $libdir/system/sets.nim
  cp lib/system/sysio.nim $libdir/system/sysio.nim
  chmod 644 $libdir/system/sysio.nim
  cp lib/system/syslocks.nim $libdir/system/syslocks.nim
  chmod 644 $libdir/system/syslocks.nim
  cp lib/system/sysspawn.nim $libdir/system/sysspawn.nim
  chmod 644 $libdir/system/sysspawn.nim
  cp lib/system/sysstr.nim $libdir/system/sysstr.nim
  chmod 644 $libdir/system/sysstr.nim
  cp lib/system/threads.nim $libdir/system/threads.nim
  chmod 644 $libdir/system/threads.nim
  cp lib/system/timers.nim $libdir/system/timers.nim
  chmod 644 $libdir/system/timers.nim
  cp lib/system/widestrs.nim $libdir/system/widestrs.nim
  chmod 644 $libdir/system/widestrs.nim
  cp lib/core/locks.nim $libdir/core/locks.nim
  chmod 644 $libdir/core/locks.nim
  cp lib/core/macros.nim $libdir/core/macros.nim
  chmod 644 $libdir/core/macros.nim
  cp lib/core/typeinfo.nim $libdir/core/typeinfo.nim
  chmod 644 $libdir/core/typeinfo.nim
  cp lib/core/unsigned.nim $libdir/core/unsigned.nim
  chmod 644 $libdir/core/unsigned.nim
  cp lib/pure/actors.nim $libdir/pure/actors.nim
  chmod 644 $libdir/pure/actors.nim
  cp lib/pure/algorithm.nim $libdir/pure/algorithm.nim
  chmod 644 $libdir/pure/algorithm.nim
  cp lib/pure/asyncdispatch.nim $libdir/pure/asyncdispatch.nim
  chmod 644 $libdir/pure/asyncdispatch.nim
  cp lib/pure/asyncfile.nim $libdir/pure/asyncfile.nim
  chmod 644 $libdir/pure/asyncfile.nim
  cp lib/pure/asyncftpclient.nim $libdir/pure/asyncftpclient.nim
  chmod 644 $libdir/pure/asyncftpclient.nim
  cp lib/pure/asynchttpserver.nim $libdir/pure/asynchttpserver.nim
  chmod 644 $libdir/pure/asynchttpserver.nim
  cp lib/pure/asyncio.nim $libdir/pure/asyncio.nim
  chmod 644 $libdir/pure/asyncio.nim
  cp lib/pure/asyncnet.nim $libdir/pure/asyncnet.nim
  chmod 644 $libdir/pure/asyncnet.nim
  cp lib/pure/base64.nim $libdir/pure/base64.nim
  chmod 644 $libdir/pure/base64.nim
  cp lib/pure/basic2d.nim $libdir/pure/basic2d.nim
  chmod 644 $libdir/pure/basic2d.nim
  cp lib/pure/basic3d.nim $libdir/pure/basic3d.nim
  chmod 644 $libdir/pure/basic3d.nim
  cp lib/pure/browsers.nim $libdir/pure/browsers.nim
  chmod 644 $libdir/pure/browsers.nim
  cp lib/pure/cgi.nim $libdir/pure/cgi.nim
  chmod 644 $libdir/pure/cgi.nim
  cp lib/pure/colors.nim $libdir/pure/colors.nim
  chmod 644 $libdir/pure/colors.nim
  cp lib/pure/complex.nim $libdir/pure/complex.nim
  chmod 644 $libdir/pure/complex.nim
  cp lib/pure/cookies.nim $libdir/pure/cookies.nim
  chmod 644 $libdir/pure/cookies.nim
  cp lib/pure/dynlib.nim $libdir/pure/dynlib.nim
  chmod 644 $libdir/pure/dynlib.nim
  cp lib/pure/encodings.nim $libdir/pure/encodings.nim
  chmod 644 $libdir/pure/encodings.nim
  cp lib/pure/endians.nim $libdir/pure/endians.nim
  chmod 644 $libdir/pure/endians.nim
  cp lib/pure/events.nim $libdir/pure/events.nim
  chmod 644 $libdir/pure/events.nim
  cp lib/pure/fenv.nim $libdir/pure/fenv.nim
  chmod 644 $libdir/pure/fenv.nim
  cp lib/pure/fsmonitor.nim $libdir/pure/fsmonitor.nim
  chmod 644 $libdir/pure/fsmonitor.nim
  cp lib/pure/ftpclient.nim $libdir/pure/ftpclient.nim
  chmod 644 $libdir/pure/ftpclient.nim
  cp lib/pure/future.nim $libdir/pure/future.nim
  chmod 644 $libdir/pure/future.nim
  cp lib/pure/gentabs.nim $libdir/pure/gentabs.nim
  chmod 644 $libdir/pure/gentabs.nim
  cp lib/pure/hashes.nim $libdir/pure/hashes.nim
  chmod 644 $libdir/pure/hashes.nim
  cp lib/pure/htmlgen.nim $libdir/pure/htmlgen.nim
  chmod 644 $libdir/pure/htmlgen.nim
  cp lib/pure/htmlparser.nim $libdir/pure/htmlparser.nim
  chmod 644 $libdir/pure/htmlparser.nim
  cp lib/pure/httpclient.nim $libdir/pure/httpclient.nim
  chmod 644 $libdir/pure/httpclient.nim
  cp lib/pure/httpserver.nim $libdir/pure/httpserver.nim
  chmod 644 $libdir/pure/httpserver.nim
  cp lib/pure/json.nim $libdir/pure/json.nim
  chmod 644 $libdir/pure/json.nim
  cp lib/pure/lexbase.nim $libdir/pure/lexbase.nim
  chmod 644 $libdir/pure/lexbase.nim
  cp lib/pure/logging.nim $libdir/pure/logging.nim
  chmod 644 $libdir/pure/logging.nim
  cp lib/pure/marshal.nim $libdir/pure/marshal.nim
  chmod 644 $libdir/pure/marshal.nim
  cp lib/pure/matchers.nim $libdir/pure/matchers.nim
  chmod 644 $libdir/pure/matchers.nim
  cp lib/pure/math.nim $libdir/pure/math.nim
  chmod 644 $libdir/pure/math.nim
  cp lib/pure/md5.nim $libdir/pure/md5.nim
  chmod 644 $libdir/pure/md5.nim
  cp lib/pure/memfiles.nim $libdir/pure/memfiles.nim
  chmod 644 $libdir/pure/memfiles.nim
  cp lib/pure/mersenne.nim $libdir/pure/mersenne.nim
  chmod 644 $libdir/pure/mersenne.nim
  cp lib/pure/mimetypes.nim $libdir/pure/mimetypes.nim
  chmod 644 $libdir/pure/mimetypes.nim
  cp lib/pure/net.nim $libdir/pure/net.nim
  chmod 644 $libdir/pure/net.nim
  cp lib/pure/nimprof.nim $libdir/pure/nimprof.nim
  chmod 644 $libdir/pure/nimprof.nim
  cp lib/pure/numeric.nim $libdir/pure/numeric.nim
  chmod 644 $libdir/pure/numeric.nim
  cp lib/pure/oids.nim $libdir/pure/oids.nim
  chmod 644 $libdir/pure/oids.nim
  cp lib/pure/os.nim $libdir/pure/os.nim
  chmod 644 $libdir/pure/os.nim
  cp lib/pure/osproc.nim $libdir/pure/osproc.nim
  chmod 644 $libdir/pure/osproc.nim
  cp lib/pure/parsecfg.nim $libdir/pure/parsecfg.nim
  chmod 644 $libdir/pure/parsecfg.nim
  cp lib/pure/parsecsv.nim $libdir/pure/parsecsv.nim
  chmod 644 $libdir/pure/parsecsv.nim
  cp lib/pure/parseopt.nim $libdir/pure/parseopt.nim
  chmod 644 $libdir/pure/parseopt.nim
  cp lib/pure/parseopt2.nim $libdir/pure/parseopt2.nim
  chmod 644 $libdir/pure/parseopt2.nim
  cp lib/pure/parsesql.nim $libdir/pure/parsesql.nim
  chmod 644 $libdir/pure/parsesql.nim
  cp lib/pure/parseurl.nim $libdir/pure/parseurl.nim
  chmod 644 $libdir/pure/parseurl.nim
  cp lib/pure/parseutils.nim $libdir/pure/parseutils.nim
  chmod 644 $libdir/pure/parseutils.nim
  cp lib/pure/parsexml.nim $libdir/pure/parsexml.nim
  chmod 644 $libdir/pure/parsexml.nim
  cp lib/pure/pegs.nim $libdir/pure/pegs.nim
  chmod 644 $libdir/pure/pegs.nim
  cp lib/pure/poly.nim $libdir/pure/poly.nim
  chmod 644 $libdir/pure/poly.nim
  cp lib/pure/rawsockets.nim $libdir/pure/rawsockets.nim
  chmod 644 $libdir/pure/rawsockets.nim
  cp lib/pure/rawsockets.pretty.nim $libdir/pure/rawsockets.pretty.nim
  chmod 644 $libdir/pure/rawsockets.pretty.nim
  cp lib/pure/redis.nim $libdir/pure/redis.nim
  chmod 644 $libdir/pure/redis.nim
  cp lib/pure/romans.nim $libdir/pure/romans.nim
  chmod 644 $libdir/pure/romans.nim
  cp lib/pure/ropes.nim $libdir/pure/ropes.nim
  chmod 644 $libdir/pure/ropes.nim
  cp lib/pure/scgi.nim $libdir/pure/scgi.nim
  chmod 644 $libdir/pure/scgi.nim
  cp lib/pure/selectors.nim $libdir/pure/selectors.nim
  chmod 644 $libdir/pure/selectors.nim
  cp lib/pure/smtp.nim $libdir/pure/smtp.nim
  chmod 644 $libdir/pure/smtp.nim
  cp lib/pure/sockets.nim $libdir/pure/sockets.nim
  chmod 644 $libdir/pure/sockets.nim
  cp lib/pure/streams.nim $libdir/pure/streams.nim
  chmod 644 $libdir/pure/streams.nim
  cp lib/pure/strtabs.nim $libdir/pure/strtabs.nim
  chmod 644 $libdir/pure/strtabs.nim
  cp lib/pure/strutils.nim $libdir/pure/strutils.nim
  chmod 644 $libdir/pure/strutils.nim
  cp lib/pure/subexes.nim $libdir/pure/subexes.nim
  chmod 644 $libdir/pure/subexes.nim
  cp lib/pure/terminal.nim $libdir/pure/terminal.nim
  chmod 644 $libdir/pure/terminal.nim
  cp lib/pure/times.nim $libdir/pure/times.nim
  chmod 644 $libdir/pure/times.nim
  cp lib/pure/typetraits.nim $libdir/pure/typetraits.nim
  chmod 644 $libdir/pure/typetraits.nim
  cp lib/pure/unicode.nim $libdir/pure/unicode.nim
  chmod 644 $libdir/pure/unicode.nim
  cp lib/pure/unittest.nim $libdir/pure/unittest.nim
  chmod 644 $libdir/pure/unittest.nim
  cp lib/pure/uri.nim $libdir/pure/uri.nim
  chmod 644 $libdir/pure/uri.nim
  cp lib/pure/xmldom.nim $libdir/pure/xmldom.nim
  chmod 644 $libdir/pure/xmldom.nim
  cp lib/pure/xmldomparser.nim $libdir/pure/xmldomparser.nim
  chmod 644 $libdir/pure/xmldomparser.nim
  cp lib/pure/xmlparser.nim $libdir/pure/xmlparser.nim
  chmod 644 $libdir/pure/xmlparser.nim
  cp lib/pure/xmltree.nim $libdir/pure/xmltree.nim
  chmod 644 $libdir/pure/xmltree.nim
  cp lib/pure/actors.nim.cfg $libdir/pure/actors.nim.cfg
  chmod 644 $libdir/pure/actors.nim.cfg
  cp lib/pure/asyncdispatch.nimrod.cfg $libdir/pure/asyncdispatch.nimrod.cfg
  chmod 644 $libdir/pure/asyncdispatch.nimrod.cfg
  cp lib/pure/nimprof.nimrod.cfg $libdir/pure/nimprof.nimrod.cfg
  chmod 644 $libdir/pure/nimprof.nimrod.cfg
  cp lib/pure/smtp.nimrod.cfg $libdir/pure/smtp.nimrod.cfg
  chmod 644 $libdir/pure/smtp.nimrod.cfg
  cp lib/pure/collections/LockFreeHash.nim $libdir/pure/collections/LockFreeHash.nim
  chmod 644 $libdir/pure/collections/LockFreeHash.nim
  cp lib/pure/collections/critbits.nim $libdir/pure/collections/critbits.nim
  chmod 644 $libdir/pure/collections/critbits.nim
  cp lib/pure/collections/intsets.nim $libdir/pure/collections/intsets.nim
  chmod 644 $libdir/pure/collections/intsets.nim
  cp lib/pure/collections/lists.nim $libdir/pure/collections/lists.nim
  chmod 644 $libdir/pure/collections/lists.nim
  cp lib/pure/collections/queues.nim $libdir/pure/collections/queues.nim
  chmod 644 $libdir/pure/collections/queues.nim
  cp lib/pure/collections/rtarrays.nim $libdir/pure/collections/rtarrays.nim
  chmod 644 $libdir/pure/collections/rtarrays.nim
  cp lib/pure/collections/sequtils.nim $libdir/pure/collections/sequtils.nim
  chmod 644 $libdir/pure/collections/sequtils.nim
  cp lib/pure/collections/sets.nim $libdir/pure/collections/sets.nim
  chmod 644 $libdir/pure/collections/sets.nim
  cp lib/pure/collections/tables.nim $libdir/pure/collections/tables.nim
  chmod 644 $libdir/pure/collections/tables.nim
  cp lib/pure/concurrency/cpuinfo.nim $libdir/pure/concurrency/cpuinfo.nim
  chmod 644 $libdir/pure/concurrency/cpuinfo.nim
  cp lib/pure/concurrency/cpuload.nim $libdir/pure/concurrency/cpuload.nim
  chmod 644 $libdir/pure/concurrency/cpuload.nim
  cp lib/pure/concurrency/threadpool.nim $libdir/pure/concurrency/threadpool.nim
  chmod 644 $libdir/pure/concurrency/threadpool.nim
  cp lib/pure/unidecode/unidecode.nim $libdir/pure/unidecode/unidecode.nim
  chmod 644 $libdir/pure/unidecode/unidecode.nim
  cp lib/pure/concurrency/threadpool.nim.cfg $libdir/pure/concurrency/threadpool.nim.cfg
  chmod 644 $libdir/pure/concurrency/threadpool.nim.cfg
  cp lib/impure/db_mysql.nim $libdir/impure/db_mysql.nim
  chmod 644 $libdir/impure/db_mysql.nim
  cp lib/impure/db_postgres.nim $libdir/impure/db_postgres.nim
  chmod 644 $libdir/impure/db_postgres.nim
  cp lib/impure/db_sqlite.nim $libdir/impure/db_sqlite.nim
  chmod 644 $libdir/impure/db_sqlite.nim
  cp lib/impure/dialogs.nim $libdir/impure/dialogs.nim
  chmod 644 $libdir/impure/dialogs.nim
  cp lib/impure/graphics.nim $libdir/impure/graphics.nim
  chmod 644 $libdir/impure/graphics.nim
  cp lib/impure/osinfo_posix.nim $libdir/impure/osinfo_posix.nim
  chmod 644 $libdir/impure/osinfo_posix.nim
  cp lib/impure/osinfo_win.nim $libdir/impure/osinfo_win.nim
  chmod 644 $libdir/impure/osinfo_win.nim
  cp lib/impure/rdstdin.nim $libdir/impure/rdstdin.nim
  chmod 644 $libdir/impure/rdstdin.nim
  cp lib/impure/re.nim $libdir/impure/re.nim
  chmod 644 $libdir/impure/re.nim
  cp lib/impure/ssl.nim $libdir/impure/ssl.nim
  chmod 644 $libdir/impure/ssl.nim
  cp lib/impure/zipfiles.nim $libdir/impure/zipfiles.nim
  chmod 644 $libdir/impure/zipfiles.nim
  cp lib/wrappers/claro.nim $libdir/wrappers/claro.nim
  chmod 644 $libdir/wrappers/claro.nim
  cp lib/wrappers/expat.nim $libdir/wrappers/expat.nim
  chmod 644 $libdir/wrappers/expat.nim
  cp lib/wrappers/iup.nim $libdir/wrappers/iup.nim
  chmod 644 $libdir/wrappers/iup.nim
  cp lib/wrappers/joyent_http_parser.nim $libdir/wrappers/joyent_http_parser.nim
  chmod 644 $libdir/wrappers/joyent_http_parser.nim
  cp lib/wrappers/libcurl.nim $libdir/wrappers/libcurl.nim
  chmod 644 $libdir/wrappers/libcurl.nim
  cp lib/wrappers/libsvm.nim $libdir/wrappers/libsvm.nim
  chmod 644 $libdir/wrappers/libsvm.nim
  cp lib/wrappers/libuv.nim $libdir/wrappers/libuv.nim
  chmod 644 $libdir/wrappers/libuv.nim
  cp lib/wrappers/mysql.nim $libdir/wrappers/mysql.nim
  chmod 644 $libdir/wrappers/mysql.nim
  cp lib/wrappers/odbcsql.nim $libdir/wrappers/odbcsql.nim
  chmod 644 $libdir/wrappers/odbcsql.nim
  cp lib/wrappers/openssl.nim $libdir/wrappers/openssl.nim
  chmod 644 $libdir/wrappers/openssl.nim
  cp lib/wrappers/pcre.nim $libdir/wrappers/pcre.nim
  chmod 644 $libdir/wrappers/pcre.nim
  cp lib/wrappers/pdcurses.nim $libdir/wrappers/pdcurses.nim
  chmod 644 $libdir/wrappers/pdcurses.nim
  cp lib/wrappers/postgres.nim $libdir/wrappers/postgres.nim
  chmod 644 $libdir/wrappers/postgres.nim
  cp lib/wrappers/sphinx.nim $libdir/wrappers/sphinx.nim
  chmod 644 $libdir/wrappers/sphinx.nim
  cp lib/wrappers/sqlite3.nim $libdir/wrappers/sqlite3.nim
  chmod 644 $libdir/wrappers/sqlite3.nim
  cp lib/wrappers/tinyc.nim $libdir/wrappers/tinyc.nim
  chmod 644 $libdir/wrappers/tinyc.nim
  cp lib/wrappers/tre.nim $libdir/wrappers/tre.nim
  chmod 644 $libdir/wrappers/tre.nim
  cp lib/wrappers/readline/history.nim $libdir/wrappers/readline/history.nim
  chmod 644 $libdir/wrappers/readline/history.nim
  cp lib/wrappers/readline/readline.nim $libdir/wrappers/readline/readline.nim
  chmod 644 $libdir/wrappers/readline/readline.nim
  cp lib/wrappers/readline/rltypedefs.nim $libdir/wrappers/readline/rltypedefs.nim
  chmod 644 $libdir/wrappers/readline/rltypedefs.nim
  cp lib/wrappers/sdl/sdl.nim $libdir/wrappers/sdl/sdl.nim
  chmod 644 $libdir/wrappers/sdl/sdl.nim
  cp lib/wrappers/sdl/sdl_gfx.nim $libdir/wrappers/sdl/sdl_gfx.nim
  chmod 644 $libdir/wrappers/sdl/sdl_gfx.nim
  cp lib/wrappers/sdl/sdl_image.nim $libdir/wrappers/sdl/sdl_image.nim
  chmod 644 $libdir/wrappers/sdl/sdl_image.nim
  cp lib/wrappers/sdl/sdl_mixer.nim $libdir/wrappers/sdl/sdl_mixer.nim
  chmod 644 $libdir/wrappers/sdl/sdl_mixer.nim
  cp lib/wrappers/sdl/sdl_mixer_nosmpeg.nim $libdir/wrappers/sdl/sdl_mixer_nosmpeg.nim
  chmod 644 $libdir/wrappers/sdl/sdl_mixer_nosmpeg.nim
  cp lib/wrappers/sdl/sdl_net.nim $libdir/wrappers/sdl/sdl_net.nim
  chmod 644 $libdir/wrappers/sdl/sdl_net.nim
  cp lib/wrappers/sdl/sdl_ttf.nim $libdir/wrappers/sdl/sdl_ttf.nim
  chmod 644 $libdir/wrappers/sdl/sdl_ttf.nim
  cp lib/wrappers/sdl/smpeg.nim $libdir/wrappers/sdl/smpeg.nim
  chmod 644 $libdir/wrappers/sdl/smpeg.nim
  cp lib/wrappers/zip/libzip.nim $libdir/wrappers/zip/libzip.nim
  chmod 644 $libdir/wrappers/zip/libzip.nim
  cp lib/wrappers/zip/zlib.nim $libdir/wrappers/zip/zlib.nim
  chmod 644 $libdir/wrappers/zip/zlib.nim
  cp lib/wrappers/zip/zzip.nim $libdir/wrappers/zip/zzip.nim
  chmod 644 $libdir/wrappers/zip/zzip.nim
  cp lib/wrappers/zip/libzip_all.c $libdir/wrappers/zip/libzip_all.c
  chmod 644 $libdir/wrappers/zip/libzip_all.c
  cp lib/windows/mmsystem.nim $libdir/windows/mmsystem.nim
  chmod 644 $libdir/windows/mmsystem.nim
  cp lib/windows/nb30.nim $libdir/windows/nb30.nim
  chmod 644 $libdir/windows/nb30.nim
  cp lib/windows/psapi.nim $libdir/windows/psapi.nim
  chmod 644 $libdir/windows/psapi.nim
  cp lib/windows/shellapi.nim $libdir/windows/shellapi.nim
  chmod 644 $libdir/windows/shellapi.nim
  cp lib/windows/shfolder.nim $libdir/windows/shfolder.nim
  chmod 644 $libdir/windows/shfolder.nim
  cp lib/windows/windows.nim $libdir/windows/windows.nim
  chmod 644 $libdir/windows/windows.nim
  cp lib/windows/winlean.nim $libdir/windows/winlean.nim
  chmod 644 $libdir/windows/winlean.nim
  cp lib/posix/epoll.nim $libdir/posix/epoll.nim
  chmod 644 $libdir/posix/epoll.nim
  cp lib/posix/inotify.nim $libdir/posix/inotify.nim
  chmod 644 $libdir/posix/inotify.nim
  cp lib/posix/linux.nim $libdir/posix/linux.nim
  chmod 644 $libdir/posix/linux.nim
  cp lib/posix/posix.nim $libdir/posix/posix.nim
  chmod 644 $libdir/posix/posix.nim
  cp lib/js/dom.nim $libdir/js/dom.nim
  chmod 644 $libdir/js/dom.nim
  cp lib/packages/docutils/highlite.nim $libdir/packages/docutils/highlite.nim
  chmod 644 $libdir/packages/docutils/highlite.nim
  cp lib/packages/docutils/rst.nim $libdir/packages/docutils/rst.nim
  chmod 644 $libdir/packages/docutils/rst.nim
  cp lib/packages/docutils/rstast.nim $libdir/packages/docutils/rstast.nim
  chmod 644 $libdir/packages/docutils/rstast.nim
  cp lib/packages/docutils/rstgen.nim $libdir/packages/docutils/rstgen.nim
  chmod 644 $libdir/packages/docutils/rstgen.nim
  
  echo "installation successful"
else
  echo "Nim installation script"
  echo "Usage: [sudo] sh install.sh DIR"
  echo "Where DIR may be:"
  echo "  /usr/bin"
  echo "  /usr/local/bin"
  echo "  /opt"
  echo "  <some other dir> (treated like '/opt')"
  echo "To deinstall, use the command:"
  echo "sh deinstall.sh DIR"
  exit 1
fi

