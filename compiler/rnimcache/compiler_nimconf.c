/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/ubuntu/nim-ci/Nim/lib -o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_nimconf.o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_nimconf.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct TY291112 TY291112;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29480 Memregion29480;
typedef struct Smallchunk29437 Smallchunk29437;
typedef struct Llchunk29474 Llchunk29474;
typedef struct Bigchunk29439 Bigchunk29439;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29478 Avlnode29478;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tlexer286173 Tlexer286173;
typedef struct Tbaselexer284015 Tbaselexer284015;
typedef struct TNimObject TNimObject;
typedef struct Tllstream283204 Tllstream283204;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct Ttoken286169 Ttoken286169;
typedef struct Tident200012 Tident200012;
typedef struct Tidobj200006 Tidobj200006;
typedef struct Stringtableobj152608 Stringtableobj152608;
typedef struct Basechunk29435 Basechunk29435;
typedef struct Freecell29427 Freecell29427;
typedef struct Keyvaluepairseq152606 Keyvaluepairseq152606;
typedef struct Keyvaluepair152604 Keyvaluepair152604;
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
struct  Cell47305  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47321  {
NI len;
NI cap;
Cell47305** d;
};
typedef Smallchunk29437* TY29495[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29480  {
NI minlargeobj;
NI maxlargeobj;
TY29495 freesmallchunks;
Llchunk29474* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29439* freechunkslist;
Intset29414 chunkstarts;
Avlnode29478* root;
Avlnode29478* deleted;
Avlnode29478* last;
Avlnode29478* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat49814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47317  {
NI counter;
NI max;
Pagedesc47313* head;
Pagedesc47313** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47321 zct;
Cellseq47321 decstack;
Cellseq47321 tempstack;
NI recgclock;
Memregion29480 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tbaselexer284015  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream283204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo192336 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} Terrorhandler286171;
struct  Tlexer286173  {
  Tbaselexer284015 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler286171 errorhandler;
};
struct  Ttoken286169  {
NU8 toktype;
NI indent;
Tident200012* ident;
NI64 inumber;
NF fnumber;
NU8 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tidobj200006  {
  TNimObject Sup;
NI id;
};
struct  Tident200012  {
  Tidobj200006 Sup;
NimStringDesc* s;
Tident200012* next;
NI h;
};
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NimStringDesc* TY194140[3];
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29435  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29437  {
  Basechunk29435 Sup;
Smallchunk29437* next;
Smallchunk29437* prev;
Freecell29427* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29474  {
NI size;
NI acc;
Llchunk29474* next;
};
struct  Bigchunk29439  {
  Basechunk29435 Sup;
Bigchunk29439* next;
Bigchunk29439* prev;
NI align;
NF data;
};
typedef NI TY29419[8];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29419 bits;
};
typedef Avlnode29478* TY29485[2];
struct  Avlnode29478  {
TY29485 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29419 bits;
};
struct  Tllstream283204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Stringtableobj152608  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq152606* data;
NU8 mode;
};
struct  Freecell29427  {
Freecell29427* next;
NI zerofield;
};
struct Keyvaluepair152604 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct TY291112 {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq152606 {
  TGenericSeq Sup;
  Keyvaluepair152604 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP824)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47305*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_52601)(Cell47305* c);
N_NOINLINE(void, addzct_51417)(Cellseq47321* s, Cell47305* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, setdefaultlibpath_170305)(void);
N_NIMCALL(void, readconfigfile_291382)(NimStringDesc* filename);
N_NIMCALL(Tllstream283204*, llstreamopen_283241)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, inittoken_286312)(Ttoken286169* L);
N_NIMCALL(void, openlexer_286335)(Tlexer286173* lex, NimStringDesc* filename, Tllstream283204* inputstream);
N_NIMCALL(void, conftok_291275)(Tlexer286173* L, Ttoken286169* tok);
N_NIMCALL(void, ppgettok_291003)(Tlexer286173* L, Ttoken286169* tok);
N_NIMCALL(void, rawgettok_289824)(Tlexer286173* L, Ttoken286169* tok);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalmem_7488)(void* a, void* b, NI size);
N_NIMCALL(void, parsedirective_291246)(Tlexer286173* L, Ttoken286169* tok);
N_NIMCALL(NU16, whichkeyword_276365)(Tident200012* id);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NIM_BOOL, evalppif_291096)(Tlexer286173* L, Ttoken286169* tok);
N_NIMCALL(NIM_BOOL, parseexpr_291021)(Tlexer286173* L, Ttoken286169* tok);
N_NIMCALL(NIM_BOOL, parseandexpr_291061)(Tlexer286173* L, Ttoken286169* tok);
N_NIMCALL(NIM_BOOL, parseatom_291027)(Tlexer286173* L, Ttoken286169* tok);
N_NIMCALL(void, lexmessage_286372)(Tlexer286173* L, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NIM_BOOL, isdefined_201141)(Tident200012* symbol);
N_NIMCALL(void, jumptodirective_291151)(Tlexer286173* L, Ttoken286169* tok, NU8 dest);
N_NIMCALL(void, doelse_291158)(Tlexer286173* L, Ttoken286169* tok);
N_NIMCALL(void, doelif_291173)(Tlexer286173* L, Ttoken286169* tok);
N_NIMCALL(void, doend_291131)(Tlexer286173* L, Ttoken286169* tok);
N_NIMCALL(void, msgwriteln_193449)(NimStringDesc* s, NU8 flags);
N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, Stringtableobj152608* t, NU8 flags);
N_NIMCALL(NimStringDesc*, toktostr_286287)(Ttoken286169* tok);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, putenv_135638)(NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copymem_7478)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, getenv_135625)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, parseassignment_291319)(Tlexer286173* L, Ttoken286169* tok);
N_NIMCALL(Tident200012*, getident_200441)(NimStringDesc* identifier);
static N_INLINE(Tlineinfo192336, getlineinfo_286200)(Tlexer286173* L, Ttoken286169* tok);
N_NIMCALL(Tlineinfo192336, newlineinfo_193014)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(void, checksymbol_291294)(Tlexer286173* L, Ttoken286169* tok);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, processswitch_281016)(NimStringDesc* switch_281018, NimStringDesc* arg, NU8 pass, Tlineinfo192336 info);
N_NIMCALL(void, closelexer_286341)(Tlexer286173* lex);
N_NIMCALL(void, rawmessage_195612)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, getsystemconfigpath_291434)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getprefixdir_170302)(void);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getuserconfigpath_291428)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, HEX2F_128265)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_79210, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
static N_INLINE(NIM_BOOL, fileexists_131604)(NimStringDesc* filename);
STRING_LITERAL(TMP2075, "@", 1);
STRING_LITERAL(TMP2076, "\')\'", 3);
STRING_LITERAL(TMP2077, "\':\'", 3);
STRING_LITERAL(TMP2078, "@if", 3);
STRING_LITERAL(TMP2079, "@end", 4);
STRING_LITERAL(TMP2081, "putenv", 6);
STRING_LITERAL(TMP2082, "prependenv", 10);
STRING_LITERAL(TMP2083, "appendenv", 9);
STRING_LITERAL(TMP2084, "-", 1);
STRING_LITERAL(TMP2085, "--", 2);
STRING_LITERAL(TMP2086, "", 0);
STRING_LITERAL(TMP2087, "\']\'", 3);
STRING_LITERAL(TMP2088, "%=", 2);
STRING_LITERAL(TMP2089, "&", 1);
STRING_LITERAL(TMP2090, "config", 6);
STRING_LITERAL(TMP2091, "etc", 3);
STRING_LITERAL(TMP2092, "/etc/", 5);
STRING_LITERAL(TMP2094, "nimcfg", 6);
STRING_LITERAL(TMP2095, "nim.cfg", 7);
STRING_LITERAL(TMP2096, "nimrod.cfg", 10);
TY291112* condstack_291129;
extern TNimType NTI130; /* bool */
TNimType NTI291112; /* seq[bool] */
extern Gcheap49818 gch_49855;
extern NU64 gglobaloptions_170127;
extern TNimType NTI286173; /* TLexer */
extern Stringtableobj152608* gconfigvars_170201;
extern NimStringDesc* gprojectpath_170207;
extern NimStringDesc* gprojectname_170206;
extern NimStringDesc* gprojectfull_170208;
N_NIMCALL(void, TMP824)(void* p, NI op) {
	TY291112* a;
	NI LOC1;
	a = (TY291112*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

static N_INLINE(Cell47305*, usrtocell_51440)(void* usr) {
	Cell47305* result;
	result = 0;
	result = ((Cell47305*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47305))))));
	return result;
}

