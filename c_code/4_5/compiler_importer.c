/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
typedef struct Tnode292802 Tnode292802;
typedef struct Tcontext344020 Tcontext344020;
typedef struct Intset268030 Intset268030;
typedef struct Trunk268026 Trunk268026;
typedef struct Trunkseq268028 Trunkseq268028;
typedef struct Tsym292834 Tsym292834;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype292840 Ttype292840;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct Tident199010 Tident199010;
typedef struct Tnodeseq292796 Tnodeseq292796;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct TY128506 TY128506;
typedef struct Cell47304 Cell47304;
typedef struct Cellseq47320 Cellseq47320;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29485 Memregion29485;
typedef struct Smallchunk29439 Smallchunk29439;
typedef struct Llchunk29479 Llchunk29479;
typedef struct Bigchunk29441 Bigchunk29441;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29483 Avlnode29483;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47316 Cellset47316;
typedef struct Pagedesc47312 Pagedesc47312;
typedef struct Tidobj199004 Tidobj199004;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct TY292929 TY292929;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Tloc292816 Tloc292816;
typedef struct Ropeobj178006 Ropeobj178006;
typedef struct Tlib292820 Tlib292820;
typedef struct Tpasscontext341002 Tpasscontext341002;
typedef struct Tscope292828 Tscope292828;
typedef struct Tproccon344008 Tproccon344008;
typedef struct Tlinkedlist147013 Tlinkedlist147013;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Tidtable292850 Tidtable292850;
typedef struct Tidpairseq292848 Tidpairseq292848;
typedef struct Tctx343035 Tctx343035;
typedef struct TY344144 TY344144;
typedef struct Ttabiter299050 Ttabiter299050;
typedef struct TY292960 TY292960;
typedef struct Tidentiter299063 Tidentiter299063;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct Tidpair292846 Tidpair292846;
typedef struct TY343241 TY343241;
typedef struct TY192086 TY192086;
typedef struct PprocHEX3Aobjecttype343220 PprocHEX3Aobjecttype343220;
typedef struct TY343260 TY343260;
typedef struct Tinstantiationpair344010 Tinstantiationpair344010;
typedef struct TY292961 TY292961;
typedef struct TY343221 TY343221;
typedef struct TY343226 TY343226;
typedef struct TY343261 TY343261;
typedef struct Vmargs343029 Vmargs343029;
typedef struct Tblock343017 Tblock343017;
typedef struct TY343201 TY343201;
struct  Intset268030  {
NI counter;
NI max;
Trunk268026* head;
Trunkseq268028* data;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo191336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag292427Set;
typedef NU8 Tnodekind292020;
struct  Tnode292802  {
Ttype292840* typ;
Tlineinfo191336 info;
Tnodeflag292427Set flags;
Tnodekind292020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym292834* sym;
} S4;
struct {Tident199010* ident;
} S5;
struct {Tnodeseq292796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e0, void* ClEnv);
void* ClEnv;
} TY17211;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY17211 raiseAction;
};
struct TY128506 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
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
struct  Cell47304  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47320  {
NI len;
NI cap;
Cell47304** d;
};
typedef Smallchunk29439* TY29500[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29485  {
NI minlargeobj;
NI maxlargeobj;
TY29500 freesmallchunks;
Llchunk29479* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29441* freechunkslist;
Intset29414 chunkstarts;
Avlnode29483* root;
Avlnode29483* deleted;
Avlnode29483* last;
Avlnode29483* freeavlnodes;
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
struct  Cellset47316  {
NI counter;
NI max;
Pagedesc47312* head;
Pagedesc47312** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47320 zct;
Cellseq47320 decstack;
Cellseq47320 tempstack;
NI recgclock;
Memregion29485 region;
Gcstat49814 stat;
Cellset47316 marked;
Cellseq47320 additionalroots;
};
struct  Tidobj199004  {
  TNimObject Sup;
NI id;
};
struct  Tident199010  {
  Tidobj199004 Sup;
NimStringDesc* s;
Tident199010* next;
NI h;
};
typedef NU8 Tsymkind292435;
struct  Tstrtable292806  {
NI counter;
Tsymseq292804* data;
};
typedef NU16 Tmagic292524;
typedef NU32 Tsymflag292184Set;
typedef NU32 Toption169009Set;
typedef NU8 Tlockind292808;
typedef NU8 Tstorageloc292812;
typedef NU16 Tlocflag292810Set;
struct  Tloc292816  {
Tlockind292808 k;
Tstorageloc292812 s;
Tlocflag292810Set flags;
Ttype292840* t;
Ropeobj178006* r;
};
struct  Tsym292834  {
  Tidobj199004 Sup;
Tsymkind292435 kind;
union{
struct {Ttypeseq292836* typeinstcache;
} S1;
struct {TY292929* procinstcache;
Tsym292834* gcunsafetyreason;
} S2;
struct {TY292929* usedgenerics;
Tstrtable292806 tab;
} S3;
struct {Tsym292834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic292524 magic;
Ttype292840* typ;
Tident199010* name;
Tlineinfo191336 info;
Tsym292834* owner;
Tsymflag292184Set flags;
Tnode292802* ast;
Toption169009Set options;
NI position;
NI offset;
Tloc292816 loc;
Tlib292820* annex;
Tnode292802* constraint;
};
typedef NU8 Trenderflag311004Set;
typedef NU16 Tmsgkind191002;
typedef N_NIMCALL_PTR(Tsym292834*, TY341069) (Tsym292834* m0, NI32 fileidx0);
struct  Tpasscontext341002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tlinkedlist147013  {
Tlistentry147007* head;
Tlistentry147007* tail;
NI counter;
};
struct  Tidtable292850  {
NI counter;
Tidpairseq292848* data;
};
typedef N_NIMCALL_PTR(Tnode292802*, TY344075) (Tcontext344020* c0, Tnode292802* n0);
typedef NU16 Texprflag344012Set;
typedef N_NIMCALL_PTR(Tnode292802*, TY344080) (Tcontext344020* c0, Tnode292802* n0, Texprflag344012Set flags0);
typedef N_NIMCALL_PTR(Tnode292802*, TY344088) (Tcontext344020* c0, Tnode292802* n0, Texprflag344012Set flags0);
typedef N_NIMCALL_PTR(Tnode292802*, TY344096) (Tcontext344020* c0, Tnode292802* n0);
typedef N_NIMCALL_PTR(Tnode292802*, TY344101) (Tcontext344020* c0, Tnode292802* n0, Texprflag344012Set flags0);
typedef N_NIMCALL_PTR(Tnode292802*, TY344109) (Tcontext344020* c0, Tnode292802* n0);
typedef NU32 Tsymkind292435Set;
typedef N_NIMCALL_PTR(Tnode292802*, TY344114) (Tcontext344020* c0, Tnode292802* n0, Tnode292802* norig0, Tsymkind292435Set filter0);
typedef N_NIMCALL_PTR(Ttype292840*, TY344121) (Tcontext344020* c0, Tnode292802* n0, Ttype292840* prev0);
typedef struct {
N_NIMCALL_PTR(Tnode292802*, ClPrc) (Tcontext344020* c0, Tidtable292850 pt0, Tnode292802* n0, void* ClEnv);
void* ClEnv;
} TY344127;
typedef struct {
N_NIMCALL_PTR(Tsym292834*, ClPrc) (Tcontext344020* c0, Tsym292834* fn0, Tidtable292850 pt0, Tlineinfo191336 info0, void* ClEnv);
void* ClEnv;
} TY344133;
typedef NU8 Ttypeattachedop344016;
typedef N_NIMCALL_PTR(Tsym292834*, TY344150) (Tcontext344020* c0, Tsym292834* dc0, Ttype292840* t0, Tlineinfo191336 info0, Ttypeattachedop344016 op0, NI col0);
struct  Tcontext344020  {
  Tpasscontext341002 Sup;
Tsym292834* module;
Tscope292828* currentscope;
Tscope292828* importtable;
Tscope292828* toplevelscope;
Tproccon344008* p;
Tsymseq292804* friendmodules;
NI instcounter;
Intset268030 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq292804* converters;
Tsymseq292804* patterns;
Tlinkedlist147013 optionstack;
Tidtable292850 symmapping;
Tlinkedlist147013 libs;
TY344075 semconstexpr;
TY344080 semexpr;
TY344088 semtryexpr;
TY344096 semtryconstexpr;
TY344101 semoperand;
TY344109 semconstboolexpr;
TY344114 semoverloadedcall;
TY344121 semtypenode;
TY344127 seminferredlambda;
TY344133 semgenerateinstance;
Intset268030 includedfiles;
Tstrtable292806 userpragmas;
Tctx343035* evalcontext;
Intset268030 unknownidents;
TY344144* generics;
NI topstmts;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY344150 insttypeboundop;
Tident199010* selfname;
Tstrtable292806 signatures;
};
typedef NU8 Tsymflag292184;
struct  Ttabiter299050  {
NI h;
};
struct  Tscope292828  {
NI depthlevel;
Tstrtable292806 symbols;
Tscope292828* parent;
};
typedef NU8 Ttypekind292244;
typedef NU8 Tcallingconvention292002;
typedef NU32 Ttypeflag292431Set;
struct  Ttype292840  {
  Tidobj199004 Sup;
Ttypekind292244 kind;
Tcallingconvention292002 callconv;
Ttypeflag292431Set flags;
Ttypeseq292836* sons;
Tnode292802* n;
Tsym292834* owner;
Tsym292834* sym;
Tsym292834* destructor;
Tsym292834* deepcopy;
Tsym292834* assignment;
TY292960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc292816 loc;
};
struct  Tidentiter299063  {
NI h;
Tident199010* name;
};
typedef NI TY29418[16];
struct  Trunk268026  {
Trunk268026* next;
NI key;
TY29418 bits;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29437  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29439  {
  Basechunk29437 Sup;
Smallchunk29439* next;
Smallchunk29439* prev;
Freecell29429* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29479  {
NI size;
NI acc;
Llchunk29479* next;
};
struct  Bigchunk29441  {
  Basechunk29437 Sup;
Bigchunk29441* next;
Bigchunk29441* prev;
NI align;
NF data;
};
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29418 bits;
};
typedef Avlnode29483* TY29490[2];
struct  Avlnode29483  {
TY29490 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47312  {
Pagedesc47312* next;
NI key;
TY29418 bits;
};
struct  Ropeobj178006  {
  TNimObject Sup;
Ropeobj178006* left;
Ropeobj178006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind292818;
struct  Tlib292820  {
  Tlistentry147007 Sup;
Tlibkind292818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj178006* name;
Tnode292802* path;
};
struct  Tproccon344008  {
Tsym292834* owner;
Tsym292834* resultsym;
Tsym292834* selfsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon344008* next;
NIM_BOOL wasforwarded;
Tnode292802* bracketexpr;
};
struct  Tidpair292846  {
Tidobj199004* key;
TNimObject* val;
};
typedef NU8 Tevalmode343019;
typedef NU8 Tsandboxflag343021Set;
struct  Tctx343035  {
  Tpasscontext341002 Sup;
TY343241* code;
TY192086* debug;
Tnode292802* globals;
Tnode292802* constants;
Ttypeseq292836* types;
Tnode292802* currentexceptiona;
Tnode292802* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype343220* prc;
Tsym292834* module;
Tnode292802* callsite;
Tevalmode343019 mode;
Tsandboxflag343021Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo191336 comesfromheuristic;
TY343260* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair344010  {
Tsym292834* genericsym;
Tinstantiation292824* inst;
};
struct TY292961 {
NI Field0;
Tsym292834* Field1;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct  Tinstantiation292824  {
Tsym292834* sym;
Ttypeseq292836* concretetypes;
NI compilesid;
};
typedef NU8 Tslotkind343025;
struct TY343226 {
NIM_BOOL Field0;
Tslotkind343025 Field1;
};
typedef TY343226 TY343229[256];
struct  PprocHEX3Aobjecttype343220  {
TY343221* blocks;
Tsym292834* sym;
TY343229 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs343029* args0, void* ClEnv);
void* ClEnv;
} Vmcallback343031;
struct TY343261 {
NimStringDesc* Field0;
Vmcallback343031 Field1;
};
struct  Tblock343017  {
Tsym292834* label;
TY343201* fixups;
};
struct  Vmargs343029  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode292802* currentexception;
};
struct Tnodeseq292796 {
  TGenericSeq Sup;
  Tnode292802* data[SEQ_DECL_SIZE];
};
struct Trunkseq268028 {
  TGenericSeq Sup;
  Trunk268026* data[SEQ_DECL_SIZE];
};
struct Ttypeseq292836 {
  TGenericSeq Sup;
  Ttype292840* data[SEQ_DECL_SIZE];
};
struct TY292929 {
  TGenericSeq Sup;
  Tinstantiation292824* data[SEQ_DECL_SIZE];
};
struct Tsymseq292804 {
  TGenericSeq Sup;
  Tsym292834* data[SEQ_DECL_SIZE];
};
struct Tidpairseq292848 {
  TGenericSeq Sup;
  Tidpair292846 data[SEQ_DECL_SIZE];
};
struct TY344144 {
  TGenericSeq Sup;
  Tinstantiationpair344010 data[SEQ_DECL_SIZE];
};
struct TY292960 {
  TGenericSeq Sup;
  TY292961 data[SEQ_DECL_SIZE];
};
struct TY343241 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY192086 {
  TGenericSeq Sup;
  Tlineinfo191336 data[SEQ_DECL_SIZE];
};
struct TY343260 {
  TGenericSeq Sup;
  TY343261 data[SEQ_DECL_SIZE];
};
struct TY343221 {
  TGenericSeq Sup;
  Tblock343017 data[SEQ_DECL_SIZE];
};
struct TY343201 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, sonslen_295351_850551059)(Tnode292802* n0);
N_NIMCALL(Tsym292834*, myimportmodule_348474_2178338529)(Tcontext344020* c0, Tnode292802* n0);
N_NIMCALL(NI32, checkmodulename_348051_2178338529)(Tnode292802* n0);
N_NIMCALL(NimStringDesc*, getmodulename_348009_2178338529)(Tnode292802* n0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
N_NIMCALL(NimStringDesc*, pathsubs_170084_2607990831)(NimStringDesc* p0, NimStringDesc* config0);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path0, TY128506* Result);
N_NIMCALL(NimStringDesc*, tofullpath_192264_155036129)(NI32 fileidx0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj0, TNimType* subclass0);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(void, localerror_196085_155036129)(Tlineinfo191336 info0, NimStringDesc* arg0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53419_1689653243)(Cell47304* c0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, decref_53001_1689653243)(Cell47304* c0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(Tident199010*, getident_199441_791273810)(NimStringDesc* identifier0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s0, NimStringDesc* sub0, NimStringDesc* by0);
N_NIMCALL(NimStringDesc*, rendertree_311044_382274130)(Tnode292802* n0, Trenderflag311004Set renderflags0);
N_NIMCALL(void, localerror_196080_155036129)(Tlineinfo191336 info0, Tmsgkind191002 msg0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr0, NimStringDesc* a0);
N_NIMCALL(NimStringDesc*, findmodule_170489_2607990831)(NimStringDesc* modulename0, NimStringDesc* currentmodule0);
N_NIMCALL(NI32, fileinfoidx_192008_155036129)(NimStringDesc* filename0);
N_NIMCALL(Tsym292834*, importmoduleas_348443_2178338529)(Tnode292802* n0, Tsym292834* realmodule0);
static N_INLINE(NI, len_293081_850551059)(Tnode292802* n0);
N_NIMCALL(Tsym292834*, createmodulealias_295838_850551059)(Tsym292834* s0, Tident199010* newident0, Tlineinfo191336 info0);
N_NIMCALL(void, message_196095_155036129)(Tlineinfo191336 info0, Tmsgkind191002 msg0, NimStringDesc* arg0);
N_NIMCALL(void, adddecl_346461_254525290)(Tcontext344020* c0, Tsym292834* sym0, Tlineinfo191336 info0);
N_NIMCALL(void, importallsymbolsexcept_348262_2178338529)(Tcontext344020* c0, Tsym292834* frommod0, Intset268030 exceptset0);
N_NIMCALL(Tsym292834*, inittabiter_299052_2984716966)(Ttabiter299050* ti0, Tstrtable292806 tab0);
N_NIMCALL(void, internalerror_196100_155036129)(Tlineinfo191336 info0, NimStringDesc* errmsg0);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e0, TNimType* typ0);
static N_INLINE(NIM_BOOL, isnil_268929_2627731572)(Intset268030 x0);
N_NIMCALL(NIM_BOOL, contains_268811_2627731572)(Intset268030 s0, NI key0);
N_NIMCALL(void, rawimportsymbol_348058_2178338529)(Tcontext344020* c0, Tsym292834* s0);
N_NIMCALL(Tsym292834*, strtableget_299045_2984716966)(Tstrtable292806 t0, Tident199010* name0);
N_NIMCALL(void, incl_268832_2627731572)(Intset268030* s0, NI key0);
N_NIMCALL(void, strtableadd_299040_2984716966)(Tstrtable292806* t0, Tsym292834* n0);
N_NIMCALL(Tsym292834*, initidentiter_299066_2984716966)(Tidentiter299063* ti0, Tstrtable292806 tab0, Tident199010* s0);
N_NIMCALL(Tsym292834*, nextidentiter_299072_2984716966)(Tidentiter299063* ti0, Tstrtable292806 tab0);
N_NIMCALL(void, addconverter_344427_893308950)(Tcontext344020* c0, Tsym292834* conv0);
static N_INLINE(NIM_BOOL, haspattern_297337_850551059)(Tsym292834* s0);
static N_INLINE(NIM_BOOL, isroutine_297323_850551059)(Tsym292834* s0);
N_NIMCALL(void, addpattern_344432_893308950)(Tcontext344020* c0, Tsym292834* p0);
N_NIMCALL(Tsym292834*, nextiter_299057_2984716966)(Ttabiter299050* ti0, Tstrtable292806 tab0);
N_NIMCALL(void, checkminsonslen_344962_893308950)(Tnode292802* n0, NI length0);
N_NIMCALL(Tnode292802*, newsymnode_294183_850551059)(Tsym292834* sym0);
N_NIMCALL(void, initintset_268885_2627731572)(Intset268030* Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(Tident199010*, considerquotedident_346004_254525290)(Tnode292802* n0);
N_NIMCALL(void, importsymbol_348200_2178338529)(Tcontext344020* c0, Tnode292802* n0, Tsym292834* frommod0);
N_NIMCALL(void, loadstub_335224_1724185294)(Tsym292834* s0);
STRING_LITERAL(T2178338529_3, "invalid path: ", 14);
STRING_LITERAL(T2178338529_4, "as", 2);
STRING_LITERAL(T2178338529_5, " ", 1);
STRING_LITERAL(T2178338529_6, "", 0);
STRING_LITERAL(T2178338529_7, ".", 1);
STRING_LITERAL(T2178338529_8, "/", 1);
STRING_LITERAL(T2178338529_9, "invalid module name: \'$1\'", 25);
STRING_LITERAL(T2178338529_10, "module alias must be an identifier", 34);
STRING_LITERAL(T2178338529_11, "A module cannot import itself", 29);
STRING_LITERAL(T2178338529_12, "importAllSymbols: ", 18);
STRING_LITERAL(T2178338529_13, "rawImportSymbol", 15);
STRING_LITERAL(T2178338529_14, "importSymbol: 2", 15);
STRING_LITERAL(T2178338529_15, "importSymbol: 3", 15);
extern TSafePoint* exchandler_18837_1689653243;
extern TNimType NTI3646; /* ValueError */
extern Exception* currexception_18839_1689653243;
extern Gcheap49818 gch_49858_1689653243;
extern TY341069 gimportmodule_341073_2355241294;
extern TNimType NTI292435; /* TSymKind */

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_18837_1689653243;
	exchandler_18837_1689653243 = s0;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_18837_1689653243 = (*exchandler_18837_1689653243).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result0;
	result0 = (Exception*)0;
	result0 = currexception_18839_1689653243;
	return result0;
}

static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_7485_1689653243(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(void, incref_53419_1689653243)(Cell47304* c0) {
	(*c0).refcount = (NI)((NU32)((*c0).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47304* result0;
	result0 = (Cell47304*)0;
	result0 = ((Cell47304*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47304))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
}

static N_INLINE(void, decref_53001_1689653243)(Cell47304* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell47304* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell47304*)0;
		LOC5 = usrtocell_51440_1689653243(src0);
		incref_53419_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell47304* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell47304*)0;
		LOC10 = usrtocell_51440_1689653243((*dest0));
		decref_53001_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_18839_1689653243), NIM_NIL);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47304* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51440_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47304* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51440_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(NimStringDesc*, getmodulename_348009_2178338529)(Tnode292802* n0) {
	NimStringDesc* volatile result0;
{	result0 = (NimStringDesc*)0;
	switch ((*n0).kind) {
	case ((Tnodekind292020) 20):
	case ((Tnodekind292020) 21):
	case ((Tnodekind292020) 22):
	{
		TSafePoint T2178338529_2;
		pushSafePoint(&T2178338529_2);
		T2178338529_2.status = _setjmp(T2178338529_2.context);
		if (T2178338529_2.status == 0) {
			NimStringDesc* LOC3;
			TY128506 LOC4;
			LOC3 = (NimStringDesc*)0;
			LOC3 = tofullpath_192264_155036129((*n0).info.fileindex);
			memset((void*)(&LOC4), 0, sizeof(LOC4));
			nossplitFile(LOC3, (&LOC4));
			result0 = pathsubs_170084_2607990831((*n0).kindU.S3.strval, LOC4.Field0);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3646))) {
				NimStringDesc* LOC7;
				T2178338529_2.status = 0;
				LOC7 = (NimStringDesc*)0;
				LOC7 = rawNewString((*n0).kindU.S3.strval->Sup.len + 14);
appendString(LOC7, ((NimStringDesc*) &T2178338529_3));
appendString(LOC7, (*n0).kindU.S3.strval);
				localerror_196085_155036129((*n0).info, LOC7);
				result0 = copyString((*n0).kindU.S3.strval);
				popCurrentException();
			}
		}
		if (T2178338529_2.status != 0) reraiseException();
	}
	break;
	case ((Tnodekind292020) 2):
	{
		result0 = copyString((*(*n0).kindU.S5.ident).s);
	}
	break;
	case ((Tnodekind292020) 3):
	{
		result0 = copyString((*(*(*n0).kindU.S4.sym).name).s);
	}
	break;
	case ((Tnodekind292020) 29):
	case ((Tnodekind292020) 30):
	{
		NimStringDesc* LOC18;
		{
			NIM_BOOL LOC13;
			Tident199010* LOC15;
			LOC13 = (NIM_BOOL)0;
			LOC13 = ((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind292020) 2));
			if (!(LOC13)) goto LA14;
			LOC15 = (Tident199010*)0;
			LOC15 = getident_199441_791273810(((NimStringDesc*) &T2178338529_4));
			LOC13 = ((*(*(*n0).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident).Sup.id == (*LOC15).Sup.id);
			LA14: ;
			if (!LOC13) goto LA16;
			(*n0).kind = ((Tnodekind292020) 78);
			asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 0)]), (*n0).kindU.S6.sons->data[((NI) 1)]);
			asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 1)]), (*n0).kindU.S6.sons->data[((NI) 2)]);
			(*n0).kindU.S6.sons = (Tnodeseq292796*) setLengthSeq(&((*n0).kindU.S6.sons)->Sup, sizeof(Tnode292802*), ((NI) 2));
			result0 = getmodulename_348009_2178338529((*n0).kindU.S6.sons->data[((NI) 0)]);
			goto BeforeRet;
		}
		LA16: ;
		LOC18 = (NimStringDesc*)0;
		LOC18 = rendertree_311044_382274130(n0, 4);
		result0 = nsuReplaceStr(LOC18, ((NimStringDesc*) &T2178338529_5), ((NimStringDesc*) &T2178338529_6));
	}
	break;
	case ((Tnodekind292020) 45):
	{
		NimStringDesc* LOC20;
		LOC20 = (NimStringDesc*)0;
		LOC20 = rendertree_311044_382274130(n0, 4);
		result0 = nsuReplaceStr(LOC20, ((NimStringDesc*) &T2178338529_7), ((NimStringDesc*) &T2178338529_8));
	}
	break;
	case ((Tnodekind292020) 78):
	{
		result0 = getmodulename_348009_2178338529((*n0).kindU.S6.sons->data[((NI) 0)]);
	}
	break;
	default:
	{
		NimStringDesc* LOC23;
		NimStringDesc* LOC24;
		LOC23 = (NimStringDesc*)0;
		LOC23 = rendertree_311044_382274130(n0, 0);
		LOC24 = (NimStringDesc*)0;
		LOC24 = nsuFormatSingleElem(((NimStringDesc*) &T2178338529_9), LOC23);
		localerror_196080_155036129((*n0).info, ((Tmsgkind191002) 4), LOC24);
		result0 = copyString(((NimStringDesc*) &T2178338529_6));
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI32, checkmodulename_348051_2178338529)(Tnode292802* n0) {
	NI32 result0;
	NimStringDesc* modulename0;
	NimStringDesc* fullpath0;
	NimStringDesc* LOC1;
	result0 = (NI32)0;
	modulename0 = getmodulename_348009_2178338529(n0);
	LOC1 = (NimStringDesc*)0;
	LOC1 = tofullpath_192264_155036129((*n0).info.fileindex);
	fullpath0 = findmodule_170489_2607990831(modulename0, LOC1);
	{
		if (!((fullpath0 ? fullpath0->Sup.len : 0) == ((NI) 0))) goto LA4;
		localerror_196080_155036129((*n0).info, ((Tmsgkind191002) 3), modulename0);
		result0 = ((NI32) -1);
	}
	goto LA2;
	LA4: ;
	{
		result0 = fileinfoidx_192008_155036129(fullpath0);
	}
	LA2: ;
	return result0;
}

