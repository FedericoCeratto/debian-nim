/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tinfocpu160479 Tinfocpu160479;
typedef struct Tinfoos160049 Tinfoos160049;
typedef struct Tcell46347 Tcell46347;
typedef struct TNimType TNimType;
typedef struct Tcellseq46363 Tcellseq46363;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46359 Tcellset46359;
typedef struct Tpagedesc46355 Tpagedesc46355;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct TNimNode TNimNode;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Tinfocpu160479 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu160479 TY160497[14];
struct Tinfoos160049 {
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
typedef Tinfoos160049 TY160071[24];
struct  Tcell46347  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46363  {
NI len;
NI cap;
Tcell46347** d;
};
struct  Tcellset46359  {
NI counter;
NI max;
Tpagedesc46355* head;
Tpagedesc46355** data;
};
typedef Tsmallchunk27440* TY28222[512];
typedef Ttrunk27413* Ttrunkbuckets27415[256];
struct  Tintset27417  {
Ttrunkbuckets27415 data;
};
struct  Tmemregion28210  {
NI minlargeobj;
NI maxlargeobj;
TY28222 freesmallchunks;
Tllchunk28204* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27442* freechunkslist;
Tintset27417 chunkstarts;
Tavlnode28208* root;
Tavlnode28208* deleted;
Tavlnode28208* last;
Tavlnode28208* freeavlnodes;
};
struct  Tgcstat48214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48216  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46363 zct;
Tcellseq46363 decstack;
Tcellset46359 cycleroots;
Tcellseq46363 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
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
typedef NI TY27420[16];
struct  Tpagedesc46355  {
Tpagedesc46355* next;
NI key;
TY27420 bits;
};
struct  Tbasechunk27438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27440  {
  Tbasechunk27438 Sup;
Tsmallchunk27440* next;
Tsmallchunk27440* prev;
Tfreecell27430* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28204  {
NI size;
NI acc;
Tllchunk28204* next;
};
struct  Tbigchunk27442  {
  Tbasechunk27438 Sup;
Tbigchunk27442* next;
Tbigchunk27442* prev;
NI align;
NF data;
};
struct  Ttrunk27413  {
Ttrunk27413* next;
NI key;
TY27420 bits;
};
typedef Tavlnode28208* TY28214[2];
struct  Tavlnode28208  {
TY28214 link;
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
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
N_NIMCALL(NU8, nametocpu_160617)(NimStringDesc* name);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NU8, nametoos_160611)(NimStringDesc* name);
N_NIMCALL(void, settarget_160634)(NU8 o, NU8 c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
STRING_LITERAL(TMP61, "i386", 4);
STRING_LITERAL(TMP62, "m68k", 4);
STRING_LITERAL(TMP63, "alpha", 5);
STRING_LITERAL(TMP64, "powerpc", 7);
STRING_LITERAL(TMP65, "powerpc64", 9);
STRING_LITERAL(TMP66, "sparc", 5);
STRING_LITERAL(TMP67, "vm", 2);
STRING_LITERAL(TMP68, "ia64", 4);
STRING_LITERAL(TMP69, "amd64", 5);
STRING_LITERAL(TMP70, "mips", 4);
STRING_LITERAL(TMP71, "arm", 3);
STRING_LITERAL(TMP72, "js", 2);
STRING_LITERAL(TMP73, "nimrodvm", 8);
STRING_LITERAL(TMP74, "avr", 3);
NIM_CONST TY160497 Cpu_160496 = {{((NimStringDesc*) &TMP61),
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
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP67),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP68),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP69),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP70),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP71),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP72),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP73),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP74),
((NI) 16),
((NU8) 0),
((NI) 32),
((NI) 16)}
}
;
STRING_LITERAL(TMP75, "DOS", 3);
STRING_LITERAL(TMP76, "..", 2);
STRING_LITERAL(TMP77, "$1.dll", 6);
STRING_LITERAL(TMP78, "/", 1);
STRING_LITERAL(TMP79, ".obj", 4);
STRING_LITERAL(TMP80, "\015\012", 2);
STRING_LITERAL(TMP81, ";", 1);
STRING_LITERAL(TMP82, "\\", 1);
STRING_LITERAL(TMP83, ".bat", 4);
STRING_LITERAL(TMP84, ".", 1);
STRING_LITERAL(TMP85, ".exe", 4);
STRING_LITERAL(TMP86, "Windows", 7);
STRING_LITERAL(TMP87, "OS2", 3);
STRING_LITERAL(TMP88, "Linux", 5);
STRING_LITERAL(TMP89, "lib$1.so", 8);
STRING_LITERAL(TMP90, ".o", 2);
STRING_LITERAL(TMP91, "\012", 1);
STRING_LITERAL(TMP92, ":", 1);
STRING_LITERAL(TMP93, ".sh", 3);
STRING_LITERAL(TMP94, "", 0);
STRING_LITERAL(TMP95, "MorphOS", 7);
STRING_LITERAL(TMP96, "SkyOS", 5);
STRING_LITERAL(TMP97, "Solaris", 7);
STRING_LITERAL(TMP98, "Irix", 4);
STRING_LITERAL(TMP99, "NetBSD", 6);
STRING_LITERAL(TMP100, "FreeBSD", 7);
STRING_LITERAL(TMP101, "OpenBSD", 7);
STRING_LITERAL(TMP102, "AIX", 3);
STRING_LITERAL(TMP103, "PalmOS", 6);
STRING_LITERAL(TMP104, "QNX", 3);
STRING_LITERAL(TMP105, "Amiga", 5);
STRING_LITERAL(TMP106, "$1.library", 10);
STRING_LITERAL(TMP107, "Atari", 5);
STRING_LITERAL(TMP108, ".tpp", 4);
STRING_LITERAL(TMP109, "Netware", 7);
STRING_LITERAL(TMP110, "$1.nlm", 6);
STRING_LITERAL(TMP111, ".nlm", 4);
STRING_LITERAL(TMP112, "MacOS", 5);
STRING_LITERAL(TMP113, "::", 2);
STRING_LITERAL(TMP114, "$1Lib", 5);
STRING_LITERAL(TMP115, "\015", 1);
STRING_LITERAL(TMP116, ",", 1);
STRING_LITERAL(TMP117, "MacOSX", 6);
STRING_LITERAL(TMP118, "lib$1.dylib", 11);
STRING_LITERAL(TMP119, "Haiku", 5);
STRING_LITERAL(TMP120, "VxWorks", 7);
STRING_LITERAL(TMP121, ".vxe", 4);
STRING_LITERAL(TMP122, "JS", 2);
STRING_LITERAL(TMP123, "NimrodVM", 8);
STRING_LITERAL(TMP124, "Standalone", 10);
NIM_CONST TY160071 Os_160070 = {{((NimStringDesc*) &TMP75),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP84),
2}
,
{((NimStringDesc*) &TMP86),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP84),
2}
,
{((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP84),
2}
,
{((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP101),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP102),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP103),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
1}
,
{((NimStringDesc*) &TMP104),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP105),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
1}
,
{((NimStringDesc*) &TMP107),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP84),
1}
,
{((NimStringDesc*) &TMP109),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP110),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP111),
((NimStringDesc*) &TMP84),
2}
,
{((NimStringDesc*) &TMP112),
((NimStringDesc*) &TMP113),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP115),
((NimStringDesc*) &TMP116),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
2}
,
{((NimStringDesc*) &TMP117),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP118),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
13}
,
{((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
13}
,
{((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP84),
13}
,
{((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
0}
,
{((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
0}
,
{((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
0}
}
;
STRING_LITERAL(TMP125, "linux", 5);
NU8 targetcpu_160600;
NU8 hostcpu_160601;
NU8 targetos_160602;
NU8 hostos_160603;
NI intsize_160623;
NI floatsize_160624;
NI ptrsize_160625;
NimStringDesc* tnl_160626;
extern Tgcheap48216 gch_48244;

N_NIMCALL(NU8, nametocpu_160617)(NimStringDesc* name) {
	NU8 result;
{	result = 0;
	{
		NU8 i_161423;
		NI res_161428;
		i_161423 = 0;
		res_161428 = ((NI) 1);
		{
			while (1) {
				if (!(res_161428 <= ((NI) 14))) goto LA3;
				i_161423 = ((NU8) (res_161428));
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, Cpu_160496[(i_161423)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result = i_161423;
					goto BeforeRet;
				}
				LA7: ;
				res_161428 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, nametoos_160611)(NimStringDesc* name) {
	NU8 result;
{	result = 0;
	{
		NU8 i_161223;
		NI res_161228;
		i_161223 = 0;
		res_161228 = ((NI) 1);
		{
			while (1) {
				if (!(res_161228 <= ((NI) 24))) goto LA3;
				i_161223 = ((NU8) (res_161228));
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, Os_160070[(i_161223)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result = i_161223;
					goto BeforeRet;
				}
				LA7: ;
				res_161228 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	}BeforeRet: ;
	return result;
}

static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr) {
	Tcell46347* result;
	result = 0;
	result = ((Tcell46347*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46347))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46347* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46347* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

N_NIMCALL(void, settarget_160634)(NU8 o, NU8 c) {
	NimStringDesc* LOC1;
	targetcpu_160600 = c;
	targetos_160602 = o;
	intsize_160623 = (NI)(Cpu_160496[(c)- 1].Field1 / ((NI) 8));
	floatsize_160624 = (NI)(Cpu_160496[(c)- 1].Field3 / ((NI) 8));
	ptrsize_160625 = (NI)(Cpu_160496[(c)- 1].Field4 / ((NI) 8));
	LOC1 = 0;
	LOC1 = tnl_160626; tnl_160626 = copyStringRC1(Os_160070[(o)- 1].Field5);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_platformInit)(void) {
	hostcpu_160601 = nametocpu_160617(((NimStringDesc*) &TMP61));
	hostos_160603 = nametoos_160611(((NimStringDesc*) &TMP125));
	settarget_160634(hostos_160603, hostcpu_160601);
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_platformDatInit)(void) {
}

