/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tsym225846 tsym225846;
typedef struct tsymseq225818 tsymseq225818;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY119808 TY119808;
typedef struct tindexentry359264 tindexentry359264;
typedef struct TY361804 TY361804;
typedef struct tentry418478 tentry418478;
typedef struct TY418485 TY418485;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq225848 ttypeseq225848;
typedef struct ttype225852 ttype225852;
typedef struct tscope225840 tscope225840;
typedef struct TY225947 TY225947;
typedef struct tinstantiation225836 tinstantiation225836;
typedef struct tstrtable225820 tstrtable225820;
typedef struct tident200021 tident200021;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tnode225816 tnode225816;
typedef struct tloc225830 tloc225830;
typedef struct trope177009 trope177009;
typedef struct tlib225834 tlib225834;
typedef struct tnodeseq225810 tnodeseq225810;
typedef struct TY225936 TY225936;
typedef struct tlistentry127022 tlistentry127022;
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tsym225846* x_415632, tsym225846* y_415634, void* ClEnv);
void* ClEnv;
} TY415638;
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_CLOSURE_PTR(NI, TMP2634) (tsym225846* x_415707, tsym225846* y_415709);
typedef N_CLOSURE_PTR(NI, TMP2635) (tsym225846* x_415707, tsym225846* y_415709);
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (NimStringDesc* x_362565, NimStringDesc* y_362567, void* ClEnv);
void* ClEnv;
} TY362571;
typedef N_CLOSURE_PTR(NI, TMP4792) (NimStringDesc* x_362640, NimStringDesc* y_362642);
typedef N_CLOSURE_PTR(NI, TMP4793) (NimStringDesc* x_362640, NimStringDesc* y_362642);
struct  tindexentry359264  {
NimStringDesc* Keyword;
NimStringDesc* Link;
NimStringDesc* Linktitle;
NimStringDesc* Linkdesc;
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tindexentry359264 x_360566, tindexentry359264 y_360568, void* ClEnv);
void* ClEnv;
} TY360572;
typedef N_CLOSURE_PTR(NI, TMP4796) (tindexentry359264 x_360641, tindexentry359264 y_360643);
typedef N_CLOSURE_PTR(NI, TMP4797) (tindexentry359264 x_360641, tindexentry359264 y_360643);
struct  tentry418478  {
NI Pos;
tsym225846* Sym;
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tentry418478 x_419138, tentry418478 y_419140, void* ClEnv);
void* ClEnv;
} TY419144;
typedef N_CLOSURE_PTR(NI, TMP4853) (tentry418478 x_419213, tentry418478 y_419215);
typedef N_CLOSURE_PTR(NI, TMP4854) (tentry418478 x_419213, tentry418478 y_419215);
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable225820  {
NI Counter;
tsymseq225818* Data;
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc225830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype225852* T;
trope177009* R;
trope177009* Heaproot;
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
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
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
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
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
struct tsymseq225818 {
  TGenericSeq Sup;
  tsym225846* data[SEQ_DECL_SIZE];
};
struct TY119808 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY361804 {
  TGenericSeq Sup;
  tindexentry359264 data[SEQ_DECL_SIZE];
};
struct TY418485 {
  TGenericSeq Sup;
  tentry418478 data[SEQ_DECL_SIZE];
};
struct ttypeseq225848 {
  TGenericSeq Sup;
  ttype225852* data[SEQ_DECL_SIZE];
};
struct TY225947 {
  TGenericSeq Sup;
  tinstantiation225836* data[SEQ_DECL_SIZE];
};
struct tnodeseq225810 {
  TGenericSeq Sup;
  tnode225816* data[SEQ_DECL_SIZE];
};
struct TY225936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, merge_415680)(tsym225846** a_415688, NI a_415688Len0, tsym225846** b_415696, NI b_415696Len0, NI lo_415700, NI m_415702, NI hi_415704, TY415638 cmp_415712, NU8 order_415715);
static N_INLINE(NI, HEX2A_357020)(NI x, NU8 order);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, merge_362613)(NimStringDesc** a_362621, NI a_362621Len0, NimStringDesc** b_362629, NI b_362629Len0, NI lo_362633, NI m_362635, NI hi_362637, TY362571 cmp_362645, NU8 order_362648);
N_NIMCALL(void, merge_360614)(tindexentry359264* a_360622, NI a_360622Len0, tindexentry359264* b_360630, NI b_360630Len0, NI lo_360634, NI m_360636, NI hi_360638, TY360572 cmp_360646, NU8 order_360649);
N_NIMCALL(void, HEX3CHEX2D_359607)(tindexentry359264* a, tindexentry359264 b);
N_NIMCALL(void, merge_419186)(tentry418478* a_419194, NI a_419194Len0, tentry418478* b_419202, NI b_419202Len0, NI lo_419206, NI m_419208, NI hi_419210, TY419144 cmp_419218, NU8 order_419221);
extern TNimType NTI225818; /* TSymSeq */
extern TNimType NTI108; /* int */
TNimType NTI357033; /* range -1..0(int) */
extern TNimType NTI119808; /* seq[string] */
extern TNimType NTI361804; /* seq[TIndexEntry] */
extern TNimType NTI418485; /* seq[TEntry] */