static N_INLINE(void, rtladdzct_52601)(Cell47305* c) {
	addzct_51417((&gch_49855.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47305* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601(c);
	}
	LA3: ;
}

N_NIMCALL(void, ppgettok_291003)(Tlexer286173* L, Ttoken286169* tok) {
	rawgettok_289824(L, tok);
	{
		while (1) {
			if (!((*tok).toktype == ((NU8) 113))) goto LA2;
			rawgettok_289824(L, tok);
		} LA2: ;
	}
}

static N_INLINE(NIM_BOOL, equalmem_7488)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = memcmp(a, b, ((size_t) (size)));
	result = (LOC1 == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
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
	LOC11 = equalmem_7488(((void*) ((*a).data)), ((void*) ((*b).data)), ((NI) ((*a).Sup.len)));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, parseatom_291027)(Tlexer286173* L, Ttoken286169* tok) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*tok).toktype == ((NU8) 93))) goto LA3;
		ppgettok_291003(L, tok);
		result = parseexpr_291021(L, tok);
		{
			if (!((*tok).toktype == ((NU8) 94))) goto LA7;
			ppgettok_291003(L, tok);
		}
		goto LA5;
		LA7: ;
		{
			lexmessage_286372((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2076));
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC13;
		if (!((*(*tok).ident).Sup.id == ((NI) 45))) goto LA11;
		ppgettok_291003(L, tok);
		LOC13 = 0;
		LOC13 = parseatom_291027(L, tok);
		result = !(LOC13);
	}
	goto LA1;
	LA11: ;
	{
		result = isdefined_201141((*tok).ident);
		ppgettok_291003(L, tok);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, parseandexpr_291061)(Tlexer286173* L, Ttoken286169* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseatom_291027(L, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).ident).Sup.id == ((NI) 2))) goto LA2;
			ppgettok_291003(L, tok);
			b = parseatom_291027(L, tok);
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

