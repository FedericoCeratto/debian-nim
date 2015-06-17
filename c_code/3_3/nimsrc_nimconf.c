/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY186169 TY186169;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct Tlexer181185 Tlexer181185;
typedef struct Tbaselexer179024 Tbaselexer179024;
typedef struct TNimObject TNimObject;
typedef struct Tllstream178204 Tllstream178204;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Ttoken181181 Ttoken181181;
typedef struct Tident167021 Tident167021;
typedef struct Tidobj167015 Tidobj167015;
typedef struct Stringtableobj134012 Stringtableobj134012;
typedef struct Tbasechunk27638 Tbasechunk27638;
typedef struct Tfreecell27630 Tfreecell27630;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tbaselexer179024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream178204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo163338 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} Terrorhandler181183;
struct  Tlexer181185  {
  Tbaselexer179024 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler181183 errorhandler;
};
struct  Ttoken181181  {
NU8 toktype;
NI indent;
Tident167021* ident;
NI64 inumber;
NF fnumber;
NU8 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
typedef NimStringDesc* TY176061[3];
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
struct  Tllstream178204  {
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
struct  Tfreecell27630  {
Tfreecell27630* next;
NI zerofield;
};
struct Keyvaluepair134008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct TY186169 {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq134010 {
  TGenericSeq Sup;
  Keyvaluepair134008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP718)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46546*, usrtocell_50046)(void* usr);
static N_INLINE(void, rtladdzct_51604)(Tcell46546* c);
N_NOINLINE(void, addzct_50017)(Tcellseq46562* s, Tcell46546* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, getprefixdir_154365)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, readconfigfile_186520)(NimStringDesc* filename);
N_NIMCALL(Tllstream178204*, llstreamopen_178256)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, inittoken_181369)(Ttoken181181* L);
N_NIMCALL(void, openlexer_181412)(Tlexer181185* lex, NimStringDesc* filename, Tllstream178204* inputstream);
N_NIMCALL(void, conftok_186377)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(void, ppgettok_186009)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(void, rawgettok_184848)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(void, parsedirective_186342)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(NU16, whichkeyword_172386)(Tident167021* id);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NIM_BOOL, evalppif_186147)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(NIM_BOOL, parseexpr_186039)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(NIM_BOOL, parseandexpr_186088)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(NIM_BOOL, parseatom_186048)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(void, lexmessage_181483)(Tlexer181185* L, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NIM_BOOL, isdefined_168167)(Tident167021* symbol);
N_NIMCALL(void, jumptodirective_186220)(Tlexer181185* L, Ttoken181181* tok, NU8 dest);
N_NIMCALL(void, doelse_186230)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(void, doelif_186251)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(void, doend_186191)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(void, msgwriteln_164536)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, Stringtableobj134012* t, NU8 flags);
N_NIMCALL(NimStringDesc*, toktostr_181323)(Ttoken181181* tok);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, putenv_122868)(NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, getenv_122843)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, parseassignment_186439)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(Tident167021*, getident_167463)(NimStringDesc* identifier);
static N_INLINE(Tlineinfo163338, getlineinfo_181218)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(Tlineinfo163338, newlineinfo_163866)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(void, checksymbol_186408)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, processswitch_176040)(NimStringDesc* switch_176042, NimStringDesc* arg, NU8 pass, Tlineinfo163338 info);
N_NIMCALL(void, closelexer_181424)(Tlexer181185* lex);
N_NIMCALL(void, rawmessage_164960)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, getsystemconfigpath_186590)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getuserconfigpath_186578)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, HEX2F_119492)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76443, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
static N_INLINE(NIM_BOOL, fileexists_118210)(NimStringDesc* filename);
STRING_LITERAL(TMP1869, "/usr", 4);
STRING_LITERAL(TMP1870, "/usr/lib/nim", 12);
STRING_LITERAL(TMP1871, "/usr/local", 10);
STRING_LITERAL(TMP1872, "/usr/local/lib/nim", 18);
STRING_LITERAL(TMP1873, "lib", 3);
STRING_LITERAL(TMP1874, "@", 1);
STRING_LITERAL(TMP1875, "\')\'", 3);
STRING_LITERAL(TMP1876, "\':\'", 3);
STRING_LITERAL(TMP1877, "@if", 3);
STRING_LITERAL(TMP1878, "@end", 4);
STRING_LITERAL(TMP1880, "putenv", 6);
STRING_LITERAL(TMP1881, "prependenv", 10);
STRING_LITERAL(TMP1882, "appendenv", 9);
STRING_LITERAL(TMP1883, "-", 1);
STRING_LITERAL(TMP1884, "--", 2);
STRING_LITERAL(TMP1885, "", 0);
STRING_LITERAL(TMP1886, "\']\'", 3);
STRING_LITERAL(TMP1887, "%=", 2);
STRING_LITERAL(TMP1888, "&", 1);
STRING_LITERAL(TMP1889, "config", 6);
STRING_LITERAL(TMP1890, "etc", 3);
STRING_LITERAL(TMP1891, "/etc/", 5);
STRING_LITERAL(TMP1893, "nimcfg", 6);
STRING_LITERAL(TMP1894, "nim.cfg", 7);
STRING_LITERAL(TMP1895, "nimrod.cfg", 10);
TY186169* condstack_186186;
extern TNimType NTI138; /* bool */
TNimType NTI186169; /* seq[bool] */
extern Tgcheap48416 gch_48444;
extern NimStringDesc* libpath_154233;
extern NU32 gglobaloptions_154128;
extern TNimType NTI181185; /* TLexer */
extern Stringtableobj134012* gconfigvars_154231;
extern NI gverbosity_154137;
extern NimStringDesc* gprojectpath_154235;
extern NimStringDesc* gprojectname_154234;
extern NimStringDesc* gprojectfull_154236;
N_NIMCALL(void, TMP718)(void* p, NI op) {
	TY186169* a;
	NI LOC1;
	a = (TY186169*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46546* c;
	c = usrtocell_50046(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51604(c);
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

N_NIMCALL(void, ppgettok_186009)(Tlexer181185* L, Ttoken181181* tok) {
	rawgettok_184848(L, tok);
	{
		while (1) {
			if (!((*tok).toktype == ((NU8) 113))) goto LA2;
			rawgettok_184848(L, tok);
		} LA2: ;
	}
}

N_NIMCALL(NIM_BOOL, parseatom_186048)(Tlexer181185* L, Ttoken181181* tok) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*tok).toktype == ((NU8) 93))) goto LA3;
		ppgettok_186009(L, tok);
		result = parseexpr_186039(L, tok);
		{
			if (!((*tok).toktype == ((NU8) 94))) goto LA7;
			ppgettok_186009(L, tok);
		}
		goto LA5;
		LA7: ;
		{
			lexmessage_181483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1875));
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC13;
		if (!((*(*tok).ident).Sup.id == ((NI) 45))) goto LA11;
		ppgettok_186009(L, tok);
		LOC13 = 0;
		LOC13 = parseatom_186048(L, tok);
		result = !(LOC13);
	}
	goto LA1;
	LA11: ;
	{
		result = isdefined_168167((*tok).ident);
		ppgettok_186009(L, tok);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, parseandexpr_186088)(Tlexer181185* L, Ttoken181181* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseatom_186048(L, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).ident).Sup.id == ((NI) 2))) goto LA2;
			ppgettok_186009(L, tok);
			b = parseatom_186048(L, tok);
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

