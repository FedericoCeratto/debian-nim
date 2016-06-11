/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tnodetable264856 Tnodetable264856;
typedef struct Tnode264794 Tnode264794;
typedef struct Tnodepairseq264854 Tnodepairseq264854;
typedef struct Tnodepair264852 Tnodepair264852;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype264832 Ttype264832;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tsym264826 Tsym264826;
typedef struct Tident194012 Tident194012;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct Tidobj194006 Tidobj194006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Memregion30086 Memregion30086;
typedef struct Smallchunk30040 Smallchunk30040;
typedef struct Llchunk30080 Llchunk30080;
typedef struct Bigchunk30042 Bigchunk30042;
typedef struct Intset30014 Intset30014;
typedef struct Trunk30010 Trunk30010;
typedef struct Avlnode30084 Avlnode30084;
typedef struct Gcstat50414 Gcstat50414;
typedef struct Cellset47917 Cellset47917;
typedef struct Pagedesc47913 Pagedesc47913;
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct Basechunk30038 Basechunk30038;
typedef struct Freecell30030 Freecell30030;
typedef struct TY264917 TY264917;
struct  Tnodepair264852  {
NI h;
Tnode264794* key;
NI val;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  Tlineinfo186336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag264427Set;
typedef NU8 Tnodekind264020;
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct  Tnodetable264856  {
NI counter;
Tnodepairseq264854* data;
};
typedef NU8 Ttypecmpflag295625Set;
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef Smallchunk30040* TY30101[512];
typedef Trunk30010* Trunkbuckets30012[256];
struct  Intset30014  {
Trunkbuckets30012 data;
};
struct  Memregion30086  {
NI minlargeobj;
NI maxlargeobj;
TY30101 freesmallchunks;
Llchunk30080* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30042* freechunkslist;
Intset30014 chunkstarts;
Avlnode30084* root;
Avlnode30084* deleted;
Avlnode30084* last;
Avlnode30084* freeavlnodes;
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
Memregion30086 region;
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
struct  Basechunk30038  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30040  {
  Basechunk30038 Sup;
Smallchunk30040* next;
Smallchunk30040* prev;
Freecell30030* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30080  {
NI size;
NI acc;
Llchunk30080* next;
};
struct  Bigchunk30042  {
  Basechunk30038 Sup;
Bigchunk30042* next;
Bigchunk30042* prev;
NI align;
NF data;
};
typedef NI TY30019[8];
struct  Trunk30010  {
Trunk30010* next;
NI key;
TY30019 bits;
};
typedef Avlnode30084* TY30091[2];
struct  Avlnode30084  {
TY30091 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47913  {
Pagedesc47913* next;
NI key;
TY30019 bits;
};
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
};
struct  Freecell30030  {
Freecell30030* next;
NI zerofield;
};
struct Tnodepairseq264854 {
  TGenericSeq Sup;
  Tnodepair264852 data[SEQ_DECL_SIZE];
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
N_NIMCALL(NI, hashtree_313009_1142335848)(Tnode264794* n0);
static N_INLINE(NI, HEX21HEX26_143004_213663784)(NI h0, NI val0);
N_NIMCALL(NI, hash_143827_213663784)(NimStringDesc* x0);
N_NIMCALL(NI, sonslen_267351_850551059)(Tnode264794* n0);
N_NIMCALL(NI, nodetablerawget_313160_1142335848)(Tnodetable264856 t0, NI k0, Tnode264794* key0);
N_NIMCALL(NIM_BOOL, treesequivalent_313077_1142335848)(Tnode264794* a0, Tnode264794* b0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NIM_BOOL, sametypeornil_295839_3876443242)(Ttype264832* a0, Ttype264832* b0, Ttypecmpflag295625Set flags0);
static N_INLINE(NI, nexttry_271155_2984716966)(NI h0, NI maxhash0);
N_NIMCALL(NIM_BOOL, mustrehash_271151_2984716966)(NI length0, NI counter0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, nodetablerawinsert_313190_1142335848)(Tnodepairseq264854** data0, NI k0, Tnode264794* key0, NI val0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
extern TNimType NTI264854; /* TNodePairSeq */
extern Gcheap50418 gch_50458_1689653243;

static N_INLINE(NI, HEX21HEX26_143004_213663784)(NI h0, NI val0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((NU64)(h0) + (NU64)(val0));
	result0 = (NI)((NU64)(result0) + (NU64)((NI)((NU64)(result0) << (NU64)(((NI) 10)))));
	result0 = (NI)(result0 ^ (NI)((NU64)(result0) >> (NU64)(((NI) 6))));
	return result0;
}

N_NIMCALL(NI, hashtree_313009_1142335848)(Tnode264794* n0) {
	NI result0;
{	result0 = (NI)0;
	{
		if (!(n0 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	result0 = ((NI) ((*n0).kind));
	switch ((*n0).kind) {
	case ((Tnodekind264020) 1):
	case ((Tnodekind264020) 23):
	case ((Tnodekind264020) 4):
	{
	}
	break;
	case ((Tnodekind264020) 2):
	{
		result0 = HEX21HEX26_143004_213663784(result0, (*(*n0).kindU.S5.ident).h);
	}
	break;
	case ((Tnodekind264020) 3):
	{
		result0 = HEX21HEX26_143004_213663784(result0, (*(*(*n0).kindU.S4.sym).name).h);
	}
	break;
	case ((Tnodekind264020) 5) ... ((Tnodekind264020) 15):
	{
		{
			NIM_BOOL LOC11;
			LOC11 = (NIM_BOOL)0;
			LOC11 = ((IL64(-9223372036854775807) - IL64(1)) <= (*n0).kindU.S1.intval);
			if (!(LOC11)) goto LA12;
			LOC11 = ((*n0).kindU.S1.intval <= IL64(9223372036854775807));
			LA12: ;
			if (!LOC11) goto LA13;
			result0 = HEX21HEX26_143004_213663784(result0, ((NI) ((*n0).kindU.S1.intval)));
		}
		LA13: ;
	}
	break;
	case ((Tnodekind264020) 16) ... ((Tnodekind264020) 18):
	{
		{
			NIM_BOOL LOC18;
			LOC18 = (NIM_BOOL)0;
			LOC18 = (-1.0000000000000000e+06 <= (*n0).kindU.S2.floatval);
			if (!(LOC18)) goto LA19;
			LOC18 = ((*n0).kindU.S2.floatval <= 1.0000000000000000e+06);
			LA19: ;
			if (!LOC18) goto LA20;
			result0 = HEX21HEX26_143004_213663784(result0, float64ToInt32((*n0).kindU.S2.floatval));
		}
		LA20: ;
	}
	break;
	case ((Tnodekind264020) 20) ... ((Tnodekind264020) 22):
	{
		{
			NI LOC27;
			if (!!((*n0).kindU.S3.strval == 0)) goto LA25;
			LOC27 = (NI)0;
			LOC27 = hash_143827_213663784((*n0).kindU.S3.strval);
			result0 = HEX21HEX26_143004_213663784(result0, LOC27);
		}
		LA25: ;
	}
	break;
	default:
	{
		{
			NI i_313062_1142335848;
			NI HEX3Atmp_313070_1142335848;
			NI LOC30;
			NI res_313073_1142335848;
			i_313062_1142335848 = (NI)0;
			HEX3Atmp_313070_1142335848 = (NI)0;
			LOC30 = (NI)0;
			LOC30 = sonslen_267351_850551059(n0);
			HEX3Atmp_313070_1142335848 = (NI)(LOC30 - ((NI) 1));
			res_313073_1142335848 = ((NI) 0);
			{
				while (1) {
					NI LOC33;
					if (!(res_313073_1142335848 <= HEX3Atmp_313070_1142335848)) goto LA32;
					i_313062_1142335848 = res_313073_1142335848;
					LOC33 = (NI)0;
					LOC33 = hashtree_313009_1142335848((*n0).kindU.S6.sons->data[i_313062_1142335848]);
					result0 = HEX21HEX26_143004_213663784(result0, LOC33);
					res_313073_1142335848 += ((NI) 1);
				} LA32: ;
			}
		}
	}
	break;
	}
	}BeforeRet: ;
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

N_NIMCALL(NIM_BOOL, treesequivalent_313077_1142335848)(Tnode264794* a0, Tnode264794* b0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		if (!(a0 == b0)) goto LA3;
		result0 = NIM_TRUE;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		LOC6 = (NIM_BOOL)0;
		LOC7 = (NIM_BOOL)0;
		LOC7 = !((a0 == NIM_NIL));
		if (!(LOC7)) goto LA8;
		LOC7 = !((b0 == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		LOC6 = ((*a0).kind == (*b0).kind);
		LA9: ;
		if (!LOC6) goto LA10;
		switch ((*a0).kind) {
		case ((Tnodekind264020) 1):
		case ((Tnodekind264020) 23):
		case ((Tnodekind264020) 4):
		{
			result0 = NIM_TRUE;
		}
		break;
		case ((Tnodekind264020) 3):
		{
			result0 = ((*(*a0).kindU.S4.sym).Sup.id == (*(*b0).kindU.S4.sym).Sup.id);
		}
		break;
		case ((Tnodekind264020) 2):
		{
			result0 = ((*(*a0).kindU.S5.ident).Sup.id == (*(*b0).kindU.S5.ident).Sup.id);
		}
		break;
		case ((Tnodekind264020) 5) ... ((Tnodekind264020) 15):
		{
			result0 = ((*a0).kindU.S1.intval == (*b0).kindU.S1.intval);
		}
		break;
		case ((Tnodekind264020) 16) ... ((Tnodekind264020) 18):
		{
			result0 = ((*a0).kindU.S2.floatval == (*b0).kindU.S2.floatval);
		}
		break;
		case ((Tnodekind264020) 20) ... ((Tnodekind264020) 22):
		{
			result0 = eqStrings((*a0).kindU.S3.strval, (*b0).kindU.S3.strval);
		}
		break;
		default:
		{
			{
				NI LOC21;
				NI LOC22;
				LOC21 = (NI)0;
				LOC21 = sonslen_267351_850551059(a0);
				LOC22 = (NI)0;
				LOC22 = sonslen_267351_850551059(b0);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_313149_1142335848;
					NI HEX3Atmp_313153_1142335848;
					NI LOC26;
					NI res_313156_1142335848;
					i_313149_1142335848 = (NI)0;
					HEX3Atmp_313153_1142335848 = (NI)0;
					LOC26 = (NI)0;
					LOC26 = sonslen_267351_850551059(a0);
					HEX3Atmp_313153_1142335848 = (NI)(LOC26 - ((NI) 1));
					res_313156_1142335848 = ((NI) 0);
					{
						while (1) {
							if (!(res_313156_1142335848 <= HEX3Atmp_313153_1142335848)) goto LA28;
							i_313149_1142335848 = res_313156_1142335848;
							{
								NIM_BOOL LOC31;
								LOC31 = (NIM_BOOL)0;
								LOC31 = treesequivalent_313077_1142335848((*a0).kindU.S6.sons->data[i_313149_1142335848], (*b0).kindU.S6.sons->data[i_313149_1142335848]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_313156_1142335848 += ((NI) 1);
						} LA28: ;
					}
				}
				result0 = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
		{
			if (!result0) goto LA36;
			result0 = sametypeornil_295839_3876443242((*a0).typ, (*b0).typ, 0);
		}
		LA36: ;
	}
	goto LA1;
	LA10: ;
	LA1: ;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(NI, nexttry_271155_2984716966)(NI h0, NI maxhash0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((NI)((NI)(((NI) 5) * h0) + ((NI) 1)) & maxhash0);
	return result0;
}

N_NIMCALL(NI, nodetablerawget_313160_1142335848)(Tnodetable264856 t0, NI k0, Tnode264794* key0) {
	NI result0;
	NI h0;
{	result0 = (NI)0;
	h0 = (NI)(k0 & (t0.data ? (t0.data->Sup.len-1) : -1));
	{
		while (1) {
			if (!!((t0.data->data[h0].key == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = (NIM_BOOL)0;
				LOC5 = (t0.data->data[h0].h == k0);
				if (!(LOC5)) goto LA6;
				LOC5 = treesequivalent_313077_1142335848(t0.data->data[h0].key, key0);
				LA6: ;
				if (!LOC5) goto LA7;
				result0 = h0;
				goto BeforeRet;
			}
			LA7: ;
			h0 = nexttry_271155_2984716966(h0, (t0.data ? (t0.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result0 = ((NI) -1);
	}BeforeRet: ;
	return result0;
}

static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47905* result0;
	result0 = (Cell47905*)0;
	result0 = ((Cell47905*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47905))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0) {
	addzct_52017_1689653243((&gch_50458_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47905* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_52040_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47905* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_52040_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53201_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(void, nodetablerawinsert_313190_1142335848)(Tnodepairseq264854** data0, NI k0, Tnode264794* key0, NI val0) {
	NI h0;
	h0 = (NI)(k0 & ((*data0) ? ((*data0)->Sup.len-1) : -1));
	{
		while (1) {
			if (!!(((*data0)->data[h0].key == NIM_NIL))) goto LA2;
			h0 = nexttry_271155_2984716966(h0, ((*data0) ? ((*data0)->Sup.len-1) : -1));
		} LA2: ;
	}
	(*data0)->data[h0].h = k0;
	asgnRefNoCycle((void**) (&(*data0)->data[h0].key), key0);
	(*data0)->data[h0].val = val0;
}

N_NIMCALL(NI, nodetabletestorset_313682_1142335848)(Tnodetable264856* t0, Tnode264794* key0, NI val0) {
	NI result0;
	Tnodepairseq264854* n0;
	NI k0;
	NI index0;
	result0 = (NI)0;
	n0 = (Tnodepairseq264854*)0;
	k0 = hashtree_313009_1142335848(key0);
	index0 = nodetablerawget_313160_1142335848((*t0), k0, key0);
	{
		if (!(((NI) 0) <= index0)) goto LA3;
		result0 = (*t0).data->data[index0].val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			Tnodepairseq264854* LOC18;
			LOC8 = (NIM_BOOL)0;
			LOC8 = mustrehash_271151_2984716966(((*t0).data ? (*t0).data->Sup.len : 0), (*t0).counter);
			if (!LOC8) goto LA9;
			n0 = (Tnodepairseq264854*) newSeq((&NTI264854), ((NI) ((NI)(((*t0).data ? (*t0).data->Sup.len : 0) * ((NI) 2)))));
			{
				NI i_313838_1142335848;
				NI HEX3Atmp_313875_1142335848;
				NI res_313878_1142335848;
				i_313838_1142335848 = (NI)0;
				HEX3Atmp_313875_1142335848 = (NI)0;
				HEX3Atmp_313875_1142335848 = ((*t0).data ? ((*t0).data->Sup.len-1) : -1);
				res_313878_1142335848 = ((NI) 0);
				{
					while (1) {
						if (!(res_313878_1142335848 <= HEX3Atmp_313875_1142335848)) goto LA13;
						i_313838_1142335848 = res_313878_1142335848;
						{
							if (!!(((*t0).data->data[i_313838_1142335848].key == NIM_NIL))) goto LA16;
							nodetablerawinsert_313190_1142335848((&n0), (*t0).data->data[i_313838_1142335848].h, (*t0).data->data[i_313838_1142335848].key, (*t0).data->data[i_313838_1142335848].val);
						}
						LA16: ;
						res_313878_1142335848 += ((NI) 1);
					} LA13: ;
				}
			}
			LOC18 = (Tnodepairseq264854*)0;
			LOC18 = (*t0).data;
			unsureAsgnRef((void**) (&(*t0).data), n0);
			n0 = LOC18;
		}
		LA9: ;
		nodetablerawinsert_313190_1142335848((&(*t0).data), k0, key0, val0);
		result0 = val0;
		(*t0).counter += ((NI) 1);
	}
	LA1: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treetabInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_treetabDatInit000)(void) {
}

