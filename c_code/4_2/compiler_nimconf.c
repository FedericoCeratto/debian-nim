/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct TY261112 TY261112;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47905 Cell47905;
typedef struct Cellseq47921 Cellseq47921;
typedef struct Gcheap50418 Gcheap50418;
typedef struct Gcstack50416 Gcstack50416;
typedef struct Memregion30086 Memregion30086;
typedef struct Smallchunk30040 Smallchunk30040;
typedef struct Llchunk30080 Llchunk30080;
typedef struct Bigchunk30042 Bigchunk30042;
typedef struct Intset30014 Intset30014;
typedef struct Trunk30010 Trunk30010;
typedef struct Avlnode30084 Avlnode30084;
typedef struct Gcstat50414 Gcstat50414;
typedef struct Cellset47917 Cellset47917;
typedef struct Pagedesc47913 Pagedesc47913;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tlexer256174 Tlexer256174;
typedef struct Tbaselexer254015 Tbaselexer254015;
typedef struct TNimObject TNimObject;
typedef struct Tllstream253204 Tllstream253204;
typedef struct Tlineinfo185336 Tlineinfo185336;
typedef struct Ttoken256170 Ttoken256170;
typedef struct Tident193012 Tident193012;
typedef struct Tidobj193006 Tidobj193006;
typedef struct Stringtableobj146209 Stringtableobj146209;
typedef struct Basechunk30038 Basechunk30038;
typedef struct Freecell30030 Freecell30030;
typedef struct Keyvaluepairseq146207 Keyvaluepairseq146207;
typedef struct Keyvaluepair146205 Keyvaluepair146205;
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
typedef N_NIMCALL_PTR(void, Globalmarkerproc56402) (void);
struct  Cell47905  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47921  {
NI len;
NI cap;
Cell47905** d;
};
typedef Smallchunk30040* TY30101[512];
typedef Trunk30010* Trunkbuckets30012[256];
struct  Intset30014  {
Trunkbuckets30012 data;
};
struct  Memregion30086  {
NI minlargeobj;
NI maxlargeobj;
TY30101 freesmallchunks;
Llchunk30080* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30042* freechunkslist;
Intset30014 chunkstarts;
Avlnode30084* root;
Avlnode30084* deleted;
Avlnode30084* last;
Avlnode30084* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47917  {
NI counter;
NI max;
Pagedesc47913* head;
Pagedesc47913** data;
};
struct  Gcheap50418  {
Gcstack50416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47921 zct;
Cellseq47921 decstack;
Cellseq47921 tempstack;
NI recgclock;
Memregion30086 region;
Gcstat50414 stat;
Cellset47917 marked;
Cellseq47921 additionalroots;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU32 Tglobaloption163013Set;
typedef NU8 Tglobaloption163013;
struct  TNimObject  {
TNimType* m_type;
};
struct  Tbaselexer254015  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream253204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
typedef NU16 Tmsgkind185002;
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo185336 info0, Tmsgkind185002 msg0, NimStringDesc* arg0, void* ClEnv);
void* ClEnv;
} Terrorhandler256172;
struct  Tlexer256174  {
  Tbaselexer254015 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler256172 errorhandler;
};
typedef NU8 Ttoktype256016;
typedef NU8 Tnumericalbase256168;
struct  Ttoken256170  {
Ttoktype256016 toktype;
NI indent;
Tident193012* ident;
NI64 inumber;
NF fnumber;
Tnumericalbase256168 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
typedef NU8 Filemode12409;
struct  Tidobj193006  {
  TNimObject Sup;
NI id;
};
struct  Tident193012  {
  Tidobj193006 Sup;
NimStringDesc* s;
Tident193012* next;
NI h;
};
typedef NU16 Tspecialword247004;
typedef NU8 Tjumpdest261148;
typedef NU8 Msgflag186444Set;
typedef NU8 Formatflag146300Set;
struct  Tlineinfo185336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU8 Tcmdlinepass251008;
typedef NimStringDesc* TY187140[3];
struct  Gcstack50416  {
Gcstack50416* prev;
Gcstack50416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30038  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30040  {
  Basechunk30038 Sup;
Smallchunk30040* next;
Smallchunk30040* prev;
Freecell30030* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30080  {
NI size;
NI acc;
Llchunk30080* next;
};
struct  Bigchunk30042  {
  Basechunk30038 Sup;
Bigchunk30042* next;
Bigchunk30042* prev;
NI align;
NF data;
};
typedef NI TY30019[8];
struct  Trunk30010  {
Trunk30010* next;
NI key;
TY30019 bits;
};
typedef Avlnode30084* TY30091[2];
struct  Avlnode30084  {
TY30091 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47913  {
Pagedesc47913* next;
NI key;
TY30019 bits;
};
typedef NU8 Tllstreamkind253202;
struct  Tllstream253204  {
  TNimObject Sup;
Tllstreamkind253202 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
typedef NU8 Stringtablemode146203;
struct  Stringtableobj146209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq146207* data;
Stringtablemode146203 mode;
};
struct  Freecell30030  {
Freecell30030* next;
NI zerofield;
};
struct Keyvaluepair146205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct TY261112 {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq146207 {
  TGenericSeq Sup;
  Keyvaluepair146205 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP871)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP872)();
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56402 markerproc0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(void, setdefaultlibpath_163304_2607990831)(void);
N_NIMCALL(void, readconfigfile_261382_930198375)(NimStringDesc* filename0);
N_NIMCALL(Tllstream253204*, llstreamopen_253242_597494479)(NimStringDesc* filename0, Filemode12409 mode0);
N_NIMCALL(void, inittoken_256317_689113469)(Ttoken256170* L0);
N_NIMCALL(void, openlexer_256340_689113469)(Tlexer256174* lex0, NimStringDesc* filename0, Tllstream253204* inputstream0);
N_NIMCALL(void, conftok_261275_930198375)(Tlexer256174* L0, Ttoken256170* tok0);
N_NIMCALL(void, ppgettok_261003_930198375)(Tlexer256174* L0, Ttoken256170* tok0);
N_NIMCALL(void, rawgettok_259824_689113469)(Tlexer256174* L0, Ttoken256170* tok0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(void, parsedirective_261246_930198375)(Tlexer256174* L0, Ttoken256170* tok0);
N_NIMCALL(Tspecialword247004, whichkeyword_247364_1391470768)(Tident193012* id0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
N_NIMCALL(NIM_BOOL, evalppif_261096_930198375)(Tlexer256174* L0, Ttoken256170* tok0);
N_NIMCALL(NIM_BOOL, parseexpr_261021_930198375)(Tlexer256174* L0, Ttoken256170* tok0);
N_NIMCALL(NIM_BOOL, parseandexpr_261061_930198375)(Tlexer256174* L0, Ttoken256170* tok0);
N_NIMCALL(NIM_BOOL, parseatom_261027_930198375)(Tlexer256174* L0, Ttoken256170* tok0);
N_NIMCALL(void, lexmessage_256381_689113469)(Tlexer256174* L0, Tmsgkind185002 msg0, NimStringDesc* arg0);
N_NIMCALL(NIM_BOOL, isdefined_194140_1967573533)(Tident193012* symbol0);
N_NIMCALL(void, jumptodirective_261151_930198375)(Tlexer256174* L0, Ttoken256170* tok0, Tjumpdest261148 dest0);
N_NIMCALL(void, doelse_261158_930198375)(Tlexer256174* L0, Ttoken256170* tok0);
N_NIMCALL(void, doelif_261173_930198375)(Tlexer256174* L0, Ttoken256170* tok0);
N_NIMCALL(void, doend_261131_930198375)(Tlexer256174* L0, Ttoken256170* tok0);
N_NIMCALL(void, msgwriteln_186450_155036129)(NimStringDesc* s0, Msgflag186444Set flags0);
N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f0, Stringtableobj146209* t0, Formatflag146300Set flags0);
N_NIMCALL(NimStringDesc*, toktostr_256292_689113469)(Ttoken256170* tok0);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s0);
N_NIMCALL(void, putenv_132038_2125978480)(NimStringDesc* key0, NimStringDesc* val0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, getenv_132025_2125978480)(NimStringDesc* key0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(void, parseassignment_261319_930198375)(Tlexer256174* L0, Ttoken256170* tok0);
N_NIMCALL(Tident193012*, getident_193441_791273810)(NimStringDesc* identifier0);
static N_INLINE(Tlineinfo185336, getlineinfo_256206_689113469)(Tlexer256174* L0, Ttoken256170* tok0);
N_NIMCALL(Tlineinfo185336, newlineinfo_186023_155036129)(NI32 fileinfoidx0, NI line0, NI col0);
N_NIMCALL(void, checksymbol_261294_930198375)(Tlexer256174* L0, Ttoken256170* tok0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(void, processswitch_251016_2004575671)(NimStringDesc* switch_251018_2004575671, NimStringDesc* arg0, Tcmdlinepass251008 pass0, Tlineinfo185336 info0);
N_NIMCALL(void, closelexer_256346_689113469)(Tlexer256174* lex0);
N_NIMCALL(void, rawmessage_188612_155036129)(Tmsgkind185002 msg0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, getsystemconfigpath_261434_930198375)(NimStringDesc* filename0);
N_NIMCALL(NimStringDesc*, getprefixdir_163301_2607990831)(void);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts0, NI parts0Len0);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename0);
N_NIMCALL(NimStringDesc*, getuserconfigpath_261428_930198375)(NimStringDesc* filename0);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head0, NimStringDesc* tail0);
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, HEX2F_124665_2125978480)(NimStringDesc* head0, NimStringDesc* tail0);
N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path0);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_79610_1689653243, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename0, NimStringDesc* ext0);
static N_INLINE(NIM_BOOL, fileexists_128004_2125978480)(NimStringDesc* filename0);
STRING_LITERAL(TMP2201, "@", 1);
STRING_LITERAL(TMP2202, "\')\'", 3);
STRING_LITERAL(TMP2203, "\':\'", 3);
STRING_LITERAL(TMP2204, "@if", 3);
STRING_LITERAL(TMP2205, "@end", 4);
STRING_LITERAL(TMP2207, "putenv", 6);
STRING_LITERAL(TMP2208, "prependenv", 10);
STRING_LITERAL(TMP2209, "appendenv", 9);
STRING_LITERAL(TMP2210, "-", 1);
STRING_LITERAL(TMP2211, "--", 2);
STRING_LITERAL(TMP2212, "", 0);
STRING_LITERAL(TMP2213, "\']\'", 3);
STRING_LITERAL(TMP2214, "%=", 2);
STRING_LITERAL(TMP2215, "&", 1);
STRING_LITERAL(TMP2216, "config", 6);
STRING_LITERAL(TMP2217, "etc", 3);
STRING_LITERAL(TMP2218, "/etc/", 5);
STRING_LITERAL(TMP2220, "nimcfg", 6);
STRING_LITERAL(TMP2221, "nim.cfg", 7);
STRING_LITERAL(TMP2222, "nimrod.cfg", 10);
TY261112* condstack_261129_930198375;
extern TNimType NTI130; /* bool */
TNimType NTI261112; /* seq[bool] */
extern Gcheap50418 gch_50458_1689653243;
extern Tglobaloption163013Set gglobaloptions_163127_2607990831;
extern TNimType NTI256174; /* TLexer */
extern Stringtableobj146209* gconfigvars_163201_2607990831;
extern NimStringDesc* gprojectpath_163206_2607990831;
extern NimStringDesc* gprojectname_163205_2607990831;
extern NimStringDesc* gprojectfull_163207_2607990831;
N_NIMCALL(void, TMP871)(void* p, NI op) {
	TY261112* a;
	NI LOC1;
	a = (TY261112*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP872)() {
	nimGCvisit((void*)condstack_261129_930198375, 0);
}

static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47905* result0;
	result0 = (Cell47905*)0;
	result0 = ((Cell47905*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47905))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0) {
	addzct_52017_1689653243((&gch_50458_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47905* c0;
	c0 = usrtocell_52040_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(void, ppgettok_261003_930198375)(Tlexer256174* L0, Ttoken256170* tok0) {
	rawgettok_259824_689113469(L0, tok0);
	{
		while (1) {
			if (!((*tok0).toktype == ((Ttoktype256016) 113))) goto LA2;
			rawgettok_259824_689113469(L0, tok0);
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

N_NIMCALL(NIM_BOOL, parseatom_261027_930198375)(Tlexer256174* L0, Ttoken256170* tok0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	{
		if (!((*tok0).toktype == ((Ttoktype256016) 93))) goto LA3;
		ppgettok_261003_930198375(L0, tok0);
		result0 = parseexpr_261021_930198375(L0, tok0);
		{
			if (!((*tok0).toktype == ((Ttoktype256016) 94))) goto LA7;
			ppgettok_261003_930198375(L0, tok0);
		}
		goto LA5;
		LA7: ;
		{
			lexmessage_256381_689113469((&(*L0)), ((Tmsgkind185002) 24), ((NimStringDesc*) &TMP2202));
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC13;
		if (!((*(*tok0).ident).Sup.id == ((NI) 45))) goto LA11;
		ppgettok_261003_930198375(L0, tok0);
		LOC13 = (NIM_BOOL)0;
		LOC13 = parseatom_261027_930198375(L0, tok0);
		result0 = !(LOC13);
	}
	goto LA1;
	LA11: ;
	{
		result0 = isdefined_194140_1967573533((*tok0).ident);
		ppgettok_261003_930198375(L0, tok0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, parseandexpr_261061_930198375)(Tlexer256174* L0, Ttoken256170* tok0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = parseatom_261027_930198375(L0, tok0);
	{
		while (1) {
			NIM_BOOL b0;
			NIM_BOOL LOC3;
			if (!((*(*tok0).ident).Sup.id == ((NI) 2))) goto LA2;
			ppgettok_261003_930198375(L0, tok0);
			b0 = parseatom_261027_930198375(L0, tok0);
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

N_NIMCALL(NIM_BOOL, parseexpr_261021_930198375)(Tlexer256174* L0, Ttoken256170* tok0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = parseandexpr_261061_930198375(L0, tok0);
	{
		while (1) {
			NIM_BOOL b0;
			NIM_BOOL LOC3;
			if (!((*(*tok0).ident).Sup.id == ((NI) 49))) goto LA2;
			ppgettok_261003_930198375(L0, tok0);
			b0 = parseandexpr_261061_930198375(L0, tok0);
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

N_NIMCALL(NIM_BOOL, evalppif_261096_930198375)(Tlexer256174* L0, Ttoken256170* tok0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	ppgettok_261003_930198375(L0, tok0);
	result0 = parseexpr_261021_930198375(L0, tok0);
	{
		if (!((*tok0).toktype == ((Ttoktype256016) 107))) goto LA3;
		ppgettok_261003_930198375(L0, tok0);
	}
	goto LA1;
	LA3: ;
	{
		lexmessage_256381_689113469((&(*L0)), ((Tmsgkind185002) 24), ((NimStringDesc*) &TMP2203));
	}
	LA1: ;
	return result0;
}

N_NIMCALL(void, doelse_261158_930198375)(Tlexer256174* L0, Ttoken256170* tok0) {
	{
		if (!((condstack_261129_930198375 ? (condstack_261129_930198375->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_256381_689113469((&(*L0)), ((Tmsgkind185002) 24), ((NimStringDesc*) &TMP2204));
	}
	LA3: ;
	ppgettok_261003_930198375(L0, tok0);
	{
		if (!((*tok0).toktype == ((Ttoktype256016) 107))) goto LA7;
		ppgettok_261003_930198375(L0, tok0);
	}
	LA7: ;
	{
		if (!condstack_261129_930198375->data[(condstack_261129_930198375 ? (condstack_261129_930198375->Sup.len-1) : -1)]) goto LA11;
		jumptodirective_261151_930198375(L0, tok0, ((Tjumpdest261148) 0));
	}
	LA11: ;
}

N_NIMCALL(void, doelif_261173_930198375)(Tlexer256174* L0, Ttoken256170* tok0) {
	NIM_BOOL res0;
	{
		if (!((condstack_261129_930198375 ? (condstack_261129_930198375->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_256381_689113469((&(*L0)), ((Tmsgkind185002) 24), ((NimStringDesc*) &TMP2204));
	}
	LA3: ;
	res0 = evalppif_261096_930198375(L0, tok0);
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = condstack_261129_930198375->data[(condstack_261129_930198375 ? (condstack_261129_930198375->Sup.len-1) : -1)];
		if (LOC7) goto LA8;
		LOC7 = !(res0);
		LA8: ;
		if (!LOC7) goto LA9;
		jumptodirective_261151_930198375(L0, tok0, ((Tjumpdest261148) 1));
	}
	goto LA5;
	LA9: ;
	{
		condstack_261129_930198375->data[(condstack_261129_930198375 ? (condstack_261129_930198375->Sup.len-1) : -1)] = NIM_TRUE;
	}
	LA5: ;
}

N_NIMCALL(void, doend_261131_930198375)(Tlexer256174* L0, Ttoken256170* tok0) {
	{
		if (!((condstack_261129_930198375 ? (condstack_261129_930198375->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_256381_689113469((&(*L0)), ((Tmsgkind185002) 24), ((NimStringDesc*) &TMP2204));
	}
	LA3: ;
	ppgettok_261003_930198375(L0, tok0);
	condstack_261129_930198375 = (TY261112*) setLengthSeq(&(condstack_261129_930198375)->Sup, sizeof(NIM_BOOL), ((NI) ((condstack_261129_930198375 ? (condstack_261129_930198375->Sup.len-1) : -1))));
}

N_NIMCALL(void, jumptodirective_261151_930198375)(Tlexer256174* L0, Ttoken256170* tok0, Tjumpdest261148 dest0) {
	NI nestedifs0;
	nestedifs0 = ((NI) 0);
	{
		while (1) {
			{
				NIM_BOOL LOC5;
				Tspecialword247004 LOC9;
				LOC5 = (NIM_BOOL)0;
				LOC5 = !(((*tok0).ident == NIM_NIL));
				if (!(LOC5)) goto LA6;
				LOC5 = eqStrings((*(*tok0).ident).s, ((NimStringDesc*) &TMP2201));
				LA6: ;
				if (!LOC5) goto LA7;
				ppgettok_261003_930198375(L0, tok0);
				LOC9 = (Tspecialword247004)0;
				LOC9 = whichkeyword_247364_1391470768((*tok0).ident);
				switch (LOC9) {
				case ((Tspecialword247004) 31):
				{
					nestedifs0 += ((NI) 1);
				}
				break;
				case ((Tspecialword247004) 21):
				{
					{
						NIM_BOOL LOC14;
						LOC14 = (NIM_BOOL)0;
						LOC14 = (dest0 == ((Tjumpdest261148) 1));
						if (!(LOC14)) goto LA15;
						LOC14 = (nestedifs0 == ((NI) 0));
						LA15: ;
						if (!LOC14) goto LA16;
						doelse_261158_930198375(L0, tok0);
						goto LA1;
					}
					LA16: ;
				}
				break;
				case ((Tspecialword247004) 20):
				{
					{
						NIM_BOOL LOC21;
						LOC21 = (NIM_BOOL)0;
						LOC21 = (dest0 == ((Tjumpdest261148) 1));
						if (!(LOC21)) goto LA22;
						LOC21 = (nestedifs0 == ((NI) 0));
						LA22: ;
						if (!LOC21) goto LA23;
						doelif_261173_930198375(L0, tok0);
						goto LA1;
					}
					LA23: ;
				}
				break;
				case ((Tspecialword247004) 22):
				{
					{
						if (!(nestedifs0 == ((NI) 0))) goto LA28;
						doend_261131_930198375(L0, tok0);
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
				ppgettok_261003_930198375(L0, tok0);
			}
			goto LA3;
			LA7: ;
			{
				if (!((*tok0).toktype == ((Ttoktype256016) 1))) goto LA36;
				lexmessage_256381_689113469((&(*L0)), ((Tmsgkind185002) 24), ((NimStringDesc*) &TMP2205));
			}
			goto LA3;
			LA36: ;
			{
				ppgettok_261003_930198375(L0, tok0);
			}
			LA3: ;
		}
	} LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(void, parsedirective_261246_930198375)(Tlexer256174* L0, Ttoken256170* tok0) {
	Tspecialword247004 LOC1;
	ppgettok_261003_930198375(L0, tok0);
	LOC1 = (Tspecialword247004)0;
	LOC1 = whichkeyword_247364_1391470768((*tok0).ident);
	switch (LOC1) {
	case ((Tspecialword247004) 31):
	{
		NIM_BOOL res0;
		condstack_261129_930198375 = (TY261112*) setLengthSeq(&(condstack_261129_930198375)->Sup, sizeof(NIM_BOOL), ((NI) ((NI)((condstack_261129_930198375 ? condstack_261129_930198375->Sup.len : 0) + ((NI) 1)))));
		res0 = evalppif_261096_930198375(L0, tok0);
		condstack_261129_930198375->data[(condstack_261129_930198375 ? (condstack_261129_930198375->Sup.len-1) : -1)] = res0;
		{
			if (!!(res0)) goto LA5;
			jumptodirective_261151_930198375(L0, tok0, ((Tjumpdest261148) 1));
		}
		LA5: ;
	}
	break;
	case ((Tspecialword247004) 20):
	{
		doelif_261173_930198375(L0, tok0);
	}
	break;
	case ((Tspecialword247004) 21):
	{
		doelse_261158_930198375(L0, tok0);
	}
	break;
	case ((Tspecialword247004) 22):
	{
		doend_261131_930198375(L0, tok0);
	}
	break;
	case ((Tspecialword247004) 183):
	{
		NimStringDesc* LOC11;
		NimStringDesc* LOC12;
		ppgettok_261003_930198375(L0, tok0);
		LOC11 = (NimStringDesc*)0;
		LOC11 = toktostr_256292_689113469((&(*tok0)));
		LOC12 = (NimStringDesc*)0;
		LOC12 = nstFormat(LOC11, gconfigvars_163201_2607990831, 5);
		msgwriteln_186450_155036129(LOC12, 0);
		ppgettok_261003_930198375(L0, tok0);
	}
	break;
	default:
	{
		NimStringDesc* LOC14;
		LOC14 = (NimStringDesc*)0;
		LOC14 = nsuNormalize((*(*tok0).ident).s);
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP2207))) goto LA15;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP2208))) goto LA16;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP2209))) goto LA17;
		goto LA18;
		LA15: ;
		{
			NimStringDesc* key0;
			NimStringDesc* LOC21;
			ppgettok_261003_930198375(L0, tok0);
			key0 = toktostr_256292_689113469((&(*tok0)));
			ppgettok_261003_930198375(L0, tok0);
			LOC21 = (NimStringDesc*)0;
			LOC21 = toktostr_256292_689113469((&(*tok0)));
			putenv_132038_2125978480(key0, LOC21);
			ppgettok_261003_930198375(L0, tok0);
		}
		goto LA19;
		LA16: ;
		{
			NimStringDesc* key0;
			NimStringDesc* LOC23;
			NimStringDesc* LOC24;
			NimStringDesc* LOC25;
			ppgettok_261003_930198375(L0, tok0);
			key0 = toktostr_256292_689113469((&(*tok0)));
			ppgettok_261003_930198375(L0, tok0);
			LOC23 = (NimStringDesc*)0;
			LOC24 = (NimStringDesc*)0;
			LOC24 = toktostr_256292_689113469((&(*tok0)));
			LOC25 = (NimStringDesc*)0;
			LOC25 = getenv_132025_2125978480(key0);
			LOC23 = rawNewString(LOC24->Sup.len + LOC25->Sup.len + 0);
appendString(LOC23, LOC24);
appendString(LOC23, LOC25);
			putenv_132038_2125978480(key0, LOC23);
			ppgettok_261003_930198375(L0, tok0);
		}
		goto LA19;
		LA17: ;
		{
			NimStringDesc* key0;
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			NimStringDesc* LOC29;
			ppgettok_261003_930198375(L0, tok0);
			key0 = toktostr_256292_689113469((&(*tok0)));
			ppgettok_261003_930198375(L0, tok0);
			LOC27 = (NimStringDesc*)0;
			LOC28 = (NimStringDesc*)0;
			LOC28 = getenv_132025_2125978480(key0);
			LOC29 = (NimStringDesc*)0;
			LOC29 = toktostr_256292_689113469((&(*tok0)));
			LOC27 = rawNewString(LOC28->Sup.len + LOC29->Sup.len + 0);
appendString(LOC27, LOC28);
appendString(LOC27, LOC29);
			putenv_132038_2125978480(key0, LOC27);
			ppgettok_261003_930198375(L0, tok0);
		}
		goto LA19;
		LA18: ;
		{
			NimStringDesc* LOC31;
			LOC31 = (NimStringDesc*)0;
			LOC31 = toktostr_256292_689113469((&(*tok0)));
			lexmessage_256381_689113469((&(*L0)), ((Tmsgkind185002) 31), LOC31);
		}
		LA19: ;
	}
	break;
	}
}

N_NIMCALL(void, conftok_261275_930198375)(Tlexer256174* L0, Ttoken256170* tok0) {
	ppgettok_261003_930198375(L0, tok0);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = (NIM_BOOL)0;
			LOC3 = !(((*tok0).ident == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = eqStrings((*(*tok0).ident).s, ((NimStringDesc*) &TMP2201));
			LA4: ;
			if (!LOC3) goto LA2;
			parsedirective_261246_930198375(L0, tok0);
		} LA2: ;
	}
}

static N_INLINE(Tlineinfo185336, getlineinfo_256206_689113469)(Tlexer256174* L0, Ttoken256170* tok0) {
	Tlineinfo185336 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0 = newlineinfo_186023_155036129((*L0).fileidx, (*tok0).line, (*tok0).col);
	return result0;
}

N_NIMCALL(void, checksymbol_261294_930198375)(Tlexer256174* L0, Ttoken256170* tok0) {
	{
		NimStringDesc* LOC5;
		if (!!(((*tok0).toktype >= ((Ttoktype256016) 2) && (*tok0).toktype <= ((Ttoktype256016) 72) || (*tok0).toktype >= ((Ttoktype256016) 87) && (*tok0).toktype <= ((Ttoktype256016) 89)))) goto LA3;
		LOC5 = (NimStringDesc*)0;
		LOC5 = toktostr_256292_689113469(tok0);
		lexmessage_256381_689113469(L0, ((Tmsgkind185002) 20), LOC5);
	}
	LA3: ;
}

N_NIMCALL(void, parseassignment_261319_930198375)(Tlexer256174* L0, Ttoken256170* tok0) {
	Tlineinfo185336 info0;
	NimStringDesc* s0;
	NimStringDesc* val0;
	NIM_BOOL percent0;
	Tident193012* LOC22;
	{
		NIM_BOOL LOC3;
		Tident193012* LOC4;
		Tident193012* LOC6;
		LOC3 = (NIM_BOOL)0;
		LOC4 = (Tident193012*)0;
		LOC4 = getident_193441_791273810(((NimStringDesc*) &TMP2210));
		LOC3 = ((*(*tok0).ident).Sup.id == (*LOC4).Sup.id);
		if (LOC3) goto LA5;
		LOC6 = (Tident193012*)0;
		LOC6 = getident_193441_791273810(((NimStringDesc*) &TMP2211));
		LOC3 = ((*(*tok0).ident).Sup.id == (*LOC6).Sup.id);
		LA5: ;
		if (!LOC3) goto LA7;
		conftok_261275_930198375(L0, tok0);
	}
	LA7: ;
	info0 = getlineinfo_256206_689113469((&(*L0)), (&(*tok0)));
	checksymbol_261294_930198375((&(*L0)), (&(*tok0)));
	s0 = toktostr_256292_689113469((&(*tok0)));
	conftok_261275_930198375(L0, tok0);
	val0 = copyString(((NimStringDesc*) &TMP2212));
	{
		while (1) {
			NimStringDesc* LOC11;
			if (!((*tok0).toktype == ((Ttoktype256016) 110))) goto LA10;
			s0 = addChar(s0, 46);
			conftok_261275_930198375(L0, tok0);
			checksymbol_261294_930198375((&(*L0)), (&(*tok0)));
			LOC11 = (NimStringDesc*)0;
			LOC11 = toktostr_256292_689113469((&(*tok0)));
			s0 = resizeString(s0, LOC11->Sup.len + 0);
appendString(s0, LOC11);
			conftok_261275_930198375(L0, tok0);
		} LA10: ;
	}
	{
		NimStringDesc* LOC16;
		if (!((*tok0).toktype == ((Ttoktype256016) 95))) goto LA14;
		conftok_261275_930198375(L0, tok0);
		checksymbol_261294_930198375((&(*L0)), (&(*tok0)));
		LOC16 = (NimStringDesc*)0;
		LOC16 = toktostr_256292_689113469((&(*tok0)));
		val0 = resizeString(val0, LOC16->Sup.len + 0);
appendString(val0, LOC16);
		conftok_261275_930198375(L0, tok0);
		{
			if (!((*tok0).toktype == ((Ttoktype256016) 96))) goto LA19;
			conftok_261275_930198375(L0, tok0);
		}
		goto LA17;
		LA19: ;
		{
			lexmessage_256381_689113469((&(*L0)), ((Tmsgkind185002) 24), ((NimStringDesc*) &TMP2213));
		}
		LA17: ;
		val0 = addChar(val0, 93);
	}
	LA14: ;
	LOC22 = (Tident193012*)0;
	LOC22 = getident_193441_791273810(((NimStringDesc*) &TMP2214));
	percent0 = ((*(*tok0).ident).Sup.id == (*LOC22).Sup.id);
	{
		NIM_BOOL LOC25;
		NimStringDesc* LOC33;
		LOC25 = (NIM_BOOL)0;
		LOC25 = ((*tok0).toktype == ((Ttoktype256016) 107) || (*tok0).toktype == ((Ttoktype256016) 109));
		if (LOC25) goto LA26;
		LOC25 = percent0;
		LA26: ;
		if (!LOC25) goto LA27;
		{
			if (!(((NI) 0) < (val0 ? val0->Sup.len : 0))) goto LA31;
			val0 = addChar(val0, 58);
		}
		LA31: ;
		conftok_261275_930198375(L0, tok0);
		checksymbol_261294_930198375((&(*L0)), (&(*tok0)));
		LOC33 = (NimStringDesc*)0;
		LOC33 = toktostr_256292_689113469((&(*tok0)));
		val0 = resizeString(val0, LOC33->Sup.len + 0);
appendString(val0, LOC33);
		conftok_261275_930198375(L0, tok0);
		{
			while (1) {
				NIM_BOOL LOC36;
				Tident193012* LOC38;
				NimStringDesc* LOC39;
				LOC36 = (NIM_BOOL)0;
				LOC36 = !(((*tok0).ident == NIM_NIL));
				if (!(LOC36)) goto LA37;
				LOC38 = (Tident193012*)0;
				LOC38 = getident_193441_791273810(((NimStringDesc*) &TMP2215));
				LOC36 = ((*(*tok0).ident).Sup.id == (*LOC38).Sup.id);
				LA37: ;
				if (!LOC36) goto LA35;
				conftok_261275_930198375(L0, tok0);
				checksymbol_261294_930198375((&(*L0)), (&(*tok0)));
				LOC39 = (NimStringDesc*)0;
				LOC39 = toktostr_256292_689113469((&(*tok0)));
				val0 = resizeString(val0, LOC39->Sup.len + 0);
appendString(val0, LOC39);
				conftok_261275_930198375(L0, tok0);
			} LA35: ;
		}
	}
	LA27: ;
	{
		NimStringDesc* LOC44;
		if (!percent0) goto LA42;
		LOC44 = (NimStringDesc*)0;
		LOC44 = nstFormat(val0, gconfigvars_163201_2607990831, 3);
		processswitch_251016_2004575671(s0, LOC44, ((Tcmdlinepass251008) 2), info0);
	}
	goto LA40;
	LA42: ;
	{
		processswitch_251016_2004575671(s0, val0, ((Tcmdlinepass251008) 2), info0);
	}
	LA40: ;
}

N_NIMCALL(void, readconfigfile_261382_930198375)(NimStringDesc* filename0) {
	Tlexer256174 L0;
	Ttoken256170 tok0;
	Tllstream253204* stream0;
	memset((void*)(&L0), 0, sizeof(L0));
	L0.Sup.Sup.m_type = (&NTI256174);
	memset((void*)(&tok0), 0, sizeof(tok0));
	stream0 = (Tllstream253204*)0;
	stream0 = llstreamopen_253242_597494479(filename0, ((Filemode12409) 0));
	{
		if (!!((stream0 == NIM_NIL))) goto LA3;
		inittoken_256317_689113469((&tok0));
		openlexer_256340_689113469((&L0), filename0, stream0);
		tok0.toktype = ((Ttoktype256016) 1);
		conftok_261275_930198375((&L0), (&tok0));
		{
			while (1) {
				if (!!((tok0.toktype == ((Ttoktype256016) 1)))) goto LA6;
				parseassignment_261319_930198375((&L0), (&tok0));
			} LA6: ;
		}
		{
			if (!(((NI) 0) < (condstack_261129_930198375 ? condstack_261129_930198375->Sup.len : 0))) goto LA9;
			lexmessage_256381_689113469((&L0), ((Tmsgkind185002) 24), ((NimStringDesc*) &TMP2205));
		}
		LA9: ;
		closelexer_256346_689113469((&L0));
		rawmessage_188612_155036129(((Tmsgkind185002) 279), filename0);
	}
	LA3: ;
}

N_NIMCALL(NimStringDesc*, getsystemconfigpath_261434_930198375)(NimStringDesc* filename0) {
	NimStringDesc* result0;
	NimStringDesc* p0;
	TY187140 LOC1;
	result0 = (NimStringDesc*)0;
	p0 = getprefixdir_163301_2607990831();
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = copyString(p0);
	LOC1[1] = copyString(((NimStringDesc*) &TMP2216));
	LOC1[2] = copyString(filename0);
	result0 = nosjoinPathOpenArray(LOC1, 3);
	{
		NIM_BOOL LOC4;
		TY187140 LOC7;
		LOC4 = (NIM_BOOL)0;
		LOC4 = nosexistsFile(result0);
		if (!!(LOC4)) goto LA5;
		memset((void*)LOC7, 0, sizeof(LOC7));
		LOC7[0] = copyString(p0);
		LOC7[1] = copyString(((NimStringDesc*) &TMP2217));
		LOC7[2] = copyString(filename0);
		result0 = nosjoinPathOpenArray(LOC7, 3);
	}
	LA5: ;
	{
		NIM_BOOL LOC10;
		NimStringDesc* LOC13;
		LOC10 = (NIM_BOOL)0;
		LOC10 = nosexistsFile(result0);
		if (!!(LOC10)) goto LA11;
		LOC13 = (NimStringDesc*)0;
		LOC13 = rawNewString(filename0->Sup.len + 5);
appendString(LOC13, ((NimStringDesc*) &TMP2218));
appendString(LOC13, filename0);
		result0 = LOC13;
	}
	LA11: ;
	return result0;
}

N_NIMCALL(NimStringDesc*, getuserconfigpath_261428_930198375)(NimStringDesc* filename0) {
	NimStringDesc* result0;
	NimStringDesc* LOC1;
	result0 = (NimStringDesc*)0;
	LOC1 = (NimStringDesc*)0;
	LOC1 = nosgetConfigDir();
	result0 = nosjoinPath(LOC1, filename0);
	return result0;
}

static N_INLINE(NIM_BOOL, fileexists_128004_2125978480)(NimStringDesc* filename0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = nosexistsFile(filename0);
	return result0;
}

N_NIMCALL(void, loadconfigs_261603_930198375)(NimStringDesc* cfg0) {
	NimStringDesc* pd0;
	setdefaultlibpath_163304_2607990831();
	{
		NimStringDesc* LOC5;
		if (!!(((gglobaloptions_163127_2607990831 &(1U<<((NU)(((Tglobaloption163013) 16))&31U)))!=0))) goto LA3;
		LOC5 = (NimStringDesc*)0;
		LOC5 = getsystemconfigpath_261434_930198375(cfg0);
		readconfigfile_261382_930198375(LOC5);
	}
	LA3: ;
	{
		NimStringDesc* LOC10;
		if (!!(((gglobaloptions_163127_2607990831 &(1U<<((NU)(((Tglobaloption163013) 18))&31U)))!=0))) goto LA8;
		LOC10 = (NimStringDesc*)0;
		LOC10 = getuserconfigpath_261428_930198375(cfg0);
		readconfigfile_261382_930198375(LOC10);
	}
	LA8: ;
	{
		if (!(((NI) 0) < (gprojectpath_163206_2607990831 ? gprojectpath_163206_2607990831->Sup.len : 0))) goto LA13;
		pd0 = copyString(gprojectpath_163206_2607990831);
	}
	goto LA11;
	LA13: ;
	{
		pd0 = nosgetCurrentDir();
	}
	LA11: ;
	{
		if (!!(((gglobaloptions_163127_2607990831 &(1U<<((NU)(((Tglobaloption163013) 19))&31U)))!=0))) goto LA18;
		{
			NimStringDesc* dir_261637_930198375;
			dir_261637_930198375 = (NimStringDesc*)0;
			{
				NimStringDesc* current_261654_930198375;
				if (!NIM_FALSE) goto LA23;
				current_261654_930198375 = copyString(pd0);
				{
					NimStringDesc* LOC29;
					if (!NIM_FALSE) goto LA27;
					dir_261637_930198375 = pd0;
					LOC29 = (NimStringDesc*)0;
					LOC29 = HEX2F_124665_2125978480(dir_261637_930198375, cfg0);
					readconfigfile_261382_930198375(LOC29);
				}
				LA27: ;
				{
					while (1) {
						NimStringDesc* LOC37;
						{
							NIM_BOOL LOC34;
							LOC34 = (NIM_BOOL)0;
							LOC34 = nosisRootDir(current_261654_930198375);
							if (!LOC34) goto LA35;
							goto LA30;
						}
						LA35: ;
						current_261654_930198375 = nosparentDir(current_261654_930198375);
						dir_261637_930198375 = current_261654_930198375;
						LOC37 = (NimStringDesc*)0;
						LOC37 = HEX2F_124665_2125978480(dir_261637_930198375, cfg0);
						readconfigfile_261382_930198375(LOC37);
					}
				} LA30: ;
			}
			goto LA21;
			LA23: ;
			{
				{
					NI i_261656_930198375;
					NI HEX3Atmp_261658_930198375;
					NI res_261660_930198375;
					i_261656_930198375 = (NI)0;
					HEX3Atmp_261658_930198375 = (NI)0;
					HEX3Atmp_261658_930198375 = (NI)((pd0 ? pd0->Sup.len : 0) - ((NI) 2));
					res_261660_930198375 = ((NI) 0);
					{
						while (1) {
							if (!(res_261660_930198375 <= HEX3Atmp_261658_930198375)) goto LA41;
							i_261656_930198375 = res_261660_930198375;
							{
								NIM_BOOL LOC44;
								NIM_BOOL LOC46;
								NimStringDesc* LOC50;
								LOC44 = (NIM_BOOL)0;
								LOC44 = (((NU8)(pd0->data[i_261656_930198375])) == ((NU8)(47)) || ((NU8)(pd0->data[i_261656_930198375])) == ((NU8)(47)));
								if (!(LOC44)) goto LA45;
								LOC46 = (NIM_BOOL)0;
								LOC46 = (i_261656_930198375 == ((NI) 0));
								if (LOC46) goto LA47;
								LOC46 = !((((NU8)(pd0->data[(NI)(i_261656_930198375 - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(pd0->data[(NI)(i_261656_930198375 - ((NI) 1))])) == ((NU8)(47))));
								LA47: ;
								LOC44 = LOC46;
								LA45: ;
								if (!LOC44) goto LA48;
								dir_261637_930198375 = copyStrLast(pd0, ((NI) 0), i_261656_930198375);
								LOC50 = (NimStringDesc*)0;
								LOC50 = HEX2F_124665_2125978480(dir_261637_930198375, cfg0);
								readconfigfile_261382_930198375(LOC50);
							}
							LA48: ;
							res_261660_930198375 += ((NI) 1);
						} LA41: ;
					}
				}
				{
					NimStringDesc* LOC55;
					if (!NIM_FALSE) goto LA53;
					dir_261637_930198375 = pd0;
					LOC55 = (NimStringDesc*)0;
					LOC55 = HEX2F_124665_2125978480(dir_261637_930198375, cfg0);
					readconfigfile_261382_930198375(LOC55);
				}
				LA53: ;
			}
			LA21: ;
		}
	}
	LA18: ;
	{
		NimStringDesc* LOC60;
		if (!!(((gglobaloptions_163127_2607990831 &(1U<<((NU)(((Tglobaloption163013) 17))&31U)))!=0))) goto LA58;
		LOC60 = (NimStringDesc*)0;
		LOC60 = HEX2F_124665_2125978480(pd0, cfg0);
		readconfigfile_261382_930198375(LOC60);
		{
			NimStringDesc* projectconfig0;
			if (!!(((gprojectname_163205_2607990831 ? gprojectname_163205_2607990831->Sup.len : 0) == ((NI) 0)))) goto LA63;
			projectconfig0 = noschangeFileExt(gprojectfull_163207_2607990831, ((NimStringDesc*) &TMP2220));
			{
				NIM_BOOL LOC67;
				LOC67 = (NIM_BOOL)0;
				LOC67 = fileexists_128004_2125978480(projectconfig0);
				if (!!(LOC67)) goto LA68;
				projectconfig0 = noschangeFileExt(gprojectfull_163207_2607990831, ((NimStringDesc*) &TMP2221));
			}
			LA68: ;
			{
				NIM_BOOL LOC72;
				LOC72 = (NIM_BOOL)0;
				LOC72 = fileexists_128004_2125978480(projectconfig0);
				if (!!(LOC72)) goto LA73;
				projectconfig0 = noschangeFileExt(gprojectfull_163207_2607990831, ((NimStringDesc*) &TMP2222));
				{
					NIM_BOOL LOC77;
					LOC77 = (NIM_BOOL)0;
					LOC77 = fileexists_128004_2125978480(projectconfig0);
					if (!LOC77) goto LA78;
					rawmessage_188612_155036129(((Tmsgkind185002) 241), projectconfig0);
				}
				LA78: ;
			}
			LA73: ;
			readconfigfile_261382_930198375(projectconfig0);
		}
		LA63: ;
	}
	LA58: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimconfInit000)(void) {
nimRegisterGlobalMarker(TMP872);
	if (condstack_261129_930198375) nimGCunrefNoCycle(condstack_261129_930198375);
	condstack_261129_930198375 = (TY261112*) newSeqRC1((&NTI261112), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimconfDatInit000)(void) {
NTI261112.size = sizeof(TY261112*);
NTI261112.kind = 24;
NTI261112.base = (&NTI130);
NTI261112.flags = 2;
NTI261112.marker = TMP871;
}

