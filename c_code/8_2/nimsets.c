/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tnode224816 tnode224816;
typedef struct ttype224852 ttype224852;
typedef struct tlineinfo194539 tlineinfo194539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym224846 tsym224846;
typedef struct tident199021 tident199021;
typedef struct tnodeseq224810 tnodeseq224810;
typedef struct tbitset282012 tbitset282012;
typedef struct tidobj199015 tidobj199015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq224848 ttypeseq224848;
typedef struct tloc224830 tloc224830;
typedef struct trope176009 trope176009;
typedef struct tcell44935 tcell44935;
typedef struct tcellseq44951 tcellseq44951;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44947 tcellset44947;
typedef struct tpagedesc44943 tpagedesc44943;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct tscope224840 tscope224840;
typedef struct TY224947 TY224947;
typedef struct tinstantiation224836 tinstantiation224836;
typedef struct tstrtable224820 tstrtable224820;
typedef struct tsymseq224818 tsymseq224818;
typedef struct tlib224834 tlib224834;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef struct TY224936 TY224936;
typedef struct tlistentry126022 tlistentry126022;
struct  tlineinfo194539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tnode224816  {
ttype224852* Typ;
tlineinfo194539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym224846* Sym;
} S4;
struct {tident199021* Ident;
} S5;
struct {tnodeseq224810* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj199015  {
  TNimObject Sup;
NI Id;
};
struct  tloc224830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype224852* T;
trope176009* R;
trope176009* Heaproot;
};
struct  ttype224852  {
  tidobj199015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq224848* Sons;
tnode224816* N;
tsym224846* Owner;
tsym224846* Sym;
tsym224846* Destructor;
tsym224846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc224830 Loc;
};
struct  tcell44935  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44951  {
NI Len;
NI Cap;
tcell44935** D;
};
struct  tcellset44947  {
NI Counter;
NI Max;
tpagedesc44943* Head;
tpagedesc44943** Data;
};
typedef tsmallchunk26440* TY27222[512];
typedef ttrunk26413* ttrunkbuckets26415[256];
struct  tintset26417  {
ttrunkbuckets26415 Data;
};
struct  tmemregion27210  {
NI Minlargeobj;
NI Maxlargeobj;
TY27222 Freesmallchunks;
tllchunk27204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26442* Freechunkslist;
tintset26417 Chunkstarts;
tavlnode27208* Root;
tavlnode27208* Deleted;
tavlnode27208* Last;
tavlnode27208* Freeavlnodes;
};
struct  tgcstat47014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44951 Zct;
tcellseq44951 Decstack;
tcellset44947 Cycleroots;
tcellseq44951 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
struct  tstrtable224820  {
NI Counter;
tsymseq224818* Data;
};
struct  tsym224846  {
  tidobj199015 Sup;
NU8 Kind;
union {
struct {ttypeseq224848* Typeinstcache;
tscope224840* Typscope;
} S1;
struct {TY224947* Procinstcache;
tscope224840* Scope;
} S2;
struct {TY224947* Usedgenerics;
tstrtable224820 Tab;
} S3;
struct {tsym224846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype224852* Typ;
tident199021* Name;
tlineinfo194539 Info;
tsym224846* Owner;
NU32 Flags;
tnode224816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc224830 Loc;
tlib224834* Annex;
tnode224816* Constraint;
};
struct  tident199021  {
  tidobj199015 Sup;
NimStringDesc* S;
tident199021* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  trope176009  {
  TNimObject Sup;
trope176009* Left;
trope176009* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY26420[8];
struct  tpagedesc44943  {
tpagedesc44943* Next;
NI Key;
TY26420 Bits;
};
struct  tbasechunk26438  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26440  {
  tbasechunk26438 Sup;
tsmallchunk26440* Next;
tsmallchunk26440* Prev;
tfreecell26430* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27204  {
NI Size;
NI Acc;
tllchunk27204* Next;
};
struct  tbigchunk26442  {
  tbasechunk26438 Sup;
tbigchunk26442* Next;
tbigchunk26442* Prev;
NI Align;
NF Data;
};
struct  ttrunk26413  {
ttrunk26413* Next;
NI Key;
TY26420 Bits;
};
typedef tavlnode27208* TY27214[2];
struct  tavlnode27208  {
TY27214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tscope224840  {
NI Depthlevel;
tstrtable224820 Symbols;
tnodeseq224810* Usingsyms;
tscope224840* Parent;
};
struct  tinstantiation224836  {
tsym224846* Sym;
ttypeseq224848* Concretetypes;
TY224936* Usedby;
};
struct  tlistentry126022  {
  TNimObject Sup;
tlistentry126022* Prev;
tlistentry126022* Next;
};
struct  tlib224834  {
  tlistentry126022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope176009* Name;
tnode224816* Path;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct tnodeseq224810 {
  TGenericSeq Sup;
  tnode224816* data[SEQ_DECL_SIZE];
};
struct tbitset282012 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
struct ttypeseq224848 {
  TGenericSeq Sup;
  ttype224852* data[SEQ_DECL_SIZE];
};
struct TY224947 {
  TGenericSeq Sup;
  tinstantiation224836* data[SEQ_DECL_SIZE];
};
struct tsymseq224818 {
  TGenericSeq Sup;
  tsym224846* data[SEQ_DECL_SIZE];
};
struct TY224936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, internalerror_196987)(tlineinfo194539 info, NimStringDesc* errmsg);
static N_INLINE(NI, sonslen_225249)(tnode224816* n);
N_NIMCALL(NIM_BOOL, levalue_234487)(tnode224816* a, tnode224816* b);
N_NIMCALL(NIM_BOOL, samevalue_234350)(tnode224816* a, tnode224816* b);
N_NIMCALL(void, tobitset_283004)(tnode224816* s, tbitset282012** b);
N_NIMCALL(NI64, firstord_262004)(ttype224852* t);
N_NIMCALL(void, bitsetinit_282021)(tbitset282012** b, NI length);
N_NIMCALL(NI64, getsize_262199)(ttype224852* typ);
N_NIMCALL(NI64, getordvalue_262187)(tnode224816* n);
N_NIMCALL(void, bitsetincl_282061)(tbitset282012** x, NI64 elem);
N_NIMCALL(void, bitsetdiff_282037)(tbitset282012** x, tbitset282012* y);
N_NIMCALL(tnode224816*, totreeset_283754)(tbitset282012* s, ttype224852* settype, tlineinfo194539 info);
N_NIMCALL(tnode224816*, newnodei_225138)(NU8 kind, tlineinfo194539 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(NIM_BOOL, bitsetin_282077)(tbitset282012* x, NI64 e);
N_NIMCALL(void, addson_225287)(tnode224816* father, tnode224816* son);
N_NIMCALL(tnode224816*, newinttypenode_225103)(NU8 kind, NI64 intval, ttype224852* typ);
N_NIMCALL(NIM_BOOL, bitsetcontains_282091)(tbitset282012* x, tbitset282012* y);
N_NIMCALL(NIM_BOOL, bitsetequals_282084)(tbitset282012* x, tbitset282012* y);
N_NIMCALL(void, bitsetintersect_282053)(tbitset282012** x, tbitset282012* y);
N_NIMCALL(void, bitsetunion_282029)(tbitset282012** x, tbitset282012* y);
N_NIMCALL(void, bitsetsymdiff_282045)(tbitset282012** x, tbitset282012* y);
STRING_LITERAL(TMP2829, "inSet", 5);
extern tgcheap47016 gch_47044;

static N_INLINE(NI, sonslen_225249)(tnode224816* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, inset_283019)(tnode224816* s, tnode224816* elem) {
	NIM_BOOL result;
	result = 0;
	{
		if (!!(((*s).Kind == ((NU8) 39)))) goto LA3;
		internalerror_196987((*s).Info, ((NimStringDesc*) &TMP2829));
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_283121;
		NI HEX3Atmp_283216;
		NI LOC6;
		NI res_283219;
		i_283121 = 0;
		HEX3Atmp_283216 = 0;
		LOC6 = 0;
		LOC6 = sonslen_225249(s);
		HEX3Atmp_283216 = (NI64)(LOC6 - 1);
		res_283219 = 0;
		{
			while (1) {
				if (!(res_283219 <= HEX3Atmp_283216)) goto LA8;
				i_283121 = res_283219;
				{
					if (!((*(*s).kindU.S6.Sons->data[i_283121]).Kind == ((NU8) 44))) goto LA11;
					{
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = levalue_234487((*(*s).kindU.S6.Sons->data[i_283121]).kindU.S6.Sons->data[0], elem);
						if (!(LOC15)) goto LA16;
						LOC15 = levalue_234487(elem, (*(*s).kindU.S6.Sons->data[i_283121]).kindU.S6.Sons->data[1]);
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
						LOC22 = samevalue_234350((*s).kindU.S6.Sons->data[i_283121], elem);
						if (!LOC22) goto LA23;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA23: ;
				}
				LA9: ;
				res_283219 += 1;
			} LA8: ;
		}
	}
	result = NIM_FALSE;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, tobitset_283004)(tnode224816* s, tbitset282012** b) {
	NI64 first;
	NI64 j;
	NI64 LOC1;
	first = 0;
	j = 0;
	first = firstord_262004((*(*s).Typ).Sons->data[0]);
	LOC1 = 0;
	LOC1 = getsize_262199((*s).Typ);
	bitsetinit_282021(b, ((NI) (LOC1)));
	{
		NI i_283617;
		NI HEX3Atmp_283728;
		NI LOC3;
		NI res_283731;
		i_283617 = 0;
		HEX3Atmp_283728 = 0;
		LOC3 = 0;
		LOC3 = sonslen_225249(s);
		HEX3Atmp_283728 = (NI64)(LOC3 - 1);
		res_283731 = 0;
		{
			while (1) {
				if (!(res_283731 <= HEX3Atmp_283728)) goto LA5;
				i_283617 = res_283731;
				{
					if (!((*(*s).kindU.S6.Sons->data[i_283617]).Kind == ((NU8) 44))) goto LA8;
					j = getordvalue_262187((*(*s).kindU.S6.Sons->data[i_283617]).kindU.S6.Sons->data[0]);
					{
						while (1) {
							NI64 LOC12;
							LOC12 = 0;
							LOC12 = getordvalue_262187((*(*s).kindU.S6.Sons->data[i_283617]).kindU.S6.Sons->data[1]);
							if (!(j <= LOC12)) goto LA11;
							bitsetincl_282061(b, (NI64)(j - first));
							j += 1;
						} LA11: ;
					}
				}
				goto LA6;
				LA8: ;
				{
					NI64 LOC14;
					LOC14 = 0;
					LOC14 = getordvalue_262187((*s).kindU.S6.Sons->data[i_283617]);
					bitsetincl_282061(b, (NI64)(LOC14 - first));
				}
				LA6: ;
				res_283731 += 1;
			} LA5: ;
		}
	}
}

static N_INLINE(tcell44935*, usrtocell_48646)(void* usr) {
	tcell44935* result;
	result = 0;
	result = ((tcell44935*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44935))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44935* c) {
	addzct_48617((&gch_47044.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44935* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48646(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44935* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48646((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(tnode224816*, totreeset_283754)(tbitset282012* s, ttype224852* settype, tlineinfo194539 info) {
	tnode224816* result;
	NI64 a;
	NI64 b;
	NI64 e;
	NI64 first;
	ttype224852* elemtype;
	tnode224816* n;
	result = 0;
	a = 0;
	b = 0;
	e = 0;
	first = 0;
	elemtype = 0;
	n = 0;
	elemtype = (*settype).Sons->data[0];
	first = firstord_262004(elemtype);
	result = newnodei_225138(((NU8) 39), info);
	asgnRefNoCycle((void**) (&(*result).Typ), settype);
	(*result).Info = info;
	e = IL64(0);
	{
		while (1) {
			if (!(e < ((NI64) ((NI64)(s->Sup.len * 8))))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = bitsetin_282077(s, e);
				if (!LOC5) goto LA6;
				a = e;
				b = e;
				{
					while (1) {
						b += 1;
						{
							NIM_BOOL LOC12;
							NIM_BOOL LOC14;
							LOC12 = 0;
							LOC12 = (((NI64) ((NI64)(s->Sup.len * 8))) <= b);
							if (LOC12) goto LA13;
							LOC14 = 0;
							LOC14 = bitsetin_282077(s, b);
							LOC12 = !(LOC14);
							LA13: ;
							if (!LOC12) goto LA15;
							goto LA8;
						}
						LA15: ;
					}
				} LA8: ;
				b -= 1;
				{
					tnode224816* LOC21;
					if (!(a == b)) goto LA19;
					LOC21 = 0;
					LOC21 = newinttypenode_225103(((NU8) 6), (NI64)(a + first), elemtype);
					addson_225287(result, LOC21);
				}
				goto LA17;
				LA19: ;
				{
					tnode224816* LOC23;
					tnode224816* LOC24;
					n = newnodei_225138(((NU8) 44), info);
					asgnRefNoCycle((void**) (&(*n).Typ), elemtype);
					LOC23 = 0;
					LOC23 = newinttypenode_225103(((NU8) 6), (NI64)(a + first), elemtype);
					addson_225287(n, LOC23);
					LOC24 = 0;
					LOC24 = newinttypenode_225103(((NU8) 6), (NI64)(b + first), elemtype);
					addson_225287(n, LOC24);
					addson_225287(result, n);
				}
				LA17: ;
				e = b;
			}
			LA6: ;
			e += 1;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(tnode224816*, diffsets_283054)(tnode224816* a, tnode224816* b) {
	tnode224816* result;
	tbitset282012* x;
	tbitset282012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_283004(a, (&x));
	tobitset_283004(b, (&y));
	bitsetdiff_282037((&x), y);
	result = totreeset_283754(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NI64, cardset_283089)(tnode224816* s) {
	NI64 result;
	result = 0;
	result = IL64(0);
	{
		NI i_284023;
		NI HEX3Atmp_284116;
		NI LOC2;
		NI res_284119;
		i_284023 = 0;
		HEX3Atmp_284116 = 0;
		LOC2 = 0;
		LOC2 = sonslen_225249(s);
		HEX3Atmp_284116 = (NI64)(LOC2 - 1);
		res_284119 = 0;
		{
			while (1) {
				if (!(res_284119 <= HEX3Atmp_284116)) goto LA4;
				i_284023 = res_284119;
				{
					NI64 LOC9;
					NI64 LOC10;
					if (!((*(*s).kindU.S6.Sons->data[i_284023]).Kind == ((NU8) 44))) goto LA7;
					LOC9 = 0;
					LOC9 = getordvalue_262187((*(*s).kindU.S6.Sons->data[i_284023]).kindU.S6.Sons->data[1]);
					LOC10 = 0;
					LOC10 = getordvalue_262187((*(*s).kindU.S6.Sons->data[i_284023]).kindU.S6.Sons->data[0]);
					result = (NI64)((NI64)((NI64)(result + LOC9) - LOC10) + IL64(1));
				}
				goto LA5;
				LA7: ;
				{
					result += 1;
				}
				LA5: ;
				res_284119 += 1;
			} LA4: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, containssets_283075)(tnode224816* a, tnode224816* b) {
	NIM_BOOL result;
	tbitset282012* x;
	tbitset282012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_283004(a, (&x));
	tobitset_283004(b, (&y));
	result = bitsetcontains_282091(x, y);
	return result;
}

N_NIMCALL(NIM_BOOL, equalsets_283082)(tnode224816* a, tnode224816* b) {
	NIM_BOOL result;
	tbitset282012* x;
	tbitset282012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_283004(a, (&x));
	tobitset_283004(b, (&y));
	result = bitsetequals_282084(x, y);
	return result;
}

N_NIMCALL(tnode224816*, intersectsets_283061)(tnode224816* a, tnode224816* b) {
	tnode224816* result;
	tbitset282012* x;
	tbitset282012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_283004(a, (&x));
	tobitset_283004(b, (&y));
	bitsetintersect_282053((&x), y);
	result = totreeset_283754(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(tnode224816*, unionsets_283047)(tnode224816* a, tnode224816* b) {
	tnode224816* result;
	tbitset282012* x;
	tbitset282012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_283004(a, (&x));
	tobitset_283004(b, (&y));
	bitsetunion_282029((&x), y);
	result = totreeset_283754(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(tnode224816*, symdiffsets_283068)(tnode224816* a, tnode224816* b) {
	tnode224816* result;
	tbitset282012* x;
	tbitset282012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_283004(a, (&x));
	tobitset_283004(b, (&y));
	bitsetsymdiff_282045((&x), y);
	result = totreeset_283754(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NIM_BOOL, overlap_283012)(tnode224816* a, tnode224816* b) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*a).Kind == ((NU8) 44))) goto LA3;
		{
			NIM_BOOL LOC9;
			if (!((*b).Kind == ((NU8) 44))) goto LA7;
			LOC9 = 0;
			LOC9 = levalue_234487((*a).kindU.S6.Sons->data[0], (*b).kindU.S6.Sons->data[1]);
			if (!(LOC9)) goto LA10;
			LOC9 = levalue_234487((*b).kindU.S6.Sons->data[0], (*a).kindU.S6.Sons->data[1]);
			LA10: ;
			result = LOC9;
		}
		goto LA5;
		LA7: ;
		{
			NIM_BOOL LOC12;
			LOC12 = 0;
			LOC12 = levalue_234487((*a).kindU.S6.Sons->data[0], b);
			if (!(LOC12)) goto LA13;
			LOC12 = levalue_234487(b, (*a).kindU.S6.Sons->data[1]);
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
			if (!((*b).Kind == ((NU8) 44))) goto LA17;
			LOC19 = 0;
			LOC19 = levalue_234487((*b).kindU.S6.Sons->data[0], a);
			if (!(LOC19)) goto LA20;
			LOC19 = levalue_234487(a, (*b).kindU.S6.Sons->data[1]);
			LA20: ;
			result = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			result = samevalue_234350(a, b);
		}
		LA15: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(tnode224816*, complement_283966)(tnode224816* a) {
	tnode224816* result;
	tbitset282012* x;
	result = 0;
	x = 0;
	tobitset_283004(a, (&x));
	{
		NI i_283984;
		NI HEX3Atmp_283987;
		NI res_283990;
		i_283984 = 0;
		HEX3Atmp_283987 = 0;
		HEX3Atmp_283987 = (x->Sup.len-1);
		res_283990 = 0;
		{
			while (1) {
				if (!(res_283990 <= HEX3Atmp_283987)) goto LA3;
				i_283984 = res_283990;
				x->data[i_283984] = (NI8)((NU8) ~(x->data[i_283984]));
				res_283990 += 1;
			} LA3: ;
		}
	}
	result = totreeset_283754(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NIM_BOOL, emptyrange_283034)(tnode224816* a, tnode224816* b) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = levalue_234487(a, b);
	result = !(LOC1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_nimsetsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_nimsetsDatInit)(void) {
}