N_NIMCALL(NIM_BOOL, parseexpr_291021)(Tlexer286173* L, Ttoken286169* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseandexpr_291061(L, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).ident).Sup.id == ((NI) 49))) goto LA2;
			ppgettok_291003(L, tok);
			b = parseandexpr_291061(L, tok);
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

N_NIMCALL(NIM_BOOL, evalppif_291096)(Tlexer286173* L, Ttoken286169* tok) {
	NIM_BOOL result;
	result = 0;
	ppgettok_291003(L, tok);
	result = parseexpr_291021(L, tok);
	{
		if (!((*tok).toktype == ((NU8) 107))) goto LA3;
		ppgettok_291003(L, tok);
	}
	goto LA1;
	LA3: ;
	{
		lexmessage_286372((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2077));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, doelse_291158)(Tlexer286173* L, Ttoken286169* tok) {
	{
		if (!((condstack_291129 ? (condstack_291129->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_286372((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2078));
	}
	LA3: ;
	ppgettok_291003(L, tok);
	{
		if (!((*tok).toktype == ((NU8) 107))) goto LA7;
		ppgettok_291003(L, tok);
	}
	LA7: ;
	{
		if (!condstack_291129->data[(condstack_291129 ? (condstack_291129->Sup.len-1) : -1)]) goto LA11;
		jumptodirective_291151(L, tok, ((NU8) 0));
	}
	LA11: ;
}

N_NIMCALL(void, doelif_291173)(Tlexer286173* L, Ttoken286169* tok) {
	NIM_BOOL res;
	{
		if (!((condstack_291129 ? (condstack_291129->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_286372((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2078));
	}
	LA3: ;
	res = evalppif_291096(L, tok);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = condstack_291129->data[(condstack_291129 ? (condstack_291129->Sup.len-1) : -1)];
		if (LOC7) goto LA8;
		LOC7 = !(res);
		LA8: ;
		if (!LOC7) goto LA9;
		jumptodirective_291151(L, tok, ((NU8) 1));
	}
	goto LA5;
	LA9: ;
	{
		condstack_291129->data[(condstack_291129 ? (condstack_291129->Sup.len-1) : -1)] = NIM_TRUE;
	}
	LA5: ;
}

N_NIMCALL(void, doend_291131)(Tlexer286173* L, Ttoken286169* tok) {
	{
		if (!((condstack_291129 ? (condstack_291129->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_286372((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2078));
	}
	LA3: ;
	ppgettok_291003(L, tok);
	condstack_291129 = (TY291112*) setLengthSeq(&(condstack_291129)->Sup, sizeof(NIM_BOOL), ((NI) ((condstack_291129 ? (condstack_291129->Sup.len-1) : -1))));
}

N_NIMCALL(void, jumptodirective_291151)(Tlexer286173* L, Ttoken286169* tok, NU8 dest) {
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
				LOC5 = eqStrings((*(*tok).ident).s, ((NimStringDesc*) &TMP2075));
				LA6: ;
				if (!LOC5) goto LA7;
				ppgettok_291003(L, tok);
				LOC9 = 0;
				LOC9 = whichkeyword_276365((*tok).ident);
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
						doelse_291158(L, tok);
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
						doelif_291173(L, tok);
						goto LA1;
					}
					LA23: ;
				}
				break;
				case ((NU16) 22):
				{
					{
						if (!(nestedifs == ((NI) 0))) goto LA28;
						doend_291131(L, tok);
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
				ppgettok_291003(L, tok);
			}
			goto LA3;
			LA7: ;
			{
				if (!((*tok).toktype == ((NU8) 1))) goto LA36;
				lexmessage_286372((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2079));
			}
			goto LA3;
			LA36: ;
			{
				ppgettok_291003(L, tok);
			}
			LA3: ;
		}
	} LA1: ;
}

static N_INLINE(void, copymem_7478)(void* dest, void* source, NI size) {
	void* LOC1;
	LOC1 = 0;
	LOC1 = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copymem_7478(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, parsedirective_291246)(Tlexer286173* L, Ttoken286169* tok) {
	NU16 LOC1;
	ppgettok_291003(L, tok);
	LOC1 = 0;
	LOC1 = whichkeyword_276365((*tok).ident);
	switch (LOC1) {
	case ((NU16) 31):
	{
		NIM_BOOL res;
		condstack_291129 = (TY291112*) setLengthSeq(&(condstack_291129)->Sup, sizeof(NIM_BOOL), ((NI) ((NI)((condstack_291129 ? condstack_291129->Sup.len : 0) + ((NI) 1)))));
		res = evalppif_291096(L, tok);
		condstack_291129->data[(condstack_291129 ? (condstack_291129->Sup.len-1) : -1)] = res;
		{
			if (!!(res)) goto LA5;
			jumptodirective_291151(L, tok, ((NU8) 1));
		}
		LA5: ;
	}
	break;
	case ((NU16) 20):
	{
		doelif_291173(L, tok);
	}
	break;
	case ((NU16) 21):
	{
		doelse_291158(L, tok);
	}
	break;
	case ((NU16) 22):
	{
		doend_291131(L, tok);
	}
	break;
	case ((NU16) 185):
	{
		NimStringDesc* LOC11;
		NimStringDesc* LOC12;
		ppgettok_291003(L, tok);
		LOC11 = 0;
		LOC11 = toktostr_286287((&(*tok)));
		LOC12 = 0;
		LOC12 = nstFormat(LOC11, gconfigvars_170201, 5);
		msgwriteln_193449(LOC12, 0);
		ppgettok_291003(L, tok);
	}
	break;
	default:
	{
		NimStringDesc* LOC14;
		LOC14 = 0;
		LOC14 = nsuNormalize((*(*tok).ident).s);
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP2081))) goto LA15;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP2082))) goto LA16;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP2083))) goto LA17;
		goto LA18;
		LA15: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC21;
			ppgettok_291003(L, tok);
			key = toktostr_286287((&(*tok)));
			ppgettok_291003(L, tok);
			LOC21 = 0;
			LOC21 = toktostr_286287((&(*tok)));
			putenv_135638(key, LOC21);
			ppgettok_291003(L, tok);
		}
		goto LA19;
		LA16: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC23;
			NimStringDesc* LOC24;
			NimStringDesc* LOC25;
			ppgettok_291003(L, tok);
			key = toktostr_286287((&(*tok)));
			ppgettok_291003(L, tok);
			LOC23 = 0;
			LOC24 = 0;
			LOC24 = toktostr_286287((&(*tok)));
			LOC25 = 0;
			LOC25 = getenv_135625(key);
			LOC23 = rawNewString(LOC24->Sup.len + LOC25->Sup.len + 0);
appendString(LOC23, LOC24);
appendString(LOC23, LOC25);
			putenv_135638(key, LOC23);
			ppgettok_291003(L, tok);
		}
		goto LA19;
		LA17: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			NimStringDesc* LOC29;
			ppgettok_291003(L, tok);
			key = toktostr_286287((&(*tok)));
			ppgettok_291003(L, tok);
			LOC27 = 0;
			LOC28 = 0;
			LOC28 = getenv_135625(key);
			LOC29 = 0;
			LOC29 = toktostr_286287((&(*tok)));
			LOC27 = rawNewString(LOC28->Sup.len + LOC29->Sup.len + 0);
appendString(LOC27, LOC28);
appendString(LOC27, LOC29);
			putenv_135638(key, LOC27);
			ppgettok_291003(L, tok);
		}
		goto LA19;
		LA18: ;
		{
			NimStringDesc* LOC31;
			LOC31 = 0;
			LOC31 = toktostr_286287((&(*tok)));
			lexmessage_286372((&(*L)), ((NU16) 31), LOC31);
		}
		LA19: ;
	}
	break;
	}
}

