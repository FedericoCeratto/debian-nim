/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnode224816 tnode224816;
typedef struct tsym224846 tsym224846;
typedef struct tlineinfo194539 tlineinfo194539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype224852 ttype224852;
typedef struct tident199021 tident199021;
typedef struct tnodeseq224810 tnodeseq224810;
typedef struct tidobj199015 tidobj199015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq224848 ttypeseq224848;
typedef struct tloc224830 tloc224830;
typedef struct trope176009 trope176009;
typedef struct tscope224840 tscope224840;
typedef struct TY224947 TY224947;
typedef struct tinstantiation224836 tinstantiation224836;
typedef struct tstrtable224820 tstrtable224820;
typedef struct tsymseq224818 tsymseq224818;
typedef struct tlib224834 tlib224834;
typedef struct templctx454019 templctx454019;
typedef struct tidtable224864 tidtable224864;
typedef struct tidpairseq224862 tidpairseq224862;
typedef struct tidpair224860 tidpair224860;
typedef struct TY84745 TY84745;
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
typedef struct TY224936 TY224936;
typedef struct tlistentry126022 tlistentry126022;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
struct  tlineinfo194539  {
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
struct  tnode224816  {
ttype224852* Typ;
tlineinfo194539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym224846* Sym;
} S4;
struct {tident199021* Ident;
} S5;
struct {tnodeseq224810* Sons;
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
struct  tidobj199015  {
  TNimObject Sup;
NI Id;
};
struct  tloc224830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype224852* T;
trope176009* R;
trope176009* Heaproot;
};
struct  ttype224852  {
  tidobj199015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq224848* Sons;
tnode224816* N;
tsym224846* Owner;
tsym224846* Sym;
tsym224846* Destructor;
tsym224846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc224830 Loc;
};
struct  tstrtable224820  {
NI Counter;
tsymseq224818* Data;
};
struct  tsym224846  {
  tidobj199015 Sup;
NU8 Kind;
union {
struct {ttypeseq224848* Typeinstcache;
tscope224840* Typscope;
} S1;
struct {TY224947* Procinstcache;
tscope224840* Scope;
} S2;
struct {TY224947* Usedgenerics;
tstrtable224820 Tab;
} S3;
struct {tsym224846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype224852* Typ;
tident199021* Name;
tlineinfo194539 Info;
tsym224846* Owner;
NU32 Flags;
tnode224816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc224830 Loc;
tlib224834* Annex;
tnode224816* Constraint;
};
struct  tidpair224860  {
tidobj199015* Key;
TNimObject* Val;
};
struct  tidtable224864  {
NI Counter;
tidpairseq224862* Data;
};
struct  templctx454019  {
tsym224846* Owner;
tsym224846* Gensymowner;
NIM_BOOL Instlines;
tidtable224864 Mapping;
};
struct TY84745 {
NimStringDesc* Field0;
NI Field1;
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
struct  tident199021  {
  tidobj199015 Sup;
NimStringDesc* S;
tident199021* Next;
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
struct  trope176009  {
  TNimObject Sup;
trope176009* Left;
trope176009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tscope224840  {
NI Depthlevel;
tstrtable224820 Symbols;
tnodeseq224810* Usingsyms;
tscope224840* Parent;
};
struct  tinstantiation224836  {
tsym224846* Sym;
ttypeseq224848* Concretetypes;
TY224936* Usedby;
};
struct  tlistentry126022  {
  TNimObject Sup;
tlistentry126022* Prev;
tlistentry126022* Next;
};
struct  tlib224834  {
  tlistentry126022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope176009* Name;
tnode224816* Path;
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
struct tnodeseq224810 {
  TGenericSeq Sup;
  tnode224816* data[SEQ_DECL_SIZE];
};
struct ttypeseq224848 {
  TGenericSeq Sup;
  ttype224852* data[SEQ_DECL_SIZE];
};
struct TY224947 {
  TGenericSeq Sup;
  tinstantiation224836* data[SEQ_DECL_SIZE];
};
struct tsymseq224818 {
  TGenericSeq Sup;
  tsym224846* data[SEQ_DECL_SIZE];
};
struct tidpairseq224862 {
  TGenericSeq Sup;
  tidpair224860 data[SEQ_DECL_SIZE];
};
struct TY224936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalerror_196934)(tlineinfo194539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tnode224816*, evaltemplateargs_454217)(tnode224816* n, tsym224846* s);
static N_INLINE(NI, sonslen_225249)(tnode224816* n);
static N_INLINE(NI, sonslen_225255)(ttype224852* n);
N_NIMCALL(tnode224816*, newnodei_225138)(NU8 kind, tlineinfo194539 info);
N_NIMCALL(tnode224816*, copytree_225329)(tnode224816* src);
N_NIMCALL(void, localerror_196955)(tlineinfo194539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_225287)(tnode224816* father, tnode224816* son);
N_NIMCALL(void, initidtable_225167)(tidtable224864* x);
N_NIMCALL(tnode224816*, getbody_278269)(tsym224846* s);
static N_INLINE(NIM_BOOL, isatom_231963)(tnode224816* n);
N_NIMCALL(void, evaltemplateaux_454039)(tnode224816* templ, tnode224816* actual, templctx454019* c, tnode224816* result);
static N_INLINE(NI, len_225364)(tnode224816* n);
N_NIMCALL(void, add_225498)(tnode224816* father, tnode224816* son);
N_NIMCALL(void, internalerror_197006)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_197126)(TY84745 x_197130);
N_NIMCALL(TNimObject*, idtableget_234182)(tidtable224864 t, tidobj199015* key);
N_NIMCALL(tsym224846*, copysym_225203)(tsym224846* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(void, idtableput_234196)(tidtable224864* t, tidobj199015* key, TNimObject* val);
N_NIMCALL(tnode224816*, newsymnode_226754)(tsym224846* sym, tlineinfo194539 info);
N_NIMCALL(tnode224816*, copynode_454027)(templctx454019* ctx, tnode224816* a, tnode224816* b);
N_NIMCALL(tnode224816*, copynode_225323)(tnode224816* src);
N_NIMCALL(NimStringDesc*, rendertree_249058)(tnode224816* n, NU8 renderflags);
static N_INLINE(NI, safelen_225424)(tnode224816* n);
STRING_LITERAL(TMP2840, "", 0);
STRING_LITERAL(TMP2842, "compiler/evaltempl.nim", 22);
NIM_CONST TY84745 TMP2841 = {((NimStringDesc*) &TMP2842),
39}
;
NI evaltemplatecounter_454330;
extern tgcheap47016 gch_47044;

static N_INLINE(NI, sonslen_225249)(tnode224816* n) {
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

static N_INLINE(NI, sonslen_225255)(ttype224852* n) {
	NI result;
	result = 0;
	{
		if (!(*n).Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).Sons->Sup.len;
	}
	LA1: ;
	return result;
}

N_NIMCALL(tnode224816*, evaltemplateargs_454217)(tnode224816* n, tsym224846* s) {
	tnode224816* result;
	NI a;
	NI f;
	result = 0;
	a = 0;
	switch ((*n).Kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	{
		a = sonslen_225249(n);
	}
	break;
	default:
	{
		a = 0;
	}
	break;
	}
	f = sonslen_225255((*s).Typ);
	{
		if (!(f < a)) goto LA5;
		globalerror_196934((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP2840));
	}
	LA5: ;
	result = newnodei_225138(((NU8) 151), (*n).Info);
	{
		NI i_454237;
		NI HEX3Atmp_454310;
		NI res_454313;
		i_454237 = 0;
		HEX3Atmp_454310 = 0;
		HEX3Atmp_454310 = (NI64)(f - 1);
		res_454313 = 1;
		{
			while (1) {
				tnode224816* arg;
				if (!(res_454313 <= HEX3Atmp_454310)) goto LA9;
				i_454237 = res_454313;
				{
					if (!(i_454237 < a)) goto LA12;
					arg = (*n).kindU.S6.Sons->data[i_454237];
				}
				goto LA10;
				LA12: ;
				{
					arg = copytree_225329((*(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_454237]).kindU.S4.Sym).Ast);
				}
				LA10: ;
				{
					NIM_BOOL LOC17;
					LOC17 = 0;
					LOC17 = (arg == NIM_NIL);
					if (LOC17) goto LA18;
					LOC17 = ((*arg).Kind == ((NU8) 1));
					LA18: ;
					if (!LOC17) goto LA19;
					localerror_196955((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP2840));
				}
				LA19: ;
				addson_225287(result, arg);
				res_454313 += 1;
			} LA9: ;
		}
	}
	return result;
}

static N_INLINE(NIM_BOOL, isatom_231963)(tnode224816* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = (((NU8) 0) <= (*n).Kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n).Kind <= ((NU8) 23));
	LA2: ;
	result = LOC1;
	return result;
}

static N_INLINE(NI, len_225364)(tnode224816* n) {
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

N_NIMCALL(tnode224816*, copynode_454027)(templctx454019* ctx, tnode224816* a, tnode224816* b) {
	tnode224816* result;
	result = 0;
	result = copynode_225323(a);
	{
		if (!(*ctx).Instlines) goto LA3;
		(*result).Info = (*b).Info;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, evaltemplateaux_454039)(tnode224816* templ, tnode224816* actual, templctx454019* c, tnode224816* result) {
	switch ((*templ).Kind) {
	case ((NU8) 3):
	{
		tsym224846* s;
		s = (*templ).kindU.S4.Sym;
		{
			if (!((*(*s).Owner).Sup.Id == (*(*c).Owner).Sup.Id)) goto LA4;
			{
				tnode224816* x;
				if (!((*s).Kind == ((NU8) 3))) goto LA8;
				x = (*actual).kindU.S6.Sons->data[(*s).Position];
				{
					if (!((*x).Kind == ((NU8) 151))) goto LA12;
					{
						tnode224816* y_454094;
						y_454094 = 0;
						{
							NI i_454179;
							NI HEX3Atmp_454181;
							NI LOC16;
							NI res_454183;
							i_454179 = 0;
							HEX3Atmp_454181 = 0;
							LOC16 = 0;
							LOC16 = len_225364(x);
							HEX3Atmp_454181 = (LOC16 - 1);
							res_454183 = 0;
							{
								while (1) {
									if (!(res_454183 <= HEX3Atmp_454181)) goto LA18;
									i_454179 = res_454183;
									y_454094 = (*x).kindU.S6.Sons->data[i_454179];
									add_225498(result, y_454094);
									res_454183 += 1;
								} LA18: ;
							}
						}
					}
				}
				goto LA10;
				LA12: ;
				{
					tnode224816* LOC20;
					LOC20 = 0;
					LOC20 = copytree_225329(x);
					add_225498(result, LOC20);
				}
				LA10: ;
			}
			goto LA6;
			LA8: ;
			{
				tsym224846* x;
				tidobj199015* LOC27;
				TNimObject* LOC28;
				tlineinfo194539 LOC35;
				tnode224816* LOC41;
				{
					NimStringDesc* LOC26;
					if (!!((((*s).Flags &(1<<((((NU8) 31))&31)))!=0))) goto LA24;
					LOC26 = 0;
					LOC26 = HEX24_197126(TMP2841);
					internalerror_197006(LOC26);
				}
				LA24: ;
				LOC27 = 0;
				LOC27 = &s->Sup;
				LOC28 = 0;
				LOC28 = idtableget_234182((*c).Mapping, LOC27);
				x = ((tsym224846*) (LOC28));
				{
					tidobj199015* LOC33;
					TNimObject* LOC34;
					if (!(x == NIM_NIL)) goto LA31;
					x = copysym_225203(s, NIM_FALSE);
					asgnRefNoCycle((void**) (&(*x).Owner), (*c).Gensymowner);
					LOC33 = 0;
					LOC33 = &s->Sup;
					LOC34 = 0;
					LOC34 = &x->Sup.Sup;
					idtableput_234196((&(*c).Mapping), LOC33, LOC34);
				}
				LA31: ;
				{
					if (!(*c).Instlines) goto LA38;
					LOC35 = (*actual).Info;
				}
				goto LA36;
				LA38: ;
				{
					LOC35 = (*templ).Info;
				}
				LA36: ;
				LOC41 = 0;
				LOC41 = newsymnode_226754(x, LOC35);
				add_225498(result, LOC41);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			tnode224816* LOC43;
			LOC43 = 0;
			LOC43 = copynode_454027((&(*c)), templ, actual);
			add_225498(result, LOC43);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		tnode224816* LOC45;
		LOC45 = 0;
		LOC45 = copynode_454027((&(*c)), templ, actual);
		add_225498(result, LOC45);
	}
	break;
	default:
	{
		tnode224816* res;
		res = copynode_454027((&(*c)), templ, actual);
		{
			NI i_454160;
			NI HEX3Atmp_454185;
			NI LOC48;
			NI res_454188;
			i_454160 = 0;
			HEX3Atmp_454185 = 0;
			LOC48 = 0;
			LOC48 = sonslen_225249(templ);
			HEX3Atmp_454185 = (NI64)(LOC48 - 1);
			res_454188 = 0;
			{
				while (1) {
					if (!(res_454188 <= HEX3Atmp_454185)) goto LA50;
					i_454160 = res_454188;
					evaltemplateaux_454039((*templ).kindU.S6.Sons->data[i_454160], actual, c, res);
					res_454188 += 1;
				} LA50: ;
			}
		}
		add_225498(result, res);
	}
	break;
	}
}

static N_INLINE(NI, safelen_225424)(tnode224816* n) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).Kind >= ((NU8) 0) && (*n).Kind <= ((NU8) 23));
		if (LOC3) goto LA4;
		LOC3 = (*n).kindU.S6.Sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		result = 0;
	}
	goto LA1;
	LA5: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

N_NIMCALL(tnode224816*, evaltemplate_454334)(tnode224816* n, tsym224846* tmpl, tsym224846* gensymowner) {
	tnode224816* result;
	tnode224816* args;
	templctx454019 ctx;
	tnode224816* body;
	result = 0;
	evaltemplatecounter_454330 += 1;
	{
		if (!(100 < evaltemplatecounter_454330)) goto LA3;
		globalerror_196934((*n).Info, ((NU16) 183), ((NimStringDesc*) &TMP2840));
		result = n;
	}
	LA3: ;
	args = evaltemplateargs_454217(n, tmpl);
	memset((void*)(&ctx), 0, sizeof(ctx));
	ctx.Owner = tmpl;
	ctx.Gensymowner = gensymowner;
	initidtable_225167((&ctx.Mapping));
	body = getbody_278269(tmpl);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = isatom_231963(body);
		if (!LOC7) goto LA8;
		result = newnodei_225138(((NU8) 37), (*body).Info);
		evaltemplateaux_454039(body, args, (&ctx), result);
		{
			NI LOC12;
			LOC12 = 0;
			LOC12 = len_225364(result);
			if (!(LOC12 == 1)) goto LA13;
			result = (*result).kindU.S6.Sons->data[0];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			LOC16 = 0;
			LOC16 = rendertree_249058(result, 4);
			globalerror_196934((*result).Info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		result = copynode_225323(body);
		ctx.Instlines = !(((*body).Kind == ((NU8) 115) || (*body).Kind == ((NU8) 126) || (*body).Kind == ((NU8) 112) || (*body).Kind == ((NU8) 127)));
		{
			if (!ctx.Instlines) goto LA20;
			(*result).Info = (*n).Info;
		}
		LA20: ;
		{
			NI i_454400;
			NI HEX3Atmp_454430;
			NI LOC23;
			NI res_454433;
			i_454400 = 0;
			HEX3Atmp_454430 = 0;
			LOC23 = 0;
			LOC23 = safelen_225424(body);
			HEX3Atmp_454430 = (NI64)(LOC23 - 1);
			res_454433 = 0;
			{
				while (1) {
					if (!(res_454433 <= HEX3Atmp_454430)) goto LA25;
					i_454400 = res_454433;
					evaltemplateaux_454039((*body).kindU.S6.Sons->data[i_454400], args, (&ctx), result);
					res_454433 += 1;
				} LA25: ;
			}
		}
	}
	LA5: ;
	evaltemplatecounter_454330 -= 1;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_evaltemplInit)(void) {
	evaltemplatecounter_454330 = 0;
}

NIM_EXTERNC N_NOINLINE(void, HEX00_evaltemplDatInit)(void) {
}

