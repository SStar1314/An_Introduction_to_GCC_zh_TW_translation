# 學習用 gdbm 函式庫放置處/
此為用來下載官方 gdbm 函式庫的地方
## gdbm 函式庫下載處
http://www.gnu.org.ua/software/gdbm/download.html
## 如何建構 gdbm<br />How to build gdbm
### 適用性說明
經測試於 Ubuntu 14.04 x86 64 位元處理器架構版本中
### 1. 解壓縮下載下來的 gdbm 軟體封裝檔
### 2. 開啟一個終端機，將當前工作目錄(current working directory)切換到 gdbm-〈版本編號〉目錄中
### 3. 在終端機內執行下列命令建構 gdbm（命令輸出訊息僅供參考）
`````
$ ./configure  
checking for a BSD-compatible install... /usr/bin/install -c
checking whether build environment is sane... yes
checking for a thread-safe mkdir -p... /bin/mkdir -p
checking for gawk... no
checking for mawk... mawk
checking whether make sets $(MAKE)... yes
checking whether make supports nested variables... yes
checking whether make supports nested variables... (cached) yes
checking for gcc... gcc
checking whether the C compiler works... yes
checking for C compiler default output file name... a.out
checking for suffix of executables... 
checking whether we are cross compiling... no
checking for suffix of object files... o
checking whether we are using the GNU C compiler... yes
checking whether gcc accepts -g... yes
checking for gcc option to accept ISO C89... none needed
checking whether gcc understands -c and -o together... yes
checking for style of include used by make... GNU
checking dependency style of gcc... gcc3
checking how to run the C preprocessor... gcc -E
configure: WARNING: Libtool does not cope well with whitespace in `pwd`
checking build system type... x86_64-unknown-linux-gnu
checking host system type... x86_64-unknown-linux-gnu
checking how to print strings... printf
checking for a sed that does not truncate output... /bin/sed
checking for grep that handles long lines and -e... /bin/grep
checking for egrep... /bin/grep -E
checking for fgrep... /bin/grep -F
checking for ld used by gcc... /usr/bin/ld
checking if the linker (/usr/bin/ld) is GNU ld... yes
checking for BSD- or MS-compatible name lister (nm)... /usr/bin/nm -B
checking the name lister (/usr/bin/nm -B) interface... BSD nm
checking whether ln -s works... yes
checking the maximum length of command line arguments... 1572864
checking whether the shell understands some XSI constructs... yes
checking whether the shell understands "+="... yes
checking how to convert x86_64-unknown-linux-gnu file names to x86_64-unknown-linux-gnu format... func_convert_file_noop
checking how to convert x86_64-unknown-linux-gnu file names to toolchain format... func_convert_file_noop
checking for /usr/bin/ld option to reload object files... -r
checking for objdump... objdump
checking how to recognize dependent libraries... pass_all
checking for dlltool... no
checking how to associate runtime and link libraries... printf %s\n
checking for ar... ar
checking for archiver @FILE support... @
checking for strip... strip
checking for ranlib... ranlib
checking command to parse /usr/bin/nm -B output from gcc object... ok
checking for sysroot... no
checking for mt... mt
checking if mt is a manifest tool... no
checking for ANSI C header files... yes
checking for sys/types.h... yes
checking for sys/stat.h... yes
checking for stdlib.h... yes
checking for string.h... yes
checking for memory.h... yes
checking for strings.h... yes
checking for inttypes.h... yes
checking for stdint.h... yes
checking for unistd.h... yes
checking for dlfcn.h... yes
checking for objdir... .libs
checking if gcc supports -fno-rtti -fno-exceptions... no
checking for gcc option to produce PIC... -fPIC -DPIC
checking if gcc PIC flag -fPIC -DPIC works... yes
checking if gcc static flag -static works... yes
checking if gcc supports -c -o file.o... yes
checking if gcc supports -c -o file.o... (cached) yes
checking whether the gcc linker (/usr/bin/ld -m elf_x86_64) supports shared libraries... yes
checking whether -lc should be explicitly linked in... no
checking dynamic linker characteristics... GNU/Linux ld.so
checking how to hardcode library paths into programs... immediate
checking whether stripping libraries is possible... yes
checking if libtool supports shared libraries... yes
checking whether to build shared libraries... yes
checking whether to build static libraries... yes
checking for special C compiler options needed for large files... no
checking for _FILE_OFFSET_BITS value needed for large files... no
checking for bison... no
checking for byacc... no
checking for flex... no
checking for lex... no
checking for an ANSI C-conforming const... yes
checking for unsigned long long int... yes
checking whether NLS is requested... yes
checking for msgfmt... /usr/bin/msgfmt
checking for gmsgfmt... /usr/bin/msgfmt
checking for xgettext... /usr/bin/xgettext
checking for msgmerge... /usr/bin/msgmerge
checking for ld used by GCC... /usr/bin/ld -m elf_x86_64
checking if the linker (/usr/bin/ld -m elf_x86_64) is GNU ld... yes
checking for shared library run path origin... done
checking for CFPreferencesCopyAppValue... no
checking for CFLocaleCopyCurrent... no
checking for GNU gettext in libc... yes
checking whether to use NLS... yes
checking where the gettext function comes from... libc
checking sys/file.h usability... yes
checking sys/file.h presence... yes
checking for sys/file.h... yes
checking sys/termios.h usability... yes
checking sys/termios.h presence... yes
checking for sys/termios.h... yes
checking for string.h... (cached) yes
checking locale.h usability... yes
checking locale.h presence... yes
checking for locale.h... yes
checking getopt.h usability... yes
checking getopt.h presence... yes
checking for getopt.h... yes
checking for main in -ldbm... no
checking for main in -lndbm... no
checking for rename... yes
checking for ftruncate... yes
checking for flock... yes
checking for lockf... yes
checking for fsync... yes
checking for setlocale... yes
checking for getopt_long... yes
checking for stdlib.h... (cached) yes
checking for unistd.h... (cached) yes
checking for sys/param.h... yes
checking for getpagesize... yes
checking for working mmap... yes
checking for msync... yes
checking for off_t... yes
checking size of off_t... 8
checking for struct stat.st_blksize... yes
checking that generated files are newer than configure... done
configure: creating ./config.status
config.status: creating tests/Makefile
config.status: creating tests/atlocal
config.status: creating po/Makefile.in
config.status: creating Makefile
config.status: creating src/Makefile
config.status: creating src/gdbm.h
config.status: creating doc/Makefile
config.status: creating compat/Makefile
config.status: creating export/Makefile
config.status: creating autoconf.h
config.status: executing depfiles commands
config.status: executing libtool commands
config.status: executing po-directories commands
config.status: creating po/POTFILES
config.status: creating po/Makefile
config.status: executing tests/atconfig commands
`````

