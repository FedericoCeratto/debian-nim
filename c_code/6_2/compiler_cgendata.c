/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY530153 TY530153;
typedef struct Tcgen530027 Tcgen530027;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tpasscontext342002 Tpasscontext342002;
typedef struct TNimObject TNimObject;
typedef struct Tsym293834 Tsym293834;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tidtable293850 Tidtable293850;
typedef struct Tidpairseq293848 Tidpairseq293848;
typedef struct Intset269030 Intset269030;
typedef struct Trunk269026 Trunk269026;
typedef struct Trunkseq269028 Trunkseq269028;
typedef struct Tlinkedlist147013 Tlinkedlist147013;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Tcproc530021 Tcproc530021;
typedef struct Ttypeseq293836 Ttypeseq293836;
typedef struct Tnodetable293862 Tnodetable293862;
typedef struct Tnodepairseq293860 Tnodepairseq293860;
typedef struct Tsymseq293804 Tsymseq293804;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct Tnodeseq293796 Tnodeseq293796;
typedef struct TY192350 TY192350;
typedef struct TY530095 TY530095;
typedef struct Tblock530019 Tblock530019;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29486 Memregion29486;
typedef struct Smallchunk29440 Smallchunk29440;
typedef struct Llchunk29480 Llchunk29480;
typedef struct Bigchunk29442 Bigchunk29442;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29484 Avlnode29484;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct Tidobj200004 Tidobj200004;
typedef struct TY293929 TY293929;
typedef struct Tstrtable293806 Tstrtable293806;
typedef struct Ttype293840 Ttype293840;
typedef struct Tident200010 Tident200010;
typedef struct Tnode293802 Tnode293802;
typedef struct Tloc293816 Tloc293816;
typedef struct Tlib293820 Tlib293820;
typedef struct Tidpair293846 Tidpair293846;
typedef struct Tnodepair293858 Tnodepair293858;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
typedef struct Tinstantiation293824 Tinstantiation293824;
typedef struct TY293960 TY293960;
typedef struct TY293961 TY293961;
typedef NU8 Tnimkind3403;
typedef NU8 Tnimtypeflag3409Set;
typedef N_NIMCALL_PTR(void, TY3489) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3403 kind;
Tnimtypeflag3409Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, Globalmarkerproc55802) (void);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext342002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef Ropeobj179006* Tcfilesections530009[18];
typedef NU8 Codegenflag530025Set;
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tidtable293850  {
NI counter;
Tidpairseq293848* data;
};
struct  Intset269030  {
NI counter;
NI max;
Trunk269026* head;
Trunkseq269028* data;
};
struct  Tlinkedlist147013  {
Tlistentry147007* head;
Tlistentry147007* tail;
NI counter;
};
struct  Tnodetable293862  {
NI counter;
Tnodepairseq293860* data;
};
typedef Ropeobj179006* TY530136[10];
struct  Tcgen530027  {
  Tpasscontext342002 Sup;
Tcfilesections530009 s;
Codegenflag530025Set flags;
Tsym293834* module;
NimStringDesc* filename;
NimStringDesc* cfilename;
Ropeobj179006* tmpbase;
Tidtable293850 typecache;
Tidtable293850 forwtypecache;
Intset269030 declaredthings;
Intset269030 declaredprotos;
Tlinkedlist147013 headerfiles;
Intset269030 typeinfomarker;
Tcproc530021* initproc;
Tcproc530021* postinitproc;
Tcproc530021* preinitproc;
Ttypeseq293836* typestack;
Tnodetable293862 datacache;
Tsymseq293804* forwardedprocs;
NI typenodes;
NI nimtypes;
Ropeobj179006* typenodesname;
Ropeobj179006* nimtypesname;
NI labels;
TY530136 extensionloaders;
Ropeobj179006* injectstmt;
};
typedef NU8 Codegenflag530025;
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Toption170009Set;
struct  Tcproc530021  {
Tsym293834* prc;
NIM_BOOL beforeretneeded;
NIM_BOOL threadvaraccessed;
Tlineinfo192336 lastlineinfo;
Tnodeseq293796* nestedtrystmts;
NI inexceptblock;
TY192350* finallysafepoints;
NI labels;
TY530095* blocks;
NI breakidx;
Toption170009Set options;
NI maxframelen;
Tcgen530027* module;
NI withinloop;
NI splitdecls;
NI gcframeid;
Ropeobj179006* gcframetype;
};
typedef Ropeobj179006* Tcprocsections530013[3];
struct  Tblock530019  {
NI id;
Ropeobj179006* label;
Tcprocsections530013 sections;
NIM_BOOL isloop;
NI16 nestedtrystmts;
NI16 nestedexceptstmts;
NI16 framelen;
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
typedef Smallchunk29440* TY29501[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29486  {
NI minlargeobj;
NI maxlargeobj;
TY29501 freesmallchunks;
Llchunk29480* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29442* freechunkslist;
Intset29414 chunkstarts;
Avlnode29484* root;
Avlnode29484* deleted;
Avlnode29484* last;
Avlnode29484* freeavlnodes;
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
Memregion29486 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
struct  Tidobj200004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind293435;
struct  Tstrtable293806  {
NI counter;
Tsymseq293804* data;
};
typedef NU16 Tmagic293524;
typedef NU32 Tsymflag293184Set;
typedef NU8 Tlockind293808;
typedef NU8 Tstorageloc293812;
typedef NU16 Tlocflag293810Set;
struct  Tloc293816  {
Tlockind293808 k;
Tstorageloc293812 s;
Tlocflag293810Set flags;
Ttype293840* t;
Ropeobj179006* r;
};
struct  Tsym293834  {
  Tidobj200004 Sup;
Tsymkind293435 kind;
union{
struct {Ttypeseq293836* typeinstcache;
} S1;
struct {TY293929* procinstcache;
Tsym293834* gcunsafetyreason;
} S2;
struct {TY293929* usedgenerics;
Tstrtable293806 tab;
} S3;
struct {Tsym293834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic293524 magic;
Ttype293840* typ;
Tident200010* name;
Tlineinfo192336 info;
Tsym293834* owner;
Tsymflag293184Set flags;
Tnode293802* ast;
Toption170009Set options;
NI position;
NI offset;
Tloc293816 loc;
Tlib293820* annex;
Tnode293802* constraint;
};
struct  Ropeobj179006  {
  TNimObject Sup;
Ropeobj179006* left;
Ropeobj179006* right;
NI length;
NimStringDesc* data;
};
struct  Tidpair293846  {
Tidobj200004* key;
TNimObject* val;
};
typedef NI TY29419[8];
struct  Trunk269026  {
Trunk269026* next;
NI key;
TY29419 bits;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
struct  Tnodepair293858  {
NI h;
Tnode293802* key;
NI val;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29440  {
  Basechunk29438 Sup;
Smallchunk29440* next;
Smallchunk29440* prev;
Freecell29430* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29480  {
NI size;
NI acc;
Llchunk29480* next;
};
struct  Bigchunk29442  {
  Basechunk29438 Sup;
Bigchunk29442* next;
Bigchunk29442* prev;
NI align;
NF data;
};
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29419 bits;
};
typedef Avlnode29484* TY29491[2];
struct  Avlnode29484  {
TY29491 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29419 bits;
};
typedef NU8 Ttypekind293244;
typedef NU8 Tcallingconvention293002;
typedef NU32 Ttypeflag293431Set;
struct  Ttype293840  {
  Tidobj200004 Sup;
Ttypekind293244 kind;
Tcallingconvention293002 callconv;
Ttypeflag293431Set flags;
Ttypeseq293836* sons;
Tnode293802* n;
Tsym293834* owner;
Tsym293834* sym;
Tsym293834* destructor;
Tsym293834* deepcopy;
Tsym293834* assignment;
TY293960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc293816 loc;
};
struct  Tident200010  {
  Tidobj200004 Sup;
NimStringDesc* s;
Tident200010* next;
NI h;
};
typedef NU16 Tnodeflag293427Set;
typedef NU8 Tnodekind293020;
struct  Tnode293802  {
Ttype293840* typ;
Tlineinfo192336 info;
Tnodeflag293427Set flags;
Tnodekind293020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym293834* sym;
} S4;
struct {Tident200010* ident;
} S5;
struct {Tnodeseq293796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 Tlibkind293818;
struct  Tlib293820  {
  Tlistentry147007 Sup;
Tlibkind293818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj179006* name;
Tnode293802* path;
};
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
};
struct  Tinstantiation293824  {
Tsym293834* sym;
Ttypeseq293836* concretetypes;
NI compilesid;
};
struct TY293961 {
NI Field0;
Tsym293834* Field1;
};
struct TY530153 {
  TGenericSeq Sup;
  Tcgen530027* data[SEQ_DECL_SIZE];
};
struct TY530095 {
  TGenericSeq Sup;
  Tblock530019 data[SEQ_DECL_SIZE];
};
struct Tnodeseq293796 {
  TGenericSeq Sup;
  Tnode293802* data[SEQ_DECL_SIZE];
};
struct TY192350 {
  TGenericSeq Sup;
  Ropeobj179006* data[SEQ_DECL_SIZE];
};
struct Tidpairseq293848 {
  TGenericSeq Sup;
  Tidpair293846 data[SEQ_DECL_SIZE];
};
struct Trunkseq269028 {
  TGenericSeq Sup;
  Trunk269026* data[SEQ_DECL_SIZE];
};
struct Ttypeseq293836 {
  TGenericSeq Sup;
  Ttype293840* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq293860 {
  TGenericSeq Sup;
  Tnodepair293858 data[SEQ_DECL_SIZE];
};
struct Tsymseq293804 {
  TGenericSeq Sup;
  Tsym293834* data[SEQ_DECL_SIZE];
};
struct TY293929 {
  TGenericSeq Sup;
  Tinstantiation293824* data[SEQ_DECL_SIZE];
};
struct TY293960 {
  TGenericSeq Sup;
  TY293961 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T3723162438_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55802 markerproc0);
N_NIMCALL(void, T3723162438_3)(void);
N_NIMCALL(void, T3723162438_4)(void);
N_NIMCALL(void, T3723162438_5)(void);
N_NIMCALL(void, T3723162438_6)(void);
N_NIMCALL(void, T3723162438_13)(void* p, NI op);
N_NIMCALL(void, T3723162438_14)(void* p, NI op);
N_NIMCALL(void, T3723162438_15)(void* p, NI op);
N_NIMCALL(void, T3723162438_16)(void* p, NI op);
N_NIMCALL(void, T3723162438_17)(void);
N_NIMCALL(void, nimGCunref)(void* p0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53419_1689653243)(Cell47305* c0);
static N_INLINE(void, decref_53001_1689653243)(Cell47305* c0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
Ropeobj179006* mainmodprocs_530148_3723162438;
extern TNimType NTI179004; /* Rope */
Ropeobj179006* mainmodinit_530149_3723162438;
Ropeobj179006* othermodsinit_530150_3723162438;
Ropeobj179006* maindatinit_530151_3723162438;
Ropeobj179006* gmapping_530152_3723162438;
TY530153* gmodules_530170_3723162438;
extern TNimType NTI342002; /* TPassContext */
TNimType NTI530027; /* TCGen */
TNimType NTI530009; /* TCFileSections */
TNimType NTI530025; /* Codegenflag */
TNimType NTI530112; /* set[Codegenflag] */
extern TNimType NTI293800; /* PSym */
extern TNimType NTI138; /* string */
extern TNimType NTI293850; /* TIdTable */
extern TNimType NTI269030; /* IntSet */
extern TNimType NTI147013; /* TLinkedList */
TNimType NTI530021; /* TCProc */
extern TNimType NTI130; /* bool */
extern TNimType NTI192336; /* TLineInfo */
extern TNimType NTI293796; /* TNodeSeq */
extern TNimType NTI104; /* int */
extern TNimType NTI192350; /* seq[Rope] */
extern TNimType NTI3604; /* Natural */
TNimType NTI530019; /* TBlock */
TNimType NTI530013; /* TCProcSections */
extern TNimType NTI108; /* int16 */
TNimType NTI530095; /* seq[TBlock] */
extern TNimType NTI170011; /* TOptions */
TNimType NTI530017; /* BProc */
extern TNimType NTI293836; /* TTypeSeq */
extern TNimType NTI293862; /* TNodeTable */
extern TNimType NTI293804; /* TSymSeq */
TNimType NTI530136; /* array[48..57, Rope] */
TNimType NTI530015; /* BModule */
TNimType NTI530153; /* seq[BModule] */
NI gforwardedprocscounter_530171_3723162438;
extern Gcheap49818 gch_49858_1689653243;
extern Toption170009Set goptions_170128_2607990831;
N_NIMCALL(void, T3723162438_2)(void) {
	nimGCvisit((void*)mainmodprocs_530148_3723162438, 0);
}
N_NIMCALL(void, T3723162438_3)(void) {
	nimGCvisit((void*)mainmodinit_530149_3723162438, 0);
}
N_NIMCALL(void, T3723162438_4)(void) {
	nimGCvisit((void*)othermodsinit_530150_3723162438, 0);
}
N_NIMCALL(void, T3723162438_5)(void) {
	nimGCvisit((void*)maindatinit_530151_3723162438, 0);
}
N_NIMCALL(void, T3723162438_6)(void) {
	nimGCvisit((void*)gmapping_530152_3723162438, 0);
}
N_NIMCALL(void, T3723162438_13)(void* p, NI op) {
	TY530095* a;
	NI LOC1;
	NI LOC2;
	a = (TY530095*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	LOC2 = (NI)0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, T3723162438_14)(void* p, NI op) {
	Tcproc530021* a;
	a = (Tcproc530021*)p;
	nimGCvisit((void*)(*a).prc, op);
	nimGCvisit((void*)(*a).nestedtrystmts, op);
	nimGCvisit((void*)(*a).finallysafepoints, op);
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).gcframetype, op);
}
N_NIMCALL(void, T3723162438_15)(void* p, NI op) {
	Tcgen530027* a;
	NI LOC1;
	NI LOC2;
	a = (Tcgen530027*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 18; LOC1++) {
	nimGCvisit((void*)(*a).s[LOC1], op);
	}
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).filename, op);
	nimGCvisit((void*)(*a).cfilename, op);
	nimGCvisit((void*)(*a).tmpbase, op);
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
	LOC2 = (NI)0;
	for (LOC2 = 0; LOC2 < 10; LOC2++) {
	nimGCvisit((void*)(*a).extensionloaders[LOC2], op);
	}
	nimGCvisit((void*)(*a).injectstmt, op);
}
N_NIMCALL(void, T3723162438_16)(void* p, NI op) {
	TY530153* a;
	NI LOC1;
	a = (TY530153*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, T3723162438_17)(void) {
	nimGCvisit((void*)gmodules_530170_3723162438, 0);
}

static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47305* result0;
	result0 = (Cell47305*)0;
	result0 = ((Cell47305*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47305))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47305* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51440_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47305* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51440_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

static N_INLINE(void, incref_53419_1689653243)(Cell47305* c0) {
	(*c0).refcount = (NI)((NU64)((*c0).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(void, decref_53001_1689653243)(Cell47305* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell47305* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell47305*)0;
		LOC5 = usrtocell_51440_1689653243(src0);
		incref_53419_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell47305* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell47305*)0;
		LOC10 = usrtocell_51440_1689653243((*dest0));
		decref_53001_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47305* c0;
	c0 = usrtocell_51440_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(Tcproc530021*, newproc_530206_3723162438)(Tsym293834* prc0, Tcgen530027* module0) {
	Tcproc530021* result0;
	result0 = (Tcproc530021*)0;
	result0 = (Tcproc530021*) newObj((&NTI530017), sizeof(Tcproc530021));
	asgnRefNoCycle((void**) (&(*result0).prc), prc0);
	asgnRef((void**) (&(*result0).module), module0);
	{
		if (!!((prc0 == NIM_NIL))) goto LA3;
		(*result0).options = (*prc0).options;
	}
	goto LA1;
	LA3: ;
	{
		(*result0).options = goptions_170128_2607990831;
	}
	LA1: ;
	if ((*result0).blocks) nimGCunrefNoCycle((*result0).blocks);
	(*result0).blocks = (TY530095*) newSeqRC1((&NTI530095), ((NI) 1));
	if ((*result0).nestedtrystmts) nimGCunrefNoCycle((*result0).nestedtrystmts);
	(*result0).nestedtrystmts = (Tnodeseq293796*) newSeqRC1((&NTI293796), 0);
	if ((*result0).finallysafepoints) nimGCunrefNoCycle((*result0).finallysafepoints);
	(*result0).finallysafepoints = (TY192350*) newSeqRC1((&NTI192350), 0);
	return result0;
}

N_NIMCALL(Tcgen530027*, bmod_530201_3723162438)(Tsym293834* module0) {
	Tcgen530027* result0;
	result0 = (Tcgen530027*)0;
	result0 = gmodules_530170_3723162438->data[(*module0).position];
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_cgendataInit000)(void) {
nimRegisterGlobalMarker(T3723162438_2);
nimRegisterGlobalMarker(T3723162438_3);
nimRegisterGlobalMarker(T3723162438_4);
nimRegisterGlobalMarker(T3723162438_5);
nimRegisterGlobalMarker(T3723162438_6);
nimRegisterGlobalMarker(T3723162438_17);
	if (gmodules_530170_3723162438) nimGCunref(gmodules_530170_3723162438);
	gmodules_530170_3723162438 = (TY530153*) newSeqRC1((&NTI530153), 0);
	gforwardedprocscounter_530171_3723162438 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_cgendataDatInit000)(void) {
static TNimNode* T3723162438_7[25];
static TNimNode* T3723162438_8[6];
NI T3723162438_10;
static char* NIM_CONST T3723162438_9[6] = {
"preventStackTrace", 
"usesThreadVars", 
"frameDeclared", 
"isHeaderFile", 
"includesStringh", 
"objHasKidsValid"};
static TNimNode* T3723162438_11[17];
static TNimNode* T3723162438_12[7];
static TNimNode T3723162438_0[60];
NTI530027.size = sizeof(Tcgen530027);
NTI530027.kind = 17;
NTI530027.base = (&NTI342002);
T3723162438_7[0] = &T3723162438_0[1];
NTI530009.size = sizeof(Tcfilesections530009);
NTI530009.kind = 16;
NTI530009.base = (&NTI179004);
NTI530009.flags = 2;
T3723162438_0[1].kind = 1;
T3723162438_0[1].offset = offsetof(Tcgen530027, s);
T3723162438_0[1].typ = (&NTI530009);
T3723162438_0[1].name = "s";
T3723162438_7[1] = &T3723162438_0[2];
NTI530025.size = sizeof(Codegenflag530025);
NTI530025.kind = 14;
NTI530025.base = 0;
NTI530025.flags = 3;
for (T3723162438_10 = 0; T3723162438_10 < 6; T3723162438_10++) {
T3723162438_0[T3723162438_10+3].kind = 1;
T3723162438_0[T3723162438_10+3].offset = T3723162438_10;
T3723162438_0[T3723162438_10+3].name = T3723162438_9[T3723162438_10];
T3723162438_8[T3723162438_10] = &T3723162438_0[T3723162438_10+3];
}
T3723162438_0[9].len = 6; T3723162438_0[9].kind = 2; T3723162438_0[9].sons = &T3723162438_8[0];
NTI530025.node = &T3723162438_0[9];
NTI530112.size = sizeof(Codegenflag530025Set);
NTI530112.kind = 19;
NTI530112.base = (&NTI530025);
NTI530112.flags = 3;
T3723162438_0[10].len = 0; T3723162438_0[10].kind = 0;
NTI530112.node = &T3723162438_0[10];
T3723162438_0[2].kind = 1;
T3723162438_0[2].offset = offsetof(Tcgen530027, flags);
T3723162438_0[2].typ = (&NTI530112);
T3723162438_0[2].name = "flags";
T3723162438_7[2] = &T3723162438_0[11];
T3723162438_0[11].kind = 1;
T3723162438_0[11].offset = offsetof(Tcgen530027, module);
T3723162438_0[11].typ = (&NTI293800);
T3723162438_0[11].name = "module";
T3723162438_7[3] = &T3723162438_0[12];
T3723162438_0[12].kind = 1;
T3723162438_0[12].offset = offsetof(Tcgen530027, filename);
T3723162438_0[12].typ = (&NTI138);
T3723162438_0[12].name = "filename";
T3723162438_7[4] = &T3723162438_0[13];
T3723162438_0[13].kind = 1;
T3723162438_0[13].offset = offsetof(Tcgen530027, cfilename);
T3723162438_0[13].typ = (&NTI138);
T3723162438_0[13].name = "cfilename";
T3723162438_7[5] = &T3723162438_0[14];
T3723162438_0[14].kind = 1;
T3723162438_0[14].offset = offsetof(Tcgen530027, tmpbase);
T3723162438_0[14].typ = (&NTI179004);
T3723162438_0[14].name = "tmpBase";
T3723162438_7[6] = &T3723162438_0[15];
T3723162438_0[15].kind = 1;
T3723162438_0[15].offset = offsetof(Tcgen530027, typecache);
T3723162438_0[15].typ = (&NTI293850);
T3723162438_0[15].name = "typeCache";
T3723162438_7[7] = &T3723162438_0[16];
T3723162438_0[16].kind = 1;
T3723162438_0[16].offset = offsetof(Tcgen530027, forwtypecache);
T3723162438_0[16].typ = (&NTI293850);
T3723162438_0[16].name = "forwTypeCache";
T3723162438_7[8] = &T3723162438_0[17];
T3723162438_0[17].kind = 1;
T3723162438_0[17].offset = offsetof(Tcgen530027, declaredthings);
T3723162438_0[17].typ = (&NTI269030);
T3723162438_0[17].name = "declaredThings";
T3723162438_7[9] = &T3723162438_0[18];
T3723162438_0[18].kind = 1;
T3723162438_0[18].offset = offsetof(Tcgen530027, declaredprotos);
T3723162438_0[18].typ = (&NTI269030);
T3723162438_0[18].name = "declaredProtos";
T3723162438_7[10] = &T3723162438_0[19];
T3723162438_0[19].kind = 1;
T3723162438_0[19].offset = offsetof(Tcgen530027, headerfiles);
T3723162438_0[19].typ = (&NTI147013);
T3723162438_0[19].name = "headerFiles";
T3723162438_7[11] = &T3723162438_0[20];
T3723162438_0[20].kind = 1;
T3723162438_0[20].offset = offsetof(Tcgen530027, typeinfomarker);
T3723162438_0[20].typ = (&NTI269030);
T3723162438_0[20].name = "typeInfoMarker";
T3723162438_7[12] = &T3723162438_0[21];
NTI530021.size = sizeof(Tcproc530021);
NTI530021.kind = 18;
NTI530021.base = 0;
T3723162438_11[0] = &T3723162438_0[23];
T3723162438_0[23].kind = 1;
T3723162438_0[23].offset = offsetof(Tcproc530021, prc);
T3723162438_0[23].typ = (&NTI293800);
T3723162438_0[23].name = "prc";
T3723162438_11[1] = &T3723162438_0[24];
T3723162438_0[24].kind = 1;
T3723162438_0[24].offset = offsetof(Tcproc530021, beforeretneeded);
T3723162438_0[24].typ = (&NTI130);
T3723162438_0[24].name = "beforeRetNeeded";
T3723162438_11[2] = &T3723162438_0[25];
T3723162438_0[25].kind = 1;
T3723162438_0[25].offset = offsetof(Tcproc530021, threadvaraccessed);
T3723162438_0[25].typ = (&NTI130);
T3723162438_0[25].name = "threadVarAccessed";
T3723162438_11[3] = &T3723162438_0[26];
T3723162438_0[26].kind = 1;
T3723162438_0[26].offset = offsetof(Tcproc530021, lastlineinfo);
T3723162438_0[26].typ = (&NTI192336);
T3723162438_0[26].name = "lastLineInfo";
T3723162438_11[4] = &T3723162438_0[27];
T3723162438_0[27].kind = 1;
T3723162438_0[27].offset = offsetof(Tcproc530021, nestedtrystmts);
T3723162438_0[27].typ = (&NTI293796);
T3723162438_0[27].name = "nestedTryStmts";
T3723162438_11[5] = &T3723162438_0[28];
T3723162438_0[28].kind = 1;
T3723162438_0[28].offset = offsetof(Tcproc530021, inexceptblock);
T3723162438_0[28].typ = (&NTI104);
T3723162438_0[28].name = "inExceptBlock";
T3723162438_11[6] = &T3723162438_0[29];
T3723162438_0[29].kind = 1;
T3723162438_0[29].offset = offsetof(Tcproc530021, finallysafepoints);
T3723162438_0[29].typ = (&NTI192350);
T3723162438_0[29].name = "finallySafePoints";
T3723162438_11[7] = &T3723162438_0[30];
T3723162438_0[30].kind = 1;
T3723162438_0[30].offset = offsetof(Tcproc530021, labels);
T3723162438_0[30].typ = (&NTI3604);
T3723162438_0[30].name = "labels";
T3723162438_11[8] = &T3723162438_0[31];
NTI530019.size = sizeof(Tblock530019);
NTI530019.kind = 18;
NTI530019.base = 0;
NTI530019.flags = 2;
T3723162438_12[0] = &T3723162438_0[33];
T3723162438_0[33].kind = 1;
T3723162438_0[33].offset = offsetof(Tblock530019, id);
T3723162438_0[33].typ = (&NTI104);
T3723162438_0[33].name = "id";
T3723162438_12[1] = &T3723162438_0[34];
T3723162438_0[34].kind = 1;
T3723162438_0[34].offset = offsetof(Tblock530019, label);
T3723162438_0[34].typ = (&NTI179004);
T3723162438_0[34].name = "label";
T3723162438_12[2] = &T3723162438_0[35];
NTI530013.size = sizeof(Tcprocsections530013);
NTI530013.kind = 16;
NTI530013.base = (&NTI179004);
NTI530013.flags = 2;
T3723162438_0[35].kind = 1;
T3723162438_0[35].offset = offsetof(Tblock530019, sections);
T3723162438_0[35].typ = (&NTI530013);
T3723162438_0[35].name = "sections";
T3723162438_12[3] = &T3723162438_0[36];
T3723162438_0[36].kind = 1;
T3723162438_0[36].offset = offsetof(Tblock530019, isloop);
T3723162438_0[36].typ = (&NTI130);
T3723162438_0[36].name = "isLoop";
T3723162438_12[4] = &T3723162438_0[37];
T3723162438_0[37].kind = 1;
T3723162438_0[37].offset = offsetof(Tblock530019, nestedtrystmts);
T3723162438_0[37].typ = (&NTI108);
T3723162438_0[37].name = "nestedTryStmts";
T3723162438_12[5] = &T3723162438_0[38];
T3723162438_0[38].kind = 1;
T3723162438_0[38].offset = offsetof(Tblock530019, nestedexceptstmts);
T3723162438_0[38].typ = (&NTI108);
T3723162438_0[38].name = "nestedExceptStmts";
T3723162438_12[6] = &T3723162438_0[39];
T3723162438_0[39].kind = 1;
T3723162438_0[39].offset = offsetof(Tblock530019, framelen);
T3723162438_0[39].typ = (&NTI108);
T3723162438_0[39].name = "frameLen";
T3723162438_0[32].len = 7; T3723162438_0[32].kind = 2; T3723162438_0[32].sons = &T3723162438_12[0];
NTI530019.node = &T3723162438_0[32];
NTI530095.size = sizeof(TY530095*);
NTI530095.kind = 24;
NTI530095.base = (&NTI530019);
NTI530095.flags = 2;
NTI530095.marker = T3723162438_13;
T3723162438_0[31].kind = 1;
T3723162438_0[31].offset = offsetof(Tcproc530021, blocks);
T3723162438_0[31].typ = (&NTI530095);
T3723162438_0[31].name = "blocks";
T3723162438_11[9] = &T3723162438_0[40];
T3723162438_0[40].kind = 1;
T3723162438_0[40].offset = offsetof(Tcproc530021, breakidx);
T3723162438_0[40].typ = (&NTI104);
T3723162438_0[40].name = "breakIdx";
T3723162438_11[10] = &T3723162438_0[41];
T3723162438_0[41].kind = 1;
T3723162438_0[41].offset = offsetof(Tcproc530021, options);
T3723162438_0[41].typ = (&NTI170011);
T3723162438_0[41].name = "options";
T3723162438_11[11] = &T3723162438_0[42];
T3723162438_0[42].kind = 1;
T3723162438_0[42].offset = offsetof(Tcproc530021, maxframelen);
T3723162438_0[42].typ = (&NTI104);
T3723162438_0[42].name = "maxFrameLen";
T3723162438_11[12] = &T3723162438_0[43];
T3723162438_0[43].kind = 1;
T3723162438_0[43].offset = offsetof(Tcproc530021, module);
T3723162438_0[43].typ = (&NTI530015);
T3723162438_0[43].name = "module";
T3723162438_11[13] = &T3723162438_0[44];
T3723162438_0[44].kind = 1;
T3723162438_0[44].offset = offsetof(Tcproc530021, withinloop);
T3723162438_0[44].typ = (&NTI104);
T3723162438_0[44].name = "withinLoop";
T3723162438_11[14] = &T3723162438_0[45];
T3723162438_0[45].kind = 1;
T3723162438_0[45].offset = offsetof(Tcproc530021, splitdecls);
T3723162438_0[45].typ = (&NTI104);
T3723162438_0[45].name = "splitDecls";
T3723162438_11[15] = &T3723162438_0[46];
T3723162438_0[46].kind = 1;
T3723162438_0[46].offset = offsetof(Tcproc530021, gcframeid);
T3723162438_0[46].typ = (&NTI3604);
T3723162438_0[46].name = "gcFrameId";
T3723162438_11[16] = &T3723162438_0[47];
T3723162438_0[47].kind = 1;
T3723162438_0[47].offset = offsetof(Tcproc530021, gcframetype);
T3723162438_0[47].typ = (&NTI179004);
T3723162438_0[47].name = "gcFrameType";
T3723162438_0[22].len = 17; T3723162438_0[22].kind = 2; T3723162438_0[22].sons = &T3723162438_11[0];
NTI530021.node = &T3723162438_0[22];
NTI530017.size = sizeof(Tcproc530021*);
NTI530017.kind = 22;
NTI530017.base = (&NTI530021);
NTI530017.marker = T3723162438_14;
T3723162438_0[21].kind = 1;
T3723162438_0[21].offset = offsetof(Tcgen530027, initproc);
T3723162438_0[21].typ = (&NTI530017);
T3723162438_0[21].name = "initProc";
T3723162438_7[13] = &T3723162438_0[48];
T3723162438_0[48].kind = 1;
T3723162438_0[48].offset = offsetof(Tcgen530027, postinitproc);
T3723162438_0[48].typ = (&NTI530017);
T3723162438_0[48].name = "postInitProc";
T3723162438_7[14] = &T3723162438_0[49];
T3723162438_0[49].kind = 1;
T3723162438_0[49].offset = offsetof(Tcgen530027, preinitproc);
T3723162438_0[49].typ = (&NTI530017);
T3723162438_0[49].name = "preInitProc";
T3723162438_7[15] = &T3723162438_0[50];
T3723162438_0[50].kind = 1;
T3723162438_0[50].offset = offsetof(Tcgen530027, typestack);
T3723162438_0[50].typ = (&NTI293836);
T3723162438_0[50].name = "typeStack";
T3723162438_7[16] = &T3723162438_0[51];
T3723162438_0[51].kind = 1;
T3723162438_0[51].offset = offsetof(Tcgen530027, datacache);
T3723162438_0[51].typ = (&NTI293862);
T3723162438_0[51].name = "dataCache";
T3723162438_7[17] = &T3723162438_0[52];
T3723162438_0[52].kind = 1;
T3723162438_0[52].offset = offsetof(Tcgen530027, forwardedprocs);
T3723162438_0[52].typ = (&NTI293804);
T3723162438_0[52].name = "forwardedProcs";
T3723162438_7[18] = &T3723162438_0[53];
T3723162438_0[53].kind = 1;
T3723162438_0[53].offset = offsetof(Tcgen530027, typenodes);
T3723162438_0[53].typ = (&NTI104);
T3723162438_0[53].name = "typeNodes";
T3723162438_7[19] = &T3723162438_0[54];
T3723162438_0[54].kind = 1;
T3723162438_0[54].offset = offsetof(Tcgen530027, nimtypes);
T3723162438_0[54].typ = (&NTI104);
T3723162438_0[54].name = "nimTypes";
T3723162438_7[20] = &T3723162438_0[55];
T3723162438_0[55].kind = 1;
T3723162438_0[55].offset = offsetof(Tcgen530027, typenodesname);
T3723162438_0[55].typ = (&NTI179004);
T3723162438_0[55].name = "typeNodesName";
T3723162438_7[21] = &T3723162438_0[56];
T3723162438_0[56].kind = 1;
T3723162438_0[56].offset = offsetof(Tcgen530027, nimtypesname);
T3723162438_0[56].typ = (&NTI179004);
T3723162438_0[56].name = "nimTypesName";
T3723162438_7[22] = &T3723162438_0[57];
T3723162438_0[57].kind = 1;
T3723162438_0[57].offset = offsetof(Tcgen530027, labels);
T3723162438_0[57].typ = (&NTI3604);
T3723162438_0[57].name = "labels";
T3723162438_7[23] = &T3723162438_0[58];
NTI530136.size = sizeof(TY530136);
NTI530136.kind = 16;
NTI530136.base = (&NTI179004);
NTI530136.flags = 2;
T3723162438_0[58].kind = 1;
T3723162438_0[58].offset = offsetof(Tcgen530027, extensionloaders);
T3723162438_0[58].typ = (&NTI530136);
T3723162438_0[58].name = "extensionLoaders";
T3723162438_7[24] = &T3723162438_0[59];
T3723162438_0[59].kind = 1;
T3723162438_0[59].offset = offsetof(Tcgen530027, injectstmt);
T3723162438_0[59].typ = (&NTI179004);
T3723162438_0[59].name = "injectStmt";
T3723162438_0[0].len = 25; T3723162438_0[0].kind = 2; T3723162438_0[0].sons = &T3723162438_7[0];
NTI530027.node = &T3723162438_0[0];
NTI530015.size = sizeof(Tcgen530027*);
NTI530015.kind = 22;
NTI530015.base = (&NTI530027);
NTI530015.marker = T3723162438_15;
NTI530153.size = sizeof(TY530153*);
NTI530153.kind = 24;
NTI530153.base = (&NTI530015);
NTI530153.marker = T3723162438_16;
}

