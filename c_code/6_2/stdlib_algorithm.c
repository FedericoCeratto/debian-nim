/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct Tsym293834 Tsym293834;
typedef struct Tsymseq293804 Tsymseq293804;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY135002 TY135002;
typedef struct Indexentry385117 Indexentry385117;
typedef struct TY387853 TY387853;
typedef struct Tidobj200004 Tidobj200004;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq293836 Ttypeseq293836;
typedef struct TY293929 TY293929;
typedef struct Tstrtable293806 Tstrtable293806;
typedef struct Ttype293840 Ttype293840;
typedef struct Tident200010 Tident200010;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct Tnode293802 Tnode293802;
typedef struct Tloc293816 Tloc293816;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct Tlib293820 Tlib293820;
typedef struct Tinstantiation293824 Tinstantiation293824;
typedef struct TY293960 TY293960;
typedef struct Tnodeseq293796 Tnodeseq293796;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct TY293961 TY293961;
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (Tsym293834* x_428250_3792311747, Tsym293834* y_428252_3792311747, void* ClEnv);
void* ClEnv;
} TY428248;
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
typedef N_CLOSURE_PTR(NI, T3792311747_2) (Tsym293834* x_428305_3792311747, Tsym293834* y_428307_3792311747);
typedef N_CLOSURE_PTR(NI, T3792311747_3) (Tsym293834* x_428305_3792311747, Tsym293834* y_428307_3792311747);
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (NimStringDesc* x_388466_3792311747, NimStringDesc* y_388468_3792311747, void* ClEnv);
void* ClEnv;
} TY388464;
typedef N_CLOSURE_PTR(NI, T3792311747_4) (NimStringDesc* x_388521_3792311747, NimStringDesc* y_388523_3792311747);
typedef N_CLOSURE_PTR(NI, T3792311747_5) (NimStringDesc* x_388521_3792311747, NimStringDesc* y_388523_3792311747);
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (Indexentry385117* x_386575_3792311747, Indexentry385117* y_386577_3792311747, void* ClEnv);
void* ClEnv;
} TY386573;
struct  Indexentry385117  {
NimStringDesc* keyword;
NimStringDesc* link;
NimStringDesc* linktitle;
NimStringDesc* linkdesc;
};
typedef N_CLOSURE_PTR(NI, T3792311747_6) (Indexentry385117* x_386630_3792311747, Indexentry385117* y_386632_3792311747);
typedef N_CLOSURE_PTR(NI, T3792311747_7) (Indexentry385117* x_386630_3792311747, Indexentry385117* y_386632_3792311747);
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj200004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind293435;
struct  Tstrtable293806  {
NI counter;
Tsymseq293804* data;
};
typedef NU16 Tmagic293524;
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Tsymflag293184Set;
typedef NU32 Toption170009Set;
typedef NU8 Tlockind293808;
typedef NU8 Tstorageloc293812;
typedef NU16 Tlocflag293810Set;
struct  Tloc293816  {
Tlockind293808 k;
Tstorageloc293812 s;
Tlocflag293810Set flags;
Ttype293840* t;
Ropeobj179006* r;
};
struct  Tsym293834  {
  Tidobj200004 Sup;
Tsymkind293435 kind;
union{
struct {Ttypeseq293836* typeinstcache;
} S1;
struct {TY293929* procinstcache;
Tsym293834* gcunsafetyreason;
} S2;
struct {TY293929* usedgenerics;
Tstrtable293806 tab;
} S3;
struct {Tsym293834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic293524 magic;
Ttype293840* typ;
Tident200010* name;
Tlineinfo192336 info;
Tsym293834* owner;
Tsymflag293184Set flags;
Tnode293802* ast;
Toption170009Set options;
NI position;
NI offset;
Tloc293816 loc;
Tlib293820* annex;
Tnode293802* constraint;
};
typedef NU8 Ttypekind293244;
typedef NU8 Tcallingconvention293002;
typedef NU32 Ttypeflag293431Set;
struct  Ttype293840  {
  Tidobj200004 Sup;
Ttypekind293244 kind;
Tcallingconvention293002 callconv;
Ttypeflag293431Set flags;
Ttypeseq293836* sons;
Tnode293802* n;
Tsym293834* owner;
Tsym293834* sym;
Tsym293834* destructor;
Tsym293834* deepcopy;
Tsym293834* assignment;
TY293960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc293816 loc;
};
struct  Tident200010  {
  Tidobj200004 Sup;
NimStringDesc* s;
Tident200010* next;
NI h;
};
typedef NU16 Tnodeflag293427Set;
typedef NU8 Tnodekind293020;
struct  Tnode293802  {
Ttype293840* typ;
Tlineinfo192336 info;
Tnodeflag293427Set flags;
Tnodekind293020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym293834* sym;
} S4;
struct {Tident200010* ident;
} S5;
struct {Tnodeseq293796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Ropeobj179006  {
  TNimObject Sup;
Ropeobj179006* left;
Ropeobj179006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind293818;
struct  Tlib293820  {
  Tlistentry147007 Sup;
Tlibkind293818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj179006* name;
Tnode293802* path;
};
struct  Tinstantiation293824  {
Tsym293834* sym;
Ttypeseq293836* concretetypes;
NI compilesid;
};
struct TY293961 {
NI Field0;
Tsym293834* Field1;
};
struct Tsymseq293804 {
  TGenericSeq Sup;
  Tsym293834* data[SEQ_DECL_SIZE];
};
struct TY135002 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY387853 {
  TGenericSeq Sup;
  Indexentry385117 data[SEQ_DECL_SIZE];
};
struct Ttypeseq293836 {
  TGenericSeq Sup;
  Ttype293840* data[SEQ_DECL_SIZE];
};
struct TY293929 {
  TGenericSeq Sup;
  Tinstantiation293824* data[SEQ_DECL_SIZE];
};
struct TY293960 {
  TGenericSeq Sup;
  TY293961 data[SEQ_DECL_SIZE];
};
struct Tnodeseq293796 {
  TGenericSeq Sup;
  Tnode293802* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, merge_428286_3792311747)(Tsym293834** a0, NI a0Len0, Tsym293834** b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY428248 cmp0, Sortorder104003 order0);
static N_INLINE(NI, HEX2A_104008_3792311747)(NI x0, Sortorder104003 order0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(void, merge_388502_3792311747)(NimStringDesc** a0, NI a0Len0, NimStringDesc** b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY388464 cmp0, Sortorder104003 order0);
N_NIMCALL(void, merge_386611_3792311747)(Indexentry385117* a0, NI a0Len0, Indexentry385117* b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY386573 cmp0, Sortorder104003 order0);
N_NIMCALL(void, HEX3CHEX2D_385409_4199187026)(Indexentry385117* a0, Indexentry385117* b0);
extern TNimType NTI293804; /* TSymSeq */
extern TNimType NTI104; /* int */
TNimType NTI104021; /* range -1..0(int) */
extern TNimType NTI135002; /* seq[string] */
extern TNimType NTI387853; /* seq[IndexEntry] */

static N_INLINE(NI, HEX2A_104008_3792311747)(NI x0, Sortorder104003 order0) {
	NI result0;
	NI y0;
	result0 = (NI)0;
	y0 = (NI)(((NI) (order0)) - ((NI) 1));
	result0 = (NI)((NI)(x0 ^ ((NI) (y0))) - ((NI) (y0)));
	return result0;
}

N_NIMCALL(void, merge_428286_3792311747)(Tsym293834** a0, NI a0Len0, Tsym293834** b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY428248 cmp0, Sortorder104003 order0) {
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

N_NIMCALL(void, sort_428241_3792311747)(Tsym293834** a0, NI a0Len0, TY428248 cmp0, Sortorder104003 order0) {
	NI n0;
	Tsymseq293804* b0;
	NI s0;
	n0 = a0Len0;
	b0 = (Tsymseq293804*)0;
	b0 = (Tsymseq293804*) newSeq((&NTI293804), ((NI) ((NI)(n0 / ((NI) 2)))));
	s0 = ((NI) 1);
	{
		while (1) {
			NI m0;
			if (!(s0 < n0)) goto LA2;
			m0 = (NI)((NI)(n0 - ((NI) 1)) - s0);
			{
				while (1) {
					if (!(((NI) 0) <= m0)) goto LA4;
					merge_428286_3792311747(a0, a0Len0, b0->data, b0->Sup.len, (((NI)((NI)(m0 - s0) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m0 - s0) + ((NI) 1)) : ((NI) 0)), m0, (NI)(m0 + s0), cmp0, order0);
					m0 -= (NI)(s0 * ((NI) 2));
				} LA4: ;
			}
			s0 = (NI)(s0 * ((NI) 2));
		} LA2: ;
	}
}

N_NIMCALL(void, merge_388502_3792311747)(NimStringDesc** a0, NI a0Len0, NimStringDesc** b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY388464 cmp0, Sortorder104003 order0) {
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

N_NIMCALL(void, sort_388457_3792311747)(NimStringDesc** a0, NI a0Len0, TY388464 cmp0, Sortorder104003 order0) {
	NI n0;
	TY135002* b0;
	NI s0;
	n0 = a0Len0;
	b0 = (TY135002*)0;
	b0 = (TY135002*) newSeq((&NTI135002), ((NI) ((NI)(n0 / ((NI) 2)))));
	s0 = ((NI) 1);
	{
		while (1) {
			NI m0;
			if (!(s0 < n0)) goto LA2;
			m0 = (NI)((NI)(n0 - ((NI) 1)) - s0);
			{
				while (1) {
					if (!(((NI) 0) <= m0)) goto LA4;
					merge_388502_3792311747(a0, a0Len0, b0->data, b0->Sup.len, (((NI)((NI)(m0 - s0) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m0 - s0) + ((NI) 1)) : ((NI) 0)), m0, (NI)(m0 + s0), cmp0, order0);
					m0 -= (NI)(s0 * ((NI) 2));
				} LA4: ;
			}
			s0 = (NI)(s0 * ((NI) 2));
		} LA2: ;
	}
}

N_NIMCALL(void, merge_386611_3792311747)(Indexentry385117* a0, NI a0Len0, Indexentry385117* b0, NI b0Len0, NI lo0, NI m0, NI hi0, TY386573 cmp0, Sortorder104003 order0) {
	NI j0;
	NI bb0;
	NI i0;
	NI k0;
{	{
		NI LOC3;
		NI LOC4;
		LOC3 = (NI)0;
		LOC3 = cmp0.ClEnv? cmp0.ClPrc((&a0[m0]), (&a0[(NI)(m0 + ((NI) 1))]), cmp0.ClEnv):((T3792311747_6)(cmp0.ClPrc))((&a0[m0]), (&a0[(NI)(m0 + ((NI) 1))]));
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
			HEX3CHEX2D_385409_4199187026((&b0[bb0]), (&a0[j0]));
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
				LOC15 = cmp0.ClEnv? cmp0.ClPrc((&b0[i0]), (&a0[j0]), cmp0.ClEnv):((T3792311747_7)(cmp0.ClPrc))((&b0[i0]), (&a0[j0]));
				LOC16 = (NI)0;
				LOC16 = HEX2A_104008_3792311747(LOC15, order0);
				if (!(LOC16 <= ((NI) 0))) goto LA17;
				HEX3CHEX2D_385409_4199187026((&a0[k0]), (&b0[i0]));
				i0 += ((NI) 1);
			}
			goto LA13;
			LA17: ;
			{
				HEX3CHEX2D_385409_4199187026((&a0[k0]), (&a0[j0]));
				j0 += ((NI) 1);
			}
			LA13: ;
			k0 += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k0 < j0)) goto LA21;
			HEX3CHEX2D_385409_4199187026((&a0[k0]), (&b0[i0]));
			k0 += ((NI) 1);
			i0 += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet: ;
}

N_NIMCALL(void, sort_386566_3792311747)(Indexentry385117* a0, NI a0Len0, TY386573 cmp0, Sortorder104003 order0) {
	NI n0;
	TY387853* b0;
	NI s0;
	n0 = a0Len0;
	b0 = (TY387853*)0;
	b0 = (TY387853*) newSeq((&NTI387853), ((NI) ((NI)(n0 / ((NI) 2)))));
	s0 = ((NI) 1);
	{
		while (1) {
			NI m0;
			if (!(s0 < n0)) goto LA2;
			m0 = (NI)((NI)(n0 - ((NI) 1)) - s0);
			{
				while (1) {
					if (!(((NI) 0) <= m0)) goto LA4;
					merge_386611_3792311747(a0, a0Len0, b0->data, b0->Sup.len, (((NI)((NI)(m0 - s0) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m0 - s0) + ((NI) 1)) : ((NI) 0)), m0, (NI)(m0 + s0), cmp0, order0);
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

