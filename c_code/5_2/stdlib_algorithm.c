/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct Tsym214822 Tsym214822;
typedef struct Tsymseq214792 Tsymseq214792;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY125202 TY125202;
typedef struct Indexentry327126 Indexentry327126;
typedef struct TY329853 TY329853;
typedef struct Tidobj189006 Tidobj189006;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq214824 Ttypeseq214824;
typedef struct Tscope214816 Tscope214816;
typedef struct TY214925 TY214925;
typedef struct Tstrtable214794 Tstrtable214794;
typedef struct Ttype214828 Ttype214828;
typedef struct Tident189012 Tident189012;
typedef struct Tlineinfo182337 Tlineinfo182337;
typedef struct Tnode214790 Tnode214790;
typedef struct Tloc214804 Tloc214804;
typedef struct Ropeobj169006 Ropeobj169006;
typedef struct Tlib214808 Tlib214808;
typedef struct Tnodeseq214784 Tnodeseq214784;
typedef struct Tinstantiation214812 Tinstantiation214812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct TY214913 TY214913;
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (Tsym214822* x_369850, Tsym214822* y_369852, void* ClEnv);
void* ClEnv;
} TY369848;
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_CLOSURE_PTR(NI, TMP2772) (Tsym214822* x_369905, Tsym214822* y_369907);
typedef N_CLOSURE_PTR(NI, TMP2773) (Tsym214822* x_369905, Tsym214822* y_369907);
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (NimStringDesc* x_330475, NimStringDesc* y_330477, void* ClEnv);
void* ClEnv;
} TY330473;
typedef N_CLOSURE_PTR(NI, TMP5198) (NimStringDesc* x_330530, NimStringDesc* y_330532);
typedef N_CLOSURE_PTR(NI, TMP5199) (NimStringDesc* x_330530, NimStringDesc* y_330532);
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (Indexentry327126* x_328575, Indexentry327126* y_328577, void* ClEnv);
void* ClEnv;
} TY328573;
struct  Indexentry327126  {
NimStringDesc* keyword;
NimStringDesc* link;
NimStringDesc* linktitle;
NimStringDesc* linkdesc;
};
typedef N_CLOSURE_PTR(NI, TMP5202) (Indexentry327126* x_328630, Indexentry327126* y_328632);
typedef N_CLOSURE_PTR(NI, TMP5203) (Indexentry327126* x_328630, Indexentry327126* y_328632);
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj189006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable214794  {
NI counter;
Tsymseq214792* data;
};
struct  Tlineinfo182337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc214804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype214828* t;
Ropeobj169006* r;
Ropeobj169006* heaproot;
};
struct  Tsym214822  {
  Tidobj189006 Sup;
NU8 kind;
union{
struct {Ttypeseq214824* typeinstcache;
Tscope214816* typscope;
} S1;
struct {TY214925* procinstcache;
Tsym214822* gcunsafetyreason;
} S2;
struct {TY214925* usedgenerics;
Tstrtable214794 tab;
} S3;
struct {Tsym214822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype214828* typ;
Tident189012* name;
Tlineinfo182337 info;
Tsym214822* owner;
NU32 flags;
Tnode214790* ast;
NU32 options;
NI position;
NI offset;
Tloc214804 loc;
Tlib214808* annex;
Tnode214790* constraint;
};
struct  Tscope214816  {
NI depthlevel;
Tstrtable214794 symbols;
Tnodeseq214784* usingsyms;
Tscope214816* parent;
};
struct  Ttype214828  {
  Tidobj189006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq214824* sons;
Tnode214790* n;
Tsym214822* owner;
Tsym214822* sym;
Tsym214822* destructor;
Tsym214822* deepcopy;
Tsym214822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc214804 loc;
};
struct  Tident189012  {
  Tidobj189006 Sup;
NimStringDesc* s;
Tident189012* next;
NI h;
};
struct  Tnode214790  {
Ttype214828* typ;
Tlineinfo182337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym214822* sym;
} S4;
struct {Tident189012* ident;
} S5;
struct {Tnodeseq214784* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Ropeobj169006  {
  TNimObject Sup;
Ropeobj169006* left;
Ropeobj169006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlib214808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj169006* name;
Tnode214790* path;
};
struct  Tinstantiation214812  {
Tsym214822* sym;
Ttypeseq214824* concretetypes;
TY214913* usedby;
NI compilesid;
};
struct Tsymseq214792 {
  TGenericSeq Sup;
  Tsym214822* data[SEQ_DECL_SIZE];
};
struct TY125202 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY329853 {
  TGenericSeq Sup;
  Indexentry327126 data[SEQ_DECL_SIZE];
};
struct Ttypeseq214824 {
  TGenericSeq Sup;
  Ttype214828* data[SEQ_DECL_SIZE];
};
struct TY214925 {
  TGenericSeq Sup;
  Tinstantiation214812* data[SEQ_DECL_SIZE];
};
struct Tnodeseq214784 {
  TGenericSeq Sup;
  Tnode214790* data[SEQ_DECL_SIZE];
};
struct TY214913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, merge_369886)(Tsym214822** a, NI aLen0, Tsym214822** b, NI bLen0, NI lo, NI m, NI hi, TY369848 cmp, NU8 order);
static N_INLINE(NI, HEX2A_325008)(NI x, NU8 order);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, merge_330511)(NimStringDesc** a, NI aLen0, NimStringDesc** b, NI bLen0, NI lo, NI m, NI hi, TY330473 cmp, NU8 order);
N_NIMCALL(void, merge_328611)(Indexentry327126* a, NI aLen0, Indexentry327126* b, NI bLen0, NI lo, NI m, NI hi, TY328573 cmp, NU8 order);
N_NIMCALL(void, HEX3CHEX2D_327409)(Indexentry327126* a, Indexentry327126* b);
extern TNimType NTI214792; /* TSymSeq */
extern TNimType NTI104; /* int */
TNimType NTI325021; /* range -1..0(int) */
extern TNimType NTI125202; /* seq[string] */
extern TNimType NTI329853; /* seq[IndexEntry] */

static N_INLINE(NI, HEX2A_325008)(NI x, NU8 order) {
	NI result;
	NI y;
	result = 0;
	y = (NI)(((NI) (order)) - ((NI) 1));
	result = (NI)((NI)(x ^ ((NI) (y))) - ((NI) (y)));
	return result;
}

N_NIMCALL(void, merge_369886)(Tsym214822** a, NI aLen0, Tsym214822** b, NI bLen0, NI lo, NI m, NI hi, TY369848 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
{	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI)(m + ((NI) 1))], cmp.ClEnv):((TMP2772)(cmp.ClPrc))(a[m], a[(NI)(m + ((NI) 1))]);
		LOC4 = 0;
		LOC4 = HEX2A_325008(LOC3, order);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			if (!(j <= m)) goto LA8;
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv):((TMP2773)(cmp.ClPrc))(b[i], a[j]);
				LOC16 = 0;
				LOC16 = HEX2A_325008(LOC15, order);
				if (!(LOC16 <= ((NI) 0))) goto LA17;
				unsureAsgnRef((void**) (&a[k]), b[i]);
				i += ((NI) 1);
			}
			goto LA13;
			LA17: ;
			{
				unsureAsgnRef((void**) (&a[k]), a[j]);
				j += ((NI) 1);
			}
			LA13: ;
			k += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) (&a[k]), b[i]);
			k += ((NI) 1);
			i += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet: ;
}

