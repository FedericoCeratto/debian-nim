/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/ubuntu/nim-ci/Nim/lib -o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_modules.o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_modules.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tsymseq293800 Tsymseq293800;
typedef struct Tsym293830 Tsym293830;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29480 Memregion29480;
typedef struct Smallchunk29437 Smallchunk29437;
typedef struct Llchunk29474 Llchunk29474;
typedef struct Bigchunk29439 Bigchunk29439;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29478 Avlnode29478;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct TY593042 TY593042;
typedef struct Tmoduleinmemory593008 Tmoduleinmemory593008;
typedef struct TY332033 TY332033;
typedef struct Tstrtable293802 Tstrtable293802;
typedef struct Tnode293798 Tnode293798;
typedef struct Tidobj200006 Tidobj200006;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq293832 Ttypeseq293832;
typedef struct TY293925 TY293925;
typedef struct Ttype293836 Ttype293836;
typedef struct Tident200012 Tident200012;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct Tloc293812 Tloc293812;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct Tlib293816 Tlib293816;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY128506 TY128506;
typedef struct Trodreader332021 Trodreader332021;
typedef struct Tllstream283204 Tllstream283204;
typedef struct TY204019 TY204019;
typedef struct TY529145 TY529145;
typedef struct Tcgen529028 Tcgen529028;
typedef struct Basechunk29435 Basechunk29435;
typedef struct Freecell29427 Freecell29427;
typedef struct Tnodeseq293792 Tnodeseq293792;
typedef struct Tinstantiation293820 Tinstantiation293820;
typedef struct TY293956 TY293956;
typedef struct Tlistentry147010 Tlistentry147010;
typedef struct Tindex332019 Tindex332019;
typedef struct Tiitable300142 Tiitable300142;
typedef struct Tiipairseq300140 Tiipairseq300140;
typedef struct Table332054 Table332054;
typedef struct Keyvaluepairseq332057 Keyvaluepairseq332057;
typedef struct Memfile330202 Memfile330202;
typedef struct Tpasscontext341002 Tpasscontext341002;
typedef struct Tidtable293846 Tidtable293846;
typedef struct Tidpairseq293844 Tidpairseq293844;
typedef struct Intset269031 Intset269031;
typedef struct Trunk269027 Trunk269027;
typedef struct Trunkseq269029 Trunkseq269029;
typedef struct Tlinkedlist147016 Tlinkedlist147016;
typedef struct Tcproc529022 Tcproc529022;
typedef struct Tnodetable293858 Tnodetable293858;
typedef struct Tnodepairseq293856 Tnodepairseq293856;
typedef struct TY293957 TY293957;
typedef struct Tiipair300138 Tiipair300138;
typedef struct Keyvaluepair332060 Keyvaluepair332060;
typedef struct Tidpair293842 Tidpair293842;
typedef struct TY192350 TY192350;
typedef struct TY529096 TY529096;
typedef struct Tnodepair293854 Tnodepair293854;
typedef struct Tblock529020 Tblock529020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef Smallchunk29437* TY29495[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29480  {
NI minlargeobj;
NI maxlargeobj;
TY29495 freesmallchunks;
Llchunk29474* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29439* freechunkslist;
Intset29414 chunkstarts;
Avlnode29478* root;
Avlnode29478* deleted;
Avlnode29478* last;
Avlnode29478* freeavlnodes;
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
Memregion29480 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
typedef NU8 Sha1digest202007[20];
struct  Tmoduleinmemory593008  {
NF compiledat;
Sha1digest202007 hash;
TY332033* deps;
NU8 needsrecompile;
NU8 hashstatus;
};
struct  Tstrtable293802  {
NI counter;
Tsymseq293800* data;
};
typedef N_NIMCALL_PTR(Tnode293798*, TY341049) (Tsym293830* m, NI32 fileidx);
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj200006  {
  TNimObject Sup;
NI id;
};
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc293812  {
NU8 k;
NU8 s;
NU16 flags;
Ttype293836* t;
Ropeobj179006* r;
};
struct  Tsym293830  {
  Tidobj200006 Sup;
NU8 kind;
union{
struct {Ttypeseq293832* typeinstcache;
} S1;
struct {TY293925* procinstcache;
Tsym293830* gcunsafetyreason;
} S2;
struct {TY293925* usedgenerics;
Tstrtable293802 tab;
} S3;
struct {Tsym293830* guard;
NI bitsize;
} S4;
} kindU;
NU16 magic;
Ttype293836* typ;
Tident200012* name;
Tlineinfo192336 info;
Tsym293830* owner;
NU32 flags;
Tnode293798* ast;
NU32 options;
NI position;
NI offset;
Tloc293812 loc;
Tlib293816* annex;
Tnode293798* constraint;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tsym293830*, TY341044) (Tsym293830* m, NI32 fileidx);
struct TY128506 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  Tident200012  {
  Tidobj200006 Sup;
NimStringDesc* s;
Tident200012* next;
NI h;
};
struct TY204019 {
NimStringDesc* Field0;
NI Field1;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29435  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29437  {
  Basechunk29435 Sup;
Smallchunk29437* next;
Smallchunk29437* prev;
Freecell29427* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29474  {
NI size;
NI acc;
Llchunk29474* next;
};
struct  Bigchunk29439  {
  Basechunk29435 Sup;
Bigchunk29439* next;
Bigchunk29439* prev;
NI align;
NF data;
};
typedef NI TY29419[8];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29419 bits;
};
typedef Avlnode29478* TY29485[2];
struct  Avlnode29478  {
TY29485 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29419 bits;
};
struct  Tnode293798  {
Ttype293836* typ;
Tlineinfo192336 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym293830* sym;
} S4;
struct {Tident200012* ident;
} S5;
struct {Tnodeseq293792* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Ttype293836  {
  Tidobj200006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq293832* sons;
Tnode293798* n;
Tsym293830* owner;
Tsym293830* sym;
Tsym293830* destructor;
Tsym293830* deepcopy;
Tsym293830* assignment;
TY293956* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc293812 loc;
};
struct  Ropeobj179006  {
  TNimObject Sup;
Ropeobj179006* left;
Ropeobj179006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147010  {
  TNimObject Sup;
Tlistentry147010* prev;
Tlistentry147010* next;
};
struct  Tlib293816  {
  Tlistentry147010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj179006* name;
Tnode293798* path;
};
struct  Tiitable300142  {
NI counter;
Tiipairseq300140* data;
};
struct  Tindex332019  {
NI lastidxkey;
NI lastidxval;
Tiitable300142 tab;
NimStringDesc* r;
NI offset;
};
struct  Table332054  {
Keyvaluepairseq332057* data;
NI counter;
};
struct  Memfile330202  {
void* mem;
NI size;
int handle;
};
struct  Trodreader332021  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY332033* moddeps;
TY332033* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex332019 index;
Tindex332019 imports;
NI readerindex;
NI line;
NI moduleid;
Table332054 syms;
Memfile330202 memfile;
Tsymseq293800* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tllstream283204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Tpasscontext341002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef Ropeobj179006* Tcfilesections529010[18];
struct  Tidtable293846  {
NI counter;
Tidpairseq293844* data;
};
struct  Intset269031  {
NI counter;
NI max;
Trunk269027* head;
Trunkseq269029* data;
};
struct  Tlinkedlist147016  {
Tlistentry147010* head;
Tlistentry147010* tail;
NI counter;
};
struct  Tnodetable293858  {
NI counter;
Tnodepairseq293856* data;
};
typedef Ropeobj179006* TY529137[10];
struct  Tcgen529028  {
  Tpasscontext341002 Sup;
Tcfilesections529010 s;
NU8 flags;
Tsym293830* module;
NimStringDesc* filename;
NimStringDesc* cfilename;
Ropeobj179006* tmpbase;
Tidtable293846 typecache;
Tidtable293846 forwtypecache;
Intset269031 declaredthings;
Intset269031 declaredprotos;
Tlinkedlist147016 headerfiles;
Intset269031 typeinfomarker;
Tcproc529022* initproc;
Tcproc529022* postinitproc;
Tcproc529022* preinitproc;
Ttypeseq293832* typestack;
Tnodetable293858 datacache;
Tsymseq293800* forwardedprocs;
NI typenodes;
NI nimtypes;
Ropeobj179006* typenodesname;
Ropeobj179006* nimtypesname;
NI labels;
TY529137 extensionloaders;
Ropeobj179006* injectstmt;
};
struct  Freecell29427  {
Freecell29427* next;
NI zerofield;
};
struct  Tinstantiation293820  {
Tsym293830* sym;
Ttypeseq293832* concretetypes;
NI compilesid;
};
struct TY293957 {
NI Field0;
Tsym293830* Field1;
};
struct  Tiipair300138  {
NI key;
NI val;
};
struct Keyvaluepair332060 {
NI Field0;
NI Field1;
Tsym293830* Field2;
};
struct  Tidpair293842  {
Tidobj200006* key;
TNimObject* val;
};
struct  Trunk269027  {
Trunk269027* next;
NI key;
TY29419 bits;
};
struct  Tcproc529022  {
Tsym293830* prc;
NIM_BOOL beforeretneeded;
NIM_BOOL threadvaraccessed;
Tlineinfo192336 lastlineinfo;
Tnodeseq293792* nestedtrystmts;
NI inexceptblock;
TY192350* finallysafepoints;
NI labels;
TY529096* blocks;
NI breakidx;
NU32 options;
NI maxframelen;
Tcgen529028* module;
NI withinloop;
NI splitdecls;
NI gcframeid;
Ropeobj179006* gcframetype;
};
struct  Tnodepair293854  {
NI h;
Tnode293798* key;
NI val;
};
typedef Ropeobj179006* Tcprocsections529014[3];
struct  Tblock529020  {
NI id;
Ropeobj179006* label;
Tcprocsections529014 sections;
NIM_BOOL isloop;
NI16 nestedtrystmts;
NI16 nestedexceptstmts;
NI16 framelen;
};
struct Tsymseq293800 {
  TGenericSeq Sup;
  Tsym293830* data[SEQ_DECL_SIZE];
};
struct TY593042 {
  TGenericSeq Sup;
  Tmoduleinmemory593008 data[SEQ_DECL_SIZE];
};
struct TY529145 {
  TGenericSeq Sup;
  Tcgen529028* data[SEQ_DECL_SIZE];
};
struct TY332033 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Ttypeseq293832 {
  TGenericSeq Sup;
  Ttype293836* data[SEQ_DECL_SIZE];
};
struct TY293925 {
  TGenericSeq Sup;
  Tinstantiation293820* data[SEQ_DECL_SIZE];
};
struct Tnodeseq293792 {
  TGenericSeq Sup;
  Tnode293798* data[SEQ_DECL_SIZE];
};
struct TY293956 {
  TGenericSeq Sup;
  TY293957 data[SEQ_DECL_SIZE];
};
struct Tiipairseq300140 {
  TGenericSeq Sup;
  Tiipair300138 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq332057 {
  TGenericSeq Sup;
  Keyvaluepair332060 data[SEQ_DECL_SIZE];
};
struct Tidpairseq293844 {
  TGenericSeq Sup;
  Tidpair293842 data[SEQ_DECL_SIZE];
};
struct Trunkseq269029 {
  TGenericSeq Sup;
  Trunk269027* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq293856 {
  TGenericSeq Sup;
  Tnodepair293854 data[SEQ_DECL_SIZE];
};
struct TY192350 {
  TGenericSeq Sup;
  Ropeobj179006* data[SEQ_DECL_SIZE];
};
struct TY529096 {
  TGenericSeq Sup;
  Tblock529020 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47305*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_52601)(Cell47305* c);
N_NOINLINE(void, addzct_51417)(Cellseq47321* s, Cell47305* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1221)(void* p, NI op);
N_NIMCALL(void, initstrtable_297001)(Tstrtable293802* x);
N_NIMCALL(Tnode293798*, includemodule_593861)(Tsym293830* s, NI32 fileidx);
N_NIMCALL(Tnode293798*, parsefile_318029)(NI32 fileidx);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(void, adddep_593115)(Tsym293830* x, NI32 dep);
N_NIMCALL(void, safeadd_593139)(TY332033** x, NI32 y);
N_NIMCALL(void, dohash_593103)(NI32 fileidx);
N_NIMCALL(void, securehashfile_203344)(NimStringDesc* filename, Sha1digest202007* Result);
N_NIMCALL(NimStringDesc*, tofullpath_193257)(NI32 fileidx);
N_NIMCALL(Tsym293830*, importmodule_593842)(Tsym293830* s, NI32 fileidx);
N_NIMCALL(Tsym293830*, compilemodule_593735)(NI32 fileidx, NU32 flags);
N_NIMCALL(Tsym293830*, getmodule_593067)(NI32 fileidx);
N_NIMCALL(Tsym293830*, newmodule_593622)(NI32 fileidx);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Tident200012*, getident_200441)(NimStringDesc* identifier);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY128506* Result);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NIM_BOOL, isnimidentifier_286233)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_195612)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tlineinfo192336, newlineinfo_193014)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(NimStringDesc*, getpackagename_171001)(NimStringDesc* path);
N_NIMCALL(Tsym293830*, strtableget_300045)(Tstrtable293802 t, Tident200012* name);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(Tsym293830*, newsym_294683)(NU8 symkind, Tident200012* name, Tsym293830* owner, Tlineinfo192336 info);
N_NIMCALL(void, strtableadd_300040)(Tstrtable293802* t, Tsym293830* n);
N_NIMCALL(void, localerror_197085)(Tlineinfo192336 info, NimStringDesc* arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copymem_7478)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NIM_BOOL, strtableincl_303401)(Tstrtable293802* t, Tsym293830* n, NIM_BOOL onconflictkeepold);
N_NIMCALL(Trodreader332021*, handlesymbolfile_335133)(Tsym293830* module);
N_NIMCALL(void, internalerror_197113)(NimStringDesc* errmsg);
static N_INLINE(NI, getid_292401)(void);
N_NIMCALL(NIM_BOOL, processmodule_341463)(Tsym293830* module, Tllstream283204* stream, Trodreader332021* rd);
N_NIMCALL(Tllstream283204*, llstreamopen_283229)(FILE* f);
N_NIMCALL(NU8, checkdepmem_593375)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, hashchanged_593079)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, HEX24_197185)(TY204019 x);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_203415)(Sha1digest202007 a, Sha1digest202007 b);
N_NIMCALL(void, resetmodule_593259)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_53419)(Cell47305* c);
static N_INLINE(void, decref_53001)(Cell47305* c);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_593150)(TY332033* x, TY332033* y);
N_NIMCALL(NI32, fileinfoidx_193007)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, HEX2F_128265)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, resetpackagecache_170802)(void);
N_NIMCALL(void, resetsystypes_338222)(void);
N_NIMCALL(void, wantmainmodule_593909)(void);
N_NIMCALL(void, fatal_197066)(Tlineinfo192336 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(void, compilesystemmodule_593894)(void);
N_NIMCALL(Tsym293830*, makemodule_593922)(NimStringDesc* filename);
STRING_LITERAL(TMP1583, "unknown", 7);
STRING_LITERAL(TMP1584, "module names need to be unique per Nimble package; module clash"
"es with ", 71);
STRING_LITERAL(TMP1655, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TMP1658, "compiler/modules.nim", 20);
NIM_CONST TY204019 TMP1657 = {((NimStringDesc*) &TMP1658),
((NI) 42)}
;
STRING_LITERAL(TMP3817, "system.nim", 10);
STRING_LITERAL(TMP4648, "", 0);
STRING_LITERAL(TMP4649, "nim", 3);
STRING_LITERAL(TMP5471, "stdin", 5);
Tsymseq293800* gcompiledmodules_593041;
extern TNimType NTI293800; /* TSymSeq */
extern Gcheap49818 gch_49855;
TY593042* gmemcachedata_593059;
TNimType NTI593008; /* TModuleInMemory */
extern TNimType NTI124; /* float */
extern TNimType NTI202007; /* Sha1Digest */
extern TNimType NTI332033; /* seq[int32] */
TNimType NTI593004; /* TNeedRecompile */
TNimType NTI593006; /* THashStatus */
TNimType NTI593042; /* seq[TModuleInMemory] */
NIM_BOOL gfuzzygraphchecking_593060;
Tstrtable293802 packagesyms_593061;
extern TY341049 gincludefile_341053;
extern NU64 gglobaloptions_170127;
extern TY341044 gimportmodule_341048;
extern TNimType NTI293796; /* PSym */
extern TNimType NTI293830; /* TSym */
extern NI gmainpackageid_294043;
extern NU8 gcmd_170129;
extern NI gfrontendid_292007;
extern NIM_BOOL gprojectisstdin_170209;
extern NF glastcmdtime_170140;
extern TY529145* gmodules_529162;
extern NU64 gnotes_193068;
extern NU64 gmainpackagenotes_193073;
extern NU64 Foreignpackagenotes_192420;
extern Tsym293830* systemmodule_338007;
extern NI32 systemfileidx_192630;
extern NimStringDesc* libpath_170205;
extern NimStringDesc* gprojectfull_170208;
extern Tlineinfo192336 gcmdlineinfo_193036;
extern NI32 gprojectmainidx_170210;

static N_INLINE(Cell47305*, usrtocell_51440)(void* usr) {
	Cell47305* result;
	result = 0;
	result = ((Cell47305*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47305))))));
	return result;
}

