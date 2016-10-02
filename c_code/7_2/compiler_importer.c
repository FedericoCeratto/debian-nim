/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
typedef struct Tnode293802 Tnode293802;
typedef struct Tcontext345020 Tcontext345020;
typedef struct Intset269030 Intset269030;
typedef struct Trunk269026 Trunk269026;
typedef struct Trunkseq269028 Trunkseq269028;
typedef struct Tsym293834 Tsym293834;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype293840 Ttype293840;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct Tident200010 Tident200010;
typedef struct Tnodeseq293796 Tnodeseq293796;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct TY128506 TY128506;
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
typedef struct Ttypeseq293836 Ttypeseq293836;
typedef struct TY293929 TY293929;
typedef struct Tstrtable293806 Tstrtable293806;
typedef struct Tsymseq293804 Tsymseq293804;
typedef struct Tloc293816 Tloc293816;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct Tlib293820 Tlib293820;
typedef struct Tpasscontext342002 Tpasscontext342002;
typedef struct Tscope293828 Tscope293828;
typedef struct Tproccon345008 Tproccon345008;
typedef struct Tlinkedlist147013 Tlinkedlist147013;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Tidtable293850 Tidtable293850;
typedef struct Tidpairseq293848 Tidpairseq293848;
typedef struct Tctx344035 Tctx344035;
typedef struct TY345144 TY345144;
typedef struct Ttabiter300050 Ttabiter300050;
typedef struct TY293960 TY293960;
typedef struct Tidentiter300063 Tidentiter300063;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
typedef struct Tinstantiation293824 Tinstantiation293824;
typedef struct Tidpair293846 Tidpair293846;
typedef struct TY344241 TY344241;
typedef struct TY193083 TY193083;
typedef struct PprocHEX3Aobjecttype344220 PprocHEX3Aobjecttype344220;
typedef struct TY344260 TY344260;
typedef struct Tinstantiationpair345010 Tinstantiationpair345010;
typedef struct TY293961 TY293961;
typedef struct TY344221 TY344221;
typedef struct TY344226 TY344226;
typedef struct TY344261 TY344261;
typedef struct Vmargs344029 Vmargs344029;
typedef struct Tblock344017 Tblock344017;
typedef struct TY344201 TY344201;
struct  Intset269030  {
NI counter;
NI max;
Trunk269026* head;
Trunkseq269028* data;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  Tident200010  {
  Tidobj200004 Sup;
NimStringDesc* s;
Tident200010* next;
NI h;
};
typedef NU8 Tsymkind293435;
struct  Tstrtable293806  {
NI counter;
Tsymseq293804* data;
};
typedef NU16 Tmagic293524;
typedef NU32 Tsymflag293184Set;
typedef NU32 Toption170009Set;
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
typedef NU8 Trenderflag312004Set;
typedef NU16 Tmsgkind192002;
typedef N_NIMCALL_PTR(Tsym293834*, TY342069) (Tsym293834* m0, NI32 fileidx0);
struct  Tpasscontext342002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tlinkedlist147013  {
Tlistentry147007* head;
Tlistentry147007* tail;
NI counter;
};
struct  Tidtable293850  {
NI counter;
Tidpairseq293848* data;
};
typedef N_NIMCALL_PTR(Tnode293802*, TY345075) (Tcontext345020* c0, Tnode293802* n0);
typedef NU16 Texprflag345012Set;
typedef N_NIMCALL_PTR(Tnode293802*, TY345080) (Tcontext345020* c0, Tnode293802* n0, Texprflag345012Set flags0);
typedef N_NIMCALL_PTR(Tnode293802*, TY345088) (Tcontext345020* c0, Tnode293802* n0, Texprflag345012Set flags0);
typedef N_NIMCALL_PTR(Tnode293802*, TY345096) (Tcontext345020* c0, Tnode293802* n0);
typedef N_NIMCALL_PTR(Tnode293802*, TY345101) (Tcontext345020* c0, Tnode293802* n0, Texprflag345012Set flags0);
typedef N_NIMCALL_PTR(Tnode293802*, TY345109) (Tcontext345020* c0, Tnode293802* n0);
typedef NU32 Tsymkind293435Set;
typedef N_NIMCALL_PTR(Tnode293802*, TY345114) (Tcontext345020* c0, Tnode293802* n0, Tnode293802* norig0, Tsymkind293435Set filter0);
typedef N_NIMCALL_PTR(Ttype293840*, TY345121) (Tcontext345020* c0, Tnode293802* n0, Ttype293840* prev0);
typedef struct {
N_NIMCALL_PTR(Tnode293802*, ClPrc) (Tcontext345020* c0, Tidtable293850 pt0, Tnode293802* n0, void* ClEnv);
void* ClEnv;
} TY345127;
typedef struct {
N_NIMCALL_PTR(Tsym293834*, ClPrc) (Tcontext345020* c0, Tsym293834* fn0, Tidtable293850 pt0, Tlineinfo192336 info0, void* ClEnv);
void* ClEnv;
} TY345133;
typedef NU8 Ttypeattachedop345016;
typedef N_NIMCALL_PTR(Tsym293834*, TY345150) (Tcontext345020* c0, Tsym293834* dc0, Ttype293840* t0, Tlineinfo192336 info0, Ttypeattachedop345016 op0, NI col0);
struct  Tcontext345020  {
  Tpasscontext342002 Sup;
Tsym293834* module;
Tscope293828* currentscope;
Tscope293828* importtable;
Tscope293828* toplevelscope;
Tproccon345008* p;
Tsymseq293804* friendmodules;
NI instcounter;
Intset269030 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq293804* converters;
Tsymseq293804* patterns;
Tlinkedlist147013 optionstack;
Tidtable293850 symmapping;
Tlinkedlist147013 libs;
TY345075 semconstexpr;
TY345080 semexpr;
TY345088 semtryexpr;
TY345096 semtryconstexpr;
TY345101 semoperand;
TY345109 semconstboolexpr;
TY345114 semoverloadedcall;
TY345121 semtypenode;
TY345127 seminferredlambda;
TY345133 semgenerateinstance;
Intset269030 includedfiles;
Tstrtable293806 userpragmas;
Tctx344035* evalcontext;
Intset269030 unknownidents;
TY345144* generics;
NI topstmts;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY345150 insttypeboundop;
Tident200010* selfname;
Tstrtable293806 signatures;
};
typedef NU8 Tsymflag293184;
struct  Ttabiter300050  {
NI h;
};
struct  Tscope293828  {
NI depthlevel;
Tstrtable293806 symbols;
Tscope293828* parent;
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
struct  Tidentiter300063  {
NI h;
Tident200010* name;
};
typedef NI TY29419[8];
struct  Trunk269026  {
Trunk269026* next;
NI key;
TY29419 bits;
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
struct  Ropeobj179006  {
  TNimObject Sup;
Ropeobj179006* left;
Ropeobj179006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
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
struct  Tproccon345008  {
Tsym293834* owner;
Tsym293834* resultsym;
Tsym293834* selfsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon345008* next;
NIM_BOOL wasforwarded;
Tnode293802* bracketexpr;
};
struct  Tidpair293846  {
Tidobj200004* key;
TNimObject* val;
};
typedef NU8 Tevalmode344019;
typedef NU8 Tsandboxflag344021Set;
struct  Tctx344035  {
  Tpasscontext342002 Sup;
TY344241* code;
TY193083* debug;
Tnode293802* globals;
Tnode293802* constants;
Ttypeseq293836* types;
Tnode293802* currentexceptiona;
Tnode293802* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype344220* prc;
Tsym293834* module;
Tnode293802* callsite;
Tevalmode344019 mode;
Tsandboxflag344021Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo192336 comesfromheuristic;
TY344260* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair345010  {
Tsym293834* genericsym;
Tinstantiation293824* inst;
};
struct TY293961 {
NI Field0;
Tsym293834* Field1;
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
typedef NU8 Tslotkind344025;
struct TY344226 {
NIM_BOOL Field0;
Tslotkind344025 Field1;
};
typedef TY344226 TY344229[256];
struct  PprocHEX3Aobjecttype344220  {
TY344221* blocks;
Tsym293834* sym;
TY344229 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs344029* args0, void* ClEnv);
void* ClEnv;
} Vmcallback344031;
struct TY344261 {
NimStringDesc* Field0;
Vmcallback344031 Field1;
};
struct  Tblock344017  {
Tsym293834* label;
TY344201* fixups;
};
struct  Vmargs344029  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode293802* currentexception;
};
struct Tnodeseq293796 {
  TGenericSeq Sup;
  Tnode293802* data[SEQ_DECL_SIZE];
};
struct Trunkseq269028 {
  TGenericSeq Sup;
  Trunk269026* data[SEQ_DECL_SIZE];
};
struct Ttypeseq293836 {
  TGenericSeq Sup;
  Ttype293840* data[SEQ_DECL_SIZE];
};
struct TY293929 {
  TGenericSeq Sup;
  Tinstantiation293824* data[SEQ_DECL_SIZE];
};
struct Tsymseq293804 {
  TGenericSeq Sup;
  Tsym293834* data[SEQ_DECL_SIZE];
};
struct Tidpairseq293848 {
  TGenericSeq Sup;
  Tidpair293846 data[SEQ_DECL_SIZE];
};
struct TY345144 {
  TGenericSeq Sup;
  Tinstantiationpair345010 data[SEQ_DECL_SIZE];
};
struct TY293960 {
  TGenericSeq Sup;
  TY293961 data[SEQ_DECL_SIZE];
};
struct TY344241 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY193083 {
  TGenericSeq Sup;
  Tlineinfo192336 data[SEQ_DECL_SIZE];
};
struct TY344260 {
  TGenericSeq Sup;
  TY344261 data[SEQ_DECL_SIZE];
};
struct TY344221 {
  TGenericSeq Sup;
  Tblock344017 data[SEQ_DECL_SIZE];
};
struct TY344201 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, sonslen_296351_850551059)(Tnode293802* n0);
N_NIMCALL(Tsym293834*, myimportmodule_349474_2178338529)(Tcontext345020* c0, Tnode293802* n0);
N_NIMCALL(NI32, checkmodulename_349051_2178338529)(Tnode293802* n0);
N_NIMCALL(NimStringDesc*, getmodulename_349009_2178338529)(Tnode293802* n0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
N_NIMCALL(NimStringDesc*, pathsubs_171084_2607990831)(NimStringDesc* p0, NimStringDesc* config0);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path0, TY128506* Result);
N_NIMCALL(NimStringDesc*, tofullpath_193261_155036129)(NI32 fileidx0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj0, TNimType* subclass0);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(void, localerror_197085_155036129)(Tlineinfo192336 info0, NimStringDesc* arg0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53419_1689653243)(Cell47305* c0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, decref_53001_1689653243)(Cell47305* c0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(Tident200010*, getident_200441_791273810)(NimStringDesc* identifier0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s0, NimStringDesc* sub0, NimStringDesc* by0);
N_NIMCALL(NimStringDesc*, rendertree_312044_382274130)(Tnode293802* n0, Trenderflag312004Set renderflags0);
N_NIMCALL(void, localerror_197080_155036129)(Tlineinfo192336 info0, Tmsgkind192002 msg0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr0, NimStringDesc* a0);
N_NIMCALL(NimStringDesc*, findmodule_171489_2607990831)(NimStringDesc* modulename0, NimStringDesc* currentmodule0);
N_NIMCALL(NI32, fileinfoidx_193007_155036129)(NimStringDesc* filename0);
N_NIMCALL(Tsym293834*, importmoduleas_349443_2178338529)(Tnode293802* n0, Tsym293834* realmodule0);
static N_INLINE(NI, len_294081_850551059)(Tnode293802* n0);
N_NIMCALL(Tsym293834*, createmodulealias_296838_850551059)(Tsym293834* s0, Tident200010* newident0, Tlineinfo192336 info0);
N_NIMCALL(void, message_197095_155036129)(Tlineinfo192336 info0, Tmsgkind192002 msg0, NimStringDesc* arg0);
N_NIMCALL(void, adddecl_347461_254525290)(Tcontext345020* c0, Tsym293834* sym0, Tlineinfo192336 info0);
N_NIMCALL(void, importallsymbolsexcept_349262_2178338529)(Tcontext345020* c0, Tsym293834* frommod0, Intset269030* exceptset0);
N_NIMCALL(Tsym293834*, inittabiter_300052_2984716966)(Ttabiter300050* ti0, Tstrtable293806 tab0);
N_NIMCALL(void, internalerror_197100_155036129)(Tlineinfo192336 info0, NimStringDesc* errmsg0);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e0, TNimType* typ0);
static N_INLINE(NIM_BOOL, isnil_269929_2627731572)(Intset269030* x0);
N_NIMCALL(NIM_BOOL, contains_269811_2627731572)(Intset269030* s0, NI key0);
N_NIMCALL(void, rawimportsymbol_349058_2178338529)(Tcontext345020* c0, Tsym293834* s0);
N_NIMCALL(Tsym293834*, strtableget_300045_2984716966)(Tstrtable293806 t0, Tident200010* name0);
N_NIMCALL(void, incl_269832_2627731572)(Intset269030* s0, NI key0);
N_NIMCALL(void, strtableadd_300040_2984716966)(Tstrtable293806* t0, Tsym293834* n0);
N_NIMCALL(Tsym293834*, initidentiter_300066_2984716966)(Tidentiter300063* ti0, Tstrtable293806 tab0, Tident200010* s0);
N_NIMCALL(Tsym293834*, nextidentiter_300072_2984716966)(Tidentiter300063* ti0, Tstrtable293806 tab0);
N_NIMCALL(void, addconverter_345426_893308950)(Tcontext345020* c0, Tsym293834* conv0);
static N_INLINE(NIM_BOOL, haspattern_298338_850551059)(Tsym293834* s0);
static N_INLINE(NIM_BOOL, isroutine_298324_850551059)(Tsym293834* s0);
N_NIMCALL(void, addpattern_345431_893308950)(Tcontext345020* c0, Tsym293834* p0);
N_NIMCALL(Tsym293834*, nextiter_300057_2984716966)(Ttabiter300050* ti0, Tstrtable293806 tab0);
N_NIMCALL(void, checkminsonslen_345962_893308950)(Tnode293802* n0, NI length0);
N_NIMCALL(Tnode293802*, newsymnode_295183_850551059)(Tsym293834* sym0);
N_NIMCALL(void, initintset_269885_2627731572)(Intset269030* Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(Tident200010*, considerquotedident_347004_254525290)(Tnode293802* n0);
N_NIMCALL(void, importsymbol_349200_2178338529)(Tcontext345020* c0, Tnode293802* n0, Tsym293834* frommod0);
N_NIMCALL(void, loadstub_336223_1724185294)(Tsym293834* s0);
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
extern TY342069 gimportmodule_342073_2355241294;
extern TNimType NTI293435; /* TSymKind */

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

static N_INLINE(void, incref_53419_1689653243)(Cell47305* c0) {
	(*c0).refcount = (NI)((NU64)((*c0).refcount) + (NU64)(((NI) 8)));
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

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_18839_1689653243), NIM_NIL);
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

N_NIMCALL(NimStringDesc*, getmodulename_349009_2178338529)(Tnode293802* n0) {
	NimStringDesc* volatile result0;
{	result0 = (NimStringDesc*)0;
	switch ((*n0).kind) {
	case ((Tnodekind293020) 20):
	case ((Tnodekind293020) 21):
	case ((Tnodekind293020) 22):
	{
		TSafePoint T2178338529_2;
		pushSafePoint(&T2178338529_2);
		T2178338529_2.status = _setjmp(T2178338529_2.context);
		if (T2178338529_2.status == 0) {
			NimStringDesc* LOC3;
			TY128506 LOC4;
			LOC3 = (NimStringDesc*)0;
			LOC3 = tofullpath_193261_155036129((*n0).info.fileindex);
			memset((void*)(&LOC4), 0, sizeof(LOC4));
			nossplitFile(LOC3, (&LOC4));
			result0 = pathsubs_171084_2607990831((*n0).kindU.S3.strval, LOC4.Field0);
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
				localerror_197085_155036129((*n0).info, LOC7);
				result0 = copyString((*n0).kindU.S3.strval);
				popCurrentException();
			}
		}
		if (T2178338529_2.status != 0) reraiseException();
	}
	break;
	case ((Tnodekind293020) 2):
	{
		result0 = copyString((*(*n0).kindU.S5.ident).s);
	}
	break;
	case ((Tnodekind293020) 3):
	{
		result0 = copyString((*(*(*n0).kindU.S4.sym).name).s);
	}
	break;
	case ((Tnodekind293020) 29):
	case ((Tnodekind293020) 30):
	{
		NimStringDesc* LOC18;
		{
			NIM_BOOL LOC13;
			Tident200010* LOC15;
			LOC13 = (NIM_BOOL)0;
			LOC13 = ((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind293020) 2));
			if (!(LOC13)) goto LA14;
			LOC15 = (Tident200010*)0;
			LOC15 = getident_200441_791273810(((NimStringDesc*) &T2178338529_4));
			LOC13 = ((*(*(*n0).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident).Sup.id == (*LOC15).Sup.id);
			LA14: ;
			if (!LOC13) goto LA16;
			(*n0).kind = ((Tnodekind293020) 78);
			asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 0)]), (*n0).kindU.S6.sons->data[((NI) 1)]);
			asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 1)]), (*n0).kindU.S6.sons->data[((NI) 2)]);
			(*n0).kindU.S6.sons = (Tnodeseq293796*) setLengthSeq(&((*n0).kindU.S6.sons)->Sup, sizeof(Tnode293802*), ((NI) 2));
			result0 = getmodulename_349009_2178338529((*n0).kindU.S6.sons->data[((NI) 0)]);
			goto BeforeRet;
		}
		LA16: ;
		LOC18 = (NimStringDesc*)0;
		LOC18 = rendertree_312044_382274130(n0, 4);
		result0 = nsuReplaceStr(LOC18, ((NimStringDesc*) &T2178338529_5), ((NimStringDesc*) &T2178338529_6));
	}
	break;
	case ((Tnodekind293020) 45):
	{
		NimStringDesc* LOC20;
		LOC20 = (NimStringDesc*)0;
		LOC20 = rendertree_312044_382274130(n0, 4);
		result0 = nsuReplaceStr(LOC20, ((NimStringDesc*) &T2178338529_7), ((NimStringDesc*) &T2178338529_8));
	}
	break;
	case ((Tnodekind293020) 78):
	{
		result0 = getmodulename_349009_2178338529((*n0).kindU.S6.sons->data[((NI) 0)]);
	}
	break;
	default:
	{
		NimStringDesc* LOC23;
		NimStringDesc* LOC24;
		LOC23 = (NimStringDesc*)0;
		LOC23 = rendertree_312044_382274130(n0, 0);
		LOC24 = (NimStringDesc*)0;
		LOC24 = nsuFormatSingleElem(((NimStringDesc*) &T2178338529_9), LOC23);
		localerror_197080_155036129((*n0).info, ((Tmsgkind192002) 4), LOC24);
		result0 = copyString(((NimStringDesc*) &T2178338529_6));
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI32, checkmodulename_349051_2178338529)(Tnode293802* n0) {
	NI32 result0;
	NimStringDesc* modulename0;
	NimStringDesc* fullpath0;
	NimStringDesc* LOC1;
	result0 = (NI32)0;
	modulename0 = getmodulename_349009_2178338529(n0);
	LOC1 = (NimStringDesc*)0;
	LOC1 = tofullpath_193261_155036129((*n0).info.fileindex);
	fullpath0 = findmodule_171489_2607990831(modulename0, LOC1);
	{
		if (!((fullpath0 ? fullpath0->Sup.len : 0) == ((NI) 0))) goto LA4;
		localerror_197080_155036129((*n0).info, ((Tmsgkind192002) 3), modulename0);
		result0 = ((NI32) -1);
	}
	goto LA2;
	LA4: ;
	{
		result0 = fileinfoidx_193007_155036129(fullpath0);
	}
	LA2: ;
	return result0;
}

