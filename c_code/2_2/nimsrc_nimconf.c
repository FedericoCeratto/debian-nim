/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY187169 TY187169;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tcell46347 Tcell46347;
typedef struct Tcellseq46363 Tcellseq46363;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46359 Tcellset46359;
typedef struct Tpagedesc46355 Tpagedesc46355;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tlexer182185 Tlexer182185;
typedef struct Tbaselexer180024 Tbaselexer180024;
typedef struct TNimObject TNimObject;
typedef struct Tllstream179204 Tllstream179204;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct Ttoken182181 Ttoken182181;
typedef struct Tident168021 Tident168021;
typedef struct Tidobj168015 Tidobj168015;
typedef struct Stringtableobj134012 Stringtableobj134012;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Keyvaluepairseq134010 Keyvaluepairseq134010;
typedef struct Keyvaluepair134008 Keyvaluepair134008;
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tcell46347  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46363  {
NI len;
NI cap;
Tcell46347** d;
};
struct  Tcellset46359  {
NI counter;
NI max;
Tpagedesc46355* head;
Tpagedesc46355** data;
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
Tcellseq46363 zct;
Tcellseq46363 decstack;
Tcellset46359 cycleroots;
Tcellseq46363 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tbaselexer180024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream179204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo164338 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} Terrorhandler182183;
struct  Tlexer182185  {
  Tbaselexer180024 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler182183 errorhandler;
};
struct  Ttoken182181  {
NU8 toktype;
NI indent;
Tident168021* ident;
NI64 inumber;
NF fnumber;
NU8 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
};
typedef NimStringDesc* TY177061[3];
typedef NI TY27420[8];
struct  Tpagedesc46355  {
Tpagedesc46355* next;
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
struct  Tllstream179204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Stringtableobj134012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq134010* data;
NU8 mode;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct Keyvaluepair134008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct TY187169 {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq134010 {
  TGenericSeq Sup;
  Keyvaluepair134008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP720)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, getprefixdir_155365)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, readconfigfile_187520)(NimStringDesc* filename);
