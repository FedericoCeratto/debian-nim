/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tnode265794 Tnode265794;
typedef struct Ttype265832 Ttype265832;
typedef struct Tlineinfo187336 Tlineinfo187336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym265826 Tsym265826;
typedef struct Tident195012 Tident195012;
typedef struct Tnodeseq265788 Tnodeseq265788;
typedef struct Tidobj195006 Tidobj195006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq265828 Ttypeseq265828;
typedef struct Tscope265820 Tscope265820;
typedef struct TY265927 TY265927;
typedef struct Tstrtable265798 Tstrtable265798;
typedef struct Tsymseq265796 Tsymseq265796;
typedef struct Tloc265808 Tloc265808;
typedef struct Ropeobj175006 Ropeobj175006;
typedef struct Tlib265812 Tlib265812;
typedef struct Cell47704 Cell47704;
typedef struct Cellseq47720 Cellseq47720;
typedef struct Gcheap50218 Gcheap50218;
typedef struct Gcstack50216 Gcstack50216;
typedef struct Memregion29886 Memregion29886;
typedef struct Smallchunk29840 Smallchunk29840;
typedef struct Llchunk29880 Llchunk29880;
typedef struct Bigchunk29842 Bigchunk29842;
typedef struct Intset29814 Intset29814;
typedef struct Trunk29810 Trunk29810;
typedef struct Avlnode29884 Avlnode29884;
typedef struct Gcstat50214 Gcstat50214;
typedef struct Cellset47716 Cellset47716;
typedef struct Pagedesc47712 Pagedesc47712;
typedef struct Tinstantiation265816 Tinstantiation265816;
typedef struct Tlistentry145010 Tlistentry145010;
typedef struct Basechunk29838 Basechunk29838;
typedef struct Freecell29830 Freecell29830;
typedef struct TY265917 TY265917;
struct  Tlineinfo187336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag265427Set;
typedef NU8 Tnodekind265020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode265794  {
Ttype265832* typ;
Tlineinfo187336 info;
Tnodeflag265427Set flags;
Tnodekind265020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym265826* sym;
} S4;
struct {Tident195012* ident;
} S5;
struct {Tnodeseq265788* sons;
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
struct  Tidobj195006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind265435;
struct  Tstrtable265798  {
NI counter;
Tsymseq265796* data;
};
typedef NU8 Tmagic265525;
typedef NU32 Tsymflag265184Set;
typedef NU32 Toption166009Set;
typedef NU8 Tlockind265800;
typedef NU8 Tstorageloc265804;
typedef NU16 Tlocflag265802Set;
struct  Tloc265808  {
Tlockind265800 k;
Tstorageloc265804 s;
Tlocflag265802Set flags;
Ttype265832* t;
Ropeobj175006* r;
Ropeobj175006* heaproot;
};
struct  Tsym265826  {
  Tidobj195006 Sup;
Tsymkind265435 kind;
union{
struct {Ttypeseq265828* typeinstcache;
Tscope265820* typscope;
} S1;
struct {TY265927* procinstcache;
Tsym265826* gcunsafetyreason;
} S2;
struct {TY265927* usedgenerics;
Tstrtable265798 tab;
} S3;
struct {Tsym265826* guard;
NI bitsize;
} S4;
} kindU;
Tmagic265525 magic;
Ttype265832* typ;
Tident195012* name;
Tlineinfo187336 info;
Tsym265826* owner;
Tsymflag265184Set flags;
Tnode265794* ast;
Toption166009Set options;
NI position;
NI offset;
Tloc265808 loc;
Tlib265812* annex;
Tnode265794* constraint;
};
struct  Tident195012  {
  Tidobj195006 Sup;
NimStringDesc* s;
Tident195012* next;
NI h;
};
struct  Cell47704  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47720  {
NI len;
NI cap;
Cell47704** d;
};
typedef Smallchunk29840* TY29901[512];
typedef Trunk29810* Trunkbuckets29812[256];
struct  Intset29814  {
Trunkbuckets29812 data;
};
struct  Memregion29886  {
NI minlargeobj;
NI maxlargeobj;
TY29901 freesmallchunks;
Llchunk29880* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29842* freechunkslist;
Intset29814 chunkstarts;
Avlnode29884* root;
Avlnode29884* deleted;
Avlnode29884* last;
Avlnode29884* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47716  {
NI counter;
NI max;
Pagedesc47712* head;
Pagedesc47712** data;
};
struct  Gcheap50218  {
Gcstack50216* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47720 zct;
Cellseq47720 decstack;
Cellseq47720 tempstack;
NI recgclock;
Memregion29886 region;
Gcstat50214 stat;
Cellset47716 marked;
Cellseq47720 additionalroots;
};
typedef NU64 Ttypekind265244Set;
typedef NU8 Ttypekind265244;
typedef NU8 Tcallingconvention265002;
typedef NU32 Ttypeflag265431Set;
struct  Ttype265832  {
  Tidobj195006 Sup;
Ttypekind265244 kind;
Tcallingconvention265002 callconv;
Ttypeflag265431Set flags;
Ttypeseq265828* sons;
Tnode265794* n;
Tsym265826* owner;
Tsym265826* sym;
Tsym265826* destructor;
Tsym265826* deepcopy;
Tsym265826* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc265808 loc;
};
typedef NU8 Tnodeflag265427;
typedef NU16 Tspecialword249004;
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tscope265820  {
NI depthlevel;
Tstrtable265798 symbols;
Tscope265820* parent;
};
struct  Ropeobj175006  {
  TNimObject Sup;
Ropeobj175006* left;
Ropeobj175006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry145010  {
  TNimObject Sup;
Tlistentry145010* prev;
Tlistentry145010* next;
};
typedef NU8 Tlibkind265810;
struct  Tlib265812  {
  Tlistentry145010 Sup;
Tlibkind265810 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj175006* name;
Tnode265794* path;
};
struct  Gcstack50216  {
Gcstack50216* prev;
Gcstack50216* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29838  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29840  {
  Basechunk29838 Sup;
Smallchunk29840* next;
Smallchunk29840* prev;
Freecell29830* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29880  {
NI size;
NI acc;
Llchunk29880* next;
};
struct  Bigchunk29842  {
  Basechunk29838 Sup;
Bigchunk29842* next;
Bigchunk29842* prev;
NI align;
NF data;
};
typedef NI TY29819[8];
struct  Trunk29810  {
Trunk29810* next;
NI key;
TY29819 bits;
};
typedef Avlnode29884* TY29891[2];
struct  Avlnode29884  {
TY29891 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47712  {
Pagedesc47712* next;
NI key;
TY29819 bits;
};
struct  Tinstantiation265816  {
Tsym265826* sym;
Ttypeseq265828* concretetypes;
TY265917* usedby;
NI compilesid;
};
struct  Freecell29830  {
Freecell29830* next;
NI zerofield;
};
struct Tnodeseq265788 {
  TGenericSeq Sup;
  Tnode265794* data[SEQ_DECL_SIZE];
};
struct Ttypeseq265828 {
  TGenericSeq Sup;
  Ttype265832* data[SEQ_DECL_SIZE];
};
struct TY265927 {
  TGenericSeq Sup;
  Tinstantiation265816* data[SEQ_DECL_SIZE];
};
struct Tsymseq265796 {
  TGenericSeq Sup;
  Tsym265826* data[SEQ_DECL_SIZE];
};
struct TY265917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NI, sonslen_268351_850551059)(Tnode265794* n0);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_291099_2616423590)(Tnode265794* a0, Tnode265794* b0, NIM_BOOL strictsymequality0);
N_NIMCALL(Tnode265794*, newnodei_267248_850551059)(Tnodekind265020 kind0, Tlineinfo187336 info0);
N_NIMCALL(NIM_BOOL, cyclictreeaux_291044_2616423590)(Tnode265794* n0, Tnode265794* s0);
N_NIMCALL(NIM_BOOL, hasson_291007_2616423590)(Tnode265794* father0, Tnode265794* son0);
N_NIMCALL(void, addson_267807_850551059)(Tnode265794* father0, Tnode265794* son0);
N_NIMCALL(void, delson_269495_850551059)(Tnode265794* father0, NI idx0);
N_NIMCALL(void, unneststmts_291550_2616423590)(Tnode265794* n0, Tnode265794* result0);
static N_INLINE(NI, len_266080_850551059)(Tnode265794* n0);
N_NIMCALL(void, add_266135_850551059)(Tnode265794* father0, Tnode265794* son0);
N_NIMCALL(Tnode265794*, newnodei_267401_850551059)(Tnodekind265020 kind0, Tlineinfo187336 info0, NI children0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47704*, usrtocell_51840_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47704* c0);
N_NOINLINE(void, addzct_51817_1689653243)(Cellseq47720* s0, Cell47704* c0);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_291361_2616423590)(Tnode265794* n0);
N_NIMCALL(Ttype265832*, skiptypes_269113_850551059)(Ttype265832* t0, Ttypekind265244Set kinds0);
N_NIMCALL(Tspecialword249004, whichkeyword_249364_1391470768)(Tident195012* id0);
extern Gcheap50218 gch_50258_1689653243;

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

N_NIMCALL(NIM_BOOL, exprstructuralequivalent_291099_2616423590)(Tnode265794* a0, Tnode265794* b0, NIM_BOOL strictsymequality0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	result0 = NIM_FALSE;
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
		case ((Tnodekind265020) 3):
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
		case ((Tnodekind265020) 2):
		{
			result0 = ((*(*a0).kindU.S5.ident).Sup.id == (*(*b0).kindU.S5.ident).Sup.id);
		}
		break;
		case ((Tnodekind265020) 5) ... ((Tnodekind265020) 10):
		{
			result0 = ((*a0).kindU.S1.intval == (*b0).kindU.S1.intval);
		}
		break;
		case ((Tnodekind265020) 16) ... ((Tnodekind265020) 18):
		{
			result0 = ((*a0).kindU.S2.floatval == (*b0).kindU.S2.floatval);
		}
		break;
		case ((Tnodekind265020) 20) ... ((Tnodekind265020) 22):
		{
			result0 = eqStrings((*a0).kindU.S3.strval, (*b0).kindU.S3.strval);
		}
		break;
		case ((Tnodekind265020) 1):
		case ((Tnodekind265020) 23):
		case ((Tnodekind265020) 4):
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
				LOC26 = sonslen_268351_850551059(a0);
				LOC27 = (NI)0;
				LOC27 = sonslen_268351_850551059(b0);
				if (!(LOC26 == LOC27)) goto LA28;
				{
					NI i_291185_2616423590;
					NI HEX3Atmp_291189_2616423590;
					NI LOC31;
					NI res_291192_2616423590;
					i_291185_2616423590 = (NI)0;
					HEX3Atmp_291189_2616423590 = (NI)0;
					LOC31 = (NI)0;
					LOC31 = sonslen_268351_850551059(a0);
					HEX3Atmp_291189_2616423590 = (NI)(LOC31 - ((NI) 1));
					res_291192_2616423590 = ((NI) 0);
					{
						while (1) {
							if (!(res_291192_2616423590 <= HEX3Atmp_291189_2616423590)) goto LA33;
							i_291185_2616423590 = res_291192_2616423590;
							{
								NIM_BOOL LOC36;
								LOC36 = (NIM_BOOL)0;
								LOC36 = exprstructuralequivalent_291099_2616423590((*a0).kindU.S6.sons->data[i_291185_2616423590], (*b0).kindU.S6.sons->data[i_291185_2616423590], strictsymequality0);
								if (!!(LOC36)) goto LA37;
								goto BeforeRet;
							}
							LA37: ;
							res_291192_2616423590 += ((NI) 1);
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

N_NIMCALL(Tmagic265525, getmagic_291323_2616423590)(Tnode265794* op0) {
	Tmagic265525 result0;
	result0 = (Tmagic265525)0;
	switch ((*op0).kind) {
	case ((Tnodekind265020) 27):
	case ((Tnodekind265020) 29):
	case ((Tnodekind265020) 30):
	case ((Tnodekind265020) 31):
	case ((Tnodekind265020) 26):
	case ((Tnodekind265020) 28):
	case ((Tnodekind265020) 32):
	{
		switch ((*(*op0).kindU.S6.sons->data[((NI) 0)]).kind) {
		case ((Tnodekind265020) 3):
		{
			result0 = (*(*(*op0).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym).magic;
		}
		break;
		default:
		{
			result0 = ((Tmagic265525) 0);
		}
		break;
		}
	}
	break;
	default:
	{
		result0 = ((Tmagic265525) 0);
	}
	break;
	}
	return result0;
}

N_NIMCALL(NIM_BOOL, hasson_291007_2616423590)(Tnode265794* father0, Tnode265794* son0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		NI i_291023_2616423590;
		NI HEX3Atmp_291037_2616423590;
		NI LOC2;
		NI res_291040_2616423590;
		i_291023_2616423590 = (NI)0;
		HEX3Atmp_291037_2616423590 = (NI)0;
		LOC2 = (NI)0;
		LOC2 = sonslen_268351_850551059(father0);
		HEX3Atmp_291037_2616423590 = (NI)(LOC2 - ((NI) 1));
		res_291040_2616423590 = ((NI) 0);
		{
			while (1) {
				if (!(res_291040_2616423590 <= HEX3Atmp_291037_2616423590)) goto LA4;
				i_291023_2616423590 = res_291040_2616423590;
				{
					if (!((*father0).kindU.S6.sons->data[i_291023_2616423590] == son0)) goto LA7;
					result0 = NIM_TRUE;
					goto BeforeRet;
				}
				LA7: ;
				res_291040_2616423590 += ((NI) 1);
			} LA4: ;
		}
	}
	result0 = NIM_FALSE;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, cyclictreeaux_291044_2616423590)(Tnode265794* n0, Tnode265794* s0) {
	NIM_BOOL result0;
	NI m0;
{	result0 = (NIM_BOOL)0;
	{
		if (!(n0 == NIM_NIL)) goto LA3;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = hasson_291007_2616423590(s0, n0);
		if (!LOC7) goto LA8;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA8: ;
	m0 = sonslen_268351_850551059(s0);
	addson_267807_850551059(s0, n0);
	{
		if (!!(((*n0).kind >= ((Tnodekind265020) 1) && (*n0).kind <= ((Tnodekind265020) 23)))) goto LA12;
		{
			NI i_291084_2616423590;
			NI HEX3Atmp_291087_2616423590;
			NI LOC15;
			NI res_291090_2616423590;
			i_291084_2616423590 = (NI)0;
			HEX3Atmp_291087_2616423590 = (NI)0;
			LOC15 = (NI)0;
			LOC15 = sonslen_268351_850551059(n0);
			HEX3Atmp_291087_2616423590 = (NI)(LOC15 - ((NI) 1));
			res_291090_2616423590 = ((NI) 0);
			{
				while (1) {
					if (!(res_291090_2616423590 <= HEX3Atmp_291087_2616423590)) goto LA17;
					i_291084_2616423590 = res_291090_2616423590;
					{
						NIM_BOOL LOC20;
						LOC20 = (NIM_BOOL)0;
						LOC20 = cyclictreeaux_291044_2616423590((*n0).kindU.S6.sons->data[i_291084_2616423590], s0);
						if (!LOC20) goto LA21;
						result0 = NIM_TRUE;
						goto BeforeRet;
					}
					LA21: ;
					res_291090_2616423590 += ((NI) 1);
				} LA17: ;
			}
		}
	}
	LA12: ;
	result0 = NIM_FALSE;
	delson_269495_850551059(s0, m0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, cyclictree_291094_2616423590)(Tnode265794* n0) {
	NIM_BOOL result0;
	Tnode265794* s0;
	result0 = (NIM_BOOL)0;
	s0 = newnodei_267248_850551059(((Tnodekind265020) 1), (*n0).info);
	result0 = cyclictreeaux_291044_2616423590(n0, s0);
	return result0;
}

static N_INLINE(NI, len_266080_850551059)(Tnode265794* n0) {
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

N_NIMCALL(void, unneststmts_291550_2616423590)(Tnode265794* n0, Tnode265794* result0) {
	{
		if (!((*n0).kind == ((Tnodekind265020) 115))) goto LA3;
		{
			Tnode265794* x_291563_2616423590;
			x_291563_2616423590 = (Tnode265794*)0;
			{
				NI i_291580_2616423590;
				NI HEX3Atmp_291582_2616423590;
				NI LOC7;
				NI res_291584_2616423590;
				i_291580_2616423590 = (NI)0;
				HEX3Atmp_291582_2616423590 = (NI)0;
				LOC7 = (NI)0;
				LOC7 = len_266080_850551059(n0);
				HEX3Atmp_291582_2616423590 = (LOC7 - 1);
				res_291584_2616423590 = ((NI) 0);
				{
					while (1) {
						if (!(res_291584_2616423590 <= HEX3Atmp_291582_2616423590)) goto LA9;
						i_291580_2616423590 = res_291584_2616423590;
						x_291563_2616423590 = (*n0).kindU.S6.sons->data[i_291580_2616423590];
						unneststmts_291550_2616423590(x_291563_2616423590, result0);
						res_291584_2616423590 += ((NI) 1);
					} LA9: ;
				}
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		if (!!(((*n0).kind == ((Tnodekind265020) 125) || (*n0).kind == ((Tnodekind265020) 23)))) goto LA11;
		add_266135_850551059(result0, n0);
	}
	goto LA1;
	LA11: ;
	LA1: ;
}

N_NIMCALL(Tnode265794*, flattenstmts_291587_2616423590)(Tnode265794* n0) {
	Tnode265794* result0;
	result0 = (Tnode265794*)0;
	result0 = newnodei_267248_850551059(((Tnodekind265020) 115), (*n0).info);
	unneststmts_291550_2616423590(n0, result0);
	{
		NI LOC3;
		LOC3 = (NI)0;
		LOC3 = len_266080_850551059(result0);
		if (!(LOC3 == ((NI) 1))) goto LA4;
		result0 = (*result0).kindU.S6.sons->data[((NI) 0)];
	}
	LA4: ;
	return result0;
}

static N_INLINE(Cell47704*, usrtocell_51840_1689653243)(void* usr0) {
	Cell47704* result0;
	result0 = (Cell47704*)0;
	result0 = ((Cell47704*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47704))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47704* c0) {
	addzct_51817_1689653243((&gch_50258_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47704* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51840_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47704* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51840_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53001_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(Tnode265794*, extractrange_291593_2616423590)(Tnodekind265020 k0, Tnode265794* n0, NI a0, NI b0) {
	Tnode265794* result0;
	result0 = (Tnode265794*)0;
	result0 = newnodei_267401_850551059(k0, (*n0).info, (NI)((NI)(b0 - a0) + ((NI) 1)));
	{
		NI i_291609_2616423590;
		NI HEX3Atmp_291613_2616423590;
		NI res_291616_2616423590;
		i_291609_2616423590 = (NI)0;
		HEX3Atmp_291613_2616423590 = (NI)0;
		HEX3Atmp_291613_2616423590 = (NI)(b0 - a0);
		res_291616_2616423590 = ((NI) 0);
		{
			while (1) {
				if (!(res_291616_2616423590 <= HEX3Atmp_291613_2616423590)) goto LA3;
				i_291609_2616423590 = res_291616_2616423590;
				asgnRefNoCycle((void**) (&(*result0).kindU.S6.sons->data[i_291609_2616423590]), (*n0).kindU.S6.sons->data[(NI)(i_291609_2616423590 + a0)]);
				res_291616_2616423590 += ((NI) 1);
			} LA3: ;
		}
	}
	return result0;
}

N_NIMCALL(NIM_BOOL, isdeepconstexpr_291361_2616423590)(Tnode265794* n0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	switch ((*n0).kind) {
	case ((Tnodekind265020) 5) ... ((Tnodekind265020) 10):
	case ((Tnodekind265020) 20) ... ((Tnodekind265020) 22):
	case ((Tnodekind265020) 16) ... ((Tnodekind265020) 18):
	case ((Tnodekind265020) 23):
	{
		result0 = NIM_TRUE;
	}
	break;
	case ((Tnodekind265020) 33):
	case ((Tnodekind265020) 34):
	case ((Tnodekind265020) 58):
	case ((Tnodekind265020) 59):
	{
		result0 = isdeepconstexpr_291361_2616423590((*n0).kindU.S6.sons->data[((NI) 1)]);
	}
	break;
	case ((Tnodekind265020) 39):
	case ((Tnodekind265020) 41):
	case ((Tnodekind265020) 37):
	case ((Tnodekind265020) 38):
	case ((Tnodekind265020) 155):
	{
		NIM_BOOL LOC13;
		Ttype265832* LOC15;
		{
			NI i_291384_2616423590;
			NI HEX3Atmp_291405_2616423590;
			NI LOC5;
			NI res_291408_2616423590;
			i_291384_2616423590 = (NI)0;
			HEX3Atmp_291405_2616423590 = (NI)0;
			LOC5 = (NI)0;
			LOC5 = len_266080_850551059(n0);
			HEX3Atmp_291405_2616423590 = (LOC5 - 1);
			res_291408_2616423590 = ((NI) 0);
			{
				while (1) {
					if (!(res_291408_2616423590 <= HEX3Atmp_291405_2616423590)) goto LA7;
					i_291384_2616423590 = res_291408_2616423590;
					{
						NIM_BOOL LOC10;
						LOC10 = (NIM_BOOL)0;
						LOC10 = isdeepconstexpr_291361_2616423590((*n0).kindU.S6.sons->data[i_291384_2616423590]);
						if (!!(LOC10)) goto LA11;
						result0 = NIM_FALSE;
						goto BeforeRet;
					}
					LA11: ;
					res_291408_2616423590 += ((NI) 1);
				} LA7: ;
			}
		}
		LOC13 = (NIM_BOOL)0;
		LOC13 = (*n0).typ == 0;
		if (LOC13) goto LA14;
		LOC15 = (Ttype265832*)0;
		LOC15 = skiptypes_269113_850551059((*n0).typ, 10240);
		LOC13 = !(((*LOC15).kind == ((Ttypekind265244) 17)));
		LA14: ;
		result0 = LOC13;
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

N_NIMCALL(NIM_BOOL, isconstexpr_291336_2616423590)(Tnode265794* n0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = ((*n0).kind >= ((Tnodekind265020) 5) && (*n0).kind <= ((Tnodekind265020) 10) || (*n0).kind >= ((Tnodekind265020) 20) && (*n0).kind <= ((Tnodekind265020) 22) || (*n0).kind >= ((Tnodekind265020) 16) && (*n0).kind <= ((Tnodekind265020) 18) || (*n0).kind == ((Tnodekind265020) 23));
	if (LOC1) goto LA2;
	LOC1 = (((*n0).flags &(1U<<((NU)(((Tnodeflag265427) 4))&15U)))!=0);
	LA2: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(Tspecialword249004, whichpragma_291525_2616423590)(Tnode265794* n0) {
	Tspecialword249004 result0;
	Tnode265794* key0;
	result0 = (Tspecialword249004)0;
	{
		if (!((*n0).kind == ((Tnodekind265020) 34))) goto LA3;
		key0 = (*n0).kindU.S6.sons->data[((NI) 0)];
	}
	goto LA1;
	LA3: ;
	{
		key0 = n0;
	}
	LA1: ;
	{
		if (!((*key0).kind == ((Tnodekind265020) 2))) goto LA8;
		result0 = whichkeyword_249364_1391470768((*key0).kindU.S5.ident);
	}
	LA8: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_treesDatInit000)(void) {
}

