/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tsymseq224811 Tsymseq224811;
typedef struct Tsym224841 Tsym224841;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell48946 Cell48946;
typedef struct Cellseq48962 Cellseq48962;
typedef struct Gcheap51018 Gcheap51018;
typedef struct Gcstack51016 Gcstack51016;
typedef struct Cellset48958 Cellset48958;
typedef struct Pagedesc48954 Pagedesc48954;
typedef struct Memregion30890 Memregion30890;
typedef struct Smallchunk30842 Smallchunk30842;
typedef struct Llchunk30884 Llchunk30884;
typedef struct Bigchunk30844 Bigchunk30844;
typedef struct Intset30817 Intset30817;
typedef struct Trunk30813 Trunk30813;
typedef struct Avlnode30888 Avlnode30888;
typedef struct Gcstat51014 Gcstat51014;
typedef struct TY575054 TY575054;
typedef struct Tmoduleinmemory575017 Tmoduleinmemory575017;
typedef struct TY224932 TY224932;
typedef struct Tnode224809 Tnode224809;
typedef struct Tidobj197015 Tidobj197015;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq224843 Ttypeseq224843;
typedef struct Tscope224835 Tscope224835;
typedef struct TY224944 TY224944;
typedef struct Tstrtable224813 Tstrtable224813;
typedef struct Ttype224847 Ttype224847;
typedef struct Tident197021 Tident197021;
typedef struct Tlineinfo189352 Tlineinfo189352;
typedef struct Tloc224823 Tloc224823;
typedef struct Ropeobj175009 Ropeobj175009;
typedef struct Tlib224827 Tlib224827;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY123809 TY123809;
typedef struct Trodreader267030 Trodreader267030;
typedef struct Tllstream212204 Tllstream212204;
typedef struct TY90959 TY90959;
typedef struct TY508155 TY508155;
typedef struct Tcgen508038 Tcgen508038;
typedef struct Basechunk30840 Basechunk30840;
typedef struct Freecell30832 Freecell30832;
typedef struct Tnodeseq224803 Tnodeseq224803;
typedef struct Tinstantiation224831 Tinstantiation224831;
typedef struct Tlistentry140022 Tlistentry140022;
typedef struct Tindex267028 Tindex267028;
typedef struct Tiitable232274 Tiitable232274;
typedef struct Tiipairseq232272 Tiipairseq232272;
typedef struct Table267063 Table267063;
typedef struct Keyvaluepairseq267066 Keyvaluepairseq267066;
typedef struct Memfile265208 Memfile265208;
typedef struct Tpasscontext276005 Tpasscontext276005;
typedef struct Tidtable224859 Tidtable224859;
typedef struct Tidpairseq224857 Tidpairseq224857;
typedef struct Intset221056 Intset221056;
typedef struct Trunk221052 Trunk221052;
typedef struct Trunkseq221054 Trunkseq221054;
typedef struct Tlinkedlist140028 Tlinkedlist140028;
typedef struct Tcproc508034 Tcproc508034;
typedef struct Tnodetable224871 Tnodetable224871;
typedef struct Tnodepairseq224869 Tnodepairseq224869;
typedef struct Tiipair232270 Tiipair232270;
typedef struct Keyvaluepair267069 Keyvaluepair267069;
typedef struct Tidpair224855 Tidpair224855;
typedef struct TY189365 TY189365;
typedef struct TY508106 TY508106;
typedef struct Tnodepair224867 Tnodepair224867;
typedef struct Tblock508032 Tblock508032;
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
struct  Cell48946  {
NI refcount;
TNimType* typ;
};
struct  Cellseq48962  {
NI len;
NI cap;
Cell48946** d;
};
struct  Cellset48958  {
NI counter;
NI max;
Pagedesc48954* head;
Pagedesc48954** data;
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
Cellseq48962 zct;
Cellseq48962 decstack;
Cellset48958 cycleroots;
Cellseq48962 tempstack;
NI recgclock;
Memregion30890 region;
Gcstat51014 stat;
};
typedef NU8 Sha1digest200009[20];
struct  Tmoduleinmemory575017  {
NF compiledat;
Sha1digest200009 hash;
TY224932* deps;
NU8 needsrecompile;
NU8 hashstatus;
};
typedef N_NIMCALL_PTR(Tnode224809*, TY276069) (Tsym224841* m, NI32 fileidx);
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj197015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable224813  {
NI counter;
Tsymseq224811* data;
};
struct  Tlineinfo189352  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tsym224841*, TY276064) (Tsym224841* m, NI32 fileidx);
struct TY123809 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  Tident197021  {
  Tidobj197015 Sup;
NimStringDesc* s;
Tident197021* next;
NI h;
};
struct TY90959 {
NimStringDesc* Field0;
NI Field1;
};
struct  Gcstack51016  {
Gcstack51016* prev;
Gcstack51016* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY30821[16];
struct  Pagedesc48954  {
Pagedesc48954* next;
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
struct  Ropeobj175009  {
  TNimObject Sup;
Ropeobj175009* left;
Ropeobj175009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry140022  {
  TNimObject Sup;
Tlistentry140022* prev;
Tlistentry140022* next;
};
struct  Tlib224827  {
  Tlistentry140022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj175009* name;
Tnode224809* path;
};
struct  Tiitable232274  {
NI counter;
Tiipairseq232272* data;
};
struct  Tindex267028  {
NI lastidxkey;
NI lastidxval;
Tiitable232274 tab;
NimStringDesc* r;
NI offset;
};
struct  Table267063  {
Keyvaluepairseq267066* data;
NI counter;
};
struct  Memfile265208  {
void* mem;
NI size;
int handle;
};
struct  Trodreader267030  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY224932* moddeps;
TY224932* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex267028 index;
Tindex267028 imports;
NI readerindex;
NI line;
NI moduleid;
Table267063 syms;
Memfile265208 memfile;
Tsymseq224811* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tllstream212204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Tpasscontext276005  {
  TNimObject Sup;
NIM_BOOL fromcache;
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
struct  Tiipair232270  {
NI key;
NI val;
};
struct Keyvaluepair267069 {
NI Field0;
NI Field1;
Tsym224841* Field2;
};
struct  Tidpair224855  {
Tidobj197015* key;
TNimObject* val;
};
struct  Trunk221052  {
Trunk221052* next;
NI key;
TY30821 bits;
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
struct  Tnodepair224867  {
NI h;
Tnode224809* key;
NI val;
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
struct Tsymseq224811 {
  TGenericSeq Sup;
  Tsym224841* data[SEQ_DECL_SIZE];
};
struct TY575054 {
  TGenericSeq Sup;
  Tmoduleinmemory575017 data[SEQ_DECL_SIZE];
};
struct TY508155 {
  TGenericSeq Sup;
  Tcgen508038* data[SEQ_DECL_SIZE];
};
struct TY224932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Ttypeseq224843 {
  TGenericSeq Sup;
  Ttype224847* data[SEQ_DECL_SIZE];
};
struct TY224944 {
  TGenericSeq Sup;
  Tinstantiation224831* data[SEQ_DECL_SIZE];
};
struct Tnodeseq224803 {
  TGenericSeq Sup;
  Tnode224809* data[SEQ_DECL_SIZE];
};
struct Tiipairseq232272 {
  TGenericSeq Sup;
  Tiipair232270 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq267066 {
  TGenericSeq Sup;
  Keyvaluepair267069 data[SEQ_DECL_SIZE];
};
struct Tidpairseq224857 {
  TGenericSeq Sup;
  Tidpair224855 data[SEQ_DECL_SIZE];
};
struct Trunkseq221054 {
  TGenericSeq Sup;
  Trunk221052* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq224869 {
  TGenericSeq Sup;
  Tnodepair224867 data[SEQ_DECL_SIZE];
};
struct TY189365 {
  TGenericSeq Sup;
  Ropeobj175009* data[SEQ_DECL_SIZE];
};
struct TY508106 {
  TGenericSeq Sup;
  Tblock508032 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell48946*, usrtocell_52646)(void* usr);
static N_INLINE(void, rtladdzct_54204)(Cell48946* c);
N_NOINLINE(void, addzct_52617)(Cellseq48962* s, Cell48946* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1166)(void* p, NI op);
N_NIMCALL(Tnode224809*, includemodule_575860)(Tsym224841* s, NI32 fileidx);
N_NIMCALL(Tnode224809*, parsefile_252041)(NI32 fileidx);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(void, adddep_575150)(Tsym224841* x, NI32 dep);
N_NIMCALL(void, safeadd_575174)(TY224932** x, NI32 y);
N_NIMCALL(void, dohash_575132)(NI32 fileidx);
N_NIMCALL(void, securehashfile_200034)(NimStringDesc* filename, Sha1digest200009* Result);
N_NIMCALL(NimStringDesc*, tofullpath_190665)(NI32 fileidx);
N_NIMCALL(Tsym224841*, importmodule_575824)(Tsym224841* s, NI32 fileidx);
N_NIMCALL(Tsym224841*, compilemodule_575725)(NI32 fileidx, NU32 flags);
N_NIMCALL(Tsym224841*, getmodule_575077)(NI32 fileidx);
N_NIMCALL(Tsym224841*, newmodule_575646)(NI32 fileidx);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Tident197021*, getident_197463)(NimStringDesc* identifier);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY123809* Result);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NIM_BOOL, isnimidentifier_215257)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_193636)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tlineinfo189352, newlineinfo_190267)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(Tsym224841*, newsym_225656)(NU8 symkind, Tident197021* name, Tsym224841* owner, Tlineinfo189352 info);
N_NIMCALL(NimStringDesc*, getpackagename_167025)(NimStringDesc* path);
N_NIMCALL(void, initstrtable_228007)(Tstrtable224813* x);
N_NIMCALL(void, strtableadd_232103)(Tstrtable224813* t, Tsym224841* n);
N_NIMCALL(Trodreader267030*, handlesymbolfile_267094)(Tsym224841* module);
N_NIMCALL(void, internalerror_195191)(NimStringDesc* errmsg);
static N_INLINE(NI, getid_223404)(void);
N_NIMCALL(void, processmodule_276056)(Tsym224841* module, Tllstream212204* stream, Trodreader267030* rd);
N_NIMCALL(Tllstream212204*, llstreamopen_212238)(FILE* f);
N_NIMCALL(NU8, checkdepmem_575470)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, hashchanged_575102)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, HEX24_195279)(TY90959 x);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_200152)(Sha1digest200009 a, Sha1digest200009 b);
N_NIMCALL(void, resetmodule_575319)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_55022)(Cell48946* c);
static N_INLINE(NIM_BOOL, canbecycleroot_52667)(Cell48946* c);
static N_INLINE(void, rtladdcycleroot_53423)(Cell48946* c);
N_NOINLINE(void, incl_49665)(Cellset48958* s, Cell48946* cell);
static N_INLINE(void, decref_54604)(Cell48946* c);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_575185)(TY224932* x, TY224932* y);
N_NIMCALL(void, localerror_195128)(Tlineinfo189352 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NI32, fileinfoidx_190254)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, HEX2F_123481)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, resetpackagecache_166805)(void);
N_NIMCALL(void, resetsystypes_273268)(void);
N_NIMCALL(void, wantmainmodule_575931)(void);
N_NIMCALL(void, fatal_195096)(Tlineinfo189352 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(void, compilesystemmodule_575910)(void);
N_NIMCALL(Tsym224841*, makemodule_576007)(NimStringDesc* filename);
STRING_LITERAL(TMP1596, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TMP1599, "compiler/modules.nim", 20);
NIM_CONST TY90959 TMP1598 = {((NimStringDesc*) &TMP1599),
((NI) 41)}
;
STRING_LITERAL(TMP3706, "system.nim", 10);
STRING_LITERAL(TMP4520, "", 0);
STRING_LITERAL(TMP4521, "nim", 3);
STRING_LITERAL(TMP5236, "stdin", 5);
Tsymseq224811* gcompiledmodules_575053;
extern TNimType NTI224811; /* TSymSeq */
extern Gcheap51018 gch_51059;
TY575054* gmemcachedata_575071;
TNimType NTI575017; /* TModuleInMemory */
extern TNimType NTI128; /* float */
extern TNimType NTI200009; /* Sha1Digest */
extern TNimType NTI224932; /* seq[int32] */
TNimType NTI575013; /* TNeedRecompile */
TNimType NTI575015; /* THashStatus */
TNimType NTI575054; /* seq[TModuleInMemory] */
extern TY276069 gincludefile_276073;
extern NU32 gglobaloptions_166132;
extern TY276064 gimportmodule_276068;
extern TNimType NTI224807; /* PSym */
extern TNimType NTI224841; /* TSym */
extern NU8 gcmd_166134;
extern NI gfrontendid_223012;
extern NIM_BOOL gprojectisstdin_166237;
extern NF glastcmdtime_166145;
extern TY508155* gmodules_508172;
extern Tsym224841* systemmodule_273019;
extern NI32 systemfileidx_189633;
extern NimStringDesc* libpath_166233;
extern NimStringDesc* gprojectfull_166236;
extern Tlineinfo189352 gcmdlineinfo_190322;
extern NI32 gprojectmainidx_166238;

static N_INLINE(Cell48946*, usrtocell_52646)(void* usr) {
	Cell48946* result;
	result = 0;
	result = ((Cell48946*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell48946))))));
	return result;
}

