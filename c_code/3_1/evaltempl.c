/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode225816 tnode225816;
typedef struct tsym225846 tsym225846;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype225852 ttype225852;
typedef struct tident200021 tident200021;
typedef struct tnodeseq225810 tnodeseq225810;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq225848 ttypeseq225848;
typedef struct tloc225830 tloc225830;
typedef struct trope177009 trope177009;
typedef struct tscope225840 tscope225840;
typedef struct TY225947 TY225947;
typedef struct tinstantiation225836 tinstantiation225836;
typedef struct tstrtable225820 tstrtable225820;
typedef struct tsymseq225818 tsymseq225818;
typedef struct tlib225834 tlib225834;
typedef struct templctx455019 templctx455019;
typedef struct tidtable225864 tidtable225864;
typedef struct tidpairseq225862 tidpairseq225862;
typedef struct tidpair225860 tidpair225860;
typedef struct TY84945 TY84945;
typedef struct tcell45135 tcell45135;
typedef struct tcellseq45151 tcellseq45151;
typedef struct tgcheap47216 tgcheap47216;
typedef struct tcellset45147 tcellset45147;
typedef struct tpagedesc45143 tpagedesc45143;
typedef struct tmemregion27410 tmemregion27410;
typedef struct tsmallchunk26640 tsmallchunk26640;
typedef struct tllchunk27404 tllchunk27404;
typedef struct tbigchunk26642 tbigchunk26642;
typedef struct tintset26617 tintset26617;
typedef struct ttrunk26613 ttrunk26613;
typedef struct tavlnode27408 tavlnode27408;
typedef struct tgcstat47214 tgcstat47214;
typedef struct TY225936 TY225936;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk26638 tbasechunk26638;
typedef struct tfreecell26630 tfreecell26630;
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
struct  tloc225830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype225852* T;
trope177009* R;
trope177009* Heaproot;
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
struct  tstrtable225820  {
NI Counter;
tsymseq225818* Data;
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
struct  tidpair225860  {
tidobj200015* Key;
TNimObject* Val;
};
struct  tidtable225864  {
NI Counter;
tidpairseq225862* Data;
};
struct  templctx455019  {
tsym225846* Owner;
tsym225846* Gensymowner;
NIM_BOOL Instlines;
tidtable225864 Mapping;
};
struct TY84945 {
NimStringDesc* Field0;
NI Field1;
};
struct  tcell45135  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45151  {
NI Len;
NI Cap;
tcell45135** D;
};
struct  tcellset45147  {
NI Counter;
NI Max;
tpagedesc45143* Head;
tpagedesc45143** Data;
};
typedef tsmallchunk26640* TY27422[512];
typedef ttrunk26613* ttrunkbuckets26615[256];
struct  tintset26617  {
ttrunkbuckets26615 Data;
};
struct  tmemregion27410  {
NI Minlargeobj;
NI Maxlargeobj;
TY27422 Freesmallchunks;
tllchunk27404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26642* Freechunkslist;
tintset26617 Chunkstarts;
tavlnode27408* Root;
tavlnode27408* Deleted;
tavlnode27408* Last;
tavlnode27408* Freeavlnodes;
};
struct  tgcstat47214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45151 Zct;
tcellseq45151 Decstack;
tcellset45147 Cycleroots;
tcellseq45151 Tempstack;
NI Recgclock;
tmemregion27410 Region;
tgcstat47214 Stat;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
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
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
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
typedef NI TY26620[16];
struct  tpagedesc45143  {
tpagedesc45143* Next;
NI Key;
TY26620 Bits;
};
struct  tbasechunk26638  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26640  {
  tbasechunk26638 Sup;
tsmallchunk26640* Next;
tsmallchunk26640* Prev;
tfreecell26630* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27404  {
NI Size;
NI Acc;
tllchunk27404* Next;
};
struct  tbigchunk26642  {
  tbasechunk26638 Sup;
tbigchunk26642* Next;
tbigchunk26642* Prev;
NI Align;
NF Data;
};
struct  ttrunk26613  {
ttrunk26613* Next;
NI Key;
TY26620 Bits;
};
typedef tavlnode27408* TY27414[2];
struct  tavlnode27408  {
TY27414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26630  {
tfreecell26630* Next;
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
struct tidpairseq225862 {
  TGenericSeq Sup;
  tidpair225860 data[SEQ_DECL_SIZE];
};
struct TY225936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalerror_197934)(tlineinfo195539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tnode225816*, evaltemplateargs_455217)(tnode225816* n, tsym225846* s);
static N_INLINE(NI, sonslen_226249)(tnode225816* n);
static N_INLINE(NI, sonslen_226255)(ttype225852* n);
N_NIMCALL(tnode225816*, newnodei_226138)(NU8 kind, tlineinfo195539 info);
N_NIMCALL(tnode225816*, copytree_226329)(tnode225816* src);
N_NIMCALL(void, localerror_197955)(tlineinfo195539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_226287)(tnode225816* father, tnode225816* son);
N_NIMCALL(void, initidtable_226167)(tidtable225864* x);
N_NIMCALL(tnode225816*, getbody_279270)(tsym225846* s);
static N_INLINE(NIM_BOOL, isatom_232962)(tnode225816* n);
N_NIMCALL(void, evaltemplateaux_455039)(tnode225816* templ, tnode225816* actual, templctx455019* c, tnode225816* result);
static N_INLINE(NI, len_226364)(tnode225816* n);
N_NIMCALL(void, add_226498)(tnode225816* father, tnode225816* son);
N_NIMCALL(void, internalerror_198006)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_198126)(TY84945 x_198130);
N_NIMCALL(TNimObject*, idtableget_235182)(tidtable225864 t, tidobj200015* key);
N_NIMCALL(tsym225846*, copysym_226203)(tsym225846* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45135*, usrtocell_48846)(void* usr);
static N_INLINE(void, rtladdzct_50404)(tcell45135* c);
N_NOINLINE(void, addzct_48817)(tcellseq45151* s, tcell45135* c);
N_NIMCALL(void, idtableput_235196)(tidtable225864* t, tidobj200015* key, TNimObject* val);
N_NIMCALL(tnode225816*, newsymnode_227755)(tsym225846* sym, tlineinfo195539 info);
N_NIMCALL(tnode225816*, copynode_455027)(templctx455019* ctx, tnode225816* a, tnode225816* b);
N_NIMCALL(tnode225816*, copynode_226323)(tnode225816* src);
N_NIMCALL(NimStringDesc*, rendertree_250058)(tnode225816* n, NU8 renderflags);
static N_INLINE(NI, safelen_226424)(tnode225816* n);
STRING_LITERAL(TMP2838, "", 0);
STRING_LITERAL(TMP2840, "compiler/evaltempl.nim", 22);
NIM_CONST TY84945 TMP2839 = {((NimStringDesc*) &TMP2840),
39}
;
NI evaltemplatecounter_455330;
extern tgcheap47216 gch_47244;

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

static N_INLINE(NI, sonslen_226255)(ttype225852* n) {
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

N_NIMCALL(tnode225816*, evaltemplateargs_455217)(tnode225816* n, tsym225846* s) {
	tnode225816* result;
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
		a = sonslen_226249(n);
	}
	break;
	default:
	{
		a = 0;
	}
	break;
	}
	f = sonslen_226255((*s).Typ);
	{
		if (!(f < a)) goto LA5;
		globalerror_197934((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP2838));
	}
	LA5: ;
	result = newnodei_226138(((NU8) 151), (*n).Info);
	{
		NI i_455237;
		NI HEX3Atmp_455310;
		NI res_455313;
		i_455237 = 0;
		HEX3Atmp_455310 = 0;
		HEX3Atmp_455310 = (NI32)(f - 1);
		res_455313 = 1;
		{
			while (1) {
				tnode225816* arg;
				if (!(res_455313 <= HEX3Atmp_455310)) goto LA9;
				i_455237 = res_455313;
				{
					if (!(i_455237 < a)) goto LA12;
					arg = (*n).kindU.S6.Sons->data[i_455237];
				}
				goto LA10;
				LA12: ;
				{
					arg = copytree_226329((*(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_455237]).kindU.S4.Sym).Ast);
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
					localerror_197955((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP2838));
				}
				LA19: ;
				addson_226287(result, arg);
				res_455313 += 1;
			} LA9: ;
		}
	}
	return result;
}

