/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Tsym264826 Tsym264826;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY131402 TY131402;
typedef struct Indexentry353126 Indexentry353126;
typedef struct TY355853 TY355853;
typedef struct Tidobj194006 Tidobj194006;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct Tscope264820 Tscope264820;
typedef struct TY264927 TY264927;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Ttype264832 Ttype264832;
typedef struct Tident194012 Tident194012;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct Tnode264794 Tnode264794;
typedef struct Tloc264808 Tloc264808;
typedef struct Ropeobj173006 Ropeobj173006;
typedef struct Tlib264812 Tlib264812;
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct TY264917 TY264917;
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (Tsym264826* x_396050_3792311747, Tsym264826* y_396052_3792311747, void* ClEnv);
void* ClEnv;
} TY396048;
typedef NU8 Sortorder351004;
struct  TGenericSeq  {
NI len;
NI reserved;
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
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_CLOSURE_PTR(NI, TMP2919) (Tsym264826* x_396105_3792311747, Tsym264826* y_396107_3792311747);
typedef N_CLOSURE_PTR(NI, TMP2920) (Tsym264826* x_396105_3792311747, Tsym264826* y_396107_3792311747);
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (NimStringDesc* x_356475_3792311747, NimStringDesc* y_356477_3792311747, void* ClEnv);
void* ClEnv;
} TY356473;
typedef N_CLOSURE_PTR(NI, TMP5447) (NimStringDesc* x_356530_3792311747, NimStringDesc* y_356532_3792311747);
typedef N_CLOSURE_PTR(NI, TMP5448) (NimStringDesc* x_356530_3792311747, NimStringDesc* y_356532_3792311747);
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (Indexentry353126 x_354575_3792311747, Indexentry353126 y_354577_3792311747, void* ClEnv);
void* ClEnv;
} TY354573;
struct  Indexentry353126  {
NimStringDesc* keyword;
NimStringDesc* link;
NimStringDesc* linktitle;
NimStringDesc* linkdesc;
};
typedef N_CLOSURE_PTR(NI, TMP5451) (Indexentry353126 x_354630_3792311747, Indexentry353126 y_354632_3792311747);
typedef N_CLOSURE_PTR(NI, TMP5452) (Indexentry353126 x_354630_3792311747, Indexentry353126 y_354632_3792311747);
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj194006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind264435;
struct  Tstrtable264798  {
NI counter;
Tsymseq264796* data;
};
typedef NU8 Tmagic264525;
struct  Tlineinfo186336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Tsymflag264184Set;
typedef NU32 Toption164009Set;
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
struct  Tscope264820  {
NI depthlevel;
Tstrtable264798 symbols;
Tscope264820* parent;
};
typedef NU8 Ttypekind264244;
typedef NU8 Tcallingconvention264002;
typedef NU32 Ttypeflag264431Set;
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
struct  Tident194012  {
  Tidobj194006 Sup;
NimStringDesc* s;
Tident194012* next;
NI h;
};
typedef NU16 Tnodeflag264427Set;
typedef NU8 Tnodekind264020;
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
struct  Ropeobj173006  {
  TNimObject Sup;
Ropeobj173006* left;
Ropeobj173006* right;
NI length;
NimStringDesc* data;
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
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
};
struct Tsymseq264796 {
  TGenericSeq Sup;
  Tsym264826* data[SEQ_DECL_SIZE];
};
struct TY131402 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY355853 {
  TGenericSeq Sup;
  Indexentry353126 data[SEQ_DECL_SIZE];
};
struct Ttypeseq264828 {
  TGenericSeq Sup;
  Ttype264832* data[SEQ_DECL_SIZE];
};
struct TY264927 {
  TGenericSeq Sup;
  Tinstantiation264816* data[SEQ_DECL_SIZE];
};
struct Tnodeseq264788 {
  TGenericSeq Sup;
  Tnode264794* data[SEQ_DECL_SIZE];
};
struct TY264917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, merge_396086_3792311747)(Tsym264826** a0, NI a0Len0, Tsym264826** b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY396048 cmp0, Sortorder351004 order0);
static N_INLINE(NI, HEX2A_351008_3792311747)(NI x0, Sortorder351004 order0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(void, merge_356511_3792311747)(NimStringDesc** a0, NI a0Len0, NimStringDesc** b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY356473 cmp0, Sortorder351004 order0);
N_NIMCALL(void, merge_354611_3792311747)(Indexentry353126* a0, NI a0Len0, Indexentry353126* b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY354573 cmp0, Sortorder351004 order0);
N_NIMCALL(void, HEX3CHEX2D_353409_4199187026)(Indexentry353126* a0, Indexentry353126 b0);
extern TNimType NTI264796; /* TSymSeq */
extern TNimType NTI104; /* int */
TNimType NTI351021; /* range -1..0(int) */
extern TNimType NTI131402; /* seq[string] */
extern TNimType NTI355853; /* seq[IndexEntry] */

static N_INLINE(NI, HEX2A_351008_3792311747)(NI x0, Sortorder351004 order0) {
	NI result0;
	NI y0;
	result0 = (NI)0;
	y0 = (NI)(((NI) (order0)) - ((NI) 1));
	result0 = (NI)((NI)(x0 ^ ((NI) (y0))) - ((NI) (y0)));
	return result0;
}

N_NIMCALL(void, merge_396086_3792311747)(Tsym264826** a0, NI a0Len0, Tsym264826** b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY396048 cmp0, Sortorder351004 order0) {
	NI j0;
	NI bb0;
	NI i0;
	NI k0;
{	{
		NI LOC3;
		NI LOC4;
		LOC3 = (NI)0;
		LOC3 = cmp0.ClEnv? cmp0.ClPrc(a0[m0], a0[(NI)(m0 + ((NI) 1))], cmp0.ClEnv):((TMP2919)(cmp0.ClPrc))(a0[m0], a0[(NI)(m0 + ((NI) 1))]);
		LOC4 = (NI)0;
		LOC4 = HEX2A_351008_3792311747(LOC3, order0);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j0 = lo0;
	bb0 = ((NI) 0);
	{
		while (1) {
			if (!(j0 <= m0)) goto LA8;
			unsureAsgnRef((void**) (&b0[bb0]), a0[j0]);
			bb0 += ((NI) 1);
			j0 += ((NI) 1);
		} LA8: ;
	}
	i0 = ((NI) 0);
	k0 = lo0;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = (NIM_BOOL)0;
			LOC11 = (k0 < j0);
			if (!(LOC11)) goto LA12;
			LOC11 = (j0 <= hi0);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = (NI)0;
				LOC15 = cmp0.ClEnv? cmp0.ClPrc(b0[i0], a0[j0], cmp0.ClEnv):((TMP2920)(cmp0.ClPrc))(b0[i0], a0[j0]);
				LOC16 = (NI)0;
				LOC16 = HEX2A_351008_3792311747(LOC15, order0);
				if (!(LOC16 <= ((NI) 0))) goto LA17;
				unsureAsgnRef((void**) (&a0[k0]), b0[i0]);
				i0 += ((NI) 1);
			}
			goto LA13;
			LA17: ;
			{
				unsureAsgnRef((void**) (&a0[k0]), a0[j0]);
				j0 += ((NI) 1);
			}
			LA13: ;
			k0 += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k0 < j0)) goto LA21;
			unsureAsgnRef((void**) (&a0[k0]), b0[i0]);
			k0 += ((NI) 1);
			i0 += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet: ;
}