`````
$ make  
make  all-recursive
make[1]: 正在進入目錄 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
Making all in po
make[2]: 正在進入目錄 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/po'
make[2]:正在離開目錄 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/po'
Making all in src
make[2]: 正在進入目錄 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
  CC       err.o
  CC       mem.o
  CC       parseopt.o
parseopt.c: In function 『print_option_descr':
parseopt.c:243:7: warning: field width specifier 『*』 expects argument of type 『int', but argument 2 has type 『size_t' [-Wformat=]
       printf ("%*.*s\n", s, s, descr);
       ^
parseopt.c:243:7: warning: field precision specifier 『.*』 expects argument of type 『int', but argument 3 has type 『size_t' [-Wformat=]
  CC       progname.o
  AR       libgdbmapp.a
  CC       gdbmclose.lo
  CC       gdbmcount.lo
  CC       gdbmdelete.lo
  CC       gdbmdump.lo
  CC       gdbmerrno.lo
  CC       gdbmexists.lo
  CC       gdbmexp.lo  
Making install in po
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/po'
installing de.gmo as ~/Software/libgdbm/share/locale/de/LC_MESSAGES/gdbm.mo
installing eo.gmo as ~/Software/libgdbm/share/locale/eo/LC_MESSAGES/gdbm.mo
installing fi.gmo as ~/Software/libgdbm/share/locale/fi/LC_MESSAGES/gdbm.mo
installing fr.gmo as ~/Software/libgdbm/share/locale/fr/LC_MESSAGES/gdbm.mo
installing ja.gmo as ~/Software/libgdbm/share/locale/ja/LC_MESSAGES/gdbm.mo
installing pl.gmo as ~/Software/libgdbm/share/locale/pl/LC_MESSAGES/gdbm.mo
installing pt_BR.gmo as ~/Software/libgdbm/share/locale/pt_BR/LC_MESSAGES/gdbm.mo
installing sr.gmo as ~/Software/libgdbm/share/locale/sr/LC_MESSAGES/gdbm.mo
installing uk.gmo as ~/Software/libgdbm/share/locale/uk/LC_MESSAGES/gdbm.mo
installing vi.gmo as ~/Software/libgdbm/share/locale/vi/LC_MESSAGES/gdbm.mo
if test "gdbm" = "gettext-tools"; then \
	  /bin/mkdir -p ~/Software/libgdbm/share/gettext/po; \
	  for file in Makefile.in.in remove-potcdate.sin quot.sed boldquot.sed en@quot.header en@boldquot.header insert-header.sin Rules-quot   Makevars.template; do \
	    /usr/bin/install -c -m 644 ./$file \
			    ~/Software/libgdbm/share/gettext/po/$file; \
	  done; \
	  for file in Makevars; do \
	    rm -f ~/Software/libgdbm/share/gettext/po/$file; \
	  done; \
	else \
	  : ; \
	fi
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/po'
Making install in src
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
make[2]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
 /bin/mkdir -p '~/Software/libgdbm/lib'
 /bin/bash ../libtool   --mode=install /usr/bin/install -c   libgdbm.la '~/Software/libgdbm/lib'
libtool: install: /usr/bin/install -c .libs/libgdbm.so.4.0.0 ~/Software/libgdbm/lib/libgdbm.so.4.0.0
libtool: install: (cd ~/Software/libgdbm/lib && { ln -s -f libgdbm.so.4.0.0 libgdbm.so.4 || { rm -f libgdbm.so.4 && ln -s libgdbm.so.4.0.0 libgdbm.so.4; }; })
libtool: install: (cd ~/Software/libgdbm/lib && { ln -s -f libgdbm.so.4.0.0 libgdbm.so || { rm -f libgdbm.so && ln -s libgdbm.so.4.0.0 libgdbm.so; }; })
libtool: install: /usr/bin/install -c .libs/libgdbm.lai ~/Software/libgdbm/lib/libgdbm.la
libtool: install: /usr/bin/install -c .libs/libgdbm.a ~/Software/libgdbm/lib/libgdbm.a
libtool: install: chmod 644 ~/Software/libgdbm/lib/libgdbm.a
libtool: install: ranlib ~/Software/libgdbm/lib/libgdbm.a
libtool: install: warning: remember to run `libtool --finish /usr/local/lib'
 /bin/mkdir -p '~/Software/libgdbm/bin'
  /bin/bash ../libtool   --mode=install /usr/bin/install -c gdbmtool gdbm_load gdbm_dump '~/Software/libgdbm/bin'