N_NIMCALL(Tllstream179204*, llstreamopen_179256)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, inittoken_182369)(Ttoken182181* L);
N_NIMCALL(void, openlexer_182412)(Tlexer182185* lex, NimStringDesc* filename, Tllstream179204* inputstream);
N_NIMCALL(void, conftok_187377)(Tlexer182185* L, Ttoken182181* tok);
N_NIMCALL(void, ppgettok_187009)(Tlexer182185* L, Ttoken182181* tok);
N_NIMCALL(void, rawgettok_185848)(Tlexer182185* L, Ttoken182181* tok);
N_NIMCALL(void, parsedirective_187342)(Tlexer182185* L, Ttoken182181* tok);
N_NIMCALL(NU16, whichkeyword_173386)(Tident168021* id);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NIM_BOOL, evalppif_187147)(Tlexer182185* L, Ttoken182181* tok);
N_NIMCALL(NIM_BOOL, parseexpr_187039)(Tlexer182185* L, Ttoken182181* tok);
N_NIMCALL(NIM_BOOL, parseandexpr_187088)(Tlexer182185* L, Ttoken182181* tok);
N_NIMCALL(NIM_BOOL, parseatom_187048)(Tlexer182185* L, Ttoken182181* tok);
N_NIMCALL(void, lexmessage_182483)(Tlexer182185* L, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NIM_BOOL, isdefined_169167)(Tident168021* symbol);
N_NIMCALL(void, jumptodirective_187220)(Tlexer182185* L, Ttoken182181* tok, NU8 dest);
N_NIMCALL(void, doelse_187230)(Tlexer182185* L, Ttoken182181* tok);
N_NIMCALL(void, doelif_187251)(Tlexer182185* L, Ttoken182181* tok);
N_NIMCALL(void, doend_187191)(Tlexer182185* L, Ttoken182181* tok);
N_NIMCALL(void, msgwriteln_165536)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, Stringtableobj134012* t, NU8 flags);
N_NIMCALL(NimStringDesc*, toktostr_182323)(Ttoken182181* tok);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, putenv_122669)(NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, getenv_122644)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, parseassignment_187439)(Tlexer182185* L, Ttoken182181* tok);
N_NIMCALL(Tident168021*, getident_168463)(NimStringDesc* identifier);
static N_INLINE(Tlineinfo164338, getlineinfo_182218)(Tlexer182185* L, Ttoken182181* tok);
N_NIMCALL(Tlineinfo164338, newlineinfo_164866)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(void, checksymbol_187408)(Tlexer182185* L, Ttoken182181* tok);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, processswitch_177040)(NimStringDesc* switch_177042, NimStringDesc* arg, NU8 pass, Tlineinfo164338 info);
N_NIMCALL(void, closelexer_182424)(Tlexer182185* lex);
N_NIMCALL(void, rawmessage_165960)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, getsystemconfigpath_187590)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getuserconfigpath_187578)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, HEX2F_119292)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76243, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
static N_INLINE(NIM_BOOL, fileexists_118010)(NimStringDesc* filename);
STRING_LITERAL(TMP1873, "/usr", 4);
STRING_LITERAL(TMP1874, "/usr/lib/nim", 12);
STRING_LITERAL(TMP1875, "/usr/local", 10);
STRING_LITERAL(TMP1876, "/usr/local/lib/nim", 18);
STRING_LITERAL(TMP1877, "lib", 3);
STRING_LITERAL(TMP1878, "@", 1);
STRING_LITERAL(TMP1879, "\')\'", 3);
STRING_LITERAL(TMP1880, "\':\'", 3);
STRING_LITERAL(TMP1881, "@if", 3);
STRING_LITERAL(TMP1882, "@end", 4);
STRING_LITERAL(TMP1884, "putenv", 6);
STRING_LITERAL(TMP1885, "prependenv", 10);
STRING_LITERAL(TMP1886, "appendenv", 9);
STRING_LITERAL(TMP1887, "-", 1);
STRING_LITERAL(TMP1888, "--", 2);
STRING_LITERAL(TMP1889, "", 0);
STRING_LITERAL(TMP1890, "\']\'", 3);
STRING_LITERAL(TMP1891, "%=", 2);
STRING_LITERAL(TMP1892, "&", 1);
STRING_LITERAL(TMP1893, "config", 6);
STRING_LITERAL(TMP1894, "etc", 3);
STRING_LITERAL(TMP1895, "/etc/", 5);
STRING_LITERAL(TMP1897, "nimcfg", 6);
STRING_LITERAL(TMP1898, "nim.cfg", 7);
STRING_LITERAL(TMP1899, "nimrod.cfg", 10);
TY187169* condstack_187186;
extern TNimType NTI138; /* bool */
TNimType NTI187169; /* seq[bool] */
extern Tgcheap48216 gch_48244;
extern NimStringDesc* libpath_155233;
extern NU32 gglobaloptions_155128;
extern TNimType NTI182185; /* TLexer */
extern Stringtableobj134012* gconfigvars_155231;
extern NI gverbosity_155137;
extern NimStringDesc* gprojectpath_155235;
extern NimStringDesc* gprojectname_155234;
extern NimStringDesc* gprojectfull_155236;
N_NIMCALL(void, TMP720)(void* p, NI op) {
	TY187169* a;
	NI LOC1;
	a = (TY187169*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr) {
	Tcell46347* result;
	result = 0;
	result = ((Tcell46347*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46347))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46347* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46347* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

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

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46347* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46347* c;
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

N_NIMCALL(void, ppgettok_187009)(Tlexer182185* L, Ttoken182181* tok) {
	rawgettok_185848(L, tok);
	{
		while (1) {
			if (!((*tok).toktype == ((NU8) 113))) goto LA2;
			rawgettok_185848(L, tok);
		} LA2: ;
	}
}

N_NIMCALL(NIM_BOOL, parseatom_187048)(Tlexer182185* L, Ttoken182181* tok) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*tok).toktype == ((NU8) 93))) goto LA3;
		ppgettok_187009(L, tok);
		result = parseexpr_187039(L, tok);
		{
			if (!((*tok).toktype == ((NU8) 94))) goto LA7;
			ppgettok_187009(L, tok);
		}
		goto LA5;
		LA7: ;
		{
			lexmessage_182483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1879));
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC13;
		if (!((*(*tok).ident).Sup.id == ((NI) 45))) goto LA11;
		ppgettok_187009(L, tok);
		LOC13 = 0;
		LOC13 = parseatom_187048(L, tok);
		result = !(LOC13);
	}
	goto LA1;
	LA11: ;
	{
		result = isdefined_169167((*tok).ident);
		ppgettok_187009(L, tok);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, parseandexpr_187088)(Tlexer182185* L, Ttoken182181* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseatom_187048(L, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).ident).Sup.id == ((NI) 2))) goto LA2;
			ppgettok_187009(L, tok);
			b = parseatom_187048(L, tok);
			LOC3 = 0;
			LOC3 = result;
			if (!(LOC3)) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, parseexpr_187039)(Tlexer182185* L, Ttoken182181* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseandexpr_187088(L, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).ident).Sup.id == ((NI) 49))) goto LA2;
			ppgettok_187009(L, tok);
			b = parseandexpr_187088(L, tok);
			LOC3 = 0;
			LOC3 = result;
			if (LOC3) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, evalppif_187147)(Tlexer182185* L, Ttoken182181* tok) {
	NIM_BOOL result;
	result = 0;
	ppgettok_187009(L, tok);
	result = parseexpr_187039(L, tok);
	{
		if (!((*tok).toktype == ((NU8) 107))) goto LA3;
		ppgettok_187009(L, tok);
	}
	goto LA1;
	LA3: ;
	{
		lexmessage_182483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1880));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, doelse_187230)(Tlexer182185* L, Ttoken182181* tok) {
	{
		if (!((condstack_187186 ? (condstack_187186->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_182483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1881));
	}
	LA3: ;
	ppgettok_187009(L, tok);
	{
		if (!((*tok).toktype == ((NU8) 107))) goto LA7;
		ppgettok_187009(L, tok);
	}
	LA7: ;
	{
		if (!condstack_187186->data[(condstack_187186 ? (condstack_187186->Sup.len-1) : -1)]) goto LA11;
		jumptodirective_187220(L, tok, ((NU8) 0));
	}
	LA11: ;
}

N_NIMCALL(void, doelif_187251)(Tlexer182185* L, Ttoken182181* tok) {
	NIM_BOOL res;
	{
		if (!((condstack_187186 ? (condstack_187186->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_182483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1881));
	}
	LA3: ;
	res = evalppif_187147(L, tok);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = condstack_187186->data[(condstack_187186 ? (condstack_187186->Sup.len-1) : -1)];
		if (LOC7) goto LA8;
		LOC7 = !(res);
		LA8: ;
		if (!LOC7) goto LA9;
		jumptodirective_187220(L, tok, ((NU8) 1));
	}
	goto LA5;
	LA9: ;
	{
		condstack_187186->data[(condstack_187186 ? (condstack_187186->Sup.len-1) : -1)] = NIM_TRUE;
	}
	LA5: ;
}

N_NIMCALL(void, doend_187191)(Tlexer182185* L, Ttoken182181* tok) {
	{
		if (!((condstack_187186 ? (condstack_187186->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_182483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1881));
	}
	LA3: ;
	ppgettok_187009(L, tok);
	condstack_187186 = (TY187169*) setLengthSeq(&(condstack_187186)->Sup, sizeof(NIM_BOOL), ((NI) ((condstack_187186 ? (condstack_187186->Sup.len-1) : -1))));
}

N_NIMCALL(void, jumptodirective_187220)(Tlexer182185* L, Ttoken182181* tok, NU8 dest) {
	NI nestedifs;
	nestedifs = ((NI) 0);
	{
		while (1) {
			{
				NIM_BOOL LOC5;
				NU16 LOC9;
				LOC5 = 0;
				LOC5 = !(((*tok).ident == NIM_NIL));
				if (!(LOC5)) goto LA6;
				LOC5 = eqStrings((*(*tok).ident).s, ((NimStringDesc*) &TMP1878));
				LA6: ;
				if (!LOC5) goto LA7;
				ppgettok_187009(L, tok);
				LOC9 = 0;
				LOC9 = whichkeyword_173386((*tok).ident);
				switch (LOC9) {
				case ((NU16) 31):
				{
					nestedifs += ((NI) 1);
				}
				break;
				case ((NU16) 21):
				{
					{
						NIM_BOOL LOC14;
						LOC14 = 0;
						LOC14 = (dest == ((NU8) 1));
						if (!(LOC14)) goto LA15;
						LOC14 = (nestedifs == ((NI) 0));
						LA15: ;
						if (!LOC14) goto LA16;
						doelse_187230(L, tok);
						goto LA1;
					}
					LA16: ;
				}
				break;
				case ((NU16) 20):
				{
					{
						NIM_BOOL LOC21;
						LOC21 = 0;
						LOC21 = (dest == ((NU8) 1));
						if (!(LOC21)) goto LA22;
						LOC21 = (nestedifs == ((NI) 0));
						LA22: ;
						if (!LOC21) goto LA23;
						doelif_187251(L, tok);
						goto LA1;
					}
					LA23: ;
				}
				break;
				case ((NU16) 22):
				{
					{
						if (!(nestedifs == ((NI) 0))) goto LA28;
						doend_187191(L, tok);
						goto LA1;
					}
					LA28: ;
					{
						if (!(((NI) 0) < nestedifs)) goto LA32;
						nestedifs -= ((NI) 1);
					}
					LA32: ;
				}
				break;
				default:
				{
				}
				break;
				}
				ppgettok_187009(L, tok);
			}
			goto LA3;
			LA7: ;
			{
				if (!((*tok).toktype == ((NU8) 1))) goto LA36;
				lexmessage_182483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1882));
			}
			goto LA3;
			LA36: ;
			{
				ppgettok_187009(L, tok);
			}
			LA3: ;
		}
	} LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, parsedirective_187342)(Tlexer182185* L, Ttoken182181* tok) {
	NU16 LOC1;
	ppgettok_187009(L, tok);
	LOC1 = 0;
	LOC1 = whichkeyword_173386((*tok).ident);
	switch (LOC1) {
	case ((NU16) 31):
	{
		NIM_BOOL res;
		condstack_187186 = (TY187169*) setLengthSeq(&(condstack_187186)->Sup, sizeof(NIM_BOOL), ((NI) ((NI)((condstack_187186 ? condstack_187186->Sup.len : 0) + ((NI) 1)))));
		res = evalppif_187147(L, tok);
		condstack_187186->data[(condstack_187186 ? (condstack_187186->Sup.len-1) : -1)] = res;
		{
			if (!!(res)) goto LA5;
			jumptodirective_187220(L, tok, ((NU8) 1));
		}
		LA5: ;
	}
	break;
	case ((NU16) 20):
	{
		doelif_187251(L, tok);
	}
	break;
	case ((NU16) 21):
	{
		doelse_187230(L, tok);
	}
	break;
	case ((NU16) 22):
	{
		doend_187191(L, tok);
	}
	break;
	case ((NU16) 180):
	{
		NimStringDesc* LOC11;
		NimStringDesc* LOC12;
		ppgettok_187009(L, tok);
		LOC11 = 0;
		LOC11 = toktostr_182323((&(*tok)));
		LOC12 = 0;
		LOC12 = nstFormat(LOC11, gconfigvars_155231, 5);
		msgwriteln_165536(LOC12);
		ppgettok_187009(L, tok);
	}
	break;
	default:
	{
		NimStringDesc* LOC14;
		LOC14 = 0;
		LOC14 = nsuNormalize((*(*tok).ident).s);
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1884))) goto LA15;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1885))) goto LA16;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1886))) goto LA17;
		goto LA18;
		LA15: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC21;
			ppgettok_187009(L, tok);
			key = toktostr_182323((&(*tok)));
			ppgettok_187009(L, tok);
			LOC21 = 0;
			LOC21 = toktostr_182323((&(*tok)));
			putenv_122669(key, LOC21);
			ppgettok_187009(L, tok);
		}
		goto LA19;
		LA16: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC23;
			NimStringDesc* LOC24;
			NimStringDesc* LOC25;
			ppgettok_187009(L, tok);
			key = toktostr_182323((&(*tok)));
			ppgettok_187009(L, tok);
			LOC23 = 0;
			LOC24 = 0;
			LOC24 = toktostr_182323((&(*tok)));
			LOC25 = 0;
			LOC25 = getenv_122644(key);
			LOC23 = rawNewString(LOC24->Sup.len + LOC25->Sup.len + 0);
