/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct Tnode263794 Tnode263794;
typedef struct Ttype263832 Ttype263832;
typedef struct Tlineinfo185336 Tlineinfo185336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym263826 Tsym263826;
typedef struct Tident193012 Tident193012;
typedef struct Tnodeseq263788 Tnodeseq263788;
typedef struct Tbitset309006 Tbitset309006;
typedef struct Tidobj193006 Tidobj193006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq263828 Ttypeseq263828;
typedef struct Tloc263808 Tloc263808;
typedef struct Ropeobj172006 Ropeobj172006;
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
typedef struct Tscope263820 Tscope263820;
typedef struct TY263927 TY263927;
typedef struct Tstrtable263798 Tstrtable263798;
typedef struct Tsymseq263796 Tsymseq263796;
typedef struct Tlib263812 Tlib263812;
typedef struct Basechunk30038 Basechunk30038;
typedef struct Freecell30030 Freecell30030;
typedef struct Tinstantiation263816 Tinstantiation263816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct TY263917 TY263917;
struct  Tlineinfo185336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag263427Set;
typedef NU8 Tnodekind263020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode263794  {
Ttype263832* typ;
Tlineinfo185336 info;
Tnodeflag263427Set flags;
Tnodekind263020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym263826* sym;
} S4;
struct {Tident193012* ident;
} S5;
struct {Tnodeseq263788* sons;
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
struct  Tidobj193006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Ttypekind263244;
typedef NU8 Tcallingconvention263002;
typedef NU32 Ttypeflag263431Set;
typedef NU8 Tlockind263800;
typedef NU8 Tstorageloc263804;
typedef NU16 Tlocflag263802Set;
struct  Tloc263808  {
Tlockind263800 k;
Tstorageloc263804 s;
Tlocflag263802Set flags;
Ttype263832* t;
Ropeobj172006* r;
Ropeobj172006* heaproot;
};
struct  Ttype263832  {
  Tidobj193006 Sup;
Ttypekind263244 kind;
Tcallingconvention263002 callconv;
Ttypeflag263431Set flags;
Ttypeseq263828* sons;
Tnode263794* n;
Tsym263826* owner;
Tsym263826* sym;
Tsym263826* destructor;
Tsym263826* deepcopy;
Tsym263826* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc263808 loc;
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
typedef NU8 Tsymkind263435;
struct  Tstrtable263798  {
NI counter;
Tsymseq263796* data;
};
typedef NU8 Tmagic263525;
typedef NU32 Tsymflag263184Set;
typedef NU32 Toption163009Set;
struct  Tsym263826  {
  Tidobj193006 Sup;
Tsymkind263435 kind;
union{
struct {Ttypeseq263828* typeinstcache;
Tscope263820* typscope;
} S1;
struct {TY263927* procinstcache;
Tsym263826* gcunsafetyreason;
} S2;
struct {TY263927* usedgenerics;
Tstrtable263798 tab;
} S3;
struct {Tsym263826* guard;
NI bitsize;
} S4;
} kindU;
Tmagic263525 magic;
Ttype263832* typ;
Tident193012* name;
Tlineinfo185336 info;
Tsym263826* owner;
Tsymflag263184Set flags;
Tnode263794* ast;
Toption163009Set options;
NI position;
NI offset;
Tloc263808 loc;
Tlib263812* annex;
Tnode263794* constraint;
};
struct  Tident193012  {
  Tidobj193006 Sup;
NimStringDesc* s;
Tident193012* next;
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
struct  Ropeobj172006  {
  TNimObject Sup;
Ropeobj172006* left;
Ropeobj172006* right;
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
struct  Tscope263820  {
NI depthlevel;
Tstrtable263798 symbols;
Tscope263820* parent;
};
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
};
typedef NU8 Tlibkind263810;
struct  Tlib263812  {
  Tlistentry141010 Sup;
Tlibkind263810 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj172006* name;
Tnode263794* path;
};
struct  Freecell30030  {
Freecell30030* next;
NI zerofield;
};
struct  Tinstantiation263816  {
Tsym263826* sym;
Ttypeseq263828* concretetypes;
TY263917* usedby;
NI compilesid;
};
struct Tbitset309006 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
struct Tnodeseq263788 {
  TGenericSeq Sup;
  Tnode263794* data[SEQ_DECL_SIZE];
};
struct Ttypeseq263828 {
  TGenericSeq Sup;
  Ttype263832* data[SEQ_DECL_SIZE];
};
struct TY263927 {
  TGenericSeq Sup;
  Tinstantiation263816* data[SEQ_DECL_SIZE];
};
struct Tsymseq263796 {
  TGenericSeq Sup;
  Tsym263826* data[SEQ_DECL_SIZE];
};
struct TY263917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, internalerror_190100_155036129)(Tlineinfo185336 info0, NimStringDesc* errmsg0);
N_NIMCALL(NI, sonslen_266351_850551059)(Tnode263794* n0);
N_NIMCALL(NIM_BOOL, levalue_270238_2984716966)(Tnode263794* a0, Tnode263794* b0);
N_NIMCALL(NIM_BOOL, samevalue_270194_2984716966)(Tnode263794* a0, Tnode263794* b0);
N_NIMCALL(void, tobitset_310001_452470228)(Tnode263794* s0, Tbitset309006** b0);
N_NIMCALL(NI64, firstord_290001_3876443242)(Ttype263832* t0);
N_NIMCALL(void, bitsetinit_309010_3966472399)(Tbitset309006** b0, NI length0);
N_NIMCALL(NI64, getsize_290135_3876443242)(Ttype263832* typ0);
N_NIMCALL(NI64, getordvalue_290129_3876443242)(Tnode263794* n0);
N_NIMCALL(void, bitsetincl_309035_3966472399)(Tbitset309006** x0, NI64 elem0);
N_NIMCALL(void, bitsetdiff_309020_3966472399)(Tbitset309006** x0, Tbitset309006* y0);
N_NIMCALL(Tnode263794*, totreeset_310252_452470228)(Tbitset309006* s0, Ttype263832* settype0, Tlineinfo185336 info0);
N_NIMCALL(Tnode263794*, newnodei_265248_850551059)(Tnodekind263020 kind0, Tlineinfo185336 info0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(NIM_BOOL, bitsetin_309045_3966472399)(Tbitset309006* x0, NI64 e0);
N_NIMCALL(Tnode263794*, newinttypenode_264665_850551059)(Tnodekind263020 kind0, NI64 intval0, Ttype263832* typ0);
N_NIMCALL(void, addson_265807_850551059)(Tnode263794* father0, Tnode263794* son0);
N_NIMCALL(NIM_BOOL, bitsetcontains_309053_3966472399)(Tbitset309006* x0, Tbitset309006* y0);
N_NIMCALL(NIM_BOOL, bitsetequals_309049_3966472399)(Tbitset309006* x0, Tbitset309006* y0);
N_NIMCALL(void, bitsetintersect_309030_3966472399)(Tbitset309006** x0, Tbitset309006* y0);
N_NIMCALL(void, bitsetunion_309015_3966472399)(Tbitset309006** x0, Tbitset309006* y0);
N_NIMCALL(void, bitsetsymdiff_309025_3966472399)(Tbitset309006** x0, Tbitset309006* y0);
STRING_LITERAL(TMP3125, "inSet", 5);
extern Gcheap50418 gch_50458_1689653243;

N_NIMCALL(NIM_BOOL, inset_310010_452470228)(Tnode263794* s0, Tnode263794* elem0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		if (!!(((*s0).kind == ((Tnodekind263020) 39)))) goto LA3;
		internalerror_190100_155036129((*s0).info, ((NimStringDesc*) &TMP3125));
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_310078_452470228;
		NI HEX3Atmp_310095_452470228;
		NI LOC6;
		NI res_310098_452470228;
		i_310078_452470228 = (NI)0;
		HEX3Atmp_310095_452470228 = (NI)0;
		LOC6 = (NI)0;
		LOC6 = sonslen_266351_850551059(s0);
		HEX3Atmp_310095_452470228 = (NI)(LOC6 - ((NI) 1));
		res_310098_452470228 = ((NI) 0);
		{
			while (1) {
				if (!(res_310098_452470228 <= HEX3Atmp_310095_452470228)) goto LA8;
				i_310078_452470228 = res_310098_452470228;
				{
					if (!((*(*s0).kindU.S6.sons->data[i_310078_452470228]).kind == ((Tnodekind263020) 44))) goto LA11;
					{
						NIM_BOOL LOC15;
						LOC15 = (NIM_BOOL)0;
						LOC15 = levalue_270238_2984716966((*(*s0).kindU.S6.sons->data[i_310078_452470228]).kindU.S6.sons->data[((NI) 0)], elem0);
						if (!(LOC15)) goto LA16;
						LOC15 = levalue_270238_2984716966(elem0, (*(*s0).kindU.S6.sons->data[i_310078_452470228]).kindU.S6.sons->data[((NI) 1)]);
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
						LOC22 = samevalue_270194_2984716966((*s0).kindU.S6.sons->data[i_310078_452470228], elem0);
						if (!LOC22) goto LA23;
						result0 = NIM_TRUE;
						goto BeforeRet;
					}
					LA23: ;
				}
				LA9: ;
				res_310098_452470228 += ((NI) 1);
			} LA8: ;
		}
	}
	result0 = NIM_FALSE;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, tobitset_310001_452470228)(Tnode263794* s0, Tbitset309006** b0) {
	NI64 first0;
	NI64 j0;
	NI64 LOC1;
	first0 = (NI64)0;
	j0 = (NI64)0;
	first0 = firstord_290001_3876443242((*(*s0).typ).sons->data[((NI) 0)]);
	LOC1 = (NI64)0;
	LOC1 = getsize_290135_3876443242((*s0).typ);
	bitsetinit_309010_3966472399(b0, ((NI) (LOC1)));
	{
		NI i_310215_452470228;
		NI HEX3Atmp_310245_452470228;
		NI LOC3;
		NI res_310248_452470228;
		i_310215_452470228 = (NI)0;
		HEX3Atmp_310245_452470228 = (NI)0;
		LOC3 = (NI)0;
		LOC3 = sonslen_266351_850551059(s0);
		HEX3Atmp_310245_452470228 = (NI)(LOC3 - ((NI) 1));
		res_310248_452470228 = ((NI) 0);
		{
			while (1) {
				if (!(res_310248_452470228 <= HEX3Atmp_310245_452470228)) goto LA5;
				i_310215_452470228 = res_310248_452470228;
				{
					if (!((*(*s0).kindU.S6.sons->data[i_310215_452470228]).kind == ((Tnodekind263020) 44))) goto LA8;
					j0 = getordvalue_290129_3876443242((*(*s0).kindU.S6.sons->data[i_310215_452470228]).kindU.S6.sons->data[((NI) 0)]);
					{
						while (1) {
							NI64 LOC12;
							LOC12 = (NI64)0;
							LOC12 = getordvalue_290129_3876443242((*(*s0).kindU.S6.sons->data[i_310215_452470228]).kindU.S6.sons->data[((NI) 1)]);
							if (!(j0 <= LOC12)) goto LA11;
							bitsetincl_309035_3966472399(b0, (NI64)(j0 - first0));
							j0 += ((NI) 1);
						} LA11: ;
					}
				}
				goto LA6;
				LA8: ;
				{
					NI64 LOC14;
					LOC14 = (NI64)0;
					LOC14 = getordvalue_290129_3876443242((*s0).kindU.S6.sons->data[i_310215_452470228]);
					bitsetincl_309035_3966472399(b0, (NI64)(LOC14 - first0));
				}
				LA6: ;
				res_310248_452470228 += ((NI) 1);
			} LA5: ;
		}
	}
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

N_NIMCALL(Tnode263794*, totreeset_310252_452470228)(Tbitset309006* s0, Ttype263832* settype0, Tlineinfo185336 info0) {
	Tnode263794* result0;
	NI64 a0;
	NI64 b0;
	NI64 e0;
	NI64 first0;
	Ttype263832* elemtype0;
	Tnode263794* n0;
	result0 = (Tnode263794*)0;
	a0 = (NI64)0;
	b0 = (NI64)0;
	e0 = (NI64)0;
	first0 = (NI64)0;
	elemtype0 = (Ttype263832*)0;
	n0 = (Tnode263794*)0;
	elemtype0 = (*settype0).sons->data[((NI) 0)];
	first0 = firstord_290001_3876443242(elemtype0);
	result0 = newnodei_265248_850551059(((Tnodekind263020) 39), info0);
	asgnRefNoCycle((void**) (&(*result0).typ), settype0);
	(*result0).info = info0;
	e0 = IL64(0);
	{
		while (1) {
			if (!(e0 < ((NI64) ((NI)((s0 ? s0->Sup.len : 0) * ((NI) 8)))))) goto LA2;
			{
				NIM_BOOL LOC5;
				Tnode263794* aa0;
				LOC5 = (NIM_BOOL)0;
				LOC5 = bitsetin_309045_3966472399(s0, e0);
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
							LOC14 = bitsetin_309045_3966472399(s0, b0);
							LOC12 = !(LOC14);
							LA13: ;
							if (!LOC12) goto LA15;
							goto LA8;
						}
						LA15: ;
					}
				} LA8: ;
				b0 -= ((NI) 1);
				aa0 = newinttypenode_264665_850551059(((Tnodekind263020) 6), (NI64)(a0 + first0), elemtype0);
				(*aa0).info = info0;
				{
					if (!(a0 == b0)) goto LA19;
					addson_265807_850551059(result0, aa0);
				}
				goto LA17;
				LA19: ;
				{
					Tnode263794* bb0;
					n0 = newnodei_265248_850551059(((Tnodekind263020) 44), info0);
					asgnRefNoCycle((void**) (&(*n0).typ), elemtype0);
					addson_265807_850551059(n0, aa0);
					bb0 = newinttypenode_264665_850551059(((Tnodekind263020) 6), (NI64)(b0 + first0), elemtype0);
					(*bb0).info = info0;
					addson_265807_850551059(n0, bb0);
					addson_265807_850551059(result0, n0);
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

N_NIMCALL(Tnode263794*, diffsets_310030_452470228)(Tnode263794* a0, Tnode263794* b0) {
	Tnode263794* result0;
	Tbitset309006* x0;
	Tbitset309006* y0;
	result0 = (Tnode263794*)0;
	x0 = (Tbitset309006*)0;
	y0 = (Tbitset309006*)0;
	tobitset_310001_452470228(a0, (&x0));
	tobitset_310001_452470228(b0, (&y0));
	bitsetdiff_309020_3966472399((&x0), y0);
	result0 = totreeset_310252_452470228(x0, (*a0).typ, (*a0).info);
	return result0;
}

N_NIMCALL(NI64, cardset_310050_452470228)(Tnode263794* s0) {
	NI64 result0;
	result0 = (NI64)0;
	result0 = IL64(0);
	{
		NI i_310435_452470228;
		NI HEX3Atmp_310460_452470228;
		NI LOC2;
		NI res_310463_452470228;
		i_310435_452470228 = (NI)0;
		HEX3Atmp_310460_452470228 = (NI)0;
		LOC2 = (NI)0;
		LOC2 = sonslen_266351_850551059(s0);
		HEX3Atmp_310460_452470228 = (NI)(LOC2 - ((NI) 1));
		res_310463_452470228 = ((NI) 0);
		{
			while (1) {
				if (!(res_310463_452470228 <= HEX3Atmp_310460_452470228)) goto LA4;
				i_310435_452470228 = res_310463_452470228;
				{
					NI64 LOC9;
					NI64 LOC10;
					if (!((*(*s0).kindU.S6.sons->data[i_310435_452470228]).kind == ((Tnodekind263020) 44))) goto LA7;
					LOC9 = (NI64)0;
					LOC9 = getordvalue_290129_3876443242((*(*s0).kindU.S6.sons->data[i_310435_452470228]).kindU.S6.sons->data[((NI) 1)]);
					LOC10 = (NI64)0;
					LOC10 = getordvalue_290129_3876443242((*(*s0).kindU.S6.sons->data[i_310435_452470228]).kindU.S6.sons->data[((NI) 0)]);
					result0 = (NI64)((NI64)((NI64)(result0 + LOC9) - LOC10) + IL64(1));
				}
				goto LA5;
				LA7: ;
				{
					result0 += ((NI) 1);
				}
				LA5: ;
				res_310463_452470228 += ((NI) 1);
			} LA4: ;
		}
	}
	return result0;
}

N_NIMCALL(NIM_BOOL, containssets_310042_452470228)(Tnode263794* a0, Tnode263794* b0) {
	NIM_BOOL result0;
	Tbitset309006* x0;
	Tbitset309006* y0;
	result0 = (NIM_BOOL)0;
	x0 = (Tbitset309006*)0;
	y0 = (Tbitset309006*)0;
	tobitset_310001_452470228(a0, (&x0));
	tobitset_310001_452470228(b0, (&y0));
	result0 = bitsetcontains_309053_3966472399(x0, y0);
	return result0;
}

N_NIMCALL(NIM_BOOL, equalsets_310046_452470228)(Tnode263794* a0, Tnode263794* b0) {
	NIM_BOOL result0;
	Tbitset309006* x0;
	Tbitset309006* y0;
	result0 = (NIM_BOOL)0;
	x0 = (Tbitset309006*)0;
	y0 = (Tbitset309006*)0;
	tobitset_310001_452470228(a0, (&x0));
	tobitset_310001_452470228(b0, (&y0));
	result0 = bitsetequals_309049_3966472399(x0, y0);
	return result0;
}

N_NIMCALL(Tnode263794*, intersectsets_310034_452470228)(Tnode263794* a0, Tnode263794* b0) {
	Tnode263794* result0;
	Tbitset309006* x0;
	Tbitset309006* y0;
	result0 = (Tnode263794*)0;
	x0 = (Tbitset309006*)0;
	y0 = (Tbitset309006*)0;
	tobitset_310001_452470228(a0, (&x0));
	tobitset_310001_452470228(b0, (&y0));
	bitsetintersect_309030_3966472399((&x0), y0);
	result0 = totreeset_310252_452470228(x0, (*a0).typ, (*a0).info);
	return result0;
}

N_NIMCALL(Tnode263794*, unionsets_310026_452470228)(Tnode263794* a0, Tnode263794* b0) {
	Tnode263794* result0;
	Tbitset309006* x0;
	Tbitset309006* y0;
	result0 = (Tnode263794*)0;
	x0 = (Tbitset309006*)0;
	y0 = (Tbitset309006*)0;
	tobitset_310001_452470228(a0, (&x0));
	tobitset_310001_452470228(b0, (&y0));
	bitsetunion_309015_3966472399((&x0), y0);
	result0 = totreeset_310252_452470228(x0, (*a0).typ, (*a0).info);
	return result0;
}

N_NIMCALL(Tnode263794*, symdiffsets_310038_452470228)(Tnode263794* a0, Tnode263794* b0) {
	Tnode263794* result0;
	Tbitset309006* x0;
	Tbitset309006* y0;
	result0 = (Tnode263794*)0;
	x0 = (Tbitset309006*)0;
	y0 = (Tbitset309006*)0;
	tobitset_310001_452470228(a0, (&x0));
	tobitset_310001_452470228(b0, (&y0));
	bitsetsymdiff_309025_3966472399((&x0), y0);
	result0 = totreeset_310252_452470228(x0, (*a0).typ, (*a0).info);
	return result0;
}

N_NIMCALL(NIM_BOOL, overlap_310006_452470228)(Tnode263794* a0, Tnode263794* b0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	{
		if (!((*a0).kind == ((Tnodekind263020) 44))) goto LA3;
		{
			NIM_BOOL LOC9;
			if (!((*b0).kind == ((Tnodekind263020) 44))) goto LA7;
			LOC9 = (NIM_BOOL)0;
			LOC9 = levalue_270238_2984716966((*a0).kindU.S6.sons->data[((NI) 0)], (*b0).kindU.S6.sons->data[((NI) 1)]);
			if (!(LOC9)) goto LA10;
			LOC9 = levalue_270238_2984716966((*b0).kindU.S6.sons->data[((NI) 0)], (*a0).kindU.S6.sons->data[((NI) 1)]);
			LA10: ;
			result0 = LOC9;
		}
		goto LA5;
		LA7: ;
		{
			NIM_BOOL LOC12;
			LOC12 = (NIM_BOOL)0;
			LOC12 = levalue_270238_2984716966((*a0).kindU.S6.sons->data[((NI) 0)], b0);
			if (!(LOC12)) goto LA13;
			LOC12 = levalue_270238_2984716966(b0, (*a0).kindU.S6.sons->data[((NI) 1)]);
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
			if (!((*b0).kind == ((Tnodekind263020) 44))) goto LA17;
			LOC19 = (NIM_BOOL)0;
			LOC19 = levalue_270238_2984716966((*b0).kindU.S6.sons->data[((NI) 0)], a0);
			if (!(LOC19)) goto LA20;
			LOC19 = levalue_270238_2984716966(a0, (*b0).kindU.S6.sons->data[((NI) 1)]);
			LA20: ;
			result0 = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			result0 = samevalue_270194_2984716966(a0, b0);
		}
		LA15: ;
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Tnode263794*, complement_310393_452470228)(Tnode263794* a0) {
	Tnode263794* result0;
	Tbitset309006* x0;
	result0 = (Tnode263794*)0;
	x0 = (Tbitset309006*)0;
	tobitset_310001_452470228(a0, (&x0));
	{
		NI i_310410_452470228;
		NI HEX3Atmp_310413_452470228;
		NI res_310416_452470228;
		i_310410_452470228 = (NI)0;
		HEX3Atmp_310413_452470228 = (NI)0;
		HEX3Atmp_310413_452470228 = (x0 ? (x0->Sup.len-1) : -1);
		res_310416_452470228 = ((NI) 0);
		{
			while (1) {
				if (!(res_310416_452470228 <= HEX3Atmp_310413_452470228)) goto LA3;
				i_310410_452470228 = res_310416_452470228;
				x0->data[i_310410_452470228] = (NI8)((NU8) ~(x0->data[i_310410_452470228]));
				res_310416_452470228 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = totreeset_310252_452470228(x0, (*a0).typ, (*a0).info);
	return result0;
}

N_NIMCALL(NIM_BOOL, emptyrange_310019_452470228)(Tnode263794* a0, Tnode263794* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = levalue_270238_2984716966(a0, b0);
	result0 = !(LOC1);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsDatInit000)(void) {
}

