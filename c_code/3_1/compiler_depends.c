/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tpasscontext342002 Tpasscontext342002;
typedef struct Tsym293834 Tsym293834;
typedef struct Tgen576006 Tgen576006;
typedef struct TNimObject TNimObject;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29485 Memregion29485;
typedef struct Smallchunk29439 Smallchunk29439;
typedef struct Llchunk29479 Llchunk29479;
typedef struct Bigchunk29441 Bigchunk29441;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29483 Avlnode29483;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct Tnode293802 Tnode293802;
typedef struct Ttype293840 Ttype293840;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tident200010 Tident200010;
typedef struct Tnodeseq293796 Tnodeseq293796;
typedef struct Tidobj200004 Tidobj200004;
typedef struct Ttypeseq293836 Ttypeseq293836;
typedef struct TY293929 TY293929;
typedef struct Tstrtable293806 Tstrtable293806;
typedef struct Tsymseq293804 Tsymseq293804;
typedef struct Tloc293816 Tloc293816;
typedef struct Tlib293820 Tlib293820;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct TY293960 TY293960;
typedef struct Tinstantiation293824 Tinstantiation293824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct TY293961 TY293961;
typedef NU8 Tnimkind3403;
typedef NU8 Tnimtypeflag3409Set;
typedef N_NIMCALL_PTR(void, TY3489) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3403 kind;
Tnimtypeflag3409Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, Globalmarkerproc55802) (void);
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext342002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tgen576006  {
  Tpasscontext342002 Sup;
Tsym293834* module;
};
struct  Cell47305  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47321  {
NI len;
NI cap;
Cell47305** d;
};
typedef Smallchunk29439* TY29500[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29485  {
NI minlargeobj;
NI maxlargeobj;
TY29500 freesmallchunks;
Llchunk29479* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29441* freechunkslist;
Intset29414 chunkstarts;
Avlnode29483* root;
Avlnode29483* deleted;
Avlnode29483* last;
Avlnode29483* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat49814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47317  {
NI counter;
NI max;
Pagedesc47313* head;
Pagedesc47313** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47321 zct;
Cellseq47321 decstack;
Cellseq47321 tempstack;
NI recgclock;
Memregion29485 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag293427Set;
typedef NU8 Tnodekind293020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode293802  {
Ttype293840* typ;
Tlineinfo192336 info;
Tnodeflag293427Set flags;
Tnodekind293020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym293834* sym;
} S4;
struct {Tident200010* ident;
} S5;
struct {Tnodeseq293796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef Ropeobj179006* TY533811[2];
struct  Tidobj200004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind293435;
struct  Tstrtable293806  {
NI counter;
Tsymseq293804* data;
};
typedef NU16 Tmagic293524;
typedef NU32 Tsymflag293184Set;
typedef NU32 Toption170009Set;
typedef NU8 Tlockind293808;
typedef NU8 Tstorageloc293812;
typedef NU16 Tlocflag293810Set;
struct  Tloc293816  {
Tlockind293808 k;
Tstorageloc293812 s;
Tlocflag293810Set flags;
Ttype293840* t;
Ropeobj179006* r;
};
struct  Tsym293834  {
  Tidobj200004 Sup;
Tsymkind293435 kind;
union{
struct {Ttypeseq293836* typeinstcache;
} S1;
struct {TY293929* procinstcache;
Tsym293834* gcunsafetyreason;
} S2;
struct {TY293929* usedgenerics;
Tstrtable293806 tab;
} S3;
struct {Tsym293834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic293524 magic;
Ttype293840* typ;
Tident200010* name;
Tlineinfo192336 info;
Tsym293834* owner;
Tsymflag293184Set flags;
Tnode293802* ast;
Toption170009Set options;
NI position;
NI offset;
Tloc293816 loc;
Tlib293820* annex;
Tnode293802* constraint;
};
struct  Tident200010  {
  Tidobj200004 Sup;
NimStringDesc* s;
Tident200010* next;
NI h;
};
struct  Ropeobj179006  {
  TNimObject Sup;
Ropeobj179006* left;
Ropeobj179006* right;
NI length;
NimStringDesc* data;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29437  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29439  {
  Basechunk29437 Sup;
Smallchunk29439* next;
Smallchunk29439* prev;
Freecell29429* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29479  {
NI size;
NI acc;
Llchunk29479* next;
};
struct  Bigchunk29441  {
  Basechunk29437 Sup;
Bigchunk29441* next;
Bigchunk29441* prev;
NI align;
NF data;
};
typedef NI TY29418[16];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29418 bits;
};
typedef Avlnode29483* TY29490[2];
struct  Avlnode29483  {
TY29490 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29418 bits;
};
typedef NU8 Ttypekind293244;
typedef NU8 Tcallingconvention293002;
typedef NU32 Ttypeflag293431Set;
struct  Ttype293840  {
  Tidobj200004 Sup;
Ttypekind293244 kind;
Tcallingconvention293002 callconv;
Ttypeflag293431Set flags;
Ttypeseq293836* sons;
Tnode293802* n;
Tsym293834* owner;
Tsym293834* sym;
Tsym293834* destructor;
Tsym293834* deepcopy;
Tsym293834* assignment;
TY293960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc293816 loc;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind293818;
struct  Tlib293820  {
  Tlistentry147007 Sup;
Tlibkind293818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj179006* name;
Tnode293802* path;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct TY293961 {
NI Field0;
Tsym293834* Field1;
};
struct  Tinstantiation293824  {
Tsym293834* sym;
Ttypeseq293836* concretetypes;
NI compilesid;
};
struct Tnodeseq293796 {
  TGenericSeq Sup;
  Tnode293802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq293836 {
  TGenericSeq Sup;
  Ttype293840* data[SEQ_DECL_SIZE];
};
struct TY293929 {
  TGenericSeq Sup;
  Tinstantiation293824* data[SEQ_DECL_SIZE];
};
struct Tsymseq293804 {
  TGenericSeq Sup;
  Tsym293834* data[SEQ_DECL_SIZE];
};
struct TY293960 {
  TGenericSeq Sup;
  TY293961 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T2841479672_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55802 markerproc0);
N_NIMCALL(void, T2841479672_3)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(NI, sonslen_296351_850551059)(Tnode293802* n0);
N_NIMCALL(NimStringDesc*, getmodulename_349009_2178338529)(Tnode293802* n0);
N_NIMCALL(void, adddependencyaux_576013_2841479672)(NimStringDesc* importing0, NimStringDesc* imported0);
N_NIMCALL(void, addf_180205_2381377266)(Ropeobj179006** c0, NimStringDesc* frmt0, Ropeobj179006** args0, NI args0Len0);
N_NIMCALL(Ropeobj179006*, rope_179277_2381377266)(NimStringDesc* s0);
N_NIMCALL(Tnode293802*, adddotdependency_576020_2841479672)(Tpasscontext342002* c0, Tnode293802* n0);
N_NIMCALL(void, writerope_179836_2381377266)(Ropeobj179006* head0, NimStringDesc* filename0, NIM_BOOL usewarning0);
N_NIMCALL(Ropeobj179006*, HEX25_179905_2381377266)(NimStringDesc* frmt0, Ropeobj179006** args0, NI args0Len0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename0, NimStringDesc* ext0);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path0);
STRING_LITERAL(T2841479672_4, "$1 -> $2;$n", 11);
STRING_LITERAL(T2841479672_5, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(T2841479672_6, "", 0);
STRING_LITERAL(T2841479672_7, "dot", 3);
Ropeobj179006* gdotgraph_576011_2841479672;
extern TNimType NTI179004; /* Rope */
extern TNimType NTI342002; /* TPassContext */
TNimType NTI576006; /* TGen */
extern TNimType NTI293800; /* PSym */
TNimType NTI576008; /* PGen */
extern Gcheap49818 gch_49858_1689653243;
N_NIMCALL(void, T2841479672_2)(void) {
	nimGCvisit((void*)gdotgraph_576011_2841479672, 0);
}
N_NIMCALL(void, T2841479672_3)(void* p, NI op) {
	Tgen576006* a;
	a = (Tgen576006*)p;
	nimGCvisit((void*)(*a).module, op);
}

static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47305* result0;
	result0 = (Cell47305*)0;
	result0 = ((Cell47305*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47305))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47305* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51440_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47305* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51440_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(Tpasscontext342002*, myopen_576078_2841479672)(Tsym293834* module0) {
	Tpasscontext342002* result0;
	Tgen576006* g0;
	result0 = (Tpasscontext342002*)0;
	g0 = (Tgen576006*)0;
	g0 = (Tgen576006*) newObj((&NTI576008), sizeof(Tgen576006));
	(*g0).Sup.Sup.m_type = (&NTI576006);
	asgnRefNoCycle((void**) (&(*g0).module), module0);
	result0 = &g0->Sup;
	return result0;
}

N_NIMCALL(void, adddependencyaux_576013_2841479672)(NimStringDesc* importing0, NimStringDesc* imported0) {
	TY533811 LOC1;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = rope_179277_2381377266(importing0);
	LOC1[1] = rope_179277_2381377266(imported0);
	addf_180205_2381377266(&gdotgraph_576011_2841479672, ((NimStringDesc*) &T2841479672_4), LOC1, 2);
}

N_NIMCALL(Tnode293802*, adddotdependency_576020_2841479672)(Tpasscontext342002* c0, Tnode293802* n0) {
	Tnode293802* result0;
	Tgen576006* g0;
	result0 = (Tnode293802*)0;
	result0 = n0;
	g0 = ((Tgen576006*) (c0));
	switch ((*n0).kind) {
	case ((Tnodekind293020) 116):
	{
		{
			NI i_576037_2841479672;
			NI HEX3Atmp_576058_2841479672;
			NI LOC3;
			NI res_576061_2841479672;
			i_576037_2841479672 = (NI)0;
			HEX3Atmp_576058_2841479672 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = sonslen_296351_850551059(n0);
			HEX3Atmp_576058_2841479672 = (NI)(LOC3 - ((NI) 1));
			res_576061_2841479672 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* imported0;
					if (!(res_576061_2841479672 <= HEX3Atmp_576058_2841479672)) goto LA5;
					i_576037_2841479672 = res_576061_2841479672;
					imported0 = getmodulename_349009_2178338529((*n0).kindU.S6.sons->data[i_576037_2841479672]);
					adddependencyaux_576013_2841479672((*(*(*g0).module).name).s, imported0);
					res_576061_2841479672 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind293020) 120):
	case ((Tnodekind293020) 117):
	{
		NimStringDesc* imported0;
		imported0 = getmodulename_349009_2178338529((*n0).kindU.S6.sons->data[((NI) 0)]);
		adddependencyaux_576013_2841479672((*(*(*g0).module).name).s, imported0);
	}
	break;
	case ((Tnodekind293020) 115):
	case ((Tnodekind293020) 112):
	case ((Tnodekind293020) 126):
	case ((Tnodekind293020) 127):
	{
		{
			NI i_576055_2841479672;
			NI HEX3Atmp_576066_2841479672;
			NI LOC9;
			NI res_576069_2841479672;
			i_576055_2841479672 = (NI)0;
			HEX3Atmp_576066_2841479672 = (NI)0;
			LOC9 = (NI)0;
			LOC9 = sonslen_296351_850551059(n0);
			HEX3Atmp_576066_2841479672 = (NI)(LOC9 - ((NI) 1));
			res_576069_2841479672 = ((NI) 0);
			{
				while (1) {
					Tnode293802* LOC12;
					if (!(res_576069_2841479672 <= HEX3Atmp_576066_2841479672)) goto LA11;
					i_576055_2841479672 = res_576069_2841479672;
					LOC12 = (Tnode293802*)0;
					LOC12 = adddotdependency_576020_2841479672(c0, (*n0).kindU.S6.sons->data[i_576055_2841479672]);
					res_576069_2841479672 += ((NI) 1);
				} LA11: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	return result0;
}

N_NIMCALL(void, generatedot_576002_2841479672)(NimStringDesc* project0) {
	TY533811 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	Ropeobj179006* LOC4;
	NimStringDesc* LOC5;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC2 = (NimStringDesc*)0;
	LOC2 = nosextractFilename(project0);
	LOC3 = (NimStringDesc*)0;
	LOC3 = noschangeFileExt(LOC2, ((NimStringDesc*) &T2841479672_6));
	LOC1[0] = rope_179277_2381377266(LOC3);
	LOC1[1] = gdotgraph_576011_2841479672;
	LOC4 = (Ropeobj179006*)0;
	LOC4 = HEX25_179905_2381377266(((NimStringDesc*) &T2841479672_5), LOC1, 2);
	LOC5 = (NimStringDesc*)0;
	LOC5 = noschangeFileExt(project0, ((NimStringDesc*) &T2841479672_7));
	writerope_179836_2381377266(LOC4, LOC5, NIM_FALSE);
}
NIM_EXTERNC N_NOINLINE(void, compiler_dependsInit000)(void) {
nimRegisterGlobalMarker(T2841479672_2);
}

NIM_EXTERNC N_NOINLINE(void, compiler_dependsDatInit000)(void) {
static TNimNode T2841479672_0[1];
NTI576006.size = sizeof(Tgen576006);
NTI576006.kind = 17;
NTI576006.base = (&NTI342002);
T2841479672_0[0].kind = 1;
T2841479672_0[0].offset = offsetof(Tgen576006, module);
T2841479672_0[0].typ = (&NTI293800);
T2841479672_0[0].name = "module";
NTI576006.node = &T2841479672_0[0];
NTI576008.size = sizeof(Tgen576006*);
NTI576008.kind = 22;
NTI576008.base = (&NTI576006);
NTI576008.marker = T2841479672_3;
}