appendString(LOC23, LOC24);
appendString(LOC23, LOC25);
			putenv_122669(key, LOC23);
			ppgettok_187009(L, tok);
		}
		goto LA19;
		LA17: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			NimStringDesc* LOC29;
			ppgettok_187009(L, tok);
			key = toktostr_182323((&(*tok)));
			ppgettok_187009(L, tok);
			LOC27 = 0;
			LOC28 = 0;
			LOC28 = getenv_122644(key);
			LOC29 = 0;
			LOC29 = toktostr_182323((&(*tok)));
			LOC27 = rawNewString(LOC28->Sup.len + LOC29->Sup.len + 0);
appendString(LOC27, LOC28);
appendString(LOC27, LOC29);
			putenv_122669(key, LOC27);
			ppgettok_187009(L, tok);
		}
		goto LA19;
		LA18: ;
		{
			NimStringDesc* LOC31;
			LOC31 = 0;
			LOC31 = toktostr_182323((&(*tok)));
			lexmessage_182483((&(*L)), ((NU16) 30), LOC31);
		}
		LA19: ;
	}
	break;
	}
}

N_NIMCALL(void, conftok_187377)(Tlexer182185* L, Ttoken182181* tok) {
	ppgettok_187009(L, tok);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = !(((*tok).ident == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = eqStrings((*(*tok).ident).s, ((NimStringDesc*) &TMP1878));
			LA4: ;
			if (!LOC3) goto LA2;
			parsedirective_187342(L, tok);
		} LA2: ;
	}
}

