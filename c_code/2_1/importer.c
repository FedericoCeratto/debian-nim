/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode226816 tnode226816;
typedef struct tcontext291021 tcontext291021;
typedef struct intset223056 intset223056;
typedef struct ttrunk223052 ttrunk223052;
typedef struct ttrunkseq223054 ttrunkseq223054;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype226852 ttype226852;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct NimStringDesc NimStringDesc;
typedef struct tsym226846 tsym226846;
typedef struct tident201021 tident201021;
typedef struct tnodeseq226810 tnodeseq226810;
typedef struct tidobj201015 tidobj201015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq226848 ttypeseq226848;
typedef struct tscope226840 tscope226840;
typedef struct TY226947 TY226947;
typedef struct tinstantiation226836 tinstantiation226836;
typedef struct tstrtable226820 tstrtable226820;
typedef struct tsymseq226818 tsymseq226818;
typedef struct tloc226830 tloc226830;
typedef struct trope178009 trope178009;
typedef struct tlib226834 tlib226834;
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
typedef struct tpasscontext287005 tpasscontext287005;
typedef struct tproccon291011 tproccon291011;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tidtable226864 tidtable226864;
typedef struct tidpairseq226862 tidpairseq226862;
typedef struct tidpair226860 tidpair226860;
typedef struct tctx290048 tctx290048;
typedef struct TY291133 TY291133;
typedef struct tinstantiationpair291013 tinstantiationpair291013;
typedef struct ttabiter236119 ttabiter236119;
typedef struct tidentiter236141 tidentiter236141;
typedef struct TY226936 TY226936;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef struct TY290250 TY290250;
typedef struct TY197414 TY197414;
typedef struct pprocHEX3Aobjecttype290230 pprocHEX3Aobjecttype290230;
typedef struct TY290269 TY290269;
typedef struct TY290270 TY290270;
typedef struct vmargs290042 vmargs290042;
typedef struct TY290231 TY290231;
typedef struct tblock290030 tblock290030;
typedef struct TY290211 TY290211;
typedef struct TY290237 TY290237;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  intset223056  {
NI Counter;
NI Max;
ttrunk223052* Head;
ttrunkseq223054* Data;
};
struct  tlineinfo196539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
};
struct  tstrtable226820  {
NI Counter;
tsymseq226818* Data;
};
struct  tloc226830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype226852* T;
trope178009* R;
trope178009* Heaproot;
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
typedef N_NIMCALL_PTR(tsym226846*, TY287064) (tsym226846* m, NI32 fileidx);
struct  tpasscontext287005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tlinkedlist127028  {
tlistentry127022* Head;
tlistentry127022* Tail;
NI Counter;
};
struct  tidpair226860  {
tidobj201015* Key;
TNimObject* Val;
};
struct  tidtable226864  {
NI Counter;
tidpairseq226862* Data;
};
typedef N_NIMCALL_PTR(tnode226816*, TY291064) (tcontext291021* c, tnode226816* n);
typedef N_NIMCALL_PTR(tnode226816*, TY291069) (tcontext291021* c, tnode226816* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode226816*, TY291077) (tcontext291021* c, tnode226816* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode226816*, TY291085) (tcontext291021* c, tnode226816* n);
typedef N_NIMCALL_PTR(tnode226816*, TY291090) (tcontext291021* c, tnode226816* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode226816*, TY291098) (tcontext291021* c, tnode226816* n);
typedef N_NIMCALL_PTR(tnode226816*, TY291103) (tcontext291021* c, tnode226816* n, tnode226816* norig, NU32 filter);
typedef N_NIMCALL_PTR(ttype226852*, TY291110) (tcontext291021* c, tnode226816* n, ttype226852* prev);
typedef struct {
N_NIMCALL_PTR(tnode226816*, ClPrc) (tcontext291021* c, tidtable226864 pt, tnode226816* n, void* ClEnv);
void* ClEnv;
} TY291116;
typedef struct {
N_NIMCALL_PTR(tsym226846*, ClPrc) (tcontext291021* c, tsym226846* fn, tidtable226864 pt, tlineinfo196539 info, void* ClEnv);
void* ClEnv;
} TY291122;
struct  tinstantiationpair291013  {
tsym226846* Genericsym;
tinstantiation226836* Inst;
};
typedef N_NIMCALL_PTR(tsym226846*, TY291138) (tcontext291021* c, tsym226846* dc, ttype226852* t, tlineinfo196539 info);
struct  tcontext291021  {
  tpasscontext287005 Sup;
tsym226846* Module;
tscope226840* Currentscope;
tscope226840* Importtable;
tscope226840* Toplevelscope;
tproccon291011* P;
tsymseq226818* Friendmodules;
NI Instcounter;
intset223056 Ambiguoussymbols;
NI Intypeclass;
NI Ingenericcontext;
NI Inunrolledcontext;
NI Incompilescontext;
NI Ingenericinst;
tsymseq226818* Converters;
tsymseq226818* Patterns;
tlinkedlist127028 Optionstack;
tidtable226864 Symmapping;
tlinkedlist127028 Libs;
TY291064 Semconstexpr;
TY291069 Semexpr;
TY291077 Semtryexpr;
TY291085 Semtryconstexpr;
TY291090 Semoperand;
TY291098 Semconstboolexpr;
TY291103 Semoverloadedcall;
TY291110 Semtypenode;
TY291116 Seminferredlambda;
TY291122 Semgenerateinstance;
intset223056 Includedfiles;
tstrtable226820 Userpragmas;
tctx290048* Evalcontext;
intset223056 Unknownidents;
TY291133* Generics;
NI Lastgenericidx;
NI Hloloopdetector;
NI Inparallelstmt;
TY291138 Instdeepcopy;
};
struct  ttabiter236119  {
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
struct  tscope226840  {
NI Depthlevel;
tstrtable226820 Symbols;
tnodeseq226810* Usingsyms;
tscope226840* Parent;
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
struct  tidentiter236141  {
NI H;
tident201021* Name;
};
typedef NI TY26420[16];
struct  ttrunk223052  {
ttrunk223052* Next;
NI Key;
TY26420 Bits;
};
struct  tinstantiation226836  {
tsym226846* Sym;
ttypeseq226848* Concretetypes;
TY226936* Usedby;
};
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
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
struct  tproccon291011  {
tsym226846* Owner;
tsym226846* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
NI Intrystmt;
tproccon291011* Next;
};
struct  vmargs290042  {
NI Ra;
NI Rb;
NI Rc;
void* Slots;
tnode226816* Currentexception;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (vmargs290042* args, void* ClEnv);
void* ClEnv;
} vmcallback290044;
struct TY290270 {
NimStringDesc* Field0;
vmcallback290044 Field1;
};
struct  tctx290048  {
  tpasscontext287005 Sup;
TY290250* Code;
TY197414* Debug;
tnode226816* Globals;
tnode226816* Constants;
ttypeseq226848* Types;
tnode226816* Currentexceptiona;
tnode226816* Currentexceptionb;
NI Exceptioninstr;
pprocHEX3Aobjecttype290230* Prc;
tsym226846* Module;
tnode226816* Callsite;
NU8 Mode;
NU8 Features;
NIM_BOOL Traceactive;
NI Loopiterations;
tlineinfo196539 Comesfromheuristic;
TY290269* Callbacks;
NimStringDesc* Errorflag;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct  tblock290030  {
tsym226846* Label;
TY290211* Fixups;
};
struct TY290237 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY290237 TY290234[256];
struct  pprocHEX3Aobjecttype290230  {
TY290231* Blocks;
tsym226846* Sym;
TY290234 Slots;
NI Maxslots;
};
struct ttrunkseq223054 {
  TGenericSeq Sup;
  ttrunk223052* data[SEQ_DECL_SIZE];
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
struct TY291133 {
  TGenericSeq Sup;
  tinstantiationpair291013 data[SEQ_DECL_SIZE];
};
struct TY226936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY290250 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY197414 {
  TGenericSeq Sup;
  tlineinfo196539 data[SEQ_DECL_SIZE];
};
struct TY290269 {
  TGenericSeq Sup;
  TY290270 data[SEQ_DECL_SIZE];
};
struct TY290211 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY290231 {
  TGenericSeq Sup;
  tblock290030 data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, sonslen_227249)(tnode226816* n);
N_NIMCALL(tsym226846*, myimportmodule_299991)(tcontext291021* c, tnode226816* n);
N_NIMCALL(NI32, checkmodulename_299237)(tnode226816* n);
N_NIMCALL(NimStringDesc*, getmodulename_299018)(tnode226816* n);
N_NIMCALL(NimStringDesc*, nosunixToNativePath)(NimStringDesc* path, NimStringDesc* drive);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(tident201021*, getident_201472)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
N_NIMCALL(NimStringDesc*, rendertree_251058)(tnode226816* n, NU8 renderflags);
N_NIMCALL(void, localerror_198955)(tlineinfo196539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr, NimStringDesc* a);
N_NIMCALL(NimStringDesc*, findmodule_171366)(NimStringDesc* modulename, NimStringDesc* currentmodule);
N_NIMCALL(NimStringDesc*, tofullpath_198037)(NI32 fileidx);
N_NIMCALL(NI32, fileinfoidx_196747)(NimStringDesc* filename);
N_NIMCALL(tsym226846*, importmoduleas_299892)(tnode226816* n, tsym226846* realmodule);
static N_INLINE(NI, len_227364)(tnode226816* n);
N_NIMCALL(tsym226846*, createmodulealias_230287)(tsym226846* s, tident201021* newident, tlineinfo196539 info);
N_NIMCALL(void, message_198976)(tlineinfo196539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, adddecl_296694)(tcontext291021* c, tsym226846* sym);
N_NIMCALL(void, importallsymbolsexcept_299573)(tcontext291021* c, tsym226846* frommod, intset223056 exceptset);
N_NIMCALL(tsym226846*, inittabiter_236124)(ttabiter236119* ti, tstrtable226820 tab);
N_NIMCALL(void, internalerror_198987)(tlineinfo196539 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_80907, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(NIM_BOOL, empty_224383)(intset223056 s);
N_NIMCALL(NIM_BOOL, contains_223837)(intset223056 s, NI key);
N_NIMCALL(void, rawimportsymbol_299249)(tcontext291021* c, tsym226846* s);
N_NIMCALL(tsym226846*, strtableget_236111)(tstrtable226820 t, tident201021* name);
N_NIMCALL(void, incl_223869)(intset223056* s, NI key);
N_NIMCALL(void, strtableadd_236103)(tstrtable226820* t, tsym226846* n);
N_NIMCALL(tsym226846*, initidentiter_236147)(tidentiter236141* ti, tstrtable226820 tab, tident201021* s);
N_NIMCALL(tsym226846*, nextidentiter_236156)(tidentiter236141* ti, tstrtable226820 tab);
N_NIMCALL(void, addconverter_291635)(tcontext291021* c, tsym226846* conv);
static N_INLINE(NIM_BOOL, haspattern_233803)(tsym226846* s);
static N_INLINE(NIM_BOOL, isroutine_233780)(tsym226846* s);
N_NIMCALL(void, addpattern_291646)(tcontext291021* c, tsym226846* p);
N_NIMCALL(tsym226846*, nextiter_236132)(ttabiter236119* ti, tstrtable226820 tab);
N_NIMCALL(void, checkminsonslen_292426)(tnode226816* n, NI length);
N_NIMCALL(tnode226816*, newsymnode_227132)(tsym226846* sym);
N_NIMCALL(void, initintset_223950)(intset223056* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(tident201021*, considerquotedident_296010)(tnode226816* n);
N_NIMCALL(void, importsymbol_299450)(tcontext291021* c, tnode226816* n, tsym226846* frommod);
N_NIMCALL(void, loadstub_280261)(tsym226846* s);
STRING_LITERAL(TMP3325, "", 0);
STRING_LITERAL(TMP3326, "as", 2);
STRING_LITERAL(TMP3327, " ", 1);
STRING_LITERAL(TMP3328, ".", 1);
STRING_LITERAL(TMP3329, "/", 1);
STRING_LITERAL(TMP3330, "invalid module name: \'$1\'", 25);
STRING_LITERAL(TMP3331, "module alias must be an identifier", 34);
STRING_LITERAL(TMP3332, "A module cannot import itself", 29);
STRING_LITERAL(TMP3333, "importAllSymbols: ", 18);
STRING_LITERAL(TMP3334, "rawImportSymbol", 15);
STRING_LITERAL(TMP3336, "importSymbol: 2", 15);
STRING_LITERAL(TMP3337, "importSymbol: 3", 15);
extern tgcheap47016 gch_47044;
extern TY287064 gimportmodule_287068;
extern TNimType NTI226445; /* TSymKind */

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

static N_INLINE(tcell44935*, usrtocell_48646)(void* usr) {
	tcell44935* result;
	result = 0;
	result = ((tcell44935*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44935))))));
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
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(NimStringDesc*, getmodulename_299018)(tnode226816* n) {
	NimStringDesc* result;
	result = 0;
	switch ((*n).Kind) {
	case ((NU8) 20):
	case ((NU8) 21):
	case ((NU8) 22):
	{
		result = nosunixToNativePath((*n).kindU.S3.Strval, ((NimStringDesc*) &TMP3325));
	}
	break;
	case ((NU8) 2):
	{
		result = copyString((*(*n).kindU.S5.Ident).S);
	}
	break;
	case ((NU8) 3):
	{
		result = copyString((*(*(*n).kindU.S4.Sym).Name).S);
	}
	break;
	case ((NU8) 29):
	{
		NimStringDesc* LOC12;
		{
			NIM_BOOL LOC7;
			tident201021* LOC9;
			LOC7 = 0;
			LOC7 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
			if (!(LOC7)) goto LA8;
			LOC9 = 0;
			LOC9 = getident_201472(((NimStringDesc*) &TMP3326));
			LOC7 = ((*(*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident).Sup.Id == (*LOC9).Sup.Id);
			LA8: ;
			if (!LOC7) goto LA10;
			(*n).Kind = ((NU8) 78);
			asgnRefNoCycle((void**) (&(*n).kindU.S6.Sons->data[0]), (*n).kindU.S6.Sons->data[1]);
			asgnRefNoCycle((void**) (&(*n).kindU.S6.Sons->data[1]), (*n).kindU.S6.Sons->data[2]);
			(*n).kindU.S6.Sons = (tnodeseq226810*) setLengthSeq(&((*n).kindU.S6.Sons)->Sup, sizeof(tnode226816*), 2);
			result = getmodulename_299018((*n).kindU.S6.Sons->data[0]);
			goto BeforeRet;
		}
		LA10: ;
		LOC12 = 0;
		LOC12 = rendertree_251058(n, 4);
		result = nsuReplaceStr(LOC12, ((NimStringDesc*) &TMP3327), ((NimStringDesc*) &TMP3325));
	}
	break;
	case ((NU8) 45):
	{
		NimStringDesc* LOC14;
		LOC14 = 0;
		LOC14 = rendertree_251058(n, 4);
		result = nsuReplaceStr(LOC14, ((NimStringDesc*) &TMP3328), ((NimStringDesc*) &TMP3329));
	}
	break;
	case ((NU8) 78):
	{
		result = getmodulename_299018((*n).kindU.S6.Sons->data[0]);
	}
	break;
	default:
	{
		NimStringDesc* LOC17;
		NimStringDesc* LOC18;
		LOC17 = 0;
		LOC17 = rendertree_251058(n, 0);
		LOC18 = 0;
		LOC18 = nsuFormatSingleElem(((NimStringDesc*) &TMP3330), LOC17);
		localerror_198955((*n).Info, ((NU16) 4), LOC18);
		result = copyString(((NimStringDesc*) &TMP3325));
	}
	break;
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI32, checkmodulename_299237)(tnode226816* n) {
	NI32 result;
	NimStringDesc* modulename;
	NimStringDesc* fullpath;
	NimStringDesc* LOC1;
	result = 0;
	modulename = getmodulename_299018(n);
	LOC1 = 0;
	LOC1 = tofullpath_198037((*n).Info.Fileindex);
	fullpath = findmodule_171366(modulename, LOC1);
	{
		if (!(fullpath->Sup.len == 0)) goto LA4;
		localerror_198955((*n).Info, ((NU16) 3), modulename);
		result = ((NI32) -1);
	}
	goto LA2;
	LA4: ;
	{
		result = fileinfoidx_196747(fullpath);
	}
	LA2: ;
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

N_NIMCALL(tsym226846*, importmoduleas_299892)(tnode226816* n, tsym226846* realmodule) {
	tsym226846* result;
	result = 0;
	result = realmodule;
	{
		if (!!(((*n).Kind == ((NU8) 78)))) goto LA3;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NI LOC7;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = len_227364(n);
		LOC6 = !((LOC7 == 2));
		if (LOC6) goto LA8;
		LOC6 = !(((*(*n).kindU.S6.Sons->data[1]).Kind == ((NU8) 2)));
		LA8: ;
		if (!LOC6) goto LA9;
		localerror_198955((*n).Info, ((NU16) 4), ((NimStringDesc*) &TMP3331));
	}
	goto LA1;
	LA9: ;
	{
		if (!!(((*(*(*n).kindU.S6.Sons->data[1]).kindU.S5.Ident).Sup.Id == (*(*realmodule).Name).Sup.Id))) goto LA12;
		result = createmodulealias_230287(realmodule, (*(*n).kindU.S6.Sons->data[1]).kindU.S5.Ident, (*realmodule).Info);
	}
	goto LA1;
	LA12: ;
	LA1: ;
	return result;
}

N_NIMCALL(tsym226846*, myimportmodule_299991)(tcontext291021* c, tnode226816* n) {
	tsym226846* result;
	NI32 f;
	result = 0;
	f = checkmodulename_299237(n);
	{
		tsym226846* LOC5;
		if (!!((f == ((NI32) -1)))) goto LA3;
		LOC5 = 0;
		LOC5 = gimportmodule_287068((*c).Module, f);
		result = importmoduleas_299892(n, LOC5);
		{
			if (!((*result).Info.Fileindex == (*n).Info.Fileindex)) goto LA8;
			localerror_198955((*n).Info, ((NU16) 4), ((NimStringDesc*) &TMP3332));
		}
		LA8: ;
		{
			if (!(((*result).Flags &(1<<((((NU8) 19))&31)))!=0)) goto LA12;
			message_198976((*n).Info, ((NU16) 234), (*(*result).Name).S);
		}
		LA12: ;
	}
	LA3: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(NIM_BOOL, empty_224383)(intset223056 s) {
	NIM_BOOL result;
	result = 0;
	result = (s.Counter == 0);
	return result;
}

static N_INLINE(NIM_BOOL, isroutine_233780)(tsym226846* s) {
	NIM_BOOL result;
	result = 0;
	result = ((520192 &(1<<(((*s).Kind)&31)))!=0);
	return result;
}

static N_INLINE(NIM_BOOL, haspattern_233803)(tsym226846* s) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = isroutine_233780(s);
	if (!(LOC1)) goto LA2;
	LOC1 = !(((*(*(*s).Ast).kindU.S6.Sons->data[1]).Kind == ((NU8) 1)));
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(void, rawimportsymbol_299249)(tcontext291021* c, tsym226846* s) {
	tsym226846* check;
	check = strtableget_236111((*(*c).Importtable).Symbols, (*s).Name);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = !((check == NIM_NIL));
		if (!(LOC3)) goto LA4;
		LOC3 = !(((*check).Sup.Id == (*s).Sup.Id));
		LA4: ;
		if (!LOC3) goto LA5;
		{
			if (!!(((520256 &(1<<(((*s).Kind)&31)))!=0))) goto LA9;
			incl_223869((&(*c).Ambiguoussymbols), (*s).Sup.Id);
			incl_223869((&(*c).Ambiguoussymbols), (*check).Sup.Id);
		}
		LA9: ;
	}
	LA5: ;
	strtableadd_236103((&(*(*c).Importtable).Symbols), s);
	{
		ttype226852* etyp;
		if (!((*s).Kind == ((NU8) 7))) goto LA13;
		etyp = (*s).Typ;
		{
			NIM_BOOL LOC17;
			LOC17 = 0;
			LOC17 = ((*etyp).Kind == ((NU8) 1) || (*etyp).Kind == ((NU8) 14));
			if (!(LOC17)) goto LA18;
			LOC17 = !((((*s).Flags &(1<<((((NU8) 9))&31)))!=0));
			LA18: ;
			if (!LOC17) goto LA19;
			{
				NI j_299336;
				NI HEX3Atmp_299424;
				NI LOC22;
				NI res_299427;
				j_299336 = 0;
				HEX3Atmp_299424 = 0;
				LOC22 = 0;
				LOC22 = sonslen_227249((*etyp).N);
				HEX3Atmp_299424 = (NI32)(LOC22 - 1);
				res_299427 = 0;
				{
					while (1) {
						tsym226846* e;
						tidentiter236141 it;
						if (!(res_299427 <= HEX3Atmp_299424)) goto LA24;
						j_299336 = res_299427;
						e = (*(*(*etyp).N).kindU.S6.Sons->data[j_299336]).kindU.S4.Sym;
						{
							if (!!(((*e).Kind == ((NU8) 20)))) goto LA27;
							internalerror_198987((*s).Info, ((NimStringDesc*) &TMP3334));
						}
						LA27: ;
						memset((void*)(&it), 0, sizeof(it));
						check = initidentiter_236147((&it), (*(*c).Importtable).Symbols, (*e).Name);
						{
							while (1) {
								if (!!((check == NIM_NIL))) goto LA30;
								{
									if (!((*check).Sup.Id == (*e).Sup.Id)) goto LA33;
									e = NIM_NIL;
									goto LA29;
								}
								LA33: ;
								check = nextidentiter_236156((&it), (*(*c).Importtable).Symbols);
							} LA30: ;
						} LA29: ;
						{
							if (!!((e == NIM_NIL))) goto LA37;
							rawimportsymbol_299249(c, e);
						}
						LA37: ;
						res_299427 += 1;
					} LA24: ;
				}
			}
		}
		LA19: ;
	}
	goto LA11;
	LA13: ;
	{
		{
			if (!((*s).Kind == ((NU8) 16))) goto LA42;
			addconverter_291635(c, s);
		}
		LA42: ;
		{
			NIM_BOOL LOC46;
			LOC46 = 0;
			LOC46 = haspattern_233803(s);
			if (!LOC46) goto LA47;
			addpattern_291646(c, s);
		}
		LA47: ;
	}
	LA11: ;
}

N_NIMCALL(void, importallsymbolsexcept_299573)(tcontext291021* c, tsym226846* frommod, intset223056 exceptset) {
	ttabiter236119 i;
	tsym226846* s;
	memset((void*)(&i), 0, sizeof(i));
	s = inittabiter_236124((&i), (*frommod).kindU.S3.Tab);
	{
		while (1) {
			if (!!((s == NIM_NIL))) goto LA2;
			{
				if (!!(((*s).Kind == ((NU8) 6)))) goto LA5;
				{
					if (!!(((*s).Kind == ((NU8) 20)))) goto LA9;
					{
						NimStringDesc* LOC15;
						if (!!(((43513728 &(1<<(((*s).Kind)&31)))!=0))) goto LA13;
						LOC15 = 0;
						LOC15 = rawNewString(reprEnum((*s).Kind, (&NTI226445))->Sup.len + 18);
appendString(LOC15, ((NimStringDesc*) &TMP3333));
appendString(LOC15, reprEnum((*s).Kind, (&NTI226445)));
						internalerror_198987((*s).Info, LOC15);
					}
					LA13: ;
					{
						NIM_BOOL LOC18;
						NIM_BOOL LOC20;
						LOC18 = 0;
						LOC18 = empty_224383(exceptset);
						if (LOC18) goto LA19;
						LOC20 = 0;
						LOC20 = contains_223837(exceptset, (*(*s).Name).Sup.Id);
						LOC18 = !(LOC20);
						LA19: ;
						if (!LOC18) goto LA21;
						rawimportsymbol_299249(c, s);
					}
					LA21: ;
				}
				LA9: ;
			}
			LA5: ;
			s = nextiter_236132((&i), (*frommod).kindU.S3.Tab);
		} LA2: ;
	}
}

N_NIMCALL(tnode226816*, evalimport_299004)(tcontext291021* c, tnode226816* n) {
	tnode226816* result;
	intset223056 emptyset;
	result = 0;
	result = n;
	memset((void*)(&emptyset), 0, sizeof(emptyset));
	{
		NI i_300034;
		NI HEX3Atmp_300069;
		NI LOC2;
		NI res_300072;
		i_300034 = 0;
		HEX3Atmp_300069 = 0;
		LOC2 = 0;
		LOC2 = sonslen_227249(n);
		HEX3Atmp_300069 = (NI32)(LOC2 - 1);
		res_300072 = 0;
		{
			while (1) {
				tsym226846* m;
				if (!(res_300072 <= HEX3Atmp_300069)) goto LA4;
				i_300034 = res_300072;
				m = myimportmodule_299991(c, (*n).kindU.S6.Sons->data[i_300034]);
				{
					if (!!((m == NIM_NIL))) goto LA7;
					adddecl_296694(c, m);
					importallsymbolsexcept_299573(c, m, emptyset);
				}
				LA7: ;
				res_300072 += 1;
			} LA4: ;
		}
	}
	return result;
}

N_NIMCALL(tnode226816*, evalimportexcept_300211)(tcontext291021* c, tnode226816* n) {
	tnode226816* result;
	tsym226846* m;
	result = 0;
	result = n;
	checkminsonslen_292426(n, 2);
	m = myimportmodule_299991(c, (*n).kindU.S6.Sons->data[0]);
	{
		intset223056 exceptset;
		if (!!((m == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n).kindU.S6.Sons->data[0]), newsymnode_227132(m));
		adddecl_296694(c, m);
		memset((void*)(&exceptset), 0, sizeof(exceptset));
		chckNil((void*)(&exceptset));
		memset((void*)(&exceptset), 0, sizeof(exceptset));
		initintset_223950((&exceptset));
		{
			NI i_300275;
			NI HEX3Atmp_300293;
			NI LOC6;
			NI res_300296;
			i_300275 = 0;
			HEX3Atmp_300293 = 0;
			LOC6 = 0;
			LOC6 = sonslen_227249(n);
			HEX3Atmp_300293 = (NI32)(LOC6 - 1);
			res_300296 = 1;
			{
				while (1) {
					tident201021* ident;
					if (!(res_300296 <= HEX3Atmp_300293)) goto LA8;
					i_300275 = res_300296;
					ident = considerquotedident_296010((*n).kindU.S6.Sons->data[i_300275]);
					incl_223869((&exceptset), (*ident).Sup.Id);
					res_300296 += 1;
				} LA8: ;
			}
		}
		importallsymbolsexcept_299573(c, m, exceptset);
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, importsymbol_299450)(tcontext291021* c, tnode226816* n, tsym226846* frommod) {
	tident201021* ident;
	tsym226846* s;
	ident = considerquotedident_296010(n);
	s = strtableget_236111((*frommod).kindU.S3.Tab, ident);
	{
		if (!(s == NIM_NIL)) goto LA3;
		localerror_198955((*n).Info, ((NU16) 61), (*ident).S);
	}
	goto LA1;
	LA3: ;
	{
		{
			if (!((*s).Kind == ((NU8) 23))) goto LA8;
			loadstub_280261(s);
		}
		LA8: ;
		{
			if (!!(((43513728 &(1<<(((*s).Kind)&31)))!=0))) goto LA12;
			internalerror_198987((*n).Info, ((NimStringDesc*) &TMP3336));
		}
		LA12: ;
		switch ((*s).Kind) {
		case ((NU8) 12):
		case ((NU8) 18):
		case ((NU8) 17):
		case ((NU8) 14):
		case ((NU8) 15):
		case ((NU8) 13):
		case ((NU8) 16):
		{
			tidentiter236141 it;
			tsym226846* e;
			memset((void*)(&it), 0, sizeof(it));
			e = initidentiter_236147((&it), (*frommod).kindU.S3.Tab, (*s).Name);
			{
				while (1) {
					if (!!((e == NIM_NIL))) goto LA16;
					{
						if (!!(((*(*e).Name).Sup.Id == (*(*s).Name).Sup.Id))) goto LA19;
						internalerror_198987((*n).Info, ((NimStringDesc*) &TMP3337));
					}
					LA19: ;
					rawimportsymbol_299249(c, e);
					e = nextidentiter_236156((&it), (*frommod).kindU.S3.Tab);
				} LA16: ;
			}
		}
		break;
		default:
		{
			rawimportsymbol_299249(c, s);
		}
		break;
		}
	}
	LA1: ;
}

N_NIMCALL(tnode226816*, evalfrom_299011)(tcontext291021* c, tnode226816* n) {
	tnode226816* result;
	tsym226846* m;
	result = 0;
	result = n;
	checkminsonslen_292426(n, 2);
	m = myimportmodule_299991(c, (*n).kindU.S6.Sons->data[0]);
	{
		if (!!((m == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n).kindU.S6.Sons->data[0]), newsymnode_227132(m));
		adddecl_296694(c, m);
		{
			NI i_300152;
			NI HEX3Atmp_300191;
			NI LOC6;
			NI res_300194;
			i_300152 = 0;
			HEX3Atmp_300191 = 0;
			LOC6 = 0;
			LOC6 = sonslen_227249(n);
			HEX3Atmp_300191 = (NI32)(LOC6 - 1);
			res_300194 = 1;
			{
				while (1) {
					if (!(res_300194 <= HEX3Atmp_300191)) goto LA8;
					i_300152 = res_300194;
					{
						if (!!(((*(*n).kindU.S6.Sons->data[i_300152]).Kind == ((NU8) 23)))) goto LA11;
						importsymbol_299450(c, (*n).kindU.S6.Sons->data[i_300152], m);
					}
					LA11: ;
					res_300194 += 1;
				} LA8: ;
			}
		}
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, importallsymbols_299679)(tcontext291021* c, tsym226846* frommod) {
	intset223056 exceptset;
	memset((void*)(&exceptset), 0, sizeof(exceptset));
	importallsymbolsexcept_299573(c, frommod, exceptset);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_importerInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_importerDatInit)(void) {
}

