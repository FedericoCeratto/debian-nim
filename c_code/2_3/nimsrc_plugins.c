/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct PluginHEX3Aobjecttype407019 PluginHEX3Aobjecttype407019;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode191813 Tnode191813;
typedef struct Tcontext245023 Tcontext245023;
typedef struct Tident168021 Tident168021;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Tsym191843 Tsym191843;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Ttype191849 Ttype191849;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tlib191831 Tlib191831;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tpasscontext242005 Tpasscontext242005;
typedef struct Tproccon245011 Tproccon245011;
typedef struct Intset188056 Intset188056;
typedef struct Ttrunk188052 Ttrunk188052;
typedef struct Ttrunkseq188054 Ttrunkseq188054;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tidtable191861 Tidtable191861;
typedef struct Tidpairseq191859 Tidpairseq191859;
typedef struct Tctx244048 Tctx244048;
typedef struct TY245141 TY245141;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tidpair191857 Tidpair191857;
typedef struct TY244253 TY244253;
typedef struct TY165033 TY165033;
typedef struct PprocHEX3Aobjecttype244232 PprocHEX3Aobjecttype244232;
typedef struct TY244272 TY244272;
typedef struct Tinstantiationpair245013 Tinstantiationpair245013;
typedef struct TY191933 TY191933;
typedef struct TY244233 TY244233;
typedef struct TY244239 TY244239;
typedef struct TY244273 TY244273;
typedef struct Vmargs244042 Vmargs244042;
typedef struct Tblock244030 Tblock244030;
typedef struct TY244213 TY244213;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tnode191813*, Transformation407013) (Tcontext245023* c, Tnode191813* n);
struct  PluginHEX3Aobjecttype407019  {
Tident168021* fn;
Tident168021* module;
Tident168021* package;
Transformation407013 t;
PluginHEX3Aobjecttype407019* next;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
};
struct  Tsym191843  {
  Tidobj168015 Sup;
NU8 kind;
union{
struct {Ttypeseq191845* typeinstcache;
Tscope191837* typscope;
} S1;
struct {TY191944* procinstcache;
Tsym191843* gcunsafetyreason;
} S2;
struct {TY191944* usedgenerics;
Tstrtable191817 tab;
} S3;
struct {Tsym191843* guard;
} S4;
} kindU;
NU16 magic;
Ttype191849* typ;
Tident168021* name;
Tlineinfo164338 info;
Tsym191843* owner;
NU32 flags;
Tnode191813* ast;
NU32 options;
NI position;
NI offset;
Tloc191827 loc;
Tlib191831* annex;
Tnode191813* constraint;
};
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
};
struct  Tnode191813  {
Ttype191849* typ;
Tlineinfo164338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym191843* sym;
} S4;
struct {Tident168021* ident;
} S5;
struct {Tnodeseq191807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tpasscontext242005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset188056  {
NI counter;
NI max;
Ttrunk188052* head;
Ttrunkseq188054* data;
};
struct  Tlinkedlist130028  {
Tlistentry130022* head;
Tlistentry130022* tail;
NI counter;
};
struct  Tidtable191861  {
NI counter;
Tidpairseq191859* data;
};
typedef N_NIMCALL_PTR(Tnode191813*, TY245072) (Tcontext245023* c, Tnode191813* n);
typedef N_NIMCALL_PTR(Tnode191813*, TY245077) (Tcontext245023* c, Tnode191813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode191813*, TY245085) (Tcontext245023* c, Tnode191813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode191813*, TY245093) (Tcontext245023* c, Tnode191813* n);
typedef N_NIMCALL_PTR(Tnode191813*, TY245098) (Tcontext245023* c, Tnode191813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode191813*, TY245106) (Tcontext245023* c, Tnode191813* n);
typedef N_NIMCALL_PTR(Tnode191813*, TY245111) (Tcontext245023* c, Tnode191813* n, Tnode191813* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype191849*, TY245118) (Tcontext245023* c, Tnode191813* n, Ttype191849* prev);
typedef struct {
N_NIMCALL_PTR(Tnode191813*, ClPrc) (Tcontext245023* c, Tidtable191861 pt, Tnode191813* n, void* ClEnv);
void* ClEnv;
} TY245124;
typedef struct {
N_NIMCALL_PTR(Tsym191843*, ClPrc) (Tcontext245023* c, Tsym191843* fn, Tidtable191861 pt, Tlineinfo164338 info, void* ClEnv);
void* ClEnv;
} TY245130;
typedef N_NIMCALL_PTR(Tsym191843*, TY245146) (Tcontext245023* c, Tsym191843* dc, Ttype191849* t, Tlineinfo164338 info, NU8 op);
struct  Tcontext245023  {
  Tpasscontext242005 Sup;
Tsym191843* module;
Tscope191837* currentscope;
Tscope191837* importtable;
Tscope191837* toplevelscope;
Tproccon245011* p;
Tsymseq191815* friendmodules;
NI instcounter;
Intset188056 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI incompilescontext;
NI ingenericinst;
Tsymseq191815* converters;
Tsymseq191815* patterns;
Tlinkedlist130028 optionstack;
Tidtable191861 symmapping;
Tlinkedlist130028 libs;
TY245072 semconstexpr;
TY245077 semexpr;
TY245085 semtryexpr;
TY245093 semtryconstexpr;
TY245098 semoperand;
TY245106 semconstboolexpr;
TY245111 semoverloadedcall;
TY245118 semtypenode;
TY245124 seminferredlambda;
TY245130 semgenerateinstance;
Intset188056 includedfiles;
Tstrtable191817 userpragmas;
Tctx244048* evalcontext;
Intset188056 unknownidents;
TY245141* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY245146 insttypeboundop;
};
typedef NI TY27420[8];
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
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Ttype191849  {
  Tidobj168015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq191845* sons;
Tnode191813* n;
Tsym191843* owner;
Tsym191843* sym;
Tsym191843* destructor;
Tsym191843* deepcopy;
Tsym191843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc191827 loc;
};
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib191831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode191813* path;
};
struct  Tproccon245011  {
Tsym191843* owner;
Tsym191843* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon245011* next;
NIM_BOOL wasforwarded;
Tnode191813* bracketexpr;
};
struct  Ttrunk188052  {
Ttrunk188052* next;
NI key;
TY27420 bits;
};
struct  Tidpair191857  {
Tidobj168015* key;
TNimObject* val;
};
struct  Tctx244048  {
  Tpasscontext242005 Sup;
TY244253* code;
TY165033* debug;
Tnode191813* globals;
Tnode191813* constants;
Ttypeseq191845* types;
Tnode191813* currentexceptiona;
Tnode191813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype244232* prc;
Tsym191843* module;
Tnode191813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo164338 comesfromheuristic;
TY244272* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair245013  {
Tsym191843* genericsym;
Tinstantiation191833* inst;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct TY244239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY244239 TY244236[256];
struct  PprocHEX3Aobjecttype244232  {
TY244233* blocks;
Tsym191843* sym;
TY244236 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs244042* args, void* ClEnv);
void* ClEnv;
} Vmcallback244044;
struct TY244273 {
NimStringDesc* Field0;
Vmcallback244044 Field1;
};
struct  Tblock244030  {
Tsym191843* label;
TY244213* fixups;
};
struct  Vmargs244042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode191813* currentexception;
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct Ttrunkseq188054 {
  TGenericSeq Sup;
  Ttrunk188052* data[SEQ_DECL_SIZE];
};
struct Tidpairseq191859 {
  TGenericSeq Sup;
  Tidpair191857 data[SEQ_DECL_SIZE];
};
struct TY245141 {
  TGenericSeq Sup;
  Tinstantiationpair245013 data[SEQ_DECL_SIZE];
};
struct TY244253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY165033 {
  TGenericSeq Sup;
  Tlineinfo164338 data[SEQ_DECL_SIZE];
};
struct TY244272 {
  TGenericSeq Sup;
  TY244273 data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY244233 {
  TGenericSeq Sup;
  Tblock244030 data[SEQ_DECL_SIZE];
};
struct TY244213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP962)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Tident168021*, getident_168463)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52222)(Tcell46346* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46346* c);
static N_INLINE(void, rtladdcycleroot_50623)(Tcell46346* c);
N_NOINLINE(void, incl_47065)(Tcellset46358* s, Tcell46346* cell);
static N_INLINE(void, decref_51804)(Tcell46346* c);
N_NIMCALL(NIM_BOOL, pluginmatches_407029)(PluginHEX3Aobjecttype407019* p, Tsym191843* s);
PluginHEX3Aobjecttype407019* head_407089;
TNimType NTI407019; /* Plugin:ObjectType */
extern TNimType NTI168019; /* PIdent */
TNimType NTI407013; /* Transformation */
TNimType NTI407015; /* Plugin */
extern Tgcheap48216 gch_48244;
N_NIMCALL(void, TMP962)(void* p, NI op) {
	PluginHEX3Aobjecttype407019* a;
	a = (PluginHEX3Aobjecttype407019*)p;
	nimGCvisit((void*)(*a).fn, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).package, op);
	nimGCvisit((void*)(*a).next, op);
}