static N_INLINE(Tlineinfo164338, getlineinfo_182218)(Tlexer182185* L, Ttoken182181* tok) {
	Tlineinfo164338 result;
	memset((void*)(&result), 0, sizeof(result));
	result = newlineinfo_164866((*L).fileidx, (*tok).line, (*tok).col);
	return result;
}

N_NIMCALL(void, checksymbol_187408)(Tlexer182185* L, Ttoken182181* tok) {
	{
		NimStringDesc* LOC5;
		if (!!(((*tok).toktype >= ((NU8) 2) && (*tok).toktype <= ((NU8) 72) || (*tok).toktype >= ((NU8) 87) && (*tok).toktype <= ((NU8) 89)))) goto LA3;
		LOC5 = 0;
		LOC5 = toktostr_182323(tok);
		lexmessage_182483(L, ((NU16) 19), LOC5);
	}
	LA3: ;
}

N_NIMCALL(void, parseassignment_187439)(Tlexer182185* L, Ttoken182181* tok) {
	Tlineinfo164338 info;
	NimStringDesc* s;
	NimStringDesc* val;
	NIM_BOOL percent;
	Tident168021* LOC22;
	{
		NIM_BOOL LOC3;
		Tident168021* LOC4;
		Tident168021* LOC6;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = getident_168463(((NimStringDesc*) &TMP1887));
		LOC3 = ((*(*tok).ident).Sup.id == (*LOC4).Sup.id);
		if (LOC3) goto LA5;
		LOC6 = 0;
		LOC6 = getident_168463(((NimStringDesc*) &TMP1888));
		LOC3 = ((*(*tok).ident).Sup.id == (*LOC6).Sup.id);
		LA5: ;
		if (!LOC3) goto LA7;
		conftok_187377(L, tok);
	}
	LA7: ;
	info = getlineinfo_182218((&(*L)), (&(*tok)));
	checksymbol_187408((&(*L)), (&(*tok)));
	s = toktostr_182323((&(*tok)));
	conftok_187377(L, tok);
	val = copyString(((NimStringDesc*) &TMP1889));
	{
		while (1) {
			NimStringDesc* LOC11;
			if (!((*tok).toktype == ((NU8) 110))) goto LA10;
			s = addChar(s, 46);
			conftok_187377(L, tok);
			checksymbol_187408((&(*L)), (&(*tok)));
			LOC11 = 0;
			LOC11 = toktostr_182323((&(*tok)));
			s = resizeString(s, LOC11->Sup.len + 0);
appendString(s, LOC11);
			conftok_187377(L, tok);
		} LA10: ;
	}
	{
		NimStringDesc* LOC16;
		if (!((*tok).toktype == ((NU8) 95))) goto LA14;
		conftok_187377(L, tok);
		checksymbol_187408((&(*L)), (&(*tok)));
		LOC16 = 0;
		LOC16 = toktostr_182323((&(*tok)));
		val = resizeString(val, LOC16->Sup.len + 0);
appendString(val, LOC16);
		conftok_187377(L, tok);
		{
			if (!((*tok).toktype == ((NU8) 96))) goto LA19;
			conftok_187377(L, tok);
		}
		goto LA17;
		LA19: ;
		{
			lexmessage_182483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1890));
		}
		LA17: ;
		val = addChar(val, 93);
	}
	LA14: ;
	LOC22 = 0;
	LOC22 = getident_168463(((NimStringDesc*) &TMP1891));
	percent = ((*(*tok).ident).Sup.id == (*LOC22).Sup.id);
	{
		NIM_BOOL LOC25;
		NimStringDesc* LOC33;
		LOC25 = 0;
		LOC25 = ((*tok).toktype == ((NU8) 107) || (*tok).toktype == ((NU8) 109));
		if (LOC25) goto LA26;
		LOC25 = percent;
		LA26: ;
		if (!LOC25) goto LA27;
		{
			if (!(((NI) 0) < (val ? val->Sup.len : 0))) goto LA31;
			val = addChar(val, 58);
		}
		LA31: ;
		conftok_187377(L, tok);
		checksymbol_187408((&(*L)), (&(*tok)));
		LOC33 = 0;
		LOC33 = toktostr_182323((&(*tok)));
		val = resizeString(val, LOC33->Sup.len + 0);
appendString(val, LOC33);
		conftok_187377(L, tok);
		{
			while (1) {
				NIM_BOOL LOC36;
				Tident168021* LOC38;
				NimStringDesc* LOC39;
				LOC36 = 0;
				LOC36 = !(((*tok).ident == NIM_NIL));
				if (!(LOC36)) goto LA37;
				LOC38 = 0;
				LOC38 = getident_168463(((NimStringDesc*) &TMP1892));
				LOC36 = ((*(*tok).ident).Sup.id == (*LOC38).Sup.id);
				LA37: ;
				if (!LOC36) goto LA35;
				conftok_187377(L, tok);
				checksymbol_187408((&(*L)), (&(*tok)));
				LOC39 = 0;
				LOC39 = toktostr_182323((&(*tok)));
				val = resizeString(val, LOC39->Sup.len + 0);
appendString(val, LOC39);
				conftok_187377(L, tok);
			} LA35: ;
		}
	}
	LA27: ;
	{
		NimStringDesc* LOC44;
		if (!percent) goto LA42;
		LOC44 = 0;
		LOC44 = nstFormat(val, gconfigvars_155231, 3);
		processswitch_177040(s, LOC44, ((NU8) 2), info);
	}
	goto LA40;
	LA42: ;
	{
		processswitch_177040(s, val, ((NU8) 2), info);
	}
	LA40: ;
}