N_NIMCALL(NIM_BOOL, parseexpr_186039)(Tlexer181185* L, Ttoken181181* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseandexpr_186088(L, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).ident).Sup.id == ((NI) 49))) goto LA2;
			ppgettok_186009(L, tok);
			b = parseandexpr_186088(L, tok);
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

N_NIMCALL(NIM_BOOL, evalppif_186147)(Tlexer181185* L, Ttoken181181* tok) {
	NIM_BOOL result;
	result = 0;
	ppgettok_186009(L, tok);
	result = parseexpr_186039(L, tok);
	{
		if (!((*tok).toktype == ((NU8) 107))) goto LA3;
		ppgettok_186009(L, tok);
	}
	goto LA1;
	LA3: ;
	{
		lexmessage_181483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1876));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, doelse_186230)(Tlexer181185* L, Ttoken181181* tok) {
	{
		if (!((condstack_186186 ? (condstack_186186->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_181483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1877));
	}
	LA3: ;
	ppgettok_186009(L, tok);
	{
		if (!((*tok).toktype == ((NU8) 107))) goto LA7;
		ppgettok_186009(L, tok);
	}
	LA7: ;
	{
		if (!condstack_186186->data[(condstack_186186 ? (condstack_186186->Sup.len-1) : -1)]) goto LA11;
		jumptodirective_186220(L, tok, ((NU8) 0));
	}
	LA11: ;
}

N_NIMCALL(void, doelif_186251)(Tlexer181185* L, Ttoken181181* tok) {
	NIM_BOOL res;
	{
		if (!((condstack_186186 ? (condstack_186186->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_181483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1877));
	}
	LA3: ;
	res = evalppif_186147(L, tok);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = condstack_186186->data[(condstack_186186 ? (condstack_186186->Sup.len-1) : -1)];
		if (LOC7) goto LA8;
		LOC7 = !(res);
		LA8: ;
		if (!LOC7) goto LA9;
		jumptodirective_186220(L, tok, ((NU8) 1));
	}
	goto LA5;
	LA9: ;
	{
		condstack_186186->data[(condstack_186186 ? (condstack_186186->Sup.len-1) : -1)] = NIM_TRUE;
	}
	LA5: ;
}

N_NIMCALL(void, doend_186191)(Tlexer181185* L, Ttoken181181* tok) {
	{
		if (!((condstack_186186 ? (condstack_186186->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_181483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1877));
	}
	LA3: ;
	ppgettok_186009(L, tok);
	condstack_186186 = (TY186169*) setLengthSeq(&(condstack_186186)->Sup, sizeof(NIM_BOOL), ((NI) ((condstack_186186 ? (condstack_186186->Sup.len-1) : -1))));
}

N_NIMCALL(void, jumptodirective_186220)(Tlexer181185* L, Ttoken181181* tok, NU8 dest) {
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
				LOC5 = eqStrings((*(*tok).ident).s, ((NimStringDesc*) &TMP1874));
				LA6: ;
				if (!LOC5) goto LA7;
				ppgettok_186009(L, tok);
				LOC9 = 0;
				LOC9 = whichkeyword_172386((*tok).ident);
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
						doelse_186230(L, tok);
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
						doelif_186251(L, tok);
						goto LA1;
					}
					LA23: ;
				}
				break;
				case ((NU16) 22):
				{
					{
						if (!(nestedifs == ((NI) 0))) goto LA28;
						doend_186191(L, tok);
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
				ppgettok_186009(L, tok);
			}
			goto LA3;
			LA7: ;
			{
				if (!((*tok).toktype == ((NU8) 1))) goto LA36;
				lexmessage_181483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1878));
			}
			goto LA3;
			LA36: ;
			{
				ppgettok_186009(L, tok);
			}
			LA3: ;
		}
	} LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, parsedirective_186342)(Tlexer181185* L, Ttoken181181* tok) {
	NU16 LOC1;
	ppgettok_186009(L, tok);
	LOC1 = 0;
	LOC1 = whichkeyword_172386((*tok).ident);
	switch (LOC1) {
	case ((NU16) 31):
	{
		NIM_BOOL res;
		condstack_186186 = (TY186169*) setLengthSeq(&(condstack_186186)->Sup, sizeof(NIM_BOOL), ((NI) ((NI)((condstack_186186 ? condstack_186186->Sup.len : 0) + ((NI) 1)))));
		res = evalppif_186147(L, tok);
		condstack_186186->data[(condstack_186186 ? (condstack_186186->Sup.len-1) : -1)] = res;
		{
			if (!!(res)) goto LA5;
			jumptodirective_186220(L, tok, ((NU8) 1));
		}
		LA5: ;
	}
	break;
	case ((NU16) 20):
	{
		doelif_186251(L, tok);
	}
	break;
	case ((NU16) 21):
	{
		doelse_186230(L, tok);
	}
	break;
	case ((NU16) 22):
	{
		doend_186191(L, tok);
	}
	break;
	case ((NU16) 180):
	{
		NimStringDesc* LOC11;
		NimStringDesc* LOC12;
		ppgettok_186009(L, tok);
		LOC11 = 0;
		LOC11 = toktostr_181323((&(*tok)));
		LOC12 = 0;
		LOC12 = nstFormat(LOC11, gconfigvars_154231, 5);
		msgwriteln_164536(LOC12);
		ppgettok_186009(L, tok);
	}
	break;
	default:
	{
		NimStringDesc* LOC14;
		LOC14 = 0;
		LOC14 = nsuNormalize((*(*tok).ident).s);
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1880))) goto LA15;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1881))) goto LA16;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1882))) goto LA17;
		goto LA18;
		LA15: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC21;
			ppgettok_186009(L, tok);
			key = toktostr_181323((&(*tok)));
			ppgettok_186009(L, tok);
			LOC21 = 0;
			LOC21 = toktostr_181323((&(*tok)));
			putenv_122868(key, LOC21);
			ppgettok_186009(L, tok);
		}
		goto LA19;
		LA16: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC23;
			NimStringDesc* LOC24;
			NimStringDesc* LOC25;
			ppgettok_186009(L, tok);
			key = toktostr_181323((&(*tok)));
			ppgettok_186009(L, tok);
			LOC23 = 0;
			LOC24 = 0;
			LOC24 = toktostr_181323((&(*tok)));
			LOC25 = 0;
			LOC25 = getenv_122843(key);
			LOC23 = rawNewString(LOC24->Sup.len + LOC25->Sup.len + 0);