static N_INLINE(void, rtladdzct_52601)(Cell47305* c) {
	addzct_51417((&gch_49855.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47305* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601(c);
	}
	LA3: ;
}
N_NIMCALL(void, TMP1221)(void* p, NI op) {
	TY593042* a;
	NI LOC1;
	a = (TY593042*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].deps, op);
	}
}

N_NIMCALL(void, adddep_593115)(Tsym293830* x, NI32 dep) {
	{
		if (!((gmemcachedata_593059 ? gmemcachedata_593059->Sup.len : 0) <= ((NI) (dep)))) goto LA3;
		gmemcachedata_593059 = (TY593042*) setLengthSeq(&(gmemcachedata_593059)->Sup, sizeof(Tmoduleinmemory593008), ((NI) ((NI32)(dep + ((NI32) 1)))));
	}
	LA3: ;
	safeadd_593139((&gmemcachedata_593059->data[(*x).position].deps), dep);
}

N_NIMCALL(void, dohash_593103)(NI32 fileidx) {
	{
		NimStringDesc* LOC5;
		if (!(gmemcachedata_593059->data[fileidx].hashstatus == ((NU8) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = tofullpath_193257(fileidx);
		securehashfile_203344(LOC5, gmemcachedata_593059->data[fileidx].hash);
	}
	LA3: ;
}

N_NIMCALL(Tnode293798*, includemodule_593861)(Tsym293830* s, NI32 fileidx) {
	Tnode293798* result;
	result = 0;
	result = parsefile_318029(fileidx);
	{
		if (!((gglobaloptions_170127 &((NU64)1<<((NU)(((NU8) 15))&63U)))!=0)) goto LA3;
		{
			if (!((gmemcachedata_593059 ? gmemcachedata_593059->Sup.len : 0) <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_593059 = (TY593042*) setLengthSeq(&(gmemcachedata_593059)->Sup, sizeof(Tmoduleinmemory593008), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		adddep_593115(s, fileidx);
		dohash_593103(fileidx);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Tsym293830*, getmodule_593067)(NI32 fileidx) {
	Tsym293830* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < (gcompiledmodules_593041 ? gcompiledmodules_593041->Sup.len : 0));
		LA4: ;
		if (!LOC3) goto LA5;
		result = gcompiledmodules_593041->data[fileidx];
	}
	LA5: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47305* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47305* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51440((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_52601(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(void, copymem_7478)(void* dest, void* source, NI size) {
	void* LOC1;
	LOC1 = 0;
	LOC1 = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copymem_7478(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(Tsym293830*, newmodule_593622)(NI32 fileidx) {
	Tsym293830* result;
	NimStringDesc* filename;
	TY128506 LOC1;
	Tident200012* pack;
	NimStringDesc* LOC7;
	Tsym293830* packsym;
	Tsym293830* existing;
	NIM_BOOL LOC34;
	result = 0;
	result = (Tsym293830*) newObj((&NTI293796), sizeof(Tsym293830));
	(*result).Sup.Sup.m_type = (&NTI293830);
	(*result).Sup.id = ((NI) -1);
	(*result).kind = ((NU8) 6);
	filename = tofullpath_193257(fileidx);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitFile(filename, (&LOC1));
	asgnRefNoCycle((void**) (&(*result).name), getident_200441(LOC1.Field1));
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = isnimidentifier_286233((*(*result).name).s);
		if (!!(LOC4)) goto LA5;
		rawmessage_195612(((NU16) 22), (*(*result).name).s);
	}
	LA5: ;
	(*result).info = newlineinfo_193014(fileidx, ((NI) 1), ((NI) 1));
	LOC7 = 0;
	LOC7 = getpackagename_171001(filename);
	pack = getident_200441(LOC7);
	packsym = strtableget_300045(packagesyms_593061, pack);
	{
		NimStringDesc* pck;
		NimStringDesc* pck2;
		Tident200012* LOC17;
		if (!(packsym == NIM_NIL)) goto LA10;
		pck = getpackagename_171001(filename);
		{
			if (!(((NI) 0) < (pck ? pck->Sup.len : 0))) goto LA14;
			pck2 = pck;
		}
		goto LA12;
		LA14: ;
		{
			pck2 = copyString(((NimStringDesc*) &TMP1583));
		}
		LA12: ;
		LOC17 = 0;
		LOC17 = getident_200441(pck2);
		packsym = newsym_294683(((NU8) 23), LOC17, NIM_NIL, (*result).info);
		initstrtable_297001((&(*packsym).kindU.S3.tab));
		strtableadd_300040((&packagesyms_593061), packsym);
	}
	LA10: ;
	asgnRefNoCycle((void**) (&(*result).owner), packsym);
	(*result).position = ((NI) (fileidx));
	{
		if (!((gmemcachedata_593059 ? gmemcachedata_593059->Sup.len : 0) <= ((NI) (fileidx)))) goto LA20;
		gmemcachedata_593059 = (TY593042*) setLengthSeq(&(gmemcachedata_593059)->Sup, sizeof(Tmoduleinmemory593008), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA20: ;
	{
		if (!((gcompiledmodules_593041 ? gcompiledmodules_593041->Sup.len : 0) <= ((NI) (fileidx)))) goto LA24;
		gcompiledmodules_593041 = (Tsymseq293800*) setLengthSeq(&(gcompiledmodules_593041)->Sup, sizeof(Tsym293830*), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA24: ;
	asgnRefNoCycle((void**) (&gcompiledmodules_593041->data[(*result).position]), result);
	(*result).flags |= ((NU32)1)<<((((NU8) 0))%(sizeof(NU32)*8));
	initstrtable_297001((&(*result).kindU.S3.tab));
	strtableadd_300040((&(*result).kindU.S3.tab), result);
	existing = strtableget_300045((*packsym).kindU.S3.tab, (*result).name);
	{
		NIM_BOOL LOC28;
		NimStringDesc* LOC32;
		NimStringDesc* LOC33;
		LOC28 = 0;
		LOC28 = !((existing == NIM_NIL));
		if (!(LOC28)) goto LA29;
		LOC28 = !(((*existing).info.fileindex == (*result).info.fileindex));
		LA29: ;
		if (!LOC28) goto LA30;
		LOC32 = 0;
		LOC33 = 0;
		LOC33 = tofullpath_193257((*existing).info.fileindex);
		LOC32 = rawNewString(LOC33->Sup.len + 71);
appendString(LOC32, ((NimStringDesc*) &TMP1584));
appendString(LOC32, LOC33);
		localerror_197085((*result).info, LOC32);
	}
	LA30: ;
	LOC34 = 0;
	LOC34 = strtableincl_303401((&(*packsym).kindU.S3.tab), result, NIM_FALSE);
	return result;
}

static N_INLINE(NI, getid_292401)(void) {
	NI result;
	result = 0;
	result = gfrontendid_292007;
	gfrontendid_292007 += ((NI) 1);
	return result;
}

N_NIMCALL(NIM_BOOL, hashchanged_593079)(NI32 fileidx) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < (gmemcachedata_593059 ? gmemcachedata_593059->Sup.len : 0));
		LA4: ;
		if (!!(LOC3)) goto LA5;
		LOC7 = 0;
		LOC7 = HEX24_197185(TMP1657);
		internalerror_197113(LOC7);
	}
	LA5: ;
	switch (gmemcachedata_593059->data[fileidx].hashstatus) {
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
		Sha1digest202007 newhash;
		NimStringDesc* LOC11;
		NIM_BOOL LOC12;
		memset((void*)newhash, 0, sizeof(newhash));
		LOC11 = 0;
		LOC11 = tofullpath_193257(fileidx);
		chckNil((void*)newhash);
		memset((void*)newhash, 0, sizeof(newhash));
		securehashfile_203344(LOC11, newhash);
		LOC12 = 0;
		LOC12 = HEX3DHEX3D_203415(newhash, gmemcachedata_593059->data[fileidx].hash);
		result = !(LOC12);
		memcpy((void*)gmemcachedata_593059->data[fileidx].hash, (NIM_CONST void*)newhash, sizeof(Sha1digest202007));
		{
			if (!result) goto LA15;
			gmemcachedata_593059->data[fileidx].hashstatus = ((NU8) 2);
		}
		goto LA13;
		LA15: ;
		{
			gmemcachedata_593059->data[fileidx].hashstatus = ((NU8) 3);
		}
		LA13: ;
	}
	break;
	case ((NU8) 0):
	{
		NimStringDesc* LOC19;
		LOC19 = 0;
		LOC19 = tofullpath_193257(fileidx);
		securehashfile_203344(LOC19, gmemcachedata_593059->data[fileidx].hash);
		result = NIM_TRUE;
		{
			if (!result) goto LA22;
			gmemcachedata_593059->data[fileidx].hashstatus = ((NU8) 2);
		}
		goto LA20;
		LA22: ;
		{
			gmemcachedata_593059->data[fileidx].hashstatus = ((NU8) 3);
		}
		LA20: ;
	}
	break;
	}
	return result;
}

static N_INLINE(void, incref_53419)(Cell47305* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(void, decref_53001)(Cell47305* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601(c);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell47305* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_51440(src);
		incref_53419(LOC5);
	}
	LA3: ;
	{
		Cell47305* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_51440((*dest));
		decref_53001(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, resetmodule_593259)(NI32 fileidx) {
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gmemcachedata_593059 ? gmemcachedata_593059->Sup.len : 0)))))) goto LA3;
		gmemcachedata_593059->data[fileidx].needsrecompile = ((NU8) 2);
	}
	LA3: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gcompiledmodules_593041 ? gcompiledmodules_593041->Sup.len : 0)))))) goto LA7;
		asgnRefNoCycle((void**) (&gcompiledmodules_593041->data[fileidx]), NIM_NIL);
	}
	LA7: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gmodules_529162 ? gmodules_529162->Sup.len : 0)))))) goto LA11;
		asgnRef((void**) (&gmodules_529162->data[fileidx]), NIM_NIL);
	}
	LA11: ;
}

