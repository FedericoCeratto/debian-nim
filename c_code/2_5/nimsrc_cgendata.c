/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct TY457155 TY457155;
typedef struct Tcgen457038 Tcgen457038;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tpasscontext242005 Tpasscontext242005;
typedef struct TNimObject TNimObject;
typedef struct Tsym191843 Tsym191843;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tidtable191861 Tidtable191861;
typedef struct Tidpairseq191859 Tidpairseq191859;
typedef struct Intset188056 Intset188056;
typedef struct Ttrunk188052 Ttrunk188052;
typedef struct Ttrunkseq188054 Ttrunkseq188054;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tcproc457034 Tcproc457034;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tnodetable191873 Tnodetable191873;
typedef struct Tnodepairseq191871 Tnodepairseq191871;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct TY164351 TY164351;
typedef struct TY457106 TY457106;
typedef struct Tblock457032 Tblock457032;
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
typedef struct Tidobj168015 Tidobj168015;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Ttype191849 Ttype191849;
typedef struct Tident168021 Tident168021;
typedef struct Tnode191813 Tnode191813;
typedef struct Tloc191827 Tloc191827;
typedef struct Tlib191831 Tlib191831;
typedef struct Tidpair191857 Tidpair191857;
typedef struct Tnodepair191869 Tnodepair191869;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct TY191933 TY191933;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext242005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef Ropeobj162009* Tcfilesections457022[18];
struct  Tidtable191861  {
NI counter;
Tidpairseq191859* data;
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
struct  Tnodetable191873  {
NI counter;
Tnodepairseq191871* data;
};
typedef Ropeobj162009* TY457143[10];
struct  Tcgen457038  {
  Tpasscontext242005 Sup;
Tsym191843* module;
NimStringDesc* filename;
Tcfilesections457022 s;
NIM_BOOL preventstacktrace;
NIM_BOOL usesthreadvars;
NIM_BOOL framedeclared;
NIM_BOOL isheaderfile;
NIM_BOOL includesstringh;
NIM_BOOL objhaskidsvalid;
NimStringDesc* cfilename;
Tidtable191861 typecache;
Tidtable191861 forwtypecache;
Intset188056 declaredthings;
Intset188056 declaredprotos;
Tlinkedlist130028 headerfiles;
Intset188056 typeinfomarker;
Tcproc457034* initproc;
Tcproc457034* postinitproc;
Tcproc457034* preinitproc;
Ttypeseq191845* typestack;
Tnodetable191873 datacache;
Tsymseq191815* forwardedprocs;
NI typenodes;
NI nimtypes;
Ropeobj162009* typenodesname;
Ropeobj162009* nimtypesname;
NI labels;
TY457143 extensionloaders;
Ropeobj162009* injectstmt;
};
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tcproc457034  {
Tsym191843* prc;
NIM_BOOL beforeretneeded;
NIM_BOOL threadvaraccessed;
Tlineinfo164338 lastlineinfo;
Tnodeseq191807* nestedtrystmts;
NI inexceptblock;
TY164351* finallysafepoints;
NI labels;
TY457106* blocks;
NI breakidx;
NU32 options;
NI maxframelen;
Tcgen457038* module;
NI withinloop;
NI splitdecls;
NI gcframeid;
Ropeobj162009* gcframetype;
};
typedef Ropeobj162009* Tcprocsections457026[3];
struct  Tblock457032  {
NI id;
Ropeobj162009* label;
Tcprocsections457026 sections;
NIM_BOOL isloop;
NI16 nestedtrystmts;
NI16 nestedexceptstmts;
NI16 framelen;
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
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
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
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
};
struct  Tidpair191857  {
Tidobj168015* key;
TNimObject* val;
};
typedef NI TY27420[16];
struct  Ttrunk188052  {
Ttrunk188052* next;
NI key;
TY27420 bits;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tnodepair191869  {
NI h;
Tnode191813* key;
NI val;
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
struct  Tlib191831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode191813* path;
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
struct TY457155 {
  TGenericSeq Sup;
  Tcgen457038* data[SEQ_DECL_SIZE];
};
struct TY457106 {
  TGenericSeq Sup;
  Tblock457032 data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct TY164351 {
  TGenericSeq Sup;
  Ropeobj162009* data[SEQ_DECL_SIZE];
};
struct Tidpairseq191859 {
  TGenericSeq Sup;
  Tidpair191857 data[SEQ_DECL_SIZE];
};
struct Ttrunkseq188054 {
  TGenericSeq Sup;
  Ttrunk188052* data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq191871 {
  TGenericSeq Sup;
  Tnodepair191869 data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1053)(void* p, NI op);
N_NIMCALL(void, TMP1054)(void* p, NI op);
N_NIMCALL(void, TMP1058)(void* p, NI op);
N_NIMCALL(void, TMP1059)(void* p, NI op);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_51804)(Tcell46346* c);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46346* c);
static N_INLINE(void, rtladdcycleroot_50623)(Tcell46346* c);
N_NOINLINE(void, incl_47065)(Tcellset46358* s, Tcell46346* cell);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52222)(Tcell46346* c);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
Ropeobj162009* mainmodprocs_457150;
Ropeobj162009* mainmodinit_457151;
Ropeobj162009* othermodsinit_457152;
Ropeobj162009* maindatinit_457153;
Ropeobj162009* gmapping_457154;
TY457155* gmodules_457172;
extern TNimType NTI242005; /* TPassContext */
TNimType NTI457038; /* TCGen */
extern TNimType NTI191811; /* PSym */
extern TNimType NTI149; /* string */
extern TNimType NTI162007; /* Rope */
TNimType NTI457022; /* TCFileSections */
extern TNimType NTI138; /* bool */
extern TNimType NTI191861; /* TIdTable */
extern TNimType NTI188056; /* IntSet */
extern TNimType NTI130028; /* TLinkedList */
TNimType NTI457034; /* TCProc */
extern TNimType NTI164338; /* TLineInfo */
extern TNimType NTI191807; /* TNodeSeq */
extern TNimType NTI108; /* int */
extern TNimType NTI164351; /* seq[Rope] */
extern TNimType NTI3407; /* Natural */
TNimType NTI457032; /* TBlock */
TNimType NTI457026; /* TCProcSections */
extern TNimType NTI112; /* int16 */
TNimType NTI457106; /* seq[TBlock] */
extern TNimType NTI155016; /* TOptions */
TNimType NTI457030; /* BProc */
extern TNimType NTI191845; /* TTypeSeq */
extern TNimType NTI191873; /* TNodeTable */
extern TNimType NTI191815; /* TSymSeq */
TNimType NTI457143; /* array[48..57, Rope] */
TNimType NTI457028; /* BModule */
TNimType NTI457155; /* seq[BModule] */
extern Tgcheap48216 gch_48244;
NI gforwardedprocscounter_457173;
extern NU32 goptions_155126;
N_NIMCALL(void, TMP1053)(void* p, NI op) {
	TY457106* a;
	NI LOC1;
	NI LOC2;
	a = (TY457106*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, TMP1054)(void* p, NI op) {
	Tcproc457034* a;
	a = (Tcproc457034*)p;
	nimGCvisit((void*)(*a).prc, op);
	nimGCvisit((void*)(*a).nestedtrystmts, op);
	nimGCvisit((void*)(*a).finallysafepoints, op);
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).gcframetype, op);
}
N_NIMCALL(void, TMP1058)(void* p, NI op) {
	Tcgen457038* a;
	NI LOC1;
	NI LOC2;
	a = (Tcgen457038*)p;
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).filename, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 18; LOC1++) {
	nimGCvisit((void*)(*a).s[LOC1], op);
	}
	nimGCvisit((void*)(*a).cfilename, op);
	nimGCvisit((void*)(*a).typecache.data, op);
	nimGCvisit((void*)(*a).forwtypecache.data, op);
	nimGCvisit((void*)(*a).declaredthings.head, op);
	nimGCvisit((void*)(*a).declaredthings.data, op);
	nimGCvisit((void*)(*a).declaredprotos.head, op);
	nimGCvisit((void*)(*a).declaredprotos.data, op);
	nimGCvisit((void*)(*a).headerfiles.head, op);
	nimGCvisit((void*)(*a).headerfiles.tail, op);
	nimGCvisit((void*)(*a).typeinfomarker.head, op);
	nimGCvisit((void*)(*a).typeinfomarker.data, op);
	nimGCvisit((void*)(*a).initproc, op);
	nimGCvisit((void*)(*a).postinitproc, op);
	nimGCvisit((void*)(*a).preinitproc, op);
	nimGCvisit((void*)(*a).typestack, op);
	nimGCvisit((void*)(*a).datacache.data, op);
	nimGCvisit((void*)(*a).forwardedprocs, op);
	nimGCvisit((void*)(*a).typenodesname, op);
	nimGCvisit((void*)(*a).nimtypesname, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 10; LOC2++) {
	nimGCvisit((void*)(*a).extensionloaders[LOC2], op);
	}
	nimGCvisit((void*)(*a).injectstmt, op);
}
N_NIMCALL(void, TMP1059)(void* p, NI op) {
	TY457155* a;
	NI LOC1;
	a = (TY457155*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(void, rtladdzct_51404)(Tcell46346* c) {
	addzct_49817((&gch_48244.zct), c);
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

static N_INLINE(void, decref_51804)(Tcell46346* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
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

static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr) {
	Tcell46346* result;
	result = 0;
	result = ((Tcell46346*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46346))))));
	return result;
}