N_NIMCALL(void, sort_396041_3792311747)(Tsym264826** a0, NI a0Len0, TY396048 cmp0, Sortorder351004 order0) {
	NI n0;
	Tsymseq264796* b0;
	NI s0;
	n0 = a0Len0;
	b0 = (Tsymseq264796*)0;
	b0 = (Tsymseq264796*) newSeq((&NTI264796), ((NI) ((NI)(n0 / ((NI) 2)))));
	s0 = ((NI) 1);
	{
		while (1) {
			NI m0;
			if (!(s0 < n0)) goto LA2;
			m0 = (NI)((NI)(n0 - ((NI) 1)) - s0);
			{
				while (1) {
					if (!(((NI) 0) <= m0)) goto LA4;
					merge_396086_3792311747(a0, a0Len0, b0->data, b0->Sup.len, (((NI)((NI)(m0 - s0) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m0 - s0) + ((NI) 1)) : ((NI) 0)), m0, (NI)(m0 + s0), cmp0, order0);
					m0 -= (NI)(s0 * ((NI) 2));
				} LA4: ;
			}
			s0 = (NI)(s0 * ((NI) 2));
		} LA2: ;
	}
}

N_NIMCALL(void, merge_356511_3792311747)(NimStringDesc** a0, NI a0Len0, NimStringDesc** b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY356473 cmp0, Sortorder351004 order0) {
	NI j0;
	NI bb0;
	NI i0;
	NI k0;
{	{
		NI LOC3;
		NI LOC4;
		LOC3 = (NI)0;
		LOC3 = cmp0.ClEnv? cmp0.ClPrc(a0[m0], a0[(NI)(m0 + ((NI) 1))], cmp0.ClEnv):((TMP5447)(cmp0.ClPrc))(a0[m0], a0[(NI)(m0 + ((NI) 1))]);
		LOC4 = (NI)0;
		LOC4 = HEX2A_351008_3792311747(LOC3, order0);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j0 = lo0;
	bb0 = ((NI) 0);
	{
		while (1) {
			if (!(j0 <= m0)) goto LA8;
			unsureAsgnRef((void**) (&b0[bb0]), a0[j0]);
			bb0 += ((NI) 1);
			j0 += ((NI) 1);
		} LA8: ;
	}
	i0 = ((NI) 0);
	k0 = lo0;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = (NIM_BOOL)0;
			LOC11 = (k0 < j0);
			if (!(LOC11)) goto LA12;
			LOC11 = (j0 <= hi0);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = (NI)0;
				LOC15 = cmp0.ClEnv? cmp0.ClPrc(b0[i0], a0[j0], cmp0.ClEnv):((TMP5448)(cmp0.ClPrc))(b0[i0], a0[j0]);
				LOC16 = (NI)0;
				LOC16 = HEX2A_351008_3792311747(LOC15, order0);
				if (!(LOC16 <= ((NI) 0))) goto LA17;
				unsureAsgnRef((void**) (&a0[k0]), b0[i0]);
				i0 += ((NI) 1);
			}
			goto LA13;
			LA17: ;
			{
				unsureAsgnRef((void**) (&a0[k0]), a0[j0]);
				j0 += ((NI) 1);
			}
			LA13: ;
			k0 += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k0 < j0)) goto LA21;
			unsureAsgnRef((void**) (&a0[k0]), b0[i0]);
			k0 += ((NI) 1);
			i0 += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet: ;
}

