/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode264794 Tnode264794;
typedef struct Ttype264832 Ttype264832;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct Tsym264826 Tsym264826;
typedef struct Tident194012 Tident194012;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct Tidobj194006 Tidobj194006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY131602 TY131602;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct Tscope264820 Tscope264820;
typedef struct TY264927 TY264927;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct Tloc264808 Tloc264808;
typedef struct Ropeobj173006 Ropeobj173006;
typedef struct Tlib264812 Tlib264812;
typedef struct Cell48105 Cell48105;
typedef struct Cellseq48121 Cellseq48121;
typedef struct Gcheap50618 Gcheap50618;
typedef struct Gcstack50616 Gcstack50616;
typedef struct Memregion30286 Memregion30286;
typedef struct Smallchunk30240 Smallchunk30240;
typedef struct Llchunk30280 Llchunk30280;
typedef struct Bigchunk30242 Bigchunk30242;
typedef struct Intset30214 Intset30214;
typedef struct Trunk30210 Trunk30210;
typedef struct Avlnode30284 Avlnode30284;
typedef struct Gcstat50614 Gcstat50614;
typedef struct Cellset48117 Cellset48117;
typedef struct Pagedesc48113 Pagedesc48113;
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct Basechunk30238 Basechunk30238;
typedef struct Freecell30230 Freecell30230;
typedef struct TY264917 TY264917;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo186336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag264427Set;
typedef NU8 Tnodekind264020;
struct  Tnode264794  {
Ttype264832* typ;
Tlineinfo186336 info;
Tnodeflag264427Set flags;
Tnodekind264020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym264826* sym;
} S4;
struct {Tident194012* ident;
} S5;
struct {Tnodeseq264788* sons;
} S6;
} kindU;
NimStringDesc* comment;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj194006  {
  TNimObject Sup;
NI id;
};
struct  Tident194012  {
  Tidobj194006 Sup;
NimStringDesc* s;
Tident194012* next;
NI h;
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
typedef NU8 Tprefereddesc291011;
typedef NU8 Tsymkind264435;
struct  Tstrtable264798  {
NI counter;
Tsymseq264796* data;
};
typedef NU8 Tmagic264525;
typedef NU32 Tsymflag264184Set;
typedef NU32 Toption164009Set;
typedef NU8 Tlockind264800;
typedef NU8 Tstorageloc264804;
typedef NU16 Tlocflag264802Set;
struct  Tloc264808  {
Tlockind264800 k;
Tstorageloc264804 s;
Tlocflag264802Set flags;
Ttype264832* t;
Ropeobj173006* r;
Ropeobj173006* heaproot;
};
struct  Tsym264826  {
  Tidobj194006 Sup;
Tsymkind264435 kind;
union{
struct {Ttypeseq264828* typeinstcache;
Tscope264820* typscope;
} S1;
struct {TY264927* procinstcache;
Tsym264826* gcunsafetyreason;
} S2;
struct {TY264927* usedgenerics;
Tstrtable264798 tab;
} S3;
struct {Tsym264826* guard;
NI bitsize;
} S4;
} kindU;
Tmagic264525 magic;
Ttype264832* typ;
Tident194012* name;
Tlineinfo186336 info;
Tsym264826* owner;
Tsymflag264184Set flags;
Tnode264794* ast;
Toption164009Set options;
NI position;
NI offset;
Tloc264808 loc;
Tlib264812* annex;
Tnode264794* constraint;
};
struct  Cell48105  {
NI refcount;
TNimType* typ;
};
struct  Cellseq48121  {
NI len;
NI cap;
Cell48105** d;
};
typedef Smallchunk30240* TY30301[512];
typedef Trunk30210* Trunkbuckets30212[256];
struct  Intset30214  {
Trunkbuckets30212 data;
};
struct  Memregion30286  {
NI minlargeobj;
NI maxlargeobj;
TY30301 freesmallchunks;
Llchunk30280* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30242* freechunkslist;
Intset30214 chunkstarts;
Avlnode30284* root;
Avlnode30284* deleted;
Avlnode30284* last;
Avlnode30284* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50614  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset48117  {
NI counter;
NI max;
Pagedesc48113* head;
Pagedesc48113** data;
};
struct  Gcheap50618  {
Gcstack50616* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq48121 zct;
Cellseq48121 decstack;
Cellseq48121 tempstack;
NI recgclock;
Memregion30286 region;
Gcstat50614 stat;
Cellset48117 marked;
Cellseq48121 additionalroots;
};
typedef NU8 Ttypekind264244;
typedef NU8 Tcallingconvention264002;
typedef NU32 Ttypeflag264431Set;
struct  Ttype264832  {
  Tidobj194006 Sup;
Ttypekind264244 kind;
Tcallingconvention264002 callconv;
Ttypeflag264431Set flags;
Ttypeseq264828* sons;
Tnode264794* n;
Tsym264826* owner;
Tsym264826* sym;
Tsym264826* destructor;
Tsym264826* deepcopy;
Tsym264826* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc264808 loc;
};
struct  Tscope264820  {
NI depthlevel;
Tstrtable264798 symbols;
Tscope264820* parent;
};
struct  Ropeobj173006  {
  TNimObject Sup;
Ropeobj173006* left;
Ropeobj173006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
};
typedef NU8 Tlibkind264810;
struct  Tlib264812  {
  Tlistentry141010 Sup;
Tlibkind264810 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj173006* name;
Tnode264794* path;
};
struct  Gcstack50616  {
Gcstack50616* prev;
Gcstack50616* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30238  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30240  {
  Basechunk30238 Sup;
Smallchunk30240* next;
Smallchunk30240* prev;
Freecell30230* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30280  {
NI size;
NI acc;
Llchunk30280* next;
};
struct  Bigchunk30242  {
  Basechunk30238 Sup;
Bigchunk30242* next;
Bigchunk30242* prev;
NI align;
NF data;
};
typedef NI TY30219[8];
struct  Trunk30210  {
Trunk30210* next;
NI key;
TY30219 bits;
};
typedef Avlnode30284* TY30291[2];
struct  Avlnode30284  {
TY30291 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc48113  {
Pagedesc48113* next;
NI key;
TY30219 bits;
};
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
};
struct  Freecell30230  {
Freecell30230* next;
NI zerofield;
};
struct TY131602 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct Tnodeseq264788 {
  TGenericSeq Sup;
  Tnode264794* data[SEQ_DECL_SIZE];
};
struct Ttypeseq264828 {
  TGenericSeq Sup;
  Ttype264832* data[SEQ_DECL_SIZE];
};
struct TY264927 {
  TGenericSeq Sup;
  Tinstantiation264816* data[SEQ_DECL_SIZE];
};
struct Tsymseq264796 {
  TGenericSeq Sup;
  Tsym264826* data[SEQ_DECL_SIZE];
};
struct TY264917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
static N_INLINE(NI, len_265080_850551059)(Tnode264794* n0);
N_NIMCALL(NimStringDesc*, renderplainsymbolname_382004_117375469)(Tnode264794* n0);
static N_INLINE(Tnode264794*, HEX5BHEX5D_265238_850551059)(Tnode264794* n0, NI i0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NimStringDesc*, renderdefinitionname_283115_382274130)(Tsym264826* s0, NIM_BOOL noquotes0);
N_NIMCALL(void, internalerror_191100_155036129)(Tlineinfo186336 info0, NimStringDesc* errmsg0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e0, TNimType* typ0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, renderparamtypes_384233_117375469)(TY131602** found0, Tnode264794* n0);
N_NIMCALL(NimStringDesc*, rendertype_382209_117375469)(Tnode264794* n0);
N_NIMCALL(NimStringDesc*, typetostring_291017_3876443242)(Ttype264832* typ0, Tprefereddesc291011 prefer0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell48105*, usrtocell_52240_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53401_1689653243)(Cell48105* c0);
N_NOINLINE(void, addzct_52217_1689653243)(Cellseq48121* s0, Cell48105* c0);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a0, NI a0Len0, NimStringDesc* sep0);
STRING_LITERAL(TMP5318, "", 0);
STRING_LITERAL(TMP5319, "*", 1);
STRING_LITERAL(TMP5320, "renderPlainSymbolName() with ", 29);
STRING_LITERAL(TMP5327, "ref.", 4);
STRING_LITERAL(TMP5328, "ptr.", 4);
STRING_LITERAL(TMP5329, "proc(", 5);
STRING_LITERAL(TMP5330, "tuple[", 6);
STRING_LITERAL(TMP5331, "renderParamTypes(found,n) with ", 31);
extern TNimType NTI264020; /* TNodeKind */
extern TNimType NTI131602; /* seq[string] */
extern Gcheap50618 gch_50658_1689653243;

static N_INLINE(NI, len_265080_850551059)(Tnode264794* n0) {
	NI result0;
	result0 = (NI)0;
	{
		if (!(*n0).kindU.S6.sons == 0) goto LA3;
		result0 = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result0 = ((*n0).kindU.S6.sons ? (*n0).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result0;
}

static N_INLINE(Tnode264794*, HEX5BHEX5D_265238_850551059)(Tnode264794* n0, NI i0) {
	Tnode264794* result0;
	result0 = (Tnode264794*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
	int LOC13;
{	result0 = (NIM_BOOL)0;
	{
		if (!(a0 == b0)) goto LA3;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = (a0 == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b0 == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = (NIM_BOOL)0;
	LOC11 = ((*a0).Sup.len == (*b0).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = (int)0;
	LOC13 = memcmp(((NCSTRING) ((*a0).data)), ((NCSTRING) ((*b0).data)), (*a0).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(NimStringDesc*, renderplainsymbolname_382004_117375469)(Tnode264794* n0) {
	NimStringDesc* result0;
{	result0 = (NimStringDesc*)0;
	result0 = copyString(((NimStringDesc*) &TMP5318));
	switch ((*n0).kind) {
	case ((Tnodekind264020) 31):
	{
		{
			NI i_382026_117375469;
			NI HEX3Atmp_382202_117375469;
			NI LOC3;
			NI res_382205_117375469;
			i_382026_117375469 = (NI)0;
			HEX3Atmp_382202_117375469 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = len_265080_850551059(n0);
			HEX3Atmp_382202_117375469 = (LOC3 - 1);
			res_382205_117375469 = ((NI) 0);
			{
				while (1) {
					NI LOC6;
					Tnode264794* LOC7;
					if (!(res_382205_117375469 <= HEX3Atmp_382202_117375469)) goto LA5;
					i_382026_117375469 = res_382205_117375469;
					LOC6 = (NI)0;
					LOC6 = len_265080_850551059(n0);
					LOC7 = (Tnode264794*)0;
					LOC7 = HEX5BHEX5D_265238_850551059(n0, (LOC6 - 1));
					result0 = renderplainsymbolname_382004_117375469(LOC7);
					{
						if (!(((NI) 0) < (result0 ? result0->Sup.len : 0))) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					res_382205_117375469 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind264020) 2):
	{
		{
			if (!!(eqStrings((*(*n0).kindU.S5.ident).s, ((NimStringDesc*) &TMP5319)))) goto LA15;
			result0 = copyString((*(*n0).kindU.S5.ident).s);
		}
		LA15: ;
	}
	break;
	case ((Tnodekind264020) 3):
	{
		result0 = renderdefinitionname_283115_382274130((*n0).kindU.S4.sym, NIM_TRUE);
	}
	break;
	case ((Tnodekind264020) 43):
	{
		Tnode264794* LOC19;
		LOC19 = (Tnode264794*)0;
		LOC19 = HEX5BHEX5D_265238_850551059(n0, ((NI) 0));
		result0 = renderplainsymbolname_382004_117375469(LOC19);
	}
	break;
	case ((Tnodekind264020) 53):
	{
		NI LOC21;
		Tnode264794* LOC22;
		LOC21 = (NI)0;
		LOC21 = len_265080_850551059(n0);
		LOC22 = (Tnode264794*)0;
		LOC22 = HEX5BHEX5D_265238_850551059(n0, (LOC21 - 1));
		result0 = renderplainsymbolname_382004_117375469(LOC22);
	}
	break;
	default:
	{
		NimStringDesc* LOC24;
		LOC24 = (NimStringDesc*)0;
		LOC24 = rawNewString(reprEnum((NI)(*n0).kind, (&NTI264020))->Sup.len + 29);
appendString(LOC24, ((NimStringDesc*) &TMP5320));
appendString(LOC24, reprEnum((NI)(*n0).kind, (&NTI264020)));
		internalerror_191100_155036129((*n0).info, LOC24);
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, rendertype_382209_117375469)(Tnode264794* n0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	switch ((*n0).kind) {
	case ((Tnodekind264020) 2):
	{
		result0 = copyString((*(*n0).kindU.S5.ident).s);
	}
	break;
	case ((Tnodekind264020) 3):
	{
		result0 = typetostring_291017_3876443242((*(*n0).kindU.S4.sym).typ, ((Tprefereddesc291011) 0));
	}
	break;
	case ((Tnodekind264020) 143):
	{
		Tnode264794* LOC4;
		LOC4 = (Tnode264794*)0;
		LOC4 = HEX5BHEX5D_265238_850551059(n0, ((NI) 0));
		result0 = rendertype_382209_117375469(LOC4);
	}
	break;
	case ((Tnodekind264020) 141):
	{
		NimStringDesc* LOC6;
		Tnode264794* LOC7;
		NimStringDesc* LOC8;
		LOC6 = (NimStringDesc*)0;
		LOC7 = (Tnode264794*)0;
		LOC7 = HEX5BHEX5D_265238_850551059(n0, ((NI) 0));
		LOC8 = (NimStringDesc*)0;
		LOC8 = rendertype_382209_117375469(LOC7);
		LOC6 = rawNewString(LOC8->Sup.len + 4);
appendString(LOC6, ((NimStringDesc*) &TMP5327));
appendString(LOC6, LOC8);
		result0 = LOC6;
	}
	break;
	case ((Tnodekind264020) 142):
	{
		NimStringDesc* LOC10;
		Tnode264794* LOC11;
		NimStringDesc* LOC12;
		LOC10 = (NimStringDesc*)0;
		LOC11 = (Tnode264794*)0;
		LOC11 = HEX5BHEX5D_265238_850551059(n0, ((NI) 0));
		LOC12 = (NimStringDesc*)0;
		LOC12 = rendertype_382209_117375469(LOC11);
		LOC10 = rawNewString(LOC12->Sup.len + 4);
appendString(LOC10, ((NimStringDesc*) &TMP5328));
appendString(LOC10, LOC12);
		result0 = LOC10;
	}
	break;
	case ((Tnodekind264020) 147):
	{
		Tnode264794* params0;
		params0 = HEX5BHEX5D_265238_850551059(n0, ((NI) 0));
		result0 = copyString(((NimStringDesc*) &TMP5329));
		{
			NI i_383418_117375469;
			NI HEX3Atmp_384202_117375469;
			NI LOC15;
			NI res_384205_117375469;
			i_383418_117375469 = (NI)0;
			HEX3Atmp_384202_117375469 = (NI)0;
			LOC15 = (NI)0;
			LOC15 = len_265080_850551059(params0);
			HEX3Atmp_384202_117375469 = (LOC15 - 1);
			res_384205_117375469 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC18;
					Tnode264794* LOC19;
					NimStringDesc* LOC20;
					if (!(res_384205_117375469 <= HEX3Atmp_384202_117375469)) goto LA17;
					i_383418_117375469 = res_384205_117375469;
					LOC18 = (NimStringDesc*)0;
					LOC19 = (Tnode264794*)0;
					LOC19 = HEX5BHEX5D_265238_850551059(params0, i_383418_117375469);
					LOC20 = (NimStringDesc*)0;
					LOC20 = rendertype_382209_117375469(LOC19);
					LOC18 = rawNewString(LOC20->Sup.len + 1);
appendString(LOC18, LOC20);
appendChar(LOC18, 44);
					result0 = resizeString(result0, LOC18->Sup.len + 0);
appendString(result0, LOC18);
					res_384205_117375469 += ((NI) 1);
				} LA17: ;
			}
		}
		result0->data[((result0 ? result0->Sup.len : 0) - 1)] = 41;
	}
	break;
	case ((Tnodekind264020) 35):
	{
		NI typepos0;
		NI LOC22;
		NimStringDesc* typestr0;
		Tnode264794* LOC23;
		LOC22 = (NI)0;
		LOC22 = len_265080_850551059(n0);
		typepos0 = (NI)(LOC22 - ((NI) 2));
		LOC23 = (Tnode264794*)0;
		LOC23 = HEX5BHEX5D_265238_850551059(n0, typepos0);
		typestr0 = rendertype_382209_117375469(LOC23);
		result0 = copyString(typestr0);
		{
			NI i_383620_117375469;
			NI HEX3Atmp_384210_117375469;
			NI res_384213_117375469;
			i_383620_117375469 = (NI)0;
			HEX3Atmp_384210_117375469 = (NI)0;
			HEX3Atmp_384210_117375469 = (typepos0 - 1);
			res_384213_117375469 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC27;
					if (!(res_384213_117375469 <= HEX3Atmp_384210_117375469)) goto LA26;
					i_383620_117375469 = res_384213_117375469;
					LOC27 = (NimStringDesc*)0;
					LOC27 = rawNewString(typestr0->Sup.len + 1);
appendChar(LOC27, 44);
appendString(LOC27, typestr0);
					result0 = resizeString(result0, LOC27->Sup.len + 0);
appendString(result0, LOC27);
					res_384213_117375469 += ((NI) 1);
				} LA26: ;
			}
		}
	}
	break;
	case ((Tnodekind264020) 134):
	{
		result0 = copyString(((NimStringDesc*) &TMP5330));
		{
			NI i_383818_117375469;
			NI HEX3Atmp_384218_117375469;
			NI LOC30;
			NI res_384221_117375469;
			i_383818_117375469 = (NI)0;
			HEX3Atmp_384218_117375469 = (NI)0;
			LOC30 = (NI)0;
			LOC30 = len_265080_850551059(n0);
			HEX3Atmp_384218_117375469 = (LOC30 - 1);
			res_384221_117375469 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* LOC33;
					Tnode264794* LOC34;
					NimStringDesc* LOC35;
					if (!(res_384221_117375469 <= HEX3Atmp_384218_117375469)) goto LA32;
					i_383818_117375469 = res_384221_117375469;
					LOC33 = (NimStringDesc*)0;
					LOC34 = (Tnode264794*)0;
					LOC34 = HEX5BHEX5D_265238_850551059(n0, i_383818_117375469);
					LOC35 = (NimStringDesc*)0;
					LOC35 = rendertype_382209_117375469(LOC34);
					LOC33 = rawNewString(LOC35->Sup.len + 1);
appendString(LOC33, LOC35);
appendChar(LOC33, 44);
					result0 = resizeString(result0, LOC33->Sup.len + 0);
appendString(result0, LOC33);
					res_384221_117375469 += ((NI) 1);
				} LA32: ;
			}
		}
		result0->data[((result0 ? result0->Sup.len : 0) - 1)] = 93;
	}
	break;
	case ((Tnodekind264020) 42):
	{
		NimStringDesc* LOC37;
		Tnode264794* LOC38;
		NimStringDesc* LOC39;
		LOC37 = (NimStringDesc*)0;
		LOC38 = (Tnode264794*)0;
		LOC38 = HEX5BHEX5D_265238_850551059(n0, ((NI) 0));
		LOC39 = (NimStringDesc*)0;
		LOC39 = rendertype_382209_117375469(LOC38);
		LOC37 = rawNewString(LOC39->Sup.len + 1);
appendString(LOC37, LOC39);
appendChar(LOC37, 91);
		result0 = LOC37;
		{
			NI i_384018_117375469;
			NI HEX3Atmp_384226_117375469;
			NI LOC41;
			NI res_384229_117375469;
			i_384018_117375469 = (NI)0;
			HEX3Atmp_384226_117375469 = (NI)0;
			LOC41 = (NI)0;
			LOC41 = len_265080_850551059(n0);
			HEX3Atmp_384226_117375469 = (LOC41 - 1);
			res_384229_117375469 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC44;
					Tnode264794* LOC45;
					NimStringDesc* LOC46;
					if (!(res_384229_117375469 <= HEX3Atmp_384226_117375469)) goto LA43;
					i_384018_117375469 = res_384229_117375469;
					LOC44 = (NimStringDesc*)0;
					LOC45 = (Tnode264794*)0;
					LOC45 = HEX5BHEX5D_265238_850551059(n0, i_384018_117375469);
					LOC46 = (NimStringDesc*)0;
					LOC46 = rendertype_382209_117375469(LOC45);
					LOC44 = rawNewString(LOC46->Sup.len + 1);
appendString(LOC44, LOC46);
appendChar(LOC44, 44);
					result0 = resizeString(result0, LOC44->Sup.len + 0);
appendString(result0, LOC44);
					res_384229_117375469 += ((NI) 1);
				} LA43: ;
			}
		}
		result0->data[((result0 ? result0->Sup.len : 0) - 1)] = 93;
	}
	break;
	default:
	{
		result0 = copyString(((NimStringDesc*) &TMP5318));
	}
	break;
	}
	return result0;
}

static N_INLINE(Cell48105*, usrtocell_52240_1689653243)(void* usr0) {
	Cell48105* result0;
	result0 = (Cell48105*)0;
	result0 = ((Cell48105*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell48105))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53401_1689653243)(Cell48105* c0) {
	addzct_52217_1689653243((&gch_50658_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell48105* c0;
	c0 = usrtocell_52240_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53401_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(void, renderparamtypes_384233_117375469)(TY131602** found0, Tnode264794* n0) {
{	switch ((*n0).kind) {
	case ((Tnodekind264020) 76):
	{
		{
			NI i_384256_117375469;
			NI HEX3Atmp_384456_117375469;
			NI LOC3;
			NI res_384459_117375469;
			i_384256_117375469 = (NI)0;
			HEX3Atmp_384456_117375469 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = len_265080_850551059(n0);
			HEX3Atmp_384456_117375469 = (LOC3 - 1);
			res_384459_117375469 = ((NI) 1);
			{
				while (1) {
					Tnode264794* LOC6;
					if (!(res_384459_117375469 <= HEX3Atmp_384456_117375469)) goto LA5;
					i_384256_117375469 = res_384459_117375469;
					LOC6 = (Tnode264794*)0;
					LOC6 = HEX5BHEX5D_265238_850551059(n0, i_384256_117375469);
					renderparamtypes_384233_117375469(found0, LOC6);
					res_384459_117375469 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind264020) 35):
	{
		NI typepos0;
		NI LOC8;
		NimStringDesc* typestr0;
		Tnode264794* LOC9;
		LOC8 = (NI)0;
		LOC8 = len_265080_850551059(n0);
		typepos0 = (NI)(LOC8 - ((NI) 2));
		LOC9 = (Tnode264794*)0;
		LOC9 = HEX5BHEX5D_265238_850551059(n0, typepos0);
		typestr0 = rendertype_382209_117375469(LOC9);
		{
			NIM_BOOL LOC12;
			Tnode264794* LOC14;
			Ttype264832* typ0;
			Tnode264794* LOC17;
			LOC12 = (NIM_BOOL)0;
			LOC12 = ((typestr0 ? typestr0->Sup.len : 0) < ((NI) 1));
			if (!(LOC12)) goto LA13;
			LOC14 = (Tnode264794*)0;
			LOC14 = HEX5BHEX5D_265238_850551059(n0, (NI)(typepos0 + ((NI) 1)));
			LOC12 = !(((*LOC14).kind == ((Tnodekind264020) 1)));
			LA13: ;
			if (!LOC12) goto LA15;
			LOC17 = (Tnode264794*)0;
			LOC17 = HEX5BHEX5D_265238_850551059(n0, (NI)(typepos0 + ((NI) 1)));
			typ0 = (*LOC17).typ;
			{
				if (!!(typ0 == 0)) goto LA20;
				typestr0 = typetostring_291017_3876443242(typ0, ((Tprefereddesc291011) 2));
			}
			LA20: ;
			{
				if (!((typestr0 ? typestr0->Sup.len : 0) < ((NI) 1))) goto LA24;
				goto BeforeRet;
			}
			LA24: ;
		}
		LA15: ;
		{
			NI i_384437_117375469;
			NI HEX3Atmp_384464_117375469;
			NI res_384467_117375469;
			i_384437_117375469 = (NI)0;
			HEX3Atmp_384464_117375469 = (NI)0;
			HEX3Atmp_384464_117375469 = (typepos0 - 1);
			res_384467_117375469 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* LOC29;
					if (!(res_384467_117375469 <= HEX3Atmp_384464_117375469)) goto LA28;
					i_384437_117375469 = res_384467_117375469;
					(*found0) = (TY131602*) incrSeqV2(&((*found0))->Sup, sizeof(NimStringDesc*));
					LOC29 = (NimStringDesc*)0;
					LOC29 = (*found0)->data[(*found0)->Sup.len]; (*found0)->data[(*found0)->Sup.len] = copyStringRC1(typestr0);
					if (LOC29) nimGCunrefNoCycle(LOC29);
					++(*found0)->Sup.len;
					res_384467_117375469 += ((NI) 1);
				} LA28: ;
			}
		}
	}
	break;
	default:
	{
		NimStringDesc* LOC31;
		LOC31 = (NimStringDesc*)0;
		LOC31 = rawNewString(reprEnum((NI)(*n0).kind, (&NTI264020))->Sup.len + 31);
appendString(LOC31, ((NimStringDesc*) &TMP5331));
appendString(LOC31, reprEnum((NI)(*n0).kind, (&NTI264020)));
		internalerror_191100_155036129((*n0).info, LOC31);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(NimStringDesc*, renderparamtypes_384471_117375469)(Tnode264794* n0, NimStringDesc* sep0) {
	NimStringDesc* result0;
	TY131602* found0;
	result0 = (NimStringDesc*)0;
	result0 = copyString(((NimStringDesc*) &TMP5318));
	found0 = (TY131602*) newSeq((&NTI131602), 0);
	renderparamtypes_384233_117375469((&found0), n0);
	{
		if (!(((NI) 0) < (found0 ? found0->Sup.len : 0))) goto LA3;
		result0 = nsuJoinSep(found0->data, found0->Sup.len, sep0);
	}
	LA3: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_typesrendererInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_typesrendererDatInit000)(void) {
}