static N_INLINE(NI, HEX2A_357020)(NI x, NU8 order) {
	NI result;
	NI y;
	result = 0;
	y = (NI32)(((NI) (order)) - 1);
	result = (NI32)((NI)(x ^ ((NI) (y))) - ((NI) (y)));
	return result;
}

N_NIMCALL(void, merge_415680)(tsym225846** a_415688, NI a_415688Len0, tsym225846** b_415696, NI b_415696Len0, NI lo_415700, NI m_415702, NI hi_415704, TY415638 cmp_415712, NU8 order_415715) {
	NI j;
	NI bb;
	NI i;
	NI k;
	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp_415712.ClEnv? cmp_415712.ClPrc(a_415688[m_415702], a_415688[(NI32)(m_415702 + 1)], cmp_415712.ClEnv):((TMP2634)(cmp_415712.ClPrc))(a_415688[m_415702], a_415688[(NI32)(m_415702 + 1)]);
		LOC4 = 0;
		LOC4 = HEX2A_357020(LOC3, order_415715);
		if (!(LOC4 <= 0)) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo_415700;
	bb = 0;
	{
		while (1) {
			if (!(j <= m_415702)) goto LA8;
			unsureAsgnRef((void**) (&b_415696[bb]), a_415688[j]);
			bb += 1;
			j += 1;
		} LA8: ;
	}
	i = 0;
	k = lo_415700;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi_415704);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp_415712.ClEnv? cmp_415712.ClPrc(b_415696[i], a_415688[j], cmp_415712.ClEnv):((TMP2635)(cmp_415712.ClPrc))(b_415696[i], a_415688[j]);
				LOC16 = 0;
				LOC16 = HEX2A_357020(LOC15, order_415715);
				if (!(LOC16 <= 0)) goto LA17;
				unsureAsgnRef((void**) (&a_415688[k]), b_415696[i]);
				i += 1;
			}
			goto LA13;
			LA17: ;
			{
				unsureAsgnRef((void**) (&a_415688[k]), a_415688[j]);
				j += 1;
			}
			LA13: ;
			k += 1;
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) (&a_415688[k]), b_415696[i]);
			k += 1;
			i += 1;
		} LA21: ;
	}
	BeforeRet: ;
}

N_NIMCALL(void, sort_415619)(tsym225846** a_415627, NI a_415627Len0, TY415638 cmp_415637, NU8 order_415640) {
	NI n;
	tsymseq225818* b;
	NI s;
	n = a_415627Len0;
	b = 0;
	b = (tsymseq225818*) newSeq((&NTI225818), (NI32)(n / 2));
	s = 1;
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI32)((NI32)(n - 1) - s);
			{
				while (1) {
					if (!(0 <= m)) goto LA4;
					merge_415680(a_415627, a_415627Len0, b->data, b->Sup.len, (((NI32)((NI32)(m - s) + 1) >= 0) ? (NI32)((NI32)(m - s) + 1) : 0), m, (NI32)(m + s), cmp_415637, order_415640);
					m -= (NI32)(s * 2);
				} LA4: ;
			}
			s = (NI32)(s * 2);
		} LA2: ;
	}
}