N_NIMCALL(void, sort_356466_3792311747)(NimStringDesc** a0, NI a0Len0, TY356473 cmp0, Sortorder351004 order0) {
	NI n0;
	TY131402* b0;
	NI s0;
	n0 = a0Len0;
	b0 = (TY131402*)0;
	b0 = (TY131402*) newSeq((&NTI131402), ((NI) ((NI)(n0 / ((NI) 2)))));
	s0 = ((NI) 1);
	{
		while (1) {
			NI m0;
			if (!(s0 < n0)) goto LA2;
			m0 = (NI)((NI)(n0 - ((NI) 1)) - s0);
			{
				while (1) {
					if (!(((NI) 0) <= m0)) goto LA4;
					merge_356511_3792311747(a0, a0Len0, b0->data, b0->Sup.len, (((NI)((NI)(m0 - s0) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m0 - s0) + ((NI) 1)) : ((NI) 0)), m0, (NI)(m0 + s0), cmp0, order0);
					m0 -= (NI)(s0 * ((NI) 2));
				} LA4: ;
			}
			s0 = (NI)(s0 * ((NI) 2));
		} LA2: ;
	}
}

N_NIMCALL(void, merge_354611_3792311747)(Indexentry353126* a0, NI a0Len0, Indexentry353126* b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY354573 cmp0, Sortorder351004 order0) {
	NI j0;
	NI bb0;
	NI i0;
	NI k0;
{	{
		NI LOC3;
		NI LOC4;
		LOC3 = (NI)0;
		LOC3 = cmp0.ClEnv? cmp0.ClPrc(a0[m0], a0[(NI)(m0 + ((NI) 1))], cmp0.ClEnv):((TMP5451)(cmp0.ClPrc))(a0[m0], a0[(NI)(m0 + ((NI) 1))]);
		LOC4 = (NI)0;
		LOC4 = HEX2A_351008_3792311747(LOC3, order0);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j0 = lo0;
	bb0 = ((NI) 0);
	{
		while (1) {
			if (!(j0 <= m0)) goto LA8;
			HEX3CHEX2D_353409_4199187026((&b0[bb0]), a0[j0]);
			bb0 += ((NI) 1);
			j0 += ((NI) 1);
		} LA8: ;
	}
	i0 = ((NI) 0);
	k0 = lo0;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = (NIM_BOOL)0;
			LOC11 = (k0 < j0);
			if (!(LOC11)) goto LA12;
			LOC11 = (j0 <= hi0);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = (NI)0;
				LOC15 = cmp0.ClEnv? cmp0.ClPrc(b0[i0], a0[j0], cmp0.ClEnv):((TMP5452)(cmp0.ClPrc))(b0[i0], a0[j0]);
				LOC16 = (NI)0;
				LOC16 = HEX2A_351008_3792311747(LOC15, order0);
				if (!(LOC16 <= ((NI) 0))) goto LA17;
				HEX3CHEX2D_353409_4199187026((&a0[k0]), b0[i0]);
				i0 += ((NI) 1);
			}
			goto LA13;
			LA17: ;
			{
				HEX3CHEX2D_353409_4199187026((&a0[k0]), a0[j0]);
				j0 += ((NI) 1);
			}
			LA13: ;
			k0 += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k0 < j0)) goto LA21;
			HEX3CHEX2D_353409_4199187026((&a0[k0]), b0[i0]);
			k0 += ((NI) 1);
			i0 += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet: ;
}

