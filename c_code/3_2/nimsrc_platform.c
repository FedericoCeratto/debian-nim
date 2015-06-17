/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tinfocpu159479 Tinfocpu159479;
typedef struct Tinfoos159049 Tinfoos159049;
typedef struct Tcell46547 Tcell46547;
typedef struct TNimType TNimType;
typedef struct Tcellseq46563 Tcellseq46563;
typedef struct Tgcheap48416 Tgcheap48416;
typedef struct Tcellset46559 Tcellset46559;
typedef struct Tpagedesc46555 Tpagedesc46555;
typedef struct Tmemregion28410 Tmemregion28410;
typedef struct Tsmallchunk27640 Tsmallchunk27640;
typedef struct Tllchunk28404 Tllchunk28404;
typedef struct Tbigchunk27642 Tbigchunk27642;
typedef struct Tintset27617 Tintset27617;
typedef struct Ttrunk27613 Ttrunk27613;
typedef struct Tavlnode28408 Tavlnode28408;
typedef struct Tgcstat48414 Tgcstat48414;
typedef struct TNimNode TNimNode;
typedef struct Tbasechunk27638 Tbasechunk27638;
typedef struct Tfreecell27630 Tfreecell27630;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Tinfocpu159479 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu159479 TY159497[14];
struct Tinfoos159049 {
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
typedef Tinfoos159049 TY159071[24];
struct  Tcell46547  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46563  {
NI len;
NI cap;
Tcell46547** d;
};
struct  Tcellset46559  {
NI counter;
NI max;
Tpagedesc46555* head;
Tpagedesc46555** data;
};
typedef Tsmallchunk27640* TY28422[512];
typedef Ttrunk27613* Ttrunkbuckets27615[256];
struct  Tintset27617  {
Ttrunkbuckets27615 data;
};
struct  Tmemregion28410  {
NI minlargeobj;
NI maxlargeobj;
TY28422 freesmallchunks;
Tllchunk28404* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27642* freechunkslist;
Tintset27617 chunkstarts;
Tavlnode28408* root;
Tavlnode28408* deleted;
Tavlnode28408* last;
Tavlnode28408* freeavlnodes;
};
struct  Tgcstat48414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48416  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46563 zct;
Tcellseq46563 decstack;
Tcellset46559 cycleroots;
Tcellseq46563 tempstack;
NI recgclock;
Tmemregion28410 region;
Tgcstat48414 stat;
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
typedef NI TY27620[8];
struct  Tpagedesc46555  {
Tpagedesc46555* next;
NI key;
TY27620 bits;
};
struct  Tbasechunk27638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27640  {
  Tbasechunk27638 Sup;
Tsmallchunk27640* next;
Tsmallchunk27640* prev;
Tfreecell27630* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28404  {
NI size;
NI acc;
Tllchunk28404* next;
};
struct  Tbigchunk27642  {
  Tbasechunk27638 Sup;
Tbigchunk27642* next;
Tbigchunk27642* prev;
NI align;
NF data;
};
struct  Ttrunk27613  {
Ttrunk27613* next;
NI key;
TY27620 bits;
};
typedef Tavlnode28408* TY28414[2];
struct  Tavlnode28408  {
TY28414 link;
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
struct  Tfreecell27630  {
Tfreecell27630* next;
NI zerofield;
};
N_NIMCALL(NU8, nametocpu_159617)(NimStringDesc* name);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NU8, nametoos_159611)(NimStringDesc* name);
N_NIMCALL(void, settarget_159634)(NU8 o, NU8 c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46547*, usrtocell_50046)(void* usr);
static N_INLINE(void, rtladdzct_51604)(Tcell46547* c);
N_NOINLINE(void, addzct_50017)(Tcellseq46563* s, Tcell46547* c);
STRING_LITERAL(TMP59, "i386", 4);
STRING_LITERAL(TMP60, "m68k", 4);
STRING_LITERAL(TMP61, "alpha", 5);
STRING_LITERAL(TMP62, "powerpc", 7);
STRING_LITERAL(TMP63, "powerpc64", 9);
STRING_LITERAL(TMP64, "sparc", 5);
STRING_LITERAL(TMP65, "vm", 2);
STRING_LITERAL(TMP66, "ia64", 4);
STRING_LITERAL(TMP67, "amd64", 5);
STRING_LITERAL(TMP68, "mips", 4);
STRING_LITERAL(TMP69, "arm", 3);
STRING_LITERAL(TMP70, "js", 2);
STRING_LITERAL(TMP71, "nimrodvm", 8);
STRING_LITERAL(TMP72, "avr", 3);
NIM_CONST TY159497 Cpu_159496 = {{((NimStringDesc*) &TMP59),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP60),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP61),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP62),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP63),
((NI) 64),
((NU8) 1),
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
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP66),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP67),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP68),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP69),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP70),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP71),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP72),
((NI) 16),
((NU8) 0),
((NI) 32),
((NI) 16)}
}
;
STRING_LITERAL(TMP73, "DOS", 3);
STRING_LITERAL(TMP74, "..", 2);
STRING_LITERAL(TMP75, "$1.dll", 6);
STRING_LITERAL(TMP76, "/", 1);
STRING_LITERAL(TMP77, ".obj", 4);
STRING_LITERAL(TMP78, "\015\012", 2);
STRING_LITERAL(TMP79, ";", 1);
STRING_LITERAL(TMP80, "\\", 1);
STRING_LITERAL(TMP81, ".bat", 4);
STRING_LITERAL(TMP82, ".", 1);
STRING_LITERAL(TMP83, ".exe", 4);
STRING_LITERAL(TMP84, "Windows", 7);
STRING_LITERAL(TMP85, "OS2", 3);
STRING_LITERAL(TMP86, "Linux", 5);
STRING_LITERAL(TMP87, "lib$1.so", 8);
STRING_LITERAL(TMP88, ".o", 2);
STRING_LITERAL(TMP89, "\012", 1);
STRING_LITERAL(TMP90, ":", 1);
STRING_LITERAL(TMP91, ".sh", 3);
STRING_LITERAL(TMP92, "", 0);
STRING_LITERAL(TMP93, "MorphOS", 7);
STRING_LITERAL(TMP94, "SkyOS", 5);
STRING_LITERAL(TMP95, "Solaris", 7);
STRING_LITERAL(TMP96, "Irix", 4);
STRING_LITERAL(TMP97, "NetBSD", 6);
STRING_LITERAL(TMP98, "FreeBSD", 7);
STRING_LITERAL(TMP99, "OpenBSD", 7);
STRING_LITERAL(TMP100, "AIX", 3);
STRING_LITERAL(TMP101, "PalmOS", 6);
STRING_LITERAL(TMP102, "QNX", 3);
STRING_LITERAL(TMP103, "Amiga", 5);
STRING_LITERAL(TMP104, "$1.library", 10);
STRING_LITERAL(TMP105, "Atari", 5);
STRING_LITERAL(TMP106, ".tpp", 4);
STRING_LITERAL(TMP107, "Netware", 7);
STRING_LITERAL(TMP108, "$1.nlm", 6);
STRING_LITERAL(TMP109, ".nlm", 4);
STRING_LITERAL(TMP110, "MacOS", 5);
STRING_LITERAL(TMP111, "::", 2);
STRING_LITERAL(TMP112, "$1Lib", 5);
STRING_LITERAL(TMP113, "\015", 1);
STRING_LITERAL(TMP114, ",", 1);
STRING_LITERAL(TMP115, "MacOSX", 6);
STRING_LITERAL(TMP116, "lib$1.dylib", 11);
STRING_LITERAL(TMP117, "Haiku", 5);
STRING_LITERAL(TMP118, "VxWorks", 7);
STRING_LITERAL(TMP119, ".vxe", 4);
STRING_LITERAL(TMP120, "JS", 2);
STRING_LITERAL(TMP121, "NimrodVM", 8);
STRING_LITERAL(TMP122, "Standalone", 10);
NIM_CONST TY159071 Os_159070 = {{((NimStringDesc*) &TMP73),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP75),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP82),
2}
,
{((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP75),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP82),
2}
,
{((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP75),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP82),
2}
,
{((NimStringDesc*) &TMP86),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP101),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
1}
,
{((NimStringDesc*) &TMP102),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP103),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP104),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
1}
,
{((NimStringDesc*) &TMP105),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP75),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP82),
1}
,
{((NimStringDesc*) &TMP107),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP109),
((NimStringDesc*) &TMP82),
2}
,
{((NimStringDesc*) &TMP110),
((NimStringDesc*) &TMP111),
((NimStringDesc*) &TMP112),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP113),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
2}
,
{((NimStringDesc*) &TMP115),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP116),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
13}
,
{((NimStringDesc*) &TMP117),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
13}
,
{((NimStringDesc*) &TMP118),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP82),
13}
,
{((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
0}
,
{((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
0}
,
{((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
0}
}
;
STRING_LITERAL(TMP123, "macosx", 6);
NU8 targetcpu_159600;
NU8 hostcpu_159601;
NU8 targetos_159602;
NU8 hostos_159603;
NI intsize_159623;
NI floatsize_159624;
NI ptrsize_159625;
NimStringDesc* tnl_159626;
extern Tgcheap48416 gch_48444;

N_NIMCALL(NU8, nametocpu_159617)(NimStringDesc* name) {
	NU8 result;
{	result = 0;
	{
		NU8 i_160423;
		NI res_160428;
		i_160423 = 0;
		res_160428 = ((NI) 1);
		{
			while (1) {
				if (!(res_160428 <= ((NI) 14))) goto LA3;
				i_160423 = ((NU8) (res_160428));
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, Cpu_159496[(i_160423)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result = i_160423;
					goto BeforeRet;
				}
				LA7: ;
				res_160428 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, nametoos_159611)(NimStringDesc* name) {
	NU8 result;
{	result = 0;
	{
		NU8 i_160223;
		NI res_160228;
		i_160223 = 0;
		res_160228 = ((NI) 1);
		{
			while (1) {
				if (!(res_160228 <= ((NI) 24))) goto LA3;
				i_160223 = ((NU8) (res_160228));
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, Os_159070[(i_160223)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result = i_160223;
					goto BeforeRet;
				}
				LA7: ;
				res_160228 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	}BeforeRet: ;
	return result;
}

static N_INLINE(Tcell46547*, usrtocell_50046)(void* usr) {
	Tcell46547* result;
	result = 0;
	result = ((Tcell46547*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46547))))));
	return result;
}

static N_INLINE(void, rtladdzct_51604)(Tcell46547* c) {
	addzct_50017((&gch_48444.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46547* c;
	c = usrtocell_50046(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51604(c);
	}
	LA3: ;
}

N_NIMCALL(void, settarget_159634)(NU8 o, NU8 c) {
	NimStringDesc* LOC1;
	targetcpu_159600 = c;
	targetos_159602 = o;
	intsize_159623 = (NI)(Cpu_159496[(c)- 1].Field1 / ((NI) 8));
	floatsize_159624 = (NI)(Cpu_159496[(c)- 1].Field3 / ((NI) 8));
	ptrsize_159625 = (NI)(Cpu_159496[(c)- 1].Field4 / ((NI) 8));
	LOC1 = 0;
	LOC1 = tnl_159626; tnl_159626 = copyStringRC1(Os_159070[(o)- 1].Field5);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_platformInit)(void) {
	hostcpu_159601 = nametocpu_159617(((NimStringDesc*) &TMP67));
	hostos_159603 = nametoos_159611(((NimStringDesc*) &TMP123));
	settarget_159634(hostos_159603, hostcpu_159601);
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_platformDatInit)(void) {
}