libtool: install: warning: `./libgdbm.la' has not been installed in `/usr/local/lib'
libtool: install: /usr/bin/install -c .libs/gdbmtool ~/Software/libgdbm/bin/gdbmtool
libtool: install: warning: `./libgdbm.la' has not been installed in `/usr/local/lib'
libtool: install: /usr/bin/install -c .libs/gdbm_load ~/Software/libgdbm/bin/gdbm_load
libtool: install: warning: `./libgdbm.la' has not been installed in `/usr/local/lib'
libtool: install: /usr/bin/install -c .libs/gdbm_dump ~/Software/libgdbm/bin/gdbm_dump
 /bin/mkdir -p '~/Software/libgdbm/include'
 /usr/bin/install -c -m 644 gdbm.h '~/Software/libgdbm/include'
make[2]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
Making install in doc
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
make[2]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
make[2]: 没有什么可以做的为 `install-exec-am'。
 /bin/mkdir -p '~/Software/libgdbm/share/info'
 /usr/bin/install -c -m 644 ./gdbm.info '~/Software/libgdbm/share/info'
 install-info --info-dir='~/Software/libgdbm/share/info' '~/Software/libgdbm/share/info/gdbm.info'
This is not dpkg install-info anymore, but GNU install-info
See the man page for ginstall-info for command line arguments
 /bin/mkdir -p '~/Software/libgdbm/share/man/man1'
 /usr/bin/install -c -m 644 gdbm_dump.1 gdbm_load.1 gdbmtool.1 '~/Software/libgdbm/share/man/man1'
 /bin/mkdir -p '~/Software/libgdbm/share/man/man3'
 /usr/bin/install -c -m 644 gdbm.3 '~/Software/libgdbm/share/man/man3'
make[2]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
Making install in tests  
Making install in po
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/po'
installing de.gmo as ~/Software/libgdbm/share/locale/de/LC_MESSAGES/gdbm.mo
installing eo.gmo as ~/Software/libgdbm/share/locale/eo/LC_MESSAGES/gdbm.mo
installing fi.gmo as ~/Software/libgdbm/share/locale/fi/LC_MESSAGES/gdbm.mo
installing fr.gmo as ~/Software/libgdbm/share/locale/fr/LC_MESSAGES/gdbm.mo
installing ja.gmo as ~/Software/libgdbm/share/locale/ja/LC_MESSAGES/gdbm.mo
installing pl.gmo as ~/Software/libgdbm/share/locale/pl/LC_MESSAGES/gdbm.mo
installing pt_BR.gmo as ~/Software/libgdbm/share/locale/pt_BR/LC_MESSAGES/gdbm.mo
installing sr.gmo as ~/Software/libgdbm/share/locale/sr/LC_MESSAGES/gdbm.mo
installing uk.gmo as ~/Software/libgdbm/share/locale/uk/LC_MESSAGES/gdbm.mo
installing vi.gmo as ~/Software/libgdbm/share/locale/vi/LC_MESSAGES/gdbm.mo
if test "gdbm" = "gettext-tools"; then \
	  /bin/mkdir -p ~/Software/libgdbm/share/gettext/po; \
	  for file in Makefile.in.in remove-potcdate.sin quot.sed boldquot.sed en@quot.header en@boldquot.header insert-header.sin Rules-quot   Makevars.template; do \
	    /usr/bin/install -c -m 644 ./$file \
			    ~/Software/libgdbm/share/gettext/po/$file; \
	  done; \
	  for file in Makevars; do \
	    rm -f ~/Software/libgdbm/share/gettext/po/$file; \
	  done; \
	else \
	  : ; \
	fi
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/po'
Making install in src
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
make[2]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
 /bin/mkdir -p '~/Software/libgdbm/lib'
 /bin/bash ../libtool   --mode=install /usr/bin/install -c   libgdbm.la '~/Software/libgdbm/lib'
libtool: install: /usr/bin/install -c .libs/libgdbm.so.4.0.0 ~/Software/libgdbm/lib/libgdbm.so.4.0.0
libtool: install: (cd ~/Software/libgdbm/lib && { ln -s -f libgdbm.so.4.0.0 libgdbm.so.4 || { rm -f libgdbm.so.4 && ln -s libgdbm.so.4.0.0 libgdbm.so.4; }; })
libtool: install: (cd ~/Software/libgdbm/lib && { ln -s -f libgdbm.so.4.0.0 libgdbm.so || { rm -f libgdbm.so && ln -s libgdbm.so.4.0.0 libgdbm.so; }; })
libtool: install: /usr/bin/install -c .libs/libgdbm.lai ~/Software/libgdbm/lib/libgdbm.la
libtool: install: /usr/bin/install -c .libs/libgdbm.a ~/Software/libgdbm/lib/libgdbm.a
libtool: install: chmod 644 ~/Software/libgdbm/lib/libgdbm.a
libtool: install: ranlib ~/Software/libgdbm/lib/libgdbm.a
libtool: install: warning: remember to run `libtool --finish /usr/local/lib'
 /bin/mkdir -p '~/Software/libgdbm/bin'
  /bin/bash ../libtool   --mode=install /usr/bin/install -c gdbmtool gdbm_load gdbm_dump '~/Software/libgdbm/bin'