static N_INLINE(NI, len_293081_850551059)(Tnode292802* n0) {
	NI result0;
	result0 = (NI)0;
	{
		if (!(*n0).kindU.S6.sons == 0) goto LA3;
		result0 = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result0 = ((*n0).kindU.S6.sons ? (*n0).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Tsym292834*, importmoduleas_348443_2178338529)(Tnode292802* n0, Tsym292834* realmodule0) {
	Tsym292834* result0;
	result0 = (Tsym292834*)0;
	result0 = realmodule0;
	{
		if (!!(((*n0).kind == ((Tnodekind292020) 78)))) goto LA3;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NI LOC7;
		LOC6 = (NIM_BOOL)0;
		LOC7 = (NI)0;
		LOC7 = len_293081_850551059(n0);
		LOC6 = !((LOC7 == ((NI) 2)));
		if (LOC6) goto LA8;
		LOC6 = !(((*(*n0).kindU.S6.sons->data[((NI) 1)]).kind == ((Tnodekind292020) 2)));
		LA8: ;
		if (!LOC6) goto LA9;
		localerror_196080_155036129((*n0).info, ((Tmsgkind191002) 4), ((NimStringDesc*) &T2178338529_10));
	}
	goto LA1;
	LA9: ;
	{
		if (!!(((*(*(*n0).kindU.S6.sons->data[((NI) 1)]).kindU.S5.ident).Sup.id == (*(*realmodule0).name).Sup.id))) goto LA12;
		result0 = createmodulealias_295838_850551059(realmodule0, (*(*n0).kindU.S6.sons->data[((NI) 1)]).kindU.S5.ident, (*realmodule0).info);
	}
	goto LA1;
	LA12: ;
	LA1: ;
	return result0;
}

N_NIMCALL(Tsym292834*, myimportmodule_348474_2178338529)(Tcontext344020* c0, Tnode292802* n0) {
	Tsym292834* result0;
	NI32 f0;
	result0 = (Tsym292834*)0;
	f0 = checkmodulename_348051_2178338529(n0);
	{
		Tsym292834* LOC5;
		if (!!((f0 == ((NI32) -1)))) goto LA3;
		LOC5 = (Tsym292834*)0;
		LOC5 = gimportmodule_341073_2355241294((*c0).module, f0);
		result0 = importmoduleas_348443_2178338529(n0, LOC5);
		{
			NIM_BOOL LOC8;
			LOC8 = (NIM_BOOL)0;
			LOC8 = ((*result0).info.fileindex == (*(*c0).module).info.fileindex);
			if (!(LOC8)) goto LA9;
			LOC8 = ((*result0).info.fileindex == (*n0).info.fileindex);
			LA9: ;
			if (!LOC8) goto LA10;
			localerror_196080_155036129((*n0).info, ((Tmsgkind191002) 4), ((NimStringDesc*) &T2178338529_11));
		}
		LA10: ;
		{
			if (!(((*result0).flags &(1U<<((NU)(((Tsymflag292184) 19))&31U)))!=0)) goto LA14;
			message_196095_155036129((*n0).info, ((Tmsgkind191002) 241), (*(*result0).name).s);
		}
		LA14: ;
	}
	LA3: ;
	return result0;
}

static N_INLINE(NIM_BOOL, isnil_268929_2627731572)(Intset268030 x0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = x0.head == 0;
	return result0;
}

static N_INLINE(NIM_BOOL, isroutine_297323_850551059)(Tsym292834* s0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = ((258048 &(1U<<((NU)((*s0).kind)&31U)))!=0);
	return result0;
}

static N_INLINE(NIM_BOOL, haspattern_297337_850551059)(Tsym292834* s0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = isroutine_297323_850551059(s0);
	if (!(LOC1)) goto LA2;
	LOC1 = !(((*(*(*s0).ast).kindU.S6.sons->data[((NI) 1)]).kind == ((Tnodekind292020) 1)));
	LA2: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(void, rawimportsymbol_348058_2178338529)(Tcontext344020* c0, Tsym292834* s0) {
	Tsym292834* check0;
	check0 = strtableget_299045_2984716966((*(*c0).importtable).symbols, (*s0).name);
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = !((check0 == NIM_NIL));
		if (!(LOC3)) goto LA4;
		LOC3 = !(((*check0).Sup.id == (*s0).Sup.id));
		LA4: ;
		if (!LOC3) goto LA5;
		{
			if (!!(((258112 &(1U<<((NU)((*s0).kind)&31U)))!=0))) goto LA9;
			incl_268832_2627731572((&(*c0).ambiguoussymbols), (*s0).Sup.id);
			incl_268832_2627731572((&(*c0).ambiguoussymbols), (*check0).Sup.id);
		}
		LA9: ;
	}
	LA5: ;
	strtableadd_299040_2984716966((&(*(*c0).importtable).symbols), s0);
	{
		Ttype292840* etyp0;
		if (!((*s0).kind == ((Tsymkind292435) 7))) goto LA13;
		etyp0 = (*s0).typ;
		{
			NIM_BOOL LOC17;
			LOC17 = (NIM_BOOL)0;
			LOC17 = ((*etyp0).kind == ((Ttypekind292244) 1) || (*etyp0).kind == ((Ttypekind292244) 14));
			if (!(LOC17)) goto LA18;
			LOC17 = !((((*s0).flags &(1U<<((NU)(((Tsymflag292184) 9))&31U)))!=0));
			LA18: ;
			if (!LOC17) goto LA19;
			{
				NI j_348137_2178338529;
				NI HEX3Atmp_348193_2178338529;
				NI LOC22;
				NI res_348196_2178338529;
				j_348137_2178338529 = (NI)0;
				HEX3Atmp_348193_2178338529 = (NI)0;
				LOC22 = (NI)0;
				LOC22 = sonslen_295351_850551059((*etyp0).n);
				HEX3Atmp_348193_2178338529 = (NI)(LOC22 - ((NI) 1));
				res_348196_2178338529 = ((NI) 0);
				{
					while (1) {
						Tsym292834* e0;
						Tidentiter299063 it0;
						if (!(res_348196_2178338529 <= HEX3Atmp_348193_2178338529)) goto LA24;
						j_348137_2178338529 = res_348196_2178338529;
						e0 = (*(*(*etyp0).n).kindU.S6.sons->data[j_348137_2178338529]).kindU.S4.sym;
						{
							if (!!(((*e0).kind == ((Tsymkind292435) 19)))) goto LA27;
							internalerror_196100_155036129((*s0).info, ((NimStringDesc*) &T2178338529_13));
						}
						LA27: ;
						memset((void*)(&it0), 0, sizeof(it0));
						check0 = initidentiter_299066_2984716966((&it0), (*(*c0).importtable).symbols, (*e0).name);
						{
							while (1) {
								if (!!((check0 == NIM_NIL))) goto LA30;
								{
									if (!((*check0).Sup.id == (*e0).Sup.id)) goto LA33;
									e0 = NIM_NIL;
									goto LA29;
								}
								LA33: ;
								check0 = nextidentiter_299072_2984716966((&it0), (*(*c0).importtable).symbols);
							} LA30: ;
						} LA29: ;
						{
							if (!!((e0 == NIM_NIL))) goto LA37;
							rawimportsymbol_348058_2178338529(c0, e0);
						}
						LA37: ;
						res_348196_2178338529 += ((NI) 1);
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
			if (!((*s0).kind == ((Tsymkind292435) 15))) goto LA42;
			addconverter_344427_893308950(c0, s0);
		}
		LA42: ;
		{
			NIM_BOOL LOC46;
			LOC46 = (NIM_BOOL)0;
			LOC46 = haspattern_297337_850551059(s0);
			if (!LOC46) goto LA47;
			addpattern_344432_893308950(c0, s0);
		}
		LA47: ;
	}
	LA11: ;
}

N_NIMCALL(void, importallsymbolsexcept_348262_2178338529)(Tcontext344020* c0, Tsym292834* frommod0, Intset268030 exceptset0) {
	Ttabiter299050 i0;
	Tsym292834* s0;
	memset((void*)(&i0), 0, sizeof(i0));
	s0 = inittabiter_299052_2984716966((&i0), (*frommod0).kindU.S3.tab);
	{
		while (1) {
			if (!!((s0 == NIM_NIL))) goto LA2;
			{
				if (!!(((*s0).kind == ((Tsymkind292435) 6)))) goto LA5;
				{
					if (!!(((*s0).kind == ((Tsymkind292435) 19)))) goto LA9;
					{
						NimStringDesc* LOC15;
						if (!!(((21755776 &(1U<<((NU)((*s0).kind)&31U)))!=0))) goto LA13;
						LOC15 = (NimStringDesc*)0;
						LOC15 = rawNewString(reprEnum((NI)(*s0).kind, (&NTI292435))->Sup.len + 18);
appendString(LOC15, ((NimStringDesc*) &T2178338529_12));
appendString(LOC15, reprEnum((NI)(*s0).kind, (&NTI292435)));
						internalerror_196100_155036129((*s0).info, LOC15);
					}
					LA13: ;
					{
						NIM_BOOL LOC18;
						NIM_BOOL LOC20;
						LOC18 = (NIM_BOOL)0;
						LOC18 = isnil_268929_2627731572(exceptset0);
						if (LOC18) goto LA19;
						LOC20 = (NIM_BOOL)0;
						LOC20 = contains_268811_2627731572(exceptset0, (*(*s0).name).Sup.id);
						LOC18 = !(LOC20);
						LA19: ;
						if (!LOC18) goto LA21;
						rawimportsymbol_348058_2178338529(c0, s0);
					}
					LA21: ;
				}
				LA9: ;
			}
			LA5: ;
			s0 = nextiter_299057_2984716966((&i0), (*frommod0).kindU.S3.tab);
		} LA2: ;
	}
}

N_NIMCALL(Tnode292802*, evalimport_348001_2178338529)(Tcontext344020* c0, Tnode292802* n0) {
	Tnode292802* result0;
	Intset268030 emptyset0;
	result0 = (Tnode292802*)0;
	result0 = n0;
	memset((void*)(&emptyset0), 0, sizeof(emptyset0));
	{
		NI i_348512_2178338529;
		NI HEX3Atmp_348529_2178338529;
		NI LOC2;
		NI res_348532_2178338529;
		i_348512_2178338529 = (NI)0;
		HEX3Atmp_348529_2178338529 = (NI)0;
		LOC2 = (NI)0;
		LOC2 = sonslen_295351_850551059(n0);
		HEX3Atmp_348529_2178338529 = (NI)(LOC2 - ((NI) 1));
		res_348532_2178338529 = ((NI) 0);
		{
			while (1) {
				Tsym292834* m0;
				if (!(res_348532_2178338529 <= HEX3Atmp_348529_2178338529)) goto LA4;
				i_348512_2178338529 = res_348532_2178338529;
				m0 = myimportmodule_348474_2178338529(c0, (*n0).kindU.S6.sons->data[i_348512_2178338529]);
				{
					if (!!((m0 == NIM_NIL))) goto LA7;
					adddecl_346461_254525290(c0, m0, (*n0).info);
					importallsymbolsexcept_348262_2178338529(c0, m0, emptyset0);
				}
				LA7: ;
				res_348532_2178338529 += ((NI) 1);
			} LA4: ;
		}
	}
	return result0;
}

N_NIMCALL(Tnode292802*, evalimportexcept_348587_2178338529)(Tcontext344020* c0, Tnode292802* n0) {
	Tnode292802* result0;
	Tsym292834* m0;
	result0 = (Tnode292802*)0;
	result0 = n0;
	checkminsonslen_344962_893308950(n0, ((NI) 2));
	m0 = myimportmodule_348474_2178338529(c0, (*n0).kindU.S6.sons->data[((NI) 0)]);
	{
		Intset268030 exceptset0;
		if (!!((m0 == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 0)]), newsymnode_294183_850551059(m0));
		adddecl_346461_254525290(c0, m0, (*n0).info);
		memset((void*)(&exceptset0), 0, sizeof(exceptset0));
		chckNil((void*)(&exceptset0));
		memset((void*)(&exceptset0), 0, sizeof(exceptset0));
		initintset_268885_2627731572((&exceptset0));
		{
			NI i_348619_2178338529;
			NI HEX3Atmp_348624_2178338529;
			NI LOC6;
			NI res_348627_2178338529;
			i_348619_2178338529 = (NI)0;
			HEX3Atmp_348624_2178338529 = (NI)0;
			LOC6 = (NI)0;
			LOC6 = sonslen_295351_850551059(n0);
			HEX3Atmp_348624_2178338529 = (NI)(LOC6 - ((NI) 1));
			res_348627_2178338529 = ((NI) 1);
			{
				while (1) {
					Tident199010* ident0;
					if (!(res_348627_2178338529 <= HEX3Atmp_348624_2178338529)) goto LA8;
					i_348619_2178338529 = res_348627_2178338529;
					ident0 = considerquotedident_346004_254525290((*n0).kindU.S6.sons->data[i_348619_2178338529]);
					incl_268832_2627731572((&exceptset0), (*ident0).Sup.id);
					res_348627_2178338529 += ((NI) 1);
				} LA8: ;
			}
		}
		importallsymbolsexcept_348262_2178338529(c0, m0, exceptset0);
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, importsymbol_348200_2178338529)(Tcontext344020* c0, Tnode292802* n0, Tsym292834* frommod0) {
	Tident199010* ident0;
	Tsym292834* s0;
	ident0 = considerquotedident_346004_254525290(n0);
	s0 = strtableget_299045_2984716966((*frommod0).kindU.S3.tab, ident0);
	{
		if (!(s0 == NIM_NIL)) goto LA3;
		localerror_196080_155036129((*n0).info, ((Tmsgkind191002) 63), (*ident0).s);
	}
	goto LA1;
	LA3: ;
	{
		{
			if (!((*s0).kind == ((Tsymkind292435) 22))) goto LA8;
			loadstub_335224_1724185294(s0);
		}
		LA8: ;
		{
			if (!!(((21755776 &(1U<<((NU)((*s0).kind)&31U)))!=0))) goto LA12;
			internalerror_196100_155036129((*n0).info, ((NimStringDesc*) &T2178338529_14));
		}
		LA12: ;
		switch ((*s0).kind) {
		case ((Tsymkind292435) 12):
		case ((Tsymkind292435) 17):
		case ((Tsymkind292435) 16):
		case ((Tsymkind292435) 14):
		case ((Tsymkind292435) 13):
		case ((Tsymkind292435) 15):
		{
			Tidentiter299063 it0;
			Tsym292834* e0;
			memset((void*)(&it0), 0, sizeof(it0));
			e0 = initidentiter_299066_2984716966((&it0), (*frommod0).kindU.S3.tab, (*s0).name);
			{
				while (1) {
					if (!!((e0 == NIM_NIL))) goto LA16;
					{
						if (!!(((*(*e0).name).Sup.id == (*(*s0).name).Sup.id))) goto LA19;
						internalerror_196100_155036129((*n0).info, ((NimStringDesc*) &T2178338529_15));
					}
					LA19: ;
					rawimportsymbol_348058_2178338529(c0, e0);
					e0 = nextidentiter_299072_2984716966((&it0), (*frommod0).kindU.S3.tab);
				} LA16: ;
			}
		}
		break;
		default:
		{
			rawimportsymbol_348058_2178338529(c0, s0);
		}
		break;
		}
	}
	LA1: ;
}

N_NIMCALL(Tnode292802*, evalfrom_348005_2178338529)(Tcontext344020* c0, Tnode292802* n0) {
	Tnode292802* result0;
	Tsym292834* m0;
	result0 = (Tnode292802*)0;
	result0 = n0;
	checkminsonslen_344962_893308950(n0, ((NI) 2));
	m0 = myimportmodule_348474_2178338529(c0, (*n0).kindU.S6.sons->data[((NI) 0)]);
	{
		if (!!((m0 == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 0)]), newsymnode_294183_850551059(m0));
		adddecl_346461_254525290(c0, m0, (*n0).info);
		{
			NI i_348567_2178338529;
			NI HEX3Atmp_348580_2178338529;
			NI LOC6;
			NI res_348583_2178338529;
			i_348567_2178338529 = (NI)0;
			HEX3Atmp_348580_2178338529 = (NI)0;
			LOC6 = (NI)0;
			LOC6 = sonslen_295351_850551059(n0);
			HEX3Atmp_348580_2178338529 = (NI)(LOC6 - ((NI) 1));
			res_348583_2178338529 = ((NI) 1);
			{
				while (1) {
					if (!(res_348583_2178338529 <= HEX3Atmp_348580_2178338529)) goto LA8;
					i_348567_2178338529 = res_348583_2178338529;
					{
						if (!!(((*(*n0).kindU.S6.sons->data[i_348567_2178338529]).kind == ((Tnodekind292020) 23)))) goto LA11;
						importsymbol_348200_2178338529(c0, (*n0).kindU.S6.sons->data[i_348567_2178338529], m0);
					}
					LA11: ;
					res_348583_2178338529 += ((NI) 1);
				} LA8: ;
			}
		}
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, importallsymbols_348324_2178338529)(Tcontext344020* c0, Tsym292834* frommod0) {
	Intset268030 exceptset0;
	memset((void*)(&exceptset0), 0, sizeof(exceptset0));
	importallsymbolsexcept_348262_2178338529(c0, frommod0, exceptset0);
}
NIM_EXTERNC N_NOINLINE(void, compiler_importerInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_importerDatInit000)(void) {
}