N_NIMCALL(void, merge_362613)(NimStringDesc** a_362621, NI a_362621Len0, NimStringDesc** b_362629, NI b_362629Len0, NI lo_362633, NI m_362635, NI hi_362637, TY362571 cmp_362645, NU8 order_362648) {
	NI j;
	NI bb;
	NI i;
	NI k;
	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp_362645.ClEnv? cmp_362645.ClPrc(a_362621[m_362635], a_362621[(NI32)(m_362635 + 1)], cmp_362645.ClEnv):((TMP4792)(cmp_362645.ClPrc))(a_362621[m_362635], a_362621[(NI32)(m_362635 + 1)]);
		LOC4 = 0;
		LOC4 = HEX2A_357020(LOC3, order_362648);
		if (!(LOC4 <= 0)) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo_362633;
	bb = 0;
	{
		while (1) {
			if (!(j <= m_362635)) goto LA8;
			unsureAsgnRef((void**) (&b_362629[bb]), a_362621[j]);
			bb += 1;
			j += 1;
		} LA8: ;
	}
	i = 0;
	k = lo_362633;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi_362637);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp_362645.ClEnv? cmp_362645.ClPrc(b_362629[i], a_362621[j], cmp_362645.ClEnv):((TMP4793)(cmp_362645.ClPrc))(b_362629[i], a_362621[j]);
				LOC16 = 0;
				LOC16 = HEX2A_357020(LOC15, order_362648);
				if (!(LOC16 <= 0)) goto LA17;
				unsureAsgnRef((void**) (&a_362621[k]), b_362629[i]);
				i += 1;
			}
			goto LA13;
			LA17: ;
			{
				unsureAsgnRef((void**) (&a_362621[k]), a_362621[j]);
				j += 1;
			}
			LA13: ;
			k += 1;
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) (&a_362621[k]), b_362629[i]);
			k += 1;
			i += 1;
		} LA21: ;
	}
	BeforeRet: ;
}

N_NIMCALL(void, sort_362552)(NimStringDesc** a_362560, NI a_362560Len0, TY362571 cmp_362570, NU8 order_362573) {
	NI n;
	TY119808* b;
	NI s;
	n = a_362560Len0;
	b = 0;
	b = (TY119808*) newSeq((&NTI119808), (NI32)(n / 2));
	s = 1;
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI32)((NI32)(n - 1) - s);
			{
				while (1) {
					if (!(0 <= m)) goto LA4;
					merge_362613(a_362560, a_362560Len0, b->data, b->Sup.len, (((NI32)((NI32)(m - s) + 1) >= 0) ? (NI32)((NI32)(m - s) + 1) : 0), m, (NI32)(m + s), cmp_362570, order_362573);
					m -= (NI32)(s * 2);
				} LA4: ;
			}
			s = (NI32)(s * 2);
		} LA2: ;
	}
}

N_NIMCALL(void, merge_360614)(tindexentry359264* a_360622, NI a_360622Len0, tindexentry359264* b_360630, NI b_360630Len0, NI lo_360634, NI m_360636, NI hi_360638, TY360572 cmp_360646, NU8 order_360649) {
	NI j;
	NI bb;
	NI i;
	NI k;
	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp_360646.ClEnv? cmp_360646.ClPrc(a_360622[m_360636], a_360622[(NI32)(m_360636 + 1)], cmp_360646.ClEnv):((TMP4796)(cmp_360646.ClPrc))(a_360622[m_360636], a_360622[(NI32)(m_360636 + 1)]);
		LOC4 = 0;
		LOC4 = HEX2A_357020(LOC3, order_360649);
		if (!(LOC4 <= 0)) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo_360634;
	bb = 0;
	{
		while (1) {
			if (!(j <= m_360636)) goto LA8;
			HEX3CHEX2D_359607((&b_360630[bb]), a_360622[j]);
			bb += 1;
			j += 1;
		} LA8: ;
	}
	i = 0;
	k = lo_360634;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi_360638);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp_360646.ClEnv? cmp_360646.ClPrc(b_360630[i], a_360622[j], cmp_360646.ClEnv):((TMP4797)(cmp_360646.ClPrc))(b_360630[i], a_360622[j]);
				LOC16 = 0;
				LOC16 = HEX2A_357020(LOC15, order_360649);
				if (!(LOC16 <= 0)) goto LA17;
				HEX3CHEX2D_359607((&a_360622[k]), b_360630[i]);
				i += 1;
			}
			goto LA13;
			LA17: ;
			{
				HEX3CHEX2D_359607((&a_360622[k]), a_360622[j]);
				j += 1;
			}
			LA13: ;
			k += 1;
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			HEX3CHEX2D_359607((&a_360622[k]), b_360630[i]);
			k += 1;
			i += 1;
		} LA21: ;
	}
	BeforeRet: ;
}

