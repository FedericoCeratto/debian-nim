/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct TY263112 TY263112;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47704 Cell47704;
typedef struct Cellseq47720 Cellseq47720;
typedef struct Gcheap50218 Gcheap50218;
typedef struct Gcstack50216 Gcstack50216;
typedef struct Memregion29886 Memregion29886;
typedef struct Smallchunk29840 Smallchunk29840;
typedef struct Llchunk29880 Llchunk29880;
typedef struct Bigchunk29842 Bigchunk29842;
typedef struct Intset29814 Intset29814;
typedef struct Trunk29810 Trunk29810;
typedef struct Avlnode29884 Avlnode29884;
typedef struct Gcstat50214 Gcstat50214;
typedef struct Cellset47716 Cellset47716;
typedef struct Pagedesc47712 Pagedesc47712;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tlexer258174 Tlexer258174;
typedef struct Tbaselexer256015 Tbaselexer256015;
typedef struct TNimObject TNimObject;
typedef struct Tllstream255204 Tllstream255204;
typedef struct Tlineinfo187336 Tlineinfo187336;
typedef struct Ttoken258170 Ttoken258170;
typedef struct Tident195012 Tident195012;
typedef struct Tidobj195006 Tidobj195006;
typedef struct Stringtableobj150209 Stringtableobj150209;
typedef struct Basechunk29838 Basechunk29838;
typedef struct Freecell29830 Freecell29830;
typedef struct Keyvaluepairseq150207 Keyvaluepairseq150207;
typedef struct Keyvaluepair150205 Keyvaluepair150205;
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef NU8 Tnimkind3203;
typedef NU8 Tnimtypeflag3209Set;
typedef N_NIMCALL_PTR(void, TY3289) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3203 kind;
Tnimtypeflag3209Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, Globalmarkerproc56202) (void);
struct  Cell47704  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47720  {
NI len;
NI cap;
Cell47704** d;
};
typedef Smallchunk29840* TY29901[512];
typedef Trunk29810* Trunkbuckets29812[256];
struct  Intset29814  {
Trunkbuckets29812 data;
};
struct  Memregion29886  {
NI minlargeobj;
NI maxlargeobj;
TY29901 freesmallchunks;
Llchunk29880* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29842* freechunkslist;
Intset29814 chunkstarts;
Avlnode29884* root;
Avlnode29884* deleted;
Avlnode29884* last;
Avlnode29884* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47716  {
NI counter;
NI max;
Pagedesc47712* head;
Pagedesc47712** data;
};
struct  Gcheap50218  {
Gcstack50216* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47720 zct;
Cellseq47720 decstack;
Cellseq47720 tempstack;
NI recgclock;
Memregion29886 region;
Gcstat50214 stat;
Cellset47716 marked;
Cellseq47720 additionalroots;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU32 Tglobaloption166013Set;
typedef NU8 Tglobaloption166013;
struct  TNimObject  {
TNimType* m_type;
};
struct  Tbaselexer256015  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream255204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
typedef NU16 Tmsgkind187002;
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo187336 info0, Tmsgkind187002 msg0, NimStringDesc* arg0, void* ClEnv);
void* ClEnv;
} Terrorhandler258172;
struct  Tlexer258174  {
  Tbaselexer256015 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler258172 errorhandler;
};
typedef NU8 Ttoktype258016;
typedef NU8 Tnumericalbase258168;
struct  Ttoken258170  {
Ttoktype258016 toktype;
NI indent;
Tident195012* ident;
NI64 inumber;
NF fnumber;
Tnumericalbase258168 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
typedef NU8 Filemode12409;
struct  Tidobj195006  {
  TNimObject Sup;
NI id;
};
struct  Tident195012  {
  Tidobj195006 Sup;
NimStringDesc* s;
Tident195012* next;
NI h;
};
typedef NU16 Tspecialword249004;
typedef NU8 Tjumpdest263148;
typedef NU8 Msgflag188444Set;
typedef NU8 Formatflag150300Set;
struct  Tlineinfo187336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU8 Tcmdlinepass253008;
typedef NimStringDesc* TY189140[3];
struct  Gcstack50216  {
Gcstack50216* prev;
Gcstack50216* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29838  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29840  {
  Basechunk29838 Sup;
Smallchunk29840* next;
Smallchunk29840* prev;
Freecell29830* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29880  {
NI size;
NI acc;
Llchunk29880* next;
};
struct  Bigchunk29842  {
  Basechunk29838 Sup;
Bigchunk29842* next;
Bigchunk29842* prev;
NI align;
NF data;
};
typedef NI TY29819[8];
struct  Trunk29810  {
Trunk29810* next;
NI key;
TY29819 bits;
};
typedef Avlnode29884* TY29891[2];
struct  Avlnode29884  {
TY29891 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47712  {
Pagedesc47712* next;
NI key;
TY29819 bits;
};
typedef NU8 Tllstreamkind255202;
struct  Tllstream255204  {
  TNimObject Sup;
Tllstreamkind255202 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
typedef NU8 Stringtablemode150203;
struct  Stringtableobj150209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq150207* data;
Stringtablemode150203 mode;
};
struct  Freecell29830  {
Freecell29830* next;
NI zerofield;
};
struct Keyvaluepair150205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct TY263112 {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq150207 {
  TGenericSeq Sup;
  Keyvaluepair150205 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP883)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP884)();
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56202 markerproc0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47704*, usrtocell_51840_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47704* c0);
N_NOINLINE(void, addzct_51817_1689653243)(Cellseq47720* s0, Cell47704* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(void, setdefaultlibpath_166304_2607990831)(void);
N_NIMCALL(void, readconfigfile_263382_930198375)(NimStringDesc* filename0);
N_NIMCALL(Tllstream255204*, llstreamopen_255242_597494479)(NimStringDesc* filename0, Filemode12409 mode0);
N_NIMCALL(void, inittoken_258317_689113469)(Ttoken258170* L0);
N_NIMCALL(void, openlexer_258340_689113469)(Tlexer258174* lex0, NimStringDesc* filename0, Tllstream255204* inputstream0);
N_NIMCALL(void, conftok_263275_930198375)(Tlexer258174* L0, Ttoken258170* tok0);
N_NIMCALL(void, ppgettok_263003_930198375)(Tlexer258174* L0, Ttoken258170* tok0);
N_NIMCALL(void, rawgettok_261824_689113469)(Tlexer258174* L0, Ttoken258170* tok0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(void, parsedirective_263246_930198375)(Tlexer258174* L0, Ttoken258170* tok0);
N_NIMCALL(Tspecialword249004, whichkeyword_249364_1391470768)(Tident195012* id0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
N_NIMCALL(NIM_BOOL, evalppif_263096_930198375)(Tlexer258174* L0, Ttoken258170* tok0);
N_NIMCALL(NIM_BOOL, parseexpr_263021_930198375)(Tlexer258174* L0, Ttoken258170* tok0);
N_NIMCALL(NIM_BOOL, parseandexpr_263061_930198375)(Tlexer258174* L0, Ttoken258170* tok0);
N_NIMCALL(NIM_BOOL, parseatom_263027_930198375)(Tlexer258174* L0, Ttoken258170* tok0);
N_NIMCALL(void, lexmessage_258381_689113469)(Tlexer258174* L0, Tmsgkind187002 msg0, NimStringDesc* arg0);
N_NIMCALL(NIM_BOOL, isdefined_196140_1967573533)(Tident195012* symbol0);
N_NIMCALL(void, jumptodirective_263151_930198375)(Tlexer258174* L0, Ttoken258170* tok0, Tjumpdest263148 dest0);
N_NIMCALL(void, doelse_263158_930198375)(Tlexer258174* L0, Ttoken258170* tok0);
N_NIMCALL(void, doelif_263173_930198375)(Tlexer258174* L0, Ttoken258170* tok0);
N_NIMCALL(void, doend_263131_930198375)(Tlexer258174* L0, Ttoken258170* tok0);
N_NIMCALL(void, msgwriteln_188450_155036129)(NimStringDesc* s0, Msgflag188444Set flags0);
N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f0, Stringtableobj150209* t0, Formatflag150300Set flags0);
N_NIMCALL(NimStringDesc*, toktostr_258292_689113469)(Ttoken258170* tok0);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s0);
N_NIMCALL(void, putenv_135437_2125978480)(NimStringDesc* key0, NimStringDesc* val0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, getenv_135424_2125978480)(NimStringDesc* key0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(void, parseassignment_263319_930198375)(Tlexer258174* L0, Ttoken258170* tok0);
N_NIMCALL(Tident195012*, getident_195441_791273810)(NimStringDesc* identifier0);
static N_INLINE(Tlineinfo187336, getlineinfo_258206_689113469)(Tlexer258174* L0, Ttoken258170* tok0);
N_NIMCALL(Tlineinfo187336, newlineinfo_188023_155036129)(NI32 fileinfoidx0, NI line0, NI col0);
N_NIMCALL(void, checksymbol_263294_930198375)(Tlexer258174* L0, Ttoken258170* tok0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(void, processswitch_253016_2004575671)(NimStringDesc* switch_253018_2004575671, NimStringDesc* arg0, Tcmdlinepass253008 pass0, Tlineinfo187336 info0);
N_NIMCALL(void, closelexer_258346_689113469)(Tlexer258174* lex0);
N_NIMCALL(void, rawmessage_190612_155036129)(Tmsgkind187002 msg0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, getsystemconfigpath_263434_930198375)(NimStringDesc* filename0);
N_NIMCALL(NimStringDesc*, getprefixdir_166301_2607990831)(void);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts0, NI parts0Len0);
N_NIMCALL(NimStringDesc*, getuserconfigpath_263428_930198375)(NimStringDesc* filename0);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head0, NimStringDesc* tail0);
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, HEX2F_124074_2125978480)(NimStringDesc* head0, NimStringDesc* tail0);
N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path0);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_79410_1689653243, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename0, NimStringDesc* ext0);
static N_INLINE(NIM_BOOL, fileexists_129002_2125978480)(NimStringDesc* filename0);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename0);
STRING_LITERAL(TMP2212, "@", 1);
STRING_LITERAL(TMP2213, "\')\'", 3);
STRING_LITERAL(TMP2214, "\':\'", 3);
STRING_LITERAL(TMP2215, "@if", 3);
STRING_LITERAL(TMP2216, "@end", 4);
STRING_LITERAL(TMP2218, "putenv", 6);
STRING_LITERAL(TMP2219, "prependenv", 10);
STRING_LITERAL(TMP2220, "appendenv", 9);
STRING_LITERAL(TMP2221, "-", 1);
STRING_LITERAL(TMP2222, "--", 2);
STRING_LITERAL(TMP2223, "", 0);
STRING_LITERAL(TMP2224, "\']\'", 3);
STRING_LITERAL(TMP2225, "%=", 2);
STRING_LITERAL(TMP2226, "&", 1);
STRING_LITERAL(TMP2227, "config", 6);
STRING_LITERAL(TMP2229, "nimcfg", 6);
STRING_LITERAL(TMP2230, "nim.cfg", 7);
STRING_LITERAL(TMP2231, "nimrod.cfg", 10);
TY263112* condstack_263129_930198375;
extern TNimType NTI130; /* bool */
TNimType NTI263112; /* seq[bool] */
extern Gcheap50218 gch_50258_1689653243;
extern Tglobaloption166013Set gglobaloptions_166127_2607990831;
extern TNimType NTI258174; /* TLexer */
extern Stringtableobj150209* gconfigvars_166201_2607990831;
extern NimStringDesc* gprojectpath_166206_2607990831;
extern NimStringDesc* gprojectname_166205_2607990831;
extern NimStringDesc* gprojectfull_166207_2607990831;
N_NIMCALL(void, TMP883)(void* p, NI op) {
	TY263112* a;
	NI LOC1;
	a = (TY263112*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP884)() {
	nimGCvisit((void*)condstack_263129_930198375, 0);
}

static N_INLINE(Cell47704*, usrtocell_51840_1689653243)(void* usr0) {
	Cell47704* result0;
	result0 = (Cell47704*)0;
	result0 = ((Cell47704*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47704))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47704* c0) {
	addzct_51817_1689653243((&gch_50258_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47704* c0;
	c0 = usrtocell_51840_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53001_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(void, ppgettok_263003_930198375)(Tlexer258174* L0, Ttoken258170* tok0) {
	rawgettok_261824_689113469(L0, tok0);
	{
		while (1) {
			if (!((*tok0).toktype == ((Ttoktype258016) 113))) goto LA2;
			rawgettok_261824_689113469(L0, tok0);
		} LA2: ;
	}
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
	int LOC13;
{	result0 = (NIM_BOOL)0;
	{
		if (!(a0 == b0)) goto LA3;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = (a0 == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b0 == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = (NIM_BOOL)0;
	LOC11 = ((*a0).Sup.len == (*b0).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = (int)0;
	LOC13 = memcmp(((NCSTRING) ((*a0).data)), ((NCSTRING) ((*b0).data)), (*a0).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, parseatom_263027_930198375)(Tlexer258174* L0, Ttoken258170* tok0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	{
		if (!((*tok0).toktype == ((Ttoktype258016) 93))) goto LA3;
		ppgettok_263003_930198375(L0, tok0);
		result0 = parseexpr_263021_930198375(L0, tok0);
		{
			if (!((*tok0).toktype == ((Ttoktype258016) 94))) goto LA7;
			ppgettok_263003_930198375(L0, tok0);
		}
		goto LA5;
		LA7: ;
		{
			lexmessage_258381_689113469((&(*L0)), ((Tmsgkind187002) 24), ((NimStringDesc*) &TMP2213));
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC13;
		if (!((*(*tok0).ident).Sup.id == ((NI) 45))) goto LA11;
		ppgettok_263003_930198375(L0, tok0);
		LOC13 = (NIM_BOOL)0;
		LOC13 = parseatom_263027_930198375(L0, tok0);
		result0 = !(LOC13);
	}
	goto LA1;
	LA11: ;
	{
		result0 = isdefined_196140_1967573533((*tok0).ident);
		ppgettok_263003_930198375(L0, tok0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, parseandexpr_263061_930198375)(Tlexer258174* L0, Ttoken258170* tok0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = parseatom_263027_930198375(L0, tok0);
	{
		while (1) {
			NIM_BOOL b0;
			NIM_BOOL LOC3;
			if (!((*(*tok0).ident).Sup.id == ((NI) 2))) goto LA2;
			ppgettok_263003_930198375(L0, tok0);
			b0 = parseatom_263027_930198375(L0, tok0);
			LOC3 = (NIM_BOOL)0;
			LOC3 = result0;
			if (!(LOC3)) goto LA4;
			LOC3 = b0;
			LA4: ;
			result0 = LOC3;
		} LA2: ;
	}
	return result0;
}

N_NIMCALL(NIM_BOOL, parseexpr_263021_930198375)(Tlexer258174* L0, Ttoken258170* tok0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = parseandexpr_263061_930198375(L0, tok0);
	{
		while (1) {
			NIM_BOOL b0;
			NIM_BOOL LOC3;
			if (!((*(*tok0).ident).Sup.id == ((NI) 49))) goto LA2;
			ppgettok_263003_930198375(L0, tok0);
			b0 = parseandexpr_263061_930198375(L0, tok0);
			LOC3 = (NIM_BOOL)0;
			LOC3 = result0;
			if (LOC3) goto LA4;
			LOC3 = b0;
			LA4: ;
			result0 = LOC3;
		} LA2: ;
	}
	return result0;
}

N_NIMCALL(NIM_BOOL, evalppif_263096_930198375)(Tlexer258174* L0, Ttoken258170* tok0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	ppgettok_263003_930198375(L0, tok0);
	result0 = parseexpr_263021_930198375(L0, tok0);
	{
		if (!((*tok0).toktype == ((Ttoktype258016) 107))) goto LA3;
		ppgettok_263003_930198375(L0, tok0);
	}
	goto LA1;
	LA3: ;
	{
		lexmessage_258381_689113469((&(*L0)), ((Tmsgkind187002) 24), ((NimStringDesc*) &TMP2214));
	}
	LA1: ;
	return result0;
}

N_NIMCALL(void, doelse_263158_930198375)(Tlexer258174* L0, Ttoken258170* tok0) {
	{
		if (!((condstack_263129_930198375 ? (condstack_263129_930198375->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_258381_689113469((&(*L0)), ((Tmsgkind187002) 24), ((NimStringDesc*) &TMP2215));
	}
	LA3: ;
	ppgettok_263003_930198375(L0, tok0);
	{
		if (!((*tok0).toktype == ((Ttoktype258016) 107))) goto LA7;
		ppgettok_263003_930198375(L0, tok0);
	}
	LA7: ;
	{
		if (!condstack_263129_930198375->data[(condstack_263129_930198375 ? (condstack_263129_930198375->Sup.len-1) : -1)]) goto LA11;
		jumptodirective_263151_930198375(L0, tok0, ((Tjumpdest263148) 0));
	}
	LA11: ;
}

N_NIMCALL(void, doelif_263173_930198375)(Tlexer258174* L0, Ttoken258170* tok0) {
	NIM_BOOL res0;
	{
		if (!((condstack_263129_930198375 ? (condstack_263129_930198375->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_258381_689113469((&(*L0)), ((Tmsgkind187002) 24), ((NimStringDesc*) &TMP2215));
	}
	LA3: ;
	res0 = evalppif_263096_930198375(L0, tok0);
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = condstack_263129_930198375->data[(condstack_263129_930198375 ? (condstack_263129_930198375->Sup.len-1) : -1)];
		if (LOC7) goto LA8;
		LOC7 = !(res0);
		LA8: ;
		if (!LOC7) goto LA9;
		jumptodirective_263151_930198375(L0, tok0, ((Tjumpdest263148) 1));
	}
	goto LA5;
	LA9: ;
	{
		condstack_263129_930198375->data[(condstack_263129_930198375 ? (condstack_263129_930198375->Sup.len-1) : -1)] = NIM_TRUE;
	}
	LA5: ;
}

N_NIMCALL(void, doend_263131_930198375)(Tlexer258174* L0, Ttoken258170* tok0) {
	{
		if (!((condstack_263129_930198375 ? (condstack_263129_930198375->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_258381_689113469((&(*L0)), ((Tmsgkind187002) 24), ((NimStringDesc*) &TMP2215));
	}
	LA3: ;
	ppgettok_263003_930198375(L0, tok0);
	condstack_263129_930198375 = (TY263112*) setLengthSeq(&(condstack_263129_930198375)->Sup, sizeof(NIM_BOOL), ((NI) ((condstack_263129_930198375 ? (condstack_263129_930198375->Sup.len-1) : -1))));
}

N_NIMCALL(void, jumptodirective_263151_930198375)(Tlexer258174* L0, Ttoken258170* tok0, Tjumpdest263148 dest0) {
	NI nestedifs0;
	nestedifs0 = ((NI) 0);
	{
		while (1) {
			{
				NIM_BOOL LOC5;
				Tspecialword249004 LOC9;
				LOC5 = (NIM_BOOL)0;
				LOC5 = !(((*tok0).ident == NIM_NIL));
				if (!(LOC5)) goto LA6;
				LOC5 = eqStrings((*(*tok0).ident).s, ((NimStringDesc*) &TMP2212));
				LA6: ;
				if (!LOC5) goto LA7;
				ppgettok_263003_930198375(L0, tok0);
				LOC9 = (Tspecialword249004)0;
				LOC9 = whichkeyword_249364_1391470768((*tok0).ident);
				switch (LOC9) {
				case ((Tspecialword249004) 31):
				{
					nestedifs0 += ((NI) 1);
				}
				break;
				case ((Tspecialword249004) 21):
				{
					{
						NIM_BOOL LOC14;
						LOC14 = (NIM_BOOL)0;
						LOC14 = (dest0 == ((Tjumpdest263148) 1));
						if (!(LOC14)) goto LA15;
						LOC14 = (nestedifs0 == ((NI) 0));
						LA15: ;
						if (!LOC14) goto LA16;
						doelse_263158_930198375(L0, tok0);
						goto LA1;
					}
					LA16: ;
				}
				break;
				case ((Tspecialword249004) 20):
				{
					{
						NIM_BOOL LOC21;
						LOC21 = (NIM_BOOL)0;
						LOC21 = (dest0 == ((Tjumpdest263148) 1));
						if (!(LOC21)) goto LA22;
						LOC21 = (nestedifs0 == ((NI) 0));
						LA22: ;
						if (!LOC21) goto LA23;
						doelif_263173_930198375(L0, tok0);
						goto LA1;
					}
					LA23: ;
				}
				break;
				case ((Tspecialword249004) 22):
				{
					{
						if (!(nestedifs0 == ((NI) 0))) goto LA28;
						doend_263131_930198375(L0, tok0);
						goto LA1;
					}
					LA28: ;
					{
						if (!(((NI) 0) < nestedifs0)) goto LA32;
						nestedifs0 -= ((NI) 1);
					}
					LA32: ;
				}
				break;
				default:
				{
				}
				break;
				}
				ppgettok_263003_930198375(L0, tok0);
			}
			goto LA3;
			LA7: ;
			{
				if (!((*tok0).toktype == ((Ttoktype258016) 1))) goto LA36;
				lexmessage_258381_689113469((&(*L0)), ((Tmsgkind187002) 24), ((NimStringDesc*) &TMP2216));
			}
			goto LA3;
			LA36: ;
			{
				ppgettok_263003_930198375(L0, tok0);
			}
			LA3: ;
		}
	} LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(void, parsedirective_263246_930198375)(Tlexer258174* L0, Ttoken258170* tok0) {
	Tspecialword249004 LOC1;
	ppgettok_263003_930198375(L0, tok0);
	LOC1 = (Tspecialword249004)0;
	LOC1 = whichkeyword_249364_1391470768((*tok0).ident);
	switch (LOC1) {
	case ((Tspecialword249004) 31):
	{
		NIM_BOOL res0;
		condstack_263129_930198375 = (TY263112*) setLengthSeq(&(condstack_263129_930198375)->Sup, sizeof(NIM_BOOL), ((NI) ((NI)((condstack_263129_930198375 ? condstack_263129_930198375->Sup.len : 0) + ((NI) 1)))));
		res0 = evalppif_263096_930198375(L0, tok0);
		condstack_263129_930198375->data[(condstack_263129_930198375 ? (condstack_263129_930198375->Sup.len-1) : -1)] = res0;
		{
			if (!!(res0)) goto LA5;
			jumptodirective_263151_930198375(L0, tok0, ((Tjumpdest263148) 1));
		}
		LA5: ;
	}
	break;
	case ((Tspecialword249004) 20):
	{
		doelif_263173_930198375(L0, tok0);
	}
	break;
	case ((Tspecialword249004) 21):
	{
		doelse_263158_930198375(L0, tok0);
	}
	break;
	case ((Tspecialword249004) 22):
	{
		doend_263131_930198375(L0, tok0);
	}
	break;
	case ((Tspecialword249004) 183):
	{
		NimStringDesc* LOC11;
		NimStringDesc* LOC12;
		ppgettok_263003_930198375(L0, tok0);
		LOC11 = (NimStringDesc*)0;
		LOC11 = toktostr_258292_689113469((&(*tok0)));
		LOC12 = (NimStringDesc*)0;
		LOC12 = nstFormat(LOC11, gconfigvars_166201_2607990831, 5);
		msgwriteln_188450_155036129(LOC12, 0);
		ppgettok_263003_930198375(L0, tok0);
	}
	break;
	default:
	{
		NimStringDesc* LOC14;
		LOC14 = (NimStringDesc*)0;
		LOC14 = nsuNormalize((*(*tok0).ident).s);
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP2218))) goto LA15;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP2219))) goto LA16;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP2220))) goto LA17;
		goto LA18;
		LA15: ;
		{
			NimStringDesc* key0;
			NimStringDesc* LOC21;
			ppgettok_263003_930198375(L0, tok0);
			key0 = toktostr_258292_689113469((&(*tok0)));
			ppgettok_263003_930198375(L0, tok0);
			LOC21 = (NimStringDesc*)0;
			LOC21 = toktostr_258292_689113469((&(*tok0)));
			putenv_135437_2125978480(key0, LOC21);
			ppgettok_263003_930198375(L0, tok0);
		}
		goto LA19;
		LA16: ;
		{
			NimStringDesc* key0;
			NimStringDesc* LOC23;
			NimStringDesc* LOC24;
			NimStringDesc* LOC25;
			ppgettok_263003_930198375(L0, tok0);
			key0 = toktostr_258292_689113469((&(*tok0)));
			ppgettok_263003_930198375(L0, tok0);
			LOC23 = (NimStringDesc*)0;
			LOC24 = (NimStringDesc*)0;
			LOC24 = toktostr_258292_689113469((&(*tok0)));
			LOC25 = (NimStringDesc*)0;
			LOC25 = getenv_135424_2125978480(key0);
			LOC23 = rawNewString(LOC24->Sup.len + LOC25->Sup.len + 0);
appendString(LOC23, LOC24);
appendString(LOC23, LOC25);
			putenv_135437_2125978480(key0, LOC23);
			ppgettok_263003_930198375(L0, tok0);
		}
		goto LA19;
		LA17: ;
		{
			NimStringDesc* key0;
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			NimStringDesc* LOC29;
			ppgettok_263003_930198375(L0, tok0);
			key0 = toktostr_258292_689113469((&(*tok0)));
			ppgettok_263003_930198375(L0, tok0);
			LOC27 = (NimStringDesc*)0;
			LOC28 = (NimStringDesc*)0;
			LOC28 = getenv_135424_2125978480(key0);
			LOC29 = (NimStringDesc*)0;
			LOC29 = toktostr_258292_689113469((&(*tok0)));
			LOC27 = rawNewString(LOC28->Sup.len + LOC29->Sup.len + 0);
appendString(LOC27, LOC28);
appendString(LOC27, LOC29);
			putenv_135437_2125978480(key0, LOC27);
			ppgettok_263003_930198375(L0, tok0);
		}
		goto LA19;
		LA18: ;
		{
			NimStringDesc* LOC31;
			LOC31 = (NimStringDesc*)0;
			LOC31 = toktostr_258292_689113469((&(*tok0)));
			lexmessage_258381_689113469((&(*L0)), ((Tmsgkind187002) 31), LOC31);
		}
		LA19: ;
	}
	break;
	}
}

N_NIMCALL(void, conftok_263275_930198375)(Tlexer258174* L0, Ttoken258170* tok0) {
	ppgettok_263003_930198375(L0, tok0);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = (NIM_BOOL)0;
			LOC3 = !(((*tok0).ident == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = eqStrings((*(*tok0).ident).s, ((NimStringDesc*) &TMP2212));
			LA4: ;
			if (!LOC3) goto LA2;
			parsedirective_263246_930198375(L0, tok0);
		} LA2: ;
	}
}

static N_INLINE(Tlineinfo187336, getlineinfo_258206_689113469)(Tlexer258174* L0, Ttoken258170* tok0) {
	Tlineinfo187336 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0 = newlineinfo_188023_155036129((*L0).fileidx, (*tok0).line, (*tok0).col);
	return result0;
}

N_NIMCALL(void, checksymbol_263294_930198375)(Tlexer258174* L0, Ttoken258170* tok0) {
	{
		NimStringDesc* LOC5;
		if (!!(((*tok0).toktype >= ((Ttoktype258016) 2) && (*tok0).toktype <= ((Ttoktype258016) 72) || (*tok0).toktype >= ((Ttoktype258016) 87) && (*tok0).toktype <= ((Ttoktype258016) 89)))) goto LA3;
		LOC5 = (NimStringDesc*)0;
		LOC5 = toktostr_258292_689113469(tok0);
		lexmessage_258381_689113469(L0, ((Tmsgkind187002) 20), LOC5);
	}
	LA3: ;
}

N_NIMCALL(void, parseassignment_263319_930198375)(Tlexer258174* L0, Ttoken258170* tok0) {
	Tlineinfo187336 info0;
	NimStringDesc* s0;
	NimStringDesc* val0;
	NIM_BOOL percent0;
	Tident195012* LOC22;
	{
		NIM_BOOL LOC3;
		Tident195012* LOC4;
		Tident195012* LOC6;
		LOC3 = (NIM_BOOL)0;
		LOC4 = (Tident195012*)0;
		LOC4 = getident_195441_791273810(((NimStringDesc*) &TMP2221));
		LOC3 = ((*(*tok0).ident).Sup.id == (*LOC4).Sup.id);
		if (LOC3) goto LA5;
		LOC6 = (Tident195012*)0;
		LOC6 = getident_195441_791273810(((NimStringDesc*) &TMP2222));
		LOC3 = ((*(*tok0).ident).Sup.id == (*LOC6).Sup.id);
		LA5: ;
		if (!LOC3) goto LA7;
		conftok_263275_930198375(L0, tok0);
	}
	LA7: ;
	info0 = getlineinfo_258206_689113469((&(*L0)), (&(*tok0)));
	checksymbol_263294_930198375((&(*L0)), (&(*tok0)));
	s0 = toktostr_258292_689113469((&(*tok0)));
	conftok_263275_930198375(L0, tok0);
	val0 = copyString(((NimStringDesc*) &TMP2223));
	{
		while (1) {
			NimStringDesc* LOC11;
			if (!((*tok0).toktype == ((Ttoktype258016) 110))) goto LA10;
			s0 = addChar(s0, 46);
			conftok_263275_930198375(L0, tok0);
			checksymbol_263294_930198375((&(*L0)), (&(*tok0)));
			LOC11 = (NimStringDesc*)0;
			LOC11 = toktostr_258292_689113469((&(*tok0)));
			s0 = resizeString(s0, LOC11->Sup.len + 0);
appendString(s0, LOC11);
			conftok_263275_930198375(L0, tok0);
		} LA10: ;
	}
	{
		NimStringDesc* LOC16;
		if (!((*tok0).toktype == ((Ttoktype258016) 95))) goto LA14;
		conftok_263275_930198375(L0, tok0);
		checksymbol_263294_930198375((&(*L0)), (&(*tok0)));
		LOC16 = (NimStringDesc*)0;
		LOC16 = toktostr_258292_689113469((&(*tok0)));
		val0 = resizeString(val0, LOC16->Sup.len + 0);
appendString(val0, LOC16);
		conftok_263275_930198375(L0, tok0);
		{
			if (!((*tok0).toktype == ((Ttoktype258016) 96))) goto LA19;
			conftok_263275_930198375(L0, tok0);
		}
		goto LA17;
		LA19: ;
		{
			lexmessage_258381_689113469((&(*L0)), ((Tmsgkind187002) 24), ((NimStringDesc*) &TMP2224));
		}
		LA17: ;
		val0 = addChar(val0, 93);
	}
	LA14: ;
	LOC22 = (Tident195012*)0;
	LOC22 = getident_195441_791273810(((NimStringDesc*) &TMP2225));
	percent0 = ((*(*tok0).ident).Sup.id == (*LOC22).Sup.id);
	{
		NIM_BOOL LOC25;
		NimStringDesc* LOC33;
		LOC25 = (NIM_BOOL)0;
		LOC25 = ((*tok0).toktype == ((Ttoktype258016) 107) || (*tok0).toktype == ((Ttoktype258016) 109));
		if (LOC25) goto LA26;
		LOC25 = percent0;
		LA26: ;
		if (!LOC25) goto LA27;
		{
			if (!(((NI) 0) < (val0 ? val0->Sup.len : 0))) goto LA31;
			val0 = addChar(val0, 58);
		}
		LA31: ;
		conftok_263275_930198375(L0, tok0);
		checksymbol_263294_930198375((&(*L0)), (&(*tok0)));
		LOC33 = (NimStringDesc*)0;
		LOC33 = toktostr_258292_689113469((&(*tok0)));
		val0 = resizeString(val0, LOC33->Sup.len + 0);
appendString(val0, LOC33);
		conftok_263275_930198375(L0, tok0);
		{
			while (1) {
				NIM_BOOL LOC36;
				Tident195012* LOC38;
				NimStringDesc* LOC39;
				LOC36 = (NIM_BOOL)0;
				LOC36 = !(((*tok0).ident == NIM_NIL));
				if (!(LOC36)) goto LA37;
				LOC38 = (Tident195012*)0;
				LOC38 = getident_195441_791273810(((NimStringDesc*) &TMP2226));
				LOC36 = ((*(*tok0).ident).Sup.id == (*LOC38).Sup.id);
				LA37: ;
				if (!LOC36) goto LA35;
				conftok_263275_930198375(L0, tok0);
				checksymbol_263294_930198375((&(*L0)), (&(*tok0)));
				LOC39 = (NimStringDesc*)0;
				LOC39 = toktostr_258292_689113469((&(*tok0)));
				val0 = resizeString(val0, LOC39->Sup.len + 0);
appendString(val0, LOC39);
				conftok_263275_930198375(L0, tok0);
			} LA35: ;
		}
	}
	LA27: ;
	{
		NimStringDesc* LOC44;
		if (!percent0) goto LA42;
		LOC44 = (NimStringDesc*)0;
		LOC44 = nstFormat(val0, gconfigvars_166201_2607990831, 3);
		processswitch_253016_2004575671(s0, LOC44, ((Tcmdlinepass253008) 2), info0);
	}
	goto LA40;
	LA42: ;
	{
		processswitch_253016_2004575671(s0, val0, ((Tcmdlinepass253008) 2), info0);
	}
	LA40: ;
}

N_NIMCALL(void, readconfigfile_263382_930198375)(NimStringDesc* filename0) {
	Tlexer258174 L0;
	Ttoken258170 tok0;
	Tllstream255204* stream0;
	memset((void*)(&L0), 0, sizeof(L0));
	L0.Sup.Sup.m_type = (&NTI258174);
	memset((void*)(&tok0), 0, sizeof(tok0));
	stream0 = (Tllstream255204*)0;
	stream0 = llstreamopen_255242_597494479(filename0, ((Filemode12409) 0));
	{
		if (!!((stream0 == NIM_NIL))) goto LA3;
		inittoken_258317_689113469((&tok0));
		openlexer_258340_689113469((&L0), filename0, stream0);
		tok0.toktype = ((Ttoktype258016) 1);
		conftok_263275_930198375((&L0), (&tok0));
		{
			while (1) {
				if (!!((tok0.toktype == ((Ttoktype258016) 1)))) goto LA6;
				parseassignment_263319_930198375((&L0), (&tok0));
			} LA6: ;
		}
		{
			if (!(((NI) 0) < (condstack_263129_930198375 ? condstack_263129_930198375->Sup.len : 0))) goto LA9;
			lexmessage_258381_689113469((&L0), ((Tmsgkind187002) 24), ((NimStringDesc*) &TMP2216));
		}
		LA9: ;
		closelexer_258346_689113469((&L0));
		rawmessage_190612_155036129(((Tmsgkind187002) 279), filename0);
	}
	LA3: ;
}

N_NIMCALL(NimStringDesc*, getsystemconfigpath_263434_930198375)(NimStringDesc* filename0) {
	NimStringDesc* result0;
	NimStringDesc* p0;
	TY189140 LOC1;
	result0 = (NimStringDesc*)0;
	p0 = getprefixdir_166301_2607990831();
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = copyString(p0);
	LOC1[1] = copyString(((NimStringDesc*) &TMP2227));
	LOC1[2] = copyString(filename0);
	result0 = nosjoinPathOpenArray(LOC1, 3);
	return result0;
}

N_NIMCALL(NimStringDesc*, getuserconfigpath_263428_930198375)(NimStringDesc* filename0) {
	NimStringDesc* result0;
	NimStringDesc* LOC1;
	result0 = (NimStringDesc*)0;
	LOC1 = (NimStringDesc*)0;
	LOC1 = nosgetConfigDir();
	result0 = nosjoinPath(LOC1, filename0);
	return result0;
}

static N_INLINE(NIM_BOOL, fileexists_129002_2125978480)(NimStringDesc* filename0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = nosexistsFile(filename0);
	return result0;
}

N_NIMCALL(void, loadconfigs_263601_930198375)(NimStringDesc* cfg0) {
	NimStringDesc* pd0;
	setdefaultlibpath_166304_2607990831();
	{
		NimStringDesc* LOC5;
		if (!!(((gglobaloptions_166127_2607990831 &(1U<<((NU)(((Tglobaloption166013) 16))&31U)))!=0))) goto LA3;
		LOC5 = (NimStringDesc*)0;
		LOC5 = getsystemconfigpath_263434_930198375(cfg0);
		readconfigfile_263382_930198375(LOC5);
	}
	LA3: ;
	{
		NimStringDesc* LOC10;
		if (!!(((gglobaloptions_166127_2607990831 &(1U<<((NU)(((Tglobaloption166013) 18))&31U)))!=0))) goto LA8;
		LOC10 = (NimStringDesc*)0;
		LOC10 = getuserconfigpath_263428_930198375(cfg0);
		readconfigfile_263382_930198375(LOC10);
	}
	LA8: ;
	{
		if (!(((NI) 0) < (gprojectpath_166206_2607990831 ? gprojectpath_166206_2607990831->Sup.len : 0))) goto LA13;
		pd0 = copyString(gprojectpath_166206_2607990831);
	}
	goto LA11;
	LA13: ;
	{
		pd0 = nosgetCurrentDir();
	}
	LA11: ;
	{
		if (!!(((gglobaloptions_166127_2607990831 &(1U<<((NU)(((Tglobaloption166013) 19))&31U)))!=0))) goto LA18;
		{
			NimStringDesc* dir_263635_930198375;
			dir_263635_930198375 = (NimStringDesc*)0;
			{
				NimStringDesc* current_263652_930198375;
				if (!NIM_FALSE) goto LA23;
				current_263652_930198375 = copyString(pd0);
				{
					NimStringDesc* LOC29;
					if (!NIM_FALSE) goto LA27;
					dir_263635_930198375 = pd0;
					LOC29 = (NimStringDesc*)0;
					LOC29 = HEX2F_124074_2125978480(dir_263635_930198375, cfg0);
					readconfigfile_263382_930198375(LOC29);
				}
				LA27: ;
				{
					while (1) {
						NimStringDesc* LOC37;
						{
							NIM_BOOL LOC34;
							LOC34 = (NIM_BOOL)0;
							LOC34 = nosisRootDir(current_263652_930198375);
							if (!LOC34) goto LA35;
							goto LA30;
						}
						LA35: ;
						current_263652_930198375 = nosparentDir(current_263652_930198375);
						dir_263635_930198375 = current_263652_930198375;
						LOC37 = (NimStringDesc*)0;
						LOC37 = HEX2F_124074_2125978480(dir_263635_930198375, cfg0);
						readconfigfile_263382_930198375(LOC37);
					}
				} LA30: ;
			}
			goto LA21;
			LA23: ;
			{
				{
					NI i_263654_930198375;
					NI HEX3Atmp_263656_930198375;
					NI res_263658_930198375;
					i_263654_930198375 = (NI)0;
					HEX3Atmp_263656_930198375 = (NI)0;
					HEX3Atmp_263656_930198375 = (NI)((pd0 ? pd0->Sup.len : 0) - ((NI) 2));
					res_263658_930198375 = ((NI) 0);
					{
						while (1) {
							if (!(res_263658_930198375 <= HEX3Atmp_263656_930198375)) goto LA41;
							i_263654_930198375 = res_263658_930198375;
							{
								NIM_BOOL LOC44;
								NIM_BOOL LOC46;
								NimStringDesc* LOC50;
								LOC44 = (NIM_BOOL)0;
								LOC44 = (((NU8)(pd0->data[i_263654_930198375])) == ((NU8)(92)) || ((NU8)(pd0->data[i_263654_930198375])) == ((NU8)(47)));
								if (!(LOC44)) goto LA45;
								LOC46 = (NIM_BOOL)0;
								LOC46 = (i_263654_930198375 == ((NI) 0));
								if (LOC46) goto LA47;
								LOC46 = !((((NU8)(pd0->data[(NI)(i_263654_930198375 - ((NI) 1))])) == ((NU8)(92)) || ((NU8)(pd0->data[(NI)(i_263654_930198375 - ((NI) 1))])) == ((NU8)(47))));
								LA47: ;
								LOC44 = LOC46;
								LA45: ;
								if (!LOC44) goto LA48;
								dir_263635_930198375 = copyStrLast(pd0, ((NI) 0), i_263654_930198375);
								LOC50 = (NimStringDesc*)0;
								LOC50 = HEX2F_124074_2125978480(dir_263635_930198375, cfg0);
								readconfigfile_263382_930198375(LOC50);
							}
							LA48: ;
							res_263658_930198375 += ((NI) 1);
						} LA41: ;
					}
				}
				{
					NimStringDesc* LOC55;
					if (!NIM_FALSE) goto LA53;
					dir_263635_930198375 = pd0;
					LOC55 = (NimStringDesc*)0;
					LOC55 = HEX2F_124074_2125978480(dir_263635_930198375, cfg0);
					readconfigfile_263382_930198375(LOC55);
				}
				LA53: ;
			}
			LA21: ;
		}
	}
	LA18: ;
	{
		NimStringDesc* LOC60;
		if (!!(((gglobaloptions_166127_2607990831 &(1U<<((NU)(((Tglobaloption166013) 17))&31U)))!=0))) goto LA58;
		LOC60 = (NimStringDesc*)0;
		LOC60 = HEX2F_124074_2125978480(pd0, cfg0);
		readconfigfile_263382_930198375(LOC60);
		{
			NimStringDesc* projectconfig0;
			if (!!(((gprojectname_166205_2607990831 ? gprojectname_166205_2607990831->Sup.len : 0) == ((NI) 0)))) goto LA63;
			projectconfig0 = noschangeFileExt(gprojectfull_166207_2607990831, ((NimStringDesc*) &TMP2229));
			{
				NIM_BOOL LOC67;
				LOC67 = (NIM_BOOL)0;
				LOC67 = fileexists_129002_2125978480(projectconfig0);
				if (!!(LOC67)) goto LA68;
				projectconfig0 = noschangeFileExt(gprojectfull_166207_2607990831, ((NimStringDesc*) &TMP2230));
			}
			LA68: ;
			{
				NIM_BOOL LOC72;
				LOC72 = (NIM_BOOL)0;
				LOC72 = fileexists_129002_2125978480(projectconfig0);
				if (!!(LOC72)) goto LA73;
				projectconfig0 = noschangeFileExt(gprojectfull_166207_2607990831, ((NimStringDesc*) &TMP2231));
				{
					NIM_BOOL LOC77;
					LOC77 = (NIM_BOOL)0;
					LOC77 = fileexists_129002_2125978480(projectconfig0);
					if (!LOC77) goto LA78;
					rawmessage_190612_155036129(((Tmsgkind187002) 241), projectconfig0);
				}
				LA78: ;
			}
			LA73: ;
			readconfigfile_263382_930198375(projectconfig0);
		}
		LA63: ;
	}
	LA58: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimconfInit000)(void) {
nimRegisterGlobalMarker(TMP884);
	if (condstack_263129_930198375) nimGCunrefNoCycle(condstack_263129_930198375);
	condstack_263129_930198375 = (TY263112*) newSeqRC1((&NTI263112), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimconfDatInit000)(void) {
NTI263112.size = sizeof(TY263112*);
NTI263112.kind = 24;
NTI263112.base = (&NTI130);
NTI263112.flags = 2;
NTI263112.marker = TMP883;
}