static N_INLINE(NI, len_294081_850551059)(Tnode293802* n0) {
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

N_NIMCALL(Tsym293834*, importmoduleas_349443_2178338529)(Tnode293802* n0, Tsym293834* realmodule0) {
	Tsym293834* result0;
	result0 = (Tsym293834*)0;
	result0 = realmodule0;
	{
		if (!!(((*n0).kind == ((Tnodekind293020) 78)))) goto LA3;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NI LOC7;
		LOC6 = (NIM_BOOL)0;
		LOC7 = (NI)0;
		LOC7 = len_294081_850551059(n0);
		LOC6 = !((LOC7 == ((NI) 2)));
		if (LOC6) goto LA8;
		LOC6 = !(((*(*n0).kindU.S6.sons->data[((NI) 1)]).kind == ((Tnodekind293020) 2)));
		LA8: ;
		if (!LOC6) goto LA9;
		localerror_197080_155036129((*n0).info, ((Tmsgkind192002) 4), ((NimStringDesc*) &T2178338529_10));
	}
	goto LA1;
	LA9: ;
	{
		if (!!(((*(*(*n0).kindU.S6.sons->data[((NI) 1)]).kindU.S5.ident).Sup.id == (*(*realmodule0).name).Sup.id))) goto LA12;
		result0 = createmodulealias_296838_850551059(realmodule0, (*(*n0).kindU.S6.sons->data[((NI) 1)]).kindU.S5.ident, (*realmodule0).info);
	}
	goto LA1;
	LA12: ;
	LA1: ;
	return result0;
}

N_NIMCALL(Tsym293834*, myimportmodule_349474_2178338529)(Tcontext345020* c0, Tnode293802* n0) {
	Tsym293834* result0;
	NI32 f0;
	result0 = (Tsym293834*)0;
	f0 = checkmodulename_349051_2178338529(n0);
	{
		Tsym293834* LOC5;
		if (!!((f0 == ((NI32) -1)))) goto LA3;
		LOC5 = (Tsym293834*)0;
		LOC5 = gimportmodule_342073_2355241294((*c0).module, f0);
		result0 = importmoduleas_349443_2178338529(n0, LOC5);
		{
			NIM_BOOL LOC8;
			LOC8 = (NIM_BOOL)0;
			LOC8 = ((*result0).info.fileindex == (*(*c0).module).info.fileindex);
			if (!(LOC8)) goto LA9;
			LOC8 = ((*result0).info.fileindex == (*n0).info.fileindex);
			LA9: ;
			if (!LOC8) goto LA10;
			localerror_197080_155036129((*n0).info, ((Tmsgkind192002) 4), ((NimStringDesc*) &T2178338529_11));
		}
		LA10: ;
		{
			if (!(((*result0).flags &(1U<<((NU)(((Tsymflag293184) 19))&31U)))!=0)) goto LA14;
			message_197095_155036129((*n0).info, ((Tmsgkind192002) 241), (*(*result0).name).s);
		}
		LA14: ;
	}
	LA3: ;
	return result0;
}

static N_INLINE(NIM_BOOL, isnil_269929_2627731572)(Intset269030* x0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = (*x0).head == 0;
	return result0;
}

static N_INLINE(NIM_BOOL, isroutine_298324_850551059)(Tsym293834* s0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = ((258048 &(1U<<((NU)((*s0).kind)&31U)))!=0);
	return result0;
}

static N_INLINE(NIM_BOOL, haspattern_298338_850551059)(Tsym293834* s0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = isroutine_298324_850551059(s0);
	if (!(LOC1)) goto LA2;
	LOC1 = !(((*(*(*s0).ast).kindU.S6.sons->data[((NI) 1)]).kind == ((Tnodekind293020) 1)));
	LA2: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(void, rawimportsymbol_349058_2178338529)(Tcontext345020* c0, Tsym293834* s0) {
	Tsym293834* check0;
	check0 = strtableget_300045_2984716966((*(*c0).importtable).symbols, (*s0).name);
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
			incl_269832_2627731572((&(*c0).ambiguoussymbols), (*s0).Sup.id);
			incl_269832_2627731572((&(*c0).ambiguoussymbols), (*check0).Sup.id);
		}
		LA9: ;
	}
	LA5: ;
	strtableadd_300040_2984716966((&(*(*c0).importtable).symbols), s0);
	{
		Ttype293840* etyp0;
		if (!((*s0).kind == ((Tsymkind293435) 7))) goto LA13;
		etyp0 = (*s0).typ;
		{
			NIM_BOOL LOC17;
			LOC17 = (NIM_BOOL)0;
			LOC17 = ((16386 &((NU64)1<<((NU)((*etyp0).kind)&63U)))!=0);
			if (!(LOC17)) goto LA18;
			LOC17 = !((((*s0).flags &(1U<<((NU)(((Tsymflag293184) 9))&31U)))!=0));
			LA18: ;
			if (!LOC17) goto LA19;
			{
				NI j_349137_2178338529;
				NI HEX3Atmp_349193_2178338529;
				NI LOC22;
				NI res_349196_2178338529;
				j_349137_2178338529 = (NI)0;
				HEX3Atmp_349193_2178338529 = (NI)0;
				LOC22 = (NI)0;
				LOC22 = sonslen_296351_850551059((*etyp0).n);
				HEX3Atmp_349193_2178338529 = (NI)(LOC22 - ((NI) 1));
				res_349196_2178338529 = ((NI) 0);
				{
					while (1) {
						Tsym293834* e0;
						Tidentiter300063 it0;
						if (!(res_349196_2178338529 <= HEX3Atmp_349193_2178338529)) goto LA24;
						j_349137_2178338529 = res_349196_2178338529;
						e0 = (*(*(*etyp0).n).kindU.S6.sons->data[j_349137_2178338529]).kindU.S4.sym;
						{
							if (!!(((*e0).kind == ((Tsymkind293435) 19)))) goto LA27;
							internalerror_197100_155036129((*s0).info, ((NimStringDesc*) &T2178338529_13));
						}
						LA27: ;
						memset((void*)(&it0), 0, sizeof(it0));
						check0 = initidentiter_300066_2984716966((&it0), (*(*c0).importtable).symbols, (*e0).name);
						{
							while (1) {
								if (!!((check0 == NIM_NIL))) goto LA30;
								{
									if (!((*check0).Sup.id == (*e0).Sup.id)) goto LA33;
									e0 = NIM_NIL;
									goto LA29;
								}
								LA33: ;
								check0 = nextidentiter_300072_2984716966((&it0), (*(*c0).importtable).symbols);
							} LA30: ;
						} LA29: ;
						{
							if (!!((e0 == NIM_NIL))) goto LA37;
							rawimportsymbol_349058_2178338529(c0, e0);
						}
						LA37: ;
						res_349196_2178338529 += ((NI) 1);
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
			if (!((*s0).kind == ((Tsymkind293435) 15))) goto LA42;
			addconverter_345426_893308950(c0, s0);
		}
		LA42: ;
		{
			NIM_BOOL LOC46;
			LOC46 = (NIM_BOOL)0;
			LOC46 = haspattern_298338_850551059(s0);
			if (!LOC46) goto LA47;
			addpattern_345431_893308950(c0, s0);
		}
		LA47: ;
	}
	LA11: ;
}

N_NIMCALL(void, importallsymbolsexcept_349262_2178338529)(Tcontext345020* c0, Tsym293834* frommod0, Intset269030* exceptset0) {
	Ttabiter300050 i0;
	Tsym293834* s0;
	memset((void*)(&i0), 0, sizeof(i0));
	s0 = inittabiter_300052_2984716966((&i0), (*frommod0).kindU.S3.tab);
	{
		while (1) {
			if (!!((s0 == NIM_NIL))) goto LA2;
			{
				if (!!(((*s0).kind == ((Tsymkind293435) 6)))) goto LA5;
				{
					if (!!(((*s0).kind == ((Tsymkind293435) 19)))) goto LA9;
					{
						NimStringDesc* LOC15;
						if (!!(((21755776 &(1U<<((NU)((*s0).kind)&31U)))!=0))) goto LA13;
						LOC15 = (NimStringDesc*)0;
						LOC15 = rawNewString(reprEnum((NI)(*s0).kind, (&NTI293435))->Sup.len + 18);
appendString(LOC15, ((NimStringDesc*) &T2178338529_12));
appendString(LOC15, reprEnum((NI)(*s0).kind, (&NTI293435)));
						internalerror_197100_155036129((*s0).info, LOC15);
					}
					LA13: ;
					{
						NIM_BOOL LOC18;
						NIM_BOOL LOC20;
						LOC18 = (NIM_BOOL)0;
						LOC18 = isnil_269929_2627731572(exceptset0);
						if (LOC18) goto LA19;
						LOC20 = (NIM_BOOL)0;
						LOC20 = contains_269811_2627731572(exceptset0, (*(*s0).name).Sup.id);
						LOC18 = !(LOC20);
						LA19: ;
						if (!LOC18) goto LA21;
						rawimportsymbol_349058_2178338529(c0, s0);
					}
					LA21: ;
				}
				LA9: ;
			}
			LA5: ;
			s0 = nextiter_300057_2984716966((&i0), (*frommod0).kindU.S3.tab);
		} LA2: ;
	}
}

N_NIMCALL(Tnode293802*, evalimport_349001_2178338529)(Tcontext345020* c0, Tnode293802* n0) {
	Tnode293802* result0;
	Intset269030 emptyset0;
	result0 = (Tnode293802*)0;
	result0 = n0;
	memset((void*)(&emptyset0), 0, sizeof(emptyset0));
	{
		NI i_349512_2178338529;
		NI HEX3Atmp_349529_2178338529;
		NI LOC2;
		NI res_349532_2178338529;
		i_349512_2178338529 = (NI)0;
		HEX3Atmp_349529_2178338529 = (NI)0;
		LOC2 = (NI)0;
		LOC2 = sonslen_296351_850551059(n0);
		HEX3Atmp_349529_2178338529 = (NI)(LOC2 - ((NI) 1));
		res_349532_2178338529 = ((NI) 0);
		{
			while (1) {
				Tsym293834* m0;
				if (!(res_349532_2178338529 <= HEX3Atmp_349529_2178338529)) goto LA4;
				i_349512_2178338529 = res_349532_2178338529;
				m0 = myimportmodule_349474_2178338529(c0, (*n0).kindU.S6.sons->data[i_349512_2178338529]);
				{
					if (!!((m0 == NIM_NIL))) goto LA7;
					adddecl_347461_254525290(c0, m0, (*n0).info);
					importallsymbolsexcept_349262_2178338529(c0, m0, (&emptyset0));
				}
				LA7: ;
				res_349532_2178338529 += ((NI) 1);
			} LA4: ;
		}
	}
	return result0;
}

N_NIMCALL(Tnode293802*, evalimportexcept_349587_2178338529)(Tcontext345020* c0, Tnode293802* n0) {
	Tnode293802* result0;
	Tsym293834* m0;
	result0 = (Tnode293802*)0;
	result0 = n0;
	checkminsonslen_345962_893308950(n0, ((NI) 2));
	m0 = myimportmodule_349474_2178338529(c0, (*n0).kindU.S6.sons->data[((NI) 0)]);
	{
		Intset269030 exceptset0;
		if (!!((m0 == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 0)]), newsymnode_295183_850551059(m0));
		adddecl_347461_254525290(c0, m0, (*n0).info);
		memset((void*)(&exceptset0), 0, sizeof(exceptset0));
		chckNil((void*)(&exceptset0));
		memset((void*)(&exceptset0), 0, sizeof(exceptset0));
		initintset_269885_2627731572((&exceptset0));
		{
			NI i_349619_2178338529;
			NI HEX3Atmp_349624_2178338529;
			NI LOC6;
			NI res_349627_2178338529;
			i_349619_2178338529 = (NI)0;
			HEX3Atmp_349624_2178338529 = (NI)0;
			LOC6 = (NI)0;
			LOC6 = sonslen_296351_850551059(n0);
			HEX3Atmp_349624_2178338529 = (NI)(LOC6 - ((NI) 1));
			res_349627_2178338529 = ((NI) 1);
			{
				while (1) {
					Tident200010* ident0;
					if (!(res_349627_2178338529 <= HEX3Atmp_349624_2178338529)) goto LA8;
					i_349619_2178338529 = res_349627_2178338529;
					ident0 = considerquotedident_347004_254525290((*n0).kindU.S6.sons->data[i_349619_2178338529]);
					incl_269832_2627731572((&exceptset0), (*ident0).Sup.id);
					res_349627_2178338529 += ((NI) 1);
				} LA8: ;
			}
		}
		importallsymbolsexcept_349262_2178338529(c0, m0, (&exceptset0));
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, importsymbol_349200_2178338529)(Tcontext345020* c0, Tnode293802* n0, Tsym293834* frommod0) {
	Tident200010* ident0;
	Tsym293834* s0;
	ident0 = considerquotedident_347004_254525290(n0);
	s0 = strtableget_300045_2984716966((*frommod0).kindU.S3.tab, ident0);
	{
		if (!(s0 == NIM_NIL)) goto LA3;
		localerror_197080_155036129((*n0).info, ((Tmsgkind192002) 63), (*ident0).s);
	}
	goto LA1;
	LA3: ;
	{
		{
			if (!((*s0).kind == ((Tsymkind293435) 22))) goto LA8;
			loadstub_336223_1724185294(s0);
		}
		LA8: ;
		{
			if (!!(((21755776 &(1U<<((NU)((*s0).kind)&31U)))!=0))) goto LA12;
			internalerror_197100_155036129((*n0).info, ((NimStringDesc*) &T2178338529_14));
		}
		LA12: ;
		switch ((*s0).kind) {
		case ((Tsymkind293435) 12):
		case ((Tsymkind293435) 17):
		case ((Tsymkind293435) 16):
		case ((Tsymkind293435) 14):
		case ((Tsymkind293435) 13):
		case ((Tsymkind293435) 15):
		{
			Tidentiter300063 it0;
			Tsym293834* e0;
			memset((void*)(&it0), 0, sizeof(it0));
			e0 = initidentiter_300066_2984716966((&it0), (*frommod0).kindU.S3.tab, (*s0).name);
			{
				while (1) {
					if (!!((e0 == NIM_NIL))) goto LA16;
					{
						if (!!(((*(*e0).name).Sup.id == (*(*s0).name).Sup.id))) goto LA19;
						internalerror_197100_155036129((*n0).info, ((NimStringDesc*) &T2178338529_15));
					}
					LA19: ;
					rawimportsymbol_349058_2178338529(c0, e0);
					e0 = nextidentiter_300072_2984716966((&it0), (*frommod0).kindU.S3.tab);
				} LA16: ;
			}
		}
		break;
		default:
		{
			rawimportsymbol_349058_2178338529(c0, s0);
		}
		break;
		}
	}
	LA1: ;
}

N_NIMCALL(Tnode293802*, evalfrom_349005_2178338529)(Tcontext345020* c0, Tnode293802* n0) {
	Tnode293802* result0;
	Tsym293834* m0;
	result0 = (Tnode293802*)0;
	result0 = n0;
	checkminsonslen_345962_893308950(n0, ((NI) 2));
	m0 = myimportmodule_349474_2178338529(c0, (*n0).kindU.S6.sons->data[((NI) 0)]);
	{
		if (!!((m0 == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 0)]), newsymnode_295183_850551059(m0));
		adddecl_347461_254525290(c0, m0, (*n0).info);
		{
			NI i_349567_2178338529;
			NI HEX3Atmp_349580_2178338529;
			NI LOC6;
			NI res_349583_2178338529;
			i_349567_2178338529 = (NI)0;
			HEX3Atmp_349580_2178338529 = (NI)0;
			LOC6 = (NI)0;
			LOC6 = sonslen_296351_850551059(n0);
			HEX3Atmp_349580_2178338529 = (NI)(LOC6 - ((NI) 1));
			res_349583_2178338529 = ((NI) 1);
			{
				while (1) {
					if (!(res_349583_2178338529 <= HEX3Atmp_349580_2178338529)) goto LA8;
					i_349567_2178338529 = res_349583_2178338529;
					{
						if (!!(((*(*n0).kindU.S6.sons->data[i_349567_2178338529]).kind == ((Tnodekind293020) 23)))) goto LA11;
						importsymbol_349200_2178338529(c0, (*n0).kindU.S6.sons->data[i_349567_2178338529], m0);
					}
					LA11: ;
					res_349583_2178338529 += ((NI) 1);
				} LA8: ;
			}
		}
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, importallsymbols_349324_2178338529)(Tcontext345020* c0, Tsym293834* frommod0) {
	Intset269030 exceptset0;
	memset((void*)(&exceptset0), 0, sizeof(exceptset0));
	importallsymbolsexcept_349262_2178338529(c0, frommod0, (&exceptset0));
}
NIM_EXTERNC N_NOINLINE(void, compiler_importerInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_importerDatInit000)(void) {
}