N_NIMCALL(void, sort_360553)(tindexentry359264* a_360561, NI a_360561Len0, TY360572 cmp_360571, NU8 order_360574) {
	NI n;
	TY361804* b;
	NI s;
	n = a_360561Len0;
	b = 0;
	b = (TY361804*) newSeq((&NTI361804), (NI32)(n / 2));
	s = 1;
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI32)((NI32)(n - 1) - s);
			{
				while (1) {
					if (!(0 <= m)) goto LA4;
					merge_360614(a_360561, a_360561Len0, b->data, b->Sup.len, (((NI32)((NI32)(m - s) + 1) >= 0) ? (NI32)((NI32)(m - s) + 1) : 0), m, (NI32)(m + s), cmp_360571, order_360574);
					m -= (NI32)(s * 2);
				} LA4: ;
			}
			s = (NI32)(s * 2);
		} LA2: ;
	}
}

N_NIMCALL(void, merge_419186)(tentry418478* a_419194, NI a_419194Len0, tentry418478* b_419202, NI b_419202Len0, NI lo_419206, NI m_419208, NI hi_419210, TY419144 cmp_419218, NU8 order_419221) {
	NI j;
	NI bb;
	NI i;
	NI k;
	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp_419218.ClEnv? cmp_419218.ClPrc(a_419194[m_419208], a_419194[(NI32)(m_419208 + 1)], cmp_419218.ClEnv):((TMP4853)(cmp_419218.ClPrc))(a_419194[m_419208], a_419194[(NI32)(m_419208 + 1)]);
		LOC4 = 0;
		LOC4 = HEX2A_357020(LOC3, order_419221);
		if (!(LOC4 <= 0)) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo_419206;
	bb = 0;
	{
		while (1) {
			if (!(j <= m_419208)) goto LA8;
			b_419202[bb].Pos = a_419194[j].Pos;
			unsureAsgnRef((void**) (&b_419202[bb].Sym), a_419194[j].Sym);
			bb += 1;
			j += 1;
		} LA8: ;
	}
	i = 0;
	k = lo_419206;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi_419210);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp_419218.ClEnv? cmp_419218.ClPrc(b_419202[i], a_419194[j], cmp_419218.ClEnv):((TMP4854)(cmp_419218.ClPrc))(b_419202[i], a_419194[j]);
				LOC16 = 0;
				LOC16 = HEX2A_357020(LOC15, order_419221);
				if (!(LOC16 <= 0)) goto LA17;
				a_419194[k].Pos = b_419202[i].Pos;
				unsureAsgnRef((void**) (&a_419194[k].Sym), b_419202[i].Sym);
				i += 1;
			}
			goto LA13;
			LA17: ;
			{
				a_419194[k].Pos = a_419194[j].Pos;
				unsureAsgnRef((void**) (&a_419194[k].Sym), a_419194[j].Sym);
				j += 1;
			}
			LA13: ;
			k += 1;
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			a_419194[k].Pos = b_419202[i].Pos;
			unsureAsgnRef((void**) (&a_419194[k].Sym), b_419202[i].Sym);
			k += 1;
			i += 1;
		} LA21: ;
	}
	BeforeRet: ;
}

N_NIMCALL(void, sort_419125)(tentry418478* a_419133, NI a_419133Len0, TY419144 cmp_419143, NU8 order_419146) {
	NI n;
	TY418485* b;
	NI s;
	n = a_419133Len0;
	b = 0;
	b = (TY418485*) newSeq((&NTI418485), (NI32)(n / 2));
	s = 1;
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI32)((NI32)(n - 1) - s);
			{
				while (1) {
					if (!(0 <= m)) goto LA4;
					merge_419186(a_419133, a_419133Len0, b->data, b->Sup.len, (((NI32)((NI32)(m - s) + 1) >= 0) ? (NI32)((NI32)(m - s) + 1) : 0), m, (NI32)(m + s), cmp_419143, order_419146);
					m -= (NI32)(s * 2);
				} LA4: ;
			}
			s = (NI32)(s * 2);
		} LA2: ;
	}
}
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit)(void) {
NTI357033.size = sizeof(NI);
NTI357033.kind = 20;
NTI357033.base = (&NTI108);
NTI357033.flags = 3;
}

