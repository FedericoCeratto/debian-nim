/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

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
typedef struct TY131402 TY131402;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct Tscope264820 Tscope264820;
typedef struct TY264927 TY264927;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct Tloc264808 Tloc264808;
typedef struct Ropeobj173006 Ropeobj173006;
typedef struct Tlib264812 Tlib264812;
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
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct Basechunk30037 Basechunk30037;
typedef struct Freecell30029 Freecell30029;
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
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
};
struct  Freecell30029  {
Freecell30029* next;
NI zerofield;
};
struct TY131402 {
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
N_NIMCALL(void, renderparamtypes_384233_117375469)(TY131402** found0, Tnode264794* n0);
N_NIMCALL(NimStringDesc*, rendertype_382209_117375469)(Tnode264794* n0);
N_NIMCALL(NimStringDesc*, typetostring_291017_3876443242)(Ttype264832* typ0, Tprefereddesc291011 prefer0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a0, NI a0Len0, NimStringDesc* sep0);
STRING_LITERAL(TMP5321, "", 0);
STRING_LITERAL(TMP5322, "*", 1);
STRING_LITERAL(TMP5323, "renderPlainSymbolName() with ", 29);
STRING_LITERAL(TMP5330, "ref.", 4);
STRING_LITERAL(TMP5331, "ptr.", 4);
STRING_LITERAL(TMP5332, "proc(", 5);
STRING_LITERAL(TMP5333, "tuple[", 6);
STRING_LITERAL(TMP5334, "renderParamTypes(found,n) with ", 31);
extern TNimType NTI264020; /* TNodeKind */
extern TNimType NTI131402; /* seq[string] */
extern Gcheap50418 gch_50458_1689653243;

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
	result0 = copyString(((NimStringDesc*) &TMP5321));
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
			if (!!(eqStrings((*(*n0).kindU.S5.ident).s, ((NimStringDesc*) &TMP5322)))) goto LA15;
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
appendString(LOC24, ((NimStringDesc*) &TMP5323));
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
appendString(LOC6, ((NimStringDesc*) &TMP5330));
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
appendString(LOC10, ((NimStringDesc*) &TMP5331));
appendString(LOC10, LOC12);
		result0 = LOC10;
	}
	break;
	case ((Tnodekind264020) 147):
	{
		Tnode264794* params0;
		params0 = HEX5BHEX5D_265238_850551059(n0, ((NI) 0));
		result0 = copyString(((NimStringDesc*) &TMP5332));
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
		result0 = copyString(((NimStringDesc*) &TMP5333));
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
		result0 = copyString(((NimStringDesc*) &TMP5321));
	}
	break;
	}
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

N_NIMCALL(void, renderparamtypes_384233_117375469)(TY131402** found0, Tnode264794* n0) {
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
					(*found0) = (TY131402*) incrSeqV2(&((*found0))->Sup, sizeof(NimStringDesc*));
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
appendString(LOC31, ((NimStringDesc*) &TMP5334));
appendString(LOC31, reprEnum((NI)(*n0).kind, (&NTI264020)));
		internalerror_191100_155036129((*n0).info, LOC31);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(NimStringDesc*, renderparamtypes_384471_117375469)(Tnode264794* n0, NimStringDesc* sep0) {
	NimStringDesc* result0;
	TY131402* found0;
	result0 = (NimStringDesc*)0;
	result0 = copyString(((NimStringDesc*) &TMP5321));
	found0 = (TY131402*) newSeq((&NTI131402), 0);
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

