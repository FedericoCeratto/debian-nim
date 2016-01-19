/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tinfocpu166462 Tinfocpu166462;
typedef struct Tinfoos166037 Tinfoos166037;
typedef struct Cell47705 Cell47705;
typedef struct TNimType TNimType;
typedef struct Cellseq47721 Cellseq47721;
typedef struct Gcheap50018 Gcheap50018;
typedef struct Gcstack50016 Gcstack50016;
typedef struct Cellset47717 Cellset47717;
typedef struct Pagedesc47713 Pagedesc47713;
typedef struct Memregion29888 Memregion29888;
typedef struct Smallchunk29840 Smallchunk29840;
typedef struct Llchunk29882 Llchunk29882;
typedef struct Bigchunk29842 Bigchunk29842;
typedef struct Intset29814 Intset29814;
typedef struct Trunk29810 Trunk29810;
typedef struct Avlnode29886 Avlnode29886;
typedef struct Gcstat50014 Gcstat50014;
typedef struct TNimNode TNimNode;
typedef struct Basechunk29838 Basechunk29838;
typedef struct Freecell29830 Freecell29830;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Tinfocpu166462 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu166462 TY166490[18];
struct Tinfoos166037 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef Tinfoos166037 TY166069[24];
struct  Cell47705  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47721  {
NI len;
NI cap;
Cell47705** d;
};
struct  Cellset47717  {
NI counter;
NI max;
Pagedesc47713* head;
Pagedesc47713** data;
};
typedef Smallchunk29840* TY29903[512];
typedef Trunk29810* Trunkbuckets29812[256];
struct  Intset29814  {
Trunkbuckets29812 data;
};
struct  Memregion29888  {
NI minlargeobj;
NI maxlargeobj;
TY29903 freesmallchunks;
Llchunk29882* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29842* freechunkslist;
Intset29814 chunkstarts;
Avlnode29886* root;
Avlnode29886* deleted;
Avlnode29886* last;
Avlnode29886* freeavlnodes;
};
struct  Gcstat50014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap50018  {
Gcstack50016* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47721 zct;
Cellseq47721 decstack;
Cellset47717 cycleroots;
Cellseq47721 tempstack;
NI recgclock;
Memregion29888 region;
Gcstat50014 stat;
};
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  Gcstack50016  {
Gcstack50016* prev;
Gcstack50016* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29819[8];
struct  Pagedesc47713  {
Pagedesc47713* next;
NI key;
TY29819 bits;
};
struct  Basechunk29838  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29840  {
  Basechunk29838 Sup;
Smallchunk29840* next;
Smallchunk29840* prev;
Freecell29830* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29882  {
NI size;
NI acc;
Llchunk29882* next;
};
struct  Bigchunk29842  {
  Basechunk29838 Sup;
Bigchunk29842* next;
Bigchunk29842* prev;
NI align;
NF data;
};
struct  Trunk29810  {
Trunk29810* next;
NI key;
TY29819 bits;
};
typedef Avlnode29886* TY29893[2];
struct  Avlnode29886  {
TY29893 link;
NI key;
NI upperbound;
NI level;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Freecell29830  {
Freecell29830* next;
NI zerofield;
};
N_NIMCALL(NU8, nametocpu_166612)(NimStringDesc* name);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NU8, nametoos_166609)(NimStringDesc* name);
N_NIMCALL(void, settarget_166623)(NU8 o, NU8 c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47705*, usrtocell_51640)(void* usr);
static N_INLINE(void, rtladdzct_53201)(Cell47705* c);
N_NOINLINE(void, addzct_51617)(Cellseq47721* s, Cell47705* c);
STRING_LITERAL(TMP61, "i386", 4);
STRING_LITERAL(TMP62, "m68k", 4);
STRING_LITERAL(TMP63, "alpha", 5);
STRING_LITERAL(TMP64, "powerpc", 7);
STRING_LITERAL(TMP65, "powerpc64", 9);
STRING_LITERAL(TMP66, "powerpc64el", 11);
STRING_LITERAL(TMP67, "sparc", 5);
STRING_LITERAL(TMP68, "vm", 2);
STRING_LITERAL(TMP69, "ia64", 4);
STRING_LITERAL(TMP70, "amd64", 5);
STRING_LITERAL(TMP71, "mips", 4);
STRING_LITERAL(TMP72, "mipsel", 6);
STRING_LITERAL(TMP73, "arm", 3);
STRING_LITERAL(TMP74, "arm64", 5);
STRING_LITERAL(TMP75, "js", 2);
STRING_LITERAL(TMP76, "nimrodvm", 8);
STRING_LITERAL(TMP77, "avr", 3);
STRING_LITERAL(TMP78, "msp430", 6);
NIM_CONST TY166490 Cpu_166476 = {{((NimStringDesc*) &TMP61),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP62),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP63),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP64),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP65),
((NI) 64),
((NU8) 1),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP66),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP67),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP68),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP69),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP70),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP71),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP72),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP73),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP74),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP75),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP76),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP77),
((NI) 16),
((NU8) 0),
((NI) 32),
((NI) 16)}
,
{((NimStringDesc*) &TMP78),
((NI) 16),
((NU8) 0),
((NI) 32),
((NI) 16)}
}
;
STRING_LITERAL(TMP79, "DOS", 3);
STRING_LITERAL(TMP80, "..", 2);
STRING_LITERAL(TMP81, "$1.dll", 6);
STRING_LITERAL(TMP82, "/", 1);
STRING_LITERAL(TMP83, ".obj", 4);
STRING_LITERAL(TMP84, "\015\012", 2);
STRING_LITERAL(TMP85, ";", 1);
STRING_LITERAL(TMP86, "\\", 1);
STRING_LITERAL(TMP87, ".bat", 4);
STRING_LITERAL(TMP88, ".", 1);
STRING_LITERAL(TMP89, ".exe", 4);
STRING_LITERAL(TMP90, "Windows", 7);
STRING_LITERAL(TMP91, "OS2", 3);
STRING_LITERAL(TMP92, "Linux", 5);
STRING_LITERAL(TMP93, "lib$1.so", 8);
STRING_LITERAL(TMP94, ".o", 2);
STRING_LITERAL(TMP95, "\012", 1);
STRING_LITERAL(TMP96, ":", 1);
STRING_LITERAL(TMP97, ".sh", 3);
STRING_LITERAL(TMP98, "", 0);
STRING_LITERAL(TMP99, "MorphOS", 7);
STRING_LITERAL(TMP100, "SkyOS", 5);
STRING_LITERAL(TMP101, "Solaris", 7);
STRING_LITERAL(TMP102, "Irix", 4);
STRING_LITERAL(TMP103, "NetBSD", 6);
STRING_LITERAL(TMP104, "FreeBSD", 7);
STRING_LITERAL(TMP105, "OpenBSD", 7);
STRING_LITERAL(TMP106, "AIX", 3);
STRING_LITERAL(TMP107, "PalmOS", 6);
STRING_LITERAL(TMP108, "QNX", 3);
STRING_LITERAL(TMP109, "Amiga", 5);
STRING_LITERAL(TMP110, "$1.library", 10);
STRING_LITERAL(TMP111, "Atari", 5);
STRING_LITERAL(TMP112, ".tpp", 4);
STRING_LITERAL(TMP113, "Netware", 7);
STRING_LITERAL(TMP114, "$1.nlm", 6);
STRING_LITERAL(TMP115, ".nlm", 4);
STRING_LITERAL(TMP116, "MacOS", 5);
STRING_LITERAL(TMP117, "::", 2);
STRING_LITERAL(TMP118, "$1Lib", 5);
STRING_LITERAL(TMP119, "\015", 1);
STRING_LITERAL(TMP120, ",", 1);
STRING_LITERAL(TMP121, "MacOSX", 6);
STRING_LITERAL(TMP122, "lib$1.dylib", 11);
STRING_LITERAL(TMP123, "Haiku", 5);
STRING_LITERAL(TMP124, "VxWorks", 7);
STRING_LITERAL(TMP125, ".vxe", 4);
STRING_LITERAL(TMP126, "JS", 2);
STRING_LITERAL(TMP127, "NimrodVM", 8);
STRING_LITERAL(TMP128, "Standalone", 10);
NIM_CONST TY166069 Os_166055 = {{((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP86),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP88),
2}
,
{((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP86),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP88),
2}
,
{((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP86),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP88),
2}
,
{((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
5}
,
{((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
5}
,
{((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
5}
,
{((NimStringDesc*) &TMP101),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
5}
,
{((NimStringDesc*) &TMP102),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
5}
,
{((NimStringDesc*) &TMP103),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
5}
,
{((NimStringDesc*) &TMP104),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
5}
,
{((NimStringDesc*) &TMP105),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
5}
,
{((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
5}
,
{((NimStringDesc*) &TMP107),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
1}
,
{((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
5}
,
{((NimStringDesc*) &TMP109),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP110),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
1}
,
{((NimStringDesc*) &TMP111),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP112),
((NimStringDesc*) &TMP88),
1}
,
{((NimStringDesc*) &TMP113),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP115),
((NimStringDesc*) &TMP88),
2}
,
{((NimStringDesc*) &TMP116),
((NimStringDesc*) &TMP117),
((NimStringDesc*) &TMP118),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
2}
,
{((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
13}
,
{((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
13}
,
{((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP86),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP125),
((NimStringDesc*) &TMP88),
13}
,
{((NimStringDesc*) &TMP126),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
0}
,
{((NimStringDesc*) &TMP127),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
0}
,
{((NimStringDesc*) &TMP128),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP88),
0}
}
;
STRING_LITERAL(TMP129, "macosx", 6);
NU8 targetcpu_166601;
NU8 hostcpu_166602;
NU8 targetos_166603;
NU8 hostos_166604;
NI intsize_166615;
NI floatsize_166616;
NI ptrsize_166617;
NimStringDesc* tnl_166618;
extern Gcheap50018 gch_50059;

N_NIMCALL(NU8, nametocpu_166612)(NimStringDesc* name) {
	NU8 result;
{	result = 0;
	{
		NU8 i_167414;
		NI res_167419;
		i_167414 = 0;
		res_167419 = ((NI) 1);
		{
			while (1) {
				if (!(res_167419 <= ((NI) 18))) goto LA3;
				i_167414 = ((NU8) (res_167419));
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, Cpu_166476[(i_167414)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result = i_167414;
					goto BeforeRet;
				}
				LA7: ;
				res_167419 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, nametoos_166609)(NimStringDesc* name) {
	NU8 result;
{	result = 0;
	{
		NU8 i_167214;
		NI res_167219;
		i_167214 = 0;
		res_167219 = ((NI) 1);
		{
			while (1) {
				if (!(res_167219 <= ((NI) 24))) goto LA3;
				i_167214 = ((NU8) (res_167219));
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, Os_166055[(i_167214)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result = i_167214;
					goto BeforeRet;
				}
				LA7: ;
				res_167219 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	}BeforeRet: ;
	return result;
}

static N_INLINE(Cell47705*, usrtocell_51640)(void* usr) {
	Cell47705* result;
	result = 0;
	result = ((Cell47705*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47705))))));
	return result;
}

static N_INLINE(void, rtladdzct_53201)(Cell47705* c) {
	addzct_51617((&gch_50059.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47705* c;
	c = usrtocell_51640(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53201(c);
	}
	LA3: ;
}

N_NIMCALL(void, settarget_166623)(NU8 o, NU8 c) {
	NimStringDesc* LOC1;
	targetcpu_166601 = c;
	targetos_166603 = o;
	intsize_166615 = (NI)(Cpu_166476[(c)- 1].Field1 / ((NI) 8));
	floatsize_166616 = (NI)(Cpu_166476[(c)- 1].Field3 / ((NI) 8));
	ptrsize_166617 = (NI)(Cpu_166476[(c)- 1].Field4 / ((NI) 8));
	LOC1 = 0;
	LOC1 = tnl_166618; tnl_166618 = copyStringRC1(Os_166055[(o)- 1].Field5);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}
NIM_EXTERNC N_NOINLINE(void, compiler_platformInit000)(void) {
	hostcpu_166602 = nametocpu_166612(((NimStringDesc*) &TMP70));
	hostos_166604 = nametoos_166609(((NimStringDesc*) &TMP129));
	settarget_166623(hostos_166604, hostcpu_166602);
}

NIM_EXTERNC N_NOINLINE(void, compiler_platformDatInit000)(void) {
}