N_NIMCALL(void, sort_354566_3792311747)(Indexentry353126* a0, NI a0Len0, TY354573 cmp0, Sortorder351004 order0) {
	NI n0;
	TY355853* b0;
	NI s0;
	n0 = a0Len0;
	b0 = (TY355853*)0;
	b0 = (TY355853*) newSeq((&NTI355853), ((NI) ((NI)(n0 / ((NI) 2)))));
	s0 = ((NI) 1);
	{
		while (1) {
			NI m0;
			if (!(s0 < n0)) goto LA2;
			m0 = (NI)((NI)(n0 - ((NI) 1)) - s0);
			{
				while (1) {
					if (!(((NI) 0) <= m0)) goto LA4;
					merge_354611_3792311747(a0, a0Len0, b0->data, b0->Sup.len, (((NI)((NI)(m0 - s0) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m0 - s0) + ((NI) 1)) : ((NI) 0)), m0, (NI)(m0 + s0), cmp0, order0);
					m0 -= (NI)(s0 * ((NI) 2));
				} LA4: ;
			}
			s0 = (NI)(s0 * ((NI) 2));
		} LA2: ;
	}
}
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit000)(void) {
NTI351021.size = sizeof(NI);
NTI351021.kind = 20;
NTI351021.base = (&NTI104);
NTI351021.flags = 3;
}

