/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnode225816 tnode225816;
typedef struct ttype225852 ttype225852;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym225846 tsym225846;
typedef struct tident200021 tident200021;
typedef struct tnodeseq225810 tnodeseq225810;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq225848 ttypeseq225848;
typedef struct tscope225840 tscope225840;
typedef struct TY225947 TY225947;
typedef struct tinstantiation225836 tinstantiation225836;
typedef struct tstrtable225820 tstrtable225820;
typedef struct tsymseq225818 tsymseq225818;
typedef struct tloc225830 tloc225830;
typedef struct trope177009 trope177009;
typedef struct tlib225834 tlib225834;
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
typedef struct TY225936 TY225936;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
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
struct  tstrtable225820  {
NI Counter;
tsymseq225818* Data;
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
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct tnodeseq225810 {
  TGenericSeq Sup;
  tnode225816* data[SEQ_DECL_SIZE];
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
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, sonslen_226249)(tnode225816* n);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_261184)(tnode225816* a, tnode225816* b);
N_NIMCALL(tnode225816*, newnodei_226138)(NU8 kind, tlineinfo195539 info);
N_NIMCALL(NIM_BOOL, cyclictreeaux_261088)(tnode225816* n, tnode225816* s);
N_NIMCALL(NIM_BOOL, hasson_261019)(tnode225816* father, tnode225816* son);
N_NIMCALL(void, addson_226287)(tnode225816* father, tnode225816* son);
N_NIMCALL(void, delson_226294)(tnode225816* father, NI idx);
N_NIMCALL(void, unneststmts_262361)(tnode225816* n, tnode225816* result);
static N_INLINE(NI, len_226364)(tnode225816* n);
N_NIMCALL(void, add_226498)(tnode225816* father, tnode225816* son);
N_NIMCALL(tnode225816*, newnodei_228007)(NU8 kind, tlineinfo195539 info, NI children);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_261958)(tnode225816* n);
N_NIMCALL(ttype225852*, skiptypes_230245)(ttype225852* t, NU64 kinds);
N_NIMCALL(NU8, whichkeyword_204382)(tident200021* id);
extern tgcheap47016 gch_47044;

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

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