libtool: install: warning: `./libgdbm.la' has not been installed in `/usr/local/lib'
libtool: install: /usr/bin/install -c .libs/gdbmtool ~/Software/libgdbm/bin/gdbmtool
libtool: install: warning: `./libgdbm.la' has not been installed in `/usr/local/lib'
libtool: install: /usr/bin/install -c .libs/gdbm_load ~/Software/libgdbm/bin/gdbm_load
libtool: install: warning: `./libgdbm.la' has not been installed in `/usr/local/lib'
libtool: install: /usr/bin/install -c .libs/gdbm_dump ~/Software/libgdbm/bin/gdbm_dump
 /bin/mkdir -p '~/Software/libgdbm/include'
 /usr/bin/install -c -m 644 gdbm.h '~/Software/libgdbm/include'
make[2]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
Making install in doc
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
make[2]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
make[2]: 没有什么可以做的为 `install-exec-am'。
 /bin/mkdir -p '~/Software/libgdbm/share/info'
 /usr/bin/install -c -m 644 ./gdbm.info '~/Software/libgdbm/share/info'
 install-info --info-dir='~/Software/libgdbm/share/info' '~/Software/libgdbm/share/info/gdbm.info'
This is not dpkg install-info anymore, but GNU install-info
See the man page for ginstall-info for command line arguments
 /bin/mkdir -p '~/Software/libgdbm/share/man/man1'
 /usr/bin/install -c -m 644 gdbm_dump.1 gdbm_load.1 gdbmtool.1 '~/Software/libgdbm/share/man/man1'
 /bin/mkdir -p '~/Software/libgdbm/share/man/man3'
 /usr/bin/install -c -m 644 gdbm.3 '~/Software/libgdbm/share/man/man3'
make[2]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
Making install in tests  
Making install in po
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/po'
installing de.gmo as ~/Software/libgdbm/share/locale/de/LC_MESSAGES/gdbm.mo
installing eo.gmo as ~/Software/libgdbm/share/locale/eo/LC_MESSAGES/gdbm.mo
installing fi.gmo as ~/Software/libgdbm/share/locale/fi/LC_MESSAGES/gdbm.mo
installing fr.gmo as ~/Software/libgdbm/share/locale/fr/LC_MESSAGES/gdbm.mo
installing ja.gmo as ~/Software/libgdbm/share/locale/ja/LC_MESSAGES/gdbm.mo
installing pl.gmo as ~/Software/libgdbm/share/locale/pl/LC_MESSAGES/gdbm.mo
installing pt_BR.gmo as ~/Software/libgdbm/share/locale/pt_BR/LC_MESSAGES/gdbm.mo
installing sr.gmo as ~/Software/libgdbm/share/locale/sr/LC_MESSAGES/gdbm.mo
installing uk.gmo as ~/Software/libgdbm/share/locale/uk/LC_MESSAGES/gdbm.mo
installing vi.gmo as ~/Software/libgdbm/share/locale/vi/LC_MESSAGES/gdbm.mo
if test "gdbm" = "gettext-tools"; then \
	  /bin/mkdir -p ~/Software/libgdbm/share/gettext/po; \
	  for file in Makefile.in.in remove-potcdate.sin quot.sed boldquot.sed en@quot.header en@boldquot.header insert-header.sin Rules-quot   Makevars.template; do \
	    /usr/bin/install -c -m 644 ./$file \
			    ~/Software/libgdbm/share/gettext/po/$file; \
	  done; \
	  for file in Makevars; do \
	    rm -f ~/Software/libgdbm/share/gettext/po/$file; \
	  done; \
	else \
	  : ; \
	fi
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/po'
Making install in src
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
make[2]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
 /bin/mkdir -p '~/Software/libgdbm/lib'
 /bin/bash ../libtool   --mode=install /usr/bin/install -c   libgdbm.la '~/Software/libgdbm/lib'
libtool: install: /usr/bin/install -c .libs/libgdbm.so.4.0.0 ~/Software/libgdbm/lib/libgdbm.so.4.0.0
libtool: install: (cd ~/Software/libgdbm/lib && { ln -s -f libgdbm.so.4.0.0 libgdbm.so.4 || { rm -f libgdbm.so.4 && ln -s libgdbm.so.4.0.0 libgdbm.so.4; }; })
libtool: install: (cd ~/Software/libgdbm/lib && { ln -s -f libgdbm.so.4.0.0 libgdbm.so || { rm -f libgdbm.so && ln -s libgdbm.so.4.0.0 libgdbm.so; }; })
libtool: install: /usr/bin/install -c .libs/libgdbm.lai ~/Software/libgdbm/lib/libgdbm.la
libtool: install: /usr/bin/install -c .libs/libgdbm.a ~/Software/libgdbm/lib/libgdbm.a
libtool: install: chmod 644 ~/Software/libgdbm/lib/libgdbm.a
libtool: install: ranlib ~/Software/libgdbm/lib/libgdbm.a
libtool: install: warning: remember to run `libtool --finish /usr/local/lib'
 /bin/mkdir -p '~/Software/libgdbm/bin'
  /bin/bash ../libtool   --mode=install /usr/bin/install -c gdbmtool gdbm_load gdbm_dump '~/Software/libgdbm/bin'
