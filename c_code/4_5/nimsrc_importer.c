/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tnode190813 Tnode190813;
typedef struct Tcontext244023 Tcontext244023;
typedef struct Intset187056 Intset187056;
typedef struct Ttrunk187052 Ttrunk187052;
typedef struct Ttrunkseq187054 Ttrunkseq187054;
typedef struct Tsym190843 Tsym190843;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib190831 Tlib190831;
typedef struct Tcell46346 Tcell46346;
typedef struct Tcellseq46362 Tcellseq46362;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46358 Tcellset46358;
typedef struct Tpagedesc46354 Tpagedesc46354;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct Tproccon244011 Tproccon244011;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tidtable190861 Tidtable190861;
typedef struct Tidpairseq190859 Tidpairseq190859;
typedef struct Tctx243048 Tctx243048;
typedef struct TY244141 TY244141;
typedef struct Ttabiter198119 Ttabiter198119;
typedef struct Tidentiter198141 Tidentiter198141;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Tidpair190857 Tidpair190857;
typedef struct TY243253 TY243253;
typedef struct TY164036 TY164036;
typedef struct PprocHEX3Aobjecttype243232 PprocHEX3Aobjecttype243232;
typedef struct TY243272 TY243272;
typedef struct Tinstantiationpair244013 Tinstantiationpair244013;
typedef struct TY190933 TY190933;
typedef struct TY243233 TY243233;
typedef struct TY243239 TY243239;
typedef struct TY243273 TY243273;
typedef struct Vmargs243042 Vmargs243042;
typedef struct Tblock243030 Tblock243030;
typedef struct TY243213 TY243213;
struct  Intset187056  {
NI counter;
NI max;
Ttrunk187052* head;
Ttrunkseq187054* data;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tnode190813  {
Ttype190849* typ;
Tlineinfo163338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym190843* sym;
} S4;
struct {Tident167021* ident;
} S5;
struct {Tnodeseq190807* sons;
} S6;
} kindU;
NimStringDesc* comment;
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
struct  TNimObject  {
TNimType* m_type;
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
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
};
struct  Tsym190843  {
  Tidobj167015 Sup;
NU8 kind;
union{
struct {Ttypeseq190845* typeinstcache;
Tscope190837* typscope;
} S1;
struct {TY190944* procinstcache;
Tsym190843* gcunsafetyreason;
} S2;
struct {TY190944* usedgenerics;
Tstrtable190817 tab;
} S3;
struct {Tsym190843* guard;
} S4;
} kindU;
NU16 magic;
Ttype190849* typ;
Tident167021* name;
Tlineinfo163338 info;
Tsym190843* owner;
NU32 flags;
Tnode190813* ast;
NU32 options;
NI position;
NI offset;
Tloc190827 loc;
Tlib190831* annex;
Tnode190813* constraint;
};
struct  Tcell46346  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46362  {
NI len;
NI cap;
Tcell46346** d;
};
struct  Tcellset46358  {
NI counter;
NI max;
Tpagedesc46354* head;
Tpagedesc46354** data;
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
Tcellseq46362 zct;
Tcellseq46362 decstack;
Tcellset46358 cycleroots;
Tcellseq46362 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
typedef N_NIMCALL_PTR(Tsym190843*, TY241064) (Tsym190843* m, NI32 fileidx);
struct  Tpasscontext241005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tlinkedlist130028  {
Tlistentry130022* head;
Tlistentry130022* tail;
NI counter;
};
struct  Tidtable190861  {
NI counter;
Tidpairseq190859* data;
};
typedef N_NIMCALL_PTR(Tnode190813*, TY244072) (Tcontext244023* c, Tnode190813* n);
typedef N_NIMCALL_PTR(Tnode190813*, TY244077) (Tcontext244023* c, Tnode190813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode190813*, TY244085) (Tcontext244023* c, Tnode190813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode190813*, TY244093) (Tcontext244023* c, Tnode190813* n);
typedef N_NIMCALL_PTR(Tnode190813*, TY244098) (Tcontext244023* c, Tnode190813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode190813*, TY244106) (Tcontext244023* c, Tnode190813* n);
typedef N_NIMCALL_PTR(Tnode190813*, TY244111) (Tcontext244023* c, Tnode190813* n, Tnode190813* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype190849*, TY244118) (Tcontext244023* c, Tnode190813* n, Ttype190849* prev);
typedef struct {
N_NIMCALL_PTR(Tnode190813*, ClPrc) (Tcontext244023* c, Tidtable190861 pt, Tnode190813* n, void* ClEnv);
void* ClEnv;
} TY244124;
typedef struct {
N_NIMCALL_PTR(Tsym190843*, ClPrc) (Tcontext244023* c, Tsym190843* fn, Tidtable190861 pt, Tlineinfo163338 info, void* ClEnv);
void* ClEnv;
} TY244130;
typedef N_NIMCALL_PTR(Tsym190843*, TY244146) (Tcontext244023* c, Tsym190843* dc, Ttype190849* t, Tlineinfo163338 info, NU8 op);
struct  Tcontext244023  {
  Tpasscontext241005 Sup;
Tsym190843* module;
Tscope190837* currentscope;
Tscope190837* importtable;
Tscope190837* toplevelscope;
Tproccon244011* p;
Tsymseq190815* friendmodules;
NI instcounter;
Intset187056 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI incompilescontext;
NI ingenericinst;
Tsymseq190815* converters;
Tsymseq190815* patterns;
Tlinkedlist130028 optionstack;
Tidtable190861 symmapping;
Tlinkedlist130028 libs;
TY244072 semconstexpr;
TY244077 semexpr;
TY244085 semtryexpr;
TY244093 semtryconstexpr;
TY244098 semoperand;
TY244106 semconstboolexpr;
TY244111 semoverloadedcall;
TY244118 semtypenode;
TY244124 seminferredlambda;
TY244130 semgenerateinstance;
Intset187056 includedfiles;
Tstrtable190817 userpragmas;
Tctx243048* evalcontext;
Intset187056 unknownidents;
TY244141* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY244146 insttypeboundop;
};
struct  Ttabiter198119  {
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
};
struct  Ttype190849  {
  Tidobj167015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq190845* sons;
Tnode190813* n;
Tsym190843* owner;
Tsym190843* sym;
Tsym190843* destructor;
Tsym190843* deepcopy;
Tsym190843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc190827 loc;
};
struct  Tidentiter198141  {
NI h;
Tident167021* name;
};
typedef NI TY27420[16];
struct  Ttrunk187052  {
Ttrunk187052* next;
NI key;
TY27420 bits;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib190831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj161009* name;
Tnode190813* path;
};
struct  Tpagedesc46354  {
Tpagedesc46354* next;
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
struct  Tproccon244011  {
Tsym190843* owner;
Tsym190843* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon244011* next;
NIM_BOOL wasforwarded;
Tnode190813* bracketexpr;
};
struct  Tidpair190857  {
Tidobj167015* key;
TNimObject* val;
};
struct  Tctx243048  {
  Tpasscontext241005 Sup;
TY243253* code;
TY164036* debug;
Tnode190813* globals;
Tnode190813* constants;
Ttypeseq190845* types;
Tnode190813* currentexceptiona;
Tnode190813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype243232* prc;
Tsym190843* module;
Tnode190813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo163338 comesfromheuristic;
TY243272* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair244013  {
Tsym190843* genericsym;
Tinstantiation190833* inst;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct TY243239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY243239 TY243236[256];
struct  PprocHEX3Aobjecttype243232  {
TY243233* blocks;
Tsym190843* sym;
TY243236 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs243042* args, void* ClEnv);
void* ClEnv;
} Vmcallback243044;
struct TY243273 {
NimStringDesc* Field0;
Vmcallback243044 Field1;
};
struct  Tblock243030  {
Tsym190843* label;
TY243213* fixups;
};
struct  Vmargs243042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode190813* currentexception;
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct Ttrunkseq187054 {
  TGenericSeq Sup;
  Ttrunk187052* data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct Tidpairseq190859 {
  TGenericSeq Sup;
  Tidpair190857 data[SEQ_DECL_SIZE];
};
struct TY244141 {
  TGenericSeq Sup;
  Tinstantiationpair244013 data[SEQ_DECL_SIZE];
};
struct TY243253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY164036 {
  TGenericSeq Sup;
  Tlineinfo163338 data[SEQ_DECL_SIZE];
};
struct TY243272 {
  TGenericSeq Sup;
  TY243273 data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY243233 {
  TGenericSeq Sup;
  Tblock243030 data[SEQ_DECL_SIZE];
};
struct TY243213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
N_NIMCALL(Tsym190843*, myimportmodule_251708)(Tcontext244023* c, Tnode190813* n);
N_NIMCALL(NI32, checkmodulename_251064)(Tnode190813* n);
N_NIMCALL(NimStringDesc*, getmodulename_251018)(Tnode190813* n);
N_NIMCALL(NimStringDesc*, nosunixToNativePath)(NimStringDesc* path, NimStringDesc* drive);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(Tident167021*, getident_167463)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
N_NIMCALL(NimStringDesc*, rendertree_212058)(Tnode190813* n, NU8 renderflags);
N_NIMCALL(void, localerror_165155)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr, NimStringDesc* a);
N_NIMCALL(NimStringDesc*, findmodule_155349)(NimStringDesc* modulename, NimStringDesc* currentmodule);
N_NIMCALL(NimStringDesc*, tofullpath_164276)(NI32 fileidx);
N_NIMCALL(NI32, fileinfoidx_163854)(NimStringDesc* filename);
N_NIMCALL(Tsym190843*, importmoduleas_251671)(Tnode190813* n, Tsym190843* realmodule);
static N_INLINE(NI, len_191097)(Tnode190813* n);
N_NIMCALL(Tsym190843*, createmodulealias_193844)(Tsym190843* s, Tident167021* newident, Tlineinfo163338 info);
N_NIMCALL(void, message_165188)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, adddecl_249607)(Tcontext244023* c, Tsym190843* sym);
N_NIMCALL(void, importallsymbolsexcept_251315)(Tcontext244023* c, Tsym190843* frommod, Intset187056 exceptset);
N_NIMCALL(Tsym190843*, inittabiter_198124)(Ttabiter198119* ti, Tstrtable190817 tab);
N_NIMCALL(void, internalerror_165199)(Tlineinfo163338 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_82729, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(NIM_BOOL, empty_188363)(Intset187056 s);
N_NIMCALL(NIM_BOOL, contains_187829)(Intset187056 s, NI key);
N_NIMCALL(void, rawimportsymbol_251077)(Tcontext244023* c, Tsym190843* s);
N_NIMCALL(Tsym190843*, strtableget_198111)(Tstrtable190817 t, Tident167021* name);
N_NIMCALL(void, incl_187856)(Intset187056* s, NI key);
N_NIMCALL(void, strtableadd_198103)(Tstrtable190817* t, Tsym190843* n);
N_NIMCALL(Tsym190843*, initidentiter_198147)(Tidentiter198141* ti, Tstrtable190817 tab, Tident167021* s);
N_NIMCALL(Tsym190843*, nextidentiter_198156)(Tidentiter198141* ti, Tstrtable190817 tab);
N_NIMCALL(void, addconverter_244562)(Tcontext244023* c, Tsym190843* conv);
static N_INLINE(NIM_BOOL, haspattern_195784)(Tsym190843* s);
static N_INLINE(NIM_BOOL, isroutine_195764)(Tsym190843* s);
N_NIMCALL(void, addpattern_244573)(Tcontext244023* c, Tsym190843* p);
N_NIMCALL(Tsym190843*, nextiter_198132)(Ttabiter198119* ti, Tstrtable190817 tab);
N_NIMCALL(void, checkminsonslen_245259)(Tnode190813* n, NI length);
N_NIMCALL(Tnode190813*, newsymnode_192325)(Tsym190843* sym);
N_NIMCALL(void, initintset_187927)(Intset187056* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(Tident167021*, considerquotedident_249010)(Tnode190813* n);
N_NIMCALL(void, importsymbol_251241)(Tcontext244023* c, Tnode190813* n, Tsym190843* frommod);
N_NIMCALL(void, loadstub_235639)(Tsym190843* s);
STRING_LITERAL(TMP3458, "", 0);
STRING_LITERAL(TMP3459, "as", 2);
STRING_LITERAL(TMP3460, " ", 1);
STRING_LITERAL(TMP3461, ".", 1);
STRING_LITERAL(TMP3462, "/", 1);
STRING_LITERAL(TMP3463, "invalid module name: \'$1\'", 25);
STRING_LITERAL(TMP3464, "module alias must be an identifier", 34);
STRING_LITERAL(TMP3465, "A module cannot import itself", 29);
STRING_LITERAL(TMP3466, "importAllSymbols: ", 18);
STRING_LITERAL(TMP3467, "rawImportSymbol", 15);
STRING_LITERAL(TMP3469, "importSymbol: 2", 15);
STRING_LITERAL(TMP3470, "importSymbol: 3", 15);
extern Tgcheap48216 gch_48244;
extern TY241064 gimportmodule_241068;
extern TNimType NTI190441; /* TSymKind */

static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr) {
	Tcell46346* result;
	result = 0;
	result = ((Tcell46346*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46346))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46346* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46346* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46346* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49846((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(NimStringDesc*, getmodulename_251018)(Tnode190813* n) {
	NimStringDesc* result;
{	result = 0;
	switch ((*n).kind) {
	case ((NU8) 20):
	case ((NU8) 21):
	case ((NU8) 22):
	{
		result = nosunixToNativePath((*n).kindU.S3.strval, ((NimStringDesc*) &TMP3458));
	}
	break;
	case ((NU8) 2):
	{
		result = copyString((*(*n).kindU.S5.ident).s);
	}
	break;
	case ((NU8) 3):
	{
		result = copyString((*(*(*n).kindU.S4.sym).name).s);
	}
	break;
	case ((NU8) 29):
	case ((NU8) 30):
	{
		NimStringDesc* LOC12;
		{
			NIM_BOOL LOC7;
			Tident167021* LOC9;
			LOC7 = 0;
			LOC7 = ((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2));
			if (!(LOC7)) goto LA8;
			LOC9 = 0;
			LOC9 = getident_167463(((NimStringDesc*) &TMP3459));
			LOC7 = ((*(*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident).Sup.id == (*LOC9).Sup.id);
			LA8: ;
			if (!LOC7) goto LA10;
			(*n).kind = ((NU8) 78);
			asgnRefNoCycle((void**) (&(*n).kindU.S6.sons->data[((NI) 0)]), (*n).kindU.S6.sons->data[((NI) 1)]);
			asgnRefNoCycle((void**) (&(*n).kindU.S6.sons->data[((NI) 1)]), (*n).kindU.S6.sons->data[((NI) 2)]);
			(*n).kindU.S6.sons = (Tnodeseq190807*) setLengthSeq(&((*n).kindU.S6.sons)->Sup, sizeof(Tnode190813*), ((NI) 2));
			result = getmodulename_251018((*n).kindU.S6.sons->data[((NI) 0)]);
			goto BeforeRet;
		}
		LA10: ;
		LOC12 = 0;
		LOC12 = rendertree_212058(n, 4);
		result = nsuReplaceStr(LOC12, ((NimStringDesc*) &TMP3460), ((NimStringDesc*) &TMP3458));
	}
	break;
	case ((NU8) 45):
	{
		NimStringDesc* LOC14;
		LOC14 = 0;
		LOC14 = rendertree_212058(n, 4);
		result = nsuReplaceStr(LOC14, ((NimStringDesc*) &TMP3461), ((NimStringDesc*) &TMP3462));
	}
	break;
	case ((NU8) 78):
	{
		result = getmodulename_251018((*n).kindU.S6.sons->data[((NI) 0)]);
	}
	break;
	default:
	{
		NimStringDesc* LOC17;
		NimStringDesc* LOC18;
		LOC17 = 0;
		LOC17 = rendertree_212058(n, 0);
		LOC18 = 0;
		LOC18 = nsuFormatSingleElem(((NimStringDesc*) &TMP3463), LOC17);
		localerror_165155((*n).info, ((NU16) 4), LOC18);
		result = copyString(((NimStringDesc*) &TMP3458));
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI32, checkmodulename_251064)(Tnode190813* n) {
	NI32 result;
	NimStringDesc* modulename;
	NimStringDesc* fullpath;
	NimStringDesc* LOC1;
	result = 0;
	modulename = getmodulename_251018(n);
	LOC1 = 0;
	LOC1 = tofullpath_164276((*n).info.fileindex);
	fullpath = findmodule_155349(modulename, LOC1);
	{
		if (!((fullpath ? fullpath->Sup.len : 0) == ((NI) 0))) goto LA4;
		localerror_165155((*n).info, ((NU16) 3), modulename);
		result = ((NI32) -1);
	}
	goto LA2;
	LA4: ;
	{
		result = fileinfoidx_163854(fullpath);
	}
	LA2: ;
	return result;
}

static N_INLINE(NI, len_191097)(Tnode190813* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tsym190843*, importmoduleas_251671)(Tnode190813* n, Tsym190843* realmodule) {
	Tsym190843* result;
	result = 0;
	result = realmodule;
	{
		if (!!(((*n).kind == ((NU8) 78)))) goto LA3;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NI LOC7;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = len_191097(n);
		LOC6 = !((LOC7 == ((NI) 2)));
		if (LOC6) goto LA8;
		LOC6 = !(((*(*n).kindU.S6.sons->data[((NI) 1)]).kind == ((NU8) 2)));
		LA8: ;
		if (!LOC6) goto LA9;
		localerror_165155((*n).info, ((NU16) 4), ((NimStringDesc*) &TMP3464));
	}
	goto LA1;
	LA9: ;
	{
		if (!!(((*(*(*n).kindU.S6.sons->data[((NI) 1)]).kindU.S5.ident).Sup.id == (*(*realmodule).name).Sup.id))) goto LA12;
		result = createmodulealias_193844(realmodule, (*(*n).kindU.S6.sons->data[((NI) 1)]).kindU.S5.ident, (*realmodule).info);
	}
	goto LA1;
	LA12: ;
	LA1: ;
	return result;
}

N_NIMCALL(Tsym190843*, myimportmodule_251708)(Tcontext244023* c, Tnode190813* n) {
	Tsym190843* result;
	NI32 f;
	result = 0;
	f = checkmodulename_251064(n);
	{
		Tsym190843* LOC5;
		if (!!((f == ((NI32) -1)))) goto LA3;
		LOC5 = 0;
		LOC5 = gimportmodule_241068((*c).module, f);
		result = importmoduleas_251671(n, LOC5);
		{
			if (!((*result).info.fileindex == (*n).info.fileindex)) goto LA8;
			localerror_165155((*n).info, ((NU16) 4), ((NimStringDesc*) &TMP3465));
		}
		LA8: ;
		{
			if (!(((*result).flags &(1<<((((NU8) 19))&31)))!=0)) goto LA12;
			message_165188((*n).info, ((NU16) 234), (*(*result).name).s);
		}
		LA12: ;
	}
	LA3: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(NIM_BOOL, empty_188363)(Intset187056 s) {
	NIM_BOOL result;
	result = 0;
	result = (s.counter == ((NI) 0));
	return result;
}

static N_INLINE(NIM_BOOL, isroutine_195764)(Tsym190843* s) {
	NIM_BOOL result;
	result = 0;
	result = ((520192 &(1<<(((*s).kind)&31)))!=0);
	return result;
}

static N_INLINE(NIM_BOOL, haspattern_195784)(Tsym190843* s) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = isroutine_195764(s);
	if (!(LOC1)) goto LA2;
	LOC1 = !(((*(*(*s).ast).kindU.S6.sons->data[((NI) 1)]).kind == ((NU8) 1)));
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(void, rawimportsymbol_251077)(Tcontext244023* c, Tsym190843* s) {
	Tsym190843* check;
	check = strtableget_198111((*(*c).importtable).symbols, (*s).name);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = !((check == NIM_NIL));
		if (!(LOC3)) goto LA4;
		LOC3 = !(((*check).Sup.id == (*s).Sup.id));
		LA4: ;
		if (!LOC3) goto LA5;
		{
			if (!!(((520256 &(1<<(((*s).kind)&31)))!=0))) goto LA9;
			incl_187856((&(*c).ambiguoussymbols), (*s).Sup.id);
			incl_187856((&(*c).ambiguoussymbols), (*check).Sup.id);
		}
		LA9: ;
	}
	LA5: ;
	strtableadd_198103((&(*(*c).importtable).symbols), s);
	{
		Ttype190849* etyp;
		if (!((*s).kind == ((NU8) 7))) goto LA13;
		etyp = (*s).typ;
		{
			NIM_BOOL LOC17;
			LOC17 = 0;
			LOC17 = ((*etyp).kind == ((NU8) 1) || (*etyp).kind == ((NU8) 14));
			if (!(LOC17)) goto LA18;
			LOC17 = !((((*s).flags &(1<<((((NU8) 9))&31)))!=0));
			LA18: ;
			if (!LOC17) goto LA19;
			{
				NI j_251157;
				NI HEX3Atmp_251213;
				NI LOC22;
				NI res_251216;
				j_251157 = 0;
				HEX3Atmp_251213 = 0;
				LOC22 = 0;
				LOC22 = sonslen_193403((*etyp).n);
				HEX3Atmp_251213 = (NI)(LOC22 - ((NI) 1));
				res_251216 = ((NI) 0);
				{
					while (1) {
						Tsym190843* e;
						Tidentiter198141 it;
						if (!(res_251216 <= HEX3Atmp_251213)) goto LA24;
						j_251157 = res_251216;
						e = (*(*(*etyp).n).kindU.S6.sons->data[j_251157]).kindU.S4.sym;
						{
							if (!!(((*e).kind == ((NU8) 20)))) goto LA27;
							internalerror_165199((*s).info, ((NimStringDesc*) &TMP3467));
						}
						LA27: ;
						memset((void*)(&it), 0, sizeof(it));
						check = initidentiter_198147((&it), (*(*c).importtable).symbols, (*e).name);
						{
							while (1) {
								if (!!((check == NIM_NIL))) goto LA30;
								{
									if (!((*check).Sup.id == (*e).Sup.id)) goto LA33;
									e = NIM_NIL;
									goto LA29;
								}
								LA33: ;
								check = nextidentiter_198156((&it), (*(*c).importtable).symbols);
							} LA30: ;
						} LA29: ;
						{
							if (!!((e == NIM_NIL))) goto LA37;
							rawimportsymbol_251077(c, e);
						}
						LA37: ;
						res_251216 += ((NI) 1);
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
			if (!((*s).kind == ((NU8) 16))) goto LA42;
			addconverter_244562(c, s);
		}
		LA42: ;
		{
			NIM_BOOL LOC46;
			LOC46 = 0;
			LOC46 = haspattern_195784(s);
			if (!LOC46) goto LA47;
			addpattern_244573(c, s);
		}
		LA47: ;
	}
	LA11: ;
}

N_NIMCALL(void, importallsymbolsexcept_251315)(Tcontext244023* c, Tsym190843* frommod, Intset187056 exceptset) {
	Ttabiter198119 i;
	Tsym190843* s;
	memset((void*)(&i), 0, sizeof(i));
	s = inittabiter_198124((&i), (*frommod).kindU.S3.tab);
	{
		while (1) {
			if (!!((s == NIM_NIL))) goto LA2;
			{
				if (!!(((*s).kind == ((NU8) 6)))) goto LA5;
				{
					if (!!(((*s).kind == ((NU8) 20)))) goto LA9;
					{
						NimStringDesc* LOC15;
						if (!!(((43513728 &(1<<(((*s).kind)&31)))!=0))) goto LA13;
						LOC15 = 0;
						LOC15 = rawNewString(reprEnum((*s).kind, (&NTI190441))->Sup.len + 18);
appendString(LOC15, ((NimStringDesc*) &TMP3466));
appendString(LOC15, reprEnum((*s).kind, (&NTI190441)));
						internalerror_165199((*s).info, LOC15);
					}
					LA13: ;
					{
						NIM_BOOL LOC18;
						NIM_BOOL LOC20;
						LOC18 = 0;
						LOC18 = empty_188363(exceptset);
						if (LOC18) goto LA19;
						LOC20 = 0;
						LOC20 = contains_187829(exceptset, (*(*s).name).Sup.id);
						LOC18 = !(LOC20);
						LA19: ;
						if (!LOC18) goto LA21;
						rawimportsymbol_251077(c, s);
					}
					LA21: ;
				}
				LA9: ;
			}
			LA5: ;
			s = nextiter_198132((&i), (*frommod).kindU.S3.tab);
		} LA2: ;
	}
}

N_NIMCALL(Tnode190813*, evalimport_251004)(Tcontext244023* c, Tnode190813* n) {
	Tnode190813* result;
	Intset187056 emptyset;
	result = 0;
	result = n;
	memset((void*)(&emptyset), 0, sizeof(emptyset));
	{
		NI i_251751;
		NI HEX3Atmp_251768;
		NI LOC2;
		NI res_251771;
		i_251751 = 0;
		HEX3Atmp_251768 = 0;
		LOC2 = 0;
		LOC2 = sonslen_193403(n);
		HEX3Atmp_251768 = (NI)(LOC2 - ((NI) 1));
		res_251771 = ((NI) 0);
		{
			while (1) {
				Tsym190843* m;
				if (!(res_251771 <= HEX3Atmp_251768)) goto LA4;
				i_251751 = res_251771;
				m = myimportmodule_251708(c, (*n).kindU.S6.sons->data[i_251751]);
				{
					if (!!((m == NIM_NIL))) goto LA7;
					adddecl_249607(c, m);
					importallsymbolsexcept_251315(c, m, emptyset);
				}
				LA7: ;
				res_251771 += ((NI) 1);
			} LA4: ;
		}
	}
	return result;
}

N_NIMCALL(Tnode190813*, evalimportexcept_251857)(Tcontext244023* c, Tnode190813* n) {
	Tnode190813* result;
	Tsym190843* m;
	result = 0;
	result = n;
	checkminsonslen_245259(n, ((NI) 2));
	m = myimportmodule_251708(c, (*n).kindU.S6.sons->data[((NI) 0)]);
	{
		Intset187056 exceptset;
		if (!!((m == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n).kindU.S6.sons->data[((NI) 0)]), newsymnode_192325(m));
		adddecl_249607(c, m);
		memset((void*)(&exceptset), 0, sizeof(exceptset));
		chckNil((void*)(&exceptset));
		memset((void*)(&exceptset), 0, sizeof(exceptset));
		initintset_187927((&exceptset));
		{
			NI i_251890;
			NI HEX3Atmp_251895;
			NI LOC6;
			NI res_251898;
			i_251890 = 0;
			HEX3Atmp_251895 = 0;
			LOC6 = 0;
			LOC6 = sonslen_193403(n);
			HEX3Atmp_251895 = (NI)(LOC6 - ((NI) 1));
			res_251898 = ((NI) 1);
			{
				while (1) {
					Tident167021* ident;
					if (!(res_251898 <= HEX3Atmp_251895)) goto LA8;
					i_251890 = res_251898;
					ident = considerquotedident_249010((*n).kindU.S6.sons->data[i_251890]);
					incl_187856((&exceptset), (*ident).Sup.id);
					res_251898 += ((NI) 1);
				} LA8: ;
			}
		}
		importallsymbolsexcept_251315(c, m, exceptset);
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, importsymbol_251241)(Tcontext244023* c, Tnode190813* n, Tsym190843* frommod) {
	Tident167021* ident;
	Tsym190843* s;
	ident = considerquotedident_249010(n);
	s = strtableget_198111((*frommod).kindU.S3.tab, ident);
	{
		if (!(s == NIM_NIL)) goto LA3;
		localerror_165155((*n).info, ((NU16) 61), (*ident).s);
	}
	goto LA1;
	LA3: ;
	{
		{
			if (!((*s).kind == ((NU8) 23))) goto LA8;
			loadstub_235639(s);
		}
		LA8: ;
		{
			if (!!(((43513728 &(1<<(((*s).kind)&31)))!=0))) goto LA12;
			internalerror_165199((*n).info, ((NimStringDesc*) &TMP3469));
		}
		LA12: ;
		switch ((*s).kind) {
		case ((NU8) 12):
		case ((NU8) 18):
		case ((NU8) 17):
		case ((NU8) 14):
		case ((NU8) 15):
		case ((NU8) 13):
		case ((NU8) 16):
		{
			Tidentiter198141 it;
			Tsym190843* e;
			memset((void*)(&it), 0, sizeof(it));
			e = initidentiter_198147((&it), (*frommod).kindU.S3.tab, (*s).name);
			{
				while (1) {
					if (!!((e == NIM_NIL))) goto LA16;
					{
						if (!!(((*(*e).name).Sup.id == (*(*s).name).Sup.id))) goto LA19;
						internalerror_165199((*n).info, ((NimStringDesc*) &TMP3470));
					}
					LA19: ;
					rawimportsymbol_251077(c, e);
					e = nextidentiter_198156((&it), (*frommod).kindU.S3.tab);
				} LA16: ;
			}
		}
		break;
		default:
		{
			rawimportsymbol_251077(c, s);
		}
		break;
		}
	}
	LA1: ;
}

N_NIMCALL(Tnode190813*, evalfrom_251011)(Tcontext244023* c, Tnode190813* n) {
	Tnode190813* result;
	Tsym190843* m;
	result = 0;
	result = n;
	checkminsonslen_245259(n, ((NI) 2));
	m = myimportmodule_251708(c, (*n).kindU.S6.sons->data[((NI) 0)]);
	{
		if (!!((m == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n).kindU.S6.sons->data[((NI) 0)]), newsymnode_192325(m));
		adddecl_249607(c, m);
		{
			NI i_251822;
			NI HEX3Atmp_251835;
			NI LOC6;
			NI res_251838;
			i_251822 = 0;
			HEX3Atmp_251835 = 0;
			LOC6 = 0;
			LOC6 = sonslen_193403(n);
			HEX3Atmp_251835 = (NI)(LOC6 - ((NI) 1));
			res_251838 = ((NI) 1);
			{
				while (1) {
					if (!(res_251838 <= HEX3Atmp_251835)) goto LA8;
					i_251822 = res_251838;
					{
						if (!!(((*(*n).kindU.S6.sons->data[i_251822]).kind == ((NU8) 23)))) goto LA11;
						importsymbol_251241(c, (*n).kindU.S6.sons->data[i_251822], m);
					}
					LA11: ;
					res_251838 += ((NI) 1);
				} LA8: ;
			}
		}
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, importallsymbols_251389)(Tcontext244023* c, Tsym190843* frommod) {
	Intset187056 exceptset;
	memset((void*)(&exceptset), 0, sizeof(exceptset));
	importallsymbolsexcept_251315(c, frommod, exceptset);
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_importerInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_importerDatInit)(void) {
}

