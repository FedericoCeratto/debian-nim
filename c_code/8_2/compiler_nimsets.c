/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct Tnode292802 Tnode292802;
typedef struct Ttype292840 Ttype292840;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym292834 Tsym292834;
typedef struct Tident199010 Tident199010;
typedef struct Tnodeseq292796 Tnodeseq292796;
typedef struct Tbitset339004 Tbitset339004;
typedef struct Tidobj199004 Tidobj199004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct TY292960 TY292960;
typedef struct Tloc292816 Tloc292816;
typedef struct Ropeobj178006 Ropeobj178006;
typedef struct Cell47705 Cell47705;
typedef struct Cellseq47721 Cellseq47721;
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
typedef struct Cellset47717 Cellset47717;
typedef struct Pagedesc47713 Pagedesc47713;
typedef struct TY292929 TY292929;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Tlib292820 Tlib292820;
typedef struct TY292961 TY292961;
typedef struct Basechunk29838 Basechunk29838;
typedef struct Freecell29830 Freecell29830;
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct Tlistentry147007 Tlistentry147007;
struct  Tlineinfo191336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag292427Set;
typedef NU8 Tnodekind292020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode292802  {
Ttype292840* typ;
Tlineinfo191336 info;
Tnodeflag292427Set flags;
Tnodekind292020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym292834* sym;
} S4;
struct {Tident199010* ident;
} S5;
struct {Tnodeseq292796* sons;
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
struct  Tidobj199004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Ttypekind292244;
typedef NU8 Tcallingconvention292002;
typedef NU32 Ttypeflag292431Set;
typedef NU8 Tlockind292808;
typedef NU8 Tstorageloc292812;
typedef NU16 Tlocflag292810Set;
struct  Tloc292816  {
Tlockind292808 k;
Tstorageloc292812 s;
Tlocflag292810Set flags;
Ttype292840* t;
Ropeobj178006* r;
};
struct  Ttype292840  {
  Tidobj199004 Sup;
Ttypekind292244 kind;
Tcallingconvention292002 callconv;
Ttypeflag292431Set flags;
Ttypeseq292836* sons;
Tnode292802* n;
Tsym292834* owner;
Tsym292834* sym;
Tsym292834* destructor;
Tsym292834* deepcopy;
Tsym292834* assignment;
TY292960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc292816 loc;
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
struct  Cellset47717  {
NI counter;
NI max;
Pagedesc47713* head;
Pagedesc47713** data;
};
struct  Gcheap50218  {
Gcstack50216* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47721 zct;
Cellseq47721 decstack;
Cellseq47721 tempstack;
NI recgclock;
Memregion29886 region;
Gcstat50214 stat;
Cellset47717 marked;
Cellseq47721 additionalroots;
};
typedef NU8 Tsymkind292435;
struct  Tstrtable292806  {
NI counter;
Tsymseq292804* data;
};
typedef NU16 Tmagic292524;
typedef NU32 Tsymflag292184Set;
typedef NU32 Toption169009Set;
struct  Tsym292834  {
  Tidobj199004 Sup;
Tsymkind292435 kind;
union{
struct {Ttypeseq292836* typeinstcache;
} S1;
struct {TY292929* procinstcache;
Tsym292834* gcunsafetyreason;
} S2;
struct {TY292929* usedgenerics;
Tstrtable292806 tab;
} S3;
struct {Tsym292834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic292524 magic;
Ttype292840* typ;
Tident199010* name;
Tlineinfo191336 info;
Tsym292834* owner;
Tsymflag292184Set flags;
Tnode292802* ast;
Toption169009Set options;
NI position;
NI offset;
Tloc292816 loc;
Tlib292820* annex;
Tnode292802* constraint;
};
struct  Tident199010  {
  Tidobj199004 Sup;
NimStringDesc* s;
Tident199010* next;
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
struct TY292961 {
NI Field0;
Tsym292834* Field1;
};
struct  Ropeobj178006  {
  TNimObject Sup;
Ropeobj178006* left;
Ropeobj178006* right;
NI length;
NimStringDesc* data;
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
struct  Pagedesc47713  {
Pagedesc47713* next;
NI key;
TY29819 bits;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind292818;
struct  Tlib292820  {
  Tlistentry147007 Sup;
Tlibkind292818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj178006* name;
Tnode292802* path;
};
struct  Freecell29830  {
Freecell29830* next;
NI zerofield;
};
struct  Tinstantiation292824  {
Tsym292834* sym;
Ttypeseq292836* concretetypes;
NI compilesid;
};
struct Tbitset339004 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
struct Tnodeseq292796 {
  TGenericSeq Sup;
  Tnode292802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq292836 {
  TGenericSeq Sup;
  Ttype292840* data[SEQ_DECL_SIZE];
};
struct TY292960 {
  TGenericSeq Sup;
  TY292961 data[SEQ_DECL_SIZE];
};
struct TY292929 {
  TGenericSeq Sup;
  Tinstantiation292824* data[SEQ_DECL_SIZE];
};
struct Tsymseq292804 {
  TGenericSeq Sup;
  Tsym292834* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, internalerror_196100_155036129)(Tlineinfo191336 info0, NimStringDesc* errmsg0);
N_NIMCALL(NI, sonslen_295351_850551059)(Tnode292802* n0);
N_NIMCALL(NIM_BOOL, levalue_299213_2984716966)(Tnode292802* a0, Tnode292802* b0);
N_NIMCALL(NIM_BOOL, samevalue_299169_2984716966)(Tnode292802* a0, Tnode292802* b0);
N_NIMCALL(void, tobitset_340001_452470228)(Tnode292802* s0, Tbitset339004** b0);
N_NIMCALL(NI64, firstord_320001_3876443242)(Ttype292840* t0);
N_NIMCALL(void, bitsetinit_339008_3966472399)(Tbitset339004** b0, NI length0);
N_NIMCALL(NI64, getsize_320135_3876443242)(Ttype292840* typ0);
N_NIMCALL(NI64, getordvalue_320129_3876443242)(Tnode292802* n0);
N_NIMCALL(void, bitsetincl_339033_3966472399)(Tbitset339004** x0, NI64 elem0);
N_NIMCALL(void, bitsetdiff_339018_3966472399)(Tbitset339004** x0, Tbitset339004* y0);
N_NIMCALL(Tnode292802*, totreeset_340252_452470228)(Tbitset339004* s0, Ttype292840* settype0, Tlineinfo191336 info0);
N_NIMCALL(Tnode292802*, newnodei_294197_850551059)(Tnodekind292020 kind0, Tlineinfo191336 info0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47705*, usrtocell_51840_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47705* c0);
N_NOINLINE(void, addzct_51817_1689653243)(Cellseq47721* s0, Cell47705* c0);
N_NIMCALL(NIM_BOOL, bitsetin_339043_3966472399)(Tbitset339004* x0, NI64 e0);
N_NIMCALL(Tnode292802*, newinttypenode_293665_850551059)(Tnodekind292020 kind0, NI64 intval0, Ttype292840* typ0);
N_NIMCALL(void, addson_294807_850551059)(Tnode292802* father0, Tnode292802* son0);
N_NIMCALL(NIM_BOOL, bitsetcontains_339051_3966472399)(Tbitset339004* x0, Tbitset339004* y0);
N_NIMCALL(NIM_BOOL, bitsetequals_339047_3966472399)(Tbitset339004* x0, Tbitset339004* y0);
N_NIMCALL(void, bitsetintersect_339028_3966472399)(Tbitset339004** x0, Tbitset339004* y0);
N_NIMCALL(void, bitsetunion_339013_3966472399)(Tbitset339004** x0, Tbitset339004* y0);
N_NIMCALL(void, bitsetsymdiff_339023_3966472399)(Tbitset339004** x0, Tbitset339004* y0);
STRING_LITERAL(T452470228_2, "inSet", 5);
extern Gcheap50218 gch_50258_1689653243;

N_NIMCALL(NIM_BOOL, inset_340010_452470228)(Tnode292802* s0, Tnode292802* elem0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		if (!!(((*s0).kind == ((Tnodekind292020) 39)))) goto LA3;
		internalerror_196100_155036129((*s0).info, ((NimStringDesc*) &T452470228_2));
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_340078_452470228;
		NI HEX3Atmp_340095_452470228;
		NI LOC6;
		NI res_340098_452470228;
		i_340078_452470228 = (NI)0;
		HEX3Atmp_340095_452470228 = (NI)0;
		LOC6 = (NI)0;
		LOC6 = sonslen_295351_850551059(s0);
		HEX3Atmp_340095_452470228 = (NI)(LOC6 - ((NI) 1));
		res_340098_452470228 = ((NI) 0);
		{
			while (1) {
				if (!(res_340098_452470228 <= HEX3Atmp_340095_452470228)) goto LA8;
				i_340078_452470228 = res_340098_452470228;
				{
					if (!((*(*s0).kindU.S6.sons->data[i_340078_452470228]).kind == ((Tnodekind292020) 44))) goto LA11;
					{
						NIM_BOOL LOC15;
						LOC15 = (NIM_BOOL)0;
						LOC15 = levalue_299213_2984716966((*(*s0).kindU.S6.sons->data[i_340078_452470228]).kindU.S6.sons->data[((NI) 0)], elem0);
						if (!(LOC15)) goto LA16;
						LOC15 = levalue_299213_2984716966(elem0, (*(*s0).kindU.S6.sons->data[i_340078_452470228]).kindU.S6.sons->data[((NI) 1)]);
						LA16: ;
						if (!LOC15) goto LA17;
						result0 = NIM_TRUE;
						goto BeforeRet;
					}
					LA17: ;
				}
				goto LA9;
				LA11: ;
				{
					{
						NIM_BOOL LOC22;
						LOC22 = (NIM_BOOL)0;
						LOC22 = samevalue_299169_2984716966((*s0).kindU.S6.sons->data[i_340078_452470228], elem0);
						if (!LOC22) goto LA23;
						result0 = NIM_TRUE;
						goto BeforeRet;
					}
					LA23: ;
				}
				LA9: ;
				res_340098_452470228 += ((NI) 1);
			} LA8: ;
		}
	}
	result0 = NIM_FALSE;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, tobitset_340001_452470228)(Tnode292802* s0, Tbitset339004** b0) {
	NI64 first0;
	NI64 j0;
	NI64 LOC1;
	first0 = (NI64)0;
	j0 = (NI64)0;
	first0 = firstord_320001_3876443242((*(*s0).typ).sons->data[((NI) 0)]);
	LOC1 = (NI64)0;
	LOC1 = getsize_320135_3876443242((*s0).typ);
	bitsetinit_339008_3966472399(b0, ((NI) (LOC1)));
	{
		NI i_340215_452470228;
		NI HEX3Atmp_340245_452470228;
		NI LOC3;
		NI res_340248_452470228;
		i_340215_452470228 = (NI)0;
		HEX3Atmp_340245_452470228 = (NI)0;
		LOC3 = (NI)0;
		LOC3 = sonslen_295351_850551059(s0);
		HEX3Atmp_340245_452470228 = (NI)(LOC3 - ((NI) 1));
		res_340248_452470228 = ((NI) 0);
		{
			while (1) {
				if (!(res_340248_452470228 <= HEX3Atmp_340245_452470228)) goto LA5;
				i_340215_452470228 = res_340248_452470228;
				{
					if (!((*(*s0).kindU.S6.sons->data[i_340215_452470228]).kind == ((Tnodekind292020) 44))) goto LA8;
					j0 = getordvalue_320129_3876443242((*(*s0).kindU.S6.sons->data[i_340215_452470228]).kindU.S6.sons->data[((NI) 0)]);
					{
						while (1) {
							NI64 LOC12;
							LOC12 = (NI64)0;
							LOC12 = getordvalue_320129_3876443242((*(*s0).kindU.S6.sons->data[i_340215_452470228]).kindU.S6.sons->data[((NI) 1)]);
							if (!(j0 <= LOC12)) goto LA11;
							bitsetincl_339033_3966472399(b0, (NI64)(j0 - first0));
							j0 += ((NI) 1);
						} LA11: ;
					}
				}
				goto LA6;
				LA8: ;
				{
					NI64 LOC14;
					LOC14 = (NI64)0;
					LOC14 = getordvalue_320129_3876443242((*s0).kindU.S6.sons->data[i_340215_452470228]);
					bitsetincl_339033_3966472399(b0, (NI64)(LOC14 - first0));
				}
				LA6: ;
				res_340248_452470228 += ((NI) 1);
			} LA5: ;
		}
	}
}

static N_INLINE(Cell47705*, usrtocell_51840_1689653243)(void* usr0) {
	Cell47705* result0;
	result0 = (Cell47705*)0;
	result0 = ((Cell47705*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47705))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47705* c0) {
	addzct_51817_1689653243((&gch_50258_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47705* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51840_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47705* c0;
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

N_NIMCALL(Tnode292802*, totreeset_340252_452470228)(Tbitset339004* s0, Ttype292840* settype0, Tlineinfo191336 info0) {
	Tnode292802* result0;
	NI64 a0;
	NI64 b0;
	NI64 e0;
	NI64 first0;
	Ttype292840* elemtype0;
	Tnode292802* n0;
	result0 = (Tnode292802*)0;
	a0 = (NI64)0;
	b0 = (NI64)0;
	e0 = (NI64)0;
	first0 = (NI64)0;
	elemtype0 = (Ttype292840*)0;
	n0 = (Tnode292802*)0;
	elemtype0 = (*settype0).sons->data[((NI) 0)];
	first0 = firstord_320001_3876443242(elemtype0);
	result0 = newnodei_294197_850551059(((Tnodekind292020) 39), info0);
	asgnRefNoCycle((void**) (&(*result0).typ), settype0);
	(*result0).info = info0;
	e0 = IL64(0);
	{
		while (1) {
			if (!(e0 < ((NI64) ((NI)((s0 ? s0->Sup.len : 0) * ((NI) 8)))))) goto LA2;
			{
				NIM_BOOL LOC5;
				Tnode292802* aa0;
				LOC5 = (NIM_BOOL)0;
				LOC5 = bitsetin_339043_3966472399(s0, e0);
				if (!LOC5) goto LA6;
				a0 = e0;
				b0 = e0;
				{
					while (1) {
						b0 += ((NI) 1);
						{
							NIM_BOOL LOC12;
							NIM_BOOL LOC14;
							LOC12 = (NIM_BOOL)0;
							LOC12 = (((NI64) ((NI)((s0 ? s0->Sup.len : 0) * ((NI) 8)))) <= b0);
							if (LOC12) goto LA13;
							LOC14 = (NIM_BOOL)0;
							LOC14 = bitsetin_339043_3966472399(s0, b0);
							LOC12 = !(LOC14);
							LA13: ;
							if (!LOC12) goto LA15;
							goto LA8;
						}
						LA15: ;
					}
				} LA8: ;
				b0 -= ((NI) 1);
				aa0 = newinttypenode_293665_850551059(((Tnodekind292020) 6), (NI64)(a0 + first0), elemtype0);
				(*aa0).info = info0;
				{
					if (!(a0 == b0)) goto LA19;
					addson_294807_850551059(result0, aa0);
				}
				goto LA17;
				LA19: ;
				{
					Tnode292802* bb0;
					n0 = newnodei_294197_850551059(((Tnodekind292020) 44), info0);
					asgnRefNoCycle((void**) (&(*n0).typ), elemtype0);
					addson_294807_850551059(n0, aa0);
					bb0 = newinttypenode_293665_850551059(((Tnodekind292020) 6), (NI64)(b0 + first0), elemtype0);
					(*bb0).info = info0;
					addson_294807_850551059(n0, bb0);
					addson_294807_850551059(result0, n0);
				}
				LA17: ;
				e0 = b0;
			}
			LA6: ;
			e0 += ((NI) 1);
		} LA2: ;
	}
	return result0;
}

N_NIMCALL(Tnode292802*, diffsets_340030_452470228)(Tnode292802* a0, Tnode292802* b0) {
	Tnode292802* result0;
	Tbitset339004* x0;
	Tbitset339004* y0;
	result0 = (Tnode292802*)0;
	x0 = (Tbitset339004*)0;
	y0 = (Tbitset339004*)0;
	tobitset_340001_452470228(a0, (&x0));
	tobitset_340001_452470228(b0, (&y0));
	bitsetdiff_339018_3966472399((&x0), y0);
	result0 = totreeset_340252_452470228(x0, (*a0).typ, (*a0).info);
	return result0;
}

N_NIMCALL(NI64, cardset_340050_452470228)(Tnode292802* s0) {
	NI64 result0;
	result0 = (NI64)0;
	result0 = IL64(0);
	{
		NI i_340435_452470228;
		NI HEX3Atmp_340460_452470228;
		NI LOC2;
		NI res_340463_452470228;
		i_340435_452470228 = (NI)0;
		HEX3Atmp_340460_452470228 = (NI)0;
		LOC2 = (NI)0;
		LOC2 = sonslen_295351_850551059(s0);
		HEX3Atmp_340460_452470228 = (NI)(LOC2 - ((NI) 1));
		res_340463_452470228 = ((NI) 0);
		{
			while (1) {
				if (!(res_340463_452470228 <= HEX3Atmp_340460_452470228)) goto LA4;
				i_340435_452470228 = res_340463_452470228;
				{
					NI64 LOC9;
					NI64 LOC10;
					if (!((*(*s0).kindU.S6.sons->data[i_340435_452470228]).kind == ((Tnodekind292020) 44))) goto LA7;
					LOC9 = (NI64)0;
					LOC9 = getordvalue_320129_3876443242((*(*s0).kindU.S6.sons->data[i_340435_452470228]).kindU.S6.sons->data[((NI) 1)]);
					LOC10 = (NI64)0;
					LOC10 = getordvalue_320129_3876443242((*(*s0).kindU.S6.sons->data[i_340435_452470228]).kindU.S6.sons->data[((NI) 0)]);
					result0 = (NI64)((NI64)((NI64)(result0 + LOC9) - LOC10) + IL64(1));
				}
				goto LA5;
				LA7: ;
				{
					result0 += ((NI) 1);
				}
				LA5: ;
				res_340463_452470228 += ((NI) 1);
			} LA4: ;
		}
	}
	return result0;
}

N_NIMCALL(NIM_BOOL, containssets_340042_452470228)(Tnode292802* a0, Tnode292802* b0) {
	NIM_BOOL result0;
	Tbitset339004* x0;
	Tbitset339004* y0;
	result0 = (NIM_BOOL)0;
	x0 = (Tbitset339004*)0;
	y0 = (Tbitset339004*)0;
	tobitset_340001_452470228(a0, (&x0));
	tobitset_340001_452470228(b0, (&y0));
	result0 = bitsetcontains_339051_3966472399(x0, y0);
	return result0;
}

N_NIMCALL(NIM_BOOL, equalsets_340046_452470228)(Tnode292802* a0, Tnode292802* b0) {
	NIM_BOOL result0;
	Tbitset339004* x0;
	Tbitset339004* y0;
	result0 = (NIM_BOOL)0;
	x0 = (Tbitset339004*)0;
	y0 = (Tbitset339004*)0;
	tobitset_340001_452470228(a0, (&x0));
	tobitset_340001_452470228(b0, (&y0));
	result0 = bitsetequals_339047_3966472399(x0, y0);
	return result0;
}

N_NIMCALL(Tnode292802*, intersectsets_340034_452470228)(Tnode292802* a0, Tnode292802* b0) {
	Tnode292802* result0;
	Tbitset339004* x0;
	Tbitset339004* y0;
	result0 = (Tnode292802*)0;
	x0 = (Tbitset339004*)0;
	y0 = (Tbitset339004*)0;
	tobitset_340001_452470228(a0, (&x0));
	tobitset_340001_452470228(b0, (&y0));
	bitsetintersect_339028_3966472399((&x0), y0);
	result0 = totreeset_340252_452470228(x0, (*a0).typ, (*a0).info);
	return result0;
}

N_NIMCALL(Tnode292802*, unionsets_340026_452470228)(Tnode292802* a0, Tnode292802* b0) {
	Tnode292802* result0;
	Tbitset339004* x0;
	Tbitset339004* y0;
	result0 = (Tnode292802*)0;
	x0 = (Tbitset339004*)0;
	y0 = (Tbitset339004*)0;
	tobitset_340001_452470228(a0, (&x0));
	tobitset_340001_452470228(b0, (&y0));
	bitsetunion_339013_3966472399((&x0), y0);
	result0 = totreeset_340252_452470228(x0, (*a0).typ, (*a0).info);
	return result0;
}

N_NIMCALL(Tnode292802*, symdiffsets_340038_452470228)(Tnode292802* a0, Tnode292802* b0) {
	Tnode292802* result0;
	Tbitset339004* x0;
	Tbitset339004* y0;
	result0 = (Tnode292802*)0;
	x0 = (Tbitset339004*)0;
	y0 = (Tbitset339004*)0;
	tobitset_340001_452470228(a0, (&x0));
	tobitset_340001_452470228(b0, (&y0));
	bitsetsymdiff_339023_3966472399((&x0), y0);
	result0 = totreeset_340252_452470228(x0, (*a0).typ, (*a0).info);
	return result0;
}

N_NIMCALL(NIM_BOOL, overlap_340006_452470228)(Tnode292802* a0, Tnode292802* b0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	{
		if (!((*a0).kind == ((Tnodekind292020) 44))) goto LA3;
		{
			NIM_BOOL LOC9;
			if (!((*b0).kind == ((Tnodekind292020) 44))) goto LA7;
			LOC9 = (NIM_BOOL)0;
			LOC9 = levalue_299213_2984716966((*a0).kindU.S6.sons->data[((NI) 0)], (*b0).kindU.S6.sons->data[((NI) 1)]);
			if (!(LOC9)) goto LA10;
			LOC9 = levalue_299213_2984716966((*b0).kindU.S6.sons->data[((NI) 0)], (*a0).kindU.S6.sons->data[((NI) 1)]);
			LA10: ;
			result0 = LOC9;
		}
		goto LA5;
		LA7: ;
		{
			NIM_BOOL LOC12;
			LOC12 = (NIM_BOOL)0;
			LOC12 = levalue_299213_2984716966((*a0).kindU.S6.sons->data[((NI) 0)], b0);
			if (!(LOC12)) goto LA13;
			LOC12 = levalue_299213_2984716966(b0, (*a0).kindU.S6.sons->data[((NI) 1)]);
			LA13: ;
			result0 = LOC12;
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC19;
			if (!((*b0).kind == ((Tnodekind292020) 44))) goto LA17;
			LOC19 = (NIM_BOOL)0;
			LOC19 = levalue_299213_2984716966((*b0).kindU.S6.sons->data[((NI) 0)], a0);
			if (!(LOC19)) goto LA20;
			LOC19 = levalue_299213_2984716966(a0, (*b0).kindU.S6.sons->data[((NI) 1)]);
			LA20: ;
			result0 = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			result0 = samevalue_299169_2984716966(a0, b0);
		}
		LA15: ;
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Tnode292802*, complement_340393_452470228)(Tnode292802* a0) {
	Tnode292802* result0;
	Tbitset339004* x0;
	result0 = (Tnode292802*)0;
	x0 = (Tbitset339004*)0;
	tobitset_340001_452470228(a0, (&x0));
	{
		NI i_340410_452470228;
		NI HEX3Atmp_340413_452470228;
		NI res_340416_452470228;
		i_340410_452470228 = (NI)0;
		HEX3Atmp_340413_452470228 = (NI)0;
		HEX3Atmp_340413_452470228 = (x0 ? (x0->Sup.len-1) : -1);
		res_340416_452470228 = ((NI) 0);
		{
			while (1) {
				if (!(res_340416_452470228 <= HEX3Atmp_340413_452470228)) goto LA3;
				i_340410_452470228 = res_340416_452470228;
				x0->data[i_340410_452470228] = (NI8)((NU8) ~(x0->data[i_340410_452470228]));
				res_340416_452470228 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = totreeset_340252_452470228(x0, (*a0).typ, (*a0).info);
	return result0;
}

N_NIMCALL(NIM_BOOL, emptyrange_340019_452470228)(Tnode292802* a0, Tnode292802* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = levalue_299213_2984716966(a0, b0);
	result0 = !(LOC1);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsDatInit000)(void) {
}

