/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tnode191813 Tnode191813;
typedef struct Ttype191849 Ttype191849;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym191843 Tsym191843;
typedef struct Tident168021 Tident168021;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tlib191831 Tlib191831;
typedef struct Tcell46346 Tcell46346;
typedef struct Tcellseq46362 Tcellseq46362;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46358 Tcellset46358;
typedef struct Tpagedesc46354 Tpagedesc46354;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry132022 Tlistentry132022;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct TY191933 TY191933;
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode191813  {
Ttype191849* typ;
Tlineinfo164338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym191843* sym;
} S4;
struct {Tident168021* ident;
} S5;
struct {Tnodeseq191807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
};
struct  Tsym191843  {
  Tidobj168015 Sup;
NU8 kind;
union{
struct {Ttypeseq191845* typeinstcache;
Tscope191837* typscope;
} S1;
struct {TY191944* procinstcache;
Tsym191843* gcunsafetyreason;
} S2;
struct {TY191944* usedgenerics;
Tstrtable191817 tab;
} S3;
struct {Tsym191843* guard;
} S4;
} kindU;
NU16 magic;
Ttype191849* typ;
Tident168021* name;
Tlineinfo164338 info;
Tsym191843* owner;
NU32 flags;
Tnode191813* ast;
NU32 options;
NI position;
NI offset;
Tloc191827 loc;
Tlib191831* annex;
Tnode191813* constraint;
};
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
};
struct  Tcell46346  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46362  {
NI len;
NI cap;
Tcell46346** d;
};
struct  Tcellset46358  {
NI counter;
NI max;
Tpagedesc46354* head;
Tpagedesc46354** data;
};
typedef Tsmallchunk27440* TY28222[512];
typedef Ttrunk27413* Ttrunkbuckets27415[256];
struct  Tintset27417  {
Ttrunkbuckets27415 data;
};
struct  Tmemregion28210  {
NI minlargeobj;
NI maxlargeobj;
TY28222 freesmallchunks;
Tllchunk28204* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27442* freechunkslist;
Tintset27417 chunkstarts;
Tavlnode28208* root;
Tavlnode28208* deleted;
Tavlnode28208* last;
Tavlnode28208* freeavlnodes;
};
struct  Tgcstat48214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48216  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46362 zct;
Tcellseq46362 decstack;
Tcellset46358 cycleroots;
Tcellseq46362 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
struct  Ttype191849  {
  Tidobj168015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq191845* sons;
Tnode191813* n;
Tsym191843* owner;
Tsym191843* sym;
Tsym191843* destructor;
Tsym191843* deepcopy;
Tsym191843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc191827 loc;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry132022  {
  TNimObject Sup;
Tlistentry132022* prev;
Tlistentry132022* next;
};
struct  Tlib191831  {
  Tlistentry132022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode191813* path;
};
typedef NI TY27420[8];
struct  Tpagedesc46354  {
Tpagedesc46354* next;
NI key;
TY27420 bits;
};
struct  Tbasechunk27438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27440  {
  Tbasechunk27438 Sup;
Tsmallchunk27440* next;
Tsmallchunk27440* prev;
Tfreecell27430* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28204  {
NI size;
NI acc;
Tllchunk28204* next;
};
struct  Tbigchunk27442  {
  Tbasechunk27438 Sup;
Tbigchunk27442* next;
Tbigchunk27442* prev;
NI align;
NF data;
};
struct  Ttrunk27413  {
Ttrunk27413* next;
NI key;
TY27420 bits;
};
typedef Tavlnode28208* TY28214[2];
struct  Tavlnode28208  {
TY28214 link;
NI key;
NI upperbound;
NI level;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, sonslen_194403)(Tnode191813* n);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_220149)(Tnode191813* a, Tnode191813* b);
N_NIMCALL(Tnode191813*, newnodei_193351)(NU8 kind, Tlineinfo164338 info);
N_NIMCALL(NIM_BOOL, cyclictreeaux_220072)(Tnode191813* n, Tnode191813* s);
N_NIMCALL(NIM_BOOL, hasson_220019)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(void, addson_193819)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(void, delson_195577)(Tnode191813* father, NI idx);
N_NIMCALL(void, unneststmts_220704)(Tnode191813* n, Tnode191813* result);
static N_INLINE(NI, len_192097)(Tnode191813* n);
N_NIMCALL(void, add_192164)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(Tnode191813*, newnodei_193407)(NU8 kind, Tlineinfo164338 info, NI children);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_220459)(Tnode191813* n);
N_NIMCALL(Ttype191849*, skiptypes_195167)(Ttype191849* t, NU64 kinds);
N_NIMCALL(NU16, whichkeyword_173386)(Tident168021* id);
extern Tgcheap48216 gch_48244;

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, exprstructuralequivalent_220149)(Tnode191813* a, Tnode191813* b) {
	NIM_BOOL result;
{	result = 0;
	result = NIM_FALSE;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = !((a == NIM_NIL));
		if (!(LOC7)) goto LA8;
		LOC7 = !((b == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		LOC6 = ((*a).kind == (*b).kind);
		LA9: ;
		if (!LOC6) goto LA10;
		switch ((*a).kind) {
		case ((NU8) 3):
		{
			result = ((*(*(*a).kindU.S4.sym).name).Sup.id == (*(*(*b).kindU.S4.sym).name).Sup.id);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*(*a).kindU.S5.ident).Sup.id == (*(*b).kindU.S5.ident).Sup.id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 10):
		{
			result = ((*a).kindU.S1.intval == (*b).kindU.S1.intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			result = ((*a).kindU.S2.floatval == (*b).kindU.S2.floatval);
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			result = eqStrings((*a).kindU.S3.strval, (*b).kindU.S3.strval);
		}
		break;
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			result = NIM_TRUE;
		}
		break;
		default:
		{
			{
				NI LOC21;
				NI LOC22;
				LOC21 = 0;
				LOC21 = sonslen_194403(a);
				LOC22 = 0;
				LOC22 = sonslen_194403(b);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_220222;
					NI HEX3Atmp_220226;
					NI LOC26;
					NI res_220229;
					i_220222 = 0;
					HEX3Atmp_220226 = 0;
					LOC26 = 0;
					LOC26 = sonslen_194403(a);
					HEX3Atmp_220226 = (NI)(LOC26 - ((NI) 1));
					res_220229 = ((NI) 0);
					{
						while (1) {
							if (!(res_220229 <= HEX3Atmp_220226)) goto LA28;
							i_220222 = res_220229;
							{
								NIM_BOOL LOC31;
								LOC31 = 0;
								LOC31 = exprstructuralequivalent_220149((*a).kindU.S6.sons->data[i_220222], (*b).kindU.S6.sons->data[i_220222]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_220229 += ((NI) 1);
						} LA28: ;
					}
				}
				result = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
	}
	goto LA1;
	LA10: ;
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU16, getmagic_220403)(Tnode191813* op) {
	NU16 result;
	result = 0;
	switch ((*op).kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		switch ((*(*op).kindU.S6.sons->data[((NI) 0)]).kind) {
		case ((NU8) 3):
		{
			result = (*(*(*op).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym).magic;
		}
		break;
		default:
		{
			result = ((NU16) 0);
		}
		break;
		}
	}
	break;
	default:
	{
		result = ((NU16) 0);
	}
	break;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, hasson_220019)(Tnode191813* father, Tnode191813* son) {
	NIM_BOOL result;
{	result = 0;
	{
		NI i_220036;
		NI HEX3Atmp_220050;
		NI LOC2;
		NI res_220053;
		i_220036 = 0;
		HEX3Atmp_220050 = 0;
		LOC2 = 0;
		LOC2 = sonslen_194403(father);
		HEX3Atmp_220050 = (NI)(LOC2 - ((NI) 1));
		res_220053 = ((NI) 0);
		{
			while (1) {
				if (!(res_220053 <= HEX3Atmp_220050)) goto LA4;
				i_220036 = res_220053;
				{
					if (!((*father).kindU.S6.sons->data[i_220036] == son)) goto LA7;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA7: ;
				res_220053 += ((NI) 1);
			} LA4: ;
		}
	}
	result = NIM_FALSE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, cyclictreeaux_220072)(Tnode191813* n, Tnode191813* s) {
	NIM_BOOL result;
	NI m;
{	result = 0;
	{
		if (!(n == NIM_NIL)) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = hasson_220019(s, n);
		if (!LOC7) goto LA8;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA8: ;
	m = sonslen_194403(s);
	addson_193819(s, n);
	{
		if (!!(((*n).kind >= ((NU8) 1) && (*n).kind <= ((NU8) 23)))) goto LA12;
		{
			NI i_220113;
			NI HEX3Atmp_220116;
			NI LOC15;
			NI res_220119;
			i_220113 = 0;
			HEX3Atmp_220116 = 0;
			LOC15 = 0;
			LOC15 = sonslen_194403(n);
			HEX3Atmp_220116 = (NI)(LOC15 - ((NI) 1));
			res_220119 = ((NI) 0);
			{
				while (1) {
					if (!(res_220119 <= HEX3Atmp_220116)) goto LA17;
					i_220113 = res_220119;
					{
						NIM_BOOL LOC20;
						LOC20 = 0;
						LOC20 = cyclictreeaux_220072((*n).kindU.S6.sons->data[i_220113], s);
						if (!LOC20) goto LA21;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA21: ;
					res_220119 += ((NI) 1);
				} LA17: ;
			}
		}
	}
	LA12: ;
	result = NIM_FALSE;
	delson_195577(s, m);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, cyclictree_220138)(Tnode191813* n) {
	NIM_BOOL result;
	Tnode191813* s;
	result = 0;
	s = newnodei_193351(((NU8) 1), (*n).info);
	result = cyclictreeaux_220072(n, s);
	return result;
}

static N_INLINE(NI, len_192097)(Tnode191813* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, unneststmts_220704)(Tnode191813* n, Tnode191813* result) {
	{
		if (!((*n).kind == ((NU8) 115))) goto LA3;
		{
			Tnode191813* x_220717;
			x_220717 = 0;
			{
				NI i_220734;
				NI HEX3Atmp_220736;
				NI LOC7;
				NI res_220738;
				i_220734 = 0;
				HEX3Atmp_220736 = 0;
				LOC7 = 0;
				LOC7 = len_192097(n);
				HEX3Atmp_220736 = (LOC7 - 1);
				res_220738 = ((NI) 0);
				{
					while (1) {
						if (!(res_220738 <= HEX3Atmp_220736)) goto LA9;
						i_220734 = res_220738;
						x_220717 = (*n).kindU.S6.sons->data[i_220734];
						unneststmts_220704(x_220717, result);
						res_220738 += ((NI) 1);
					} LA9: ;
				}
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		if (!!(((*n).kind == ((NU8) 125) || (*n).kind == ((NU8) 23)))) goto LA11;
		add_192164(result, n);
	}
	goto LA1;
	LA11: ;
	LA1: ;
}

N_NIMCALL(Tnode191813*, flattenstmts_220759)(Tnode191813* n) {
	Tnode191813* result;
	result = 0;
	result = newnodei_193351(((NU8) 115), (*n).info);
	unneststmts_220704(n, result);
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = len_192097(result);
		if (!(LOC3 == ((NI) 1))) goto LA4;
		result = (*result).kindU.S6.sons->data[((NI) 0)];
	}
	LA4: ;
	return result;
}

static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr) {
	Tcell46346* result;
	result = 0;
	result = ((Tcell46346*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46346))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46346* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46346* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46346* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49846((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Tnode191813*, extractrange_220771)(NU8 k, Tnode191813* n, NI a, NI b) {
	Tnode191813* result;
	result = 0;
	result = newnodei_193407(k, (*n).info, (NI)((NI)(b - a) + ((NI) 1)));
	{
		NI i_220788;
		NI HEX3Atmp_220792;
		NI res_220795;
		i_220788 = 0;
		HEX3Atmp_220792 = 0;
		HEX3Atmp_220792 = (NI)(b - a);
		res_220795 = ((NI) 0);
		{
			while (1) {
				if (!(res_220795 <= HEX3Atmp_220792)) goto LA3;
				i_220788 = res_220795;
				asgnRefNoCycle((void**) (&(*result).kindU.S6.sons->data[i_220788]), (*n).kindU.S6.sons->data[(NI)(i_220788 + a)]);
				res_220795 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, isdeepconstexpr_220459)(Tnode191813* n) {
	NIM_BOOL result;
{	result = 0;
	switch ((*n).kind) {
	case ((NU8) 5) ... ((NU8) 10):
	case ((NU8) 20) ... ((NU8) 22):
	case ((NU8) 16) ... ((NU8) 18):
	case ((NU8) 23):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 33):
	case ((NU8) 34):
	case ((NU8) 58):
	case ((NU8) 59):
	{
		result = isdeepconstexpr_220459((*n).kindU.S6.sons->data[((NI) 1)]);
	}
	break;
	case ((NU8) 39):
	case ((NU8) 41):
	case ((NU8) 37):
	case ((NU8) 38):
	case ((NU8) 155):
	{
		NIM_BOOL LOC13;
		Ttype191849* LOC15;
		{
			NI i_220483;
			NI HEX3Atmp_220504;
			NI LOC5;
			NI res_220507;
			i_220483 = 0;
			HEX3Atmp_220504 = 0;
			LOC5 = 0;
			LOC5 = len_192097(n);
			HEX3Atmp_220504 = (LOC5 - 1);
			res_220507 = ((NI) 0);
			{
				while (1) {
					if (!(res_220507 <= HEX3Atmp_220504)) goto LA7;
					i_220483 = res_220507;
					{
						NIM_BOOL LOC10;
						LOC10 = 0;
						LOC10 = isdeepconstexpr_220459((*n).kindU.S6.sons->data[i_220483]);
						if (!!(LOC10)) goto LA11;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA11: ;
					res_220507 += ((NI) 1);
				} LA7: ;
			}
		}
		LOC13 = 0;
		LOC13 = (*n).typ == 0;
		if (LOC13) goto LA14;
		LOC15 = 0;
		LOC15 = skiptypes_195167((*n).typ, 10240);
		LOC13 = !(((*LOC15).kind == ((NU8) 17)));
		LA14: ;
		result = LOC13;
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isconstexpr_220428)(Tnode191813* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((*n).kind >= ((NU8) 5) && (*n).kind <= ((NU8) 10) || (*n).kind >= ((NU8) 20) && (*n).kind <= ((NU8) 22) || (*n).kind >= ((NU8) 16) && (*n).kind <= ((NU8) 18) || (*n).kind == ((NU8) 23));
	if (LOC1) goto LA2;
	LOC1 = (((*n).flags &(1<<((((NU8) 4))&15)))!=0);
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NU16, whichpragma_220673)(Tnode191813* n) {
	NU16 result;
	Tnode191813* key;
	result = 0;
	{
		if (!((*n).kind == ((NU8) 34))) goto LA3;
		key = (*n).kindU.S6.sons->data[((NI) 0)];
	}
	goto LA1;
	LA3: ;
	{
		key = n;
	}
	LA1: ;
	{
		if (!((*key).kind == ((NU8) 2))) goto LA8;
		result = whichkeyword_173386((*key).kindU.S5.ident);
	}
	LA8: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_treesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_treesDatInit)(void) {
}
