/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct Tnode213790 Tnode213790;
typedef struct Ttype213828 Ttype213828;
typedef struct Tlineinfo181337 Tlineinfo181337;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym213822 Tsym213822;
typedef struct Tident188012 Tident188012;
typedef struct Tnodeseq213784 Tnodeseq213784;
typedef struct Tbitset258006 Tbitset258006;
typedef struct Tidobj188006 Tidobj188006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq213824 Ttypeseq213824;
typedef struct Tloc213804 Tloc213804;
typedef struct Ropeobj168006 Ropeobj168006;
typedef struct Cell47705 Cell47705;
typedef struct Cellseq47721 Cellseq47721;
typedef struct Gcheap50018 Gcheap50018;
typedef struct Gcstack50016 Gcstack50016;
typedef struct Cellset47717 Cellset47717;
typedef struct Pagedesc47713 Pagedesc47713;
typedef struct Memregion29888 Memregion29888;
typedef struct Smallchunk29840 Smallchunk29840;
typedef struct Llchunk29882 Llchunk29882;
typedef struct Bigchunk29842 Bigchunk29842;
typedef struct Intset29814 Intset29814;
typedef struct Trunk29810 Trunk29810;
typedef struct Avlnode29886 Avlnode29886;
typedef struct Gcstat50014 Gcstat50014;
typedef struct Tscope213816 Tscope213816;
typedef struct TY213925 TY213925;
typedef struct Tstrtable213794 Tstrtable213794;
typedef struct Tsymseq213792 Tsymseq213792;
typedef struct Tlib213808 Tlib213808;
typedef struct Basechunk29838 Basechunk29838;
typedef struct Freecell29830 Freecell29830;
typedef struct Tinstantiation213812 Tinstantiation213812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct TY213913 TY213913;
struct  Tlineinfo181337  {
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
struct  Tnode213790  {
Ttype213828* typ;
Tlineinfo181337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym213822* sym;
} S4;
struct {Tident188012* ident;
} S5;
struct {Tnodeseq213784* sons;
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
struct  Tidobj188006  {
  TNimObject Sup;
NI id;
};
struct  Tloc213804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype213828* t;
Ropeobj168006* r;
Ropeobj168006* heaproot;
};
struct  Ttype213828  {
  Tidobj188006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq213824* sons;
Tnode213790* n;
Tsym213822* owner;
Tsym213822* sym;
Tsym213822* destructor;
Tsym213822* deepcopy;
Tsym213822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc213804 loc;
};
struct  Cell47705  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47721  {
NI len;
NI cap;
Cell47705** d;
};
struct  Cellset47717  {
NI counter;
NI max;
Pagedesc47713* head;
Pagedesc47713** data;
};
typedef Smallchunk29840* TY29903[512];
typedef Trunk29810* Trunkbuckets29812[256];
struct  Intset29814  {
Trunkbuckets29812 data;
};
struct  Memregion29888  {
NI minlargeobj;
NI maxlargeobj;
TY29903 freesmallchunks;
Llchunk29882* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29842* freechunkslist;
Intset29814 chunkstarts;
Avlnode29886* root;
Avlnode29886* deleted;
Avlnode29886* last;
Avlnode29886* freeavlnodes;
};
struct  Gcstat50014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap50018  {
Gcstack50016* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47721 zct;
Cellseq47721 decstack;
Cellset47717 cycleroots;
Cellseq47721 tempstack;
NI recgclock;
Memregion29888 region;
Gcstat50014 stat;
};
struct  Tstrtable213794  {
NI counter;
Tsymseq213792* data;
};
struct  Tsym213822  {
  Tidobj188006 Sup;
NU8 kind;
union{
struct {Ttypeseq213824* typeinstcache;
Tscope213816* typscope;
} S1;
struct {TY213925* procinstcache;
Tsym213822* gcunsafetyreason;
} S2;
struct {TY213925* usedgenerics;
Tstrtable213794 tab;
} S3;
struct {Tsym213822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype213828* typ;
Tident188012* name;
Tlineinfo181337 info;
Tsym213822* owner;
NU32 flags;
Tnode213790* ast;
NU32 options;
NI position;
NI offset;
Tloc213804 loc;
Tlib213808* annex;
Tnode213790* constraint;
};
struct  Tident188012  {
  Tidobj188006 Sup;
NimStringDesc* s;
Tident188012* next;
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
struct  Ropeobj168006  {
  TNimObject Sup;
Ropeobj168006* left;
Ropeobj168006* right;
NI length;
NimStringDesc* data;
};
struct  Gcstack50016  {
Gcstack50016* prev;
Gcstack50016* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29819[8];
struct  Pagedesc47713  {
Pagedesc47713* next;
NI key;
TY29819 bits;
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
struct  Llchunk29882  {
NI size;
NI acc;
Llchunk29882* next;
};
struct  Bigchunk29842  {
  Basechunk29838 Sup;
Bigchunk29842* next;
Bigchunk29842* prev;
NI align;
NF data;
};
struct  Trunk29810  {
Trunk29810* next;
NI key;
TY29819 bits;
};
typedef Avlnode29886* TY29893[2];
struct  Avlnode29886  {
TY29893 link;
NI key;
NI upperbound;
NI level;
};
struct  Tscope213816  {
NI depthlevel;
Tstrtable213794 symbols;
Tnodeseq213784* usingsyms;
Tscope213816* parent;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlib213808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj168006* name;
Tnode213790* path;
};
struct  Freecell29830  {
Freecell29830* next;
NI zerofield;
};
struct  Tinstantiation213812  {
Tsym213822* sym;
Ttypeseq213824* concretetypes;
TY213913* usedby;
NI compilesid;
};
struct Tbitset258006 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
struct Tnodeseq213784 {
  TGenericSeq Sup;
  Tnode213790* data[SEQ_DECL_SIZE];
};
struct Ttypeseq213824 {
  TGenericSeq Sup;
  Ttype213828* data[SEQ_DECL_SIZE];
};
struct TY213925 {
  TGenericSeq Sup;
  Tinstantiation213812* data[SEQ_DECL_SIZE];
};
struct Tsymseq213792 {
  TGenericSeq Sup;
  Tsym213822* data[SEQ_DECL_SIZE];
};
struct TY213913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, internalerror_186100)(Tlineinfo181337 info, NimStringDesc* errmsg);
N_NIMCALL(NI, sonslen_216351)(Tnode213790* n);
N_NIMCALL(NIM_BOOL, levalue_220233)(Tnode213790* a, Tnode213790* b);
N_NIMCALL(NIM_BOOL, samevalue_220189)(Tnode213790* a, Tnode213790* b);
N_NIMCALL(void, tobitset_259001)(Tnode213790* s, Tbitset258006** b);
N_NIMCALL(NI64, firstord_239001)(Ttype213828* t);
N_NIMCALL(void, bitsetinit_258009)(Tbitset258006** b, NI length);
N_NIMCALL(NI64, getsize_239124)(Ttype213828* typ);
N_NIMCALL(NI64, getordvalue_239118)(Tnode213790* n);
N_NIMCALL(void, bitsetincl_258034)(Tbitset258006** x, NI64 elem);
N_NIMCALL(void, bitsetdiff_258019)(Tbitset258006** x, Tbitset258006* y);
N_NIMCALL(Tnode213790*, totreeset_259252)(Tbitset258006* s, Ttype213828* settype, Tlineinfo181337 info);
N_NIMCALL(Tnode213790*, newnodei_215248)(NU8 kind, Tlineinfo181337 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47705*, usrtocell_51640)(void* usr);
static N_INLINE(void, rtladdzct_53201)(Cell47705* c);
N_NOINLINE(void, addzct_51617)(Cellseq47721* s, Cell47705* c);
N_NIMCALL(NIM_BOOL, bitsetin_258044)(Tbitset258006* x, NI64 e);
N_NIMCALL(Tnode213790*, newinttypenode_214665)(NU8 kind, NI64 intval, Ttype213828* typ);
N_NIMCALL(void, addson_215807)(Tnode213790* father, Tnode213790* son);
N_NIMCALL(NIM_BOOL, bitsetcontains_258052)(Tbitset258006* x, Tbitset258006* y);
N_NIMCALL(NIM_BOOL, bitsetequals_258048)(Tbitset258006* x, Tbitset258006* y);
N_NIMCALL(void, bitsetintersect_258029)(Tbitset258006** x, Tbitset258006* y);
N_NIMCALL(void, bitsetunion_258014)(Tbitset258006** x, Tbitset258006* y);
N_NIMCALL(void, bitsetsymdiff_258024)(Tbitset258006** x, Tbitset258006* y);
STRING_LITERAL(TMP2963, "inSet", 5);
extern Gcheap50018 gch_50059;

N_NIMCALL(NIM_BOOL, inset_259010)(Tnode213790* s, Tnode213790* elem) {
	NIM_BOOL result;
{	result = 0;
	{
		if (!!(((*s).kind == ((NU8) 39)))) goto LA3;
		internalerror_186100((*s).info, ((NimStringDesc*) &TMP2963));
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_259078;
		NI HEX3Atmp_259095;
		NI LOC6;
		NI res_259098;
		i_259078 = 0;
		HEX3Atmp_259095 = 0;
		LOC6 = 0;
		LOC6 = sonslen_216351(s);
		HEX3Atmp_259095 = (NI)(LOC6 - ((NI) 1));
		res_259098 = ((NI) 0);
		{
			while (1) {
				if (!(res_259098 <= HEX3Atmp_259095)) goto LA8;
				i_259078 = res_259098;
				{
					if (!((*(*s).kindU.S6.sons->data[i_259078]).kind == ((NU8) 44))) goto LA11;
					{
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = levalue_220233((*(*s).kindU.S6.sons->data[i_259078]).kindU.S6.sons->data[((NI) 0)], elem);
						if (!(LOC15)) goto LA16;
						LOC15 = levalue_220233(elem, (*(*s).kindU.S6.sons->data[i_259078]).kindU.S6.sons->data[((NI) 1)]);
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
						LOC22 = samevalue_220189((*s).kindU.S6.sons->data[i_259078], elem);
						if (!LOC22) goto LA23;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA23: ;
				}
				LA9: ;
				res_259098 += ((NI) 1);
			} LA8: ;
		}
	}
	result = NIM_FALSE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, tobitset_259001)(Tnode213790* s, Tbitset258006** b) {
	NI64 first;
	NI64 j;
	NI64 LOC1;
	first = 0;
	j = 0;
	first = firstord_239001((*(*s).typ).sons->data[((NI) 0)]);
	LOC1 = 0;
	LOC1 = getsize_239124((*s).typ);
	bitsetinit_258009(b, ((NI) (LOC1)));
	{
		NI i_259215;
		NI HEX3Atmp_259245;
		NI LOC3;
		NI res_259248;
		i_259215 = 0;
		HEX3Atmp_259245 = 0;
		LOC3 = 0;
		LOC3 = sonslen_216351(s);
		HEX3Atmp_259245 = (NI)(LOC3 - ((NI) 1));
		res_259248 = ((NI) 0);
		{
			while (1) {
				if (!(res_259248 <= HEX3Atmp_259245)) goto LA5;
				i_259215 = res_259248;
				{
					if (!((*(*s).kindU.S6.sons->data[i_259215]).kind == ((NU8) 44))) goto LA8;
					j = getordvalue_239118((*(*s).kindU.S6.sons->data[i_259215]).kindU.S6.sons->data[((NI) 0)]);
					{
						while (1) {
							NI64 LOC12;
							LOC12 = 0;
							LOC12 = getordvalue_239118((*(*s).kindU.S6.sons->data[i_259215]).kindU.S6.sons->data[((NI) 1)]);
							if (!(j <= LOC12)) goto LA11;
							bitsetincl_258034(b, (NI64)(j - first));
							j += ((NI) 1);
						} LA11: ;
					}
				}
				goto LA6;
				LA8: ;
				{
					NI64 LOC14;
					LOC14 = 0;
					LOC14 = getordvalue_239118((*s).kindU.S6.sons->data[i_259215]);
					bitsetincl_258034(b, (NI64)(LOC14 - first));
				}
				LA6: ;
				res_259248 += ((NI) 1);
			} LA5: ;
		}
	}
}

static N_INLINE(Cell47705*, usrtocell_51640)(void* usr) {
	Cell47705* result;
	result = 0;
	result = ((Cell47705*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47705))))));
	return result;
}

static N_INLINE(void, rtladdzct_53201)(Cell47705* c) {
	addzct_51617((&gch_50059.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47705* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51640(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47705* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51640((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53201(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Tnode213790*, totreeset_259252)(Tbitset258006* s, Ttype213828* settype, Tlineinfo181337 info) {
	Tnode213790* result;
	NI64 a;
	NI64 b;
	NI64 e;
	NI64 first;
	Ttype213828* elemtype;
	Tnode213790* n;
	result = 0;
	a = 0;
	b = 0;
	e = 0;
	first = 0;
	elemtype = 0;
	n = 0;
	elemtype = (*settype).sons->data[((NI) 0)];
	first = firstord_239001(elemtype);
	result = newnodei_215248(((NU8) 39), info);
	asgnRefNoCycle((void**) (&(*result).typ), settype);
	(*result).info = info;
	e = IL64(0);
	{
		while (1) {
			if (!(e < ((NI64) ((NI)((s ? s->Sup.len : 0) * ((NI) 8)))))) goto LA2;
			{
				NIM_BOOL LOC5;
				Tnode213790* aa;
				LOC5 = 0;
				LOC5 = bitsetin_258044(s, e);
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
							LOC14 = bitsetin_258044(s, b);
							LOC12 = !(LOC14);
							LA13: ;
							if (!LOC12) goto LA15;
							goto LA8;
						}
						LA15: ;
					}
				} LA8: ;
				b -= ((NI) 1);
				aa = newinttypenode_214665(((NU8) 6), (NI64)(a + first), elemtype);
				(*aa).info = info;
				{
					if (!(a == b)) goto LA19;
					addson_215807(result, aa);
				}
				goto LA17;
				LA19: ;
				{
					Tnode213790* bb;
					n = newnodei_215248(((NU8) 44), info);
					asgnRefNoCycle((void**) (&(*n).typ), elemtype);
					addson_215807(n, aa);
					bb = newinttypenode_214665(((NU8) 6), (NI64)(b + first), elemtype);
					(*bb).info = info;
					addson_215807(n, bb);
					addson_215807(result, n);
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

N_NIMCALL(Tnode213790*, diffsets_259030)(Tnode213790* a, Tnode213790* b) {
	Tnode213790* result;
	Tbitset258006* x;
	Tbitset258006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_259001(a, (&x));
	tobitset_259001(b, (&y));
	bitsetdiff_258019((&x), y);
	result = totreeset_259252(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(NI64, cardset_259050)(Tnode213790* s) {
	NI64 result;
	result = 0;
	result = IL64(0);
	{
		NI i_259435;
		NI HEX3Atmp_259460;
		NI LOC2;
		NI res_259463;
		i_259435 = 0;
		HEX3Atmp_259460 = 0;
		LOC2 = 0;
		LOC2 = sonslen_216351(s);
		HEX3Atmp_259460 = (NI)(LOC2 - ((NI) 1));
		res_259463 = ((NI) 0);
		{
			while (1) {
				if (!(res_259463 <= HEX3Atmp_259460)) goto LA4;
				i_259435 = res_259463;
				{
					NI64 LOC9;
					NI64 LOC10;
					if (!((*(*s).kindU.S6.sons->data[i_259435]).kind == ((NU8) 44))) goto LA7;
					LOC9 = 0;
					LOC9 = getordvalue_239118((*(*s).kindU.S6.sons->data[i_259435]).kindU.S6.sons->data[((NI) 1)]);
					LOC10 = 0;
					LOC10 = getordvalue_239118((*(*s).kindU.S6.sons->data[i_259435]).kindU.S6.sons->data[((NI) 0)]);
					result = (NI64)((NI64)((NI64)(result + LOC9) - LOC10) + IL64(1));
				}
				goto LA5;
				LA7: ;
				{
					result += ((NI) 1);
				}
				LA5: ;
				res_259463 += ((NI) 1);
			} LA4: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, containssets_259042)(Tnode213790* a, Tnode213790* b) {
	NIM_BOOL result;
	Tbitset258006* x;
	Tbitset258006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_259001(a, (&x));
	tobitset_259001(b, (&y));
	result = bitsetcontains_258052(x, y);
	return result;
}

N_NIMCALL(NIM_BOOL, equalsets_259046)(Tnode213790* a, Tnode213790* b) {
	NIM_BOOL result;
	Tbitset258006* x;
	Tbitset258006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_259001(a, (&x));
	tobitset_259001(b, (&y));
	result = bitsetequals_258048(x, y);
	return result;
}

N_NIMCALL(Tnode213790*, intersectsets_259034)(Tnode213790* a, Tnode213790* b) {
	Tnode213790* result;
	Tbitset258006* x;
	Tbitset258006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_259001(a, (&x));
	tobitset_259001(b, (&y));
	bitsetintersect_258029((&x), y);
	result = totreeset_259252(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(Tnode213790*, unionsets_259026)(Tnode213790* a, Tnode213790* b) {
	Tnode213790* result;
	Tbitset258006* x;
	Tbitset258006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_259001(a, (&x));
	tobitset_259001(b, (&y));
	bitsetunion_258014((&x), y);
	result = totreeset_259252(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(Tnode213790*, symdiffsets_259038)(Tnode213790* a, Tnode213790* b) {
	Tnode213790* result;
	Tbitset258006* x;
	Tbitset258006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_259001(a, (&x));
	tobitset_259001(b, (&y));
	bitsetsymdiff_258024((&x), y);
	result = totreeset_259252(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(NIM_BOOL, overlap_259006)(Tnode213790* a, Tnode213790* b) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*a).kind == ((NU8) 44))) goto LA3;
		{
			NIM_BOOL LOC9;
			if (!((*b).kind == ((NU8) 44))) goto LA7;
			LOC9 = 0;
			LOC9 = levalue_220233((*a).kindU.S6.sons->data[((NI) 0)], (*b).kindU.S6.sons->data[((NI) 1)]);
			if (!(LOC9)) goto LA10;
			LOC9 = levalue_220233((*b).kindU.S6.sons->data[((NI) 0)], (*a).kindU.S6.sons->data[((NI) 1)]);
			LA10: ;
			result = LOC9;
		}
		goto LA5;
		LA7: ;
		{
			NIM_BOOL LOC12;
			LOC12 = 0;
			LOC12 = levalue_220233((*a).kindU.S6.sons->data[((NI) 0)], b);
			if (!(LOC12)) goto LA13;
			LOC12 = levalue_220233(b, (*a).kindU.S6.sons->data[((NI) 1)]);
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
			LOC19 = levalue_220233((*b).kindU.S6.sons->data[((NI) 0)], a);
			if (!(LOC19)) goto LA20;
			LOC19 = levalue_220233(a, (*b).kindU.S6.sons->data[((NI) 1)]);
			LA20: ;
			result = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			result = samevalue_220189(a, b);
		}
		LA15: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tnode213790*, complement_259393)(Tnode213790* a) {
	Tnode213790* result;
	Tbitset258006* x;
	result = 0;
	x = 0;
	tobitset_259001(a, (&x));
	{
		NI i_259410;
		NI HEX3Atmp_259413;
		NI res_259416;
		i_259410 = 0;
		HEX3Atmp_259413 = 0;
		HEX3Atmp_259413 = (x ? (x->Sup.len-1) : -1);
		res_259416 = ((NI) 0);
		{
			while (1) {
				if (!(res_259416 <= HEX3Atmp_259413)) goto LA3;
				i_259410 = res_259416;
				x->data[i_259410] = (NI8)((NU8) ~(x->data[i_259410]));
				res_259416 += ((NI) 1);
			} LA3: ;
		}
	}
	result = totreeset_259252(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(NIM_BOOL, emptyrange_259019)(Tnode213790* a, Tnode213790* b) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = levalue_220233(a, b);
	result = !(LOC1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsDatInit000)(void) {
}