static N_INLINE(NIM_BOOL, isatom_232962)(tnode225816* n) {
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

static N_INLINE(tcell45135*, usrtocell_48846)(void* usr) {
	tcell45135* result;
	result = 0;
	result = ((tcell45135*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45135))))));
	return result;
}

static N_INLINE(void, rtladdzct_50404)(tcell45135* c) {
	addzct_48817((&gch_47244.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45135* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48846(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45135* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48846((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(tnode225816*, copynode_455027)(templctx455019* ctx, tnode225816* a, tnode225816* b) {
	tnode225816* result;
	result = 0;
	result = copynode_226323(a);
	{
		if (!(*ctx).Instlines) goto LA3;
		(*result).Info = (*b).Info;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, evaltemplateaux_455039)(tnode225816* templ, tnode225816* actual, templctx455019* c, tnode225816* result) {
	switch ((*templ).Kind) {
	case ((NU8) 3):
	{
		tsym225846* s;
		s = (*templ).kindU.S4.Sym;
		{
			if (!((*(*s).Owner).Sup.Id == (*(*c).Owner).Sup.Id)) goto LA4;
			{
				tnode225816* x;
				if (!((*s).Kind == ((NU8) 3))) goto LA8;
				x = (*actual).kindU.S6.Sons->data[(*s).Position];
				{
					if (!((*x).Kind == ((NU8) 151))) goto LA12;
					{
						tnode225816* y_455094;
						y_455094 = 0;
						{
							NI i_455179;
							NI HEX3Atmp_455181;
							NI LOC16;
							NI res_455183;
							i_455179 = 0;
							HEX3Atmp_455181 = 0;
							LOC16 = 0;
							LOC16 = len_226364(x);
							HEX3Atmp_455181 = (LOC16 - 1);
							res_455183 = 0;
							{
								while (1) {
									if (!(res_455183 <= HEX3Atmp_455181)) goto LA18;
									i_455179 = res_455183;
									y_455094 = (*x).kindU.S6.Sons->data[i_455179];
									add_226498(result, y_455094);
									res_455183 += 1;
								} LA18: ;
							}
						}
					}
				}
				goto LA10;
				LA12: ;
				{
					tnode225816* LOC20;
					LOC20 = 0;
					LOC20 = copytree_226329(x);
					add_226498(result, LOC20);
				}
				LA10: ;
			}
			goto LA6;
			LA8: ;
			{
				tsym225846* x;
				tidobj200015* LOC27;
				TNimObject* LOC28;
				tlineinfo195539 LOC35;
				tnode225816* LOC41;
				{
					NimStringDesc* LOC26;
					if (!!((((*s).Flags &(1<<((((NU8) 31))&31)))!=0))) goto LA24;
					LOC26 = 0;
					LOC26 = HEX24_198126(TMP2839);
					internalerror_198006(LOC26);
				}
				LA24: ;
				LOC27 = 0;
				LOC27 = &s->Sup;
				LOC28 = 0;
				LOC28 = idtableget_235182((*c).Mapping, LOC27);
				x = ((tsym225846*) (LOC28));
				{
					tidobj200015* LOC33;
					TNimObject* LOC34;
					if (!(x == NIM_NIL)) goto LA31;
					x = copysym_226203(s, NIM_FALSE);
					asgnRefNoCycle((void**) (&(*x).Owner), (*c).Gensymowner);
					LOC33 = 0;
					LOC33 = &s->Sup;
					LOC34 = 0;
					LOC34 = &x->Sup.Sup;
					idtableput_235196((&(*c).Mapping), LOC33, LOC34);
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
				LOC41 = newsymnode_227755(x, LOC35);
				add_226498(result, LOC41);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			tnode225816* LOC43;
			LOC43 = 0;
			LOC43 = copynode_455027((&(*c)), templ, actual);
			add_226498(result, LOC43);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		tnode225816* LOC45;
		LOC45 = 0;
		LOC45 = copynode_455027((&(*c)), templ, actual);
		add_226498(result, LOC45);
	}
	break;
	default:
	{
		tnode225816* res;
		res = copynode_455027((&(*c)), templ, actual);
		{
			NI i_455160;
			NI HEX3Atmp_455185;
			NI LOC48;
			NI res_455188;
			i_455160 = 0;
			HEX3Atmp_455185 = 0;
			LOC48 = 0;
			LOC48 = sonslen_226249(templ);
			HEX3Atmp_455185 = (NI32)(LOC48 - 1);
			res_455188 = 0;
			{
				while (1) {
					if (!(res_455188 <= HEX3Atmp_455185)) goto LA50;
					i_455160 = res_455188;
					evaltemplateaux_455039((*templ).kindU.S6.Sons->data[i_455160], actual, c, res);
					res_455188 += 1;
				} LA50: ;
			}
		}
		add_226498(result, res);
	}
	break;
	}
}

static N_INLINE(NI, safelen_226424)(tnode225816* n) {
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

N_NIMCALL(tnode225816*, evaltemplate_455334)(tnode225816* n, tsym225846* tmpl, tsym225846* gensymowner) {
	tnode225816* result;
	tnode225816* args;
	templctx455019 ctx;
	tnode225816* body;
	result = 0;
	evaltemplatecounter_455330 += 1;
	{
		if (!(100 < evaltemplatecounter_455330)) goto LA3;
		globalerror_197934((*n).Info, ((NU16) 183), ((NimStringDesc*) &TMP2838));
		result = n;
	}
	LA3: ;
	args = evaltemplateargs_455217(n, tmpl);
	memset((void*)(&ctx), 0, sizeof(ctx));
	ctx.Owner = tmpl;
	ctx.Gensymowner = gensymowner;
	initidtable_226167((&ctx.Mapping));
	body = getbody_279270(tmpl);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = isatom_232962(body);
		if (!LOC7) goto LA8;
		result = newnodei_226138(((NU8) 37), (*body).Info);
		evaltemplateaux_455039(body, args, (&ctx), result);
		{
			NI LOC12;
			LOC12 = 0;
			LOC12 = len_226364(result);
			if (!(LOC12 == 1)) goto LA13;
			result = (*result).kindU.S6.Sons->data[0];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			LOC16 = 0;
			LOC16 = rendertree_250058(result, 4);
			globalerror_197934((*result).Info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		result = copynode_226323(body);
		ctx.Instlines = !(((*body).Kind == ((NU8) 115) || (*body).Kind == ((NU8) 126) || (*body).Kind == ((NU8) 112) || (*body).Kind == ((NU8) 127)));
		{
			if (!ctx.Instlines) goto LA20;
			(*result).Info = (*n).Info;
		}
		LA20: ;
		{
			NI i_455400;
			NI HEX3Atmp_455430;
			NI LOC23;
			NI res_455433;
			i_455400 = 0;
			HEX3Atmp_455430 = 0;
			LOC23 = 0;
			LOC23 = safelen_226424(body);
			HEX3Atmp_455430 = (NI32)(LOC23 - 1);
			res_455433 = 0;
			{
				while (1) {
					if (!(res_455433 <= HEX3Atmp_455430)) goto LA25;
					i_455400 = res_455433;
					evaltemplateaux_455039((*body).kindU.S6.Sons->data[i_455400], args, (&ctx), result);
					res_455433 += 1;
				} LA25: ;
			}
		}
	}
	LA5: ;
	evaltemplatecounter_455330 -= 1;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_evaltemplInit)(void) {
	evaltemplatecounter_455330 = 0;
}

NIM_EXTERNC N_NOINLINE(void, HEX00_evaltemplDatInit)(void) {
}

