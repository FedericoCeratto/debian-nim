/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Tnode264794 Tnode264794;
typedef struct Ttype264832 Ttype264832;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym264826 Tsym264826;
typedef struct Tident194012 Tident194012;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct Tbitset310006 Tbitset310006;
typedef struct Tidobj194006 Tidobj194006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct Tloc264808 Tloc264808;
typedef struct Ropeobj173006 Ropeobj173006;
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
typedef struct Tscope264820 Tscope264820;
typedef struct TY264927 TY264927;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct Tlib264812 Tlib264812;
typedef struct Basechunk30037 Basechunk30037;
typedef struct Freecell30029 Freecell30029;
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct TY264917 TY264917;
struct  Tlineinfo186336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag264427Set;
typedef NU8 Tnodekind264020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
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
typedef NU8 Ttypekind264244;
typedef NU8 Tcallingconvention264002;
typedef NU32 Ttypeflag264431Set;
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
typedef NU8 Tsymkind264435;
struct  Tstrtable264798  {
NI counter;
Tsymseq264796* data;
};
typedef NU8 Tmagic264525;
typedef NU32 Tsymflag264184Set;
typedef NU32 Toption164009Set;
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
struct  Ropeobj173006  {
  TNimObject Sup;
Ropeobj173006* left;
Ropeobj173006* right;
NI length;
NimStringDesc* data;
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
struct  Tscope264820  {
NI depthlevel;
Tstrtable264798 symbols;
Tscope264820* parent;
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
struct  Freecell30029  {
Freecell30029* next;
NI zerofield;
};
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
};
struct Tbitset310006 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, internalerror_191100_155036129)(Tlineinfo186336 info0, NimStringDesc* errmsg0);
N_NIMCALL(NI, sonslen_267351_850551059)(Tnode264794* n0);
N_NIMCALL(NIM_BOOL, levalue_271238_2984716966)(Tnode264794* a0, Tnode264794* b0);
N_NIMCALL(NIM_BOOL, samevalue_271194_2984716966)(Tnode264794* a0, Tnode264794* b0);
N_NIMCALL(void, tobitset_311001_452470228)(Tnode264794* s0, Tbitset310006** b0);
N_NIMCALL(NI64, firstord_291001_3876443242)(Ttype264832* t0);
N_NIMCALL(void, bitsetinit_310010_3966472399)(Tbitset310006** b0, NI length0);
N_NIMCALL(NI64, getsize_291135_3876443242)(Ttype264832* typ0);
N_NIMCALL(NI64, getordvalue_291129_3876443242)(Tnode264794* n0);
N_NIMCALL(void, bitsetincl_310035_3966472399)(Tbitset310006** x0, NI64 elem0);
N_NIMCALL(void, bitsetdiff_310020_3966472399)(Tbitset310006** x0, Tbitset310006* y0);
N_NIMCALL(Tnode264794*, totreeset_311251_452470228)(Tbitset310006* s0, Ttype264832* settype0, Tlineinfo186336 info0);
N_NIMCALL(Tnode264794*, newnodei_266248_850551059)(Tnodekind264020 kind0, Tlineinfo186336 info0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(NIM_BOOL, bitsetin_310045_3966472399)(Tbitset310006* x0, NI64 e0);
N_NIMCALL(Tnode264794*, newinttypenode_265666_850551059)(Tnodekind264020 kind0, NI64 intval0, Ttype264832* typ0);
N_NIMCALL(void, addson_266807_850551059)(Tnode264794* father0, Tnode264794* son0);
N_NIMCALL(NIM_BOOL, bitsetcontains_310053_3966472399)(Tbitset310006* x0, Tbitset310006* y0);
N_NIMCALL(NIM_BOOL, bitsetequals_310049_3966472399)(Tbitset310006* x0, Tbitset310006* y0);
N_NIMCALL(void, bitsetintersect_310030_3966472399)(Tbitset310006** x0, Tbitset310006* y0);
N_NIMCALL(void, bitsetunion_310015_3966472399)(Tbitset310006** x0, Tbitset310006* y0);
N_NIMCALL(void, bitsetsymdiff_310025_3966472399)(Tbitset310006** x0, Tbitset310006* y0);
STRING_LITERAL(TMP3126, "inSet", 5);
extern Gcheap50418 gch_50458_1689653243;

N_NIMCALL(NIM_BOOL, inset_311010_452470228)(Tnode264794* s0, Tnode264794* elem0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		if (!!(((*s0).kind == ((Tnodekind264020) 39)))) goto LA3;
		internalerror_191100_155036129((*s0).info, ((NimStringDesc*) &TMP3126));
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_311078_452470228;
		NI HEX3Atmp_311095_452470228;
		NI LOC6;
		NI res_311098_452470228;
		i_311078_452470228 = (NI)0;
		HEX3Atmp_311095_452470228 = (NI)0;
		LOC6 = (NI)0;
		LOC6 = sonslen_267351_850551059(s0);
		HEX3Atmp_311095_452470228 = (NI)(LOC6 - ((NI) 1));
		res_311098_452470228 = ((NI) 0);
		{
			while (1) {
				if (!(res_311098_452470228 <= HEX3Atmp_311095_452470228)) goto LA8;
				i_311078_452470228 = res_311098_452470228;
				{
					if (!((*(*s0).kindU.S6.sons->data[i_311078_452470228]).kind == ((Tnodekind264020) 44))) goto LA11;
					{
						NIM_BOOL LOC15;
						LOC15 = (NIM_BOOL)0;
						LOC15 = levalue_271238_2984716966((*(*s0).kindU.S6.sons->data[i_311078_452470228]).kindU.S6.sons->data[((NI) 0)], elem0);
						if (!(LOC15)) goto LA16;
						LOC15 = levalue_271238_2984716966(elem0, (*(*s0).kindU.S6.sons->data[i_311078_452470228]).kindU.S6.sons->data[((NI) 1)]);
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
						LOC22 = samevalue_271194_2984716966((*s0).kindU.S6.sons->data[i_311078_452470228], elem0);
						if (!LOC22) goto LA23;
						result0 = NIM_TRUE;
						goto BeforeRet;
					}
					LA23: ;
				}
				LA9: ;
				res_311098_452470228 += ((NI) 1);
			} LA8: ;
		}
	}
	result0 = NIM_FALSE;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, tobitset_311001_452470228)(Tnode264794* s0, Tbitset310006** b0) {
	NI64 first0;
	NI64 j0;
	NI64 LOC1;
	first0 = (NI64)0;
	j0 = (NI64)0;
	first0 = firstord_291001_3876443242((*(*s0).typ).sons->data[((NI) 0)]);
	LOC1 = (NI64)0;
	LOC1 = getsize_291135_3876443242((*s0).typ);
	bitsetinit_310010_3966472399(b0, ((NI) (LOC1)));
	{
		NI i_311215_452470228;
		NI HEX3Atmp_311244_452470228;
		NI LOC3;
		NI res_311247_452470228;
		i_311215_452470228 = (NI)0;
		HEX3Atmp_311244_452470228 = (NI)0;
		LOC3 = (NI)0;
		LOC3 = sonslen_267351_850551059(s0);
		HEX3Atmp_311244_452470228 = (NI)(LOC3 - ((NI) 1));
		res_311247_452470228 = ((NI) 0);
		{
			while (1) {
				if (!(res_311247_452470228 <= HEX3Atmp_311244_452470228)) goto LA5;
				i_311215_452470228 = res_311247_452470228;
				{
					if (!((*(*s0).kindU.S6.sons->data[i_311215_452470228]).kind == ((Tnodekind264020) 44))) goto LA8;
					j0 = getordvalue_291129_3876443242((*(*s0).kindU.S6.sons->data[i_311215_452470228]).kindU.S6.sons->data[((NI) 0)]);
					{
						while (1) {
							NI64 LOC12;
							LOC12 = (NI64)0;
							LOC12 = getordvalue_291129_3876443242((*(*s0).kindU.S6.sons->data[i_311215_452470228]).kindU.S6.sons->data[((NI) 1)]);
							if (!(j0 <= LOC12)) goto LA11;
							bitsetincl_310035_3966472399(b0, (NI64)(j0 - first0));
							j0 += ((NI) 1);
						} LA11: ;
					}
				}
				goto LA6;
				LA8: ;
				{
					NI64 LOC14;
					LOC14 = (NI64)0;
					LOC14 = getordvalue_291129_3876443242((*s0).kindU.S6.sons->data[i_311215_452470228]);
					bitsetincl_310035_3966472399(b0, (NI64)(LOC14 - first0));
				}
				LA6: ;
				res_311247_452470228 += ((NI) 1);
			} LA5: ;
		}
	}
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
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53201_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(Tnode264794*, totreeset_311251_452470228)(Tbitset310006* s0, Ttype264832* settype0, Tlineinfo186336 info0) {
	Tnode264794* result0;
	NI64 a0;
	NI64 b0;
	NI64 e0;
	NI64 first0;
	Ttype264832* elemtype0;
	Tnode264794* n0;
	result0 = (Tnode264794*)0;
	a0 = (NI64)0;
	b0 = (NI64)0;
	e0 = (NI64)0;
	first0 = (NI64)0;
	elemtype0 = (Ttype264832*)0;
	n0 = (Tnode264794*)0;
	elemtype0 = (*settype0).sons->data[((NI) 0)];
	first0 = firstord_291001_3876443242(elemtype0);
	result0 = newnodei_266248_850551059(((Tnodekind264020) 39), info0);
	asgnRefNoCycle((void**) (&(*result0).typ), settype0);
	(*result0).info = info0;
	e0 = IL64(0);
	{
		while (1) {
			if (!(e0 < ((NI64) ((NI)((s0 ? s0->Sup.len : 0) * ((NI) 8)))))) goto LA2;
			{
				NIM_BOOL LOC5;
				Tnode264794* aa0;
				LOC5 = (NIM_BOOL)0;
				LOC5 = bitsetin_310045_3966472399(s0, e0);
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
							LOC14 = bitsetin_310045_3966472399(s0, b0);
							LOC12 = !(LOC14);
							LA13: ;
							if (!LOC12) goto LA15;
							goto LA8;
						}
						LA15: ;
					}
				} LA8: ;
				b0 -= ((NI) 1);
				aa0 = newinttypenode_265666_850551059(((Tnodekind264020) 6), (NI64)(a0 + first0), elemtype0);
				(*aa0).info = info0;
				{
					if (!(a0 == b0)) goto LA19;
					addson_266807_850551059(result0, aa0);
				}
				goto LA17;
				LA19: ;
				{
					Tnode264794* bb0;
					n0 = newnodei_266248_850551059(((Tnodekind264020) 44), info0);
					asgnRefNoCycle((void**) (&(*n0).typ), elemtype0);
					addson_266807_850551059(n0, aa0);
					bb0 = newinttypenode_265666_850551059(((Tnodekind264020) 6), (NI64)(b0 + first0), elemtype0);
					(*bb0).info = info0;
					addson_266807_850551059(n0, bb0);
					addson_266807_850551059(result0, n0);
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

N_NIMCALL(Tnode264794*, diffsets_311030_452470228)(Tnode264794* a0, Tnode264794* b0) {
	Tnode264794* result0;
	Tbitset310006* x0;
	Tbitset310006* y0;
	result0 = (Tnode264794*)0;
	x0 = (Tbitset310006*)0;
	y0 = (Tbitset310006*)0;
	tobitset_311001_452470228(a0, (&x0));
	tobitset_311001_452470228(b0, (&y0));
	bitsetdiff_310020_3966472399((&x0), y0);
	result0 = totreeset_311251_452470228(x0, (*a0).typ, (*a0).info);
	return result0;
}

N_NIMCALL(NI64, cardset_311050_452470228)(Tnode264794* s0) {
	NI64 result0;
	result0 = (NI64)0;
	result0 = IL64(0);
	{
		NI i_311434_452470228;
		NI HEX3Atmp_311459_452470228;
		NI LOC2;
		NI res_311462_452470228;
		i_311434_452470228 = (NI)0;
		HEX3Atmp_311459_452470228 = (NI)0;
		LOC2 = (NI)0;
		LOC2 = sonslen_267351_850551059(s0);
		HEX3Atmp_311459_452470228 = (NI)(LOC2 - ((NI) 1));
		res_311462_452470228 = ((NI) 0);
		{
			while (1) {
				if (!(res_311462_452470228 <= HEX3Atmp_311459_452470228)) goto LA4;
				i_311434_452470228 = res_311462_452470228;
				{
					NI64 LOC9;
					NI64 LOC10;
					if (!((*(*s0).kindU.S6.sons->data[i_311434_452470228]).kind == ((Tnodekind264020) 44))) goto LA7;
					LOC9 = (NI64)0;
					LOC9 = getordvalue_291129_3876443242((*(*s0).kindU.S6.sons->data[i_311434_452470228]).kindU.S6.sons->data[((NI) 1)]);
					LOC10 = (NI64)0;
					LOC10 = getordvalue_291129_3876443242((*(*s0).kindU.S6.sons->data[i_311434_452470228]).kindU.S6.sons->data[((NI) 0)]);
					result0 = (NI64)((NI64)((NI64)(result0 + LOC9) - LOC10) + IL64(1));
				}
				goto LA5;
				LA7: ;
				{
					result0 += ((NI) 1);
				}
				LA5: ;
				res_311462_452470228 += ((NI) 1);
			} LA4: ;
		}
	}
	return result0;
}

N_NIMCALL(NIM_BOOL, containssets_311042_452470228)(Tnode264794* a0, Tnode264794* b0) {
	NIM_BOOL result0;
	Tbitset310006* x0;
	Tbitset310006* y0;
	result0 = (NIM_BOOL)0;
	x0 = (Tbitset310006*)0;
	y0 = (Tbitset310006*)0;
	tobitset_311001_452470228(a0, (&x0));
	tobitset_311001_452470228(b0, (&y0));
	result0 = bitsetcontains_310053_3966472399(x0, y0);
	return result0;
}

N_NIMCALL(NIM_BOOL, equalsets_311046_452470228)(Tnode264794* a0, Tnode264794* b0) {
	NIM_BOOL result0;
	Tbitset310006* x0;
	Tbitset310006* y0;
	result0 = (NIM_BOOL)0;
	x0 = (Tbitset310006*)0;
	y0 = (Tbitset310006*)0;
	tobitset_311001_452470228(a0, (&x0));
	tobitset_311001_452470228(b0, (&y0));
	result0 = bitsetequals_310049_3966472399(x0, y0);
	return result0;
}

N_NIMCALL(Tnode264794*, intersectsets_311034_452470228)(Tnode264794* a0, Tnode264794* b0) {
	Tnode264794* result0;
	Tbitset310006* x0;
	Tbitset310006* y0;
	result0 = (Tnode264794*)0;
	x0 = (Tbitset310006*)0;
	y0 = (Tbitset310006*)0;
	tobitset_311001_452470228(a0, (&x0));
	tobitset_311001_452470228(b0, (&y0));
	bitsetintersect_310030_3966472399((&x0), y0);
	result0 = totreeset_311251_452470228(x0, (*a0).typ, (*a0).info);
	return result0;
}

N_NIMCALL(Tnode264794*, unionsets_311026_452470228)(Tnode264794* a0, Tnode264794* b0) {
	Tnode264794* result0;
	Tbitset310006* x0;
	Tbitset310006* y0;
	result0 = (Tnode264794*)0;
	x0 = (Tbitset310006*)0;
	y0 = (Tbitset310006*)0;
	tobitset_311001_452470228(a0, (&x0));
	tobitset_311001_452470228(b0, (&y0));
	bitsetunion_310015_3966472399((&x0), y0);
	result0 = totreeset_311251_452470228(x0, (*a0).typ, (*a0).info);
	return result0;
}

N_NIMCALL(Tnode264794*, symdiffsets_311038_452470228)(Tnode264794* a0, Tnode264794* b0) {
	Tnode264794* result0;
	Tbitset310006* x0;
	Tbitset310006* y0;
	result0 = (Tnode264794*)0;
	x0 = (Tbitset310006*)0;
	y0 = (Tbitset310006*)0;
	tobitset_311001_452470228(a0, (&x0));
	tobitset_311001_452470228(b0, (&y0));
	bitsetsymdiff_310025_3966472399((&x0), y0);
	result0 = totreeset_311251_452470228(x0, (*a0).typ, (*a0).info);
	return result0;
}

N_NIMCALL(NIM_BOOL, overlap_311006_452470228)(Tnode264794* a0, Tnode264794* b0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	{
		if (!((*a0).kind == ((Tnodekind264020) 44))) goto LA3;
		{
			NIM_BOOL LOC9;
			if (!((*b0).kind == ((Tnodekind264020) 44))) goto LA7;
			LOC9 = (NIM_BOOL)0;
			LOC9 = levalue_271238_2984716966((*a0).kindU.S6.sons->data[((NI) 0)], (*b0).kindU.S6.sons->data[((NI) 1)]);
			if (!(LOC9)) goto LA10;
			LOC9 = levalue_271238_2984716966((*b0).kindU.S6.sons->data[((NI) 0)], (*a0).kindU.S6.sons->data[((NI) 1)]);
			LA10: ;
			result0 = LOC9;
		}
		goto LA5;
		LA7: ;
		{
			NIM_BOOL LOC12;
			LOC12 = (NIM_BOOL)0;
			LOC12 = levalue_271238_2984716966((*a0).kindU.S6.sons->data[((NI) 0)], b0);
			if (!(LOC12)) goto LA13;
			LOC12 = levalue_271238_2984716966(b0, (*a0).kindU.S6.sons->data[((NI) 1)]);
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
			if (!((*b0).kind == ((Tnodekind264020) 44))) goto LA17;
			LOC19 = (NIM_BOOL)0;
			LOC19 = levalue_271238_2984716966((*b0).kindU.S6.sons->data[((NI) 0)], a0);
			if (!(LOC19)) goto LA20;
			LOC19 = levalue_271238_2984716966(a0, (*b0).kindU.S6.sons->data[((NI) 1)]);
			LA20: ;
			result0 = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			result0 = samevalue_271194_2984716966(a0, b0);
		}
		LA15: ;
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Tnode264794*, complement_311392_452470228)(Tnode264794* a0) {
	Tnode264794* result0;
	Tbitset310006* x0;
	result0 = (Tnode264794*)0;
	x0 = (Tbitset310006*)0;
	tobitset_311001_452470228(a0, (&x0));
	{
		NI i_311409_452470228;
		NI HEX3Atmp_311412_452470228;
		NI res_311415_452470228;
		i_311409_452470228 = (NI)0;
		HEX3Atmp_311412_452470228 = (NI)0;
		HEX3Atmp_311412_452470228 = (x0 ? (x0->Sup.len-1) : -1);
		res_311415_452470228 = ((NI) 0);
		{
			while (1) {
				if (!(res_311415_452470228 <= HEX3Atmp_311412_452470228)) goto LA3;
				i_311409_452470228 = res_311415_452470228;
				x0->data[i_311409_452470228] = (NI8)((NU8) ~(x0->data[i_311409_452470228]));
				res_311415_452470228 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = totreeset_311251_452470228(x0, (*a0).typ, (*a0).info);
	return result0;
}

N_NIMCALL(NIM_BOOL, emptyrange_311019_452470228)(Tnode264794* a0, Tnode264794* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = levalue_271238_2984716966(a0, b0);
	result0 = !(LOC1);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsDatInit000)(void) {
}