static N_INLINE(void, rtladdzct_54204)(Cell48946* c) {
	addzct_52617((&gch_51059.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell48946* c;
	c = usrtocell_52646(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_54204(c);
	}
	LA3: ;
}
N_NIMCALL(void, TMP1166)(void* p, NI op) {
	TY575054* a;
	NI LOC1;
	a = (TY575054*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].deps, op);
	}
}

N_NIMCALL(void, adddep_575150)(Tsym224841* x, NI32 dep) {
	{
		if (!((gmemcachedata_575071 ? gmemcachedata_575071->Sup.len : 0) <= ((NI) (dep)))) goto LA3;
		gmemcachedata_575071 = (TY575054*) setLengthSeq(&(gmemcachedata_575071)->Sup, sizeof(Tmoduleinmemory575017), ((NI) ((NI32)(dep + ((NI32) 1)))));
	}
	LA3: ;
	safeadd_575174((&gmemcachedata_575071->data[(*x).position].deps), dep);
}

N_NIMCALL(void, dohash_575132)(NI32 fileidx) {
	{
		NimStringDesc* LOC5;
		if (!(gmemcachedata_575071->data[fileidx].hashstatus == ((NU8) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = tofullpath_190665(fileidx);
		securehashfile_200034(LOC5, gmemcachedata_575071->data[fileidx].hash);
	}
	LA3: ;
}

N_NIMCALL(Tnode224809*, includemodule_575860)(Tsym224841* s, NI32 fileidx) {
	Tnode224809* result;
	result = 0;
	result = parsefile_252041(fileidx);
	{
		if (!((gglobaloptions_166132 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		{
			if (!((gmemcachedata_575071 ? gmemcachedata_575071->Sup.len : 0) <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_575071 = (TY575054*) setLengthSeq(&(gmemcachedata_575071)->Sup, sizeof(Tmoduleinmemory575017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		adddep_575150(s, fileidx);
		dohash_575132(fileidx);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Tsym224841*, getmodule_575077)(NI32 fileidx) {
	Tsym224841* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < (gcompiledmodules_575053 ? gcompiledmodules_575053->Sup.len : 0));
		LA4: ;
		if (!LOC3) goto LA5;
		result = gcompiledmodules_575053->data[fileidx];
	}
	LA5: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell48946* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_52646(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell48946* c;
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

N_NIMCALL(Tsym224841*, newmodule_575646)(NI32 fileidx) {
	Tsym224841* result;
	NimStringDesc* filename;
	TY123809 LOC1;
	NimStringDesc* LOC7;
	Tident197021* LOC8;
	result = 0;
	result = (Tsym224841*) newObj((&NTI224807), sizeof(Tsym224841));
	(*result).Sup.Sup.m_type = (&NTI224841);
	(*result).Sup.id = ((NI) -1);
	(*result).kind = ((NU8) 6);
	filename = tofullpath_190665(fileidx);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitFile(filename, (&LOC1));
	asgnRefNoCycle((void**) (&(*result).name), getident_197463(LOC1.Field1));
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = isnimidentifier_215257((*(*result).name).s);
		if (!!(LOC4)) goto LA5;
		rawmessage_193636(((NU16) 22), (*(*result).name).s);
	}
	LA5: ;
	(*result).info = newlineinfo_190267(fileidx, ((NI) 1), ((NI) 1));
	LOC7 = 0;
	LOC7 = getpackagename_167025(filename);
	LOC8 = 0;
	LOC8 = getident_197463(LOC7);
	asgnRefNoCycle((void**) (&(*result).owner), newsym_225656(((NU8) 24), LOC8, NIM_NIL, (*result).info));
	(*result).position = ((NI) (fileidx));
	{
		if (!((gmemcachedata_575071 ? gmemcachedata_575071->Sup.len : 0) <= ((NI) (fileidx)))) goto LA11;
		gmemcachedata_575071 = (TY575054*) setLengthSeq(&(gmemcachedata_575071)->Sup, sizeof(Tmoduleinmemory575017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA11: ;
	{
		if (!((gcompiledmodules_575053 ? gcompiledmodules_575053->Sup.len : 0) <= ((NI) (fileidx)))) goto LA15;
		gcompiledmodules_575053 = (Tsymseq224811*) setLengthSeq(&(gcompiledmodules_575053)->Sup, sizeof(Tsym224841*), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA15: ;
	asgnRefNoCycle((void**) (&gcompiledmodules_575053->data[(*result).position]), result);
	(*result).flags |= ((NU32)1)<<((((NU8) 0))%(sizeof(NU32)*8));
	initstrtable_228007((&(*result).kindU.S3.tab));
	strtableadd_232103((&(*result).kindU.S3.tab), result);
	return result;
}

static N_INLINE(NI, getid_223404)(void) {
	NI result;
	result = 0;
	result = gfrontendid_223012;
	gfrontendid_223012 += ((NI) 1);
	return result;
}

N_NIMCALL(NIM_BOOL, hashchanged_575102)(NI32 fileidx) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < (gmemcachedata_575071 ? gmemcachedata_575071->Sup.len : 0));
		LA4: ;
		if (!!(LOC3)) goto LA5;
		LOC7 = 0;
		LOC7 = HEX24_195279(TMP1598);
		internalerror_195191(LOC7);
	}
	LA5: ;
	switch (gmemcachedata_575071->data[fileidx].hashstatus) {
	case ((NU8) 2):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 3):
	{
		result = NIM_FALSE;
	}
	break;
	case ((NU8) 1):
	{
		Sha1digest200009 newhash;
		NimStringDesc* LOC11;
		NIM_BOOL LOC12;
		memset((void*)newhash, 0, sizeof(newhash));
		LOC11 = 0;
		LOC11 = tofullpath_190665(fileidx);
		chckNil((void*)newhash);
		memset((void*)newhash, 0, sizeof(newhash));
		securehashfile_200034(LOC11, newhash);
		LOC12 = 0;
		LOC12 = HEX3DHEX3D_200152(newhash, gmemcachedata_575071->data[fileidx].hash);
		result = !(LOC12);
		memcpy((void*)gmemcachedata_575071->data[fileidx].hash, (NIM_CONST void*)newhash, sizeof(Sha1digest200009));
		{
			if (!result) goto LA15;
			gmemcachedata_575071->data[fileidx].hashstatus = ((NU8) 2);
		}
		goto LA13;
		LA15: ;
		{
			gmemcachedata_575071->data[fileidx].hashstatus = ((NU8) 3);
		}
		LA13: ;
	}
	break;
	case ((NU8) 0):
	{
		NimStringDesc* LOC19;
		LOC19 = 0;
		LOC19 = tofullpath_190665(fileidx);
		securehashfile_200034(LOC19, gmemcachedata_575071->data[fileidx].hash);
		result = NIM_TRUE;
		{
			if (!result) goto LA22;
			gmemcachedata_575071->data[fileidx].hashstatus = ((NU8) 2);
		}
		goto LA20;
		LA22: ;
		{
			gmemcachedata_575071->data[fileidx].hashstatus = ((NU8) 3);
		}
		LA20: ;
	}
	break;
	}
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_52667)(Cell48946* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_53423)(Cell48946* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_49665((&gch_51059.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_55022)(Cell48946* c) {
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

static N_INLINE(void, decref_54604)(Cell48946* c) {
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

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell48946* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_52646(src);
		incref_55022(LOC5);
	}
	LA3: ;
	{
		Cell48946* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_52646((*dest));
		decref_54604(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, resetmodule_575319)(NI32 fileidx) {
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gmemcachedata_575071 ? gmemcachedata_575071->Sup.len : 0)))))) goto LA3;
		gmemcachedata_575071->data[fileidx].needsrecompile = ((NU8) 2);
	}
	LA3: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gcompiledmodules_575053 ? gcompiledmodules_575053->Sup.len : 0)))))) goto LA7;
		asgnRefNoCycle((void**) (&gcompiledmodules_575053->data[fileidx]), NIM_NIL);
	}
	LA7: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gmodules_508172 ? gmodules_508172->Sup.len : 0)))))) goto LA11;
		asgnRef((void**) (&gmodules_508172->data[fileidx]), NIM_NIL);
	}
	LA11: ;
}

