/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tinfocpu171477 Tinfocpu171477;
typedef struct Tinfoos171037 Tinfoos171037;
typedef struct Cell47905 Cell47905;
typedef struct Cellseq47921 Cellseq47921;
typedef struct Gcheap50418 Gcheap50418;
typedef struct Gcstack50416 Gcstack50416;
typedef struct Memregion30085 Memregion30085;
typedef struct Smallchunk30039 Smallchunk30039;
typedef struct Llchunk30079 Llchunk30079;
typedef struct Bigchunk30041 Bigchunk30041;
typedef struct Intset30014 Intset30014;
typedef struct Trunk30010 Trunk30010;
typedef struct Avlnode30083 Avlnode30083;
typedef struct Gcstat50414 Gcstat50414;
typedef struct Cellset47917 Cellset47917;
typedef struct Pagedesc47913 Pagedesc47913;
typedef struct Basechunk30037 Basechunk30037;
typedef struct Freecell30029 Freecell30029;
typedef NU8 Tsystemcpu171454;
typedef NU8 Tsystemos171006;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Tnimkind3203;
typedef NU8 Tnimtypeflag3209Set;
typedef N_NIMCALL_PTR(void, TY3289) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3203 kind;
Tnimtypeflag3209Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, Globalmarkerproc56402) (void);
typedef NU8 Tendian171475;
struct Tinfocpu171477 {
NimStringDesc* Field0;
NI Field1;
Tendian171475 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu171477 TY171511[18];
typedef NU8 Tinfoosprop171033Set;
struct Tinfoos171037 {
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
Tinfoosprop171033Set Field12;
};
typedef Tinfoos171037 TY171084[24];
struct  Cell47905  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47921  {
NI len;
NI cap;
Cell47905** d;
};
typedef Smallchunk30039* TY30100[512];
typedef Trunk30010* Trunkbuckets30012[256];
struct  Intset30014  {
Trunkbuckets30012 data;
};
struct  Memregion30085  {
NI minlargeobj;
NI maxlargeobj;
TY30100 freesmallchunks;
Llchunk30079* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30041* freechunkslist;
Intset30014 chunkstarts;
Avlnode30083* root;
Avlnode30083* deleted;
Avlnode30083* last;
Avlnode30083* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47917  {
NI counter;
NI max;
Pagedesc47913* head;
Pagedesc47913** data;
};
struct  Gcheap50418  {
Gcstack50416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47921 zct;
Cellseq47921 decstack;
Cellseq47921 tempstack;
NI recgclock;
Memregion30085 region;
Gcstat50414 stat;
Cellset47917 marked;
Cellseq47921 additionalroots;
};
struct  Gcstack50416  {
Gcstack50416* prev;
Gcstack50416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30037  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30039  {
  Basechunk30037 Sup;
Smallchunk30039* next;
Smallchunk30039* prev;
Freecell30029* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30079  {
NI size;
NI acc;
Llchunk30079* next;
};
struct  Bigchunk30041  {
  Basechunk30037 Sup;
Bigchunk30041* next;
Bigchunk30041* prev;
NI align;
NF data;
};
typedef NI TY30018[16];
struct  Trunk30010  {
Trunk30010* next;
NI key;
TY30018 bits;
};
typedef Avlnode30083* TY30090[2];
struct  Avlnode30083  {
TY30090 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47913  {
Pagedesc47913* next;
NI key;
TY30018 bits;
};
struct  Freecell30029  {
Freecell30029* next;
NI zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP86)();
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56402 markerproc0);
N_NIMCALL(Tsystemcpu171454, nametocpu_171633_4151366050)(NimStringDesc* name0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(Tsystemos171006, nametoos_171630_4151366050)(NimStringDesc* name0);
N_NIMCALL(void, settarget_171644_4151366050)(Tsystemos171006 o0, Tsystemcpu171454 c0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
STRING_LITERAL(TMP87, "i386", 4);
STRING_LITERAL(TMP88, "m68k", 4);
STRING_LITERAL(TMP89, "alpha", 5);
STRING_LITERAL(TMP90, "powerpc", 7);
STRING_LITERAL(TMP91, "powerpc64", 9);
STRING_LITERAL(TMP92, "powerpc64el", 11);
STRING_LITERAL(TMP93, "sparc", 5);
STRING_LITERAL(TMP94, "vm", 2);
STRING_LITERAL(TMP95, "ia64", 4);
STRING_LITERAL(TMP96, "amd64", 5);
STRING_LITERAL(TMP97, "mips", 4);
STRING_LITERAL(TMP98, "mipsel", 6);
STRING_LITERAL(TMP99, "arm", 3);
STRING_LITERAL(TMP100, "arm64", 5);
STRING_LITERAL(TMP101, "js", 2);
STRING_LITERAL(TMP102, "nimrodvm", 8);
STRING_LITERAL(TMP103, "avr", 3);
STRING_LITERAL(TMP104, "msp430", 6);
NIM_CONST TY171511 Cpu_171497_4151366050 = {{((NimStringDesc*) &TMP87),
((NI) 32),
((Tendian171475) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP88),
((NI) 32),
((Tendian171475) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP89),
((NI) 64),
((Tendian171475) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP90),
((NI) 32),
((Tendian171475) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP91),
((NI) 64),
((Tendian171475) 1),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP92),
((NI) 64),
((Tendian171475) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP93),
((NI) 32),
((Tendian171475) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP94),
((NI) 32),
((Tendian171475) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP95),
((NI) 64),
((Tendian171475) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP96),
((NI) 64),
((Tendian171475) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP97),
((NI) 32),
((Tendian171475) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP98),
((NI) 32),
((Tendian171475) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP99),
((NI) 32),
((Tendian171475) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP100),
((NI) 64),
((Tendian171475) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP101),
((NI) 32),
((Tendian171475) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP102),
((NI) 32),
((Tendian171475) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP103),
((NI) 16),
((Tendian171475) 0),
((NI) 32),
((NI) 16)}
,
{((NimStringDesc*) &TMP104),
((NI) 16),
((Tendian171475) 0),
((NI) 32),
((NI) 16)}
}
;
STRING_LITERAL(TMP105, "DOS", 3);
STRING_LITERAL(TMP106, "..", 2);
STRING_LITERAL(TMP107, "$1.dll", 6);
STRING_LITERAL(TMP108, "/", 1);
STRING_LITERAL(TMP109, ".obj", 4);
STRING_LITERAL(TMP110, "\015\012", 2);
STRING_LITERAL(TMP111, ";", 1);
STRING_LITERAL(TMP112, "\\", 1);
STRING_LITERAL(TMP113, ".bat", 4);
STRING_LITERAL(TMP114, ".", 1);
STRING_LITERAL(TMP115, ".exe", 4);
STRING_LITERAL(TMP116, "Windows", 7);
STRING_LITERAL(TMP117, "OS2", 3);
STRING_LITERAL(TMP118, "Linux", 5);
STRING_LITERAL(TMP119, "lib$1.so", 8);
STRING_LITERAL(TMP120, ".o", 2);
STRING_LITERAL(TMP121, "\012", 1);
STRING_LITERAL(TMP122, ":", 1);
STRING_LITERAL(TMP123, ".sh", 3);
STRING_LITERAL(TMP124, "", 0);
STRING_LITERAL(TMP125, "MorphOS", 7);
STRING_LITERAL(TMP126, "SkyOS", 5);
STRING_LITERAL(TMP127, "Solaris", 7);
STRING_LITERAL(TMP128, "Irix", 4);
STRING_LITERAL(TMP129, "NetBSD", 6);
STRING_LITERAL(TMP130, "FreeBSD", 7);
STRING_LITERAL(TMP131, "OpenBSD", 7);
STRING_LITERAL(TMP132, "AIX", 3);
STRING_LITERAL(TMP133, "PalmOS", 6);
STRING_LITERAL(TMP134, "QNX", 3);
STRING_LITERAL(TMP135, "Amiga", 5);
STRING_LITERAL(TMP136, "$1.library", 10);
STRING_LITERAL(TMP137, "Atari", 5);
STRING_LITERAL(TMP138, ".tpp", 4);
STRING_LITERAL(TMP139, "Netware", 7);
STRING_LITERAL(TMP140, "$1.nlm", 6);
STRING_LITERAL(TMP141, ".nlm", 4);
STRING_LITERAL(TMP142, "MacOS", 5);
STRING_LITERAL(TMP143, "::", 2);
STRING_LITERAL(TMP144, "$1Lib", 5);
STRING_LITERAL(TMP145, "\015", 1);
STRING_LITERAL(TMP146, ",", 1);
STRING_LITERAL(TMP147, "MacOSX", 6);
STRING_LITERAL(TMP148, "lib$1.dylib", 11);
STRING_LITERAL(TMP149, "Haiku", 5);
STRING_LITERAL(TMP150, "VxWorks", 7);
STRING_LITERAL(TMP151, ".vxe", 4);
STRING_LITERAL(TMP152, "JS", 2);
STRING_LITERAL(TMP153, "NimrodVM", 8);
STRING_LITERAL(TMP154, "Standalone", 10);
NIM_CONST TY171084 Os_171070_4151366050 = {{((NimStringDesc*) &TMP105),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP107),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP109),
((NimStringDesc*) &TMP110),
((NimStringDesc*) &TMP111),
((NimStringDesc*) &TMP112),
((NimStringDesc*) &TMP113),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP115),
((NimStringDesc*) &TMP114),
2}
,
{((NimStringDesc*) &TMP116),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP107),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP109),
((NimStringDesc*) &TMP110),
((NimStringDesc*) &TMP111),
((NimStringDesc*) &TMP112),
((NimStringDesc*) &TMP113),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP115),
((NimStringDesc*) &TMP114),
2}
,
{((NimStringDesc*) &TMP117),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP107),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP109),
((NimStringDesc*) &TMP110),
((NimStringDesc*) &TMP111),
((NimStringDesc*) &TMP112),
((NimStringDesc*) &TMP113),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP115),
((NimStringDesc*) &TMP114),
2}
,
{((NimStringDesc*) &TMP118),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
5}
,
{((NimStringDesc*) &TMP125),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
5}
,
{((NimStringDesc*) &TMP126),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
5}
,
{((NimStringDesc*) &TMP127),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
5}
,
{((NimStringDesc*) &TMP128),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
5}
,
{((NimStringDesc*) &TMP129),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
5}
,
{((NimStringDesc*) &TMP130),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
5}
,
{((NimStringDesc*) &TMP131),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
5}
,
{((NimStringDesc*) &TMP132),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
5}
,
{((NimStringDesc*) &TMP133),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
1}
,
{((NimStringDesc*) &TMP134),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
5}
,
{((NimStringDesc*) &TMP135),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP136),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
1}
,
{((NimStringDesc*) &TMP137),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP107),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP138),
((NimStringDesc*) &TMP114),
1}
,
{((NimStringDesc*) &TMP139),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP140),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP110),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP141),
((NimStringDesc*) &TMP114),
2}
,
{((NimStringDesc*) &TMP142),
((NimStringDesc*) &TMP143),
((NimStringDesc*) &TMP144),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP145),
((NimStringDesc*) &TMP146),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
2}
,
{((NimStringDesc*) &TMP147),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP148),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
13}
,
{((NimStringDesc*) &TMP149),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
13}
,
{((NimStringDesc*) &TMP150),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP111),
((NimStringDesc*) &TMP112),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP151),
((NimStringDesc*) &TMP114),
13}
,
{((NimStringDesc*) &TMP152),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
0}
,
{((NimStringDesc*) &TMP153),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
0}
,
{((NimStringDesc*) &TMP154),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP114),
0}
}
;
STRING_LITERAL(TMP155, "freebsd", 7);
Tsystemcpu171454 targetcpu_171622_4151366050;
Tsystemcpu171454 hostcpu_171623_4151366050;
Tsystemos171006 targetos_171624_4151366050;
Tsystemos171006 hostos_171625_4151366050;
NI intsize_171636_4151366050;
NI floatsize_171637_4151366050;
NI ptrsize_171638_4151366050;
NimStringDesc* tnl_171639_4151366050;
extern TNimType NTI138; /* string */
extern Gcheap50418 gch_50458_1689653243;
N_NIMCALL(void, TMP86)() {
	nimGCvisit((void*)tnl_171639_4151366050, 0);
}

