/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Tnode214790 Tnode214790;
typedef struct Ttype214828 Ttype214828;
typedef struct Tlineinfo182337 Tlineinfo182337;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym214822 Tsym214822;
typedef struct Tident189012 Tident189012;
typedef struct Tnodeseq214784 Tnodeseq214784;
typedef struct Tbitset259006 Tbitset259006;
typedef struct Tidobj189006 Tidobj189006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq214824 Ttypeseq214824;
typedef struct Tloc214804 Tloc214804;
typedef struct Ropeobj169006 Ropeobj169006;
typedef struct Cell47505 Cell47505;
typedef struct Cellseq47521 Cellseq47521;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47517 Cellset47517;
typedef struct Pagedesc47513 Pagedesc47513;
typedef struct Memregion29687 Memregion29687;
typedef struct Smallchunk29639 Smallchunk29639;
typedef struct Llchunk29681 Llchunk29681;
typedef struct Bigchunk29641 Bigchunk29641;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29685 Avlnode29685;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Tscope214816 Tscope214816;
typedef struct TY214925 TY214925;
typedef struct Tstrtable214794 Tstrtable214794;
typedef struct Tsymseq214792 Tsymseq214792;
typedef struct Tlib214808 Tlib214808;
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
typedef struct Tinstantiation214812 Tinstantiation214812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct TY214913 TY214913;
struct  Tlineinfo182337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode214790  {
Ttype214828* typ;
Tlineinfo182337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym214822* sym;
} S4;
struct {Tident189012* ident;
} S5;
struct {Tnodeseq214784* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj189006  {
  TNimObject Sup;
NI id;
};
struct  Tloc214804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype214828* t;
Ropeobj169006* r;
Ropeobj169006* heaproot;
};
struct  Ttype214828  {
  Tidobj189006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq214824* sons;
Tnode214790* n;
Tsym214822* owner;
Tsym214822* sym;
Tsym214822* destructor;
Tsym214822* deepcopy;
Tsym214822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc214804 loc;
};
struct  Cell47505  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47521  {
NI len;
NI cap;
Cell47505** d;
};
struct  Cellset47517  {
NI counter;
NI max;
Pagedesc47513* head;
Pagedesc47513** data;
};
typedef Smallchunk29639* TY29702[512];
typedef Trunk29610* Trunkbuckets29612[256];
struct  Intset29614  {
Trunkbuckets29612 data;
};
struct  Memregion29687  {
NI minlargeobj;
NI maxlargeobj;
TY29702 freesmallchunks;
Llchunk29681* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29641* freechunkslist;
Intset29614 chunkstarts;
Avlnode29685* root;
Avlnode29685* deleted;
Avlnode29685* last;
Avlnode29685* freeavlnodes;
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
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47521 zct;
Cellseq47521 decstack;
Cellset47517 cycleroots;
Cellseq47521 tempstack;
NI recgclock;
Memregion29687 region;
Gcstat49814 stat;
};
struct  Tstrtable214794  {
NI counter;
Tsymseq214792* data;
};
struct  Tsym214822  {
  Tidobj189006 Sup;
NU8 kind;
union{
struct {Ttypeseq214824* typeinstcache;
Tscope214816* typscope;
} S1;
struct {TY214925* procinstcache;
Tsym214822* gcunsafetyreason;
} S2;
struct {TY214925* usedgenerics;
Tstrtable214794 tab;
} S3;
struct {Tsym214822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype214828* typ;
Tident189012* name;
Tlineinfo182337 info;
Tsym214822* owner;
NU32 flags;
Tnode214790* ast;
NU32 options;
NI position;
NI offset;
Tloc214804 loc;
Tlib214808* annex;
Tnode214790* constraint;
};
struct  Tident189012  {
  Tidobj189006 Sup;
NimStringDesc* s;
Tident189012* next;
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj169006  {
  TNimObject Sup;
Ropeobj169006* left;
Ropeobj169006* right;
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
typedef NI TY29618[16];
struct  Pagedesc47513  {
Pagedesc47513* next;
NI key;
TY29618 bits;
};
struct  Basechunk29637  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29639  {
  Basechunk29637 Sup;
Smallchunk29639* next;
Smallchunk29639* prev;
Freecell29629* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29681  {
NI size;
NI acc;
Llchunk29681* next;
};
struct  Bigchunk29641  {
  Basechunk29637 Sup;
Bigchunk29641* next;
Bigchunk29641* prev;
NI align;
NF data;
};
struct  Trunk29610  {
Trunk29610* next;
NI key;
TY29618 bits;
};
typedef Avlnode29685* TY29692[2];
struct  Avlnode29685  {
TY29692 link;
NI key;
NI upperbound;
NI level;
};
struct  Tscope214816  {
NI depthlevel;
Tstrtable214794 symbols;
Tnodeseq214784* usingsyms;
Tscope214816* parent;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlib214808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj169006* name;
Tnode214790* path;
};
struct  Freecell29629  {
Freecell29629* next;
NI zerofield;
};
struct  Tinstantiation214812  {
Tsym214822* sym;
Ttypeseq214824* concretetypes;
TY214913* usedby;
NI compilesid;
};
struct Tbitset259006 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
struct Tnodeseq214784 {
  TGenericSeq Sup;
  Tnode214790* data[SEQ_DECL_SIZE];
};
struct Ttypeseq214824 {
  TGenericSeq Sup;
  Ttype214828* data[SEQ_DECL_SIZE];
};
struct TY214925 {
  TGenericSeq Sup;
  Tinstantiation214812* data[SEQ_DECL_SIZE];
};
struct Tsymseq214792 {
  TGenericSeq Sup;
  Tsym214822* data[SEQ_DECL_SIZE];
};
struct TY214913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, internalerror_187100)(Tlineinfo182337 info, NimStringDesc* errmsg);
N_NIMCALL(NI, sonslen_217351)(Tnode214790* n);
N_NIMCALL(NIM_BOOL, levalue_221233)(Tnode214790* a, Tnode214790* b);
N_NIMCALL(NIM_BOOL, samevalue_221189)(Tnode214790* a, Tnode214790* b);
N_NIMCALL(void, tobitset_260001)(Tnode214790* s, Tbitset259006** b);
N_NIMCALL(NI64, firstord_240001)(Ttype214828* t);
N_NIMCALL(void, bitsetinit_259009)(Tbitset259006** b, NI length);
N_NIMCALL(NI64, getsize_240124)(Ttype214828* typ);
N_NIMCALL(NI64, getordvalue_240118)(Tnode214790* n);
N_NIMCALL(void, bitsetincl_259034)(Tbitset259006** x, NI64 elem);
N_NIMCALL(void, bitsetdiff_259019)(Tbitset259006** x, Tbitset259006* y);
N_NIMCALL(Tnode214790*, totreeset_260251)(Tbitset259006* s, Ttype214828* settype, Tlineinfo182337 info);
N_NIMCALL(Tnode214790*, newnodei_216248)(NU8 kind, Tlineinfo182337 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(NIM_BOOL, bitsetin_259044)(Tbitset259006* x, NI64 e);
N_NIMCALL(Tnode214790*, newinttypenode_215666)(NU8 kind, NI64 intval, Ttype214828* typ);
N_NIMCALL(void, addson_216807)(Tnode214790* father, Tnode214790* son);
N_NIMCALL(NIM_BOOL, bitsetcontains_259052)(Tbitset259006* x, Tbitset259006* y);
N_NIMCALL(NIM_BOOL, bitsetequals_259048)(Tbitset259006* x, Tbitset259006* y);
N_NIMCALL(void, bitsetintersect_259029)(Tbitset259006** x, Tbitset259006* y);
N_NIMCALL(void, bitsetunion_259014)(Tbitset259006** x, Tbitset259006* y);
N_NIMCALL(void, bitsetsymdiff_259024)(Tbitset259006** x, Tbitset259006* y);
STRING_LITERAL(TMP2964, "inSet", 5);
extern Gcheap49818 gch_49859;

N_NIMCALL(NIM_BOOL, inset_260010)(Tnode214790* s, Tnode214790* elem) {
	NIM_BOOL result;
{	result = 0;
	{
		if (!!(((*s).kind == ((NU8) 39)))) goto LA3;
		internalerror_187100((*s).info, ((NimStringDesc*) &TMP2964));
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_260078;
		NI HEX3Atmp_260095;
		NI LOC6;
		NI res_260098;
		i_260078 = 0;
		HEX3Atmp_260095 = 0;
		LOC6 = 0;
		LOC6 = sonslen_217351(s);
		HEX3Atmp_260095 = (NI)(LOC6 - ((NI) 1));
		res_260098 = ((NI) 0);
		{
			while (1) {
				if (!(res_260098 <= HEX3Atmp_260095)) goto LA8;
				i_260078 = res_260098;
				{
					if (!((*(*s).kindU.S6.sons->data[i_260078]).kind == ((NU8) 44))) goto LA11;
					{
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = levalue_221233((*(*s).kindU.S6.sons->data[i_260078]).kindU.S6.sons->data[((NI) 0)], elem);
						if (!(LOC15)) goto LA16;
						LOC15 = levalue_221233(elem, (*(*s).kindU.S6.sons->data[i_260078]).kindU.S6.sons->data[((NI) 1)]);
						LA16: ;
						if (!LOC15) goto LA17;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA17: ;
				}
				goto LA9;
				LA11: ;
				{
					{
						NIM_BOOL LOC22;
						LOC22 = 0;
						LOC22 = samevalue_221189((*s).kindU.S6.sons->data[i_260078], elem);
						if (!LOC22) goto LA23;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA23: ;
				}
				LA9: ;
				res_260098 += ((NI) 1);
			} LA8: ;
		}
	}
	result = NIM_FALSE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, tobitset_260001)(Tnode214790* s, Tbitset259006** b) {
	NI64 first;
	NI64 j;
	NI64 LOC1;
	first = 0;
	j = 0;
	first = firstord_240001((*(*s).typ).sons->data[((NI) 0)]);
	LOC1 = 0;
	LOC1 = getsize_240124((*s).typ);
	bitsetinit_259009(b, ((NI) (LOC1)));
	{
		NI i_260215;
		NI HEX3Atmp_260244;
		NI LOC3;
		NI res_260247;
		i_260215 = 0;
		HEX3Atmp_260244 = 0;
		LOC3 = 0;
		LOC3 = sonslen_217351(s);
		HEX3Atmp_260244 = (NI)(LOC3 - ((NI) 1));
		res_260247 = ((NI) 0);
		{
			while (1) {
				if (!(res_260247 <= HEX3Atmp_260244)) goto LA5;
				i_260215 = res_260247;
				{
					if (!((*(*s).kindU.S6.sons->data[i_260215]).kind == ((NU8) 44))) goto LA8;
					j = getordvalue_240118((*(*s).kindU.S6.sons->data[i_260215]).kindU.S6.sons->data[((NI) 0)]);
					{
						while (1) {
							NI64 LOC12;
							LOC12 = 0;
							LOC12 = getordvalue_240118((*(*s).kindU.S6.sons->data[i_260215]).kindU.S6.sons->data[((NI) 1)]);
							if (!(j <= LOC12)) goto LA11;
							bitsetincl_259034(b, (NI64)(j - first));
							j += ((NI) 1);
						} LA11: ;
					}
				}
				goto LA6;
				LA8: ;
				{
					NI64 LOC14;
					LOC14 = 0;
					LOC14 = getordvalue_240118((*s).kindU.S6.sons->data[i_260215]);
					bitsetincl_259034(b, (NI64)(LOC14 - first));
				}
				LA6: ;
				res_260247 += ((NI) 1);
			} LA5: ;
		}
	}
}

static N_INLINE(Cell47505*, usrtocell_51440)(void* usr) {
	Cell47505* result;
	result = 0;
	result = ((Cell47505*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell47505))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47505* c) {
	addzct_51417((&gch_49859.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47505* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47505* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51440((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53001(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Tnode214790*, totreeset_260251)(Tbitset259006* s, Ttype214828* settype, Tlineinfo182337 info) {
	Tnode214790* result;
	NI64 a;
	NI64 b;
	NI64 e;
	NI64 first;
	Ttype214828* elemtype;
	Tnode214790* n;
	result = 0;
	a = 0;
	b = 0;
	e = 0;
	first = 0;
	elemtype = 0;
	n = 0;
	elemtype = (*settype).sons->data[((NI) 0)];
	first = firstord_240001(elemtype);
	result = newnodei_216248(((NU8) 39), info);
	asgnRefNoCycle((void**) (&(*result).typ), settype);
	(*result).info = info;
	e = IL64(0);
	{
		while (1) {
			if (!(e < ((NI64) ((NI)((s ? s->Sup.len : 0) * ((NI) 8)))))) goto LA2;
			{
				NIM_BOOL LOC5;
				Tnode214790* aa;
				LOC5 = 0;
				LOC5 = bitsetin_259044(s, e);
				if (!LOC5) goto LA6;
				a = e;
				b = e;
				{
					while (1) {
						b += ((NI) 1);
						{
							NIM_BOOL LOC12;
							NIM_BOOL LOC14;
							LOC12 = 0;
							LOC12 = (((NI64) ((NI)((s ? s->Sup.len : 0) * ((NI) 8)))) <= b);
							if (LOC12) goto LA13;
							LOC14 = 0;
							LOC14 = bitsetin_259044(s, b);
							LOC12 = !(LOC14);
							LA13: ;
							if (!LOC12) goto LA15;
							goto LA8;
						}
						LA15: ;
					}
				} LA8: ;
				b -= ((NI) 1);
				aa = newinttypenode_215666(((NU8) 6), (NI64)(a + first), elemtype);
				(*aa).info = info;
				{
					if (!(a == b)) goto LA19;
					addson_216807(result, aa);
				}
				goto LA17;
				LA19: ;
				{
					Tnode214790* bb;
					n = newnodei_216248(((NU8) 44), info);
					asgnRefNoCycle((void**) (&(*n).typ), elemtype);
					addson_216807(n, aa);
					bb = newinttypenode_215666(((NU8) 6), (NI64)(b + first), elemtype);
					(*bb).info = info;
					addson_216807(n, bb);
					addson_216807(result, n);
				}
				LA17: ;
				e = b;
			}
			LA6: ;
			e += ((NI) 1);
		} LA2: ;
	}
	return result;
}

N_NIMCALL(Tnode214790*, diffsets_260030)(Tnode214790* a, Tnode214790* b) {
	Tnode214790* result;
	Tbitset259006* x;
	Tbitset259006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_260001(a, (&x));
	tobitset_260001(b, (&y));
	bitsetdiff_259019((&x), y);
	result = totreeset_260251(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(NI64, cardset_260050)(Tnode214790* s) {
	NI64 result;
	result = 0;
	result = IL64(0);
	{
		NI i_260434;
		NI HEX3Atmp_260459;
		NI LOC2;
		NI res_260462;
		i_260434 = 0;
		HEX3Atmp_260459 = 0;
		LOC2 = 0;
		LOC2 = sonslen_217351(s);
		HEX3Atmp_260459 = (NI)(LOC2 - ((NI) 1));
		res_260462 = ((NI) 0);
		{
			while (1) {
				if (!(res_260462 <= HEX3Atmp_260459)) goto LA4;
				i_260434 = res_260462;
				{
					NI64 LOC9;
					NI64 LOC10;
					if (!((*(*s).kindU.S6.sons->data[i_260434]).kind == ((NU8) 44))) goto LA7;
					LOC9 = 0;
					LOC9 = getordvalue_240118((*(*s).kindU.S6.sons->data[i_260434]).kindU.S6.sons->data[((NI) 1)]);
					LOC10 = 0;
					LOC10 = getordvalue_240118((*(*s).kindU.S6.sons->data[i_260434]).kindU.S6.sons->data[((NI) 0)]);
					result = (NI64)((NI64)((NI64)(result + LOC9) - LOC10) + IL64(1));
				}
				goto LA5;
				LA7: ;
				{
					result += ((NI) 1);
				}
				LA5: ;
				res_260462 += ((NI) 1);
			} LA4: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, containssets_260042)(Tnode214790* a, Tnode214790* b) {
	NIM_BOOL result;
	Tbitset259006* x;
	Tbitset259006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_260001(a, (&x));
	tobitset_260001(b, (&y));
	result = bitsetcontains_259052(x, y);
	return result;
}

N_NIMCALL(NIM_BOOL, equalsets_260046)(Tnode214790* a, Tnode214790* b) {
	NIM_BOOL result;
	Tbitset259006* x;
	Tbitset259006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_260001(a, (&x));
	tobitset_260001(b, (&y));
	result = bitsetequals_259048(x, y);
	return result;
}

N_NIMCALL(Tnode214790*, intersectsets_260034)(Tnode214790* a, Tnode214790* b) {
	Tnode214790* result;
	Tbitset259006* x;
	Tbitset259006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_260001(a, (&x));
	tobitset_260001(b, (&y));
	bitsetintersect_259029((&x), y);
	result = totreeset_260251(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(Tnode214790*, unionsets_260026)(Tnode214790* a, Tnode214790* b) {
	Tnode214790* result;
	Tbitset259006* x;
	Tbitset259006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_260001(a, (&x));
	tobitset_260001(b, (&y));
	bitsetunion_259014((&x), y);
	result = totreeset_260251(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(Tnode214790*, symdiffsets_260038)(Tnode214790* a, Tnode214790* b) {
	Tnode214790* result;
	Tbitset259006* x;
	Tbitset259006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_260001(a, (&x));
	tobitset_260001(b, (&y));
	bitsetsymdiff_259024((&x), y);
	result = totreeset_260251(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(NIM_BOOL, overlap_260006)(Tnode214790* a, Tnode214790* b) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*a).kind == ((NU8) 44))) goto LA3;
		{
			NIM_BOOL LOC9;
			if (!((*b).kind == ((NU8) 44))) goto LA7;
			LOC9 = 0;
			LOC9 = levalue_221233((*a).kindU.S6.sons->data[((NI) 0)], (*b).kindU.S6.sons->data[((NI) 1)]);
			if (!(LOC9)) goto LA10;
			LOC9 = levalue_221233((*b).kindU.S6.sons->data[((NI) 0)], (*a).kindU.S6.sons->data[((NI) 1)]);
			LA10: ;
			result = LOC9;
		}
		goto LA5;
		LA7: ;
		{
			NIM_BOOL LOC12;
			LOC12 = 0;
			LOC12 = levalue_221233((*a).kindU.S6.sons->data[((NI) 0)], b);
			if (!(LOC12)) goto LA13;
			LOC12 = levalue_221233(b, (*a).kindU.S6.sons->data[((NI) 1)]);
			LA13: ;
			result = LOC12;
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC19;
			if (!((*b).kind == ((NU8) 44))) goto LA17;
			LOC19 = 0;
			LOC19 = levalue_221233((*b).kindU.S6.sons->data[((NI) 0)], a);
			if (!(LOC19)) goto LA20;
			LOC19 = levalue_221233(a, (*b).kindU.S6.sons->data[((NI) 1)]);
			LA20: ;
			result = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			result = samevalue_221189(a, b);
		}
		LA15: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tnode214790*, complement_260392)(Tnode214790* a) {
	Tnode214790* result;
	Tbitset259006* x;
	result = 0;
	x = 0;
	tobitset_260001(a, (&x));
	{
		NI i_260409;
		NI HEX3Atmp_260412;
		NI res_260415;
		i_260409 = 0;
		HEX3Atmp_260412 = 0;
		HEX3Atmp_260412 = (x ? (x->Sup.len-1) : -1);
		res_260415 = ((NI) 0);
		{
			while (1) {
				if (!(res_260415 <= HEX3Atmp_260412)) goto LA3;
				i_260409 = res_260415;
				x->data[i_260409] = (NI8)((NU8) ~(x->data[i_260409]));
				res_260415 += ((NI) 1);
			} LA3: ;
		}
	}
	result = totreeset_260251(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(NIM_BOOL, emptyrange_260019)(Tnode214790* a, Tnode214790* b) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = levalue_221233(a, b);
	result = !(LOC1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsDatInit000)(void) {
}

