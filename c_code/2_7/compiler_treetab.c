/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnodetable294862 Tnodetable294862;
typedef struct Tnode294802 Tnode294802;
typedef struct Tnodepairseq294860 Tnodepairseq294860;
typedef struct Tnodepair294858 Tnodepair294858;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype294840 Ttype294840;
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tsym294834 Tsym294834;
typedef struct Tident201010 Tident201010;
typedef struct Tnodeseq294796 Tnodeseq294796;
typedef struct Tidobj201004 Tidobj201004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq294836 Ttypeseq294836;
typedef struct TY294929 TY294929;
typedef struct Tstrtable294806 Tstrtable294806;
typedef struct Tsymseq294804 Tsymseq294804;
typedef struct Tloc294816 Tloc294816;
typedef struct Ropeobj180006 Ropeobj180006;
typedef struct Tlib294820 Tlib294820;
typedef struct Cell47304 Cell47304;
typedef struct Cellseq47320 Cellseq47320;
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
typedef struct Cellset47316 Cellset47316;
typedef struct Pagedesc47312 Pagedesc47312;
typedef struct TY294960 TY294960;
typedef struct Tinstantiation294824 Tinstantiation294824;
typedef struct Tlistentry148007 Tlistentry148007;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct TY294961 TY294961;
struct  Tnodepair294858  {
NI h;
Tnode294802* key;
NI val;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  Tlineinfo193336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag294427Set;
typedef NU8 Tnodekind294020;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj201004  {
  TNimObject Sup;
NI id;
};
struct  Tident201010  {
  Tidobj201004 Sup;
NimStringDesc* s;
Tident201010* next;
NI h;
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
struct  Tnodetable294862  {
NI counter;
Tnodepairseq294860* data;
};
typedef NU8 Ttypecmpflag326429Set;
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
Memregion29485 region;
Gcstat49814 stat;
Cellset47316 marked;
Cellseq47320 additionalroots;
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
struct  Ropeobj180006  {
  TNimObject Sup;
Ropeobj180006* left;
Ropeobj180006* right;
NI length;
NimStringDesc* data;
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
struct  Pagedesc47312  {
Pagedesc47312* next;
NI key;
TY29418 bits;
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
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct Tnodepairseq294860 {
  TGenericSeq Sup;
  Tnodepair294858 data[SEQ_DECL_SIZE];
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
N_NIMCALL(NI, hashtree_344005_1142335848)(Tnode294802* n0);
static N_INLINE(NI, HEX21HEX26_150005_213663784)(NI h0, NI val0);
N_NIMCALL(NI, hash_150827_213663784)(NimStringDesc* x0);
N_NIMCALL(NI, sonslen_297351_850551059)(Tnode294802* n0);
N_NIMCALL(NI, nodetablerawget_344155_1142335848)(Tnodetable294862 t0, NI k0, Tnode294802* key0);
N_NIMCALL(NIM_BOOL, treesequivalent_344072_1142335848)(Tnode294802* a0, Tnode294802* b0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
N_NIMCALL(NIM_BOOL, sametypeornil_326643_3876443242)(Ttype294840* a0, Ttype294840* b0, Ttypecmpflag326429Set flags0);
static N_INLINE(NI, nexttry_301130_2984716966)(NI h0, NI maxhash0);
N_NIMCALL(NIM_BOOL, mustrehash_301126_2984716966)(NI length0, NI counter0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, nodetablerawinsert_344185_1142335848)(Tnodepairseq294860** data0, NI k0, Tnode294802* key0, NI val0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
extern TNimType NTI294860; /* TNodePairSeq */
extern Gcheap49818 gch_49858_1689653243;

static N_INLINE(NI, HEX21HEX26_150005_213663784)(NI h0, NI val0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((NU32)(h0) + (NU32)(val0));
	result0 = (NI)((NU32)(result0) + (NU32)((NI)((NU32)(result0) << (NU32)(((NI) 10)))));
	result0 = (NI)(result0 ^ (NI)((NU32)(result0) >> (NU32)(((NI) 6))));
	return result0;
}

N_NIMCALL(NI, hashtree_344005_1142335848)(Tnode294802* n0) {
	NI result0;
{	result0 = (NI)0;
	{
		if (!(n0 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	result0 = ((NI) ((*n0).kind));
	switch ((*n0).kind) {
	case ((Tnodekind294020) 1):
	case ((Tnodekind294020) 23):
	case ((Tnodekind294020) 4):
	{
	}
	break;
	case ((Tnodekind294020) 2):
	{
		result0 = HEX21HEX26_150005_213663784(result0, (*(*n0).kindU.S5.ident).h);
	}
	break;
	case ((Tnodekind294020) 3):
	{
		result0 = HEX21HEX26_150005_213663784(result0, (*(*(*n0).kindU.S4.sym).name).h);
	}
	break;
	case ((Tnodekind294020) 5) ... ((Tnodekind294020) 15):
	{
		{
			NIM_BOOL LOC11;
			LOC11 = (NIM_BOOL)0;
			LOC11 = (IL64(-2147483648) <= (*n0).kindU.S1.intval);
			if (!(LOC11)) goto LA12;
			LOC11 = ((*n0).kindU.S1.intval <= IL64(2147483647));
			LA12: ;
			if (!LOC11) goto LA13;
			result0 = HEX21HEX26_150005_213663784(result0, ((NI) ((*n0).kindU.S1.intval)));
		}
		LA13: ;
	}
	break;
	case ((Tnodekind294020) 16) ... ((Tnodekind294020) 18):
	{
		{
			NIM_BOOL LOC18;
			LOC18 = (NIM_BOOL)0;
			LOC18 = (-1.0000000000000000e+06 <= (*n0).kindU.S2.floatval);
			if (!(LOC18)) goto LA19;
			LOC18 = ((*n0).kindU.S2.floatval <= 1.0000000000000000e+06);
			LA19: ;
			if (!LOC18) goto LA20;
			result0 = HEX21HEX26_150005_213663784(result0, float64ToInt32((*n0).kindU.S2.floatval));
		}
		LA20: ;
	}
	break;
	case ((Tnodekind294020) 20) ... ((Tnodekind294020) 22):
	{
		{
			NI LOC27;
			if (!!((*n0).kindU.S3.strval == 0)) goto LA25;
			LOC27 = (NI)0;
			LOC27 = hash_150827_213663784((*n0).kindU.S3.strval);
			result0 = HEX21HEX26_150005_213663784(result0, LOC27);
		}
		LA25: ;
	}
	break;
	default:
	{
		{
			NI i_344058_1142335848;
			NI HEX3Atmp_344065_1142335848;
			NI LOC30;
			NI res_344068_1142335848;
			i_344058_1142335848 = (NI)0;
			HEX3Atmp_344065_1142335848 = (NI)0;
			LOC30 = (NI)0;
			LOC30 = sonslen_297351_850551059(n0);
			HEX3Atmp_344065_1142335848 = (NI)(LOC30 - ((NI) 1));
			res_344068_1142335848 = ((NI) 0);
			{
				while (1) {
					NI LOC33;
					if (!(res_344068_1142335848 <= HEX3Atmp_344065_1142335848)) goto LA32;
					i_344058_1142335848 = res_344068_1142335848;
					LOC33 = (NI)0;
					LOC33 = hashtree_344005_1142335848((*n0).kindU.S6.sons->data[i_344058_1142335848]);
					result0 = HEX21HEX26_150005_213663784(result0, LOC33);
					res_344068_1142335848 += ((NI) 1);
				} LA32: ;
			}
		}
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0) {
	NIM_BOOL result0;
	int LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (int)0;
	LOC1 = memcmp(a0, b0, ((size_t) (size0)));
	result0 = (LOC1 == ((NI32) 0));
	return result0;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
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
	LOC11 = equalmem_7495_1689653243(((void*) ((*a0).data)), ((void*) ((*b0).data)), ((NI) ((*a0).Sup.len)));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, treesequivalent_344072_1142335848)(Tnode294802* a0, Tnode294802* b0) {
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
		case ((Tnodekind294020) 1):
		case ((Tnodekind294020) 23):
		case ((Tnodekind294020) 4):
		{
			result0 = NIM_TRUE;
		}
		break;
		case ((Tnodekind294020) 3):
		{
			result0 = ((*(*a0).kindU.S4.sym).Sup.id == (*(*b0).kindU.S4.sym).Sup.id);
		}
		break;
		case ((Tnodekind294020) 2):
		{
			result0 = ((*(*a0).kindU.S5.ident).Sup.id == (*(*b0).kindU.S5.ident).Sup.id);
		}
		break;
		case ((Tnodekind294020) 5) ... ((Tnodekind294020) 15):
		{
			result0 = ((*a0).kindU.S1.intval == (*b0).kindU.S1.intval);
		}
		break;
		case ((Tnodekind294020) 16) ... ((Tnodekind294020) 18):
		{
			result0 = ((*a0).kindU.S2.floatval == (*b0).kindU.S2.floatval);
		}
		break;
		case ((Tnodekind294020) 20) ... ((Tnodekind294020) 22):
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
				LOC21 = sonslen_297351_850551059(a0);
				LOC22 = (NI)0;
				LOC22 = sonslen_297351_850551059(b0);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_344144_1142335848;
					NI HEX3Atmp_344148_1142335848;
					NI LOC26;
					NI res_344151_1142335848;
					i_344144_1142335848 = (NI)0;
					HEX3Atmp_344148_1142335848 = (NI)0;
					LOC26 = (NI)0;
					LOC26 = sonslen_297351_850551059(a0);
					HEX3Atmp_344148_1142335848 = (NI)(LOC26 - ((NI) 1));
					res_344151_1142335848 = ((NI) 0);
					{
						while (1) {
							if (!(res_344151_1142335848 <= HEX3Atmp_344148_1142335848)) goto LA28;
							i_344144_1142335848 = res_344151_1142335848;
							{
								NIM_BOOL LOC31;
								LOC31 = (NIM_BOOL)0;
								LOC31 = treesequivalent_344072_1142335848((*a0).kindU.S6.sons->data[i_344144_1142335848], (*b0).kindU.S6.sons->data[i_344144_1142335848]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_344151_1142335848 += ((NI) 1);
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
			result0 = sametypeornil_326643_3876443242((*a0).typ, (*b0).typ, 0);
		}
		LA36: ;
	}
	goto LA1;
	LA10: ;
	LA1: ;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(NI, nexttry_301130_2984716966)(NI h0, NI maxhash0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((NI)((NI)(((NI) 5) * h0) + ((NI) 1)) & maxhash0);
	return result0;
}

N_NIMCALL(NI, nodetablerawget_344155_1142335848)(Tnodetable294862 t0, NI k0, Tnode294802* key0) {
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
				LOC5 = treesequivalent_344072_1142335848(t0.data->data[h0].key, key0);
				LA6: ;
				if (!LOC5) goto LA7;
				result0 = h0;
				goto BeforeRet;
			}
			LA7: ;
			h0 = nexttry_301130_2984716966(h0, (t0.data ? (t0.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result0 = ((NI) -1);
	}BeforeRet: ;
	return result0;
}

static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47304* result0;
	result0 = (Cell47304*)0;
	result0 = ((Cell47304*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47304))))));
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
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(void, nodetablerawinsert_344185_1142335848)(Tnodepairseq294860** data0, NI k0, Tnode294802* key0, NI val0) {
	NI h0;
	h0 = (NI)(k0 & ((*data0) ? ((*data0)->Sup.len-1) : -1));
	{
		while (1) {
			if (!!(((*data0)->data[h0].key == NIM_NIL))) goto LA2;
			h0 = nexttry_301130_2984716966(h0, ((*data0) ? ((*data0)->Sup.len-1) : -1));
		} LA2: ;
	}
	(*data0)->data[h0].h = k0;
	asgnRefNoCycle((void**) (&(*data0)->data[h0].key), key0);
	(*data0)->data[h0].val = val0;
}

N_NIMCALL(NI, nodetabletestorset_344682_1142335848)(Tnodetable294862* t0, Tnode294802* key0, NI val0) {
	NI result0;
	Tnodepairseq294860* n0;
	NI k0;
	NI index0;
	result0 = (NI)0;
	n0 = (Tnodepairseq294860*)0;
	k0 = hashtree_344005_1142335848(key0);
	index0 = nodetablerawget_344155_1142335848((*t0), k0, key0);
	{
		if (!(((NI) 0) <= index0)) goto LA3;
		result0 = (*t0).data->data[index0].val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			Tnodepairseq294860* LOC18;
			LOC8 = (NIM_BOOL)0;
			LOC8 = mustrehash_301126_2984716966(((*t0).data ? (*t0).data->Sup.len : 0), (*t0).counter);
			if (!LOC8) goto LA9;
			n0 = (Tnodepairseq294860*) newSeq((&NTI294860), ((NI) ((NI)(((*t0).data ? (*t0).data->Sup.len : 0) * ((NI) 2)))));
			{
				NI i_344838_1142335848;
				NI HEX3Atmp_344875_1142335848;
				NI res_344878_1142335848;
				i_344838_1142335848 = (NI)0;
				HEX3Atmp_344875_1142335848 = (NI)0;
				HEX3Atmp_344875_1142335848 = ((*t0).data ? ((*t0).data->Sup.len-1) : -1);
				res_344878_1142335848 = ((NI) 0);
				{
					while (1) {
						if (!(res_344878_1142335848 <= HEX3Atmp_344875_1142335848)) goto LA13;
						i_344838_1142335848 = res_344878_1142335848;
						{
							if (!!(((*t0).data->data[i_344838_1142335848].key == NIM_NIL))) goto LA16;
							nodetablerawinsert_344185_1142335848((&n0), (*t0).data->data[i_344838_1142335848].h, (*t0).data->data[i_344838_1142335848].key, (*t0).data->data[i_344838_1142335848].val);
						}
						LA16: ;
						res_344878_1142335848 += ((NI) 1);
					} LA13: ;
				}
			}
			LOC18 = (Tnodepairseq294860*)0;
			LOC18 = (*t0).data;
			unsureAsgnRef((void**) (&(*t0).data), n0);
			n0 = LOC18;
		}
		LA9: ;
		nodetablerawinsert_344185_1142335848((&(*t0).data), k0, key0, val0);
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