N_NIMCALL(Tsystemcpu171454, nametocpu_171633_4151366050)(NimStringDesc* name0) {
	Tsystemcpu171454 result0;
{	result0 = (Tsystemcpu171454)0;
	{
		Tsystemcpu171454 i_172414_4151366050;
		NI res_172419_4151366050;
		i_172414_4151366050 = (Tsystemcpu171454)0;
		res_172419_4151366050 = ((NI) 1);
		{
			while (1) {
				if (!(res_172419_4151366050 <= ((NI) 18))) goto LA3;
				i_172414_4151366050 = ((Tsystemcpu171454) (res_172419_4151366050));
				{
					NI LOC6;
					LOC6 = (NI)0;
					LOC6 = nsuCmpIgnoreStyle(name0, Cpu_171497_4151366050[(i_172414_4151366050)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result0 = i_172414_4151366050;
					goto BeforeRet;
				}
				LA7: ;
				res_172419_4151366050 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = ((Tsystemcpu171454) 0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tsystemos171006, nametoos_171630_4151366050)(NimStringDesc* name0) {
	Tsystemos171006 result0;
{	result0 = (Tsystemos171006)0;
	{
		Tsystemos171006 i_172214_4151366050;
		NI res_172219_4151366050;
		i_172214_4151366050 = (Tsystemos171006)0;
		res_172219_4151366050 = ((NI) 1);
		{
			while (1) {
				if (!(res_172219_4151366050 <= ((NI) 24))) goto LA3;
				i_172214_4151366050 = ((Tsystemos171006) (res_172219_4151366050));
				{
					NI LOC6;
					LOC6 = (NI)0;
					LOC6 = nsuCmpIgnoreStyle(name0, Os_171070_4151366050[(i_172214_4151366050)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result0 = i_172214_4151366050;
					goto BeforeRet;
				}
				LA7: ;
				res_172219_4151366050 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = ((Tsystemos171006) 0);
	}BeforeRet: ;
	return result0;
}

static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47905* result0;
	result0 = (Cell47905*)0;
	result0 = ((Cell47905*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47905))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0) {
	addzct_52017_1689653243((&gch_50458_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47905* c0;
	c0 = usrtocell_52040_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(void, settarget_171644_4151366050)(Tsystemos171006 o0, Tsystemcpu171454 c0) {
	NimStringDesc* LOC1;
	targetcpu_171622_4151366050 = c0;
	targetos_171624_4151366050 = o0;
	intsize_171636_4151366050 = (NI)(Cpu_171497_4151366050[(c0)- 1].Field1 / ((NI) 8));
	floatsize_171637_4151366050 = (NI)(Cpu_171497_4151366050[(c0)- 1].Field3 / ((NI) 8));
	ptrsize_171638_4151366050 = (NI)(Cpu_171497_4151366050[(c0)- 1].Field4 / ((NI) 8));
	LOC1 = (NimStringDesc*)0;
	LOC1 = tnl_171639_4151366050; tnl_171639_4151366050 = copyStringRC1(Os_171070_4151366050[(o0)- 1].Field5);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}
NIM_EXTERNC N_NOINLINE(void, compiler_platformInit000)(void) {
nimRegisterGlobalMarker(TMP86);
	hostcpu_171623_4151366050 = nametocpu_171633_4151366050(((NimStringDesc*) &TMP87));
	hostos_171625_4151366050 = nametoos_171630_4151366050(((NimStringDesc*) &TMP155));
	settarget_171644_4151366050(hostos_171625_4151366050, hostcpu_171623_4151366050);
}

NIM_EXTERNC N_NOINLINE(void, compiler_platformDatInit000)(void) {
}