libtool: install: warning: `./libgdbm.la' has not been installed in `/usr/local/lib'
libtool: install: /usr/bin/install -c .libs/gdbmtool ~/Software/libgdbm/bin/gdbmtool
libtool: install: warning: `./libgdbm.la' has not been installed in `/usr/local/lib'
libtool: install: /usr/bin/install -c .libs/gdbm_load ~/Software/libgdbm/bin/gdbm_load
libtool: install: warning: `./libgdbm.la' has not been installed in `/usr/local/lib'
libtool: install: /usr/bin/install -c .libs/gdbm_dump ~/Software/libgdbm/bin/gdbm_dump
 /bin/mkdir -p '~/Software/libgdbm/include'
 /usr/bin/install -c -m 644 gdbm.h '~/Software/libgdbm/include'
make[2]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
Making install in doc
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
make[2]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
make[2]: 没有什么可以做的为 `install-exec-am'。
 /bin/mkdir -p '~/Software/libgdbm/share/info'
 /usr/bin/install -c -m 644 ./gdbm.info '~/Software/libgdbm/share/info'
 install-info --info-dir='~/Software/libgdbm/share/info' '~/Software/libgdbm/share/info/gdbm.info'
This is not dpkg install-info anymore, but GNU install-info
See the man page for ginstall-info for command line arguments
 /bin/mkdir -p '~/Software/libgdbm/share/man/man1'
 /usr/bin/install -c -m 644 gdbm_dump.1 gdbm_load.1 gdbmtool.1 '~/Software/libgdbm/share/man/man1'
 /bin/mkdir -p '~/Software/libgdbm/share/man/man3'
 /usr/bin/install -c -m 644 gdbm.3 '~/Software/libgdbm/share/man/man3'
make[2]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
Making install in tests
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[2]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[2]: 没有什么可以做的为 `install-exec-am'。
make[2]: 没有什么可以做的为 `install-data-am'。
make[2]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
make[2]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
make[2]: 没有什么可以做的为 `install-exec-am'。
make[2]: 没有什么可以做的为 `install-data-am'。
make[2]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[2]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[2]: 没有什么可以做的为 `install-exec-am'。
make[2]: 没有什么可以做的为 `install-data-am'。
make[2]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
make[2]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
make[2]: 没有什么可以做的为 `install-exec-am'。
make[2]: 没有什么可以做的为 `install-data-am'。
make[2]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[2]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[2]: 没有什么可以做的为 `install-exec-am'。
make[2]: 没有什么可以做的为 `install-data-am'。
make[2]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
make[2]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
make[2]: 没有什么可以做的为 `install-exec-am'。
make[2]: 没有什么可以做的为 `install-data-am'。
make[2]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
  CC       gdbmfdesc.lo
  CC       gdbmfetch.lo
  CC       gdbmload.lo
  CC       gdbmopen.lo
In file included from gdbmdefs.h:20:0,
                 from gdbmopen.c:23:
gdbmopen.c: In function 'gdbm_open':
systems.h:56:34: warning: ignoring return value of 'ftruncate', declared with attribute warn_unused_result [-Wunused-result]
 # define TRUNCATE(dbf) ftruncate (dbf->desc, 0)
                                  ^
gdbmopen.c:205:7: note: in expansion of macro 'TRUNCATE'
       TRUNCATE (dbf);
       ^
  CC       gdbmimp.lo
  CC       gdbmreorg.lo
  CC       gdbmseq.lo
  CC       gdbmsetopt.lo
  CC       gdbmstore.lo
  CC       gdbmsync.lo
  CC       base64.lo
  CC       bucket.lo
  CC       falloc.lo
  CC       findkey.lo
  CC       fullio.lo
  CC       hash.lo
  CC       lock.lo
  CC       mmap.lo
mmap.c: In function '_gdbm_mapped_remap':
mmap.c:156:14: warning: ignoring return value of 'write', declared with attribute warn_unused_result [-Wunused-result]
        write (dbf->desc, &c, 1);
              ^
  CC       update.lo
  CC       version.lo
  CCLD     libgdbm.la
  CC       datconv.o
  CC       gram.o
  CC       lex.o
  CC       gdbmtool.o
gdbmtool.c: In function 『_gdbm_print_bucket_cache':
gdbmtool.c:274:3: warning: format 『%d' expects argument of type 『int', but argument 3 has type 『size_t' [-Wformat=]
   dbf->cache_size);
   ^
  CC       var.o
  CC       util.o
  CCLD     gdbmtool
  CC       gdbm_load.o
  CCLD     gdbm_load
  CC       gdbm_dump.o
  CCLD     gdbm_dump
make[2]:正在離開目錄 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
Making all in doc
make[2]: 正在進入目錄 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
make[2]: 沒有什麼可以做的為 `all'。
make[2]:正在離開目錄 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
Making all in tests
make[2]: 正在進入目錄 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[2]: 沒有什麼可以做的為 `all'。
make[2]:正在離開目錄 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[2]: 正在進入目錄 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
make[2]:正在離開目錄 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
make[1]:正在離開目錄 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
`````