N_NIMCALL(void, conftok_291275)(Tlexer286173* L, Ttoken286169* tok) {
	ppgettok_291003(L, tok);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = !(((*tok).ident == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = eqStrings((*(*tok).ident).s, ((NimStringDesc*) &TMP2075));
			LA4: ;
			if (!LOC3) goto LA2;
			parsedirective_291246(L, tok);
		} LA2: ;
	}
}

static N_INLINE(Tlineinfo192336, getlineinfo_286200)(Tlexer286173* L, Ttoken286169* tok) {
	Tlineinfo192336 result;
	memset((void*)(&result), 0, sizeof(result));
	result = newlineinfo_193014((*L).fileidx, (*tok).line, (*tok).col);
	return result;
}

N_NIMCALL(void, checksymbol_291294)(Tlexer286173* L, Ttoken286169* tok) {
	{
		NimStringDesc* LOC5;
		if (!!(((*tok).toktype >= ((NU8) 2) && (*tok).toktype <= ((NU8) 72) || (*tok).toktype >= ((NU8) 87) && (*tok).toktype <= ((NU8) 89)))) goto LA3;
		LOC5 = 0;
		LOC5 = toktostr_286287(tok);
		lexmessage_286372(L, ((NU16) 20), LOC5);
	}
	LA3: ;
}