N_NIMCALL(void, readconfigfile_187520)(NimStringDesc* filename) {
	Tlexer182185 L;
	Ttoken182181 tok;
	Tllstream179204* stream;
	memset((void*)(&L), 0, sizeof(L));
	L.Sup.Sup.m_type = (&NTI182185);
	memset((void*)(&tok), 0, sizeof(tok));
	stream = 0;
	stream = llstreamopen_179256(filename, ((NU8) 0));
	{
		if (!!((stream == NIM_NIL))) goto LA3;
		inittoken_182369((&tok));
		openlexer_182412((&L), filename, stream);
		tok.toktype = ((NU8) 1);
		conftok_187377((&L), (&tok));
		{
			while (1) {
				if (!!((tok.toktype == ((NU8) 1)))) goto LA6;
				parseassignment_187439((&L), (&tok));
			} LA6: ;
		}
		{
			if (!(((NI) 0) < (condstack_187186 ? condstack_187186->Sup.len : 0))) goto LA9;
			lexmessage_182483((&L), ((NU16) 23), ((NimStringDesc*) &TMP1882));
		}
		LA9: ;
		closelexer_182424((&L));
		{
			if (!(((NI) 1) <= gverbosity_155137)) goto LA13;
			rawmessage_165960(((NU16) 272), filename);
		}
		LA13: ;
	}
	LA3: ;
}

