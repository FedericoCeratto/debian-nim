/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tnode226816 tnode226816;
typedef struct ttype226852 ttype226852;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym226846 tsym226846;
typedef struct tident201021 tident201021;
typedef struct tnodeseq226810 tnodeseq226810;
typedef struct tbitset284012 tbitset284012;
typedef struct tidobj201015 tidobj201015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq226848 ttypeseq226848;
typedef struct tloc226830 tloc226830;
typedef struct trope178009 trope178009;
typedef struct tcell44933 tcell44933;
typedef struct tcellseq44949 tcellseq44949;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44945 tcellset44945;
typedef struct tpagedesc44941 tpagedesc44941;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct tscope226840 tscope226840;
typedef struct TY226947 TY226947;
typedef struct tinstantiation226836 tinstantiation226836;
typedef struct tstrtable226820 tstrtable226820;
typedef struct tsymseq226818 tsymseq226818;
typedef struct tlib226834 tlib226834;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef struct TY226936 TY226936;
typedef struct tlistentry127022 tlistentry127022;
struct  tlineinfo196539  {
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
struct  tnode226816  {
ttype226852* Typ;
tlineinfo196539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym226846* Sym;
} S4;
struct {tident201021* Ident;
} S5;
struct {tnodeseq226810* Sons;
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
struct  tidobj201015  {
  TNimObject Sup;
NI Id;
};
struct  tloc226830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype226852* T;
trope178009* R;
trope178009* Heaproot;
};
struct  ttype226852  {
  tidobj201015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq226848* Sons;
tnode226816* N;
tsym226846* Owner;
tsym226846* Sym;
tsym226846* Destructor;
tsym226846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc226830 Loc;
};
struct  tcell44933  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44949  {
NI Len;
NI Cap;
tcell44933** D;
};
struct  tcellset44945  {
NI Counter;
NI Max;
tpagedesc44941* Head;
tpagedesc44941** Data;
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
tcellseq44949 Zct;
tcellseq44949 Decstack;
tcellset44945 Cycleroots;
tcellseq44949 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
struct  tstrtable226820  {
NI Counter;
tsymseq226818* Data;
};
struct  tsym226846  {
  tidobj201015 Sup;
NU8 Kind;
union {
struct {ttypeseq226848* Typeinstcache;
tscope226840* Typscope;
} S1;
struct {TY226947* Procinstcache;
tscope226840* Scope;
} S2;
struct {TY226947* Usedgenerics;
tstrtable226820 Tab;
} S3;
struct {tsym226846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype226852* Typ;
tident201021* Name;
tlineinfo196539 Info;
tsym226846* Owner;
NU32 Flags;
tnode226816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc226830 Loc;
tlib226834* Annex;
tnode226816* Constraint;
};
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
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
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY26420[16];
struct  tpagedesc44941  {
tpagedesc44941* Next;
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
struct  tscope226840  {
NI Depthlevel;
tstrtable226820 Symbols;
tnodeseq226810* Usingsyms;
tscope226840* Parent;
};
struct  tinstantiation226836  {
tsym226846* Sym;
ttypeseq226848* Concretetypes;
TY226936* Usedby;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib226834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode226816* Path;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct tnodeseq226810 {
  TGenericSeq Sup;
  tnode226816* data[SEQ_DECL_SIZE];
};
struct tbitset284012 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
struct ttypeseq226848 {
  TGenericSeq Sup;
  ttype226852* data[SEQ_DECL_SIZE];
};
struct TY226947 {
  TGenericSeq Sup;
  tinstantiation226836* data[SEQ_DECL_SIZE];
};
struct tsymseq226818 {
  TGenericSeq Sup;
  tsym226846* data[SEQ_DECL_SIZE];
};
struct TY226936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, internalerror_198987)(tlineinfo196539 info, NimStringDesc* errmsg);
static N_INLINE(NI, sonslen_227249)(tnode226816* n);
N_NIMCALL(NIM_BOOL, levalue_236487)(tnode226816* a, tnode226816* b);
N_NIMCALL(NIM_BOOL, samevalue_236350)(tnode226816* a, tnode226816* b);
N_NIMCALL(void, tobitset_285004)(tnode226816* s, tbitset284012** b);
N_NIMCALL(NI64, firstord_264004)(ttype226852* t);
N_NIMCALL(void, bitsetinit_284021)(tbitset284012** b, NI length);
N_NIMCALL(NI64, getsize_264199)(ttype226852* typ);
N_NIMCALL(NI64, getordvalue_264187)(tnode226816* n);
N_NIMCALL(void, bitsetincl_284061)(tbitset284012** x, NI64 elem);
N_NIMCALL(void, bitsetdiff_284037)(tbitset284012** x, tbitset284012* y);
N_NIMCALL(tnode226816*, totreeset_285753)(tbitset284012* s, ttype226852* settype, tlineinfo196539 info);
N_NIMCALL(tnode226816*, newnodei_227138)(NU8 kind, tlineinfo196539 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44933*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44933* c);
N_NOINLINE(void, addzct_48617)(tcellseq44949* s, tcell44933* c);
N_NIMCALL(NIM_BOOL, bitsetin_284077)(tbitset284012* x, NI64 e);
N_NIMCALL(void, addson_227287)(tnode226816* father, tnode226816* son);
N_NIMCALL(tnode226816*, newinttypenode_227103)(NU8 kind, NI64 intval, ttype226852* typ);
N_NIMCALL(NIM_BOOL, bitsetcontains_284091)(tbitset284012* x, tbitset284012* y);
N_NIMCALL(NIM_BOOL, bitsetequals_284084)(tbitset284012* x, tbitset284012* y);
N_NIMCALL(void, bitsetintersect_284053)(tbitset284012** x, tbitset284012* y);
N_NIMCALL(void, bitsetunion_284029)(tbitset284012** x, tbitset284012* y);
N_NIMCALL(void, bitsetsymdiff_284045)(tbitset284012** x, tbitset284012* y);
STRING_LITERAL(TMP2831, "inSet", 5);
extern tgcheap47016 gch_47044;

static N_INLINE(NI, sonslen_227249)(tnode226816* n) {
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

N_NIMCALL(NIM_BOOL, inset_285019)(tnode226816* s, tnode226816* elem) {
	NIM_BOOL result;
	result = 0;
	{
		if (!!(((*s).Kind == ((NU8) 39)))) goto LA3;
		internalerror_198987((*s).Info, ((NimStringDesc*) &TMP2831));
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_285121;
		NI HEX3Atmp_285216;
		NI LOC6;
		NI res_285219;
		i_285121 = 0;
		HEX3Atmp_285216 = 0;
		LOC6 = 0;
		LOC6 = sonslen_227249(s);
		HEX3Atmp_285216 = (NI32)(LOC6 - 1);
		res_285219 = 0;
		{
			while (1) {
				if (!(res_285219 <= HEX3Atmp_285216)) goto LA8;
				i_285121 = res_285219;
				{
					if (!((*(*s).kindU.S6.Sons->data[i_285121]).Kind == ((NU8) 44))) goto LA11;
					{
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = levalue_236487((*(*s).kindU.S6.Sons->data[i_285121]).kindU.S6.Sons->data[0], elem);
						if (!(LOC15)) goto LA16;
						LOC15 = levalue_236487(elem, (*(*s).kindU.S6.Sons->data[i_285121]).kindU.S6.Sons->data[1]);
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
						LOC22 = samevalue_236350((*s).kindU.S6.Sons->data[i_285121], elem);
						if (!LOC22) goto LA23;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA23: ;
				}
				LA9: ;
				res_285219 += 1;
			} LA8: ;
		}
	}
	result = NIM_FALSE;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, tobitset_285004)(tnode226816* s, tbitset284012** b) {
	NI64 first;
	NI64 j;
	NI64 LOC1;
	first = 0;
	j = 0;
	first = firstord_264004((*(*s).Typ).Sons->data[0]);
	LOC1 = 0;
	LOC1 = getsize_264199((*s).Typ);
	bitsetinit_284021(b, ((NI) (LOC1)));
	{
		NI i_285617;
		NI HEX3Atmp_285727;
		NI LOC3;
		NI res_285730;
		i_285617 = 0;
		HEX3Atmp_285727 = 0;
		LOC3 = 0;
		LOC3 = sonslen_227249(s);
		HEX3Atmp_285727 = (NI32)(LOC3 - 1);
		res_285730 = 0;
		{
			while (1) {
				if (!(res_285730 <= HEX3Atmp_285727)) goto LA5;
				i_285617 = res_285730;
				{
					if (!((*(*s).kindU.S6.Sons->data[i_285617]).Kind == ((NU8) 44))) goto LA8;
					j = getordvalue_264187((*(*s).kindU.S6.Sons->data[i_285617]).kindU.S6.Sons->data[0]);
					{
						while (1) {
							NI64 LOC12;
							LOC12 = 0;
							LOC12 = getordvalue_264187((*(*s).kindU.S6.Sons->data[i_285617]).kindU.S6.Sons->data[1]);
							if (!(j <= LOC12)) goto LA11;
							bitsetincl_284061(b, (NI64)(j - first));
							j += 1;
						} LA11: ;
					}
				}
				goto LA6;
				LA8: ;
				{
					NI64 LOC14;
					LOC14 = 0;
					LOC14 = getordvalue_264187((*s).kindU.S6.Sons->data[i_285617]);
					bitsetincl_284061(b, (NI64)(LOC14 - first));
				}
				LA6: ;
				res_285730 += 1;
			} LA5: ;
		}
	}
}

static N_INLINE(tcell44933*, usrtocell_48646)(void* usr) {
	tcell44933* result;
	result = 0;
	result = ((tcell44933*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44933))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44933* c) {
	addzct_48617((&gch_47044.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44933* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48646(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44933* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48646((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(tnode226816*, totreeset_285753)(tbitset284012* s, ttype226852* settype, tlineinfo196539 info) {
	tnode226816* result;
	NI64 a;
	NI64 b;
	NI64 e;
	NI64 first;
	ttype226852* elemtype;
	tnode226816* n;
	result = 0;
	a = 0;
	b = 0;
	e = 0;
	first = 0;
	elemtype = 0;
	n = 0;
	elemtype = (*settype).Sons->data[0];
	first = firstord_264004(elemtype);
	result = newnodei_227138(((NU8) 39), info);
	asgnRefNoCycle((void**) (&(*result).Typ), settype);
	(*result).Info = info;
	e = IL64(0);
	{
		while (1) {
			if (!(e < ((NI64) ((NI32)(s->Sup.len * 8))))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = bitsetin_284077(s, e);
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
							LOC12 = (((NI64) ((NI32)(s->Sup.len * 8))) <= b);
							if (LOC12) goto LA13;
							LOC14 = 0;
							LOC14 = bitsetin_284077(s, b);
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
					tnode226816* LOC21;
					if (!(a == b)) goto LA19;
					LOC21 = 0;
					LOC21 = newinttypenode_227103(((NU8) 6), (NI64)(a + first), elemtype);
					addson_227287(result, LOC21);
				}
				goto LA17;
				LA19: ;
				{
					tnode226816* LOC23;
					tnode226816* LOC24;
					n = newnodei_227138(((NU8) 44), info);
					asgnRefNoCycle((void**) (&(*n).Typ), elemtype);
					LOC23 = 0;
					LOC23 = newinttypenode_227103(((NU8) 6), (NI64)(a + first), elemtype);
					addson_227287(n, LOC23);
					LOC24 = 0;
					LOC24 = newinttypenode_227103(((NU8) 6), (NI64)(b + first), elemtype);
					addson_227287(n, LOC24);
					addson_227287(result, n);
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

N_NIMCALL(tnode226816*, diffsets_285054)(tnode226816* a, tnode226816* b) {
	tnode226816* result;
	tbitset284012* x;
	tbitset284012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_285004(a, (&x));
	tobitset_285004(b, (&y));
	bitsetdiff_284037((&x), y);
	result = totreeset_285753(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NI64, cardset_285089)(tnode226816* s) {
	NI64 result;
	result = 0;
	result = IL64(0);
	{
		NI i_286022;
		NI HEX3Atmp_286115;
		NI LOC2;
		NI res_286118;
		i_286022 = 0;
		HEX3Atmp_286115 = 0;
		LOC2 = 0;
		LOC2 = sonslen_227249(s);
		HEX3Atmp_286115 = (NI32)(LOC2 - 1);
		res_286118 = 0;
		{
			while (1) {
				if (!(res_286118 <= HEX3Atmp_286115)) goto LA4;
				i_286022 = res_286118;
				{
					NI64 LOC9;
					NI64 LOC10;
					if (!((*(*s).kindU.S6.Sons->data[i_286022]).Kind == ((NU8) 44))) goto LA7;
					LOC9 = 0;
					LOC9 = getordvalue_264187((*(*s).kindU.S6.Sons->data[i_286022]).kindU.S6.Sons->data[1]);
					LOC10 = 0;
					LOC10 = getordvalue_264187((*(*s).kindU.S6.Sons->data[i_286022]).kindU.S6.Sons->data[0]);
					result = (NI64)((NI64)((NI64)(result + LOC9) - LOC10) + IL64(1));
				}
				goto LA5;
				LA7: ;
				{
					result += 1;
				}
				LA5: ;
				res_286118 += 1;
			} LA4: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, containssets_285075)(tnode226816* a, tnode226816* b) {
	NIM_BOOL result;
	tbitset284012* x;
	tbitset284012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_285004(a, (&x));
	tobitset_285004(b, (&y));
	result = bitsetcontains_284091(x, y);
	return result;
}

N_NIMCALL(NIM_BOOL, equalsets_285082)(tnode226816* a, tnode226816* b) {
	NIM_BOOL result;
	tbitset284012* x;
	tbitset284012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_285004(a, (&x));
	tobitset_285004(b, (&y));
	result = bitsetequals_284084(x, y);
	return result;
}

N_NIMCALL(tnode226816*, intersectsets_285061)(tnode226816* a, tnode226816* b) {
	tnode226816* result;
	tbitset284012* x;
	tbitset284012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_285004(a, (&x));
	tobitset_285004(b, (&y));
	bitsetintersect_284053((&x), y);
	result = totreeset_285753(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(tnode226816*, unionsets_285047)(tnode226816* a, tnode226816* b) {
	tnode226816* result;
	tbitset284012* x;
	tbitset284012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_285004(a, (&x));
	tobitset_285004(b, (&y));
	bitsetunion_284029((&x), y);
	result = totreeset_285753(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(tnode226816*, symdiffsets_285068)(tnode226816* a, tnode226816* b) {
	tnode226816* result;
	tbitset284012* x;
	tbitset284012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_285004(a, (&x));
	tobitset_285004(b, (&y));
	bitsetsymdiff_284045((&x), y);
	result = totreeset_285753(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NIM_BOOL, overlap_285012)(tnode226816* a, tnode226816* b) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*a).Kind == ((NU8) 44))) goto LA3;
		{
			NIM_BOOL LOC9;
			if (!((*b).Kind == ((NU8) 44))) goto LA7;
			LOC9 = 0;
			LOC9 = levalue_236487((*a).kindU.S6.Sons->data[0], (*b).kindU.S6.Sons->data[1]);
			if (!(LOC9)) goto LA10;
			LOC9 = levalue_236487((*b).kindU.S6.Sons->data[0], (*a).kindU.S6.Sons->data[1]);
			LA10: ;
			result = LOC9;
		}
		goto LA5;
		LA7: ;
		{
			NIM_BOOL LOC12;
			LOC12 = 0;
			LOC12 = levalue_236487((*a).kindU.S6.Sons->data[0], b);
			if (!(LOC12)) goto LA13;
			LOC12 = levalue_236487(b, (*a).kindU.S6.Sons->data[1]);
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
			LOC19 = levalue_236487((*b).kindU.S6.Sons->data[0], a);
			if (!(LOC19)) goto LA20;
			LOC19 = levalue_236487(a, (*b).kindU.S6.Sons->data[1]);
			LA20: ;
			result = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			result = samevalue_236350(a, b);
		}
		LA15: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(tnode226816*, complement_285965)(tnode226816* a) {
	tnode226816* result;
	tbitset284012* x;
	result = 0;
	x = 0;
	tobitset_285004(a, (&x));
	{
		NI i_285983;
		NI HEX3Atmp_285986;
		NI res_285989;
		i_285983 = 0;
		HEX3Atmp_285986 = 0;
		HEX3Atmp_285986 = (x->Sup.len-1);
		res_285989 = 0;
		{
			while (1) {
				if (!(res_285989 <= HEX3Atmp_285986)) goto LA3;
				i_285983 = res_285989;
				x->data[i_285983] = (NI8)((NU8) ~(x->data[i_285983]));
				res_285989 += 1;
			} LA3: ;
		}
	}
	result = totreeset_285753(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NIM_BOOL, emptyrange_285034)(tnode226816* a, tnode226816* b) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = levalue_236487(a, b);
	result = !(LOC1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_nimsetsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_nimsetsDatInit)(void) {
}