N_NIMCALL(void, parseassignment_291319)(Tlexer286173* L, Ttoken286169* tok) {
	Tlineinfo192336 info;
	NimStringDesc* s;
	NimStringDesc* val;
	NIM_BOOL percent;
	Tident200012* LOC22;
	{
		NIM_BOOL LOC3;
		Tident200012* LOC4;
		Tident200012* LOC6;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = getident_200441(((NimStringDesc*) &TMP2084));
		LOC3 = ((*(*tok).ident).Sup.id == (*LOC4).Sup.id);
		if (LOC3) goto LA5;
		LOC6 = 0;
		LOC6 = getident_200441(((NimStringDesc*) &TMP2085));
		LOC3 = ((*(*tok).ident).Sup.id == (*LOC6).Sup.id);
		LA5: ;
		if (!LOC3) goto LA7;
		conftok_291275(L, tok);
	}
	LA7: ;
	info = getlineinfo_286200((&(*L)), (&(*tok)));
	checksymbol_291294((&(*L)), (&(*tok)));
	s = toktostr_286287((&(*tok)));
	conftok_291275(L, tok);
	val = copyString(((NimStringDesc*) &TMP2086));
	{
		while (1) {
			NimStringDesc* LOC11;
			if (!((*tok).toktype == ((NU8) 110))) goto LA10;
			s = addChar(s, 46);
			conftok_291275(L, tok);
			checksymbol_291294((&(*L)), (&(*tok)));
			LOC11 = 0;
			LOC11 = toktostr_286287((&(*tok)));
			s = resizeString(s, LOC11->Sup.len + 0);
appendString(s, LOC11);
			conftok_291275(L, tok);
		} LA10: ;
	}
	{
		NimStringDesc* LOC16;
		if (!((*tok).toktype == ((NU8) 95))) goto LA14;
		conftok_291275(L, tok);
		checksymbol_291294((&(*L)), (&(*tok)));
		LOC16 = 0;
		LOC16 = toktostr_286287((&(*tok)));
		val = resizeString(val, LOC16->Sup.len + 0);
appendString(val, LOC16);
		conftok_291275(L, tok);
		{
			if (!((*tok).toktype == ((NU8) 96))) goto LA19;
			conftok_291275(L, tok);
		}
		goto LA17;
		LA19: ;
		{
			lexmessage_286372((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2087));
		}
		LA17: ;
		val = addChar(val, 93);
	}
	LA14: ;
	LOC22 = 0;
	LOC22 = getident_200441(((NimStringDesc*) &TMP2088));
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
		conftok_291275(L, tok);
		checksymbol_291294((&(*L)), (&(*tok)));
		LOC33 = 0;
		LOC33 = toktostr_286287((&(*tok)));
		val = resizeString(val, LOC33->Sup.len + 0);
appendString(val, LOC33);
		conftok_291275(L, tok);
		{
			while (1) {
				NIM_BOOL LOC36;
				Tident200012* LOC38;
				NimStringDesc* LOC39;
				LOC36 = 0;
				LOC36 = !(((*tok).ident == NIM_NIL));
				if (!(LOC36)) goto LA37;
				LOC38 = 0;
				LOC38 = getident_200441(((NimStringDesc*) &TMP2089));
				LOC36 = ((*(*tok).ident).Sup.id == (*LOC38).Sup.id);
				LA37: ;
				if (!LOC36) goto LA35;
				conftok_291275(L, tok);
				checksymbol_291294((&(*L)), (&(*tok)));
				LOC39 = 0;
				LOC39 = toktostr_286287((&(*tok)));
				val = resizeString(val, LOC39->Sup.len + 0);
appendString(val, LOC39);
				conftok_291275(L, tok);
			} LA35: ;
		}
	}
	LA27: ;
	{
		NimStringDesc* LOC44;
		if (!percent) goto LA42;
		LOC44 = 0;
		LOC44 = nstFormat(val, gconfigvars_170201, 3);
		processswitch_281016(s, LOC44, ((NU8) 2), info);
	}
	goto LA40;
	LA42: ;
	{
		processswitch_281016(s, val, ((NU8) 2), info);
	}
	LA40: ;
}

