/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tnode225816 tnode225816;
typedef struct ttype225852 ttype225852;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym225846 tsym225846;
typedef struct tident200021 tident200021;
typedef struct tnodeseq225810 tnodeseq225810;
typedef struct tbitset283012 tbitset283012;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq225848 ttypeseq225848;
typedef struct tloc225830 tloc225830;
typedef struct trope177009 trope177009;
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
typedef struct tscope225840 tscope225840;
typedef struct TY225947 TY225947;
typedef struct tinstantiation225836 tinstantiation225836;
typedef struct tstrtable225820 tstrtable225820;
typedef struct tsymseq225818 tsymseq225818;
typedef struct tlib225834 tlib225834;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef struct TY225936 TY225936;
typedef struct tlistentry127022 tlistentry127022;
struct  tlineinfo195539  {
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
struct  tnode225816  {
ttype225852* Typ;
tlineinfo195539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym225846* Sym;
} S4;
struct {tident200021* Ident;
} S5;
struct {tnodeseq225810* Sons;
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
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tloc225830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype225852* T;
trope177009* R;
trope177009* Heaproot;
};
struct  ttype225852  {
  tidobj200015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq225848* Sons;
tnode225816* N;
tsym225846* Owner;
tsym225846* Sym;
tsym225846* Destructor;
tsym225846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc225830 Loc;
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
struct  tstrtable225820  {
NI Counter;
tsymseq225818* Data;
};
struct  tsym225846  {
  tidobj200015 Sup;
NU8 Kind;
union {
struct {ttypeseq225848* Typeinstcache;
tscope225840* Typscope;
} S1;
struct {TY225947* Procinstcache;
tscope225840* Scope;
} S2;
struct {TY225947* Usedgenerics;
tstrtable225820 Tab;
} S3;
struct {tsym225846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype225852* Typ;
tident200021* Name;
tlineinfo195539 Info;
tsym225846* Owner;
NU32 Flags;
tnode225816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc225830 Loc;
tlib225834* Annex;
tnode225816* Constraint;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
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
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
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
struct  tscope225840  {
NI Depthlevel;
tstrtable225820 Symbols;
tnodeseq225810* Usingsyms;
tscope225840* Parent;
};
struct  tinstantiation225836  {
tsym225846* Sym;
ttypeseq225848* Concretetypes;
TY225936* Usedby;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib225834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode225816* Path;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct tnodeseq225810 {
  TGenericSeq Sup;
  tnode225816* data[SEQ_DECL_SIZE];
};
struct tbitset283012 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
struct ttypeseq225848 {
  TGenericSeq Sup;
  ttype225852* data[SEQ_DECL_SIZE];
};
struct TY225947 {
  TGenericSeq Sup;
  tinstantiation225836* data[SEQ_DECL_SIZE];
};
struct tsymseq225818 {
  TGenericSeq Sup;
  tsym225846* data[SEQ_DECL_SIZE];
};
struct TY225936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, internalerror_197987)(tlineinfo195539 info, NimStringDesc* errmsg);
static N_INLINE(NI, sonslen_226249)(tnode225816* n);
N_NIMCALL(NIM_BOOL, levalue_235487)(tnode225816* a, tnode225816* b);
N_NIMCALL(NIM_BOOL, samevalue_235350)(tnode225816* a, tnode225816* b);
N_NIMCALL(void, tobitset_284004)(tnode225816* s, tbitset283012** b);
N_NIMCALL(NI64, firstord_263004)(ttype225852* t);
N_NIMCALL(void, bitsetinit_283021)(tbitset283012** b, NI length);
N_NIMCALL(NI64, getsize_263199)(ttype225852* typ);
N_NIMCALL(NI64, getordvalue_263187)(tnode225816* n);
N_NIMCALL(void, bitsetincl_283061)(tbitset283012** x, NI64 elem);
N_NIMCALL(void, bitsetdiff_283037)(tbitset283012** x, tbitset283012* y);
N_NIMCALL(tnode225816*, totreeset_284754)(tbitset283012* s, ttype225852* settype, tlineinfo195539 info);
N_NIMCALL(tnode225816*, newnodei_226138)(NU8 kind, tlineinfo195539 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(NIM_BOOL, bitsetin_283077)(tbitset283012* x, NI64 e);
N_NIMCALL(void, addson_226287)(tnode225816* father, tnode225816* son);
N_NIMCALL(tnode225816*, newinttypenode_226103)(NU8 kind, NI64 intval, ttype225852* typ);
N_NIMCALL(NIM_BOOL, bitsetcontains_283091)(tbitset283012* x, tbitset283012* y);
N_NIMCALL(NIM_BOOL, bitsetequals_283084)(tbitset283012* x, tbitset283012* y);
N_NIMCALL(void, bitsetintersect_283053)(tbitset283012** x, tbitset283012* y);
N_NIMCALL(void, bitsetunion_283029)(tbitset283012** x, tbitset283012* y);
N_NIMCALL(void, bitsetsymdiff_283045)(tbitset283012** x, tbitset283012* y);
STRING_LITERAL(TMP2830, "inSet", 5);
extern tgcheap47016 gch_47044;

static N_INLINE(NI, sonslen_226249)(tnode225816* n) {
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

N_NIMCALL(NIM_BOOL, inset_284019)(tnode225816* s, tnode225816* elem) {
	NIM_BOOL result;
	result = 0;
	{
		if (!!(((*s).Kind == ((NU8) 39)))) goto LA3;
		internalerror_197987((*s).Info, ((NimStringDesc*) &TMP2830));
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_284121;
		NI HEX3Atmp_284216;
		NI LOC6;
		NI res_284219;
		i_284121 = 0;
		HEX3Atmp_284216 = 0;
		LOC6 = 0;
		LOC6 = sonslen_226249(s);
		HEX3Atmp_284216 = (NI64)(LOC6 - 1);
		res_284219 = 0;
		{
			while (1) {
				if (!(res_284219 <= HEX3Atmp_284216)) goto LA8;
				i_284121 = res_284219;
				{
					if (!((*(*s).kindU.S6.Sons->data[i_284121]).Kind == ((NU8) 44))) goto LA11;
					{
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = levalue_235487((*(*s).kindU.S6.Sons->data[i_284121]).kindU.S6.Sons->data[0], elem);
						if (!(LOC15)) goto LA16;
						LOC15 = levalue_235487(elem, (*(*s).kindU.S6.Sons->data[i_284121]).kindU.S6.Sons->data[1]);
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
						LOC22 = samevalue_235350((*s).kindU.S6.Sons->data[i_284121], elem);
						if (!LOC22) goto LA23;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA23: ;
				}
				LA9: ;
				res_284219 += 1;
			} LA8: ;
		}
	}
	result = NIM_FALSE;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, tobitset_284004)(tnode225816* s, tbitset283012** b) {
	NI64 first;
	NI64 j;
	NI64 LOC1;
	first = 0;
	j = 0;
	first = firstord_263004((*(*s).Typ).Sons->data[0]);
	LOC1 = 0;
	LOC1 = getsize_263199((*s).Typ);
	bitsetinit_283021(b, ((NI) (LOC1)));
	{
		NI i_284617;
		NI HEX3Atmp_284728;
		NI LOC3;
		NI res_284731;
		i_284617 = 0;
		HEX3Atmp_284728 = 0;
		LOC3 = 0;
		LOC3 = sonslen_226249(s);
		HEX3Atmp_284728 = (NI64)(LOC3 - 1);
		res_284731 = 0;
		{
			while (1) {
				if (!(res_284731 <= HEX3Atmp_284728)) goto LA5;
				i_284617 = res_284731;
				{
					if (!((*(*s).kindU.S6.Sons->data[i_284617]).Kind == ((NU8) 44))) goto LA8;
					j = getordvalue_263187((*(*s).kindU.S6.Sons->data[i_284617]).kindU.S6.Sons->data[0]);
					{
						while (1) {
							NI64 LOC12;
							LOC12 = 0;
							LOC12 = getordvalue_263187((*(*s).kindU.S6.Sons->data[i_284617]).kindU.S6.Sons->data[1]);
							if (!(j <= LOC12)) goto LA11;
							bitsetincl_283061(b, (NI64)(j - first));
							j += 1;
						} LA11: ;
					}
				}
				goto LA6;
				LA8: ;
				{
					NI64 LOC14;
					LOC14 = 0;
					LOC14 = getordvalue_263187((*s).kindU.S6.Sons->data[i_284617]);
					bitsetincl_283061(b, (NI64)(LOC14 - first));
				}
				LA6: ;
				res_284731 += 1;
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

N_NIMCALL(tnode225816*, totreeset_284754)(tbitset283012* s, ttype225852* settype, tlineinfo195539 info) {
	tnode225816* result;
	NI64 a;
	NI64 b;
	NI64 e;
	NI64 first;
	ttype225852* elemtype;
	tnode225816* n;
	result = 0;
	a = 0;
	b = 0;
	e = 0;
	first = 0;
	elemtype = 0;
	n = 0;
	elemtype = (*settype).Sons->data[0];
	first = firstord_263004(elemtype);
	result = newnodei_226138(((NU8) 39), info);
	asgnRefNoCycle((void**) (&(*result).Typ), settype);
	(*result).Info = info;
	e = IL64(0);
	{
		while (1) {
			if (!(e < ((NI64) ((NI64)(s->Sup.len * 8))))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = bitsetin_283077(s, e);
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
							LOC14 = bitsetin_283077(s, b);
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
					tnode225816* LOC21;
					if (!(a == b)) goto LA19;
					LOC21 = 0;
					LOC21 = newinttypenode_226103(((NU8) 6), (NI64)(a + first), elemtype);
					addson_226287(result, LOC21);
				}
				goto LA17;
				LA19: ;
				{
					tnode225816* LOC23;
					tnode225816* LOC24;
					n = newnodei_226138(((NU8) 44), info);
					asgnRefNoCycle((void**) (&(*n).Typ), elemtype);
					LOC23 = 0;
					LOC23 = newinttypenode_226103(((NU8) 6), (NI64)(a + first), elemtype);
					addson_226287(n, LOC23);
					LOC24 = 0;
					LOC24 = newinttypenode_226103(((NU8) 6), (NI64)(b + first), elemtype);
					addson_226287(n, LOC24);
					addson_226287(result, n);
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

N_NIMCALL(tnode225816*, diffsets_284054)(tnode225816* a, tnode225816* b) {
	tnode225816* result;
	tbitset283012* x;
	tbitset283012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_284004(a, (&x));
	tobitset_284004(b, (&y));
	bitsetdiff_283037((&x), y);
	result = totreeset_284754(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NI64, cardset_284089)(tnode225816* s) {
	NI64 result;
	result = 0;
	result = IL64(0);
	{
		NI i_285023;
		NI HEX3Atmp_285116;
		NI LOC2;
		NI res_285119;
		i_285023 = 0;
		HEX3Atmp_285116 = 0;
		LOC2 = 0;
		LOC2 = sonslen_226249(s);
		HEX3Atmp_285116 = (NI64)(LOC2 - 1);
		res_285119 = 0;
		{
			while (1) {
				if (!(res_285119 <= HEX3Atmp_285116)) goto LA4;
				i_285023 = res_285119;
				{
					NI64 LOC9;
					NI64 LOC10;
					if (!((*(*s).kindU.S6.Sons->data[i_285023]).Kind == ((NU8) 44))) goto LA7;
					LOC9 = 0;
					LOC9 = getordvalue_263187((*(*s).kindU.S6.Sons->data[i_285023]).kindU.S6.Sons->data[1]);
					LOC10 = 0;
					LOC10 = getordvalue_263187((*(*s).kindU.S6.Sons->data[i_285023]).kindU.S6.Sons->data[0]);
					result = (NI64)((NI64)((NI64)(result + LOC9) - LOC10) + IL64(1));
				}
				goto LA5;
				LA7: ;
				{
					result += 1;
				}
				LA5: ;
				res_285119 += 1;
			} LA4: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, containssets_284075)(tnode225816* a, tnode225816* b) {
	NIM_BOOL result;
	tbitset283012* x;
	tbitset283012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_284004(a, (&x));
	tobitset_284004(b, (&y));
	result = bitsetcontains_283091(x, y);
	return result;
}

N_NIMCALL(NIM_BOOL, equalsets_284082)(tnode225816* a, tnode225816* b) {
	NIM_BOOL result;
	tbitset283012* x;
	tbitset283012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_284004(a, (&x));
	tobitset_284004(b, (&y));
	result = bitsetequals_283084(x, y);
	return result;
}

N_NIMCALL(tnode225816*, intersectsets_284061)(tnode225816* a, tnode225816* b) {
	tnode225816* result;
	tbitset283012* x;
	tbitset283012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_284004(a, (&x));
	tobitset_284004(b, (&y));
	bitsetintersect_283053((&x), y);
	result = totreeset_284754(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(tnode225816*, unionsets_284047)(tnode225816* a, tnode225816* b) {
	tnode225816* result;
	tbitset283012* x;
	tbitset283012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_284004(a, (&x));
	tobitset_284004(b, (&y));
	bitsetunion_283029((&x), y);
	result = totreeset_284754(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(tnode225816*, symdiffsets_284068)(tnode225816* a, tnode225816* b) {
	tnode225816* result;
	tbitset283012* x;
	tbitset283012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_284004(a, (&x));
	tobitset_284004(b, (&y));
	bitsetsymdiff_283045((&x), y);
	result = totreeset_284754(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NIM_BOOL, overlap_284012)(tnode225816* a, tnode225816* b) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*a).Kind == ((NU8) 44))) goto LA3;
		{
			NIM_BOOL LOC9;
			if (!((*b).Kind == ((NU8) 44))) goto LA7;
			LOC9 = 0;
			LOC9 = levalue_235487((*a).kindU.S6.Sons->data[0], (*b).kindU.S6.Sons->data[1]);
			if (!(LOC9)) goto LA10;
			LOC9 = levalue_235487((*b).kindU.S6.Sons->data[0], (*a).kindU.S6.Sons->data[1]);
			LA10: ;
			result = LOC9;
		}
		goto LA5;
		LA7: ;
		{
			NIM_BOOL LOC12;
			LOC12 = 0;
			LOC12 = levalue_235487((*a).kindU.S6.Sons->data[0], b);
			if (!(LOC12)) goto LA13;
			LOC12 = levalue_235487(b, (*a).kindU.S6.Sons->data[1]);
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
			LOC19 = levalue_235487((*b).kindU.S6.Sons->data[0], a);
			if (!(LOC19)) goto LA20;
			LOC19 = levalue_235487(a, (*b).kindU.S6.Sons->data[1]);
			LA20: ;
			result = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			result = samevalue_235350(a, b);
		}
		LA15: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(tnode225816*, complement_284966)(tnode225816* a) {
	tnode225816* result;
	tbitset283012* x;
	result = 0;
	x = 0;
	tobitset_284004(a, (&x));
	{
		NI i_284984;
		NI HEX3Atmp_284987;
		NI res_284990;
		i_284984 = 0;
		HEX3Atmp_284987 = 0;
		HEX3Atmp_284987 = (x->Sup.len-1);
		res_284990 = 0;
		{
			while (1) {
				if (!(res_284990 <= HEX3Atmp_284987)) goto LA3;
				i_284984 = res_284990;
				x->data[i_284984] = (NI8)((NU8) ~(x->data[i_284984]));
				res_284990 += 1;
			} LA3: ;
		}
	}
	result = totreeset_284754(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NIM_BOOL, emptyrange_284034)(tnode225816* a, tnode225816* b) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = levalue_235487(a, b);
	result = !(LOC1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_nimsetsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_nimsetsDatInit)(void) {
}