`````
$ make prefix=$(echo ~)/Software/libgdbm install  
Making install in po
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/po'
installing de.gmo as ~/Software/libgdbm/share/locale/de/LC_MESSAGES/gdbm.mo
installing eo.gmo as ~/Software/libgdbm/share/locale/eo/LC_MESSAGES/gdbm.mo
installing fi.gmo as ~/Software/libgdbm/share/locale/fi/LC_MESSAGES/gdbm.mo
installing fr.gmo as ~/Software/libgdbm/share/locale/fr/LC_MESSAGES/gdbm.mo
installing ja.gmo as ~/Software/libgdbm/share/locale/ja/LC_MESSAGES/gdbm.mo
installing pl.gmo as ~/Software/libgdbm/share/locale/pl/LC_MESSAGES/gdbm.mo
installing pt_BR.gmo as ~/Software/libgdbm/share/locale/pt_BR/LC_MESSAGES/gdbm.mo
installing sr.gmo as ~/Software/libgdbm/share/locale/sr/LC_MESSAGES/gdbm.mo
installing uk.gmo as ~/Software/libgdbm/share/locale/uk/LC_MESSAGES/gdbm.mo
installing vi.gmo as ~/Software/libgdbm/share/locale/vi/LC_MESSAGES/gdbm.mo
if test "gdbm" = "gettext-tools"; then \
	  /bin/mkdir -p ~/Software/libgdbm/share/gettext/po; \
	  for file in Makefile.in.in remove-potcdate.sin quot.sed boldquot.sed en@quot.header en@boldquot.header insert-header.sin Rules-quot   Makevars.template; do \
	    /usr/bin/install -c -m 644 ./$file \
			    ~/Software/libgdbm/share/gettext/po/$file; \
	  done; \
	  for file in Makevars; do \
	    rm -f ~/Software/libgdbm/share/gettext/po/$file; \
	  done; \
	else \
	  : ; \
	fi
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/po'
Making install in src
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
make[2]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
 /bin/mkdir -p '~/Software/libgdbm/lib'
 /bin/bash ../libtool   --mode=install /usr/bin/install -c   libgdbm.la '~/Software/libgdbm/lib'
libtool: install: /usr/bin/install -c .libs/libgdbm.so.4.0.0 ~/Software/libgdbm/lib/libgdbm.so.4.0.0
libtool: install: (cd ~/Software/libgdbm/lib && { ln -s -f libgdbm.so.4.0.0 libgdbm.so.4 || { rm -f libgdbm.so.4 && ln -s libgdbm.so.4.0.0 libgdbm.so.4; }; })
libtool: install: (cd ~/Software/libgdbm/lib && { ln -s -f libgdbm.so.4.0.0 libgdbm.so || { rm -f libgdbm.so && ln -s libgdbm.so.4.0.0 libgdbm.so; }; })
libtool: install: /usr/bin/install -c .libs/libgdbm.lai ~/Software/libgdbm/lib/libgdbm.la
libtool: install: /usr/bin/install -c .libs/libgdbm.a ~/Software/libgdbm/lib/libgdbm.a
libtool: install: chmod 644 ~/Software/libgdbm/lib/libgdbm.a
libtool: install: ranlib ~/Software/libgdbm/lib/libgdbm.a
libtool: install: warning: remember to run `libtool --finish /usr/local/lib'
 /bin/mkdir -p '~/Software/libgdbm/bin'
  /bin/bash ../libtool   --mode=install /usr/bin/install -c gdbmtool gdbm_load gdbm_dump '~/Software/libgdbm/bin'