N_NIMCALL(NimStringDesc*, getsystemconfigpath_187590)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* p;
	TY177061 LOC1;
	result = 0;
	p = getprefixdir_155365();
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = copyString(p);
	LOC1[1] = copyString(((NimStringDesc*) &TMP1893));
	LOC1[2] = copyString(filename);
	result = nosjoinPathOpenArray(LOC1, 3);
	{
		NIM_BOOL LOC4;
		TY177061 LOC7;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		memset((void*)LOC7, 0, sizeof(LOC7));
		LOC7[0] = copyString(p);
		LOC7[1] = copyString(((NimStringDesc*) &TMP1894));
		LOC7[2] = copyString(filename);
		result = nosjoinPathOpenArray(LOC7, 3);
	}
	LA5: ;
	{
		NIM_BOOL LOC10;
		NimStringDesc* LOC13;
		LOC10 = 0;
		LOC10 = nosexistsFile(result);
		if (!!(LOC10)) goto LA11;
		LOC13 = 0;
		LOC13 = rawNewString(filename->Sup.len + 5);
appendString(LOC13, ((NimStringDesc*) &TMP1895));
appendString(LOC13, filename);
		result = LOC13;
	}
	LA11: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getuserconfigpath_187578)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetConfigDir();
	result = nosjoinPath(LOC1, filename);
	return result;
}