appendString(LOC23, LOC24);
appendString(LOC23, LOC25);
			putenv_122868(key, LOC23);
			ppgettok_186009(L, tok);
		}
		goto LA19;
		LA17: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			NimStringDesc* LOC29;
			ppgettok_186009(L, tok);
			key = toktostr_181323((&(*tok)));
			ppgettok_186009(L, tok);
			LOC27 = 0;
			LOC28 = 0;
			LOC28 = getenv_122843(key);
			LOC29 = 0;
			LOC29 = toktostr_181323((&(*tok)));
			LOC27 = rawNewString(LOC28->Sup.len + LOC29->Sup.len + 0);
appendString(LOC27, LOC28);
appendString(LOC27, LOC29);
			putenv_122868(key, LOC27);
			ppgettok_186009(L, tok);
		}
		goto LA19;
		LA18: ;
		{
			NimStringDesc* LOC31;
			LOC31 = 0;
			LOC31 = toktostr_181323((&(*tok)));
			lexmessage_181483((&(*L)), ((NU16) 30), LOC31);
		}
		LA19: ;
	}
	break;
	}
}

N_NIMCALL(void, conftok_186377)(Tlexer181185* L, Ttoken181181* tok) {
	ppgettok_186009(L, tok);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = !(((*tok).ident == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = eqStrings((*(*tok).ident).s, ((NimStringDesc*) &TMP1874));
			LA4: ;
			if (!LOC3) goto LA2;
			parsedirective_186342(L, tok);
		} LA2: ;
	}
}