N_NIMCALL(void, sort_369841)(Tsym214822** a, NI aLen0, TY369848 cmp, NU8 order) {
	NI n;
	Tsymseq214792* b;
	NI s;
	n = aLen0;
	b = 0;
	b = (Tsymseq214792*) newSeq((&NTI214792), ((NI) ((NI)(n / ((NI) 2)))));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI)((NI)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					merge_369886(a, aLen0, b->data, b->Sup.len, (((NI)((NI)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI)(m + s), cmp, order);
					m -= (NI)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI)(s * ((NI) 2));
		} LA2: ;
	}
}

N_NIMCALL(void, merge_330511)(NimStringDesc** a, NI aLen0, NimStringDesc** b, NI bLen0, NI lo, NI m, NI hi, TY330473 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
{	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI)(m + ((NI) 1))], cmp.ClEnv):((TMP5198)(cmp.ClPrc))(a[m], a[(NI)(m + ((NI) 1))]);
		LOC4 = 0;
		LOC4 = HEX2A_325008(LOC3, order);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			if (!(j <= m)) goto LA8;
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv):((TMP5199)(cmp.ClPrc))(b[i], a[j]);
				LOC16 = 0;
				LOC16 = HEX2A_325008(LOC15, order);
				if (!(LOC16 <= ((NI) 0))) goto LA17;
				unsureAsgnRef((void**) (&a[k]), b[i]);
				i += ((NI) 1);
			}
			goto LA13;
			LA17: ;
			{
				unsureAsgnRef((void**) (&a[k]), a[j]);
				j += ((NI) 1);
			}
			LA13: ;
			k += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) (&a[k]), b[i]);
			k += ((NI) 1);
			i += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet: ;
}