N_NIMCALL(NU8, checkdepmem_575470)(NI32 fileidx) {
	NU8 result;
{	result = 0;
	{
		if (!!((gmemcachedata_575071->data[fileidx].needsrecompile == ((NU8) 0)))) goto LA3;
		result = gmemcachedata_575071->data[fileidx].needsrecompile;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = ((gglobaloptions_166132 &(1<<((((NU8) 1))&31)))!=0);
		if (LOC7) goto LA8;
		LOC7 = hashchanged_575102(fileidx);
		LA8: ;
		if (!LOC7) goto LA9;
		resetmodule_575319(fileidx);
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = HEX3DHEX3D_575185(gmemcachedata_575071->data[fileidx].deps, NIM_NIL);
		if (!!(LOC13)) goto LA14;
		gmemcachedata_575071->data[fileidx].needsrecompile = ((NU8) 3);
		{
			NI32 dep_575611;
			TY224932* HEX3Atmp_575625;
			NI i_575628;
			NI L_575630;
			dep_575611 = 0;
			HEX3Atmp_575625 = 0;
			HEX3Atmp_575625 = gmemcachedata_575071->data[fileidx].deps;
			i_575628 = ((NI) 0);
			L_575630 = (HEX3Atmp_575625 ? HEX3Atmp_575625->Sup.len : 0);
			{
				while (1) {
					NU8 d;
					if (!(i_575628 < L_575630)) goto LA18;
					dep_575611 = HEX3Atmp_575625->data[i_575628];
					d = checkdepmem_575470(dep_575611);
					{
						if (!((20 &(1<<((d)&7)))!=0)) goto LA21;
						resetmodule_575319(fileidx);
						result = ((NU8) 2);
						goto BeforeRet;
					}
					LA21: ;
					i_575628 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	LA14: ;
	gmemcachedata_575071->data[fileidx].needsrecompile = ((NU8) 1);
	result = ((NU8) 1);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym224841*, compilemodule_575725)(NI32 fileidx, NU32 flags) {
	Tsym224841* result;
{	result = 0;
	result = getmodule_575077(fileidx);
	{
		Trodreader267030* rd;
		if (!(result == NIM_NIL)) goto LA3;
		{
			if (!((gmemcachedata_575071 ? gmemcachedata_575071->Sup.len : 0) <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_575071 = (TY575054*) setLengthSeq(&(gmemcachedata_575071)->Sup, sizeof(Tmoduleinmemory575017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		gmemcachedata_575071->data[fileidx].needsrecompile = ((NU8) 3);
		result = newmodule_575646(fileidx);
		rd = 0;
		(*result).flags = ((*result).flags | flags);
		{
			if (!((18438 &(1<<((gcmd_166134)&31)))!=0)) goto LA11;
			rd = handlesymbolfile_267094(result);
			{
				if (!((*result).Sup.id < ((NI) 0))) goto LA15;
				internalerror_195191(((NimStringDesc*) &TMP1596));
				goto BeforeRet;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*result).Sup.id = getid_223404();
		}
		LA9: ;
		{
			NIM_BOOL LOC20;
			Tllstream212204* LOC24;
			LOC20 = 0;
			LOC20 = ((flags &(1<<((((NU8) 12))&31)))!=0);
			if (!(LOC20)) goto LA21;
			LOC20 = gprojectisstdin_166237;
			LA21: ;
			if (!LOC20) goto LA22;
			LOC24 = 0;
			LOC24 = llstreamopen_212238(stdin);
			processmodule_276056(result, LOC24, rd);
		}
		goto LA18;
		LA22: ;
		{
			processmodule_276056(result, NIM_NIL, rd);
		}
		LA18: ;
		{
			if (!((gglobaloptions_166132 &(1<<((((NU8) 15))&31)))!=0)) goto LA28;
			gmemcachedata_575071->data[fileidx].compiledat = glastcmdtime_166145;
			gmemcachedata_575071->data[fileidx].needsrecompile = ((NU8) 4);
			dohash_575132(fileidx);
		}
		LA28: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NU8 LOC33;
			LOC33 = 0;
			LOC33 = checkdepmem_575470(fileidx);
			if (!(LOC33 == ((NU8) 2))) goto LA34;
			result = compilemodule_575725(fileidx, flags);
		}
		goto LA31;
		LA34: ;
		{
			result = gcompiledmodules_575053->data[fileidx];
		}
		LA31: ;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym224841*, importmodule_575824)(Tsym224841* s, NI32 fileidx) {
	Tsym224841* result;
	result = 0;
	result = compilemodule_575725(fileidx, 0);
	{
		if (!((gglobaloptions_166132 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		adddep_575150(s, fileidx);
	}
	LA3: ;
	{
		if (!(((*result).flags &(1<<((((NU8) 13))&31)))!=0)) goto LA7;
		localerror_195128((*result).info, ((NU16) 41), (*(*result).name).s);
	}
	LA7: ;
	return result;
}

N_NIMCALL(Tsym224841*, makemodule_576007)(NimStringDesc* filename) {
	Tsym224841* result;
	NI32 LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = fileinfoidx_190254(filename);
	result = newmodule_575646(LOC1);
	(*result).Sup.id = getid_223404();
	return result;
}

N_NIMCALL(void, compilesystemmodule_575910)(void) {
	{
		NimStringDesc* LOC5;
		Tsym224841* LOC6;
		if (!(systemmodule_273019 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = HEX2F_123481(libpath_166233, ((NimStringDesc*) &TMP3706));
		systemfileidx_189633 = fileinfoidx_190254(LOC5);
		LOC6 = 0;
		LOC6 = compilemodule_575725(systemfileidx_189633, 8192);
	}
	LA3: ;
}

N_NIMCALL(void, resetallmoduleshard_575442)(void) {
	resetpackagecache_166805();
	gcompiledmodules_575053 = (Tsymseq224811*) setLengthSeq(&(gcompiledmodules_575053)->Sup, sizeof(Tsym224841*), ((NI) 0));
	gmemcachedata_575071 = (TY575054*) setLengthSeq(&(gmemcachedata_575071)->Sup, sizeof(Tmoduleinmemory575017), ((NI) 0));
	resetsystypes_273268();
}

N_NIMCALL(void, wantmainmodule_575931)(void) {
	NimStringDesc* LOC5;
	{
		if (!((gprojectfull_166236 ? gprojectfull_166236->Sup.len : 0) == ((NI) 0))) goto LA3;
		fatal_195096(gcmdlineinfo_190322, ((NU16) 191), ((NimStringDesc*) &TMP4520));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = nosaddFileExt(gprojectfull_166236, ((NimStringDesc*) &TMP4521));
	gprojectmainidx_166238 = fileinfoidx_190254(LOC5);
}

N_NIMCALL(void, compileproject_575994)(NI32 projectfileidx) {
	NI32 systemfileidx;
	NimStringDesc* LOC1;
	NI32 projectfile;
	wantmainmodule_575931();
	LOC1 = 0;
	LOC1 = HEX2F_123481(libpath_166233, ((NimStringDesc*) &TMP3706));
	systemfileidx = fileinfoidx_190254(LOC1);
	{
		if (!(projectfileidx < ((NI32) 0))) goto LA4;
		projectfile = gprojectmainidx_166238;
	}
	goto LA2;
	LA4: ;
	{
		projectfile = projectfileidx;
	}
	LA2: ;
	{
		Tsym224841* LOC11;
		if (!(projectfile == systemfileidx)) goto LA9;
		LOC11 = 0;
		LOC11 = compilemodule_575725(projectfile, 12288);
	}
	goto LA7;
	LA9: ;
	{
		Tsym224841* LOC13;
		compilesystemmodule_575910();
		LOC13 = 0;
		LOC13 = compilemodule_575725(projectfile, 4096);
	}
	LA7: ;
}

N_NIMCALL(Tsym224841*, makestdinmodule_576018)(void) {
	Tsym224841* result;
	result = 0;
	result = makemodule_576007(((NimStringDesc*) &TMP5236));
	return result;
}

N_NIMCALL(void, resetallmodules_575393)(void) {
	{
		NI i_575405;
		NI HEX3Atmp_575420;
		NI res_575423;
		i_575405 = 0;
		HEX3Atmp_575420 = 0;
		HEX3Atmp_575420 = (gcompiledmodules_575053 ? (gcompiledmodules_575053->Sup.len-1) : -1);
		res_575423 = ((NI) 0);
		{
			while (1) {
				if (!(res_575423 <= HEX3Atmp_575420)) goto LA3;
				i_575405 = res_575423;
				{
					if (!!((gcompiledmodules_575053->data[i_575405] == NIM_NIL))) goto LA6;
					resetmodule_575319(((NI32) (i_575405)));
				}
				LA6: ;
				res_575423 += ((NI) 1);
			} LA3: ;
		}
	}
	resetpackagecache_166805();
}
NIM_EXTERNC N_NOINLINE(void, compiler_modulesInit000)(void) {
	if (gcompiledmodules_575053) nimGCunrefNoCycle(gcompiledmodules_575053);
	gcompiledmodules_575053 = (Tsymseq224811*) newSeqRC1((&NTI224811), 0);
	if (gmemcachedata_575071) nimGCunrefNoCycle(gmemcachedata_575071);
	gmemcachedata_575071 = (TY575054*) newSeqRC1((&NTI575054), 0);
	gincludefile_276073 = includemodule_575860;
	gimportmodule_276068 = importmodule_575824;
}

NIM_EXTERNC N_NOINLINE(void, compiler_modulesDatInit000)(void) {
static TNimNode* TMP1159[5];
static TNimNode* TMP1160[5];
NI TMP1162;
static char* NIM_CONST TMP1161[5] = {
"Maybe", 
"No", 
"Yes", 
"Probing", 
"Recompiled"};
static TNimNode* TMP1163[4];
NI TMP1165;
static char* NIM_CONST TMP1164[4] = {
"hashNotTaken", 
"hashCached", 
"hashHasChanged", 
"hashNotChanged"};
static TNimNode TMP1157[17];
NTI575017.size = sizeof(Tmoduleinmemory575017);
NTI575017.kind = 18;
NTI575017.base = 0;
NTI575017.flags = 2;
TMP1159[0] = &TMP1157[1];
TMP1157[1].kind = 1;
TMP1157[1].offset = offsetof(Tmoduleinmemory575017, compiledat);
TMP1157[1].typ = (&NTI128);
TMP1157[1].name = "compiledAt";
TMP1159[1] = &TMP1157[2];
TMP1157[2].kind = 1;
TMP1157[2].offset = offsetof(Tmoduleinmemory575017, hash);
TMP1157[2].typ = (&NTI200009);
TMP1157[2].name = "hash";
TMP1159[2] = &TMP1157[3];
TMP1157[3].kind = 1;
TMP1157[3].offset = offsetof(Tmoduleinmemory575017, deps);
TMP1157[3].typ = (&NTI224932);
TMP1157[3].name = "deps";
TMP1159[3] = &TMP1157[4];
NTI575013.size = sizeof(NU8);
NTI575013.kind = 14;
NTI575013.base = 0;
NTI575013.flags = 3;
for (TMP1162 = 0; TMP1162 < 5; TMP1162++) {
TMP1157[TMP1162+5].kind = 1;
TMP1157[TMP1162+5].offset = TMP1162;
TMP1157[TMP1162+5].name = TMP1161[TMP1162];
TMP1160[TMP1162] = &TMP1157[TMP1162+5];
}
TMP1157[10].len = 5; TMP1157[10].kind = 2; TMP1157[10].sons = &TMP1160[0];
NTI575013.node = &TMP1157[10];
TMP1157[4].kind = 1;
TMP1157[4].offset = offsetof(Tmoduleinmemory575017, needsrecompile);
TMP1157[4].typ = (&NTI575013);
TMP1157[4].name = "needsRecompile";
TMP1159[4] = &TMP1157[11];
NTI575015.size = sizeof(NU8);
NTI575015.kind = 14;
NTI575015.base = 0;
NTI575015.flags = 3;
for (TMP1165 = 0; TMP1165 < 4; TMP1165++) {
TMP1157[TMP1165+12].kind = 1;
TMP1157[TMP1165+12].offset = TMP1165;
TMP1157[TMP1165+12].name = TMP1164[TMP1165];
TMP1163[TMP1165] = &TMP1157[TMP1165+12];
}
TMP1157[16].len = 4; TMP1157[16].kind = 2; TMP1157[16].sons = &TMP1163[0];
NTI575015.node = &TMP1157[16];
TMP1157[11].kind = 1;
TMP1157[11].offset = offsetof(Tmoduleinmemory575017, hashstatus);
TMP1157[11].typ = (&NTI575015);
TMP1157[11].name = "hashStatus";
TMP1157[0].len = 5; TMP1157[0].kind = 2; TMP1157[0].sons = &TMP1159[0];
NTI575017.node = &TMP1157[0];
NTI575054.size = sizeof(TY575054*);
NTI575054.kind = 24;
NTI575054.base = (&NTI575017);
NTI575054.flags = 2;
NTI575054.marker = TMP1166;
}