static N_INLINE(Tlineinfo163338, getlineinfo_181218)(Tlexer181185* L, Ttoken181181* tok) {
	Tlineinfo163338 result;
	memset((void*)(&result), 0, sizeof(result));
	result = newlineinfo_163866((*L).fileidx, (*tok).line, (*tok).col);
	return result;
}

N_NIMCALL(void, checksymbol_186408)(Tlexer181185* L, Ttoken181181* tok) {
	{
		NimStringDesc* LOC5;
		if (!!(((*tok).toktype >= ((NU8) 2) && (*tok).toktype <= ((NU8) 72) || (*tok).toktype >= ((NU8) 87) && (*tok).toktype <= ((NU8) 89)))) goto LA3;
		LOC5 = 0;
		LOC5 = toktostr_181323(tok);
		lexmessage_181483(L, ((NU16) 19), LOC5);
	}
	LA3: ;
}

N_NIMCALL(void, parseassignment_186439)(Tlexer181185* L, Ttoken181181* tok) {
	Tlineinfo163338 info;
	NimStringDesc* s;
	NimStringDesc* val;
	NIM_BOOL percent;
	Tident167021* LOC22;
	{
		NIM_BOOL LOC3;
		Tident167021* LOC4;
		Tident167021* LOC6;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = getident_167463(((NimStringDesc*) &TMP1883));
		LOC3 = ((*(*tok).ident).Sup.id == (*LOC4).Sup.id);
		if (LOC3) goto LA5;
		LOC6 = 0;
		LOC6 = getident_167463(((NimStringDesc*) &TMP1884));
		LOC3 = ((*(*tok).ident).Sup.id == (*LOC6).Sup.id);
		LA5: ;
		if (!LOC3) goto LA7;
		conftok_186377(L, tok);
	}
	LA7: ;
	info = getlineinfo_181218((&(*L)), (&(*tok)));
	checksymbol_186408((&(*L)), (&(*tok)));
	s = toktostr_181323((&(*tok)));
	conftok_186377(L, tok);
	val = copyString(((NimStringDesc*) &TMP1885));
	{
		while (1) {
			NimStringDesc* LOC11;
			if (!((*tok).toktype == ((NU8) 110))) goto LA10;
			s = addChar(s, 46);
			conftok_186377(L, tok);
			checksymbol_186408((&(*L)), (&(*tok)));
			LOC11 = 0;
			LOC11 = toktostr_181323((&(*tok)));
			s = resizeString(s, LOC11->Sup.len + 0);
appendString(s, LOC11);
			conftok_186377(L, tok);
		} LA10: ;
	}
	{
		NimStringDesc* LOC16;
		if (!((*tok).toktype == ((NU8) 95))) goto LA14;
		conftok_186377(L, tok);
		checksymbol_186408((&(*L)), (&(*tok)));
		LOC16 = 0;
		LOC16 = toktostr_181323((&(*tok)));
		val = resizeString(val, LOC16->Sup.len + 0);
appendString(val, LOC16);
		conftok_186377(L, tok);
		{
			if (!((*tok).toktype == ((NU8) 96))) goto LA19;
			conftok_186377(L, tok);
		}
		goto LA17;
		LA19: ;
		{
			lexmessage_181483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1886));
		}
		LA17: ;
		val = addChar(val, 93);
	}
	LA14: ;
	LOC22 = 0;
	LOC22 = getident_167463(((NimStringDesc*) &TMP1887));
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
		conftok_186377(L, tok);
		checksymbol_186408((&(*L)), (&(*tok)));
		LOC33 = 0;
		LOC33 = toktostr_181323((&(*tok)));
		val = resizeString(val, LOC33->Sup.len + 0);
