/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Ropeobj173006 Ropeobj173006;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY498153 TY498153;
typedef struct Tcgen498028 Tcgen498028;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tpasscontext312002 Tpasscontext312002;
typedef struct TNimObject TNimObject;
typedef struct Tsym264826 Tsym264826;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tidtable264844 Tidtable264844;
typedef struct Tidpairseq264842 Tidpairseq264842;
typedef struct Intset241031 Intset241031;
typedef struct Trunk241027 Trunk241027;
typedef struct Trunkseq241029 Trunkseq241029;
typedef struct Tlinkedlist141016 Tlinkedlist141016;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct Tcproc498022 Tcproc498022;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct Tnodetable264856 Tnodetable264856;
typedef struct Tnodepairseq264854 Tnodepairseq264854;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct TY186349 TY186349;
typedef struct TY498096 TY498096;
typedef struct Tblock498020 Tblock498020;
typedef struct Cell48105 Cell48105;
typedef struct Cellseq48121 Cellseq48121;
typedef struct Gcheap50618 Gcheap50618;
typedef struct Gcstack50616 Gcstack50616;
typedef struct Memregion30285 Memregion30285;
typedef struct Smallchunk30239 Smallchunk30239;
typedef struct Llchunk30279 Llchunk30279;
typedef struct Bigchunk30241 Bigchunk30241;
typedef struct Intset30214 Intset30214;
typedef struct Trunk30210 Trunk30210;
typedef struct Avlnode30283 Avlnode30283;
typedef struct Gcstat50614 Gcstat50614;
typedef struct Cellset48117 Cellset48117;
typedef struct Pagedesc48113 Pagedesc48113;
typedef struct Tidobj194006 Tidobj194006;
typedef struct Tscope264820 Tscope264820;
typedef struct TY264927 TY264927;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Ttype264832 Ttype264832;
typedef struct Tident194012 Tident194012;
typedef struct Tnode264794 Tnode264794;
typedef struct Tloc264808 Tloc264808;
typedef struct Tlib264812 Tlib264812;
typedef struct Tidpair264840 Tidpair264840;
typedef struct Tnodepair264852 Tnodepair264852;
typedef struct Basechunk30237 Basechunk30237;
typedef struct Freecell30229 Freecell30229;
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct TY264917 TY264917;
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
typedef N_NIMCALL_PTR(void, Globalmarkerproc56602) (void);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext312002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef Ropeobj173006* Tcfilesections498010[18];
typedef NU8 Codegenflag498026Set;
struct  Tidtable264844  {
NI counter;
Tidpairseq264842* data;
};
struct  Intset241031  {
NI counter;
NI max;
Trunk241027* head;
Trunkseq241029* data;
};
struct  Tlinkedlist141016  {
Tlistentry141010* head;
Tlistentry141010* tail;
NI counter;
};
struct  Tnodetable264856  {
NI counter;
Tnodepairseq264854* data;
};
typedef Ropeobj173006* TY498136[10];
struct  Tcgen498028  {
  Tpasscontext312002 Sup;
Tsym264826* module;
NimStringDesc* filename;
Tcfilesections498010 s;
Codegenflag498026Set flags;
NimStringDesc* cfilename;
Tidtable264844 typecache;
Tidtable264844 forwtypecache;
Intset241031 declaredthings;
Intset241031 declaredprotos;
Tlinkedlist141016 headerfiles;
Intset241031 typeinfomarker;
Tcproc498022* initproc;
Tcproc498022* postinitproc;
Tcproc498022* preinitproc;
Ttypeseq264828* typestack;
Tnodetable264856 datacache;
Tsymseq264796* forwardedprocs;
NI typenodes;
NI nimtypes;
Ropeobj173006* typenodesname;
Ropeobj173006* nimtypesname;
NI labels;
TY498136 extensionloaders;
Ropeobj173006* injectstmt;
};
typedef NU8 Codegenflag498026;
struct  Tlineinfo186336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Toption164009Set;
struct  Tcproc498022  {
Tsym264826* prc;
NIM_BOOL beforeretneeded;
NIM_BOOL threadvaraccessed;
Tlineinfo186336 lastlineinfo;
Tnodeseq264788* nestedtrystmts;
NI inexceptblock;
TY186349* finallysafepoints;
NI labels;
TY498096* blocks;
NI breakidx;
Toption164009Set options;
NI maxframelen;
Tcgen498028* module;
NI withinloop;
NI splitdecls;
NI gcframeid;
Ropeobj173006* gcframetype;
};
typedef Ropeobj173006* Tcprocsections498014[3];
struct  Tblock498020  {
NI id;
Ropeobj173006* label;
Tcprocsections498014 sections;
NIM_BOOL isloop;
NI16 nestedtrystmts;
NI16 nestedexceptstmts;
NI16 framelen;
};
struct  Cell48105  {
NI refcount;
TNimType* typ;
};
struct  Cellseq48121  {
NI len;
NI cap;
Cell48105** d;
};
typedef Smallchunk30239* TY30300[512];
typedef Trunk30210* Trunkbuckets30212[256];
struct  Intset30214  {
Trunkbuckets30212 data;
};
struct  Memregion30285  {
NI minlargeobj;
NI maxlargeobj;
TY30300 freesmallchunks;
Llchunk30279* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30241* freechunkslist;
Intset30214 chunkstarts;
Avlnode30283* root;
Avlnode30283* deleted;
Avlnode30283* last;
Avlnode30283* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50614  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset48117  {
NI counter;
NI max;
Pagedesc48113* head;
Pagedesc48113** data;
};
struct  Gcheap50618  {
Gcstack50616* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq48121 zct;
Cellseq48121 decstack;
Cellseq48121 tempstack;
NI recgclock;
Memregion30285 region;
Gcstat50614 stat;
Cellset48117 marked;
Cellseq48121 additionalroots;
};
struct  Tidobj194006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind264435;
struct  Tstrtable264798  {
NI counter;
Tsymseq264796* data;
};
typedef NU8 Tmagic264525;
typedef NU32 Tsymflag264184Set;
typedef NU8 Tlockind264800;
typedef NU8 Tstorageloc264804;
typedef NU16 Tlocflag264802Set;
struct  Tloc264808  {
Tlockind264800 k;
Tstorageloc264804 s;
Tlocflag264802Set flags;
Ttype264832* t;
Ropeobj173006* r;
Ropeobj173006* heaproot;
};
struct  Tsym264826  {
  Tidobj194006 Sup;
Tsymkind264435 kind;
union{
struct {Ttypeseq264828* typeinstcache;
Tscope264820* typscope;
} S1;
struct {TY264927* procinstcache;
Tsym264826* gcunsafetyreason;
} S2;
struct {TY264927* usedgenerics;
Tstrtable264798 tab;
} S3;
struct {Tsym264826* guard;
NI bitsize;
} S4;
} kindU;
Tmagic264525 magic;
Ttype264832* typ;
Tident194012* name;
Tlineinfo186336 info;
Tsym264826* owner;
Tsymflag264184Set flags;
Tnode264794* ast;
Toption164009Set options;
NI position;
NI offset;
Tloc264808 loc;
Tlib264812* annex;
Tnode264794* constraint;
};
struct  Ropeobj173006  {
  TNimObject Sup;
Ropeobj173006* left;
Ropeobj173006* right;
NI length;
NimStringDesc* data;
};
struct  Tidpair264840  {
Tidobj194006* key;
TNimObject* val;
};
typedef NI TY30218[16];
struct  Trunk241027  {
Trunk241027* next;
NI key;
TY30218 bits;
};
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
};
struct  Tnodepair264852  {
NI h;
Tnode264794* key;
NI val;
};
struct  Gcstack50616  {
Gcstack50616* prev;
Gcstack50616* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30237  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30239  {
  Basechunk30237 Sup;
Smallchunk30239* next;
Smallchunk30239* prev;
Freecell30229* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30279  {
NI size;
NI acc;
Llchunk30279* next;
};
struct  Bigchunk30241  {
  Basechunk30237 Sup;
Bigchunk30241* next;
Bigchunk30241* prev;
NI align;
NF data;
};
struct  Trunk30210  {
Trunk30210* next;
NI key;
TY30218 bits;
};
typedef Avlnode30283* TY30290[2];
struct  Avlnode30283  {
TY30290 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc48113  {
Pagedesc48113* next;
NI key;
TY30218 bits;
};
struct  Tscope264820  {
NI depthlevel;
Tstrtable264798 symbols;
Tscope264820* parent;
};
typedef NU8 Ttypekind264244;
typedef NU8 Tcallingconvention264002;
typedef NU32 Ttypeflag264431Set;
struct  Ttype264832  {
  Tidobj194006 Sup;
Ttypekind264244 kind;
Tcallingconvention264002 callconv;
Ttypeflag264431Set flags;
Ttypeseq264828* sons;
Tnode264794* n;
Tsym264826* owner;
Tsym264826* sym;
Tsym264826* destructor;
Tsym264826* deepcopy;
Tsym264826* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc264808 loc;
};
struct  Tident194012  {
  Tidobj194006 Sup;
NimStringDesc* s;
Tident194012* next;
NI h;
};
typedef NU16 Tnodeflag264427Set;
typedef NU8 Tnodekind264020;
struct  Tnode264794  {
Ttype264832* typ;
Tlineinfo186336 info;
Tnodeflag264427Set flags;
Tnodekind264020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym264826* sym;
} S4;
struct {Tident194012* ident;
} S5;
struct {Tnodeseq264788* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 Tlibkind264810;
struct  Tlib264812  {
  Tlistentry141010 Sup;
Tlibkind264810 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj173006* name;
Tnode264794* path;
};
struct  Freecell30229  {
Freecell30229* next;
NI zerofield;
};
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
};
struct TY498153 {
  TGenericSeq Sup;
  Tcgen498028* data[SEQ_DECL_SIZE];
};
struct TY498096 {
  TGenericSeq Sup;
  Tblock498020 data[SEQ_DECL_SIZE];
};
struct Tnodeseq264788 {
  TGenericSeq Sup;
  Tnode264794* data[SEQ_DECL_SIZE];
};
struct TY186349 {
  TGenericSeq Sup;
  Ropeobj173006* data[SEQ_DECL_SIZE];
};
struct Tidpairseq264842 {
  TGenericSeq Sup;
  Tidpair264840 data[SEQ_DECL_SIZE];
};
struct Trunkseq241029 {
  TGenericSeq Sup;
  Trunk241027* data[SEQ_DECL_SIZE];
};
struct Ttypeseq264828 {
  TGenericSeq Sup;
  Ttype264832* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq264854 {
  TGenericSeq Sup;
  Tnodepair264852 data[SEQ_DECL_SIZE];
};
struct Tsymseq264796 {
  TGenericSeq Sup;
  Tsym264826* data[SEQ_DECL_SIZE];
};
struct TY264927 {
  TGenericSeq Sup;
  Tinstantiation264816* data[SEQ_DECL_SIZE];
};
struct TY264917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP1295)();
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56602 markerproc0);
N_NIMCALL(void, TMP1296)();
N_NIMCALL(void, TMP1297)();
N_NIMCALL(void, TMP1298)();
N_NIMCALL(void, TMP1299)();
N_NIMCALL(void, TMP1307)(void* p, NI op);
N_NIMCALL(void, TMP1308)(void* p, NI op);
N_NIMCALL(void, TMP1312)(void* p, NI op);
N_NIMCALL(void, TMP1313)(void* p, NI op);
N_NIMCALL(void, TMP1314)();
N_NIMCALL(void, nimGCunref)(void* p0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell48105*, usrtocell_52240_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53401_1689653243)(Cell48105* c0);
N_NOINLINE(void, addzct_52217_1689653243)(Cellseq48121* s0, Cell48105* c0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_54219_1689653243)(Cell48105* c0);
static N_INLINE(void, decref_53801_1689653243)(Cell48105* c0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
Ropeobj173006* mainmodprocs_498148_3723162438;
extern TNimType NTI173004; /* Rope */
Ropeobj173006* mainmodinit_498149_3723162438;
Ropeobj173006* othermodsinit_498150_3723162438;
Ropeobj173006* maindatinit_498151_3723162438;
Ropeobj173006* gmapping_498152_3723162438;
TY498153* gmodules_498170_3723162438;
extern TNimType NTI312002; /* TPassContext */
TNimType NTI498028; /* TCGen */
extern TNimType NTI264792; /* PSym */
extern TNimType NTI138; /* string */
TNimType NTI498010; /* TCFileSections */
TNimType NTI498026; /* Codegenflag */
TNimType NTI498115; /* set[Codegenflag] */
extern TNimType NTI264844; /* TIdTable */
extern TNimType NTI241031; /* IntSet */
extern TNimType NTI141016; /* TLinkedList */
TNimType NTI498022; /* TCProc */
extern TNimType NTI130; /* bool */
extern TNimType NTI186336; /* TLineInfo */
extern TNimType NTI264788; /* TNodeSeq */
extern TNimType NTI104; /* int */
extern TNimType NTI186349; /* seq[Rope] */
extern TNimType NTI3404; /* Natural */
TNimType NTI498020; /* TBlock */
TNimType NTI498014; /* TCProcSections */
extern TNimType NTI108; /* int16 */
TNimType NTI498096; /* seq[TBlock] */
extern TNimType NTI164011; /* TOptions */
TNimType NTI498018; /* BProc */
extern TNimType NTI264828; /* TTypeSeq */
extern TNimType NTI264856; /* TNodeTable */
extern TNimType NTI264796; /* TSymSeq */
TNimType NTI498136; /* array[48..57, Rope] */
TNimType NTI498016; /* BModule */
TNimType NTI498153; /* seq[BModule] */
NI gforwardedprocscounter_498171_3723162438;
extern Gcheap50618 gch_50658_1689653243;
extern Toption164009Set goptions_164125_2607990831;
N_NIMCALL(void, TMP1295)() {
	nimGCvisit((void*)mainmodprocs_498148_3723162438, 0);
}
N_NIMCALL(void, TMP1296)() {
	nimGCvisit((void*)mainmodinit_498149_3723162438, 0);
}
N_NIMCALL(void, TMP1297)() {
	nimGCvisit((void*)othermodsinit_498150_3723162438, 0);
}
N_NIMCALL(void, TMP1298)() {
	nimGCvisit((void*)maindatinit_498151_3723162438, 0);
}
N_NIMCALL(void, TMP1299)() {
	nimGCvisit((void*)gmapping_498152_3723162438, 0);
}
N_NIMCALL(void, TMP1307)(void* p, NI op) {
	TY498096* a;
	NI LOC1;
	NI LOC2;
	a = (TY498096*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	LOC2 = (NI)0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, TMP1308)(void* p, NI op) {
	Tcproc498022* a;
	a = (Tcproc498022*)p;
	nimGCvisit((void*)(*a).prc, op);
	nimGCvisit((void*)(*a).nestedtrystmts, op);
	nimGCvisit((void*)(*a).finallysafepoints, op);
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).gcframetype, op);
}
N_NIMCALL(void, TMP1312)(void* p, NI op) {
	Tcgen498028* a;
	NI LOC1;
	NI LOC2;
	a = (Tcgen498028*)p;
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).filename, op);
	LOC1 = (NI)0;
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
	LOC2 = (NI)0;
	for (LOC2 = 0; LOC2 < 10; LOC2++) {
	nimGCvisit((void*)(*a).extensionloaders[LOC2], op);
	}
	nimGCvisit((void*)(*a).injectstmt, op);
}
N_NIMCALL(void, TMP1313)(void* p, NI op) {
	TY498153* a;
	NI LOC1;
	a = (TY498153*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP1314)() {
	nimGCvisit((void*)gmodules_498170_3723162438, 0);
}

static N_INLINE(Cell48105*, usrtocell_52240_1689653243)(void* usr0) {
	Cell48105* result0;
	result0 = (Cell48105*)0;
	result0 = ((Cell48105*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell48105))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53401_1689653243)(Cell48105* c0) {
	addzct_52217_1689653243((&gch_50658_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell48105* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_52240_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell48105* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_52240_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53401_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

static N_INLINE(void, incref_54219_1689653243)(Cell48105* c0) {
	(*c0).refcount = (NI)((NU32)((*c0).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(void, decref_53801_1689653243)(Cell48105* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53401_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell48105* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell48105*)0;
		LOC5 = usrtocell_52240_1689653243(src0);
		incref_54219_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell48105* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell48105*)0;
		LOC10 = usrtocell_52240_1689653243((*dest0));
		decref_53801_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell48105* c0;
	c0 = usrtocell_52240_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53401_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(Tcproc498022*, newproc_498206_3723162438)(Tsym264826* prc0, Tcgen498028* module0) {
	Tcproc498022* result0;
	result0 = (Tcproc498022*)0;
	result0 = (Tcproc498022*) newObj((&NTI498018), sizeof(Tcproc498022));
	asgnRefNoCycle((void**) (&(*result0).prc), prc0);
	asgnRef((void**) (&(*result0).module), module0);
	{
		if (!!((prc0 == NIM_NIL))) goto LA3;
		(*result0).options = (*prc0).options;
	}
	goto LA1;
	LA3: ;
	{
		(*result0).options = goptions_164125_2607990831;
	}
	LA1: ;
	if ((*result0).blocks) nimGCunrefNoCycle((*result0).blocks);
	(*result0).blocks = (TY498096*) newSeqRC1((&NTI498096), ((NI) 1));
	if ((*result0).nestedtrystmts) nimGCunrefNoCycle((*result0).nestedtrystmts);
	(*result0).nestedtrystmts = (Tnodeseq264788*) newSeqRC1((&NTI264788), 0);
	if ((*result0).finallysafepoints) nimGCunrefNoCycle((*result0).finallysafepoints);
	(*result0).finallysafepoints = (TY186349*) newSeqRC1((&NTI186349), 0);
	return result0;
}

N_NIMCALL(Tcgen498028*, bmod_498201_3723162438)(Tsym264826* module0) {
	Tcgen498028* result0;
	result0 = (Tcgen498028*)0;
	result0 = gmodules_498170_3723162438->data[(*module0).position];
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_cgendataInit000)(void) {
nimRegisterGlobalMarker(TMP1295);
nimRegisterGlobalMarker(TMP1296);
nimRegisterGlobalMarker(TMP1297);
nimRegisterGlobalMarker(TMP1298);
nimRegisterGlobalMarker(TMP1299);
nimRegisterGlobalMarker(TMP1314);
	if (gmodules_498170_3723162438) nimGCunref(gmodules_498170_3723162438);
	gmodules_498170_3723162438 = (TY498153*) newSeqRC1((&NTI498153), 0);
	gforwardedprocscounter_498171_3723162438 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_cgendataDatInit000)(void) {
static TNimNode* TMP1300[24];
static TNimNode* TMP1301[6];
NI TMP1303;
static char* NIM_CONST TMP1302[6] = {
"preventStackTrace", 
"usesThreadVars", 
"frameDeclared", 
"isHeaderFile", 
"includesStringh", 
"objHasKidsValid"};
static TNimNode* TMP1305[17];
static TNimNode* TMP1306[7];
static TNimNode TMP1293[59];
NTI498028.size = sizeof(Tcgen498028);
NTI498028.kind = 17;
NTI498028.base = (&NTI312002);
TMP1300[0] = &TMP1293[1];
TMP1293[1].kind = 1;
TMP1293[1].offset = offsetof(Tcgen498028, module);
TMP1293[1].typ = (&NTI264792);
TMP1293[1].name = "module";
TMP1300[1] = &TMP1293[2];
TMP1293[2].kind = 1;
TMP1293[2].offset = offsetof(Tcgen498028, filename);
TMP1293[2].typ = (&NTI138);
TMP1293[2].name = "filename";
TMP1300[2] = &TMP1293[3];
NTI498010.size = sizeof(Tcfilesections498010);
NTI498010.kind = 16;
NTI498010.base = (&NTI173004);
NTI498010.flags = 2;
TMP1293[3].kind = 1;
TMP1293[3].offset = offsetof(Tcgen498028, s);
TMP1293[3].typ = (&NTI498010);
TMP1293[3].name = "s";
TMP1300[3] = &TMP1293[4];
NTI498026.size = sizeof(Codegenflag498026);
NTI498026.kind = 14;
NTI498026.base = 0;
NTI498026.flags = 3;
for (TMP1303 = 0; TMP1303 < 6; TMP1303++) {
TMP1293[TMP1303+5].kind = 1;
TMP1293[TMP1303+5].offset = TMP1303;
TMP1293[TMP1303+5].name = TMP1302[TMP1303];
TMP1301[TMP1303] = &TMP1293[TMP1303+5];
}
TMP1293[11].len = 6; TMP1293[11].kind = 2; TMP1293[11].sons = &TMP1301[0];
NTI498026.node = &TMP1293[11];
NTI498115.size = sizeof(Codegenflag498026Set);
NTI498115.kind = 19;
NTI498115.base = (&NTI498026);
NTI498115.flags = 3;
TMP1293[12].len = 0; TMP1293[12].kind = 0;
NTI498115.node = &TMP1293[12];
TMP1293[4].kind = 1;
TMP1293[4].offset = offsetof(Tcgen498028, flags);
TMP1293[4].typ = (&NTI498115);
TMP1293[4].name = "flags";
TMP1300[4] = &TMP1293[13];
TMP1293[13].kind = 1;
TMP1293[13].offset = offsetof(Tcgen498028, cfilename);
TMP1293[13].typ = (&NTI138);
TMP1293[13].name = "cfilename";
TMP1300[5] = &TMP1293[14];
TMP1293[14].kind = 1;
TMP1293[14].offset = offsetof(Tcgen498028, typecache);
TMP1293[14].typ = (&NTI264844);
TMP1293[14].name = "typeCache";
TMP1300[6] = &TMP1293[15];
TMP1293[15].kind = 1;
TMP1293[15].offset = offsetof(Tcgen498028, forwtypecache);
TMP1293[15].typ = (&NTI264844);
TMP1293[15].name = "forwTypeCache";
TMP1300[7] = &TMP1293[16];
TMP1293[16].kind = 1;
TMP1293[16].offset = offsetof(Tcgen498028, declaredthings);
TMP1293[16].typ = (&NTI241031);
TMP1293[16].name = "declaredThings";
TMP1300[8] = &TMP1293[17];
TMP1293[17].kind = 1;
TMP1293[17].offset = offsetof(Tcgen498028, declaredprotos);
TMP1293[17].typ = (&NTI241031);
TMP1293[17].name = "declaredProtos";
TMP1300[9] = &TMP1293[18];
TMP1293[18].kind = 1;
TMP1293[18].offset = offsetof(Tcgen498028, headerfiles);
TMP1293[18].typ = (&NTI141016);
TMP1293[18].name = "headerFiles";
TMP1300[10] = &TMP1293[19];
TMP1293[19].kind = 1;
TMP1293[19].offset = offsetof(Tcgen498028, typeinfomarker);
TMP1293[19].typ = (&NTI241031);
TMP1293[19].name = "typeInfoMarker";
TMP1300[11] = &TMP1293[20];
NTI498022.size = sizeof(Tcproc498022);
NTI498022.kind = 18;
NTI498022.base = 0;
TMP1305[0] = &TMP1293[22];
TMP1293[22].kind = 1;
TMP1293[22].offset = offsetof(Tcproc498022, prc);
TMP1293[22].typ = (&NTI264792);
TMP1293[22].name = "prc";
TMP1305[1] = &TMP1293[23];
TMP1293[23].kind = 1;
TMP1293[23].offset = offsetof(Tcproc498022, beforeretneeded);
TMP1293[23].typ = (&NTI130);
TMP1293[23].name = "beforeRetNeeded";
TMP1305[2] = &TMP1293[24];
TMP1293[24].kind = 1;
TMP1293[24].offset = offsetof(Tcproc498022, threadvaraccessed);
TMP1293[24].typ = (&NTI130);
TMP1293[24].name = "threadVarAccessed";
TMP1305[3] = &TMP1293[25];
TMP1293[25].kind = 1;
TMP1293[25].offset = offsetof(Tcproc498022, lastlineinfo);
TMP1293[25].typ = (&NTI186336);
TMP1293[25].name = "lastLineInfo";
TMP1305[4] = &TMP1293[26];
TMP1293[26].kind = 1;
TMP1293[26].offset = offsetof(Tcproc498022, nestedtrystmts);
TMP1293[26].typ = (&NTI264788);
TMP1293[26].name = "nestedTryStmts";
TMP1305[5] = &TMP1293[27];
TMP1293[27].kind = 1;
TMP1293[27].offset = offsetof(Tcproc498022, inexceptblock);
TMP1293[27].typ = (&NTI104);
TMP1293[27].name = "inExceptBlock";
TMP1305[6] = &TMP1293[28];
TMP1293[28].kind = 1;
TMP1293[28].offset = offsetof(Tcproc498022, finallysafepoints);
TMP1293[28].typ = (&NTI186349);
TMP1293[28].name = "finallySafePoints";
TMP1305[7] = &TMP1293[29];
TMP1293[29].kind = 1;
TMP1293[29].offset = offsetof(Tcproc498022, labels);
TMP1293[29].typ = (&NTI3404);
TMP1293[29].name = "labels";
TMP1305[8] = &TMP1293[30];
NTI498020.size = sizeof(Tblock498020);
NTI498020.kind = 18;
NTI498020.base = 0;
NTI498020.flags = 2;
TMP1306[0] = &TMP1293[32];
TMP1293[32].kind = 1;
TMP1293[32].offset = offsetof(Tblock498020, id);
TMP1293[32].typ = (&NTI104);
TMP1293[32].name = "id";
TMP1306[1] = &TMP1293[33];
TMP1293[33].kind = 1;
TMP1293[33].offset = offsetof(Tblock498020, label);
TMP1293[33].typ = (&NTI173004);
TMP1293[33].name = "label";
TMP1306[2] = &TMP1293[34];
NTI498014.size = sizeof(Tcprocsections498014);
NTI498014.kind = 16;
NTI498014.base = (&NTI173004);
NTI498014.flags = 2;
TMP1293[34].kind = 1;
TMP1293[34].offset = offsetof(Tblock498020, sections);
TMP1293[34].typ = (&NTI498014);
TMP1293[34].name = "sections";
TMP1306[3] = &TMP1293[35];
TMP1293[35].kind = 1;
TMP1293[35].offset = offsetof(Tblock498020, isloop);
TMP1293[35].typ = (&NTI130);
TMP1293[35].name = "isLoop";
TMP1306[4] = &TMP1293[36];
TMP1293[36].kind = 1;
TMP1293[36].offset = offsetof(Tblock498020, nestedtrystmts);
TMP1293[36].typ = (&NTI108);
TMP1293[36].name = "nestedTryStmts";
TMP1306[5] = &TMP1293[37];
TMP1293[37].kind = 1;
TMP1293[37].offset = offsetof(Tblock498020, nestedexceptstmts);
TMP1293[37].typ = (&NTI108);
TMP1293[37].name = "nestedExceptStmts";
TMP1306[6] = &TMP1293[38];
TMP1293[38].kind = 1;
TMP1293[38].offset = offsetof(Tblock498020, framelen);
TMP1293[38].typ = (&NTI108);
TMP1293[38].name = "frameLen";
TMP1293[31].len = 7; TMP1293[31].kind = 2; TMP1293[31].sons = &TMP1306[0];
NTI498020.node = &TMP1293[31];
NTI498096.size = sizeof(TY498096*);
NTI498096.kind = 24;
NTI498096.base = (&NTI498020);
NTI498096.flags = 2;
NTI498096.marker = TMP1307;
TMP1293[30].kind = 1;
TMP1293[30].offset = offsetof(Tcproc498022, blocks);
TMP1293[30].typ = (&NTI498096);
TMP1293[30].name = "blocks";
TMP1305[9] = &TMP1293[39];
TMP1293[39].kind = 1;
TMP1293[39].offset = offsetof(Tcproc498022, breakidx);
TMP1293[39].typ = (&NTI104);
TMP1293[39].name = "breakIdx";
TMP1305[10] = &TMP1293[40];
TMP1293[40].kind = 1;
TMP1293[40].offset = offsetof(Tcproc498022, options);
TMP1293[40].typ = (&NTI164011);
TMP1293[40].name = "options";
TMP1305[11] = &TMP1293[41];
TMP1293[41].kind = 1;
TMP1293[41].offset = offsetof(Tcproc498022, maxframelen);
TMP1293[41].typ = (&NTI104);
TMP1293[41].name = "maxFrameLen";
TMP1305[12] = &TMP1293[42];
TMP1293[42].kind = 1;
TMP1293[42].offset = offsetof(Tcproc498022, module);
TMP1293[42].typ = (&NTI498016);
TMP1293[42].name = "module";
TMP1305[13] = &TMP1293[43];
TMP1293[43].kind = 1;
TMP1293[43].offset = offsetof(Tcproc498022, withinloop);
TMP1293[43].typ = (&NTI104);
TMP1293[43].name = "withinLoop";
TMP1305[14] = &TMP1293[44];
TMP1293[44].kind = 1;
TMP1293[44].offset = offsetof(Tcproc498022, splitdecls);
TMP1293[44].typ = (&NTI104);
TMP1293[44].name = "splitDecls";
TMP1305[15] = &TMP1293[45];
TMP1293[45].kind = 1;
TMP1293[45].offset = offsetof(Tcproc498022, gcframeid);
TMP1293[45].typ = (&NTI3404);
TMP1293[45].name = "gcFrameId";
TMP1305[16] = &TMP1293[46];
TMP1293[46].kind = 1;
TMP1293[46].offset = offsetof(Tcproc498022, gcframetype);
TMP1293[46].typ = (&NTI173004);
TMP1293[46].name = "gcFrameType";
TMP1293[21].len = 17; TMP1293[21].kind = 2; TMP1293[21].sons = &TMP1305[0];
NTI498022.node = &TMP1293[21];
NTI498018.size = sizeof(Tcproc498022*);
NTI498018.kind = 22;
NTI498018.base = (&NTI498022);
NTI498018.marker = TMP1308;
TMP1293[20].kind = 1;
TMP1293[20].offset = offsetof(Tcgen498028, initproc);
TMP1293[20].typ = (&NTI498018);
TMP1293[20].name = "initProc";
TMP1300[12] = &TMP1293[47];
TMP1293[47].kind = 1;
TMP1293[47].offset = offsetof(Tcgen498028, postinitproc);
TMP1293[47].typ = (&NTI498018);
TMP1293[47].name = "postInitProc";
TMP1300[13] = &TMP1293[48];
TMP1293[48].kind = 1;
TMP1293[48].offset = offsetof(Tcgen498028, preinitproc);
TMP1293[48].typ = (&NTI498018);
TMP1293[48].name = "preInitProc";
TMP1300[14] = &TMP1293[49];
TMP1293[49].kind = 1;
TMP1293[49].offset = offsetof(Tcgen498028, typestack);
TMP1293[49].typ = (&NTI264828);
TMP1293[49].name = "typeStack";
TMP1300[15] = &TMP1293[50];
TMP1293[50].kind = 1;
TMP1293[50].offset = offsetof(Tcgen498028, datacache);
TMP1293[50].typ = (&NTI264856);
TMP1293[50].name = "dataCache";
TMP1300[16] = &TMP1293[51];
TMP1293[51].kind = 1;
TMP1293[51].offset = offsetof(Tcgen498028, forwardedprocs);
TMP1293[51].typ = (&NTI264796);
TMP1293[51].name = "forwardedProcs";
TMP1300[17] = &TMP1293[52];
TMP1293[52].kind = 1;
TMP1293[52].offset = offsetof(Tcgen498028, typenodes);
TMP1293[52].typ = (&NTI104);
TMP1293[52].name = "typeNodes";
TMP1300[18] = &TMP1293[53];
TMP1293[53].kind = 1;
TMP1293[53].offset = offsetof(Tcgen498028, nimtypes);
TMP1293[53].typ = (&NTI104);
TMP1293[53].name = "nimTypes";
TMP1300[19] = &TMP1293[54];
TMP1293[54].kind = 1;
TMP1293[54].offset = offsetof(Tcgen498028, typenodesname);
TMP1293[54].typ = (&NTI173004);
TMP1293[54].name = "typeNodesName";
TMP1300[20] = &TMP1293[55];
TMP1293[55].kind = 1;
TMP1293[55].offset = offsetof(Tcgen498028, nimtypesname);
TMP1293[55].typ = (&NTI173004);
TMP1293[55].name = "nimTypesName";
TMP1300[21] = &TMP1293[56];
TMP1293[56].kind = 1;
TMP1293[56].offset = offsetof(Tcgen498028, labels);
TMP1293[56].typ = (&NTI3404);
TMP1293[56].name = "labels";
TMP1300[22] = &TMP1293[57];
NTI498136.size = sizeof(TY498136);
NTI498136.kind = 16;
NTI498136.base = (&NTI173004);
NTI498136.flags = 2;
TMP1293[57].kind = 1;
TMP1293[57].offset = offsetof(Tcgen498028, extensionloaders);
TMP1293[57].typ = (&NTI498136);
TMP1293[57].name = "extensionLoaders";
TMP1300[23] = &TMP1293[58];
TMP1293[58].kind = 1;
TMP1293[58].offset = offsetof(Tcgen498028, injectstmt);
TMP1293[58].typ = (&NTI173004);
TMP1293[58].name = "injectStmt";
TMP1293[0].len = 24; TMP1293[0].kind = 2; TMP1293[0].sons = &TMP1300[0];
NTI498028.node = &TMP1293[0];
NTI498016.size = sizeof(Tcgen498028*);
NTI498016.kind = 22;
NTI498016.base = (&NTI498028);
NTI498016.marker = TMP1312;
NTI498153.size = sizeof(TY498153*);
NTI498153.kind = 24;
NTI498153.base = (&NTI498016);
NTI498153.marker = TMP1313;
}