N_NIMCALL(void, sort_330466)(NimStringDesc** a, NI aLen0, TY330473 cmp, NU8 order) {
	NI n;
	TY125202* b;
	NI s;
	n = aLen0;
	b = 0;
	b = (TY125202*) newSeq((&NTI125202), ((NI) ((NI)(n / ((NI) 2)))));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI)((NI)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					merge_330511(a, aLen0, b->data, b->Sup.len, (((NI)((NI)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI)(m + s), cmp, order);
					m -= (NI)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI)(s * ((NI) 2));
		} LA2: ;
	}
}

N_NIMCALL(void, merge_328611)(Indexentry327126* a, NI aLen0, Indexentry327126* b, NI bLen0, NI lo, NI m, NI hi, TY328573 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
{	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc((&a[m]), (&a[(NI)(m + ((NI) 1))]), cmp.ClEnv):((TMP5202)(cmp.ClPrc))((&a[m]), (&a[(NI)(m + ((NI) 1))]));
		LOC4 = 0;
		LOC4 = HEX2A_325008(LOC3, order);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			if (!(j <= m)) goto LA8;
			HEX3CHEX2D_327409((&b[bb]), (&a[j]));
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp.ClEnv? cmp.ClPrc((&b[i]), (&a[j]), cmp.ClEnv):((TMP5203)(cmp.ClPrc))((&b[i]), (&a[j]));
				LOC16 = 0;
				LOC16 = HEX2A_325008(LOC15, order);
				if (!(LOC16 <= ((NI) 0))) goto LA17;
				HEX3CHEX2D_327409((&a[k]), (&b[i]));
				i += ((NI) 1);
			}
			goto LA13;
			LA17: ;
			{
				HEX3CHEX2D_327409((&a[k]), (&a[j]));
				j += ((NI) 1);
			}
			LA13: ;
			k += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			HEX3CHEX2D_327409((&a[k]), (&b[i]));
			k += ((NI) 1);
			i += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet: ;
}

N_NIMCALL(void, sort_328566)(Indexentry327126* a, NI aLen0, TY328573 cmp, NU8 order) {
	NI n;
	TY329853* b;
	NI s;
	n = aLen0;
	b = 0;
	b = (TY329853*) newSeq((&NTI329853), ((NI) ((NI)(n / ((NI) 2)))));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI)((NI)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					merge_328611(a, aLen0, b->data, b->Sup.len, (((NI)((NI)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI)(m + s), cmp, order);
					m -= (NI)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI)(s * ((NI) 2));
		} LA2: ;
	}
}
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit000)(void) {
NTI325021.size = sizeof(NI);
NTI325021.kind = 20;
NTI325021.base = (&NTI104);
NTI325021.flags = 3;
}