N_NIMCALL(NIM_BOOL, exprstructuralequivalent_261184)(tnode225816* a, tnode225816* b) {
	NIM_BOOL result;
	result = 0;
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
		LOC6 = ((*a).Kind == (*b).Kind);
		LA9: ;
		if (!LOC6) goto LA10;
		switch ((*a).Kind) {
		case ((NU8) 3):
		{
			result = ((*(*(*a).kindU.S4.Sym).Name).Sup.Id == (*(*(*b).kindU.S4.Sym).Name).Sup.Id);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*(*a).kindU.S5.Ident).Sup.Id == (*(*b).kindU.S5.Ident).Sup.Id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 10):
		{
			result = ((*a).kindU.S1.Intval == (*b).kindU.S1.Intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			result = ((*a).kindU.S2.Floatval == (*b).kindU.S2.Floatval);
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			result = eqStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval);
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
				LOC21 = sonslen_226249(a);
				LOC22 = 0;
				LOC22 = sonslen_226249(b);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_261400;
					NI HEX3Atmp_261430;
					NI LOC26;
					NI res_261433;
					i_261400 = 0;
					HEX3Atmp_261430 = 0;
					LOC26 = 0;
					LOC26 = sonslen_226249(a);
					HEX3Atmp_261430 = (NI64)(LOC26 - 1);
					res_261433 = 0;
					{
						while (1) {
							if (!(res_261433 <= HEX3Atmp_261430)) goto LA28;
							i_261400 = res_261433;
							{
								NIM_BOOL LOC31;
								LOC31 = 0;
								LOC31 = exprstructuralequivalent_261184((*a).kindU.S6.Sons->data[i_261400], (*b).kindU.S6.Sons->data[i_261400]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_261433 += 1;
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
	BeforeRet: ;
	return result;
}

N_NIMCALL(NU16, getmagic_261845)(tnode225816* op) {
	NU16 result;
	result = 0;
	switch ((*op).Kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		switch ((*(*op).kindU.S6.Sons->data[0]).Kind) {
		case ((NU8) 3):
		{
			result = (*(*(*op).kindU.S6.Sons->data[0]).kindU.S4.Sym).Magic;
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

N_NIMCALL(NIM_BOOL, hasson_261019)(tnode225816* father, tnode225816* son) {
	NIM_BOOL result;
	result = 0;
	{
		NI i_261036;
		NI HEX3Atmp_261068;
		NI LOC2;
		NI res_261071;
		i_261036 = 0;
		HEX3Atmp_261068 = 0;
		LOC2 = 0;
		LOC2 = sonslen_226249(father);
		HEX3Atmp_261068 = (NI64)(LOC2 - 1);
		res_261071 = 0;
		{
			while (1) {
				if (!(res_261071 <= HEX3Atmp_261068)) goto LA4;
				i_261036 = res_261071;
				{
					if (!((*father).kindU.S6.Sons->data[i_261036] == son)) goto LA7;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA7: ;
				res_261071 += 1;
			} LA4: ;
		}
	}
	result = NIM_FALSE;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, cyclictreeaux_261088)(tnode225816* n, tnode225816* s) {
	NIM_BOOL result;
	NI m;
	result = 0;
	{
		if (!(n == NIM_NIL)) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = hasson_261019(s, n);
		if (!LOC7) goto LA8;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA8: ;
	m = sonslen_226249(s);
	addson_226287(s, n);
	{
		if (!!(((*n).Kind >= ((NU8) 1) && (*n).Kind <= ((NU8) 23)))) goto LA12;
		{
			NI i_261137;
			NI HEX3Atmp_261153;
			NI LOC15;
			NI res_261156;
			i_261137 = 0;
			HEX3Atmp_261153 = 0;
			LOC15 = 0;
			LOC15 = sonslen_226249(n);
			HEX3Atmp_261153 = (NI64)(LOC15 - 1);
			res_261156 = 0;
			{
				while (1) {
					if (!(res_261156 <= HEX3Atmp_261153)) goto LA17;
					i_261137 = res_261156;
					{
						NIM_BOOL LOC20;
						LOC20 = 0;
						LOC20 = cyclictreeaux_261088((*n).kindU.S6.Sons->data[i_261137], s);
						if (!LOC20) goto LA21;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA21: ;
					res_261156 += 1;
				} LA17: ;
			}
		}
	}
	LA12: ;
	result = NIM_FALSE;
	delson_226294(s, m);
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, cyclictree_261173)(tnode225816* n) {
	NIM_BOOL result;
	tnode225816* s;
	result = 0;
	s = newnodei_226138(((NU8) 1), (*n).Info);
	result = cyclictreeaux_261088(n, s);
	return result;
}

static N_INLINE(NI, len_226364)(tnode225816* n) {
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

N_NIMCALL(void, unneststmts_262361)(tnode225816* n, tnode225816* result) {
	{
		if (!((*n).Kind == ((NU8) 115))) goto LA3;
		{
			tnode225816* x_262374;
			x_262374 = 0;
			{
				NI i_262393;
				NI HEX3Atmp_262395;
				NI LOC7;
				NI res_262397;
				i_262393 = 0;
				HEX3Atmp_262395 = 0;
				LOC7 = 0;
				LOC7 = len_226364(n);
				HEX3Atmp_262395 = (LOC7 - 1);
				res_262397 = 0;
				{
					while (1) {
						if (!(res_262397 <= HEX3Atmp_262395)) goto LA9;
						i_262393 = res_262397;
						x_262374 = (*n).kindU.S6.Sons->data[i_262393];
						unneststmts_262361(x_262374, result);
						res_262397 += 1;
					} LA9: ;
				}
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		if (!!(((*n).Kind == ((NU8) 125) || (*n).Kind == ((NU8) 23)))) goto LA11;
		add_226498(result, n);
	}
	goto LA1;
	LA11: ;
	LA1: ;
}

N_NIMCALL(tnode225816*, flattenstmts_262416)(tnode225816* n) {
	tnode225816* result;
	result = 0;
	result = newnodei_226138(((NU8) 115), (*n).Info);
	unneststmts_262361(n, result);
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = len_226364(result);
		if (!(LOC3 == 1)) goto LA4;
		result = (*result).kindU.S6.Sons->data[0];
	}
	LA4: ;
	return result;
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

N_NIMCALL(tnode225816*, extractrange_262440)(NU8 k, tnode225816* n, NI a, NI b) {
	tnode225816* result;
	result = 0;
	result = newnodei_228007(k, (*n).Info, (NI64)((NI64)(b - a) + 1));
	{
		NI i_262457;
		NI HEX3Atmp_262487;
		NI res_262490;
		i_262457 = 0;
		HEX3Atmp_262487 = 0;
		HEX3Atmp_262487 = (NI64)(b - a);
		res_262490 = 0;
		{
			while (1) {
				if (!(res_262490 <= HEX3Atmp_262487)) goto LA3;
				i_262457 = res_262490;
				asgnRefNoCycle((void**) (&(*result).kindU.S6.Sons->data[i_262457]), (*n).kindU.S6.Sons->data[(NI64)(i_262457 + a)]);
				res_262490 += 1;
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, isdeepconstexpr_261958)(tnode225816* n) {
	NIM_BOOL result;
	result = 0;
	switch ((*n).Kind) {
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
		result = isdeepconstexpr_261958((*n).kindU.S6.Sons->data[1]);
	}
	break;
	case ((NU8) 39):
	case ((NU8) 41):
	case ((NU8) 37):
	case ((NU8) 38):
	case ((NU8) 154):
	{
		NIM_BOOL LOC13;
		ttype225852* LOC15;
		{
			NI i_261997;
			NI HEX3Atmp_262034;
			NI LOC5;
			NI res_262037;
			i_261997 = 0;
			HEX3Atmp_262034 = 0;
			LOC5 = 0;
			LOC5 = len_226364(n);
			HEX3Atmp_262034 = (LOC5 - 1);
			res_262037 = 0;
			{
				while (1) {
					if (!(res_262037 <= HEX3Atmp_262034)) goto LA7;
					i_261997 = res_262037;
					{
						NIM_BOOL LOC10;
						LOC10 = 0;
						LOC10 = isdeepconstexpr_261958((*n).kindU.S6.Sons->data[i_261997]);
						if (!!(LOC10)) goto LA11;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA11: ;
					res_262037 += 1;
				} LA7: ;
			}
		}
		LOC13 = 0;
		LOC13 = (*n).Typ == 0;
		if (LOC13) goto LA14;
		LOC15 = 0;
		LOC15 = skiptypes_230245((*n).Typ, 10240);
		LOC13 = !(((*LOC15).Kind == ((NU8) 17)));
		LA14: ;
		result = LOC13;
	}
	break;
	default:
	{
	}
	break;
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isconstexpr_261921)(tnode225816* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((*n).Kind >= ((NU8) 5) && (*n).Kind <= ((NU8) 10) || (*n).Kind >= ((NU8) 20) && (*n).Kind <= ((NU8) 22) || (*n).Kind >= ((NU8) 16) && (*n).Kind <= ((NU8) 18) || (*n).Kind == ((NU8) 23));
	if (LOC1) goto LA2;
	LOC1 = (((*n).Flags &(1<<((((NU8) 4))&15)))!=0);
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NU8, whichpragma_262304)(tnode225816* n) {
	NU8 result;
	tnode225816* key;
	result = 0;
	{
		if (!((*n).Kind == ((NU8) 34))) goto LA3;
		key = (*n).kindU.S6.Sons->data[0];
	}
	goto LA1;
	LA3: ;
	{
		key = n;
	}
	LA1: ;
	{
		if (!((*key).Kind == ((NU8) 2))) goto LA8;
		result = whichkeyword_204382((*key).kindU.S5.Ident);
	}
	LA8: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_treesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_treesDatInit)(void) {
}