appendString(val, LOC33);
		conftok_186377(L, tok);
		{
			while (1) {
				NIM_BOOL LOC36;
				Tident167021* LOC38;
				NimStringDesc* LOC39;
				LOC36 = 0;
				LOC36 = !(((*tok).ident == NIM_NIL));
				if (!(LOC36)) goto LA37;
				LOC38 = 0;
				LOC38 = getident_167463(((NimStringDesc*) &TMP1888));
				LOC36 = ((*(*tok).ident).Sup.id == (*LOC38).Sup.id);
				LA37: ;
				if (!LOC36) goto LA35;
				conftok_186377(L, tok);
				checksymbol_186408((&(*L)), (&(*tok)));
				LOC39 = 0;
				LOC39 = toktostr_181323((&(*tok)));
				val = resizeString(val, LOC39->Sup.len + 0);
appendString(val, LOC39);
				conftok_186377(L, tok);
			} LA35: ;
		}
	}
	LA27: ;
	{
		NimStringDesc* LOC44;
		if (!percent) goto LA42;
		LOC44 = 0;
		LOC44 = nstFormat(val, gconfigvars_154231, 3);
		processswitch_176040(s, LOC44, ((NU8) 2), info);
	}
	goto LA40;
	LA42: ;
	{
		processswitch_176040(s, val, ((NU8) 2), info);
	}
	LA40: ;
}

N_NIMCALL(void, readconfigfile_186520)(NimStringDesc* filename) {
	Tlexer181185 L;
	Ttoken181181 tok;
	Tllstream178204* stream;
	memset((void*)(&L), 0, sizeof(L));
	L.Sup.Sup.m_type = (&NTI181185);
	memset((void*)(&tok), 0, sizeof(tok));
	stream = 0;
	stream = llstreamopen_178256(filename, ((NU8) 0));
	{
		if (!!((stream == NIM_NIL))) goto LA3;
		inittoken_181369((&tok));
		openlexer_181412((&L), filename, stream);
		tok.toktype = ((NU8) 1);
		conftok_186377((&L), (&tok));
		{
			while (1) {
				if (!!((tok.toktype == ((NU8) 1)))) goto LA6;
				parseassignment_186439((&L), (&tok));
			} LA6: ;
		}
		{
			if (!(((NI) 0) < (condstack_186186 ? condstack_186186->Sup.len : 0))) goto LA9;
			lexmessage_181483((&L), ((NU16) 23), ((NimStringDesc*) &TMP1878));
		}
		LA9: ;
		closelexer_181424((&L));
		{
			if (!(((NI) 1) <= gverbosity_154137)) goto LA13;
			rawmessage_164960(((NU16) 272), filename);
		}
		LA13: ;
	}
	LA3: ;
}

