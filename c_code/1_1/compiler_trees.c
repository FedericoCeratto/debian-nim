/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode290802 Tnode290802;
typedef struct Ttype290840 Ttype290840;
typedef struct Tlineinfo189336 Tlineinfo189336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym290834 Tsym290834;
typedef struct Tident197010 Tident197010;
typedef struct Tnodeseq290796 Tnodeseq290796;
typedef struct Tidobj197004 Tidobj197004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq290836 Ttypeseq290836;
typedef struct TY290929 TY290929;
typedef struct Tstrtable290806 Tstrtable290806;
typedef struct Tsymseq290804 Tsymseq290804;
typedef struct Tloc290816 Tloc290816;
typedef struct Ropeobj177006 Ropeobj177006;
typedef struct Tlib290820 Tlib290820;
typedef struct Cell46904 Cell46904;
typedef struct Cellseq46920 Cellseq46920;
typedef struct Gcheap49418 Gcheap49418;
typedef struct Gcstack49416 Gcstack49416;
typedef struct Memregion29085 Memregion29085;
typedef struct Smallchunk29039 Smallchunk29039;
typedef struct Llchunk29079 Llchunk29079;
typedef struct Bigchunk29041 Bigchunk29041;
typedef struct Intset29014 Intset29014;
typedef struct Trunk29010 Trunk29010;
typedef struct Avlnode29083 Avlnode29083;
typedef struct Gcstat49414 Gcstat49414;
typedef struct Cellset46916 Cellset46916;
typedef struct Pagedesc46912 Pagedesc46912;
typedef struct TY290960 TY290960;
typedef struct Tinstantiation290824 Tinstantiation290824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Basechunk29037 Basechunk29037;
typedef struct Freecell29029 Freecell29029;
typedef struct TY290961 TY290961;
struct  Tlineinfo189336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag290427Set;
typedef NU8 Tnodekind290020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode290802  {
Ttype290840* typ;
Tlineinfo189336 info;
Tnodeflag290427Set flags;
Tnodekind290020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym290834* sym;
} S4;
struct {Tident197010* ident;
} S5;
struct {Tnodeseq290796* sons;
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
struct  Tidobj197004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind290435;
struct  Tstrtable290806  {
NI counter;
Tsymseq290804* data;
};
typedef NU16 Tmagic290524;
typedef NU32 Tsymflag290184Set;
typedef NU32 Toption168009Set;
typedef NU8 Tlockind290808;
typedef NU8 Tstorageloc290812;
typedef NU16 Tlocflag290810Set;
struct  Tloc290816  {
Tlockind290808 k;
Tstorageloc290812 s;
Tlocflag290810Set flags;
Ttype290840* t;
Ropeobj177006* r;
};
struct  Tsym290834  {
  Tidobj197004 Sup;
Tsymkind290435 kind;
union{
struct {Ttypeseq290836* typeinstcache;
} S1;
struct {TY290929* procinstcache;
Tsym290834* gcunsafetyreason;
} S2;
struct {TY290929* usedgenerics;
Tstrtable290806 tab;
} S3;
struct {Tsym290834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic290524 magic;
Ttype290840* typ;
Tident197010* name;
Tlineinfo189336 info;
Tsym290834* owner;
Tsymflag290184Set flags;
Tnode290802* ast;
Toption168009Set options;
NI position;
NI offset;
Tloc290816 loc;
Tlib290820* annex;
Tnode290802* constraint;
};
struct  Tident197010  {
  Tidobj197004 Sup;
NimStringDesc* s;
Tident197010* next;
NI h;
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
struct  Cell46904  {
NI refcount;
TNimType* typ;
};
struct  Cellseq46920  {
NI len;
NI cap;
Cell46904** d;
};
typedef Smallchunk29039* TY29100[512];
typedef Trunk29010* Trunkbuckets29012[256];
struct  Intset29014  {
Trunkbuckets29012 data;
};
struct  Memregion29085  {
NI minlargeobj;
NI maxlargeobj;
TY29100 freesmallchunks;
Llchunk29079* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29041* freechunkslist;
Intset29014 chunkstarts;
Avlnode29083* root;
Avlnode29083* deleted;
Avlnode29083* last;
Avlnode29083* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat49414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset46916  {
NI counter;
NI max;
Pagedesc46912* head;
Pagedesc46912** data;
};
struct  Gcheap49418  {
Gcstack49416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq46920 zct;
Cellseq46920 decstack;
Cellseq46920 tempstack;
NI recgclock;
Memregion29085 region;
Gcstat49414 stat;
Cellset46916 marked;
Cellseq46920 additionalroots;
};
typedef NU64 Ttypekind290244Set;
typedef NU8 Ttypekind290244;
typedef NU8 Tcallingconvention290002;
typedef NU32 Ttypeflag290431Set;
struct  Ttype290840  {
  Tidobj197004 Sup;
Ttypekind290244 kind;
Tcallingconvention290002 callconv;
Ttypeflag290431Set flags;
Ttypeseq290836* sons;
Tnode290802* n;
Tsym290834* owner;
Tsym290834* sym;
Tsym290834* destructor;
Tsym290834* deepcopy;
Tsym290834* assignment;
TY290960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc290816 loc;
};
typedef NU8 Tnodeflag290427;
typedef NU16 Tspecialword273003;
struct  Ropeobj177006  {
  TNimObject Sup;
Ropeobj177006* left;
Ropeobj177006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind290818;
struct  Tlib290820  {
  Tlistentry147007 Sup;
Tlibkind290818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj177006* name;
Tnode290802* path;
};
struct  Gcstack49416  {
Gcstack49416* prev;
Gcstack49416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29037  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29039  {
  Basechunk29037 Sup;
Smallchunk29039* next;
Smallchunk29039* prev;
Freecell29029* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29079  {
NI size;
NI acc;
Llchunk29079* next;
};
struct  Bigchunk29041  {
  Basechunk29037 Sup;
Bigchunk29041* next;
Bigchunk29041* prev;
NI align;
NF data;
};
typedef NI TY29018[16];
struct  Trunk29010  {
Trunk29010* next;
NI key;
TY29018 bits;
};
typedef Avlnode29083* TY29090[2];
struct  Avlnode29083  {
TY29090 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc46912  {
Pagedesc46912* next;
NI key;
TY29018 bits;
};
struct TY290961 {
NI Field0;
Tsym290834* Field1;
};
struct  Tinstantiation290824  {
Tsym290834* sym;
Ttypeseq290836* concretetypes;
NI compilesid;
};
struct  Freecell29029  {
Freecell29029* next;
NI zerofield;
};
struct Tnodeseq290796 {
  TGenericSeq Sup;
  Tnode290802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq290836 {
  TGenericSeq Sup;
  Ttype290840* data[SEQ_DECL_SIZE];
};
struct TY290929 {
  TGenericSeq Sup;
  Tinstantiation290824* data[SEQ_DECL_SIZE];
};
struct Tsymseq290804 {
  TGenericSeq Sup;
  Tsym290834* data[SEQ_DECL_SIZE];
};
struct TY290960 {
  TGenericSeq Sup;
  TY290961 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
N_NIMCALL(NI, sonslen_293351_850551059)(Tnode290802* n0);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_316311_2616423590)(Tnode290802* a0, Tnode290802* b0, NIM_BOOL strictsymequality0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(NIM_BOOL, cyclictreeaux_316004_2616423590)(Tnode290802* n0, Tnodeseq290796** visited0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell46904*, usrtocell_51040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52201_1689653243)(Cell46904* c0);
N_NOINLINE(void, addzct_51017_1689653243)(Cellseq46920* s0, Cell46904* c0);
static N_INLINE(Tnode290802*, pop_316246_1689653243)(Tnodeseq290796** s0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
N_NIMCALL(Tnode290802*, newnodei_292197_850551059)(Tnodekind290020 kind0, Tlineinfo189336 info0);
N_NIMCALL(void, unneststmts_316936_2616423590)(Tnode290802* n0, Tnode290802* result0);
static N_INLINE(NI, len_291081_850551059)(Tnode290802* n0);
N_NIMCALL(void, add_291136_850551059)(Tnode290802* father0, Tnode290802* son0);
N_NIMCALL(Tnode290802*, newnodei_292401_850551059)(Tnodekind290020 kind0, Tlineinfo189336 info0, NI children0);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_316566_2616423590)(Tnode290802* n0);
N_NIMCALL(Ttype290840*, skiptypes_294099_850551059)(Ttype290840* t0, Ttypekind290244Set kinds0);
N_NIMCALL(NIM_BOOL, iscaseobj_316536_2616423590)(Tnode290802* n0);
static N_INLINE(NI, safelen_291103_850551059)(Tnode290802* n0);
static N_INLINE(Tnode290802*, HEX5BHEX5D_291238_850551059)(Tnode290802* n0, NI i0);
N_NIMCALL(Tspecialword273003, whichkeyword_273365_1391470768)(Tident197010* id0);
extern TNimType NTI290796; /* TNodeSeq */
extern Gcheap49418 gch_49458_1689653243;

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

N_NIMCALL(NIM_BOOL, exprstructuralequivalent_316311_2616423590)(Tnode290802* a0, Tnode290802* b0, NIM_BOOL strictsymequality0) {
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
		case ((Tnodekind290020) 3):
		{
			{
				if (!strictsymequality0) goto LA15;
				result0 = ((*a0).kindU.S4.sym == (*b0).kindU.S4.sym);
			}
			goto LA13;
			LA15: ;
			{
				result0 = ((*(*(*a0).kindU.S4.sym).name).Sup.id == (*(*(*b0).kindU.S4.sym).name).Sup.id);
			}
			LA13: ;
		}
		break;
		case ((Tnodekind290020) 2):
		{
			result0 = ((*(*a0).kindU.S5.ident).Sup.id == (*(*b0).kindU.S5.ident).Sup.id);
		}
		break;
		case ((Tnodekind290020) 5) ... ((Tnodekind290020) 10):
		{
			result0 = ((*a0).kindU.S1.intval == (*b0).kindU.S1.intval);
		}
		break;
		case ((Tnodekind290020) 16) ... ((Tnodekind290020) 18):
		{
			result0 = ((*a0).kindU.S2.floatval == (*b0).kindU.S2.floatval);
		}
		break;
		case ((Tnodekind290020) 20) ... ((Tnodekind290020) 22):
		{
			result0 = eqStrings((*a0).kindU.S3.strval, (*b0).kindU.S3.strval);
		}
		break;
		case ((Tnodekind290020) 1):
		case ((Tnodekind290020) 23):
		case ((Tnodekind290020) 4):
		{
			result0 = NIM_TRUE;
		}
		break;
		default:
		{
			{
				NI LOC26;
				NI LOC27;
				LOC26 = (NI)0;
				LOC26 = sonslen_293351_850551059(a0);
				LOC27 = (NI)0;
				LOC27 = sonslen_293351_850551059(b0);
				if (!(LOC26 == LOC27)) goto LA28;
				{
					NI i_316397_2616423590;
					NI HEX3Atmp_316401_2616423590;
					NI LOC31;
					NI res_316404_2616423590;
					i_316397_2616423590 = (NI)0;
					HEX3Atmp_316401_2616423590 = (NI)0;
					LOC31 = (NI)0;
					LOC31 = sonslen_293351_850551059(a0);
					HEX3Atmp_316401_2616423590 = (NI)(LOC31 - ((NI) 1));
					res_316404_2616423590 = ((NI) 0);
					{
						while (1) {
							if (!(res_316404_2616423590 <= HEX3Atmp_316401_2616423590)) goto LA33;
							i_316397_2616423590 = res_316404_2616423590;
							{
								NIM_BOOL LOC36;
								LOC36 = (NIM_BOOL)0;
								LOC36 = exprstructuralequivalent_316311_2616423590((*a0).kindU.S6.sons->data[i_316397_2616423590], (*b0).kindU.S6.sons->data[i_316397_2616423590], strictsymequality0);
								if (!!(LOC36)) goto LA37;
								goto BeforeRet;
							}
							LA37: ;
							res_316404_2616423590 += ((NI) 1);
						} LA33: ;
					}
				}
				result0 = NIM_TRUE;
			}
			LA28: ;
		}
		break;
		}
	}
	goto LA1;
	LA10: ;
	LA1: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tmagic290524, getmagic_316502_2616423590)(Tnode290802* op0) {
	Tmagic290524 result0;
	result0 = (Tmagic290524)0;
	switch ((*op0).kind) {
	case ((Tnodekind290020) 27):
	case ((Tnodekind290020) 29):
	case ((Tnodekind290020) 30):
	case ((Tnodekind290020) 31):
	case ((Tnodekind290020) 26):
	case ((Tnodekind290020) 28):
	case ((Tnodekind290020) 32):
	{
		switch ((*(*op0).kindU.S6.sons->data[((NI) 0)]).kind) {
		case ((Tnodekind290020) 3):
		{
			result0 = (*(*(*op0).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym).magic;
		}
		break;
		default:
		{
			result0 = ((Tmagic290524) 0);
		}
		break;
		}
	}
	break;
	default:
	{
		result0 = ((Tmagic290524) 0);
	}
	break;
	}
	return result0;
}

static N_INLINE(Cell46904*, usrtocell_51040_1689653243)(void* usr0) {
	Cell46904* result0;
	result0 = (Cell46904*)0;
	result0 = ((Cell46904*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell46904))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52201_1689653243)(Cell46904* c0) {
	addzct_51017_1689653243((&gch_49458_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell46904* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51040_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell46904* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51040_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_52201_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

static N_INLINE(Tnode290802*, pop_316246_1689653243)(Tnodeseq290796** s0) {
	Tnode290802* result0;
	NI L0;
	result0 = (Tnode290802*)0;
	L0 = (NI)(((*s0) ? (*s0)->Sup.len : 0) - ((NI) 1));
	result0 = (*s0)->data[L0];
	(*s0) = (Tnodeseq290796*) setLengthSeq(&((*s0))->Sup, sizeof(Tnode290802*), ((NI) (L0)));
	return result0;
}

N_NIMCALL(NIM_BOOL, cyclictreeaux_316004_2616423590)(Tnode290802* n0, Tnodeseq290796** visited0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		if (!(n0 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		Tnode290802* v_316202_2616423590;
		Tnodeseq290796* HEX3Atmp_316274_2616423590;
		NI i_316277_2616423590;
		NI L_316279_2616423590;
		v_316202_2616423590 = (Tnode290802*)0;
		HEX3Atmp_316274_2616423590 = (Tnodeseq290796*)0;
		HEX3Atmp_316274_2616423590 = (*visited0);
		i_316277_2616423590 = ((NI) 0);
		L_316279_2616423590 = (HEX3Atmp_316274_2616423590 ? HEX3Atmp_316274_2616423590->Sup.len : 0);
		{
			while (1) {
				if (!(i_316277_2616423590 < L_316279_2616423590)) goto LA7;
				v_316202_2616423590 = HEX3Atmp_316274_2616423590->data[i_316277_2616423590];
				{
					if (!(v_316202_2616423590 == n0)) goto LA10;
					result0 = NIM_TRUE;
					goto BeforeRet;
				}
				LA10: ;
				i_316277_2616423590 += ((NI) 1);
			} LA7: ;
		}
	}
	{
		Tnode290802* LOC24;
		if (!!(((*n0).kind >= ((Tnodekind290020) 1) && (*n0).kind <= ((Tnodekind290020) 23)))) goto LA14;
		(*visited0) = (Tnodeseq290796*) incrSeqV2(&((*visited0))->Sup, sizeof(Tnode290802*));
		asgnRefNoCycle((void**) (&(*visited0)->data[(*visited0)->Sup.len]), n0);
		++(*visited0)->Sup.len;
		{
			Tnode290802* nson_316244_2616423590;
			Tnodeseq290796* HEX3Atmp_316281_2616423590;
			NI i_316284_2616423590;
			NI L_316286_2616423590;
			nson_316244_2616423590 = (Tnode290802*)0;
			HEX3Atmp_316281_2616423590 = (Tnodeseq290796*)0;
			HEX3Atmp_316281_2616423590 = (*n0).kindU.S6.sons;
			i_316284_2616423590 = ((NI) 0);
			L_316286_2616423590 = (HEX3Atmp_316281_2616423590 ? HEX3Atmp_316281_2616423590->Sup.len : 0);
			{
				while (1) {
					if (!(i_316284_2616423590 < L_316286_2616423590)) goto LA18;
					nson_316244_2616423590 = HEX3Atmp_316281_2616423590->data[i_316284_2616423590];
					{
						NIM_BOOL LOC21;
						LOC21 = (NIM_BOOL)0;
						LOC21 = cyclictreeaux_316004_2616423590(nson_316244_2616423590, visited0);
						if (!LOC21) goto LA22;
						result0 = NIM_TRUE;
						goto BeforeRet;
					}
					LA22: ;
					i_316284_2616423590 += ((NI) 1);
				} LA18: ;
			}
		}
		LOC24 = (Tnode290802*)0;
		LOC24 = pop_316246_1689653243(visited0);
	}
	LA14: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, cyclictree_316287_2616423590)(Tnode290802* n0) {
	NIM_BOOL result0;
	Tnodeseq290796* visited0;
	result0 = (NIM_BOOL)0;
	visited0 = (Tnodeseq290796*) newSeq((&NTI290796), 0);
	result0 = cyclictreeaux_316004_2616423590(n0, (&visited0));
	return result0;
}

static N_INLINE(NI, len_291081_850551059)(Tnode290802* n0) {
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

N_NIMCALL(void, unneststmts_316936_2616423590)(Tnode290802* n0, Tnode290802* result0) {
	{
		if (!((*n0).kind == ((Tnodekind290020) 115))) goto LA3;
		{
			Tnode290802* x_316949_2616423590;
			x_316949_2616423590 = (Tnode290802*)0;
			{
				NI i_316966_2616423590;
				NI HEX3Atmp_316968_2616423590;
				NI LOC7;
				NI res_316970_2616423590;
				i_316966_2616423590 = (NI)0;
				HEX3Atmp_316968_2616423590 = (NI)0;
				LOC7 = (NI)0;
				LOC7 = len_291081_850551059(n0);
				HEX3Atmp_316968_2616423590 = (LOC7 - 1);
				res_316970_2616423590 = ((NI) 0);
				{
					while (1) {
						if (!(res_316970_2616423590 <= HEX3Atmp_316968_2616423590)) goto LA9;
						i_316966_2616423590 = res_316970_2616423590;
						x_316949_2616423590 = (*n0).kindU.S6.sons->data[i_316966_2616423590];
						unneststmts_316936_2616423590(x_316949_2616423590, result0);
						res_316970_2616423590 += ((NI) 1);
					} LA9: ;
				}
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		if (!!(((*n0).kind == ((Tnodekind290020) 125) || (*n0).kind == ((Tnodekind290020) 23)))) goto LA11;
		add_291136_850551059(result0, n0);
	}
	goto LA1;
	LA11: ;
	LA1: ;
}

N_NIMCALL(Tnode290802*, flattenstmts_316973_2616423590)(Tnode290802* n0) {
	Tnode290802* result0;
	result0 = (Tnode290802*)0;
	result0 = newnodei_292197_850551059(((Tnodekind290020) 115), (*n0).info);
	unneststmts_316936_2616423590(n0, result0);
	{
		NI LOC3;
		LOC3 = (NI)0;
		LOC3 = len_291081_850551059(result0);
		if (!(LOC3 == ((NI) 1))) goto LA4;
		result0 = (*result0).kindU.S6.sons->data[((NI) 0)];
	}
	LA4: ;
	return result0;
}

N_NIMCALL(Tnode290802*, extractrange_316979_2616423590)(Tnodekind290020 k0, Tnode290802* n0, NI a0, NI b0) {
	Tnode290802* result0;
	result0 = (Tnode290802*)0;
	result0 = newnodei_292401_850551059(k0, (*n0).info, (NI)((NI)(b0 - a0) + ((NI) 1)));
	{
		NI i_316995_2616423590;
		NI HEX3Atmp_316999_2616423590;
		NI res_317002_2616423590;
		i_316995_2616423590 = (NI)0;
		HEX3Atmp_316999_2616423590 = (NI)0;
		HEX3Atmp_316999_2616423590 = (NI)(b0 - a0);
		res_317002_2616423590 = ((NI) 0);
		{
			while (1) {
				if (!(res_317002_2616423590 <= HEX3Atmp_316999_2616423590)) goto LA3;
				i_316995_2616423590 = res_317002_2616423590;
				asgnRefNoCycle((void**) (&(*result0).kindU.S6.sons->data[i_316995_2616423590]), (*n0).kindU.S6.sons->data[(NI)(i_316995_2616423590 + a0)]);
				res_317002_2616423590 += ((NI) 1);
			} LA3: ;
		}
	}
	return result0;
}

static N_INLINE(NI, safelen_291103_850551059)(Tnode290802* n0) {
	NI result0;
	result0 = (NI)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = ((*n0).kind >= ((Tnodekind290020) 0) && (*n0).kind <= ((Tnodekind290020) 23));
		if (LOC3) goto LA4;
		LOC3 = (*n0).kindU.S6.sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		result0 = ((NI) 0);
	}
	goto LA1;
	LA5: ;
	{
		result0 = ((*n0).kindU.S6.sons ? (*n0).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result0;
}

static N_INLINE(Tnode290802*, HEX5BHEX5D_291238_850551059)(Tnode290802* n0, NI i0) {
	Tnode290802* result0;
	result0 = (Tnode290802*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
}

N_NIMCALL(NIM_BOOL, iscaseobj_316536_2616423590)(Tnode290802* n0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		if (!((*n0).kind == ((Tnodekind290020) 139))) goto LA3;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_316558_2616423590;
		NI HEX3Atmp_316561_2616423590;
		NI i_316564_2616423590;
		i_316558_2616423590 = (NI)0;
		HEX3Atmp_316561_2616423590 = (NI)0;
		HEX3Atmp_316561_2616423590 = safelen_291103_850551059(n0);
		i_316564_2616423590 = ((NI) 0);
		{
			while (1) {
				if (!(i_316564_2616423590 < HEX3Atmp_316561_2616423590)) goto LA7;
				i_316558_2616423590 = i_316564_2616423590;
				{
					Tnode290802* LOC10;
					NIM_BOOL LOC11;
					LOC10 = (Tnode290802*)0;
					LOC10 = HEX5BHEX5D_291238_850551059(n0, i_316558_2616423590);
					LOC11 = (NIM_BOOL)0;
					LOC11 = iscaseobj_316536_2616423590(LOC10);
					if (!LOC11) goto LA12;
					result0 = NIM_TRUE;
					goto BeforeRet;
				}
				LA12: ;
				i_316564_2616423590 += ((NI) 1);
			} LA7: ;
		}
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, isdeepconstexpr_316566_2616423590)(Tnode290802* n0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	switch ((*n0).kind) {
	case ((Tnodekind290020) 5) ... ((Tnodekind290020) 10):
	case ((Tnodekind290020) 20) ... ((Tnodekind290020) 22):
	case ((Tnodekind290020) 16) ... ((Tnodekind290020) 18):
	case ((Tnodekind290020) 23):
	{
		result0 = NIM_TRUE;
	}
	break;
	case ((Tnodekind290020) 33):
	case ((Tnodekind290020) 34):
	case ((Tnodekind290020) 58):
	case ((Tnodekind290020) 59):
	{
		result0 = isdeepconstexpr_316566_2616423590((*n0).kindU.S6.sons->data[((NI) 1)]);
	}
	break;
	case ((Tnodekind290020) 39):
	case ((Tnodekind290020) 41):
	case ((Tnodekind290020) 37):
	case ((Tnodekind290020) 38):
	case ((Tnodekind290020) 155):
	{
		{
			NI i_316815_2616423590;
			NI HEX3Atmp_316848_2616423590;
			NI HEX3Atmp_316849_2616423590;
			NI LOC5;
			NI res_316852_2616423590;
			i_316815_2616423590 = (NI)0;
			HEX3Atmp_316848_2616423590 = (NI)0;
			HEX3Atmp_316849_2616423590 = (NI)0;
			HEX3Atmp_316848_2616423590 = ((*n0).kind == ((Tnodekind290020) 38));
			LOC5 = (NI)0;
			LOC5 = len_291081_850551059(n0);
			HEX3Atmp_316849_2616423590 = (LOC5 - 1);
			res_316852_2616423590 = ((NI) (HEX3Atmp_316848_2616423590));
			{
				while (1) {
					if (!(res_316852_2616423590 <= HEX3Atmp_316849_2616423590)) goto LA7;
					i_316815_2616423590 = res_316852_2616423590;
					{
						NIM_BOOL LOC10;
						LOC10 = (NIM_BOOL)0;
						LOC10 = isdeepconstexpr_316566_2616423590((*n0).kindU.S6.sons->data[i_316815_2616423590]);
						if (!!(LOC10)) goto LA11;
						result0 = NIM_FALSE;
						goto BeforeRet;
					}
					LA11: ;
					res_316852_2616423590 += ((NI) 1);
				} LA7: ;
			}
		}
		{
			if (!(*n0).typ == 0) goto LA15;
			result0 = NIM_TRUE;
		}
		goto LA13;
		LA15: ;
		{
			Ttype290840* t0;
			t0 = skiptypes_294099_850551059((*n0).typ, 10240);
			{
				if (!((*t0).kind == ((Ttypekind290244) 22) || (*t0).kind == ((Ttypekind290244) 21))) goto LA20;
				result0 = NIM_FALSE;
				goto BeforeRet;
			}
			LA20: ;
			{
				NIM_BOOL LOC24;
				NIM_BOOL LOC26;
				LOC24 = (NIM_BOOL)0;
				LOC24 = !(((*t0).kind == ((Ttypekind290244) 17)));
				if (LOC24) goto LA25;
				LOC26 = (NIM_BOOL)0;
				LOC26 = iscaseobj_316536_2616423590((*t0).n);
				LOC24 = !(LOC26);
				LA25: ;
				if (!LOC24) goto LA27;
				result0 = NIM_TRUE;
			}
			LA27: ;
		}
		LA13: ;
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, isconstexpr_316510_2616423590)(Tnode290802* n0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = ((*n0).kind >= ((Tnodekind290020) 5) && (*n0).kind <= ((Tnodekind290020) 23));
	if (LOC1) goto LA2;
	LOC1 = (((*n0).flags &(1U<<((NU)(((Tnodeflag290427) 4))&15U)))!=0);
	LA2: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(Tspecialword273003, whichpragma_316911_2616423590)(Tnode290802* n0) {
	Tspecialword273003 result0;
	Tnode290802* key0;
	result0 = (Tspecialword273003)0;
	{
		if (!((*n0).kind == ((Tnodekind290020) 34))) goto LA3;
		key0 = (*n0).kindU.S6.sons->data[((NI) 0)];
	}
	goto LA1;
	LA3: ;
	{
		key0 = n0;
	}
	LA1: ;
	{
		if (!((*key0).kind == ((Tnodekind290020) 2))) goto LA8;
		result0 = whichkeyword_273365_1391470768((*key0).kindU.S5.ident);
	}
	LA8: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_treesDatInit000)(void) {
}