libtool: install: warning: `./libgdbm.la' has not been installed in `/usr/local/lib'
libtool: install: /usr/bin/install -c .libs/gdbmtool ~/Software/libgdbm/bin/gdbmtool
libtool: install: warning: `./libgdbm.la' has not been installed in `/usr/local/lib'
libtool: install: /usr/bin/install -c .libs/gdbm_load ~/Software/libgdbm/bin/gdbm_load
libtool: install: warning: `./libgdbm.la' has not been installed in `/usr/local/lib'
libtool: install: /usr/bin/install -c .libs/gdbm_dump ~/Software/libgdbm/bin/gdbm_dump
 /bin/mkdir -p '~/Software/libgdbm/include'
 /usr/bin/install -c -m 644 gdbm.h '~/Software/libgdbm/include'
make[2]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/src'
Making install in doc
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
make[2]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
make[2]: 没有什么可以做的为 `install-exec-am'。
 /bin/mkdir -p '~/Software/libgdbm/share/info'
 /usr/bin/install -c -m 644 ./gdbm.info '~/Software/libgdbm/share/info'
 install-info --info-dir='~/Software/libgdbm/share/info' '~/Software/libgdbm/share/info/gdbm.info'
This is not dpkg install-info anymore, but GNU install-info
See the man page for ginstall-info for command line arguments
 /bin/mkdir -p '~/Software/libgdbm/share/man/man1'
 /usr/bin/install -c -m 644 gdbm_dump.1 gdbm_load.1 gdbmtool.1 '~/Software/libgdbm/share/man/man1'
 /bin/mkdir -p '~/Software/libgdbm/share/man/man3'
 /usr/bin/install -c -m 644 gdbm.3 '~/Software/libgdbm/share/man/man3'
make[2]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/doc'
Making install in tests
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[2]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[2]: 没有什么可以做的为 `install-exec-am'。
make[2]: 没有什么可以做的为 `install-data-am'。
make[2]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11/tests'
make[1]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
make[2]: 正在进入目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
make[2]: 没有什么可以做的为 `install-exec-am'。
make[2]: 没有什么可以做的为 `install-data-am'。
make[2]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
make[1]:正在离开目录 `gccintro_code_zh_TW_translation/3.1.1 搜索路徑範例/學習用 gdbm 函式庫放置處/gdbm-1.11'
`````
### 4. 如果命令執行一切正常 gdbm 最後會被安裝到家目錄底下的 Software 目錄底下的 libgdbm 目錄（或您於最後一個命令指定的 prefix 路徑）中，gdbm 函式庫的 header 檔案會位於底下的 include 目錄，函式庫檔案會位於底下的 lib 目錄底下
## 已知問題<br />Known issues
### 無法將軟體安裝的 prefix 設定為含中文字元的路徑
如此執行命令時會出現錯誤，目前找不到解決方法