N_NIMCALL(void, readconfigfile_291382)(NimStringDesc* filename) {
	Tlexer286173 L;
	Ttoken286169 tok;
	Tllstream283204* stream;
	memset((void*)(&L), 0, sizeof(L));
	L.Sup.Sup.m_type = (&NTI286173);
	memset((void*)(&tok), 0, sizeof(tok));
	stream = 0;
	stream = llstreamopen_283241(filename, ((NU8) 0));
	{
		if (!!((stream == NIM_NIL))) goto LA3;
		inittoken_286312((&tok));
		openlexer_286335((&L), filename, stream);
		tok.toktype = ((NU8) 1);
		conftok_291275((&L), (&tok));
		{
			while (1) {
				if (!!((tok.toktype == ((NU8) 1)))) goto LA6;
				parseassignment_291319((&L), (&tok));
			} LA6: ;
		}
		{
			if (!(((NI) 0) < (condstack_291129 ? condstack_291129->Sup.len : 0))) goto LA9;
			lexmessage_286372((&L), ((NU16) 24), ((NimStringDesc*) &TMP2079));
		}
		LA9: ;
		closelexer_286341((&L));
		rawmessage_195612(((NU16) 279), filename);
	}
	LA3: ;
}

N_NIMCALL(NimStringDesc*, getsystemconfigpath_291434)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* p;
	TY194140 LOC1;
	result = 0;
	p = getprefixdir_170302();
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = copyString(p);
	LOC1[1] = copyString(((NimStringDesc*) &TMP2090));
	LOC1[2] = copyString(filename);
	result = nosjoinPathOpenArray(LOC1, 3);
	{
		NIM_BOOL LOC4;
		TY194140 LOC7;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		memset((void*)LOC7, 0, sizeof(LOC7));
		LOC7[0] = copyString(p);
		LOC7[1] = copyString(((NimStringDesc*) &TMP2091));
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
appendString(LOC13, ((NimStringDesc*) &TMP2092));
appendString(LOC13, filename);
		result = LOC13;
	}
	LA11: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getuserconfigpath_291428)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetConfigDir();
	result = nosjoinPath(LOC1, filename);
	return result;
}

