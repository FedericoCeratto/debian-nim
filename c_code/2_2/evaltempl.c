/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnode226816 tnode226816;
typedef struct tsym226846 tsym226846;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype226852 ttype226852;
typedef struct tident201021 tident201021;
typedef struct tnodeseq226810 tnodeseq226810;
typedef struct tidobj201015 tidobj201015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq226848 ttypeseq226848;
typedef struct tloc226830 tloc226830;
typedef struct trope178009 trope178009;
typedef struct tscope226840 tscope226840;
typedef struct TY226947 TY226947;
typedef struct tinstantiation226836 tinstantiation226836;
typedef struct tstrtable226820 tstrtable226820;
typedef struct tsymseq226818 tsymseq226818;
typedef struct tlib226834 tlib226834;
typedef struct templctx456019 templctx456019;
typedef struct tidtable226864 tidtable226864;
typedef struct tidpairseq226862 tidpairseq226862;
typedef struct tidpair226860 tidpair226860;
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
typedef struct TY226936 TY226936;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
struct  tlineinfo196539  {
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
struct  tnode226816  {
ttype226852* Typ;
tlineinfo196539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym226846* Sym;
} S4;
struct {tident201021* Ident;
} S5;
struct {tnodeseq226810* Sons;
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
struct  tidobj201015  {
  TNimObject Sup;
NI Id;
};
struct  tloc226830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype226852* T;
trope178009* R;
trope178009* Heaproot;
};
struct  ttype226852  {
  tidobj201015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq226848* Sons;
tnode226816* N;
tsym226846* Owner;
tsym226846* Sym;
tsym226846* Destructor;
tsym226846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc226830 Loc;
};
struct  tstrtable226820  {
NI Counter;
tsymseq226818* Data;
};
struct  tsym226846  {
  tidobj201015 Sup;
NU8 Kind;
union {
struct {ttypeseq226848* Typeinstcache;
tscope226840* Typscope;
} S1;
struct {TY226947* Procinstcache;
tscope226840* Scope;
} S2;
struct {TY226947* Usedgenerics;
tstrtable226820 Tab;
} S3;
struct {tsym226846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype226852* Typ;
tident201021* Name;
tlineinfo196539 Info;
tsym226846* Owner;
NU32 Flags;
tnode226816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc226830 Loc;
tlib226834* Annex;
tnode226816* Constraint;
};
struct  tidpair226860  {
tidobj201015* Key;
TNimObject* Val;
};
struct  tidtable226864  {
NI Counter;
tidpairseq226862* Data;
};
struct  templctx456019  {
tsym226846* Owner;
tsym226846* Gensymowner;
NIM_BOOL Instlines;
tidtable226864 Mapping;
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
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
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
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tscope226840  {
NI Depthlevel;
tstrtable226820 Symbols;
tnodeseq226810* Usingsyms;
tscope226840* Parent;
};
struct  tinstantiation226836  {
tsym226846* Sym;
ttypeseq226848* Concretetypes;
TY226936* Usedby;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib226834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode226816* Path;
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
struct tnodeseq226810 {
  TGenericSeq Sup;
  tnode226816* data[SEQ_DECL_SIZE];
};
struct ttypeseq226848 {
  TGenericSeq Sup;
  ttype226852* data[SEQ_DECL_SIZE];
};
struct TY226947 {
  TGenericSeq Sup;
  tinstantiation226836* data[SEQ_DECL_SIZE];
};
struct tsymseq226818 {
  TGenericSeq Sup;
  tsym226846* data[SEQ_DECL_SIZE];
};
struct tidpairseq226862 {
  TGenericSeq Sup;
  tidpair226860 data[SEQ_DECL_SIZE];
};
struct TY226936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalerror_198934)(tlineinfo196539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tnode226816*, evaltemplateargs_456217)(tnode226816* n, tsym226846* s);
static N_INLINE(NI, sonslen_227249)(tnode226816* n);
static N_INLINE(NI, sonslen_227255)(ttype226852* n);
N_NIMCALL(tnode226816*, newnodei_227138)(NU8 kind, tlineinfo196539 info);
N_NIMCALL(tnode226816*, copytree_227329)(tnode226816* src);
N_NIMCALL(void, localerror_198955)(tlineinfo196539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_227287)(tnode226816* father, tnode226816* son);
N_NIMCALL(void, initidtable_227167)(tidtable226864* x);
N_NIMCALL(tnode226816*, getbody_280269)(tsym226846* s);
static N_INLINE(NIM_BOOL, isatom_233963)(tnode226816* n);
N_NIMCALL(void, evaltemplateaux_456039)(tnode226816* templ, tnode226816* actual, templctx456019* c, tnode226816* result);
static N_INLINE(NI, len_227364)(tnode226816* n);
N_NIMCALL(void, add_227498)(tnode226816* father, tnode226816* son);
N_NIMCALL(void, internalerror_199006)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_199126)(TY84745 x_199130);
N_NIMCALL(TNimObject*, idtableget_236182)(tidtable226864 t, tidobj201015* key);
N_NIMCALL(tsym226846*, copysym_227203)(tsym226846* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(void, idtableput_236196)(tidtable226864* t, tidobj201015* key, TNimObject* val);
N_NIMCALL(tnode226816*, newsymnode_228754)(tsym226846* sym, tlineinfo196539 info);
N_NIMCALL(tnode226816*, copynode_456027)(templctx456019* ctx, tnode226816* a, tnode226816* b);
N_NIMCALL(tnode226816*, copynode_227323)(tnode226816* src);
N_NIMCALL(NimStringDesc*, rendertree_251058)(tnode226816* n, NU8 renderflags);
static N_INLINE(NI, safelen_227424)(tnode226816* n);
STRING_LITERAL(TMP2842, "", 0);
STRING_LITERAL(TMP2844, "compiler/evaltempl.nim", 22);
NIM_CONST TY84745 TMP2843 = {((NimStringDesc*) &TMP2844),
39}
;
NI evaltemplatecounter_456330;
extern tgcheap47016 gch_47044;

static N_INLINE(NI, sonslen_227249)(tnode226816* n) {
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

static N_INLINE(NI, sonslen_227255)(ttype226852* n) {
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

N_NIMCALL(tnode226816*, evaltemplateargs_456217)(tnode226816* n, tsym226846* s) {
	tnode226816* result;
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
		a = sonslen_227249(n);
	}
	break;
	default:
	{
		a = 0;
	}
	break;
	}
	f = sonslen_227255((*s).Typ);
	{
		if (!(f < a)) goto LA5;
		globalerror_198934((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP2842));
	}
	LA5: ;
	result = newnodei_227138(((NU8) 151), (*n).Info);
	{
		NI i_456237;
		NI HEX3Atmp_456310;
		NI res_456313;
		i_456237 = 0;
		HEX3Atmp_456310 = 0;
		HEX3Atmp_456310 = (NI64)(f - 1);
		res_456313 = 1;
		{
			while (1) {
				tnode226816* arg;
				if (!(res_456313 <= HEX3Atmp_456310)) goto LA9;
				i_456237 = res_456313;
				{
					if (!(i_456237 < a)) goto LA12;
					arg = (*n).kindU.S6.Sons->data[i_456237];
				}
				goto LA10;
				LA12: ;
				{
					arg = copytree_227329((*(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_456237]).kindU.S4.Sym).Ast);
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
					localerror_198955((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP2842));
				}
				LA19: ;
				addson_227287(result, arg);
				res_456313 += 1;
			} LA9: ;
		}
	}
	return result;
}

static N_INLINE(NIM_BOOL, isatom_233963)(tnode226816* n) {
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

static N_INLINE(NI, len_227364)(tnode226816* n) {
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

N_NIMCALL(tnode226816*, copynode_456027)(templctx456019* ctx, tnode226816* a, tnode226816* b) {
	tnode226816* result;
	result = 0;
	result = copynode_227323(a);
	{
		if (!(*ctx).Instlines) goto LA3;
		(*result).Info = (*b).Info;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, evaltemplateaux_456039)(tnode226816* templ, tnode226816* actual, templctx456019* c, tnode226816* result) {
	switch ((*templ).Kind) {
	case ((NU8) 3):
	{
		tsym226846* s;
		s = (*templ).kindU.S4.Sym;
		{
			if (!((*(*s).Owner).Sup.Id == (*(*c).Owner).Sup.Id)) goto LA4;
			{
				tnode226816* x;
				if (!((*s).Kind == ((NU8) 3))) goto LA8;
				x = (*actual).kindU.S6.Sons->data[(*s).Position];
				{
					if (!((*x).Kind == ((NU8) 151))) goto LA12;
					{
						tnode226816* y_456094;
						y_456094 = 0;
						{
							NI i_456179;
							NI HEX3Atmp_456181;
							NI LOC16;
							NI res_456183;
							i_456179 = 0;
							HEX3Atmp_456181 = 0;
							LOC16 = 0;
							LOC16 = len_227364(x);
							HEX3Atmp_456181 = (LOC16 - 1);
							res_456183 = 0;
							{
								while (1) {
									if (!(res_456183 <= HEX3Atmp_456181)) goto LA18;
									i_456179 = res_456183;
									y_456094 = (*x).kindU.S6.Sons->data[i_456179];
									add_227498(result, y_456094);
									res_456183 += 1;
								} LA18: ;
							}
						}
					}
				}
				goto LA10;
				LA12: ;
				{
					tnode226816* LOC20;
					LOC20 = 0;
					LOC20 = copytree_227329(x);
					add_227498(result, LOC20);
				}
				LA10: ;
			}
			goto LA6;
			LA8: ;
			{
				tsym226846* x;
				tidobj201015* LOC27;
				TNimObject* LOC28;
				tlineinfo196539 LOC35;
				tnode226816* LOC41;
				{
					NimStringDesc* LOC26;
					if (!!((((*s).Flags &(1<<((((NU8) 31))&31)))!=0))) goto LA24;
					LOC26 = 0;
					LOC26 = HEX24_199126(TMP2843);
					internalerror_199006(LOC26);
				}
				LA24: ;
				LOC27 = 0;
				LOC27 = &s->Sup;
				LOC28 = 0;
				LOC28 = idtableget_236182((*c).Mapping, LOC27);
				x = ((tsym226846*) (LOC28));
				{
					tidobj201015* LOC33;
					TNimObject* LOC34;
					if (!(x == NIM_NIL)) goto LA31;
					x = copysym_227203(s, NIM_FALSE);
					asgnRefNoCycle((void**) (&(*x).Owner), (*c).Gensymowner);
					LOC33 = 0;
					LOC33 = &s->Sup;
					LOC34 = 0;
					LOC34 = &x->Sup.Sup;
					idtableput_236196((&(*c).Mapping), LOC33, LOC34);
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
				LOC41 = newsymnode_228754(x, LOC35);
				add_227498(result, LOC41);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			tnode226816* LOC43;
			LOC43 = 0;
			LOC43 = copynode_456027((&(*c)), templ, actual);
			add_227498(result, LOC43);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		tnode226816* LOC45;
		LOC45 = 0;
		LOC45 = copynode_456027((&(*c)), templ, actual);
		add_227498(result, LOC45);
	}
	break;
	default:
	{
		tnode226816* res;
		res = copynode_456027((&(*c)), templ, actual);
		{
			NI i_456160;
			NI HEX3Atmp_456185;
			NI LOC48;
			NI res_456188;
			i_456160 = 0;
			HEX3Atmp_456185 = 0;
			LOC48 = 0;
			LOC48 = sonslen_227249(templ);
			HEX3Atmp_456185 = (NI64)(LOC48 - 1);
			res_456188 = 0;
			{
				while (1) {
					if (!(res_456188 <= HEX3Atmp_456185)) goto LA50;
					i_456160 = res_456188;
					evaltemplateaux_456039((*templ).kindU.S6.Sons->data[i_456160], actual, c, res);
					res_456188 += 1;
				} LA50: ;
			}
		}
		add_227498(result, res);
	}
	break;
	}
}

static N_INLINE(NI, safelen_227424)(tnode226816* n) {
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

N_NIMCALL(tnode226816*, evaltemplate_456334)(tnode226816* n, tsym226846* tmpl, tsym226846* gensymowner) {
	tnode226816* result;
	tnode226816* args;
	templctx456019 ctx;
	tnode226816* body;
	result = 0;
	evaltemplatecounter_456330 += 1;
	{
		if (!(100 < evaltemplatecounter_456330)) goto LA3;
		globalerror_198934((*n).Info, ((NU16) 183), ((NimStringDesc*) &TMP2842));
		result = n;
	}
	LA3: ;
	args = evaltemplateargs_456217(n, tmpl);
	memset((void*)(&ctx), 0, sizeof(ctx));
	ctx.Owner = tmpl;
	ctx.Gensymowner = gensymowner;
	initidtable_227167((&ctx.Mapping));
	body = getbody_280269(tmpl);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = isatom_233963(body);
		if (!LOC7) goto LA8;
		result = newnodei_227138(((NU8) 37), (*body).Info);
		evaltemplateaux_456039(body, args, (&ctx), result);
		{
			NI LOC12;
			LOC12 = 0;
			LOC12 = len_227364(result);
			if (!(LOC12 == 1)) goto LA13;
			result = (*result).kindU.S6.Sons->data[0];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			LOC16 = 0;
			LOC16 = rendertree_251058(result, 4);
			globalerror_198934((*result).Info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		result = copynode_227323(body);
		ctx.Instlines = !(((*body).Kind == ((NU8) 115) || (*body).Kind == ((NU8) 126) || (*body).Kind == ((NU8) 112) || (*body).Kind == ((NU8) 127)));
		{
			if (!ctx.Instlines) goto LA20;
			(*result).Info = (*n).Info;
		}
		LA20: ;
		{
			NI i_456400;
			NI HEX3Atmp_456430;
			NI LOC23;
			NI res_456433;
			i_456400 = 0;
			HEX3Atmp_456430 = 0;
			LOC23 = 0;
			LOC23 = safelen_227424(body);
			HEX3Atmp_456430 = (NI64)(LOC23 - 1);
			res_456433 = 0;
			{
				while (1) {
					if (!(res_456433 <= HEX3Atmp_456430)) goto LA25;
					i_456400 = res_456433;
					evaltemplateaux_456039((*body).kindU.S6.Sons->data[i_456400], args, (&ctx), result);
					res_456433 += 1;
				} LA25: ;
			}
		}
	}
	LA5: ;
	evaltemplatecounter_456330 -= 1;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_evaltemplInit)(void) {
	evaltemplatecounter_456330 = 0;
}

NIM_EXTERNC N_NOINLINE(void, HEX00_evaltemplDatInit)(void) {
}