static N_INLINE(void, nimGCunref)(void* p) {
	Tcell46346* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_49846(p);
	decref_51804(LOC1);
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

static N_INLINE(void, incref_52222)(Tcell46346* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49867(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50623(c);
	}
	LA4: ;
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46346* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

N_NIMCALL(Tcproc457034*, newproc_457229)(Tsym191843* prc, Tcgen457038* module) {
	Tcproc457034* result;
	result = 0;
	result = (Tcproc457034*) newObj((&NTI457030), sizeof(Tcproc457034));
	asgnRefNoCycle((void**) (&(*result).prc), prc);
	asgnRef((void**) (&(*result).module), module);
	{
		if (!!((prc == NIM_NIL))) goto LA3;
		(*result).options = (*prc).options;
	}
	goto LA1;
	LA3: ;
	{
		(*result).options = goptions_155126;
	}
	LA1: ;
	if ((*result).blocks) nimGCunrefNoCycle((*result).blocks);
	(*result).blocks = (TY457106*) newSeqRC1((&NTI457106), ((NI) 1));
	if ((*result).nestedtrystmts) nimGCunrefNoCycle((*result).nestedtrystmts);
	(*result).nestedtrystmts = (Tnodeseq191807*) newSeqRC1((&NTI191807), 0);
	if ((*result).finallysafepoints) nimGCunrefNoCycle((*result).finallysafepoints);
	(*result).finallysafepoints = (TY164351*) newSeqRC1((&NTI164351), 0);
	return result;
}

N_NIMCALL(Tcgen457038*, bmod_457218)(Tsym191843* module) {
	Tcgen457038* result;
	result = 0;
	result = gmodules_457172->data[(*module).position];
	return result;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_cgendataInit)(void) {
	if (gmodules_457172) nimGCunref(gmodules_457172);
	gmodules_457172 = (TY457155*) newSeqRC1((&NTI457155), 0);
	gforwardedprocscounter_457173 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_cgendataDatInit)(void) {
static TNimNode* TMP1045[29];
static TNimNode* TMP1051[17];
static TNimNode* TMP1052[7];
static TNimNode TMP1043[56];
NTI457038.size = sizeof(Tcgen457038);
NTI457038.kind = 17;
NTI457038.base = (&NTI242005);
TMP1045[0] = &TMP1043[1];
TMP1043[1].kind = 1;
TMP1043[1].offset = offsetof(Tcgen457038, module);
TMP1043[1].typ = (&NTI191811);
TMP1043[1].name = "module";
TMP1045[1] = &TMP1043[2];
TMP1043[2].kind = 1;
TMP1043[2].offset = offsetof(Tcgen457038, filename);
TMP1043[2].typ = (&NTI149);
TMP1043[2].name = "filename";
TMP1045[2] = &TMP1043[3];
NTI457022.size = sizeof(Tcfilesections457022);
NTI457022.kind = 16;
NTI457022.base = (&NTI162007);
NTI457022.flags = 2;
TMP1043[3].kind = 1;
TMP1043[3].offset = offsetof(Tcgen457038, s);
TMP1043[3].typ = (&NTI457022);
TMP1043[3].name = "s";
TMP1045[3] = &TMP1043[4];
TMP1043[4].kind = 1;
TMP1043[4].offset = offsetof(Tcgen457038, preventstacktrace);
TMP1043[4].typ = (&NTI138);
TMP1043[4].name = "preventStackTrace";
TMP1045[4] = &TMP1043[5];
TMP1043[5].kind = 1;
TMP1043[5].offset = offsetof(Tcgen457038, usesthreadvars);
TMP1043[5].typ = (&NTI138);
TMP1043[5].name = "usesThreadVars";
TMP1045[5] = &TMP1043[6];
TMP1043[6].kind = 1;
TMP1043[6].offset = offsetof(Tcgen457038, framedeclared);
TMP1043[6].typ = (&NTI138);
TMP1043[6].name = "frameDeclared";
TMP1045[6] = &TMP1043[7];
TMP1043[7].kind = 1;
TMP1043[7].offset = offsetof(Tcgen457038, isheaderfile);
TMP1043[7].typ = (&NTI138);
TMP1043[7].name = "isHeaderFile";
TMP1045[7] = &TMP1043[8];
TMP1043[8].kind = 1;
TMP1043[8].offset = offsetof(Tcgen457038, includesstringh);
TMP1043[8].typ = (&NTI138);
TMP1043[8].name = "includesStringh";
TMP1045[8] = &TMP1043[9];
TMP1043[9].kind = 1;
TMP1043[9].offset = offsetof(Tcgen457038, objhaskidsvalid);
TMP1043[9].typ = (&NTI138);
TMP1043[9].name = "objHasKidsValid";
TMP1045[9] = &TMP1043[10];
TMP1043[10].kind = 1;
TMP1043[10].offset = offsetof(Tcgen457038, cfilename);
TMP1043[10].typ = (&NTI149);
TMP1043[10].name = "cfilename";
TMP1045[10] = &TMP1043[11];
TMP1043[11].kind = 1;
TMP1043[11].offset = offsetof(Tcgen457038, typecache);
TMP1043[11].typ = (&NTI191861);
TMP1043[11].name = "typeCache";
TMP1045[11] = &TMP1043[12];
TMP1043[12].kind = 1;
TMP1043[12].offset = offsetof(Tcgen457038, forwtypecache);
TMP1043[12].typ = (&NTI191861);
TMP1043[12].name = "forwTypeCache";
TMP1045[12] = &TMP1043[13];
TMP1043[13].kind = 1;
TMP1043[13].offset = offsetof(Tcgen457038, declaredthings);
TMP1043[13].typ = (&NTI188056);
TMP1043[13].name = "declaredThings";
TMP1045[13] = &TMP1043[14];
TMP1043[14].kind = 1;
TMP1043[14].offset = offsetof(Tcgen457038, declaredprotos);
TMP1043[14].typ = (&NTI188056);
TMP1043[14].name = "declaredProtos";
TMP1045[14] = &TMP1043[15];
TMP1043[15].kind = 1;
TMP1043[15].offset = offsetof(Tcgen457038, headerfiles);
TMP1043[15].typ = (&NTI130028);
TMP1043[15].name = "headerFiles";
TMP1045[15] = &TMP1043[16];
TMP1043[16].kind = 1;
TMP1043[16].offset = offsetof(Tcgen457038, typeinfomarker);
TMP1043[16].typ = (&NTI188056);
TMP1043[16].name = "typeInfoMarker";
TMP1045[16] = &TMP1043[17];
NTI457034.size = sizeof(Tcproc457034);
NTI457034.kind = 18;
NTI457034.base = 0;
TMP1051[0] = &TMP1043[19];
TMP1043[19].kind = 1;
TMP1043[19].offset = offsetof(Tcproc457034, prc);
TMP1043[19].typ = (&NTI191811);
TMP1043[19].name = "prc";
TMP1051[1] = &TMP1043[20];
TMP1043[20].kind = 1;
TMP1043[20].offset = offsetof(Tcproc457034, beforeretneeded);
TMP1043[20].typ = (&NTI138);
TMP1043[20].name = "beforeRetNeeded";
TMP1051[2] = &TMP1043[21];
TMP1043[21].kind = 1;
TMP1043[21].offset = offsetof(Tcproc457034, threadvaraccessed);
TMP1043[21].typ = (&NTI138);
TMP1043[21].name = "threadVarAccessed";
TMP1051[3] = &TMP1043[22];
TMP1043[22].kind = 1;
TMP1043[22].offset = offsetof(Tcproc457034, lastlineinfo);
TMP1043[22].typ = (&NTI164338);
TMP1043[22].name = "lastLineInfo";
TMP1051[4] = &TMP1043[23];
TMP1043[23].kind = 1;
TMP1043[23].offset = offsetof(Tcproc457034, nestedtrystmts);
TMP1043[23].typ = (&NTI191807);
TMP1043[23].name = "nestedTryStmts";
TMP1051[5] = &TMP1043[24];
TMP1043[24].kind = 1;
TMP1043[24].offset = offsetof(Tcproc457034, inexceptblock);
TMP1043[24].typ = (&NTI108);
TMP1043[24].name = "inExceptBlock";
TMP1051[6] = &TMP1043[25];
TMP1043[25].kind = 1;
TMP1043[25].offset = offsetof(Tcproc457034, finallysafepoints);
TMP1043[25].typ = (&NTI164351);
TMP1043[25].name = "finallySafePoints";
TMP1051[7] = &TMP1043[26];
TMP1043[26].kind = 1;
TMP1043[26].offset = offsetof(Tcproc457034, labels);
TMP1043[26].typ = (&NTI3407);
TMP1043[26].name = "labels";
TMP1051[8] = &TMP1043[27];
NTI457032.size = sizeof(Tblock457032);
NTI457032.kind = 18;
NTI457032.base = 0;
NTI457032.flags = 2;
TMP1052[0] = &TMP1043[29];
TMP1043[29].kind = 1;
TMP1043[29].offset = offsetof(Tblock457032, id);
TMP1043[29].typ = (&NTI108);
TMP1043[29].name = "id";
TMP1052[1] = &TMP1043[30];
TMP1043[30].kind = 1;
TMP1043[30].offset = offsetof(Tblock457032, label);
TMP1043[30].typ = (&NTI162007);
TMP1043[30].name = "label";
TMP1052[2] = &TMP1043[31];
NTI457026.size = sizeof(Tcprocsections457026);
NTI457026.kind = 16;
NTI457026.base = (&NTI162007);
NTI457026.flags = 2;
TMP1043[31].kind = 1;
TMP1043[31].offset = offsetof(Tblock457032, sections);
TMP1043[31].typ = (&NTI457026);
TMP1043[31].name = "sections";
TMP1052[3] = &TMP1043[32];
TMP1043[32].kind = 1;
TMP1043[32].offset = offsetof(Tblock457032, isloop);
TMP1043[32].typ = (&NTI138);
TMP1043[32].name = "isLoop";
TMP1052[4] = &TMP1043[33];
TMP1043[33].kind = 1;
TMP1043[33].offset = offsetof(Tblock457032, nestedtrystmts);
TMP1043[33].typ = (&NTI112);
TMP1043[33].name = "nestedTryStmts";
TMP1052[5] = &TMP1043[34];
TMP1043[34].kind = 1;
TMP1043[34].offset = offsetof(Tblock457032, nestedexceptstmts);
TMP1043[34].typ = (&NTI112);
TMP1043[34].name = "nestedExceptStmts";
TMP1052[6] = &TMP1043[35];
TMP1043[35].kind = 1;
TMP1043[35].offset = offsetof(Tblock457032, framelen);
TMP1043[35].typ = (&NTI112);
TMP1043[35].name = "frameLen";
TMP1043[28].len = 7; TMP1043[28].kind = 2; TMP1043[28].sons = &TMP1052[0];
NTI457032.node = &TMP1043[28];
NTI457106.size = sizeof(TY457106*);
NTI457106.kind = 24;
NTI457106.base = (&NTI457032);
NTI457106.flags = 2;
NTI457106.marker = TMP1053;
TMP1043[27].kind = 1;
TMP1043[27].offset = offsetof(Tcproc457034, blocks);
TMP1043[27].typ = (&NTI457106);
TMP1043[27].name = "blocks";
TMP1051[9] = &TMP1043[36];
TMP1043[36].kind = 1;
TMP1043[36].offset = offsetof(Tcproc457034, breakidx);
TMP1043[36].typ = (&NTI108);
TMP1043[36].name = "breakIdx";
TMP1051[10] = &TMP1043[37];
TMP1043[37].kind = 1;
TMP1043[37].offset = offsetof(Tcproc457034, options);
TMP1043[37].typ = (&NTI155016);
TMP1043[37].name = "options";
TMP1051[11] = &TMP1043[38];
TMP1043[38].kind = 1;
TMP1043[38].offset = offsetof(Tcproc457034, maxframelen);
TMP1043[38].typ = (&NTI108);
TMP1043[38].name = "maxFrameLen";
TMP1051[12] = &TMP1043[39];
TMP1043[39].kind = 1;
TMP1043[39].offset = offsetof(Tcproc457034, module);
TMP1043[39].typ = (&NTI457028);
TMP1043[39].name = "module";
TMP1051[13] = &TMP1043[40];
TMP1043[40].kind = 1;
TMP1043[40].offset = offsetof(Tcproc457034, withinloop);
TMP1043[40].typ = (&NTI108);
TMP1043[40].name = "withinLoop";
TMP1051[14] = &TMP1043[41];
TMP1043[41].kind = 1;
TMP1043[41].offset = offsetof(Tcproc457034, splitdecls);
TMP1043[41].typ = (&NTI108);
TMP1043[41].name = "splitDecls";
TMP1051[15] = &TMP1043[42];
TMP1043[42].kind = 1;
TMP1043[42].offset = offsetof(Tcproc457034, gcframeid);
TMP1043[42].typ = (&NTI3407);
TMP1043[42].name = "gcFrameId";
TMP1051[16] = &TMP1043[43];
TMP1043[43].kind = 1;
TMP1043[43].offset = offsetof(Tcproc457034, gcframetype);
TMP1043[43].typ = (&NTI162007);
TMP1043[43].name = "gcFrameType";
TMP1043[18].len = 17; TMP1043[18].kind = 2; TMP1043[18].sons = &TMP1051[0];
NTI457034.node = &TMP1043[18];
NTI457030.size = sizeof(Tcproc457034*);
NTI457030.kind = 22;
NTI457030.base = (&NTI457034);
NTI457030.marker = TMP1054;
TMP1043[17].kind = 1;
TMP1043[17].offset = offsetof(Tcgen457038, initproc);
TMP1043[17].typ = (&NTI457030);
TMP1043[17].name = "initProc";
TMP1045[17] = &TMP1043[44];
TMP1043[44].kind = 1;
TMP1043[44].offset = offsetof(Tcgen457038, postinitproc);
TMP1043[44].typ = (&NTI457030);
TMP1043[44].name = "postInitProc";
TMP1045[18] = &TMP1043[45];
TMP1043[45].kind = 1;
TMP1043[45].offset = offsetof(Tcgen457038, preinitproc);
TMP1043[45].typ = (&NTI457030);
TMP1043[45].name = "preInitProc";
TMP1045[19] = &TMP1043[46];
TMP1043[46].kind = 1;
TMP1043[46].offset = offsetof(Tcgen457038, typestack);
TMP1043[46].typ = (&NTI191845);
TMP1043[46].name = "typeStack";
TMP1045[20] = &TMP1043[47];
TMP1043[47].kind = 1;
TMP1043[47].offset = offsetof(Tcgen457038, datacache);
TMP1043[47].typ = (&NTI191873);
TMP1043[47].name = "dataCache";
TMP1045[21] = &TMP1043[48];
TMP1043[48].kind = 1;
TMP1043[48].offset = offsetof(Tcgen457038, forwardedprocs);
TMP1043[48].typ = (&NTI191815);
TMP1043[48].name = "forwardedProcs";
TMP1045[22] = &TMP1043[49];
TMP1043[49].kind = 1;
TMP1043[49].offset = offsetof(Tcgen457038, typenodes);
TMP1043[49].typ = (&NTI108);
TMP1043[49].name = "typeNodes";
TMP1045[23] = &TMP1043[50];
TMP1043[50].kind = 1;
TMP1043[50].offset = offsetof(Tcgen457038, nimtypes);
TMP1043[50].typ = (&NTI108);
TMP1043[50].name = "nimTypes";
TMP1045[24] = &TMP1043[51];
TMP1043[51].kind = 1;
TMP1043[51].offset = offsetof(Tcgen457038, typenodesname);
TMP1043[51].typ = (&NTI162007);
TMP1043[51].name = "typeNodesName";
TMP1045[25] = &TMP1043[52];
TMP1043[52].kind = 1;
TMP1043[52].offset = offsetof(Tcgen457038, nimtypesname);
TMP1043[52].typ = (&NTI162007);
TMP1043[52].name = "nimTypesName";
TMP1045[26] = &TMP1043[53];
TMP1043[53].kind = 1;
TMP1043[53].offset = offsetof(Tcgen457038, labels);
TMP1043[53].typ = (&NTI3407);
TMP1043[53].name = "labels";
TMP1045[27] = &TMP1043[54];
NTI457143.size = sizeof(TY457143);
NTI457143.kind = 16;
NTI457143.base = (&NTI162007);
NTI457143.flags = 2;
TMP1043[54].kind = 1;
TMP1043[54].offset = offsetof(Tcgen457038, extensionloaders);
TMP1043[54].typ = (&NTI457143);
TMP1043[54].name = "extensionLoaders";
TMP1045[28] = &TMP1043[55];
TMP1043[55].kind = 1;
TMP1043[55].offset = offsetof(Tcgen457038, injectstmt);
TMP1043[55].typ = (&NTI162007);
TMP1043[55].name = "injectStmt";
TMP1043[0].len = 29; TMP1043[0].kind = 2; TMP1043[0].sons = &TMP1045[0];
NTI457038.node = &TMP1043[0];
NTI457028.size = sizeof(Tcgen457038*);
NTI457028.kind = 22;
NTI457028.base = (&NTI457038);
NTI457028.marker = TMP1058;
NTI457155.size = sizeof(TY457155*);
NTI457155.kind = 24;
NTI457155.base = (&NTI457028);
NTI457155.marker = TMP1059;
}