N_NIMCALL(NU8, checkdepmem_593375)(NI32 fileidx) {
	NU8 result;
{	result = 0;
	{
		if (!gfuzzygraphchecking_593060) goto LA3;
		{
			if (!!((gmemcachedata_593059->data[fileidx].needsrecompile == ((NU8) 0)))) goto LA7;
			result = gmemcachedata_593059->data[fileidx].needsrecompile;
			goto BeforeRet;
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			if (!(gmemcachedata_593059->data[fileidx].needsrecompile == ((NU8) 3))) goto LA12;
			result = ((NU8) 1);
			goto BeforeRet;
		}
		LA12: ;
	}
	LA1: ;
	{
		NIM_BOOL LOC16;
		LOC16 = 0;
		LOC16 = ((gglobaloptions_170127 &((NU64)1<<((NU)(((NU8) 1))&63U)))!=0);
		if (LOC16) goto LA17;
		LOC16 = hashchanged_593079(fileidx);
		LA17: ;
		if (!LOC16) goto LA18;
		resetmodule_593259(fileidx);
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA18: ;
	{
		NIM_BOOL LOC22;
		LOC22 = 0;
		LOC22 = HEX3DHEX3D_593150(gmemcachedata_593059->data[fileidx].deps, NIM_NIL);
		if (!!(LOC22)) goto LA23;
		gmemcachedata_593059->data[fileidx].needsrecompile = ((NU8) 3);
		{
			NI32 dep_593602;
			TY332033* HEX3Atmp_593616;
			NI i_593619;
			NI L_593621;
			dep_593602 = 0;
			HEX3Atmp_593616 = 0;
			HEX3Atmp_593616 = gmemcachedata_593059->data[fileidx].deps;
			i_593619 = ((NI) 0);
			L_593621 = (HEX3Atmp_593616 ? HEX3Atmp_593616->Sup.len : 0);
			{
				while (1) {
					NU8 d;
					if (!(i_593619 < L_593621)) goto LA27;
					dep_593602 = HEX3Atmp_593616->data[i_593619];
					d = checkdepmem_593375(dep_593602);
					{
						if (!((20 &(1U<<((NU)(d)&7U)))!=0)) goto LA30;
						resetmodule_593259(fileidx);
						result = ((NU8) 2);
						goto BeforeRet;
					}
					LA30: ;
					i_593619 += ((NI) 1);
				} LA27: ;
			}
		}
	}
	LA23: ;
	gmemcachedata_593059->data[fileidx].needsrecompile = ((NU8) 1);
	result = ((NU8) 1);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym293830*, compilemodule_593735)(NI32 fileidx, NU32 flags) {
	Tsym293830* result;
{	result = 0;
	result = getmodule_593067(fileidx);
	{
		Trodreader332021* rd;
		NIM_BOOL validfile;
		Tllstream283204* LOC22;
		if (!(result == NIM_NIL)) goto LA3;
		{
			if (!((gmemcachedata_593059 ? gmemcachedata_593059->Sup.len : 0) <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_593059 = (TY593042*) setLengthSeq(&(gmemcachedata_593059)->Sup, sizeof(Tmoduleinmemory593008), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		gmemcachedata_593059->data[fileidx].needsrecompile = ((NU8) 3);
		result = newmodule_593622(fileidx);
		rd = 0;
		(*result).flags = ((*result).flags | flags);
		{
			if (!(((*result).flags &(1U<<((NU)(((NU8) 12))&31U)))!=0)) goto LA11;
			gmainpackageid_294043 = (*(*result).owner).Sup.id;
		}
		LA11: ;
		{
			if (!((36870 &(1U<<((NU)(gcmd_170129)&31U)))!=0)) goto LA15;
			rd = handlesymbolfile_335133(result);
			{
				if (!((*result).Sup.id < ((NI) 0))) goto LA19;
				internalerror_197113(((NimStringDesc*) &TMP1655));
				goto BeforeRet;
			}
			LA19: ;
		}
		goto LA13;
		LA15: ;
		{
			(*result).Sup.id = getid_292401();
		}
		LA13: ;
		LOC22 = 0;
		{
			NIM_BOOL LOC25;
			LOC25 = 0;
			LOC25 = ((flags &(1U<<((NU)(((NU8) 12))&31U)))!=0);
			if (!(LOC25)) goto LA26;
			LOC25 = gprojectisstdin_170209;
			LA26: ;
			if (!LOC25) goto LA27;
			LOC22 = llstreamopen_283229(stdin);
		}
		goto LA23;
		LA27: ;
		{
			LOC22 = NIM_NIL;
		}
		LA23: ;
		validfile = processmodule_341463(result, LOC22, rd);
		{
			if (!((gglobaloptions_170127 &((NU64)1<<((NU)(((NU8) 15))&63U)))!=0)) goto LA32;
			gmemcachedata_593059->data[fileidx].compiledat = glastcmdtime_170140;
			gmemcachedata_593059->data[fileidx].needsrecompile = ((NU8) 4);
			{
				if (!validfile) goto LA36;
				dohash_593103(fileidx);
			}
			LA36: ;
		}
		LA32: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NU8 LOC41;
			LOC41 = 0;
			LOC41 = checkdepmem_593375(fileidx);
			if (!(LOC41 == ((NU8) 2))) goto LA42;
			result = compilemodule_593735(fileidx, flags);
		}
		goto LA39;
		LA42: ;
		{
			result = gcompiledmodules_593041->data[fileidx];
		}
		LA39: ;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym293830*, importmodule_593842)(Tsym293830* s, NI32 fileidx) {
	Tsym293830* result;
	result = 0;
	result = compilemodule_593735(fileidx, 0);
	{
		if (!((gglobaloptions_170127 &((NU64)1<<((NU)(((NU8) 15))&63U)))!=0)) goto LA3;
		adddep_593115(s, fileidx);
	}
	LA3: ;
	{
		if (!((*(*s).owner).Sup.id == gmainpackageid_294043)) goto LA7;
		gnotes_193068 = gmainpackagenotes_193073;
	}
	goto LA5;
	LA7: ;
	{
		gnotes_193068 = Foreignpackagenotes_192420;
	}
	LA5: ;
	return result;
}

N_NIMCALL(Tsym293830*, makemodule_593922)(NimStringDesc* filename) {
	Tsym293830* result;
	NI32 LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = fileinfoidx_193007(filename);
	result = newmodule_593622(LOC1);
	(*result).Sup.id = getid_292401();
	return result;
}

N_NIMCALL(void, compilesystemmodule_593894)(void) {
	{
		NimStringDesc* LOC5;
		Tsym293830* LOC6;
		if (!(systemmodule_338007 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = HEX2F_128265(libpath_170205, ((NimStringDesc*) &TMP3817));
		systemfileidx_192630 = fileinfoidx_193007(LOC5);
		LOC6 = 0;
		LOC6 = compilemodule_593735(systemfileidx_192630, 8192);
	}
	LA3: ;
}

N_NIMCALL(void, resetallmoduleshard_593352)(void) {
	resetpackagecache_170802();
	gcompiledmodules_593041 = (Tsymseq293800*) setLengthSeq(&(gcompiledmodules_593041)->Sup, sizeof(Tsym293830*), ((NI) 0));
	gmemcachedata_593059 = (TY593042*) setLengthSeq(&(gmemcachedata_593059)->Sup, sizeof(Tmoduleinmemory593008), ((NI) 0));
	resetsystypes_338222();
	initstrtable_297001((&packagesyms_593061));
}

N_NIMCALL(void, wantmainmodule_593909)(void) {
	NimStringDesc* LOC5;
	{
		if (!((gprojectfull_170208 ? gprojectfull_170208->Sup.len : 0) == ((NI) 0))) goto LA3;
		fatal_197066(gcmdlineinfo_193036, ((NU16) 191), ((NimStringDesc*) &TMP4648));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = nosaddFileExt(gprojectfull_170208, ((NimStringDesc*) &TMP4649));
	gprojectmainidx_170210 = fileinfoidx_193007(LOC5);
}

N_NIMCALL(void, compileproject_593915)(NI32 projectfileidx) {
	NI32 systemfileidx;
	NimStringDesc* LOC1;
	NI32 projectfile;
	wantmainmodule_593909();
	LOC1 = 0;
	LOC1 = HEX2F_128265(libpath_170205, ((NimStringDesc*) &TMP3817));
	systemfileidx = fileinfoidx_193007(LOC1);
	{
		if (!(projectfileidx < ((NI32) 0))) goto LA4;
		projectfile = gprojectmainidx_170210;
	}
	goto LA2;
	LA4: ;
	{
		projectfile = projectfileidx;
	}
	LA2: ;
	{
		Tsym293830* LOC11;
		if (!(projectfile == systemfileidx)) goto LA9;
		LOC11 = 0;
		LOC11 = compilemodule_593735(projectfile, 12288);
	}
	goto LA7;
	LA9: ;
	{
		Tsym293830* LOC13;
		compilesystemmodule_593894();
		LOC13 = 0;
		LOC13 = compilemodule_593735(projectfile, 4096);
	}
	LA7: ;
}

N_NIMCALL(Tsym293830*, makestdinmodule_593927)(void) {
	Tsym293830* result;
	result = 0;
	result = makemodule_593922(((NimStringDesc*) &TMP5471));
	return result;
}

N_NIMCALL(void, resetallmodules_593319)(void) {
	{
		NI i_593330;
		NI HEX3Atmp_593345;
		NI res_593348;
		i_593330 = 0;
		HEX3Atmp_593345 = 0;
		HEX3Atmp_593345 = (gcompiledmodules_593041 ? (gcompiledmodules_593041->Sup.len-1) : -1);
		res_593348 = ((NI) 0);
		{
			while (1) {
				if (!(res_593348 <= HEX3Atmp_593345)) goto LA3;
				i_593330 = res_593348;
				{
					if (!!((gcompiledmodules_593041->data[i_593330] == NIM_NIL))) goto LA6;
					resetmodule_593259(((NI32) (i_593330)));
				}
				LA6: ;
				res_593348 += ((NI) 1);
			} LA3: ;
		}
	}
	resetpackagecache_170802();
	initstrtable_297001((&packagesyms_593061));
}
NIM_EXTERNC N_NOINLINE(void, compiler_modulesInit000)(void) {
	if (gcompiledmodules_593041) nimGCunrefNoCycle(gcompiledmodules_593041);
	gcompiledmodules_593041 = (Tsymseq293800*) newSeqRC1((&NTI293800), 0);
	if (gmemcachedata_593059) nimGCunrefNoCycle(gmemcachedata_593059);
	gmemcachedata_593059 = (TY593042*) newSeqRC1((&NTI593042), 0);
	initstrtable_297001((&packagesyms_593061));
	gincludefile_341053 = includemodule_593861;
	gimportmodule_341048 = importmodule_593842;
}

NIM_EXTERNC N_NOINLINE(void, compiler_modulesDatInit000)(void) {
static TNimNode* TMP1214[5];
static TNimNode* TMP1215[5];
NI TMP1217;
static char* NIM_CONST TMP1216[5] = {
"Maybe", 
"No", 
"Yes", 
"Probing", 
"Recompiled"};
static TNimNode* TMP1218[4];
NI TMP1220;
static char* NIM_CONST TMP1219[4] = {
"hashNotTaken", 
"hashCached", 
"hashHasChanged", 
"hashNotChanged"};
static TNimNode TMP1212[17];
NTI593008.size = sizeof(Tmoduleinmemory593008);
NTI593008.kind = 18;
NTI593008.base = 0;
NTI593008.flags = 2;
TMP1214[0] = &TMP1212[1];
TMP1212[1].kind = 1;
TMP1212[1].offset = offsetof(Tmoduleinmemory593008, compiledat);
TMP1212[1].typ = (&NTI124);
TMP1212[1].name = "compiledAt";
TMP1214[1] = &TMP1212[2];
TMP1212[2].kind = 1;
TMP1212[2].offset = offsetof(Tmoduleinmemory593008, hash);
TMP1212[2].typ = (&NTI202007);
TMP1212[2].name = "hash";
TMP1214[2] = &TMP1212[3];
TMP1212[3].kind = 1;
TMP1212[3].offset = offsetof(Tmoduleinmemory593008, deps);
TMP1212[3].typ = (&NTI332033);
TMP1212[3].name = "deps";
TMP1214[3] = &TMP1212[4];
NTI593004.size = sizeof(NU8);
NTI593004.kind = 14;
NTI593004.base = 0;
NTI593004.flags = 3;
for (TMP1217 = 0; TMP1217 < 5; TMP1217++) {
TMP1212[TMP1217+5].kind = 1;
TMP1212[TMP1217+5].offset = TMP1217;
TMP1212[TMP1217+5].name = TMP1216[TMP1217];
TMP1215[TMP1217] = &TMP1212[TMP1217+5];
}
TMP1212[10].len = 5; TMP1212[10].kind = 2; TMP1212[10].sons = &TMP1215[0];
NTI593004.node = &TMP1212[10];
TMP1212[4].kind = 1;
TMP1212[4].offset = offsetof(Tmoduleinmemory593008, needsrecompile);
TMP1212[4].typ = (&NTI593004);
TMP1212[4].name = "needsRecompile";
TMP1214[4] = &TMP1212[11];
NTI593006.size = sizeof(NU8);
NTI593006.kind = 14;
NTI593006.base = 0;
NTI593006.flags = 3;
for (TMP1220 = 0; TMP1220 < 4; TMP1220++) {
TMP1212[TMP1220+12].kind = 1;
TMP1212[TMP1220+12].offset = TMP1220;
TMP1212[TMP1220+12].name = TMP1219[TMP1220];
TMP1218[TMP1220] = &TMP1212[TMP1220+12];
}
TMP1212[16].len = 4; TMP1212[16].kind = 2; TMP1212[16].sons = &TMP1218[0];
NTI593006.node = &TMP1212[16];
TMP1212[11].kind = 1;
TMP1212[11].offset = offsetof(Tmoduleinmemory593008, hashstatus);
TMP1212[11].typ = (&NTI593006);
TMP1212[11].name = "hashStatus";
TMP1212[0].len = 5; TMP1212[0].kind = 2; TMP1212[0].sons = &TMP1214[0];
NTI593008.node = &TMP1212[0];
NTI593042.size = sizeof(TY593042*);
NTI593042.kind = 24;
NTI593042.base = (&NTI593008);
NTI593042.flags = 2;
NTI593042.marker = TMP1221;
}

