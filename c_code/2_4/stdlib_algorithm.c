/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Tsym294834 Tsym294834;
typedef struct Tsymseq294804 Tsymseq294804;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY136002 TY136002;
typedef struct Indexentry386117 Indexentry386117;
typedef struct TY388853 TY388853;
typedef struct Tidobj201004 Tidobj201004;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq294836 Ttypeseq294836;
typedef struct TY294929 TY294929;
typedef struct Tstrtable294806 Tstrtable294806;
typedef struct Ttype294840 Ttype294840;
typedef struct Tident201010 Tident201010;
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct Tnode294802 Tnode294802;
typedef struct Tloc294816 Tloc294816;
typedef struct Ropeobj180006 Ropeobj180006;
typedef struct Tlib294820 Tlib294820;
typedef struct Tinstantiation294824 Tinstantiation294824;
typedef struct TY294960 TY294960;
typedef struct Tnodeseq294796 Tnodeseq294796;
typedef struct Tlistentry148007 Tlistentry148007;
typedef struct TY294961 TY294961;
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (Tsym294834* x_429250_3792311747, Tsym294834* y_429252_3792311747, void* ClEnv);
void* ClEnv;
} TY429248;
typedef NU8 Sortorder104003;
struct  TGenericSeq  {
NI len;
NI reserved;
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
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_CLOSURE_PTR(NI, T3792311747_2) (Tsym294834* x_429305_3792311747, Tsym294834* y_429307_3792311747);
typedef N_CLOSURE_PTR(NI, T3792311747_3) (Tsym294834* x_429305_3792311747, Tsym294834* y_429307_3792311747);
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (NimStringDesc* x_389466_3792311747, NimStringDesc* y_389468_3792311747, void* ClEnv);
void* ClEnv;
} TY389464;
typedef N_CLOSURE_PTR(NI, T3792311747_4) (NimStringDesc* x_389521_3792311747, NimStringDesc* y_389523_3792311747);
typedef N_CLOSURE_PTR(NI, T3792311747_5) (NimStringDesc* x_389521_3792311747, NimStringDesc* y_389523_3792311747);
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (Indexentry386117 x_387575_3792311747, Indexentry386117 y_387577_3792311747, void* ClEnv);
void* ClEnv;
} TY387573;
struct  Indexentry386117  {
NimStringDesc* keyword;
NimStringDesc* link;
NimStringDesc* linktitle;
NimStringDesc* linkdesc;
};
typedef N_CLOSURE_PTR(NI, T3792311747_6) (Indexentry386117 x_387630_3792311747, Indexentry386117 y_387632_3792311747);
typedef N_CLOSURE_PTR(NI, T3792311747_7) (Indexentry386117 x_387630_3792311747, Indexentry386117 y_387632_3792311747);
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj201004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind294435;
struct  Tstrtable294806  {
NI counter;
Tsymseq294804* data;
};
typedef NU16 Tmagic294524;
struct  Tlineinfo193336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Tsymflag294184Set;
typedef NU32 Toption171009Set;
typedef NU8 Tlockind294808;
typedef NU8 Tstorageloc294812;
typedef NU16 Tlocflag294810Set;
struct  Tloc294816  {
Tlockind294808 k;
Tstorageloc294812 s;
Tlocflag294810Set flags;
Ttype294840* t;
Ropeobj180006* r;
};
struct  Tsym294834  {
  Tidobj201004 Sup;
Tsymkind294435 kind;
union{
struct {Ttypeseq294836* typeinstcache;
} S1;
struct {TY294929* procinstcache;
Tsym294834* gcunsafetyreason;
} S2;
struct {TY294929* usedgenerics;
Tstrtable294806 tab;
} S3;
struct {Tsym294834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic294524 magic;
Ttype294840* typ;
Tident201010* name;
Tlineinfo193336 info;
Tsym294834* owner;
Tsymflag294184Set flags;
Tnode294802* ast;
Toption171009Set options;
NI position;
NI offset;
Tloc294816 loc;
Tlib294820* annex;
Tnode294802* constraint;
};
typedef NU8 Ttypekind294244;
typedef NU8 Tcallingconvention294002;
typedef NU32 Ttypeflag294431Set;
struct  Ttype294840  {
  Tidobj201004 Sup;
Ttypekind294244 kind;
Tcallingconvention294002 callconv;
Ttypeflag294431Set flags;
Ttypeseq294836* sons;
Tnode294802* n;
Tsym294834* owner;
Tsym294834* sym;
Tsym294834* destructor;
Tsym294834* deepcopy;
Tsym294834* assignment;
TY294960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc294816 loc;
};
struct  Tident201010  {
  Tidobj201004 Sup;
NimStringDesc* s;
Tident201010* next;
NI h;
};
typedef NU16 Tnodeflag294427Set;
typedef NU8 Tnodekind294020;
struct  Tnode294802  {
Ttype294840* typ;
Tlineinfo193336 info;
Tnodeflag294427Set flags;
Tnodekind294020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym294834* sym;
} S4;
struct {Tident201010* ident;
} S5;
struct {Tnodeseq294796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Ropeobj180006  {
  TNimObject Sup;
Ropeobj180006* left;
Ropeobj180006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry148007  {
  TNimObject Sup;
Tlistentry148007* prev;
Tlistentry148007* next;
};
typedef NU8 Tlibkind294818;
struct  Tlib294820  {
  Tlistentry148007 Sup;
Tlibkind294818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj180006* name;
Tnode294802* path;
};
struct  Tinstantiation294824  {
Tsym294834* sym;
Ttypeseq294836* concretetypes;
NI compilesid;
};
struct TY294961 {
NI Field0;
Tsym294834* Field1;
};
struct Tsymseq294804 {
  TGenericSeq Sup;
  Tsym294834* data[SEQ_DECL_SIZE];
};
struct TY136002 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY388853 {
  TGenericSeq Sup;
  Indexentry386117 data[SEQ_DECL_SIZE];
};
struct Ttypeseq294836 {
  TGenericSeq Sup;
  Ttype294840* data[SEQ_DECL_SIZE];
};
struct TY294929 {
  TGenericSeq Sup;
  Tinstantiation294824* data[SEQ_DECL_SIZE];
};
struct TY294960 {
  TGenericSeq Sup;
  TY294961 data[SEQ_DECL_SIZE];
};
struct Tnodeseq294796 {
  TGenericSeq Sup;
  Tnode294802* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, merge_429286_3792311747)(Tsym294834** a0, NI a0Len0, Tsym294834** b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY429248 cmp0, Sortorder104003 order0);
static N_INLINE(NI, HEX2A_104008_3792311747)(NI x0, Sortorder104003 order0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(void, merge_389502_3792311747)(NimStringDesc** a0, NI a0Len0, NimStringDesc** b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY389464 cmp0, Sortorder104003 order0);
N_NIMCALL(void, merge_387611_3792311747)(Indexentry386117* a0, NI a0Len0, Indexentry386117* b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY387573 cmp0, Sortorder104003 order0);
N_NIMCALL(void, HEX3CHEX2D_386409_4199187026)(Indexentry386117* a0, Indexentry386117 b0);
extern TNimType NTI294804; /* TSymSeq */
extern TNimType NTI104; /* int */
TNimType NTI104021; /* range -1..0(int) */
extern TNimType NTI136002; /* seq[string] */
extern TNimType NTI388853; /* seq[IndexEntry] */

static N_INLINE(NI, HEX2A_104008_3792311747)(NI x0, Sortorder104003 order0) {
	NI result0;
	NI y0;
	result0 = (NI)0;
	y0 = (NI)(((NI) (order0)) - ((NI) 1));
	result0 = (NI)((NI)(x0 ^ ((NI) (y0))) - ((NI) (y0)));
	return result0;
}

N_NIMCALL(void, merge_429286_3792311747)(Tsym294834** a0, NI a0Len0, Tsym294834** b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY429248 cmp0, Sortorder104003 order0) {
	NI j0;
	NI bb0;
	NI i0;
	NI k0;
{	{
		NI LOC3;
		NI LOC4;
		LOC3 = (NI)0;
		LOC3 = cmp0.ClEnv? cmp0.ClPrc(a0[m0], a0[(NI)(m0 + ((NI) 1))], cmp0.ClEnv):((T3792311747_2)(cmp0.ClPrc))(a0[m0], a0[(NI)(m0 + ((NI) 1))]);
		LOC4 = (NI)0;
		LOC4 = HEX2A_104008_3792311747(LOC3, order0);
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
				LOC15 = cmp0.ClEnv? cmp0.ClPrc(b0[i0], a0[j0], cmp0.ClEnv):((T3792311747_3)(cmp0.ClPrc))(b0[i0], a0[j0]);
				LOC16 = (NI)0;
				LOC16 = HEX2A_104008_3792311747(LOC15, order0);
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

N_NIMCALL(void, sort_429241_3792311747)(Tsym294834** a0, NI a0Len0, TY429248 cmp0, Sortorder104003 order0) {
	NI n0;
	Tsymseq294804* b0;
	NI s0;
	n0 = a0Len0;
	b0 = (Tsymseq294804*)0;
	b0 = (Tsymseq294804*) newSeq((&NTI294804), ((NI) ((NI)(n0 / ((NI) 2)))));
	s0 = ((NI) 1);
	{
		while (1) {
			NI m0;
			if (!(s0 < n0)) goto LA2;
			m0 = (NI)((NI)(n0 - ((NI) 1)) - s0);
			{
				while (1) {
					if (!(((NI) 0) <= m0)) goto LA4;
					merge_429286_3792311747(a0, a0Len0, b0->data, b0->Sup.len, (((NI)((NI)(m0 - s0) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m0 - s0) + ((NI) 1)) : ((NI) 0)), m0, (NI)(m0 + s0), cmp0, order0);
					m0 -= (NI)(s0 * ((NI) 2));
				} LA4: ;
			}
			s0 = (NI)(s0 * ((NI) 2));
		} LA2: ;
	}
}

N_NIMCALL(void, merge_389502_3792311747)(NimStringDesc** a0, NI a0Len0, NimStringDesc** b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY389464 cmp0, Sortorder104003 order0) {
	NI j0;
	NI bb0;
	NI i0;
	NI k0;
{	{
		NI LOC3;
		NI LOC4;
		LOC3 = (NI)0;
		LOC3 = cmp0.ClEnv? cmp0.ClPrc(a0[m0], a0[(NI)(m0 + ((NI) 1))], cmp0.ClEnv):((T3792311747_4)(cmp0.ClPrc))(a0[m0], a0[(NI)(m0 + ((NI) 1))]);
		LOC4 = (NI)0;
		LOC4 = HEX2A_104008_3792311747(LOC3, order0);
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
				LOC15 = cmp0.ClEnv? cmp0.ClPrc(b0[i0], a0[j0], cmp0.ClEnv):((T3792311747_5)(cmp0.ClPrc))(b0[i0], a0[j0]);
				LOC16 = (NI)0;
				LOC16 = HEX2A_104008_3792311747(LOC15, order0);
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

N_NIMCALL(void, sort_389457_3792311747)(NimStringDesc** a0, NI a0Len0, TY389464 cmp0, Sortorder104003 order0) {
	NI n0;
	TY136002* b0;
	NI s0;
	n0 = a0Len0;
	b0 = (TY136002*)0;
	b0 = (TY136002*) newSeq((&NTI136002), ((NI) ((NI)(n0 / ((NI) 2)))));
	s0 = ((NI) 1);
	{
		while (1) {
			NI m0;
			if (!(s0 < n0)) goto LA2;
			m0 = (NI)((NI)(n0 - ((NI) 1)) - s0);
			{
				while (1) {
					if (!(((NI) 0) <= m0)) goto LA4;
					merge_389502_3792311747(a0, a0Len0, b0->data, b0->Sup.len, (((NI)((NI)(m0 - s0) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m0 - s0) + ((NI) 1)) : ((NI) 0)), m0, (NI)(m0 + s0), cmp0, order0);
					m0 -= (NI)(s0 * ((NI) 2));
				} LA4: ;
			}
			s0 = (NI)(s0 * ((NI) 2));
		} LA2: ;
	}
}

N_NIMCALL(void, merge_387611_3792311747)(Indexentry386117* a0, NI a0Len0, Indexentry386117* b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY387573 cmp0, Sortorder104003 order0) {
	NI j0;
	NI bb0;
	NI i0;
	NI k0;
{	{
		NI LOC3;
		NI LOC4;
		LOC3 = (NI)0;
		LOC3 = cmp0.ClEnv? cmp0.ClPrc(a0[m0], a0[(NI)(m0 + ((NI) 1))], cmp0.ClEnv):((T3792311747_6)(cmp0.ClPrc))(a0[m0], a0[(NI)(m0 + ((NI) 1))]);
		LOC4 = (NI)0;
		LOC4 = HEX2A_104008_3792311747(LOC3, order0);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j0 = lo0;
	bb0 = ((NI) 0);
	{
		while (1) {
			if (!(j0 <= m0)) goto LA8;
			HEX3CHEX2D_386409_4199187026((&b0[bb0]), a0[j0]);
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
				LOC15 = cmp0.ClEnv? cmp0.ClPrc(b0[i0], a0[j0], cmp0.ClEnv):((T3792311747_7)(cmp0.ClPrc))(b0[i0], a0[j0]);
				LOC16 = (NI)0;
				LOC16 = HEX2A_104008_3792311747(LOC15, order0);
				if (!(LOC16 <= ((NI) 0))) goto LA17;
				HEX3CHEX2D_386409_4199187026((&a0[k0]), b0[i0]);
				i0 += ((NI) 1);
			}
			goto LA13;
			LA17: ;
			{
				HEX3CHEX2D_386409_4199187026((&a0[k0]), a0[j0]);
				j0 += ((NI) 1);
			}
			LA13: ;
			k0 += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k0 < j0)) goto LA21;
			HEX3CHEX2D_386409_4199187026((&a0[k0]), b0[i0]);
			k0 += ((NI) 1);
			i0 += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet: ;
}

N_NIMCALL(void, sort_387566_3792311747)(Indexentry386117* a0, NI a0Len0, TY387573 cmp0, Sortorder104003 order0) {
	NI n0;
	TY388853* b0;
	NI s0;
	n0 = a0Len0;
	b0 = (TY388853*)0;
	b0 = (TY388853*) newSeq((&NTI388853), ((NI) ((NI)(n0 / ((NI) 2)))));
	s0 = ((NI) 1);
	{
		while (1) {
			NI m0;
			if (!(s0 < n0)) goto LA2;
			m0 = (NI)((NI)(n0 - ((NI) 1)) - s0);
			{
				while (1) {
					if (!(((NI) 0) <= m0)) goto LA4;
					merge_387611_3792311747(a0, a0Len0, b0->data, b0->Sup.len, (((NI)((NI)(m0 - s0) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m0 - s0) + ((NI) 1)) : ((NI) 0)), m0, (NI)(m0 + s0), cmp0, order0);
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
NTI104021.size = sizeof(NI);
NTI104021.kind = 20;
NTI104021.base = (&NTI104);
NTI104021.flags = 3;
}