N_NIMCALL(NimStringDesc*, getsystemconfigpath_186590)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* p;
	TY176061 LOC1;
	result = 0;
	p = getprefixdir_154365();
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = copyString(p);
	LOC1[1] = copyString(((NimStringDesc*) &TMP1889));
	LOC1[2] = copyString(filename);
	result = nosjoinPathOpenArray(LOC1, 3);
	{
		NIM_BOOL LOC4;
		TY176061 LOC7;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		memset((void*)LOC7, 0, sizeof(LOC7));
		LOC7[0] = copyString(p);
		LOC7[1] = copyString(((NimStringDesc*) &TMP1890));
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
appendString(LOC13, ((NimStringDesc*) &TMP1891));
appendString(LOC13, filename);
		result = LOC13;
	}
	LA11: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getuserconfigpath_186578)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetConfigDir();
	result = nosjoinPath(LOC1, filename);
	return result;
}

static N_INLINE(NIM_BOOL, fileexists_118210)(NimStringDesc* filename) {
	NIM_BOOL result;
	result = 0;
	result = nosexistsFile(filename);
	return result;
}

N_NIMCALL(void, loadconfigs_186609)(NimStringDesc* cfg) {
	NimStringDesc* pd;
	{
		NimStringDesc* prefix;
		if (!((libpath_154233) && (libpath_154233)->Sup.len == 0)) goto LA3;
		prefix = getprefixdir_154365();
		{
			NimStringDesc* LOC9;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1869))) goto LA7;
			LOC9 = 0;
			LOC9 = libpath_154233; libpath_154233 = copyStringRC1(((NimStringDesc*) &TMP1870));
			if (LOC9) nimGCunrefNoCycle(LOC9);
		}
		goto LA5;
		LA7: ;
		{
			NimStringDesc* LOC13;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1871))) goto LA11;
			LOC13 = 0;
			LOC13 = libpath_154233; libpath_154233 = copyStringRC1(((NimStringDesc*) &TMP1872));
			if (LOC13) nimGCunrefNoCycle(LOC13);
		}
		goto LA5;
		LA11: ;
		{
			asgnRefNoCycle((void**) (&libpath_154233), nosjoinPath(prefix, ((NimStringDesc*) &TMP1873)));
		}
		LA5: ;
	}
	LA3: ;
	{
		NimStringDesc* LOC19;
		if (!!(((gglobaloptions_154128 &(1<<((((NU8) 16))&31)))!=0))) goto LA17;
		LOC19 = 0;
		LOC19 = getsystemconfigpath_186590(cfg);
		readconfigfile_186520(LOC19);
	}
	LA17: ;
	{
		NimStringDesc* LOC24;
		if (!!(((gglobaloptions_154128 &(1<<((((NU8) 18))&31)))!=0))) goto LA22;
		LOC24 = 0;
		LOC24 = getuserconfigpath_186578(cfg);
		readconfigfile_186520(LOC24);
	}
	LA22: ;
	{
		if (!(((NI) 0) < (gprojectpath_154235 ? gprojectpath_154235->Sup.len : 0))) goto LA27;
		pd = copyString(gprojectpath_154235);
	}
	goto LA25;
	LA27: ;
	{
		pd = nosgetCurrentDir();
	}
	LA25: ;
	{
		if (!!(((gglobaloptions_154128 &(1<<((((NU8) 19))&31)))!=0))) goto LA32;
		{
			NimStringDesc* dir_186834;
			dir_186834 = 0;
			{
				NimStringDesc* current_186851;
				if (!NIM_FALSE) goto LA37;
				current_186851 = copyString(pd);
				{
					NimStringDesc* LOC43;
					if (!NIM_FALSE) goto LA41;
					dir_186834 = pd;
					LOC43 = 0;
					LOC43 = HEX2F_119492(dir_186834, cfg);
					readconfigfile_186520(LOC43);
				}
				LA41: ;
				{
					while (1) {
						NimStringDesc* LOC51;
						{
							NIM_BOOL LOC48;
							LOC48 = 0;
							LOC48 = nosisRootDir(current_186851);
							if (!LOC48) goto LA49;
							goto LA44;
						}
						LA49: ;
						current_186851 = nosparentDir(current_186851);
						dir_186834 = current_186851;
						LOC51 = 0;
						LOC51 = HEX2F_119492(dir_186834, cfg);
						readconfigfile_186520(LOC51);
					}
				} LA44: ;
			}
			goto LA35;
			LA37: ;
			{
				{
					NI i_186853;
					NI HEX3Atmp_186855;
					NI res_186857;
					i_186853 = 0;
					HEX3Atmp_186855 = 0;
					HEX3Atmp_186855 = (NI)((pd ? pd->Sup.len : 0) - ((NI) 2));
					res_186857 = ((NI) 0);
					{
						while (1) {
							if (!(res_186857 <= HEX3Atmp_186855)) goto LA55;
							i_186853 = res_186857;
							{
								NIM_BOOL LOC58;
								NIM_BOOL LOC60;
								NimStringDesc* LOC64;
								LOC58 = 0;
								LOC58 = (((NU8)(pd->data[i_186853])) == ((NU8)(47)) || ((NU8)(pd->data[i_186853])) == ((NU8)(47)));
								if (!(LOC58)) goto LA59;
								LOC60 = 0;
								LOC60 = (i_186853 == ((NI) 0));
								if (LOC60) goto LA61;
								LOC60 = !((((NU8)(pd->data[(NI)(i_186853 - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(pd->data[(NI)(i_186853 - ((NI) 1))])) == ((NU8)(47))));
								LA61: ;
								LOC58 = LOC60;
								LA59: ;
								if (!LOC58) goto LA62;
								dir_186834 = copyStrLast(pd, ((NI) 0), i_186853);
								LOC64 = 0;
								LOC64 = HEX2F_119492(dir_186834, cfg);
								readconfigfile_186520(LOC64);
							}
							LA62: ;
							res_186857 += ((NI) 1);
						} LA55: ;
					}
				}
				{
					NimStringDesc* LOC69;
					if (!NIM_FALSE) goto LA67;
					dir_186834 = pd;
					LOC69 = 0;
					LOC69 = HEX2F_119492(dir_186834, cfg);
					readconfigfile_186520(LOC69);
				}
				LA67: ;
			}
			LA35: ;
		}
	}
	LA32: ;
	{
		NimStringDesc* LOC74;
		if (!!(((gglobaloptions_154128 &(1<<((((NU8) 17))&31)))!=0))) goto LA72;
		LOC74 = 0;
		LOC74 = HEX2F_119492(pd, cfg);
		readconfigfile_186520(LOC74);
		{
			NimStringDesc* projectconfig;
			if (!!(((gprojectname_154234 ? gprojectname_154234->Sup.len : 0) == ((NI) 0)))) goto LA77;
			projectconfig = noschangeFileExt(gprojectfull_154236, ((NimStringDesc*) &TMP1893));
			{
				NIM_BOOL LOC81;
				LOC81 = 0;
				LOC81 = fileexists_118210(projectconfig);
				if (!!(LOC81)) goto LA82;
				projectconfig = noschangeFileExt(gprojectfull_154236, ((NimStringDesc*) &TMP1894));
			}
			LA82: ;
			{
				NIM_BOOL LOC86;
				LOC86 = 0;
				LOC86 = fileexists_118210(projectconfig);
				if (!!(LOC86)) goto LA87;
				projectconfig = noschangeFileExt(gprojectfull_154236, ((NimStringDesc*) &TMP1895));
				{
					NIM_BOOL LOC91;
					LOC91 = 0;
					LOC91 = fileexists_118210(projectconfig);
					if (!LOC91) goto LA92;
					rawmessage_164960(((NU16) 234), projectconfig);
				}
				LA92: ;
			}
			LA87: ;
			readconfigfile_186520(projectconfig);
		}
		LA77: ;
	}
	LA72: ;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_nimconfInit)(void) {
	if (condstack_186186) nimGCunrefNoCycle(condstack_186186);
	condstack_186186 = (TY186169*) newSeqRC1((&NTI186169), 0);
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_nimconfDatInit)(void) {
NTI186169.size = sizeof(TY186169*);
NTI186169.kind = 24;
NTI186169.base = (&NTI138);
NTI186169.flags = 2;
NTI186169.marker = TMP718;
}

