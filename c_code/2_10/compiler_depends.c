/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Ropeobj180006 Ropeobj180006;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tpasscontext343002 Tpasscontext343002;
typedef struct Tsym294834 Tsym294834;
typedef struct Tgen577006 Tgen577006;
typedef struct TNimObject TNimObject;
typedef struct Cell47304 Cell47304;
typedef struct Cellseq47320 Cellseq47320;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29486 Memregion29486;
typedef struct Smallchunk29440 Smallchunk29440;
typedef struct Llchunk29480 Llchunk29480;
typedef struct Bigchunk29442 Bigchunk29442;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29484 Avlnode29484;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47316 Cellset47316;
typedef struct Pagedesc47312 Pagedesc47312;
typedef struct Tnode294802 Tnode294802;
typedef struct Ttype294840 Ttype294840;
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tident201010 Tident201010;
typedef struct Tnodeseq294796 Tnodeseq294796;
typedef struct Tidobj201004 Tidobj201004;
typedef struct Ttypeseq294836 Ttypeseq294836;
typedef struct TY294929 TY294929;
typedef struct Tstrtable294806 Tstrtable294806;
typedef struct Tsymseq294804 Tsymseq294804;
typedef struct Tloc294816 Tloc294816;
typedef struct Tlib294820 Tlib294820;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
typedef struct TY294960 TY294960;
typedef struct Tinstantiation294824 Tinstantiation294824;
typedef struct Tlistentry148007 Tlistentry148007;
typedef struct TY294961 TY294961;
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
struct  Tpasscontext343002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tgen577006  {
  Tpasscontext343002 Sup;
Tsym294834* module;
};
struct  Cell47304  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47320  {
NI len;
NI cap;
Cell47304** d;
};
typedef Smallchunk29440* TY29501[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29486  {
NI minlargeobj;
NI maxlargeobj;
TY29501 freesmallchunks;
Llchunk29480* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29442* freechunkslist;
Intset29414 chunkstarts;
Avlnode29484* root;
Avlnode29484* deleted;
Avlnode29484* last;
Avlnode29484* freeavlnodes;
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
struct  Cellset47316  {
NI counter;
NI max;
Pagedesc47312* head;
Pagedesc47312** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47320 zct;
Cellseq47320 decstack;
Cellseq47320 tempstack;
NI recgclock;
Memregion29486 region;
Gcstat49814 stat;
Cellset47316 marked;
Cellseq47320 additionalroots;
};
struct  Tlineinfo193336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag294427Set;
typedef NU8 Tnodekind294020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode294802  {
Ttype294840* typ;
Tlineinfo193336 info;
Tnodeflag294427Set flags;
Tnodekind294020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym294834* sym;
} S4;
struct {Tident201010* ident;
} S5;
struct {Tnodeseq294796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef Ropeobj180006* TY534811[2];
struct  Tidobj201004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind294435;
struct  Tstrtable294806  {
NI counter;
Tsymseq294804* data;
};
typedef NU16 Tmagic294524;
typedef NU32 Tsymflag294184Set;
typedef NU32 Toption171009Set;
typedef NU8 Tlockind294808;
typedef NU8 Tstorageloc294812;
typedef NU16 Tlocflag294810Set;
struct  Tloc294816  {
Tlockind294808 k;
Tstorageloc294812 s;
Tlocflag294810Set flags;
Ttype294840* t;
Ropeobj180006* r;
};
struct  Tsym294834  {
  Tidobj201004 Sup;
Tsymkind294435 kind;
union{
struct {Ttypeseq294836* typeinstcache;
} S1;
struct {TY294929* procinstcache;
Tsym294834* gcunsafetyreason;
} S2;
struct {TY294929* usedgenerics;
Tstrtable294806 tab;
} S3;
struct {Tsym294834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic294524 magic;
Ttype294840* typ;
Tident201010* name;
Tlineinfo193336 info;
Tsym294834* owner;
Tsymflag294184Set flags;
Tnode294802* ast;
Toption171009Set options;
NI position;
NI offset;
Tloc294816 loc;
Tlib294820* annex;
Tnode294802* constraint;
};
struct  Tident201010  {
  Tidobj201004 Sup;
NimStringDesc* s;
Tident201010* next;
NI h;
};
struct  Ropeobj180006  {
  TNimObject Sup;
Ropeobj180006* left;
Ropeobj180006* right;
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
struct  Basechunk29438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29440  {
  Basechunk29438 Sup;
Smallchunk29440* next;
Smallchunk29440* prev;
Freecell29430* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29480  {
NI size;
NI acc;
Llchunk29480* next;
};
struct  Bigchunk29442  {
  Basechunk29438 Sup;
Bigchunk29442* next;
Bigchunk29442* prev;
NI align;
NF data;
};
typedef NI TY29419[8];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29419 bits;
};
typedef Avlnode29484* TY29491[2];
struct  Avlnode29484  {
TY29491 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47312  {
Pagedesc47312* next;
NI key;
TY29419 bits;
};
typedef NU8 Ttypekind294244;
typedef NU8 Tcallingconvention294002;
typedef NU32 Ttypeflag294431Set;
struct  Ttype294840  {
  Tidobj201004 Sup;
Ttypekind294244 kind;
Tcallingconvention294002 callconv;
Ttypeflag294431Set flags;
Ttypeseq294836* sons;
Tnode294802* n;
Tsym294834* owner;
Tsym294834* sym;
Tsym294834* destructor;
Tsym294834* deepcopy;
Tsym294834* assignment;
TY294960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc294816 loc;
};
struct  Tlistentry148007  {
  TNimObject Sup;
Tlistentry148007* prev;
Tlistentry148007* next;
};
typedef NU8 Tlibkind294818;
struct  Tlib294820  {
  Tlistentry148007 Sup;
Tlibkind294818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj180006* name;
Tnode294802* path;
};
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
};
struct TY294961 {
NI Field0;
Tsym294834* Field1;
};
struct  Tinstantiation294824  {
Tsym294834* sym;
Ttypeseq294836* concretetypes;
NI compilesid;
};
struct Tnodeseq294796 {
  TGenericSeq Sup;
  Tnode294802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq294836 {
  TGenericSeq Sup;
  Ttype294840* data[SEQ_DECL_SIZE];
};
struct TY294929 {
  TGenericSeq Sup;
  Tinstantiation294824* data[SEQ_DECL_SIZE];
};
struct Tsymseq294804 {
  TGenericSeq Sup;
  Tsym294834* data[SEQ_DECL_SIZE];
};
struct TY294960 {
  TGenericSeq Sup;
  TY294961 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T2841479672_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55802 markerproc0);
N_NIMCALL(void, T2841479672_3)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
N_NIMCALL(NI, sonslen_297351_850551059)(Tnode294802* n0);
N_NIMCALL(NimStringDesc*, getmodulename_350009_2178338529)(Tnode294802* n0);
N_NIMCALL(void, adddependencyaux_577013_2841479672)(NimStringDesc* importing0, NimStringDesc* imported0);
N_NIMCALL(void, addf_181205_2381377266)(Ropeobj180006** c0, NimStringDesc* frmt0, Ropeobj180006** args0, NI args0Len0);
N_NIMCALL(Ropeobj180006*, rope_180277_2381377266)(NimStringDesc* s0);
N_NIMCALL(Tnode294802*, adddotdependency_577020_2841479672)(Tpasscontext343002* c0, Tnode294802* n0);
N_NIMCALL(void, writerope_180836_2381377266)(Ropeobj180006* head0, NimStringDesc* filename0, NIM_BOOL usewarning0);
N_NIMCALL(Ropeobj180006*, HEX25_180905_2381377266)(NimStringDesc* frmt0, Ropeobj180006** args0, NI args0Len0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename0, NimStringDesc* ext0);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path0);
STRING_LITERAL(T2841479672_4, "$1 -> $2;$n", 11);
STRING_LITERAL(T2841479672_5, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(T2841479672_6, "", 0);
STRING_LITERAL(T2841479672_7, "dot", 3);
Ropeobj180006* gdotgraph_577011_2841479672;
extern TNimType NTI180004; /* Rope */
extern TNimType NTI343002; /* TPassContext */
TNimType NTI577006; /* TGen */
extern TNimType NTI294800; /* PSym */
TNimType NTI577008; /* PGen */
extern Gcheap49818 gch_49858_1689653243;
N_NIMCALL(void, T2841479672_2)(void) {
	nimGCvisit((void*)gdotgraph_577011_2841479672, 0);
}
N_NIMCALL(void, T2841479672_3)(void* p, NI op) {
	Tgen577006* a;
	a = (Tgen577006*)p;
	nimGCvisit((void*)(*a).module, op);
}

static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47304* result0;
	result0 = (Cell47304*)0;
	result0 = ((Cell47304*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47304))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47304* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51440_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47304* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51440_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(Tpasscontext343002*, myopen_577078_2841479672)(Tsym294834* module0) {
	Tpasscontext343002* result0;
	Tgen577006* g0;
	result0 = (Tpasscontext343002*)0;
	g0 = (Tgen577006*)0;
	g0 = (Tgen577006*) newObj((&NTI577008), sizeof(Tgen577006));
	(*g0).Sup.Sup.m_type = (&NTI577006);
	asgnRefNoCycle((void**) (&(*g0).module), module0);
	result0 = &g0->Sup;
	return result0;
}

N_NIMCALL(void, adddependencyaux_577013_2841479672)(NimStringDesc* importing0, NimStringDesc* imported0) {
	TY534811 LOC1;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = rope_180277_2381377266(importing0);
	LOC1[1] = rope_180277_2381377266(imported0);
	addf_181205_2381377266(&gdotgraph_577011_2841479672, ((NimStringDesc*) &T2841479672_4), LOC1, 2);
}

N_NIMCALL(Tnode294802*, adddotdependency_577020_2841479672)(Tpasscontext343002* c0, Tnode294802* n0) {
	Tnode294802* result0;
	Tgen577006* g0;
	result0 = (Tnode294802*)0;
	result0 = n0;
	g0 = ((Tgen577006*) (c0));
	switch ((*n0).kind) {
	case ((Tnodekind294020) 116):
	{
		{
			NI i_577037_2841479672;
			NI HEX3Atmp_577058_2841479672;
			NI LOC3;
			NI res_577061_2841479672;
			i_577037_2841479672 = (NI)0;
			HEX3Atmp_577058_2841479672 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = sonslen_297351_850551059(n0);
			HEX3Atmp_577058_2841479672 = (NI)(LOC3 - ((NI) 1));
			res_577061_2841479672 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* imported0;
					if (!(res_577061_2841479672 <= HEX3Atmp_577058_2841479672)) goto LA5;
					i_577037_2841479672 = res_577061_2841479672;
					imported0 = getmodulename_350009_2178338529((*n0).kindU.S6.sons->data[i_577037_2841479672]);
					adddependencyaux_577013_2841479672((*(*(*g0).module).name).s, imported0);
					res_577061_2841479672 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind294020) 120):
	case ((Tnodekind294020) 117):
	{
		NimStringDesc* imported0;
		imported0 = getmodulename_350009_2178338529((*n0).kindU.S6.sons->data[((NI) 0)]);
		adddependencyaux_577013_2841479672((*(*(*g0).module).name).s, imported0);
	}
	break;
	case ((Tnodekind294020) 115):
	case ((Tnodekind294020) 112):
	case ((Tnodekind294020) 126):
	case ((Tnodekind294020) 127):
	{
		{
			NI i_577055_2841479672;
			NI HEX3Atmp_577066_2841479672;
			NI LOC9;
			NI res_577069_2841479672;
			i_577055_2841479672 = (NI)0;
			HEX3Atmp_577066_2841479672 = (NI)0;
			LOC9 = (NI)0;
			LOC9 = sonslen_297351_850551059(n0);
			HEX3Atmp_577066_2841479672 = (NI)(LOC9 - ((NI) 1));
			res_577069_2841479672 = ((NI) 0);
			{
				while (1) {
					Tnode294802* LOC12;
					if (!(res_577069_2841479672 <= HEX3Atmp_577066_2841479672)) goto LA11;
					i_577055_2841479672 = res_577069_2841479672;
					LOC12 = (Tnode294802*)0;
					LOC12 = adddotdependency_577020_2841479672(c0, (*n0).kindU.S6.sons->data[i_577055_2841479672]);
					res_577069_2841479672 += ((NI) 1);
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

N_NIMCALL(void, generatedot_577002_2841479672)(NimStringDesc* project0) {
	TY534811 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	Ropeobj180006* LOC4;
	NimStringDesc* LOC5;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC2 = (NimStringDesc*)0;
	LOC2 = nosextractFilename(project0);
	LOC3 = (NimStringDesc*)0;
	LOC3 = noschangeFileExt(LOC2, ((NimStringDesc*) &T2841479672_6));
	LOC1[0] = rope_180277_2381377266(LOC3);
	LOC1[1] = gdotgraph_577011_2841479672;
	LOC4 = (Ropeobj180006*)0;
	LOC4 = HEX25_180905_2381377266(((NimStringDesc*) &T2841479672_5), LOC1, 2);
	LOC5 = (NimStringDesc*)0;
	LOC5 = noschangeFileExt(project0, ((NimStringDesc*) &T2841479672_7));
	writerope_180836_2381377266(LOC4, LOC5, NIM_FALSE);
}
NIM_EXTERNC N_NOINLINE(void, compiler_dependsInit000)(void) {
nimRegisterGlobalMarker(T2841479672_2);
}

NIM_EXTERNC N_NOINLINE(void, compiler_dependsDatInit000)(void) {
static TNimNode T2841479672_0[1];
NTI577006.size = sizeof(Tgen577006);
NTI577006.kind = 17;
NTI577006.base = (&NTI343002);
T2841479672_0[0].kind = 1;
T2841479672_0[0].offset = offsetof(Tgen577006, module);
T2841479672_0[0].typ = (&NTI294800);
T2841479672_0[0].name = "module";
NTI577006.node = &T2841479672_0[0];
NTI577008.size = sizeof(Tgen577006*);
NTI577008.kind = 22;
NTI577008.base = (&NTI577006);
NTI577008.marker = T2841479672_3;
}