static N_INLINE(NIM_BOOL, fileexists_131604)(NimStringDesc* filename) {
	NIM_BOOL result;
	result = 0;
	result = nosexistsFile(filename);
	return result;
}

N_NIMCALL(void, loadconfigs_291603)(NimStringDesc* cfg) {
	NimStringDesc* pd;
	setdefaultlibpath_170305();
	{
		NimStringDesc* LOC5;
		if (!!(((gglobaloptions_170127 &((NU64)1<<((NU)(((NU8) 16))&63U)))!=0))) goto LA3;
		LOC5 = 0;
		LOC5 = getsystemconfigpath_291434(cfg);
		readconfigfile_291382(LOC5);
	}
	LA3: ;
	{
		NimStringDesc* LOC10;
		if (!!(((gglobaloptions_170127 &((NU64)1<<((NU)(((NU8) 18))&63U)))!=0))) goto LA8;
		LOC10 = 0;
		LOC10 = getuserconfigpath_291428(cfg);
		readconfigfile_291382(LOC10);
	}
	LA8: ;
	{
		if (!(((NI) 0) < (gprojectpath_170207 ? gprojectpath_170207->Sup.len : 0))) goto LA13;
		pd = copyString(gprojectpath_170207);
	}
	goto LA11;
	LA13: ;
	{
		pd = nosgetCurrentDir();
	}
	LA11: ;
	{
		if (!!(((gglobaloptions_170127 &((NU64)1<<((NU)(((NU8) 19))&63U)))!=0))) goto LA18;
		{
			NimStringDesc* dir_291637;
			dir_291637 = 0;
			{
				NimStringDesc* current_291654;
				if (!NIM_FALSE) goto LA23;
				current_291654 = copyString(pd);
				{
					NimStringDesc* LOC29;
					if (!NIM_FALSE) goto LA27;
					dir_291637 = pd;
					LOC29 = 0;
					LOC29 = HEX2F_128265(dir_291637, cfg);
					readconfigfile_291382(LOC29);
				}
				LA27: ;
				{
					while (1) {
						NimStringDesc* LOC37;
						{
							NIM_BOOL LOC34;
							LOC34 = 0;
							LOC34 = nosisRootDir(current_291654);
							if (!LOC34) goto LA35;
							goto LA30;
						}
						LA35: ;
						current_291654 = nosparentDir(current_291654);
						dir_291637 = current_291654;
						LOC37 = 0;
						LOC37 = HEX2F_128265(dir_291637, cfg);
						readconfigfile_291382(LOC37);
					}
				} LA30: ;
			}
			goto LA21;
			LA23: ;
			{
				{
					NI i_291656;
					NI HEX3Atmp_291658;
					NI res_291660;
					i_291656 = 0;
					HEX3Atmp_291658 = 0;
					HEX3Atmp_291658 = (NI)((pd ? pd->Sup.len : 0) - ((NI) 2));
					res_291660 = ((NI) 0);
					{
						while (1) {
							if (!(res_291660 <= HEX3Atmp_291658)) goto LA41;
							i_291656 = res_291660;
							{
								NIM_BOOL LOC44;
								NIM_BOOL LOC46;
								NimStringDesc* LOC50;
								LOC44 = 0;
								LOC44 = (((NU8)(pd->data[i_291656])) == ((NU8)(47)) || ((NU8)(pd->data[i_291656])) == ((NU8)(47)));
								if (!(LOC44)) goto LA45;
								LOC46 = 0;
								LOC46 = (i_291656 == ((NI) 0));
								if (LOC46) goto LA47;
								LOC46 = !((((NU8)(pd->data[(NI)(i_291656 - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(pd->data[(NI)(i_291656 - ((NI) 1))])) == ((NU8)(47))));
								LA47: ;
								LOC44 = LOC46;
								LA45: ;
								if (!LOC44) goto LA48;
								dir_291637 = copyStrLast(pd, ((NI) 0), i_291656);
								LOC50 = 0;
								LOC50 = HEX2F_128265(dir_291637, cfg);
								readconfigfile_291382(LOC50);
							}
							LA48: ;
							res_291660 += ((NI) 1);
						} LA41: ;
					}
				}
				{
					NimStringDesc* LOC55;
					if (!NIM_FALSE) goto LA53;
					dir_291637 = pd;
					LOC55 = 0;
					LOC55 = HEX2F_128265(dir_291637, cfg);
					readconfigfile_291382(LOC55);
				}
				LA53: ;
			}
			LA21: ;
		}
	}
	LA18: ;
	{
		NimStringDesc* LOC60;
		if (!!(((gglobaloptions_170127 &((NU64)1<<((NU)(((NU8) 17))&63U)))!=0))) goto LA58;
		LOC60 = 0;
		LOC60 = HEX2F_128265(pd, cfg);
		readconfigfile_291382(LOC60);
		{
			NimStringDesc* projectconfig;
			if (!!(((gprojectname_170206 ? gprojectname_170206->Sup.len : 0) == ((NI) 0)))) goto LA63;
			projectconfig = noschangeFileExt(gprojectfull_170208, ((NimStringDesc*) &TMP2094));
			{
				NIM_BOOL LOC67;
				LOC67 = 0;
				LOC67 = fileexists_131604(projectconfig);
				if (!!(LOC67)) goto LA68;
				projectconfig = noschangeFileExt(gprojectfull_170208, ((NimStringDesc*) &TMP2095));
			}
			LA68: ;
			{
				NIM_BOOL LOC72;
				LOC72 = 0;
				LOC72 = fileexists_131604(projectconfig);
				if (!!(LOC72)) goto LA73;
				projectconfig = noschangeFileExt(gprojectfull_170208, ((NimStringDesc*) &TMP2096));
				{
					NIM_BOOL LOC77;
					LOC77 = 0;
					LOC77 = fileexists_131604(projectconfig);
					if (!LOC77) goto LA78;
					rawmessage_195612(((NU16) 241), projectconfig);
				}
				LA78: ;
			}
			LA73: ;
			readconfigfile_291382(projectconfig);
		}
		LA63: ;
	}
	LA58: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimconfInit000)(void) {
	if (condstack_291129) nimGCunrefNoCycle(condstack_291129);
	condstack_291129 = (TY291112*) newSeqRC1((&NTI291112), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimconfDatInit000)(void) {
NTI291112.size = sizeof(TY291112*);
NTI291112.kind = 24;
NTI291112.base = (&NTI130);
NTI291112.flags = 2;
NTI291112.marker = TMP824;
}

