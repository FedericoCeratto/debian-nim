/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tnodetable293862 Tnodetable293862;
typedef struct Tnode293802 Tnode293802;
typedef struct Tnodepairseq293860 Tnodepairseq293860;
typedef struct Tnodepair293858 Tnodepair293858;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype293840 Ttype293840;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tsym293834 Tsym293834;
typedef struct Tident200010 Tident200010;
typedef struct Tnodeseq293796 Tnodeseq293796;
typedef struct Tidobj200004 Tidobj200004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq293836 Ttypeseq293836;
typedef struct TY293929 TY293929;
typedef struct Tstrtable293806 Tstrtable293806;
typedef struct Tsymseq293804 Tsymseq293804;
typedef struct Tloc293816 Tloc293816;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct Tlib293820 Tlib293820;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
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
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct TY293960 TY293960;
typedef struct Tinstantiation293824 Tinstantiation293824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
typedef struct TY293961 TY293961;
struct  Tnodepair293858  {
NI h;
Tnode293802* key;
NI val;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag293427Set;
typedef NU8 Tnodekind293020;
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
struct  Tidobj200004  {
  TNimObject Sup;
NI id;
};
struct  Tident200010  {
  Tidobj200004 Sup;
NimStringDesc* s;
Tident200010* next;
NI h;
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
struct  Tnodetable293862  {
NI counter;
Tnodepairseq293860* data;
};
typedef NU8 Ttypecmpflag325429Set;
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
Memregion29486 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
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
struct  Ropeobj179006  {
  TNimObject Sup;
Ropeobj179006* left;
Ropeobj179006* right;
NI length;
NimStringDesc* data;
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
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29419 bits;
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
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
};
struct Tnodepairseq293860 {
  TGenericSeq Sup;
  Tnodepair293858 data[SEQ_DECL_SIZE];
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
N_NIMCALL(NI, hashtree_343005_1142335848)(Tnode293802* n0);
static N_INLINE(NI, HEX21HEX26_149005_213663784)(NI h0, NI val0);
N_NIMCALL(NI, hash_149827_213663784)(NimStringDesc* x0);
N_NIMCALL(NI, sonslen_296351_850551059)(Tnode293802* n0);
N_NIMCALL(NI, nodetablerawget_343156_1142335848)(Tnodetable293862 t0, NI k0, Tnode293802* key0);
N_NIMCALL(NIM_BOOL, treesequivalent_343073_1142335848)(Tnode293802* a0, Tnode293802* b0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
N_NIMCALL(NIM_BOOL, sametypeornil_325643_3876443242)(Ttype293840* a0, Ttype293840* b0, Ttypecmpflag325429Set flags0);
static N_INLINE(NI, nexttry_300130_2984716966)(NI h0, NI maxhash0);
N_NIMCALL(NIM_BOOL, mustrehash_300126_2984716966)(NI length0, NI counter0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, nodetablerawinsert_343186_1142335848)(Tnodepairseq293860** data0, NI k0, Tnode293802* key0, NI val0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
extern TNimType NTI293860; /* TNodePairSeq */
extern Gcheap49818 gch_49858_1689653243;

static N_INLINE(NI, HEX21HEX26_149005_213663784)(NI h0, NI val0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((NU64)(h0) + (NU64)(val0));
	result0 = (NI)((NU64)(result0) + (NU64)((NI)((NU64)(result0) << (NU64)(((NI) 10)))));
	result0 = (NI)(result0 ^ (NI)((NU64)(result0) >> (NU64)(((NI) 6))));
	return result0;
}

N_NIMCALL(NI, hashtree_343005_1142335848)(Tnode293802* n0) {
	NI result0;
{	result0 = (NI)0;
	{
		if (!(n0 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	result0 = ((NI) ((*n0).kind));
	switch ((*n0).kind) {
	case ((Tnodekind293020) 1):
	case ((Tnodekind293020) 23):
	case ((Tnodekind293020) 4):
	{
	}
	break;
	case ((Tnodekind293020) 2):
	{
		result0 = HEX21HEX26_149005_213663784(result0, (*(*n0).kindU.S5.ident).h);
	}
	break;
	case ((Tnodekind293020) 3):
	{
		result0 = HEX21HEX26_149005_213663784(result0, (*(*(*n0).kindU.S4.sym).name).h);
	}
	break;
	case ((Tnodekind293020) 5) ... ((Tnodekind293020) 15):
	{
		{
			NIM_BOOL LOC11;
			LOC11 = (NIM_BOOL)0;
			LOC11 = ((IL64(-9223372036854775807) - IL64(1)) <= (*n0).kindU.S1.intval);
			if (!(LOC11)) goto LA12;
			LOC11 = ((*n0).kindU.S1.intval <= IL64(9223372036854775807));
			LA12: ;
			if (!LOC11) goto LA13;
			result0 = HEX21HEX26_149005_213663784(result0, ((NI) ((*n0).kindU.S1.intval)));
		}
		LA13: ;
	}
	break;
	case ((Tnodekind293020) 16) ... ((Tnodekind293020) 18):
	{
		{
			NIM_BOOL LOC18;
			LOC18 = (NIM_BOOL)0;
			LOC18 = (-1.0000000000000000e+06 <= (*n0).kindU.S2.floatval);
			if (!(LOC18)) goto LA19;
			LOC18 = ((*n0).kindU.S2.floatval <= 1.0000000000000000e+06);
			LA19: ;
			if (!LOC18) goto LA20;
			result0 = HEX21HEX26_149005_213663784(result0, float64ToInt32((*n0).kindU.S2.floatval));
		}
		LA20: ;
	}
	break;
	case ((Tnodekind293020) 20) ... ((Tnodekind293020) 22):
	{
		{
			NI LOC27;
			if (!!((*n0).kindU.S3.strval == 0)) goto LA25;
			LOC27 = (NI)0;
			LOC27 = hash_149827_213663784((*n0).kindU.S3.strval);
			result0 = HEX21HEX26_149005_213663784(result0, LOC27);
		}
		LA25: ;
	}
	break;
	default:
	{
		{
			NI i_343058_1142335848;
			NI HEX3Atmp_343066_1142335848;
			NI LOC30;
			NI res_343069_1142335848;
			i_343058_1142335848 = (NI)0;
			HEX3Atmp_343066_1142335848 = (NI)0;
			LOC30 = (NI)0;
			LOC30 = sonslen_296351_850551059(n0);
			HEX3Atmp_343066_1142335848 = (NI)(LOC30 - ((NI) 1));
			res_343069_1142335848 = ((NI) 0);
			{
				while (1) {
					NI LOC33;
					if (!(res_343069_1142335848 <= HEX3Atmp_343066_1142335848)) goto LA32;
					i_343058_1142335848 = res_343069_1142335848;
					LOC33 = (NI)0;
					LOC33 = hashtree_343005_1142335848((*n0).kindU.S6.sons->data[i_343058_1142335848]);
					result0 = HEX21HEX26_149005_213663784(result0, LOC33);
					res_343069_1142335848 += ((NI) 1);
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

N_NIMCALL(NIM_BOOL, treesequivalent_343073_1142335848)(Tnode293802* a0, Tnode293802* b0) {
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
		case ((Tnodekind293020) 1):
		case ((Tnodekind293020) 23):
		case ((Tnodekind293020) 4):
		{
			result0 = NIM_TRUE;
		}
		break;
		case ((Tnodekind293020) 3):
		{
			result0 = ((*(*a0).kindU.S4.sym).Sup.id == (*(*b0).kindU.S4.sym).Sup.id);
		}
		break;
		case ((Tnodekind293020) 2):
		{
			result0 = ((*(*a0).kindU.S5.ident).Sup.id == (*(*b0).kindU.S5.ident).Sup.id);
		}
		break;
		case ((Tnodekind293020) 5) ... ((Tnodekind293020) 15):
		{
			result0 = ((*a0).kindU.S1.intval == (*b0).kindU.S1.intval);
		}
		break;
		case ((Tnodekind293020) 16) ... ((Tnodekind293020) 18):
		{
			result0 = ((*a0).kindU.S2.floatval == (*b0).kindU.S2.floatval);
		}
		break;
		case ((Tnodekind293020) 20) ... ((Tnodekind293020) 22):
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
				LOC21 = sonslen_296351_850551059(a0);
				LOC22 = (NI)0;
				LOC22 = sonslen_296351_850551059(b0);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_343145_1142335848;
					NI HEX3Atmp_343149_1142335848;
					NI LOC26;
					NI res_343152_1142335848;
					i_343145_1142335848 = (NI)0;
					HEX3Atmp_343149_1142335848 = (NI)0;
					LOC26 = (NI)0;
					LOC26 = sonslen_296351_850551059(a0);
					HEX3Atmp_343149_1142335848 = (NI)(LOC26 - ((NI) 1));
					res_343152_1142335848 = ((NI) 0);
					{
						while (1) {
							if (!(res_343152_1142335848 <= HEX3Atmp_343149_1142335848)) goto LA28;
							i_343145_1142335848 = res_343152_1142335848;
							{
								NIM_BOOL LOC31;
								LOC31 = (NIM_BOOL)0;
								LOC31 = treesequivalent_343073_1142335848((*a0).kindU.S6.sons->data[i_343145_1142335848], (*b0).kindU.S6.sons->data[i_343145_1142335848]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_343152_1142335848 += ((NI) 1);
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
			result0 = sametypeornil_325643_3876443242((*a0).typ, (*b0).typ, 0);
		}
		LA36: ;
	}
	goto LA1;
	LA10: ;
	LA1: ;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(NI, nexttry_300130_2984716966)(NI h0, NI maxhash0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((NI)((NI)(((NI) 5) * h0) + ((NI) 1)) & maxhash0);
	return result0;
}

N_NIMCALL(NI, nodetablerawget_343156_1142335848)(Tnodetable293862 t0, NI k0, Tnode293802* key0) {
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
				LOC5 = treesequivalent_343073_1142335848(t0.data->data[h0].key, key0);
				LA6: ;
				if (!LOC5) goto LA7;
				result0 = h0;
				goto BeforeRet;
			}
			LA7: ;
			h0 = nexttry_300130_2984716966(h0, (t0.data ? (t0.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result0 = ((NI) -1);
	}BeforeRet: ;
	return result0;
}

static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47305* result0;
	result0 = (Cell47305*)0;
	result0 = ((Cell47305*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47305))))));
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
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(void, nodetablerawinsert_343186_1142335848)(Tnodepairseq293860** data0, NI k0, Tnode293802* key0, NI val0) {
	NI h0;
	h0 = (NI)(k0 & ((*data0) ? ((*data0)->Sup.len-1) : -1));
	{
		while (1) {
			if (!!(((*data0)->data[h0].key == NIM_NIL))) goto LA2;
			h0 = nexttry_300130_2984716966(h0, ((*data0) ? ((*data0)->Sup.len-1) : -1));
		} LA2: ;
	}
	(*data0)->data[h0].h = k0;
	asgnRefNoCycle((void**) (&(*data0)->data[h0].key), key0);
	(*data0)->data[h0].val = val0;
}

N_NIMCALL(NI, nodetabletestorset_343682_1142335848)(Tnodetable293862* t0, Tnode293802* key0, NI val0) {
	NI result0;
	Tnodepairseq293860* n0;
	NI k0;
	NI index0;
	result0 = (NI)0;
	n0 = (Tnodepairseq293860*)0;
	k0 = hashtree_343005_1142335848(key0);
	index0 = nodetablerawget_343156_1142335848((*t0), k0, key0);
	{
		if (!(((NI) 0) <= index0)) goto LA3;
		result0 = (*t0).data->data[index0].val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			Tnodepairseq293860* LOC18;
			LOC8 = (NIM_BOOL)0;
			LOC8 = mustrehash_300126_2984716966(((*t0).data ? (*t0).data->Sup.len : 0), (*t0).counter);
			if (!LOC8) goto LA9;
			n0 = (Tnodepairseq293860*) newSeq((&NTI293860), ((NI) ((NI)(((*t0).data ? (*t0).data->Sup.len : 0) * ((NI) 2)))));
			{
				NI i_343838_1142335848;
				NI HEX3Atmp_343875_1142335848;
				NI res_343878_1142335848;
				i_343838_1142335848 = (NI)0;
				HEX3Atmp_343875_1142335848 = (NI)0;
				HEX3Atmp_343875_1142335848 = ((*t0).data ? ((*t0).data->Sup.len-1) : -1);
				res_343878_1142335848 = ((NI) 0);
				{
					while (1) {
						if (!(res_343878_1142335848 <= HEX3Atmp_343875_1142335848)) goto LA13;
						i_343838_1142335848 = res_343878_1142335848;
						{
							if (!!(((*t0).data->data[i_343838_1142335848].key == NIM_NIL))) goto LA16;
							nodetablerawinsert_343186_1142335848((&n0), (*t0).data->data[i_343838_1142335848].h, (*t0).data->data[i_343838_1142335848].key, (*t0).data->data[i_343838_1142335848].val);
						}
						LA16: ;
						res_343878_1142335848 += ((NI) 1);
					} LA13: ;
				}
			}
			LOC18 = (Tnodepairseq293860*)0;
			LOC18 = (*t0).data;
			unsureAsgnRef((void**) (&(*t0).data), n0);
			n0 = LOC18;
		}
		LA9: ;
		nodetablerawinsert_343186_1142335848((&(*t0).data), k0, key0, val0);
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