static N_INLINE(NIM_BOOL, fileexists_118010)(NimStringDesc* filename) {
	NIM_BOOL result;
	result = 0;
	result = nosexistsFile(filename);
	return result;
}

N_NIMCALL(void, loadconfigs_187609)(NimStringDesc* cfg) {
	NimStringDesc* pd;
	{
		NimStringDesc* prefix;
		if (!((libpath_155233) && (libpath_155233)->Sup.len == 0)) goto LA3;
		prefix = getprefixdir_155365();
		{
			NimStringDesc* LOC9;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1873))) goto LA7;
			LOC9 = 0;
			LOC9 = libpath_155233; libpath_155233 = copyStringRC1(((NimStringDesc*) &TMP1874));
			if (LOC9) nimGCunrefNoCycle(LOC9);
		}
		goto LA5;
		LA7: ;
		{
			NimStringDesc* LOC13;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1875))) goto LA11;
			LOC13 = 0;
			LOC13 = libpath_155233; libpath_155233 = copyStringRC1(((NimStringDesc*) &TMP1876));
			if (LOC13) nimGCunrefNoCycle(LOC13);
		}
		goto LA5;
		LA11: ;
		{
			asgnRefNoCycle((void**) (&libpath_155233), nosjoinPath(prefix, ((NimStringDesc*) &TMP1877)));
		}
		LA5: ;
	}
	LA3: ;
	{
		NimStringDesc* LOC19;
		if (!!(((gglobaloptions_155128 &(1<<((((NU8) 16))&31)))!=0))) goto LA17;
		LOC19 = 0;
		LOC19 = getsystemconfigpath_187590(cfg);
		readconfigfile_187520(LOC19);
	}
	LA17: ;
	{
		NimStringDesc* LOC24;
		if (!!(((gglobaloptions_155128 &(1<<((((NU8) 18))&31)))!=0))) goto LA22;
		LOC24 = 0;
		LOC24 = getuserconfigpath_187578(cfg);
		readconfigfile_187520(LOC24);
	}
	LA22: ;
	{
		if (!(((NI) 0) < (gprojectpath_155235 ? gprojectpath_155235->Sup.len : 0))) goto LA27;
		pd = copyString(gprojectpath_155235);
	}
	goto LA25;
	LA27: ;
	{
		pd = nosgetCurrentDir();
	}
	LA25: ;
	{
		if (!!(((gglobaloptions_155128 &(1<<((((NU8) 19))&31)))!=0))) goto LA32;
		{
			NimStringDesc* dir_187834;
			dir_187834 = 0;
			{
				NimStringDesc* current_187851;
				if (!NIM_FALSE) goto LA37;
				current_187851 = copyString(pd);
				{
					NimStringDesc* LOC43;
					if (!NIM_FALSE) goto LA41;
					dir_187834 = pd;
					LOC43 = 0;
					LOC43 = HEX2F_119292(dir_187834, cfg);
					readconfigfile_187520(LOC43);
				}
				LA41: ;
				{
					while (1) {
						NimStringDesc* LOC51;
						{
							NIM_BOOL LOC48;
							LOC48 = 0;
							LOC48 = nosisRootDir(current_187851);
							if (!LOC48) goto LA49;
							goto LA44;
						}
						LA49: ;
						current_187851 = nosparentDir(current_187851);
						dir_187834 = current_187851;
						LOC51 = 0;
						LOC51 = HEX2F_119292(dir_187834, cfg);
						readconfigfile_187520(LOC51);
					}
				} LA44: ;
			}
			goto LA35;
			LA37: ;
			{
				{
					NI i_187853;
					NI HEX3Atmp_187855;
					NI res_187857;
					i_187853 = 0;
					HEX3Atmp_187855 = 0;
					HEX3Atmp_187855 = (NI)((pd ? pd->Sup.len : 0) - ((NI) 2));
					res_187857 = ((NI) 0);
					{
						while (1) {
							if (!(res_187857 <= HEX3Atmp_187855)) goto LA55;
							i_187853 = res_187857;
							{
								NIM_BOOL LOC58;
								NIM_BOOL LOC60;
								NimStringDesc* LOC64;
								LOC58 = 0;
								LOC58 = (((NU8)(pd->data[i_187853])) == ((NU8)(47)) || ((NU8)(pd->data[i_187853])) == ((NU8)(47)));
								if (!(LOC58)) goto LA59;
								LOC60 = 0;
								LOC60 = (i_187853 == ((NI) 0));
								if (LOC60) goto LA61;
								LOC60 = !((((NU8)(pd->data[(NI)(i_187853 - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(pd->data[(NI)(i_187853 - ((NI) 1))])) == ((NU8)(47))));
								LA61: ;
								LOC58 = LOC60;
								LA59: ;
								if (!LOC58) goto LA62;
								dir_187834 = copyStrLast(pd, ((NI) 0), i_187853);
								LOC64 = 0;
								LOC64 = HEX2F_119292(dir_187834, cfg);
								readconfigfile_187520(LOC64);
							}
							LA62: ;
							res_187857 += ((NI) 1);
						} LA55: ;
					}
				}
				{
					NimStringDesc* LOC69;
					if (!NIM_FALSE) goto LA67;
					dir_187834 = pd;
					LOC69 = 0;
					LOC69 = HEX2F_119292(dir_187834, cfg);
					readconfigfile_187520(LOC69);
				}
				LA67: ;
			}
			LA35: ;
		}
	}
	LA32: ;
	{
		NimStringDesc* LOC74;
		if (!!(((gglobaloptions_155128 &(1<<((((NU8) 17))&31)))!=0))) goto LA72;
		LOC74 = 0;
		LOC74 = HEX2F_119292(pd, cfg);
		readconfigfile_187520(LOC74);
		{
			NimStringDesc* projectconfig;
			if (!!(((gprojectname_155234 ? gprojectname_155234->Sup.len : 0) == ((NI) 0)))) goto LA77;
			projectconfig = noschangeFileExt(gprojectfull_155236, ((NimStringDesc*) &TMP1897));
			{
				NIM_BOOL LOC81;
				LOC81 = 0;
				LOC81 = fileexists_118010(projectconfig);
				if (!!(LOC81)) goto LA82;
				projectconfig = noschangeFileExt(gprojectfull_155236, ((NimStringDesc*) &TMP1898));
			}
			LA82: ;
			{
				NIM_BOOL LOC86;
				LOC86 = 0;
				LOC86 = fileexists_118010(projectconfig);
				if (!!(LOC86)) goto LA87;
				projectconfig = noschangeFileExt(gprojectfull_155236, ((NimStringDesc*) &TMP1899));
				{
					NIM_BOOL LOC91;
					LOC91 = 0;
					LOC91 = fileexists_118010(projectconfig);
					if (!LOC91) goto LA92;
					rawmessage_165960(((NU16) 234), projectconfig);
				}
				LA92: ;
			}
			LA87: ;
			readconfigfile_187520(projectconfig);
		}
		LA77: ;
	}
	LA72: ;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_nimconfInit)(void) {
	if (condstack_187186) nimGCunrefNoCycle(condstack_187186);
	condstack_187186 = (TY187169*) newSeqRC1((&NTI187169), 0);
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_nimconfDatInit)(void) {
NTI187169.size = sizeof(TY187169*);
NTI187169.kind = 24;
NTI187169.base = (&NTI138);
NTI187169.flags = 2;
NTI187169.marker = TMP720;
}

