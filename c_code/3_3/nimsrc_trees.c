/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tnode190813 Tnode190813;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym190843 Tsym190843;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib190831 Tlib190831;
typedef struct Tcell46546 Tcell46546;
typedef struct Tcellseq46562 Tcellseq46562;
typedef struct Tgcheap48416 Tgcheap48416;
typedef struct Tcellset46558 Tcellset46558;
typedef struct Tpagedesc46554 Tpagedesc46554;
typedef struct Tmemregion28410 Tmemregion28410;
typedef struct Tsmallchunk27640 Tsmallchunk27640;
typedef struct Tllchunk28404 Tllchunk28404;
typedef struct Tbigchunk27642 Tbigchunk27642;
typedef struct Tintset27617 Tintset27617;
typedef struct Ttrunk27613 Ttrunk27613;
typedef struct Tavlnode28408 Tavlnode28408;
typedef struct Tgcstat48414 Tgcstat48414;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tbasechunk27638 Tbasechunk27638;
typedef struct Tfreecell27630 Tfreecell27630;
typedef struct TY190933 TY190933;
struct  Tlineinfo163338  {
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
struct  Tnode190813  {
Ttype190849* typ;
Tlineinfo163338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym190843* sym;
} S4;
struct {Tident167021* ident;
} S5;
struct {Tnodeseq190807* sons;
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
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
};
struct  Tsym190843  {
  Tidobj167015 Sup;
NU8 kind;
union{
struct {Ttypeseq190845* typeinstcache;
Tscope190837* typscope;
} S1;
struct {TY190944* procinstcache;
Tsym190843* gcunsafetyreason;
} S2;
struct {TY190944* usedgenerics;
Tstrtable190817 tab;
} S3;
struct {Tsym190843* guard;
} S4;
} kindU;
NU16 magic;
Ttype190849* typ;
Tident167021* name;
Tlineinfo163338 info;
Tsym190843* owner;
NU32 flags;
Tnode190813* ast;
NU32 options;
NI position;
NI offset;
Tloc190827 loc;
Tlib190831* annex;
Tnode190813* constraint;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  Tcell46546  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46562  {
NI len;
NI cap;
Tcell46546** d;
};
struct  Tcellset46558  {
NI counter;
NI max;
Tpagedesc46554* head;
Tpagedesc46554** data;
};
typedef Tsmallchunk27640* TY28422[512];
typedef Ttrunk27613* Ttrunkbuckets27615[256];
struct  Tintset27617  {
Ttrunkbuckets27615 data;
};
struct  Tmemregion28410  {
NI minlargeobj;
NI maxlargeobj;
TY28422 freesmallchunks;
Tllchunk28404* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27642* freechunkslist;
Tintset27617 chunkstarts;
Tavlnode28408* root;
Tavlnode28408* deleted;
Tavlnode28408* last;
Tavlnode28408* freeavlnodes;
};
struct  Tgcstat48414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48416  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46562 zct;
Tcellseq46562 decstack;
Tcellset46558 cycleroots;
Tcellseq46562 tempstack;
NI recgclock;
Tmemregion28410 region;
Tgcstat48414 stat;
};
struct  Ttype190849  {
  Tidobj167015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq190845* sons;
Tnode190813* n;
Tsym190843* owner;
Tsym190843* sym;
Tsym190843* destructor;
Tsym190843* deepcopy;
Tsym190843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc190827 loc;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib190831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj161009* name;
Tnode190813* path;
};
typedef NI TY27620[8];
struct  Tpagedesc46554  {
Tpagedesc46554* next;
NI key;
TY27620 bits;
};
struct  Tbasechunk27638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27640  {
  Tbasechunk27638 Sup;
Tsmallchunk27640* next;
Tsmallchunk27640* prev;
Tfreecell27630* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28404  {
NI size;
NI acc;
Tllchunk28404* next;
};
struct  Tbigchunk27642  {
  Tbasechunk27638 Sup;
Tbigchunk27642* next;
Tbigchunk27642* prev;
NI align;
NF data;
};
struct  Ttrunk27613  {
Ttrunk27613* next;
NI key;
TY27620 bits;
};
typedef Tavlnode28408* TY28414[2];
struct  Tavlnode28408  {
TY28414 link;
NI key;
NI upperbound;
NI level;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct  Tfreecell27630  {
Tfreecell27630* next;
NI zerofield;
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_219149)(Tnode190813* a, Tnode190813* b);
N_NIMCALL(Tnode190813*, newnodei_192351)(NU8 kind, Tlineinfo163338 info);
N_NIMCALL(NIM_BOOL, cyclictreeaux_219072)(Tnode190813* n, Tnode190813* s);
N_NIMCALL(NIM_BOOL, hasson_219019)(Tnode190813* father, Tnode190813* son);
N_NIMCALL(void, addson_192819)(Tnode190813* father, Tnode190813* son);
N_NIMCALL(void, delson_194577)(Tnode190813* father, NI idx);
N_NIMCALL(void, unneststmts_219704)(Tnode190813* n, Tnode190813* result);
static N_INLINE(NI, len_191097)(Tnode190813* n);
N_NIMCALL(void, add_191164)(Tnode190813* father, Tnode190813* son);
N_NIMCALL(Tnode190813*, newnodei_192407)(NU8 kind, Tlineinfo163338 info, NI children);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46546*, usrtocell_50046)(void* usr);
static N_INLINE(void, rtladdzct_51604)(Tcell46546* c);
N_NOINLINE(void, addzct_50017)(Tcellseq46562* s, Tcell46546* c);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_219459)(Tnode190813* n);
N_NIMCALL(Ttype190849*, skiptypes_194167)(Ttype190849* t, NU64 kinds);
N_NIMCALL(NU16, whichkeyword_172386)(Tident167021* id);
extern Tgcheap48416 gch_48444;

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

N_NIMCALL(NIM_BOOL, exprstructuralequivalent_219149)(Tnode190813* a, Tnode190813* b) {
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
				LOC21 = sonslen_193403(a);
				LOC22 = 0;
				LOC22 = sonslen_193403(b);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_219222;
					NI HEX3Atmp_219226;
					NI LOC26;
					NI res_219229;
					i_219222 = 0;
					HEX3Atmp_219226 = 0;
					LOC26 = 0;
					LOC26 = sonslen_193403(a);
					HEX3Atmp_219226 = (NI)(LOC26 - ((NI) 1));
					res_219229 = ((NI) 0);
					{
						while (1) {
							if (!(res_219229 <= HEX3Atmp_219226)) goto LA28;
							i_219222 = res_219229;
							{
								NIM_BOOL LOC31;
								LOC31 = 0;
								LOC31 = exprstructuralequivalent_219149((*a).kindU.S6.sons->data[i_219222], (*b).kindU.S6.sons->data[i_219222]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_219229 += ((NI) 1);
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

N_NIMCALL(NU16, getmagic_219403)(Tnode190813* op) {
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

N_NIMCALL(NIM_BOOL, hasson_219019)(Tnode190813* father, Tnode190813* son) {
	NIM_BOOL result;
{	result = 0;
	{
		NI i_219036;
		NI HEX3Atmp_219050;
		NI LOC2;
		NI res_219053;
		i_219036 = 0;
		HEX3Atmp_219050 = 0;
		LOC2 = 0;
		LOC2 = sonslen_193403(father);
		HEX3Atmp_219050 = (NI)(LOC2 - ((NI) 1));
		res_219053 = ((NI) 0);
		{
			while (1) {
				if (!(res_219053 <= HEX3Atmp_219050)) goto LA4;
				i_219036 = res_219053;
				{
					if (!((*father).kindU.S6.sons->data[i_219036] == son)) goto LA7;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA7: ;
				res_219053 += ((NI) 1);
			} LA4: ;
		}
	}
	result = NIM_FALSE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, cyclictreeaux_219072)(Tnode190813* n, Tnode190813* s) {
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
		LOC7 = hasson_219019(s, n);
		if (!LOC7) goto LA8;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA8: ;
	m = sonslen_193403(s);
	addson_192819(s, n);
	{
		if (!!(((*n).kind >= ((NU8) 1) && (*n).kind <= ((NU8) 23)))) goto LA12;
		{
			NI i_219113;
			NI HEX3Atmp_219116;
			NI LOC15;
			NI res_219119;
			i_219113 = 0;
			HEX3Atmp_219116 = 0;
			LOC15 = 0;
			LOC15 = sonslen_193403(n);
			HEX3Atmp_219116 = (NI)(LOC15 - ((NI) 1));
			res_219119 = ((NI) 0);
			{
				while (1) {
					if (!(res_219119 <= HEX3Atmp_219116)) goto LA17;
					i_219113 = res_219119;
					{
						NIM_BOOL LOC20;
						LOC20 = 0;
						LOC20 = cyclictreeaux_219072((*n).kindU.S6.sons->data[i_219113], s);
						if (!LOC20) goto LA21;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA21: ;
					res_219119 += ((NI) 1);
				} LA17: ;
			}
		}
	}
	LA12: ;
	result = NIM_FALSE;
	delson_194577(s, m);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, cyclictree_219138)(Tnode190813* n) {
	NIM_BOOL result;
	Tnode190813* s;
	result = 0;
	s = newnodei_192351(((NU8) 1), (*n).info);
	result = cyclictreeaux_219072(n, s);
	return result;
}

static N_INLINE(NI, len_191097)(Tnode190813* n) {
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

N_NIMCALL(void, unneststmts_219704)(Tnode190813* n, Tnode190813* result) {
	{
		if (!((*n).kind == ((NU8) 115))) goto LA3;
		{
			Tnode190813* x_219717;
			x_219717 = 0;
			{
				NI i_219734;
				NI HEX3Atmp_219736;
				NI LOC7;
				NI res_219738;
				i_219734 = 0;
				HEX3Atmp_219736 = 0;
				LOC7 = 0;
				LOC7 = len_191097(n);
				HEX3Atmp_219736 = (LOC7 - 1);
				res_219738 = ((NI) 0);
				{
					while (1) {
						if (!(res_219738 <= HEX3Atmp_219736)) goto LA9;
						i_219734 = res_219738;
						x_219717 = (*n).kindU.S6.sons->data[i_219734];
						unneststmts_219704(x_219717, result);
						res_219738 += ((NI) 1);
					} LA9: ;
				}
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		if (!!(((*n).kind == ((NU8) 125) || (*n).kind == ((NU8) 23)))) goto LA11;
		add_191164(result, n);
	}
	goto LA1;
	LA11: ;
	LA1: ;
}

N_NIMCALL(Tnode190813*, flattenstmts_219759)(Tnode190813* n) {
	Tnode190813* result;
	result = 0;
	result = newnodei_192351(((NU8) 115), (*n).info);
	unneststmts_219704(n, result);
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = len_191097(result);
		if (!(LOC3 == ((NI) 1))) goto LA4;
		result = (*result).kindU.S6.sons->data[((NI) 0)];
	}
	LA4: ;
	return result;
}

static N_INLINE(Tcell46546*, usrtocell_50046)(void* usr) {
	Tcell46546* result;
	result = 0;
	result = ((Tcell46546*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46546))))));
	return result;
}

static N_INLINE(void, rtladdzct_51604)(Tcell46546* c) {
	addzct_50017((&gch_48444.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46546* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_50046(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46546* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_50046((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51604(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Tnode190813*, extractrange_219771)(NU8 k, Tnode190813* n, NI a, NI b) {
	Tnode190813* result;
	result = 0;
	result = newnodei_192407(k, (*n).info, (NI)((NI)(b - a) + ((NI) 1)));
	{
		NI i_219788;
		NI HEX3Atmp_219792;
		NI res_219795;
		i_219788 = 0;
		HEX3Atmp_219792 = 0;
		HEX3Atmp_219792 = (NI)(b - a);
		res_219795 = ((NI) 0);
		{
			while (1) {
				if (!(res_219795 <= HEX3Atmp_219792)) goto LA3;
				i_219788 = res_219795;
				asgnRefNoCycle((void**) (&(*result).kindU.S6.sons->data[i_219788]), (*n).kindU.S6.sons->data[(NI)(i_219788 + a)]);
				res_219795 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, isdeepconstexpr_219459)(Tnode190813* n) {
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
		result = isdeepconstexpr_219459((*n).kindU.S6.sons->data[((NI) 1)]);
	}
	break;
	case ((NU8) 39):
	case ((NU8) 41):
	case ((NU8) 37):
	case ((NU8) 38):
	case ((NU8) 155):
	{
		NIM_BOOL LOC13;
		Ttype190849* LOC15;
		{
			NI i_219483;
			NI HEX3Atmp_219504;
			NI LOC5;
			NI res_219507;
			i_219483 = 0;
			HEX3Atmp_219504 = 0;
			LOC5 = 0;
			LOC5 = len_191097(n);
			HEX3Atmp_219504 = (LOC5 - 1);
			res_219507 = ((NI) 0);
			{
				while (1) {
					if (!(res_219507 <= HEX3Atmp_219504)) goto LA7;
					i_219483 = res_219507;
					{
						NIM_BOOL LOC10;
						LOC10 = 0;
						LOC10 = isdeepconstexpr_219459((*n).kindU.S6.sons->data[i_219483]);
						if (!!(LOC10)) goto LA11;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA11: ;
					res_219507 += ((NI) 1);
				} LA7: ;
			}
		}
		LOC13 = 0;
		LOC13 = (*n).typ == 0;
		if (LOC13) goto LA14;
		LOC15 = 0;
		LOC15 = skiptypes_194167((*n).typ, 10240);
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

N_NIMCALL(NIM_BOOL, isconstexpr_219428)(Tnode190813* n) {
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

N_NIMCALL(NU16, whichpragma_219673)(Tnode190813* n) {
	NU16 result;
	Tnode190813* key;
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
		result = whichkeyword_172386((*key).kindU.S5.ident);
	}
	LA8: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_treesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_treesDatInit)(void) {
}

