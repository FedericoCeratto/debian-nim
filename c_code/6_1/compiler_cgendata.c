/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Ropeobj175009 Ropeobj175009;
typedef struct TY508155 TY508155;
typedef struct Tcgen508038 Tcgen508038;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tpasscontext276005 Tpasscontext276005;
typedef struct TNimObject TNimObject;
typedef struct Tsym224841 Tsym224841;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tidtable224859 Tidtable224859;
typedef struct Tidpairseq224857 Tidpairseq224857;
typedef struct Intset221056 Intset221056;
typedef struct Trunk221052 Trunk221052;
typedef struct Trunkseq221054 Trunkseq221054;
typedef struct Tlinkedlist140028 Tlinkedlist140028;
typedef struct Tlistentry140022 Tlistentry140022;
typedef struct Tcproc508034 Tcproc508034;
typedef struct Ttypeseq224843 Ttypeseq224843;
typedef struct Tnodetable224871 Tnodetable224871;
typedef struct Tnodepairseq224869 Tnodepairseq224869;
typedef struct Tsymseq224811 Tsymseq224811;
typedef struct Tlineinfo189352 Tlineinfo189352;
typedef struct Tnodeseq224803 Tnodeseq224803;
typedef struct TY189365 TY189365;
typedef struct TY508106 TY508106;
typedef struct Tblock508032 Tblock508032;
typedef struct Cell48947 Cell48947;
typedef struct Cellseq48963 Cellseq48963;
typedef struct Gcheap51018 Gcheap51018;
typedef struct Gcstack51016 Gcstack51016;
typedef struct Cellset48959 Cellset48959;
typedef struct Pagedesc48955 Pagedesc48955;
typedef struct Memregion30890 Memregion30890;
typedef struct Smallchunk30842 Smallchunk30842;
typedef struct Llchunk30884 Llchunk30884;
typedef struct Bigchunk30844 Bigchunk30844;
typedef struct Intset30817 Intset30817;
typedef struct Trunk30813 Trunk30813;
typedef struct Avlnode30888 Avlnode30888;
typedef struct Gcstat51014 Gcstat51014;
typedef struct Tidobj197015 Tidobj197015;
typedef struct Tscope224835 Tscope224835;
typedef struct TY224944 TY224944;
typedef struct Tstrtable224813 Tstrtable224813;
typedef struct Ttype224847 Ttype224847;
typedef struct Tident197021 Tident197021;
typedef struct Tnode224809 Tnode224809;
typedef struct Tloc224823 Tloc224823;
typedef struct Tlib224827 Tlib224827;
typedef struct Tidpair224855 Tidpair224855;
typedef struct Tnodepair224867 Tnodepair224867;
typedef struct Basechunk30840 Basechunk30840;
typedef struct Freecell30832 Freecell30832;
typedef struct Tinstantiation224831 Tinstantiation224831;
typedef struct TY224932 TY224932;
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef N_NIMCALL_PTR(void, TY3889) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3894) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3889 marker;
TY3894 deepcopy;
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
struct  Tpasscontext276005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef Ropeobj175009* Tcfilesections508022[18];
struct  Tidtable224859  {
NI counter;
Tidpairseq224857* data;
};
struct  Intset221056  {
NI counter;
NI max;
Trunk221052* head;
Trunkseq221054* data;
};
struct  Tlinkedlist140028  {
Tlistentry140022* head;
Tlistentry140022* tail;
NI counter;
};
struct  Tnodetable224871  {
NI counter;
Tnodepairseq224869* data;
};
typedef Ropeobj175009* TY508144[10];
struct  Tcgen508038  {
  Tpasscontext276005 Sup;
Tsym224841* module;
NimStringDesc* filename;
Tcfilesections508022 s;
NIM_BOOL preventstacktrace;
NIM_BOOL usesthreadvars;
NIM_BOOL framedeclared;
NIM_BOOL isheaderfile;
NIM_BOOL includesstringh;
NIM_BOOL objhaskidsvalid;
NimStringDesc* cfilename;
Tidtable224859 typecache;
Tidtable224859 forwtypecache;
Intset221056 declaredthings;
Intset221056 declaredprotos;
Tlinkedlist140028 headerfiles;
Intset221056 typeinfomarker;
Tcproc508034* initproc;
Tcproc508034* postinitproc;
Tcproc508034* preinitproc;
Ttypeseq224843* typestack;
Tnodetable224871 datacache;
Tsymseq224811* forwardedprocs;
NI typenodes;
NI nimtypes;
Ropeobj175009* typenodesname;
Ropeobj175009* nimtypesname;
NI labels;
TY508144 extensionloaders;
Ropeobj175009* injectstmt;
};
struct  Tlineinfo189352  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tcproc508034  {
Tsym224841* prc;
NIM_BOOL beforeretneeded;
NIM_BOOL threadvaraccessed;
Tlineinfo189352 lastlineinfo;
Tnodeseq224803* nestedtrystmts;
NI inexceptblock;
TY189365* finallysafepoints;
NI labels;
TY508106* blocks;
NI breakidx;
NU32 options;
NI maxframelen;
Tcgen508038* module;
NI withinloop;
NI splitdecls;
NI gcframeid;
Ropeobj175009* gcframetype;
};
typedef Ropeobj175009* Tcprocsections508026[3];
struct  Tblock508032  {
NI id;
Ropeobj175009* label;
Tcprocsections508026 sections;
NIM_BOOL isloop;
NI16 nestedtrystmts;
NI16 nestedexceptstmts;
NI16 framelen;
};
struct  Cell48947  {
NI refcount;
TNimType* typ;
};
struct  Cellseq48963  {
NI len;
NI cap;
Cell48947** d;
};
struct  Cellset48959  {
NI counter;
NI max;
Pagedesc48955* head;
Pagedesc48955** data;
};
typedef Smallchunk30842* TY30905[512];
typedef Trunk30813* Trunkbuckets30815[256];
struct  Intset30817  {
Trunkbuckets30815 data;
};
struct  Memregion30890  {
NI minlargeobj;
NI maxlargeobj;
TY30905 freesmallchunks;
Llchunk30884* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30844* freechunkslist;
Intset30817 chunkstarts;
Avlnode30888* root;
Avlnode30888* deleted;
Avlnode30888* last;
Avlnode30888* freeavlnodes;
};
struct  Gcstat51014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap51018  {
Gcstack51016* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq48963 zct;
Cellseq48963 decstack;
Cellset48959 cycleroots;
Cellseq48963 tempstack;
NI recgclock;
Memregion30890 region;
Gcstat51014 stat;
};
struct  Tidobj197015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable224813  {
NI counter;
Tsymseq224811* data;
};
struct  Tloc224823  {
NU8 k;
NU8 s;
NU16 flags;
Ttype224847* t;
Ropeobj175009* r;
Ropeobj175009* heaproot;
};
struct  Tsym224841  {
  Tidobj197015 Sup;
NU8 kind;
union{
struct {Ttypeseq224843* typeinstcache;
Tscope224835* typscope;
} S1;
struct {TY224944* procinstcache;
Tsym224841* gcunsafetyreason;
} S2;
struct {TY224944* usedgenerics;
Tstrtable224813 tab;
} S3;
struct {Tsym224841* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype224847* typ;
Tident197021* name;
Tlineinfo189352 info;
Tsym224841* owner;
NU32 flags;
Tnode224809* ast;
NU32 options;
NI position;
NI offset;
Tloc224823 loc;
Tlib224827* annex;
Tnode224809* constraint;
};
struct  Ropeobj175009  {
  TNimObject Sup;
Ropeobj175009* left;
Ropeobj175009* right;
NI length;
NimStringDesc* data;
};
struct  Tidpair224855  {
Tidobj197015* key;
TNimObject* val;
};
typedef NI TY30821[16];
struct  Trunk221052  {
Trunk221052* next;
NI key;
TY30821 bits;
};
struct  Tlistentry140022  {
  TNimObject Sup;
Tlistentry140022* prev;
Tlistentry140022* next;
};
struct  Tnodepair224867  {
NI h;
Tnode224809* key;
NI val;
};
struct  Gcstack51016  {
Gcstack51016* prev;
Gcstack51016* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Pagedesc48955  {
Pagedesc48955* next;
NI key;
TY30821 bits;
};
struct  Basechunk30840  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30842  {
  Basechunk30840 Sup;
Smallchunk30842* next;
Smallchunk30842* prev;
Freecell30832* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30884  {
NI size;
NI acc;
Llchunk30884* next;
};
struct  Bigchunk30844  {
  Basechunk30840 Sup;
Bigchunk30844* next;
Bigchunk30844* prev;
NI align;
NF data;
};
struct  Trunk30813  {
Trunk30813* next;
NI key;
TY30821 bits;
};
typedef Avlnode30888* TY30895[2];
struct  Avlnode30888  {
TY30895 link;
NI key;
NI upperbound;
NI level;
};
struct  Tscope224835  {
NI depthlevel;
Tstrtable224813 symbols;
Tnodeseq224803* usingsyms;
Tscope224835* parent;
};
struct  Ttype224847  {
  Tidobj197015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq224843* sons;
Tnode224809* n;
Tsym224841* owner;
Tsym224841* sym;
Tsym224841* destructor;
Tsym224841* deepcopy;
Tsym224841* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc224823 loc;
};
struct  Tident197021  {
  Tidobj197015 Sup;
NimStringDesc* s;
Tident197021* next;
NI h;
};
struct  Tnode224809  {
Ttype224847* typ;
Tlineinfo189352 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym224841* sym;
} S4;
struct {Tident197021* ident;
} S5;
struct {Tnodeseq224803* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tlib224827  {
  Tlistentry140022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj175009* name;
Tnode224809* path;
};
struct  Freecell30832  {
Freecell30832* next;
NI zerofield;
};
struct  Tinstantiation224831  {
Tsym224841* sym;
Ttypeseq224843* concretetypes;
TY224932* usedby;
NI compilesid;
};
struct TY508155 {
  TGenericSeq Sup;
  Tcgen508038* data[SEQ_DECL_SIZE];
};
struct TY508106 {
  TGenericSeq Sup;
  Tblock508032 data[SEQ_DECL_SIZE];
};
struct Tnodeseq224803 {
  TGenericSeq Sup;
  Tnode224809* data[SEQ_DECL_SIZE];
};
struct TY189365 {
  TGenericSeq Sup;
  Ropeobj175009* data[SEQ_DECL_SIZE];
};
struct Tidpairseq224857 {
  TGenericSeq Sup;
  Tidpair224855 data[SEQ_DECL_SIZE];
};
struct Trunkseq221054 {
  TGenericSeq Sup;
  Trunk221052* data[SEQ_DECL_SIZE];
};
struct Ttypeseq224843 {
  TGenericSeq Sup;
  Ttype224847* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq224869 {
  TGenericSeq Sup;
  Tnodepair224867 data[SEQ_DECL_SIZE];
};
struct Tsymseq224811 {
  TGenericSeq Sup;
  Tsym224841* data[SEQ_DECL_SIZE];
};
struct TY224944 {
  TGenericSeq Sup;
  Tinstantiation224831* data[SEQ_DECL_SIZE];
};
struct TY224932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1132)(void* p, NI op);
N_NIMCALL(void, TMP1133)(void* p, NI op);
N_NIMCALL(void, TMP1137)(void* p, NI op);
N_NIMCALL(void, TMP1138)(void* p, NI op);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_54604)(Cell48947* c);
static N_INLINE(void, rtladdzct_54204)(Cell48947* c);
N_NOINLINE(void, addzct_52617)(Cellseq48963* s, Cell48947* c);
static N_INLINE(NIM_BOOL, canbecycleroot_52667)(Cell48947* c);
static N_INLINE(void, rtladdcycleroot_53423)(Cell48947* c);
N_NOINLINE(void, incl_49665)(Cellset48959* s, Cell48947* cell);
static N_INLINE(Cell48947*, usrtocell_52646)(void* usr);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_55022)(Cell48947* c);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
Ropeobj175009* mainmodprocs_508150;
Ropeobj175009* mainmodinit_508151;
Ropeobj175009* othermodsinit_508152;
Ropeobj175009* maindatinit_508153;
Ropeobj175009* gmapping_508154;
TY508155* gmodules_508172;
extern TNimType NTI276005; /* TPassContext */
TNimType NTI508038; /* TCGen */
extern TNimType NTI224807; /* PSym */
extern TNimType NTI149; /* string */
extern TNimType NTI175007; /* Rope */
TNimType NTI508022; /* TCFileSections */
extern TNimType NTI138; /* bool */
extern TNimType NTI224859; /* TIdTable */
extern TNimType NTI221056; /* IntSet */
extern TNimType NTI140028; /* TLinkedList */
TNimType NTI508034; /* TCProc */
extern TNimType NTI189352; /* TLineInfo */
extern TNimType NTI224803; /* TNodeSeq */
extern TNimType NTI108; /* int */
extern TNimType NTI189365; /* seq[Rope] */
extern TNimType NTI4007; /* Natural */
TNimType NTI508032; /* TBlock */
TNimType NTI508026; /* TCProcSections */
extern TNimType NTI112; /* int16 */
TNimType NTI508106; /* seq[TBlock] */
extern TNimType NTI166017; /* TOptions */
TNimType NTI508030; /* BProc */
extern TNimType NTI224843; /* TTypeSeq */
extern TNimType NTI224871; /* TNodeTable */
extern TNimType NTI224811; /* TSymSeq */
TNimType NTI508144; /* array[48..57, Rope] */
TNimType NTI508028; /* BModule */
TNimType NTI508155; /* seq[BModule] */
extern Gcheap51018 gch_51059;
NI gforwardedprocscounter_508173;
extern NU32 goptions_166130;
N_NIMCALL(void, TMP1132)(void* p, NI op) {
	TY508106* a;
	NI LOC1;
	NI LOC2;
	a = (TY508106*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, TMP1133)(void* p, NI op) {
	Tcproc508034* a;
	a = (Tcproc508034*)p;
	nimGCvisit((void*)(*a).prc, op);
	nimGCvisit((void*)(*a).nestedtrystmts, op);
	nimGCvisit((void*)(*a).finallysafepoints, op);
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).gcframetype, op);
}
N_NIMCALL(void, TMP1137)(void* p, NI op) {
	Tcgen508038* a;
	NI LOC1;
	NI LOC2;
	a = (Tcgen508038*)p;
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
N_NIMCALL(void, TMP1138)(void* p, NI op) {
	TY508155* a;
	NI LOC1;
	a = (TY508155*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(void, rtladdzct_54204)(Cell48947* c) {
	addzct_52617((&gch_51059.zct), c);
}

static N_INLINE(NIM_BOOL, canbecycleroot_52667)(Cell48947* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_53423)(Cell48947* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_49665((&gch_51059.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, decref_54604)(Cell48947* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_54204(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_52667(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_53423(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(Cell48947*, usrtocell_52646)(void* usr) {
	Cell48947* result;
	result = 0;
	result = ((Cell48947*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell48947))))));
	return result;
}

static N_INLINE(void, nimGCunref)(void* p) {
	Cell48947* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_52646(p);
	decref_54604(LOC1);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell48947* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_52646(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell48947* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_52646((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_54204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(void, incref_55022)(Cell48947* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_52667(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_53423(c);
	}
	LA4: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell48947* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_52646(src);
		incref_55022(LOC5);
	}
	LA3: ;
	{
		Cell48947* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_52646((*dest));
		decref_54604(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell48947* c;
	c = usrtocell_52646(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_54204(c);
	}
	LA3: ;
}

N_NIMCALL(Tcproc508034*, newproc_508229)(Tsym224841* prc, Tcgen508038* module) {
	Tcproc508034* result;
	result = 0;
	result = (Tcproc508034*) newObj((&NTI508030), sizeof(Tcproc508034));
	asgnRefNoCycle((void**) (&(*result).prc), prc);
	asgnRef((void**) (&(*result).module), module);
	{
		if (!!((prc == NIM_NIL))) goto LA3;
		(*result).options = (*prc).options;
	}
	goto LA1;
	LA3: ;
	{
		(*result).options = goptions_166130;
	}
	LA1: ;
	if ((*result).blocks) nimGCunrefNoCycle((*result).blocks);
	(*result).blocks = (TY508106*) newSeqRC1((&NTI508106), ((NI) 1));
	if ((*result).nestedtrystmts) nimGCunrefNoCycle((*result).nestedtrystmts);
	(*result).nestedtrystmts = (Tnodeseq224803*) newSeqRC1((&NTI224803), 0);
	if ((*result).finallysafepoints) nimGCunrefNoCycle((*result).finallysafepoints);
	(*result).finallysafepoints = (TY189365*) newSeqRC1((&NTI189365), 0);
	return result;
}

N_NIMCALL(Tcgen508038*, bmod_508218)(Tsym224841* module) {
	Tcgen508038* result;
	result = 0;
	result = gmodules_508172->data[(*module).position];
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_cgendataInit000)(void) {
	if (gmodules_508172) nimGCunref(gmodules_508172);
	gmodules_508172 = (TY508155*) newSeqRC1((&NTI508155), 0);
	gforwardedprocscounter_508173 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_cgendataDatInit000)(void) {
static TNimNode* TMP1123[29];
static TNimNode* TMP1130[17];
static TNimNode* TMP1131[7];
static TNimNode TMP1121[56];
NTI508038.size = sizeof(Tcgen508038);
NTI508038.kind = 17;
NTI508038.base = (&NTI276005);
TMP1123[0] = &TMP1121[1];
TMP1121[1].kind = 1;
TMP1121[1].offset = offsetof(Tcgen508038, module);
TMP1121[1].typ = (&NTI224807);
TMP1121[1].name = "module";
TMP1123[1] = &TMP1121[2];
TMP1121[2].kind = 1;
TMP1121[2].offset = offsetof(Tcgen508038, filename);
TMP1121[2].typ = (&NTI149);
TMP1121[2].name = "filename";
TMP1123[2] = &TMP1121[3];
NTI508022.size = sizeof(Tcfilesections508022);
NTI508022.kind = 16;
NTI508022.base = (&NTI175007);
NTI508022.flags = 2;
TMP1121[3].kind = 1;
TMP1121[3].offset = offsetof(Tcgen508038, s);
TMP1121[3].typ = (&NTI508022);
TMP1121[3].name = "s";
TMP1123[3] = &TMP1121[4];
TMP1121[4].kind = 1;
TMP1121[4].offset = offsetof(Tcgen508038, preventstacktrace);
TMP1121[4].typ = (&NTI138);
TMP1121[4].name = "preventStackTrace";
TMP1123[4] = &TMP1121[5];
TMP1121[5].kind = 1;
TMP1121[5].offset = offsetof(Tcgen508038, usesthreadvars);
TMP1121[5].typ = (&NTI138);
TMP1121[5].name = "usesThreadVars";
TMP1123[5] = &TMP1121[6];
TMP1121[6].kind = 1;
TMP1121[6].offset = offsetof(Tcgen508038, framedeclared);
TMP1121[6].typ = (&NTI138);
TMP1121[6].name = "frameDeclared";
TMP1123[6] = &TMP1121[7];
TMP1121[7].kind = 1;
TMP1121[7].offset = offsetof(Tcgen508038, isheaderfile);
TMP1121[7].typ = (&NTI138);
TMP1121[7].name = "isHeaderFile";
TMP1123[7] = &TMP1121[8];
TMP1121[8].kind = 1;
TMP1121[8].offset = offsetof(Tcgen508038, includesstringh);
TMP1121[8].typ = (&NTI138);
TMP1121[8].name = "includesStringh";
TMP1123[8] = &TMP1121[9];
TMP1121[9].kind = 1;
TMP1121[9].offset = offsetof(Tcgen508038, objhaskidsvalid);
TMP1121[9].typ = (&NTI138);
TMP1121[9].name = "objHasKidsValid";
TMP1123[9] = &TMP1121[10];
TMP1121[10].kind = 1;
TMP1121[10].offset = offsetof(Tcgen508038, cfilename);
TMP1121[10].typ = (&NTI149);
TMP1121[10].name = "cfilename";
TMP1123[10] = &TMP1121[11];
TMP1121[11].kind = 1;
TMP1121[11].offset = offsetof(Tcgen508038, typecache);
TMP1121[11].typ = (&NTI224859);
TMP1121[11].name = "typeCache";
TMP1123[11] = &TMP1121[12];
TMP1121[12].kind = 1;
TMP1121[12].offset = offsetof(Tcgen508038, forwtypecache);
TMP1121[12].typ = (&NTI224859);
TMP1121[12].name = "forwTypeCache";
TMP1123[12] = &TMP1121[13];
TMP1121[13].kind = 1;
TMP1121[13].offset = offsetof(Tcgen508038, declaredthings);
TMP1121[13].typ = (&NTI221056);
TMP1121[13].name = "declaredThings";
TMP1123[13] = &TMP1121[14];
TMP1121[14].kind = 1;
TMP1121[14].offset = offsetof(Tcgen508038, declaredprotos);
TMP1121[14].typ = (&NTI221056);
TMP1121[14].name = "declaredProtos";
TMP1123[14] = &TMP1121[15];
TMP1121[15].kind = 1;
TMP1121[15].offset = offsetof(Tcgen508038, headerfiles);
TMP1121[15].typ = (&NTI140028);
TMP1121[15].name = "headerFiles";
TMP1123[15] = &TMP1121[16];
TMP1121[16].kind = 1;
TMP1121[16].offset = offsetof(Tcgen508038, typeinfomarker);
TMP1121[16].typ = (&NTI221056);
TMP1121[16].name = "typeInfoMarker";
TMP1123[16] = &TMP1121[17];
NTI508034.size = sizeof(Tcproc508034);
NTI508034.kind = 18;
NTI508034.base = 0;
TMP1130[0] = &TMP1121[19];
TMP1121[19].kind = 1;
TMP1121[19].offset = offsetof(Tcproc508034, prc);
TMP1121[19].typ = (&NTI224807);
TMP1121[19].name = "prc";
TMP1130[1] = &TMP1121[20];
TMP1121[20].kind = 1;
TMP1121[20].offset = offsetof(Tcproc508034, beforeretneeded);
TMP1121[20].typ = (&NTI138);
TMP1121[20].name = "beforeRetNeeded";
TMP1130[2] = &TMP1121[21];
TMP1121[21].kind = 1;
TMP1121[21].offset = offsetof(Tcproc508034, threadvaraccessed);
TMP1121[21].typ = (&NTI138);
TMP1121[21].name = "threadVarAccessed";
TMP1130[3] = &TMP1121[22];
TMP1121[22].kind = 1;
TMP1121[22].offset = offsetof(Tcproc508034, lastlineinfo);
TMP1121[22].typ = (&NTI189352);
TMP1121[22].name = "lastLineInfo";
TMP1130[4] = &TMP1121[23];
TMP1121[23].kind = 1;
TMP1121[23].offset = offsetof(Tcproc508034, nestedtrystmts);
TMP1121[23].typ = (&NTI224803);
TMP1121[23].name = "nestedTryStmts";
TMP1130[5] = &TMP1121[24];
TMP1121[24].kind = 1;
TMP1121[24].offset = offsetof(Tcproc508034, inexceptblock);
TMP1121[24].typ = (&NTI108);
TMP1121[24].name = "inExceptBlock";
TMP1130[6] = &TMP1121[25];
TMP1121[25].kind = 1;
TMP1121[25].offset = offsetof(Tcproc508034, finallysafepoints);
TMP1121[25].typ = (&NTI189365);
TMP1121[25].name = "finallySafePoints";
TMP1130[7] = &TMP1121[26];
TMP1121[26].kind = 1;
TMP1121[26].offset = offsetof(Tcproc508034, labels);
TMP1121[26].typ = (&NTI4007);
TMP1121[26].name = "labels";
TMP1130[8] = &TMP1121[27];
NTI508032.size = sizeof(Tblock508032);
NTI508032.kind = 18;
NTI508032.base = 0;
NTI508032.flags = 2;
TMP1131[0] = &TMP1121[29];
TMP1121[29].kind = 1;
TMP1121[29].offset = offsetof(Tblock508032, id);
TMP1121[29].typ = (&NTI108);
TMP1121[29].name = "id";
TMP1131[1] = &TMP1121[30];
TMP1121[30].kind = 1;
TMP1121[30].offset = offsetof(Tblock508032, label);
TMP1121[30].typ = (&NTI175007);
TMP1121[30].name = "label";
TMP1131[2] = &TMP1121[31];
NTI508026.size = sizeof(Tcprocsections508026);
NTI508026.kind = 16;
NTI508026.base = (&NTI175007);
NTI508026.flags = 2;
TMP1121[31].kind = 1;
TMP1121[31].offset = offsetof(Tblock508032, sections);
TMP1121[31].typ = (&NTI508026);
TMP1121[31].name = "sections";
TMP1131[3] = &TMP1121[32];
TMP1121[32].kind = 1;
TMP1121[32].offset = offsetof(Tblock508032, isloop);
TMP1121[32].typ = (&NTI138);
TMP1121[32].name = "isLoop";
TMP1131[4] = &TMP1121[33];
TMP1121[33].kind = 1;
TMP1121[33].offset = offsetof(Tblock508032, nestedtrystmts);
TMP1121[33].typ = (&NTI112);
TMP1121[33].name = "nestedTryStmts";
TMP1131[5] = &TMP1121[34];
TMP1121[34].kind = 1;
TMP1121[34].offset = offsetof(Tblock508032, nestedexceptstmts);
TMP1121[34].typ = (&NTI112);
TMP1121[34].name = "nestedExceptStmts";
TMP1131[6] = &TMP1121[35];
TMP1121[35].kind = 1;
TMP1121[35].offset = offsetof(Tblock508032, framelen);
TMP1121[35].typ = (&NTI112);
TMP1121[35].name = "frameLen";
TMP1121[28].len = 7; TMP1121[28].kind = 2; TMP1121[28].sons = &TMP1131[0];
NTI508032.node = &TMP1121[28];
NTI508106.size = sizeof(TY508106*);
NTI508106.kind = 24;
NTI508106.base = (&NTI508032);
NTI508106.flags = 2;
NTI508106.marker = TMP1132;
TMP1121[27].kind = 1;
TMP1121[27].offset = offsetof(Tcproc508034, blocks);
TMP1121[27].typ = (&NTI508106);
TMP1121[27].name = "blocks";
TMP1130[9] = &TMP1121[36];
TMP1121[36].kind = 1;
TMP1121[36].offset = offsetof(Tcproc508034, breakidx);
TMP1121[36].typ = (&NTI108);
TMP1121[36].name = "breakIdx";
TMP1130[10] = &TMP1121[37];
TMP1121[37].kind = 1;
TMP1121[37].offset = offsetof(Tcproc508034, options);
TMP1121[37].typ = (&NTI166017);
TMP1121[37].name = "options";
TMP1130[11] = &TMP1121[38];
TMP1121[38].kind = 1;
TMP1121[38].offset = offsetof(Tcproc508034, maxframelen);
TMP1121[38].typ = (&NTI108);
TMP1121[38].name = "maxFrameLen";
TMP1130[12] = &TMP1121[39];
TMP1121[39].kind = 1;
TMP1121[39].offset = offsetof(Tcproc508034, module);
TMP1121[39].typ = (&NTI508028);
TMP1121[39].name = "module";
TMP1130[13] = &TMP1121[40];
TMP1121[40].kind = 1;
TMP1121[40].offset = offsetof(Tcproc508034, withinloop);
TMP1121[40].typ = (&NTI108);
TMP1121[40].name = "withinLoop";
TMP1130[14] = &TMP1121[41];
TMP1121[41].kind = 1;
TMP1121[41].offset = offsetof(Tcproc508034, splitdecls);
TMP1121[41].typ = (&NTI108);
TMP1121[41].name = "splitDecls";
TMP1130[15] = &TMP1121[42];
TMP1121[42].kind = 1;
TMP1121[42].offset = offsetof(Tcproc508034, gcframeid);
TMP1121[42].typ = (&NTI4007);
TMP1121[42].name = "gcFrameId";
TMP1130[16] = &TMP1121[43];
TMP1121[43].kind = 1;
TMP1121[43].offset = offsetof(Tcproc508034, gcframetype);
TMP1121[43].typ = (&NTI175007);
TMP1121[43].name = "gcFrameType";
TMP1121[18].len = 17; TMP1121[18].kind = 2; TMP1121[18].sons = &TMP1130[0];
NTI508034.node = &TMP1121[18];
NTI508030.size = sizeof(Tcproc508034*);
NTI508030.kind = 22;
NTI508030.base = (&NTI508034);
NTI508030.marker = TMP1133;
TMP1121[17].kind = 1;
TMP1121[17].offset = offsetof(Tcgen508038, initproc);
TMP1121[17].typ = (&NTI508030);
TMP1121[17].name = "initProc";
TMP1123[17] = &TMP1121[44];
TMP1121[44].kind = 1;
TMP1121[44].offset = offsetof(Tcgen508038, postinitproc);
TMP1121[44].typ = (&NTI508030);
TMP1121[44].name = "postInitProc";
TMP1123[18] = &TMP1121[45];
TMP1121[45].kind = 1;
TMP1121[45].offset = offsetof(Tcgen508038, preinitproc);
TMP1121[45].typ = (&NTI508030);
TMP1121[45].name = "preInitProc";
TMP1123[19] = &TMP1121[46];
TMP1121[46].kind = 1;
TMP1121[46].offset = offsetof(Tcgen508038, typestack);
TMP1121[46].typ = (&NTI224843);
TMP1121[46].name = "typeStack";
TMP1123[20] = &TMP1121[47];
TMP1121[47].kind = 1;
TMP1121[47].offset = offsetof(Tcgen508038, datacache);
TMP1121[47].typ = (&NTI224871);
TMP1121[47].name = "dataCache";
TMP1123[21] = &TMP1121[48];
TMP1121[48].kind = 1;
TMP1121[48].offset = offsetof(Tcgen508038, forwardedprocs);
TMP1121[48].typ = (&NTI224811);
TMP1121[48].name = "forwardedProcs";
TMP1123[22] = &TMP1121[49];
TMP1121[49].kind = 1;
TMP1121[49].offset = offsetof(Tcgen508038, typenodes);
TMP1121[49].typ = (&NTI108);
TMP1121[49].name = "typeNodes";
TMP1123[23] = &TMP1121[50];
TMP1121[50].kind = 1;
TMP1121[50].offset = offsetof(Tcgen508038, nimtypes);
TMP1121[50].typ = (&NTI108);
TMP1121[50].name = "nimTypes";
TMP1123[24] = &TMP1121[51];
TMP1121[51].kind = 1;
TMP1121[51].offset = offsetof(Tcgen508038, typenodesname);
TMP1121[51].typ = (&NTI175007);
TMP1121[51].name = "typeNodesName";
TMP1123[25] = &TMP1121[52];
TMP1121[52].kind = 1;
TMP1121[52].offset = offsetof(Tcgen508038, nimtypesname);
TMP1121[52].typ = (&NTI175007);
TMP1121[52].name = "nimTypesName";
TMP1123[26] = &TMP1121[53];
TMP1121[53].kind = 1;
TMP1121[53].offset = offsetof(Tcgen508038, labels);
TMP1121[53].typ = (&NTI4007);
TMP1121[53].name = "labels";
TMP1123[27] = &TMP1121[54];
NTI508144.size = sizeof(TY508144);
NTI508144.kind = 16;
NTI508144.base = (&NTI175007);
NTI508144.flags = 2;
TMP1121[54].kind = 1;
TMP1121[54].offset = offsetof(Tcgen508038, extensionloaders);
TMP1121[54].typ = (&NTI508144);
TMP1121[54].name = "extensionLoaders";
TMP1123[28] = &TMP1121[55];
TMP1121[55].kind = 1;
TMP1121[55].offset = offsetof(Tcgen508038, injectstmt);
TMP1121[55].typ = (&NTI175007);
TMP1121[55].name = "injectStmt";
TMP1121[0].len = 29; TMP1121[0].kind = 2; TMP1121[0].sons = &TMP1123[0];
NTI508038.node = &TMP1121[0];
NTI508028.size = sizeof(Tcgen508038*);
NTI508028.kind = 22;
NTI508028.base = (&NTI508038);
NTI508028.marker = TMP1137;
NTI508155.size = sizeof(TY508155*);
NTI508155.kind = 24;
NTI508155.base = (&NTI508028);
NTI508155.marker = TMP1138;
}
