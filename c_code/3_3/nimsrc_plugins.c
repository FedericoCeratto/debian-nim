/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct PluginHEX3Aobjecttype406019 PluginHEX3Aobjecttype406019;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode190813 Tnode190813;
typedef struct Tcontext244023 Tcontext244023;
typedef struct Tident167021 Tident167021;
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
typedef struct Tsym190843 Tsym190843;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib190831 Tlib190831;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct Tproccon244011 Tproccon244011;
typedef struct Intset187056 Intset187056;
typedef struct Ttrunk187052 Ttrunk187052;
typedef struct Ttrunkseq187054 Ttrunkseq187054;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tidtable190861 Tidtable190861;
typedef struct Tidpairseq190859 Tidpairseq190859;
typedef struct Tctx243048 Tctx243048;
typedef struct TY244141 TY244141;
typedef struct Tbasechunk27638 Tbasechunk27638;
typedef struct Tfreecell27630 Tfreecell27630;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tidpair190857 Tidpair190857;
typedef struct TY243253 TY243253;
typedef struct TY164033 TY164033;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tnode190813*, Transformation406013) (Tcontext244023* c, Tnode190813* n);
struct  PluginHEX3Aobjecttype406019  {
Tident167021* fn;
Tident167021* module;
Tident167021* package;
Transformation406013 t;
PluginHEX3Aobjecttype406019* next;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
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
struct  Tpasscontext241005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset187056  {
NI counter;
NI max;
Ttrunk187052* head;
Ttrunkseq187054* data;
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
struct  Ttrunk187052  {
Ttrunk187052* next;
NI key;
TY27620 bits;
};
struct  Tidpair190857  {
Tidobj167015* key;
TNimObject* val;
};
struct  Tctx243048  {
  Tpasscontext241005 Sup;
TY243253* code;
TY164033* debug;
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
struct  Tfreecell27630  {
Tfreecell27630* next;
NI zerofield;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
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
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct Ttrunkseq187054 {
  TGenericSeq Sup;
  Ttrunk187052* data[SEQ_DECL_SIZE];
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
struct TY164033 {
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
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP960)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Tident167021*, getident_167463)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46546*, usrtocell_50046)(void* usr);
static N_INLINE(void, rtladdzct_51604)(Tcell46546* c);
N_NOINLINE(void, addzct_50017)(Tcellseq46562* s, Tcell46546* c);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52422)(Tcell46546* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50067)(Tcell46546* c);
static N_INLINE(void, rtladdcycleroot_50823)(Tcell46546* c);
N_NOINLINE(void, incl_47265)(Tcellset46558* s, Tcell46546* cell);
static N_INLINE(void, decref_52004)(Tcell46546* c);
N_NIMCALL(NIM_BOOL, pluginmatches_406029)(PluginHEX3Aobjecttype406019* p, Tsym190843* s);
PluginHEX3Aobjecttype406019* head_406089;
TNimType NTI406019; /* Plugin:ObjectType */
extern TNimType NTI167019; /* PIdent */
TNimType NTI406013; /* Transformation */
TNimType NTI406015; /* Plugin */
extern Tgcheap48416 gch_48444;
N_NIMCALL(void, TMP960)(void* p, NI op) {
	PluginHEX3Aobjecttype406019* a;
	a = (PluginHEX3Aobjecttype406019*)p;
	nimGCvisit((void*)(*a).fn, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).package, op);
	nimGCvisit((void*)(*a).next, op);
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

static N_INLINE(NIM_BOOL, canbecycleroot_50067)(Tcell46546* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50823)(Tcell46546* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_47265((&gch_48444.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_52422)(Tcell46546* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_50067(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50823(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_52004)(Tcell46546* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51604(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_50067(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50823(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Tcell46546* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_50046(src);
		incref_52422(LOC5);
	}
	LA3: ;
	{
		Tcell46546* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_50046((*dest));
		decref_52004(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, registerplugin_406124)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation406013 t) {
	PluginHEX3Aobjecttype406019* oldhead;
	PluginHEX3Aobjecttype406019* LOC1;
	oldhead = head_406089;
	LOC1 = 0;
	LOC1 = (PluginHEX3Aobjecttype406019*) newObj((&NTI406015), sizeof(PluginHEX3Aobjecttype406019));
	asgnRefNoCycle((void**) (&(*LOC1).fn), getident_167463(fn));
	asgnRefNoCycle((void**) (&(*LOC1).module), getident_167463(module));
	asgnRefNoCycle((void**) (&(*LOC1).package), getident_167463(package));
	(*LOC1).t = t;
	asgnRef((void**) (&(*LOC1).next), oldhead);
	asgnRef((void**) (&head_406089), LOC1);
}

N_NIMCALL(NIM_BOOL, pluginmatches_406029)(PluginHEX3Aobjecttype406019* p, Tsym190843* s) {
	NIM_BOOL result;
	Tsym190843* module;
	Tsym190843* package;
{	result = 0;
	{
		if (!!(((*(*s).name).Sup.id == (*(*p).fn).Sup.id))) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	module = (*s).owner;
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = (module == NIM_NIL);
		if (LOC8) goto LA9;
		LOC8 = !(((*module).kind == ((NU8) 6)));
		LA9: ;
		LOC7 = LOC8;
		if (LOC7) goto LA10;
		LOC7 = !(((*(*module).name).Sup.id == (*(*p).module).Sup.id));
		LA10: ;
		if (!LOC7) goto LA11;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA11: ;
	package = (*module).owner;
	{
		NIM_BOOL LOC15;
		NIM_BOOL LOC16;
		LOC15 = 0;
		LOC16 = 0;
		LOC16 = (package == NIM_NIL);
		if (LOC16) goto LA17;
		LOC16 = !(((*package).kind == ((NU8) 24)));
		LA17: ;
		LOC15 = LOC16;
		if (LOC15) goto LA18;
		LOC15 = !(((*(*package).name).Sup.id == (*(*p).package).Sup.id));
		LA18: ;
		if (!LOC15) goto LA19;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA19: ;
	result = NIM_TRUE;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Transformation406013, getplugin_406094)(Tsym190843* fn) {
	Transformation406013 result;
	PluginHEX3Aobjecttype406019* it;
{	result = 0;
	it = head_406089;
	{
		while (1) {
			if (!!((it == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = pluginmatches_406029(it, fn);
				if (!LOC5) goto LA6;
				result = (*it).t;
				goto BeforeRet;
			}
			LA6: ;
			it = (*it).next;
		} LA2: ;
	}
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_pluginsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_pluginsDatInit)(void) {
static TNimNode* TMP959[5];
static TNimNode TMP953[6];
NTI406019.size = sizeof(PluginHEX3Aobjecttype406019);
NTI406019.kind = 18;
NTI406019.base = 0;
TMP959[0] = &TMP953[1];
TMP953[1].kind = 1;
TMP953[1].offset = offsetof(PluginHEX3Aobjecttype406019, fn);
TMP953[1].typ = (&NTI167019);
TMP953[1].name = "fn";
TMP959[1] = &TMP953[2];
TMP953[2].kind = 1;
TMP953[2].offset = offsetof(PluginHEX3Aobjecttype406019, module);
TMP953[2].typ = (&NTI167019);
TMP953[2].name = "module";
TMP959[2] = &TMP953[3];
TMP953[3].kind = 1;
TMP953[3].offset = offsetof(PluginHEX3Aobjecttype406019, package);
TMP953[3].typ = (&NTI167019);
TMP953[3].name = "package";
TMP959[3] = &TMP953[4];
NTI406013.size = sizeof(Transformation406013);
NTI406013.kind = 25;
NTI406013.base = 0;
NTI406013.flags = 3;
TMP953[4].kind = 1;
TMP953[4].offset = offsetof(PluginHEX3Aobjecttype406019, t);
TMP953[4].typ = (&NTI406013);
TMP953[4].name = "t";
TMP959[4] = &TMP953[5];
TMP953[5].kind = 1;
TMP953[5].offset = offsetof(PluginHEX3Aobjecttype406019, next);
TMP953[5].typ = (&NTI406015);
TMP953[5].name = "next";
TMP953[0].len = 5; TMP953[0].kind = 2; TMP953[0].sons = &TMP959[0];
NTI406019.node = &TMP953[0];
NTI406015.size = sizeof(PluginHEX3Aobjecttype406019*);
NTI406015.kind = 22;
NTI406015.base = (&NTI406019);
NTI406015.marker = TMP960;
}