static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr) {
	Tcell46346* result;
	result = 0;
	result = ((Tcell46346*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46346))))));
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
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46346* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50623)(Tcell46346* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_47065((&gch_48244.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_52222)(Tcell46346* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49867(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50623(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_51804)(Tcell46346* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_49867(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50623(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Tcell46346* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49846(src);
		incref_52222(LOC5);
	}
	LA3: ;
	{
		Tcell46346* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49846((*dest));
		decref_51804(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, registerplugin_407124)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation407013 t) {
	PluginHEX3Aobjecttype407019* oldhead;
	PluginHEX3Aobjecttype407019* LOC1;
	oldhead = head_407089;
	LOC1 = 0;
	LOC1 = (PluginHEX3Aobjecttype407019*) newObj((&NTI407015), sizeof(PluginHEX3Aobjecttype407019));
	asgnRefNoCycle((void**) (&(*LOC1).fn), getident_168463(fn));
	asgnRefNoCycle((void**) (&(*LOC1).module), getident_168463(module));
	asgnRefNoCycle((void**) (&(*LOC1).package), getident_168463(package));
	(*LOC1).t = t;
	asgnRef((void**) (&(*LOC1).next), oldhead);
	asgnRef((void**) (&head_407089), LOC1);
}

N_NIMCALL(NIM_BOOL, pluginmatches_407029)(PluginHEX3Aobjecttype407019* p, Tsym191843* s) {
	NIM_BOOL result;
	Tsym191843* module;
	Tsym191843* package;
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

N_NIMCALL(Transformation407013, getplugin_407094)(Tsym191843* fn) {
	Transformation407013 result;
	PluginHEX3Aobjecttype407019* it;
{	result = 0;
	it = head_407089;
	{
		while (1) {
			if (!!((it == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = pluginmatches_407029(it, fn);
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
static TNimNode* TMP961[5];
static TNimNode TMP955[6];
NTI407019.size = sizeof(PluginHEX3Aobjecttype407019);
NTI407019.kind = 18;
NTI407019.base = 0;
TMP961[0] = &TMP955[1];
TMP955[1].kind = 1;
TMP955[1].offset = offsetof(PluginHEX3Aobjecttype407019, fn);
TMP955[1].typ = (&NTI168019);
TMP955[1].name = "fn";
TMP961[1] = &TMP955[2];
TMP955[2].kind = 1;
TMP955[2].offset = offsetof(PluginHEX3Aobjecttype407019, module);
TMP955[2].typ = (&NTI168019);
TMP955[2].name = "module";
TMP961[2] = &TMP955[3];
TMP955[3].kind = 1;
TMP955[3].offset = offsetof(PluginHEX3Aobjecttype407019, package);
TMP955[3].typ = (&NTI168019);
TMP955[3].name = "package";
TMP961[3] = &TMP955[4];
NTI407013.size = sizeof(Transformation407013);
NTI407013.kind = 25;
NTI407013.base = 0;
NTI407013.flags = 3;
TMP955[4].kind = 1;
TMP955[4].offset = offsetof(PluginHEX3Aobjecttype407019, t);
TMP955[4].typ = (&NTI407013);
TMP955[4].name = "t";
TMP961[4] = &TMP955[5];
TMP955[5].kind = 1;
TMP955[5].offset = offsetof(PluginHEX3Aobjecttype407019, next);
TMP955[5].typ = (&NTI407015);
TMP955[5].name = "next";
TMP955[0].len = 5; TMP955[0].kind = 2; TMP955[0].sons = &TMP961[0];
NTI407019.node = &TMP955[0];
NTI407015.size = sizeof(PluginHEX3Aobjecttype407019*);
NTI407015.kind = 22;
NTI407015.base = (&NTI407019);
NTI407015.marker = TMP962;
}

