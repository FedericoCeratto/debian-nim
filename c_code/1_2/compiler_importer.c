/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
typedef struct Tnode265794 Tnode265794;
typedef struct Tcontext316020 Tcontext316020;
typedef struct Intset242031 Intset242031;
typedef struct Trunk242027 Trunk242027;
typedef struct Trunkseq242029 Trunkseq242029;
typedef struct Tsym265826 Tsym265826;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype265832 Ttype265832;
typedef struct Tlineinfo187336 Tlineinfo187336;
typedef struct Tident195012 Tident195012;
typedef struct Tnodeseq265788 Tnodeseq265788;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct TY124315 TY124315;
typedef struct Cell47704 Cell47704;
typedef struct Cellseq47720 Cellseq47720;
typedef struct Gcheap50218 Gcheap50218;
typedef struct Gcstack50216 Gcstack50216;
typedef struct Memregion29886 Memregion29886;
typedef struct Smallchunk29840 Smallchunk29840;
typedef struct Llchunk29880 Llchunk29880;
typedef struct Bigchunk29842 Bigchunk29842;
typedef struct Intset29814 Intset29814;
typedef struct Trunk29810 Trunk29810;
typedef struct Avlnode29884 Avlnode29884;
typedef struct Gcstat50214 Gcstat50214;
typedef struct Cellset47716 Cellset47716;
typedef struct Pagedesc47712 Pagedesc47712;
typedef struct Tidobj195006 Tidobj195006;
typedef struct Ttypeseq265828 Ttypeseq265828;
typedef struct Tscope265820 Tscope265820;
typedef struct TY265927 TY265927;
typedef struct Tstrtable265798 Tstrtable265798;
typedef struct Tsymseq265796 Tsymseq265796;
typedef struct Tloc265808 Tloc265808;
typedef struct Ropeobj175006 Ropeobj175006;
typedef struct Tlib265812 Tlib265812;
typedef struct Tpasscontext313002 Tpasscontext313002;
typedef struct Tproccon316008 Tproccon316008;
typedef struct Tlinkedlist145016 Tlinkedlist145016;
typedef struct Tlistentry145010 Tlistentry145010;
typedef struct Tidtable265844 Tidtable265844;
typedef struct Tidpairseq265842 Tidpairseq265842;
typedef struct Tctx315036 Tctx315036;
typedef struct TY316144 TY316144;
typedef struct Ttabiter272075 Ttabiter272075;
typedef struct Tidentiter272088 Tidentiter272088;
typedef struct Basechunk29838 Basechunk29838;
typedef struct Freecell29830 Freecell29830;
typedef struct Tinstantiation265816 Tinstantiation265816;
typedef struct Tidpair265840 Tidpair265840;
typedef struct TY315242 TY315242;
typedef struct TY188090 TY188090;
typedef struct PprocHEX3Aobjecttype315221 PprocHEX3Aobjecttype315221;
typedef struct TY315261 TY315261;
typedef struct Tinstantiationpair316010 Tinstantiationpair316010;
typedef struct TY265917 TY265917;
typedef struct TY315222 TY315222;
typedef struct TY315227 TY315227;
typedef struct TY315262 TY315262;
typedef struct Vmargs315030 Vmargs315030;
typedef struct Tblock315018 Tblock315018;
typedef struct TY315202 TY315202;
struct  Intset242031  {
NI counter;
NI max;
Trunk242027* head;
Trunkseq242029* data;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo187336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag265427Set;
typedef NU8 Tnodekind265020;
struct  Tnode265794  {
Ttype265832* typ;
Tlineinfo187336 info;
Tnodeflag265427Set flags;
Tnodekind265020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym265826* sym;
} S4;
struct {Tident195012* ident;
} S5;
struct {Tnodeseq265788* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
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
} TY18011;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY18011 raiseAction;
};
struct TY124315 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
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
struct  Cell47704  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47720  {
NI len;
NI cap;
Cell47704** d;
};
typedef Smallchunk29840* TY29901[512];
typedef Trunk29810* Trunkbuckets29812[256];
struct  Intset29814  {
Trunkbuckets29812 data;
};
struct  Memregion29886  {
NI minlargeobj;
NI maxlargeobj;
TY29901 freesmallchunks;
Llchunk29880* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29842* freechunkslist;
Intset29814 chunkstarts;
Avlnode29884* root;
Avlnode29884* deleted;
Avlnode29884* last;
Avlnode29884* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47716  {
NI counter;
NI max;
Pagedesc47712* head;
Pagedesc47712** data;
};
struct  Gcheap50218  {
Gcstack50216* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47720 zct;
Cellseq47720 decstack;
Cellseq47720 tempstack;
NI recgclock;
Memregion29886 region;
Gcstat50214 stat;
Cellset47716 marked;
Cellseq47720 additionalroots;
};
struct  Tidobj195006  {
  TNimObject Sup;
NI id;
};
struct  Tident195012  {
  Tidobj195006 Sup;
NimStringDesc* s;
Tident195012* next;
NI h;
};
typedef NU8 Tsymkind265435;
struct  Tstrtable265798  {
NI counter;
Tsymseq265796* data;
};
typedef NU8 Tmagic265525;
typedef NU32 Tsymflag265184Set;
typedef NU32 Toption166009Set;
typedef NU8 Tlockind265800;
typedef NU8 Tstorageloc265804;
typedef NU16 Tlocflag265802Set;
struct  Tloc265808  {
Tlockind265800 k;
Tstorageloc265804 s;
Tlocflag265802Set flags;
Ttype265832* t;
Ropeobj175006* r;
Ropeobj175006* heaproot;
};
struct  Tsym265826  {
  Tidobj195006 Sup;
Tsymkind265435 kind;
union{
struct {Ttypeseq265828* typeinstcache;
Tscope265820* typscope;
} S1;
struct {TY265927* procinstcache;
Tsym265826* gcunsafetyreason;
} S2;
struct {TY265927* usedgenerics;
Tstrtable265798 tab;
} S3;
struct {Tsym265826* guard;
NI bitsize;
} S4;
} kindU;
Tmagic265525 magic;
Ttype265832* typ;
Tident195012* name;
Tlineinfo187336 info;
Tsym265826* owner;
Tsymflag265184Set flags;
Tnode265794* ast;
Toption166009Set options;
NI position;
NI offset;
Tloc265808 loc;
Tlib265812* annex;
Tnode265794* constraint;
};
typedef NU8 Trenderflag284006Set;
typedef NU16 Tmsgkind187002;
typedef N_NIMCALL_PTR(Tsym265826*, TY313074) (Tsym265826* m0, NI32 fileidx0);
struct  Tpasscontext313002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tlinkedlist145016  {
Tlistentry145010* head;
Tlistentry145010* tail;
NI counter;
};
struct  Tidtable265844  {
NI counter;
Tidpairseq265842* data;
};
typedef N_NIMCALL_PTR(Tnode265794*, TY316075) (Tcontext316020* c0, Tnode265794* n0);
typedef NU16 Texprflag316012Set;
typedef N_NIMCALL_PTR(Tnode265794*, TY316080) (Tcontext316020* c0, Tnode265794* n0, Texprflag316012Set flags0);
typedef N_NIMCALL_PTR(Tnode265794*, TY316088) (Tcontext316020* c0, Tnode265794* n0, Texprflag316012Set flags0);
typedef N_NIMCALL_PTR(Tnode265794*, TY316096) (Tcontext316020* c0, Tnode265794* n0);
typedef N_NIMCALL_PTR(Tnode265794*, TY316101) (Tcontext316020* c0, Tnode265794* n0, Texprflag316012Set flags0);
typedef N_NIMCALL_PTR(Tnode265794*, TY316109) (Tcontext316020* c0, Tnode265794* n0);
typedef NU32 Tsymkind265435Set;
typedef N_NIMCALL_PTR(Tnode265794*, TY316114) (Tcontext316020* c0, Tnode265794* n0, Tnode265794* norig0, Tsymkind265435Set filter0);
typedef N_NIMCALL_PTR(Ttype265832*, TY316121) (Tcontext316020* c0, Tnode265794* n0, Ttype265832* prev0);
typedef struct {
N_NIMCALL_PTR(Tnode265794*, ClPrc) (Tcontext316020* c0, Tidtable265844 pt0, Tnode265794* n0, void* ClEnv);
void* ClEnv;
} TY316127;
typedef struct {
N_NIMCALL_PTR(Tsym265826*, ClPrc) (Tcontext316020* c0, Tsym265826* fn0, Tidtable265844 pt0, Tlineinfo187336 info0, void* ClEnv);
void* ClEnv;
} TY316133;
typedef NU8 Ttypeattachedop316016;
typedef N_NIMCALL_PTR(Tsym265826*, TY316149) (Tcontext316020* c0, Tsym265826* dc0, Ttype265832* t0, Tlineinfo187336 info0, Ttypeattachedop316016 op0);
struct  Tcontext316020  {
  Tpasscontext313002 Sup;
Tsym265826* module;
Tscope265820* currentscope;
Tscope265820* importtable;
Tscope265820* toplevelscope;
Tproccon316008* p;
Tsymseq265796* friendmodules;
NI instcounter;
Intset242031 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq265796* converters;
Tsymseq265796* patterns;
Tlinkedlist145016 optionstack;
Tidtable265844 symmapping;
Tlinkedlist145016 libs;
TY316075 semconstexpr;
TY316080 semexpr;
TY316088 semtryexpr;
TY316096 semtryconstexpr;
TY316101 semoperand;
TY316109 semconstboolexpr;
TY316114 semoverloadedcall;
TY316121 semtypenode;
TY316127 seminferredlambda;
TY316133 semgenerateinstance;
Intset242031 includedfiles;
Tstrtable265798 userpragmas;
Tctx315036* evalcontext;
Intset242031 unknownidents;
TY316144* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY316149 insttypeboundop;
Tident195012* selfname;
Tstrtable265798 signatures;
};
typedef NU8 Tsymflag265184;
struct  Ttabiter272075  {
NI h;
};
struct  Tscope265820  {
NI depthlevel;
Tstrtable265798 symbols;
Tscope265820* parent;
};
typedef NU8 Ttypekind265244;
typedef NU8 Tcallingconvention265002;
typedef NU32 Ttypeflag265431Set;
struct  Ttype265832  {
  Tidobj195006 Sup;
Ttypekind265244 kind;
Tcallingconvention265002 callconv;
Ttypeflag265431Set flags;
Ttypeseq265828* sons;
Tnode265794* n;
Tsym265826* owner;
Tsym265826* sym;
Tsym265826* destructor;
Tsym265826* deepcopy;
Tsym265826* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc265808 loc;
};
struct  Tidentiter272088  {
NI h;
Tident195012* name;
};
typedef NI TY29819[8];
struct  Trunk242027  {
Trunk242027* next;
NI key;
TY29819 bits;
};
struct  Gcstack50216  {
Gcstack50216* prev;
Gcstack50216* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29838  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29840  {
  Basechunk29838 Sup;
Smallchunk29840* next;
Smallchunk29840* prev;
Freecell29830* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29880  {
NI size;
NI acc;
Llchunk29880* next;
};
struct  Bigchunk29842  {
  Basechunk29838 Sup;
Bigchunk29842* next;
Bigchunk29842* prev;
NI align;
NF data;
};
struct  Trunk29810  {
Trunk29810* next;
NI key;
TY29819 bits;
};
typedef Avlnode29884* TY29891[2];
struct  Avlnode29884  {
TY29891 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47712  {
Pagedesc47712* next;
NI key;
TY29819 bits;
};
struct  Ropeobj175006  {
  TNimObject Sup;
Ropeobj175006* left;
Ropeobj175006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry145010  {
  TNimObject Sup;
Tlistentry145010* prev;
Tlistentry145010* next;
};
typedef NU8 Tlibkind265810;
struct  Tlib265812  {
  Tlistentry145010 Sup;
Tlibkind265810 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj175006* name;
Tnode265794* path;
};
struct  Tproccon316008  {
Tsym265826* owner;
Tsym265826* resultsym;
Tsym265826* selfsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon316008* next;
NIM_BOOL wasforwarded;
Tnode265794* bracketexpr;
};
struct  Tidpair265840  {
Tidobj195006* key;
TNimObject* val;
};
typedef NU8 Tevalmode315020;
typedef NU8 Tsandboxflag315022Set;
struct  Tctx315036  {
  Tpasscontext313002 Sup;
TY315242* code;
TY188090* debug;
Tnode265794* globals;
Tnode265794* constants;
Ttypeseq265828* types;
Tnode265794* currentexceptiona;
Tnode265794* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype315221* prc;
Tsym265826* module;
Tnode265794* callsite;
Tevalmode315020 mode;
Tsandboxflag315022Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo187336 comesfromheuristic;
TY315261* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair316010  {
Tsym265826* genericsym;
Tinstantiation265816* inst;
};
struct  Freecell29830  {
Freecell29830* next;
NI zerofield;
};
struct  Tinstantiation265816  {
Tsym265826* sym;
Ttypeseq265828* concretetypes;
TY265917* usedby;
NI compilesid;
};
typedef NU8 Tslotkind315026;
struct TY315227 {
NIM_BOOL Field0;
Tslotkind315026 Field1;
};
typedef TY315227 TY315230[256];
struct  PprocHEX3Aobjecttype315221  {
TY315222* blocks;
Tsym265826* sym;
TY315230 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs315030* args0, void* ClEnv);
void* ClEnv;
} Vmcallback315032;
struct TY315262 {
NimStringDesc* Field0;
Vmcallback315032 Field1;
};
struct  Tblock315018  {
Tsym265826* label;
TY315202* fixups;
};
struct  Vmargs315030  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode265794* currentexception;
};
struct Tnodeseq265788 {
  TGenericSeq Sup;
  Tnode265794* data[SEQ_DECL_SIZE];
};
struct Trunkseq242029 {
  TGenericSeq Sup;
  Trunk242027* data[SEQ_DECL_SIZE];
};
struct Ttypeseq265828 {
  TGenericSeq Sup;
  Ttype265832* data[SEQ_DECL_SIZE];
};
struct TY265927 {
  TGenericSeq Sup;
  Tinstantiation265816* data[SEQ_DECL_SIZE];
};
struct Tsymseq265796 {
  TGenericSeq Sup;
  Tsym265826* data[SEQ_DECL_SIZE];
};
struct Tidpairseq265842 {
  TGenericSeq Sup;
  Tidpair265840 data[SEQ_DECL_SIZE];
};
struct TY316144 {
  TGenericSeq Sup;
  Tinstantiationpair316010 data[SEQ_DECL_SIZE];
};
struct TY315242 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY188090 {
  TGenericSeq Sup;
  Tlineinfo187336 data[SEQ_DECL_SIZE];
};
struct TY315261 {
  TGenericSeq Sup;
  TY315262 data[SEQ_DECL_SIZE];
};
struct TY265917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY315222 {
  TGenericSeq Sup;
  Tblock315018 data[SEQ_DECL_SIZE];
};
struct TY315202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, sonslen_268351_850551059)(Tnode265794* n0);
N_NIMCALL(Tsym265826*, myimportmodule_320474_2178338529)(Tcontext316020* c0, Tnode265794* n0);
N_NIMCALL(NI32, checkmodulename_320051_2178338529)(Tnode265794* n0);
N_NIMCALL(NimStringDesc*, getmodulename_320009_2178338529)(Tnode265794* n0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
N_NIMCALL(NimStringDesc*, pathsubs_166613_2607990831)(NimStringDesc* p0, NimStringDesc* config0);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path0, TY124315* Result);
N_NIMCALL(NimStringDesc*, tofullpath_188270_155036129)(NI32 fileidx0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj0, TNimType* subclass0);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(void, localerror_192085_155036129)(Tlineinfo187336 info0, NimStringDesc* arg0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53819_1689653243)(Cell47704* c0);
static N_INLINE(Cell47704*, usrtocell_51840_1689653243)(void* usr0);
static N_INLINE(void, decref_53401_1689653243)(Cell47704* c0);
static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47704* c0);
N_NOINLINE(void, addzct_51817_1689653243)(Cellseq47720* s0, Cell47704* c0);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(Tident195012*, getident_195441_791273810)(NimStringDesc* identifier0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s0, NimStringDesc* sub0, NimStringDesc* by0);
N_NIMCALL(NimStringDesc*, rendertree_284046_382274130)(Tnode265794* n0, Trenderflag284006Set renderflags0);
N_NIMCALL(void, localerror_192080_155036129)(Tlineinfo187336 info0, Tmsgkind187002 msg0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr0, NimStringDesc* a0);
N_NIMCALL(NimStringDesc*, findmodule_167484_2607990831)(NimStringDesc* modulename0, NimStringDesc* currentmodule0);
N_NIMCALL(NI32, fileinfoidx_188016_155036129)(NimStringDesc* filename0);
N_NIMCALL(Tsym265826*, importmoduleas_320443_2178338529)(Tnode265794* n0, Tsym265826* realmodule0);
static N_INLINE(NI, len_266080_850551059)(Tnode265794* n0);
N_NIMCALL(Tsym265826*, createmodulealias_268838_850551059)(Tsym265826* s0, Tident195012* newident0, Tlineinfo187336 info0);
N_NIMCALL(void, message_192095_155036129)(Tlineinfo187336 info0, Tmsgkind187002 msg0, NimStringDesc* arg0);
N_NIMCALL(void, adddecl_318445_254525290)(Tcontext316020* c0, Tsym265826* sym0);
N_NIMCALL(void, importallsymbolsexcept_320262_2178338529)(Tcontext316020* c0, Tsym265826* frommod0, Intset242031* exceptset0);
N_NIMCALL(Tsym265826*, inittabiter_272077_2984716966)(Ttabiter272075* ti0, Tstrtable265798 tab0);
N_NIMCALL(void, internalerror_192100_155036129)(Tlineinfo187336 info0, NimStringDesc* errmsg0);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e0, TNimType* typ0);
static N_INLINE(NIM_BOOL, isnil_242929_2627731572)(Intset242031* x0);
N_NIMCALL(NIM_BOOL, contains_242811_2627731572)(Intset242031* s0, NI key0);
N_NIMCALL(void, rawimportsymbol_320058_2178338529)(Tcontext316020* c0, Tsym265826* s0);
N_NIMCALL(Tsym265826*, strtableget_272070_2984716966)(Tstrtable265798 t0, Tident195012* name0);
N_NIMCALL(void, incl_242832_2627731572)(Intset242031* s0, NI key0);
N_NIMCALL(void, strtableadd_272065_2984716966)(Tstrtable265798* t0, Tsym265826* n0);
N_NIMCALL(Tsym265826*, initidentiter_272091_2984716966)(Tidentiter272088* ti0, Tstrtable265798 tab0, Tident195012* s0);
N_NIMCALL(Tsym265826*, nextidentiter_272097_2984716966)(Tidentiter272088* ti0, Tstrtable265798 tab0);
N_NIMCALL(void, addconverter_316424_893308950)(Tcontext316020* c0, Tsym265826* conv0);
static N_INLINE(NIM_BOOL, haspattern_270411_850551059)(Tsym265826* s0);
static N_INLINE(NIM_BOOL, isroutine_270397_850551059)(Tsym265826* s0);
N_NIMCALL(void, addpattern_316429_893308950)(Tcontext316020* c0, Tsym265826* p0);
N_NIMCALL(Tsym265826*, nextiter_272082_2984716966)(Ttabiter272075* ti0, Tstrtable265798 tab0);
N_NIMCALL(void, checkminsonslen_316962_893308950)(Tnode265794* n0, NI length0);
N_NIMCALL(Tnode265794*, newsymnode_267234_850551059)(Tsym265826* sym0);
N_NIMCALL(void, initintset_242885_2627731572)(Intset242031* Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(Tident195012*, considerquotedident_318004_254525290)(Tnode265794* n0);
N_NIMCALL(void, importsymbol_320200_2178338529)(Tcontext316020* c0, Tnode265794* n0, Tsym265826* frommod0);
N_NIMCALL(void, loadstub_306824_1724185294)(Tsym265826* s0);
STRING_LITERAL(TMP3804, "invalid path: ", 14);
STRING_LITERAL(TMP3805, "as", 2);
STRING_LITERAL(TMP3806, " ", 1);
STRING_LITERAL(TMP3807, "", 0);
STRING_LITERAL(TMP3808, ".", 1);
STRING_LITERAL(TMP3809, "/", 1);
STRING_LITERAL(TMP3810, "invalid module name: \'$1\'", 25);
STRING_LITERAL(TMP3811, "module alias must be an identifier", 34);
STRING_LITERAL(TMP3812, "A module cannot import itself", 29);
STRING_LITERAL(TMP3813, "importAllSymbols: ", 18);
STRING_LITERAL(TMP3814, "rawImportSymbol", 15);
STRING_LITERAL(TMP3816, "importSymbol: 2", 15);
STRING_LITERAL(TMP3817, "importSymbol: 3", 15);
extern TSafePoint* exchandler_19637_1689653243;
extern TNimType NTI3446; /* ValueError */
extern Exception* currexception_19639_1689653243;
extern Gcheap50218 gch_50258_1689653243;
extern TY313074 gimportmodule_313078_2355241294;
extern TNimType NTI265435; /* TSymKind */

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_19637_1689653243;
	exchandler_19637_1689653243 = s0;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_19637_1689653243 = (*exchandler_19637_1689653243).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result0;
	result0 = (Exception*)0;
	result0 = currexception_19639_1689653243;
	return result0;
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(void, incref_53819_1689653243)(Cell47704* c0) {
	(*c0).refcount = (NI)((NU64)((*c0).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(Cell47704*, usrtocell_51840_1689653243)(void* usr0) {
	Cell47704* result0;
	result0 = (Cell47704*)0;
	result0 = ((Cell47704*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47704))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47704* c0) {
	addzct_51817_1689653243((&gch_50258_1689653243.zct), c0);
}

static N_INLINE(void, decref_53401_1689653243)(Cell47704* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53001_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell47704* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell47704*)0;
		LOC5 = usrtocell_51840_1689653243(src0);
		incref_53819_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell47704* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell47704*)0;
		LOC10 = usrtocell_51840_1689653243((*dest0));
		decref_53401_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_19639_1689653243), NIM_NIL);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47704* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51840_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47704* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51840_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53001_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(NimStringDesc*, getmodulename_320009_2178338529)(Tnode265794* n0) {
	NimStringDesc* volatile result0;
{	result0 = (NimStringDesc*)0;
	switch ((*n0).kind) {
	case ((Tnodekind265020) 20):
	case ((Tnodekind265020) 21):
	case ((Tnodekind265020) 22):
	{
		TSafePoint TMP3803;
		pushSafePoint(&TMP3803);
		TMP3803.status = setjmp(TMP3803.context);
		if (TMP3803.status == 0) {
			NimStringDesc* LOC3;
			TY124315 LOC4;
			LOC3 = (NimStringDesc*)0;
			LOC3 = tofullpath_188270_155036129((*n0).info.fileindex);
			memset((void*)(&LOC4), 0, sizeof(LOC4));
			nossplitFile(LOC3, (&LOC4));
			result0 = pathsubs_166613_2607990831((*n0).kindU.S3.strval, LOC4.Field0);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3446))) {
				NimStringDesc* LOC7;
				TMP3803.status = 0;
				LOC7 = (NimStringDesc*)0;
				LOC7 = rawNewString((*n0).kindU.S3.strval->Sup.len + 14);
appendString(LOC7, ((NimStringDesc*) &TMP3804));
appendString(LOC7, (*n0).kindU.S3.strval);
				localerror_192085_155036129((*n0).info, LOC7);
				result0 = copyString((*n0).kindU.S3.strval);
				popCurrentException();
			}
		}
		if (TMP3803.status != 0) reraiseException();
	}
	break;
	case ((Tnodekind265020) 2):
	{
		result0 = copyString((*(*n0).kindU.S5.ident).s);
	}
	break;
	case ((Tnodekind265020) 3):
	{
		result0 = copyString((*(*(*n0).kindU.S4.sym).name).s);
	}
	break;
	case ((Tnodekind265020) 29):
	case ((Tnodekind265020) 30):
	{
		NimStringDesc* LOC18;
		{
			NIM_BOOL LOC13;
			Tident195012* LOC15;
			LOC13 = (NIM_BOOL)0;
			LOC13 = ((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind265020) 2));
			if (!(LOC13)) goto LA14;
			LOC15 = (Tident195012*)0;
			LOC15 = getident_195441_791273810(((NimStringDesc*) &TMP3805));
			LOC13 = ((*(*(*n0).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident).Sup.id == (*LOC15).Sup.id);
			LA14: ;
			if (!LOC13) goto LA16;
			(*n0).kind = ((Tnodekind265020) 78);
			asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 0)]), (*n0).kindU.S6.sons->data[((NI) 1)]);
			asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 1)]), (*n0).kindU.S6.sons->data[((NI) 2)]);
			(*n0).kindU.S6.sons = (Tnodeseq265788*) setLengthSeq(&((*n0).kindU.S6.sons)->Sup, sizeof(Tnode265794*), ((NI) 2));
			result0 = getmodulename_320009_2178338529((*n0).kindU.S6.sons->data[((NI) 0)]);
			goto BeforeRet;
		}
		LA16: ;
		LOC18 = (NimStringDesc*)0;
		LOC18 = rendertree_284046_382274130(n0, 4);
		result0 = nsuReplaceStr(LOC18, ((NimStringDesc*) &TMP3806), ((NimStringDesc*) &TMP3807));
	}
	break;
	case ((Tnodekind265020) 45):
	{
		NimStringDesc* LOC20;
		LOC20 = (NimStringDesc*)0;
		LOC20 = rendertree_284046_382274130(n0, 4);
		result0 = nsuReplaceStr(LOC20, ((NimStringDesc*) &TMP3808), ((NimStringDesc*) &TMP3809));
	}
	break;
	case ((Tnodekind265020) 78):
	{
		result0 = getmodulename_320009_2178338529((*n0).kindU.S6.sons->data[((NI) 0)]);
	}
	break;
	default:
	{
		NimStringDesc* LOC23;
		NimStringDesc* LOC24;
		LOC23 = (NimStringDesc*)0;
		LOC23 = rendertree_284046_382274130(n0, 0);
		LOC24 = (NimStringDesc*)0;
		LOC24 = nsuFormatSingleElem(((NimStringDesc*) &TMP3810), LOC23);
		localerror_192080_155036129((*n0).info, ((Tmsgkind187002) 4), LOC24);
		result0 = copyString(((NimStringDesc*) &TMP3807));
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI32, checkmodulename_320051_2178338529)(Tnode265794* n0) {
	NI32 result0;
	NimStringDesc* modulename0;
	NimStringDesc* fullpath0;
	NimStringDesc* LOC1;
	result0 = (NI32)0;
	modulename0 = getmodulename_320009_2178338529(n0);
	LOC1 = (NimStringDesc*)0;
	LOC1 = tofullpath_188270_155036129((*n0).info.fileindex);
	fullpath0 = findmodule_167484_2607990831(modulename0, LOC1);
	{
		if (!((fullpath0 ? fullpath0->Sup.len : 0) == ((NI) 0))) goto LA4;
		localerror_192080_155036129((*n0).info, ((Tmsgkind187002) 3), modulename0);
		result0 = ((NI32) -1);
	}
	goto LA2;
	LA4: ;
	{
		result0 = fileinfoidx_188016_155036129(fullpath0);
	}
	LA2: ;
	return result0;
}

static N_INLINE(NI, len_266080_850551059)(Tnode265794* n0) {
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

N_NIMCALL(Tsym265826*, importmoduleas_320443_2178338529)(Tnode265794* n0, Tsym265826* realmodule0) {
	Tsym265826* result0;
	result0 = (Tsym265826*)0;
	result0 = realmodule0;
	{
		if (!!(((*n0).kind == ((Tnodekind265020) 78)))) goto LA3;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NI LOC7;
		LOC6 = (NIM_BOOL)0;
		LOC7 = (NI)0;
		LOC7 = len_266080_850551059(n0);
		LOC6 = !((LOC7 == ((NI) 2)));
		if (LOC6) goto LA8;
		LOC6 = !(((*(*n0).kindU.S6.sons->data[((NI) 1)]).kind == ((Tnodekind265020) 2)));
		LA8: ;
		if (!LOC6) goto LA9;
		localerror_192080_155036129((*n0).info, ((Tmsgkind187002) 4), ((NimStringDesc*) &TMP3811));
	}
	goto LA1;
	LA9: ;
	{
		if (!!(((*(*(*n0).kindU.S6.sons->data[((NI) 1)]).kindU.S5.ident).Sup.id == (*(*realmodule0).name).Sup.id))) goto LA12;
		result0 = createmodulealias_268838_850551059(realmodule0, (*(*n0).kindU.S6.sons->data[((NI) 1)]).kindU.S5.ident, (*realmodule0).info);
	}
	goto LA1;
	LA12: ;
	LA1: ;
	return result0;
}

N_NIMCALL(Tsym265826*, myimportmodule_320474_2178338529)(Tcontext316020* c0, Tnode265794* n0) {
	Tsym265826* result0;
	NI32 f0;
	result0 = (Tsym265826*)0;
	f0 = checkmodulename_320051_2178338529(n0);
	{
		Tsym265826* LOC5;
		if (!!((f0 == ((NI32) -1)))) goto LA3;
		LOC5 = (Tsym265826*)0;
		LOC5 = gimportmodule_313078_2355241294((*c0).module, f0);
		result0 = importmoduleas_320443_2178338529(n0, LOC5);
		{
			if (!((*result0).info.fileindex == (*n0).info.fileindex)) goto LA8;
			localerror_192080_155036129((*n0).info, ((Tmsgkind187002) 4), ((NimStringDesc*) &TMP3812));
		}
		LA8: ;
		{
			if (!(((*result0).flags &(1U<<((NU)(((Tsymflag265184) 19))&31U)))!=0)) goto LA12;
			message_192095_155036129((*n0).info, ((Tmsgkind187002) 241), (*(*result0).name).s);
		}
		LA12: ;
	}
	LA3: ;
	return result0;
}

static N_INLINE(NIM_BOOL, isnil_242929_2627731572)(Intset242031* x0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = (*x0).head == 0;
	return result0;
}

static N_INLINE(NIM_BOOL, isroutine_270397_850551059)(Tsym265826* s0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = ((258048 &(1U<<((NU)((*s0).kind)&31U)))!=0);
	return result0;
}

static N_INLINE(NIM_BOOL, haspattern_270411_850551059)(Tsym265826* s0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = isroutine_270397_850551059(s0);
	if (!(LOC1)) goto LA2;
	LOC1 = !(((*(*(*s0).ast).kindU.S6.sons->data[((NI) 1)]).kind == ((Tnodekind265020) 1)));
	LA2: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(void, rawimportsymbol_320058_2178338529)(Tcontext316020* c0, Tsym265826* s0) {
	Tsym265826* check0;
	check0 = strtableget_272070_2984716966((*(*c0).importtable).symbols, (*s0).name);
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
			incl_242832_2627731572((&(*c0).ambiguoussymbols), (*s0).Sup.id);
			incl_242832_2627731572((&(*c0).ambiguoussymbols), (*check0).Sup.id);
		}
		LA9: ;
	}
	LA5: ;
	strtableadd_272065_2984716966((&(*(*c0).importtable).symbols), s0);
	{
		Ttype265832* etyp0;
		if (!((*s0).kind == ((Tsymkind265435) 7))) goto LA13;
		etyp0 = (*s0).typ;
		{
			NIM_BOOL LOC17;
			LOC17 = (NIM_BOOL)0;
			LOC17 = ((16386 &((NU64)1<<((NU)((*etyp0).kind)&63U)))!=0);
			if (!(LOC17)) goto LA18;
			LOC17 = !((((*s0).flags &(1U<<((NU)(((Tsymflag265184) 9))&31U)))!=0));
			LA18: ;
			if (!LOC17) goto LA19;
			{
				NI j_320137_2178338529;
				NI HEX3Atmp_320193_2178338529;
				NI LOC22;
				NI res_320196_2178338529;
				j_320137_2178338529 = (NI)0;
				HEX3Atmp_320193_2178338529 = (NI)0;
				LOC22 = (NI)0;
				LOC22 = sonslen_268351_850551059((*etyp0).n);
				HEX3Atmp_320193_2178338529 = (NI)(LOC22 - ((NI) 1));
				res_320196_2178338529 = ((NI) 0);
				{
					while (1) {
						Tsym265826* e0;
						Tidentiter272088 it0;
						if (!(res_320196_2178338529 <= HEX3Atmp_320193_2178338529)) goto LA24;
						j_320137_2178338529 = res_320196_2178338529;
						e0 = (*(*(*etyp0).n).kindU.S6.sons->data[j_320137_2178338529]).kindU.S4.sym;
						{
							if (!!(((*e0).kind == ((Tsymkind265435) 19)))) goto LA27;
							internalerror_192100_155036129((*s0).info, ((NimStringDesc*) &TMP3814));
						}
						LA27: ;
						memset((void*)(&it0), 0, sizeof(it0));
						check0 = initidentiter_272091_2984716966((&it0), (*(*c0).importtable).symbols, (*e0).name);
						{
							while (1) {
								if (!!((check0 == NIM_NIL))) goto LA30;
								{
									if (!((*check0).Sup.id == (*e0).Sup.id)) goto LA33;
									e0 = NIM_NIL;
									goto LA29;
								}
								LA33: ;
								check0 = nextidentiter_272097_2984716966((&it0), (*(*c0).importtable).symbols);
							} LA30: ;
						} LA29: ;
						{
							if (!!((e0 == NIM_NIL))) goto LA37;
							rawimportsymbol_320058_2178338529(c0, e0);
						}
						LA37: ;
						res_320196_2178338529 += ((NI) 1);
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
			if (!((*s0).kind == ((Tsymkind265435) 15))) goto LA42;
			addconverter_316424_893308950(c0, s0);
		}
		LA42: ;
		{
			NIM_BOOL LOC46;
			LOC46 = (NIM_BOOL)0;
			LOC46 = haspattern_270411_850551059(s0);
			if (!LOC46) goto LA47;
			addpattern_316429_893308950(c0, s0);
		}
		LA47: ;
	}
	LA11: ;
}

N_NIMCALL(void, importallsymbolsexcept_320262_2178338529)(Tcontext316020* c0, Tsym265826* frommod0, Intset242031* exceptset0) {
	Ttabiter272075 i0;
	Tsym265826* s0;
	memset((void*)(&i0), 0, sizeof(i0));
	s0 = inittabiter_272077_2984716966((&i0), (*frommod0).kindU.S3.tab);
	{
		while (1) {
			if (!!((s0 == NIM_NIL))) goto LA2;
			{
				if (!!(((*s0).kind == ((Tsymkind265435) 6)))) goto LA5;
				{
					if (!!(((*s0).kind == ((Tsymkind265435) 19)))) goto LA9;
					{
						NimStringDesc* LOC15;
						if (!!(((21755776 &(1U<<((NU)((*s0).kind)&31U)))!=0))) goto LA13;
						LOC15 = (NimStringDesc*)0;
						LOC15 = rawNewString(reprEnum((NI)(*s0).kind, (&NTI265435))->Sup.len + 18);
appendString(LOC15, ((NimStringDesc*) &TMP3813));
appendString(LOC15, reprEnum((NI)(*s0).kind, (&NTI265435)));
						internalerror_192100_155036129((*s0).info, LOC15);
					}
					LA13: ;
					{
						NIM_BOOL LOC18;
						NIM_BOOL LOC20;
						LOC18 = (NIM_BOOL)0;
						LOC18 = isnil_242929_2627731572(exceptset0);
						if (LOC18) goto LA19;
						LOC20 = (NIM_BOOL)0;
						LOC20 = contains_242811_2627731572(exceptset0, (*(*s0).name).Sup.id);
						LOC18 = !(LOC20);
						LA19: ;
						if (!LOC18) goto LA21;
						rawimportsymbol_320058_2178338529(c0, s0);
					}
					LA21: ;
				}
				LA9: ;
			}
			LA5: ;
			s0 = nextiter_272082_2984716966((&i0), (*frommod0).kindU.S3.tab);
		} LA2: ;
	}
}

N_NIMCALL(Tnode265794*, evalimport_320001_2178338529)(Tcontext316020* c0, Tnode265794* n0) {
	Tnode265794* result0;
	Intset242031 emptyset0;
	result0 = (Tnode265794*)0;
	result0 = n0;
	memset((void*)(&emptyset0), 0, sizeof(emptyset0));
	{
		NI i_320510_2178338529;
		NI HEX3Atmp_320527_2178338529;
		NI LOC2;
		NI res_320530_2178338529;
		i_320510_2178338529 = (NI)0;
		HEX3Atmp_320527_2178338529 = (NI)0;
		LOC2 = (NI)0;
		LOC2 = sonslen_268351_850551059(n0);
		HEX3Atmp_320527_2178338529 = (NI)(LOC2 - ((NI) 1));
		res_320530_2178338529 = ((NI) 0);
		{
			while (1) {
				Tsym265826* m0;
				if (!(res_320530_2178338529 <= HEX3Atmp_320527_2178338529)) goto LA4;
				i_320510_2178338529 = res_320530_2178338529;
				m0 = myimportmodule_320474_2178338529(c0, (*n0).kindU.S6.sons->data[i_320510_2178338529]);
				{
					if (!!((m0 == NIM_NIL))) goto LA7;
					adddecl_318445_254525290(c0, m0);
					importallsymbolsexcept_320262_2178338529(c0, m0, (&emptyset0));
				}
				LA7: ;
				res_320530_2178338529 += ((NI) 1);
			} LA4: ;
		}
	}
	return result0;
}

N_NIMCALL(Tnode265794*, evalimportexcept_320585_2178338529)(Tcontext316020* c0, Tnode265794* n0) {
	Tnode265794* result0;
	Tsym265826* m0;
	result0 = (Tnode265794*)0;
	result0 = n0;
	checkminsonslen_316962_893308950(n0, ((NI) 2));
	m0 = myimportmodule_320474_2178338529(c0, (*n0).kindU.S6.sons->data[((NI) 0)]);
	{
		Intset242031 exceptset0;
		if (!!((m0 == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 0)]), newsymnode_267234_850551059(m0));
		adddecl_318445_254525290(c0, m0);
		memset((void*)(&exceptset0), 0, sizeof(exceptset0));
		chckNil((void*)(&exceptset0));
		memset((void*)(&exceptset0), 0, sizeof(exceptset0));
		initintset_242885_2627731572((&exceptset0));
		{
			NI i_320617_2178338529;
			NI HEX3Atmp_320622_2178338529;
			NI LOC6;
			NI res_320625_2178338529;
			i_320617_2178338529 = (NI)0;
			HEX3Atmp_320622_2178338529 = (NI)0;
			LOC6 = (NI)0;
			LOC6 = sonslen_268351_850551059(n0);
			HEX3Atmp_320622_2178338529 = (NI)(LOC6 - ((NI) 1));
			res_320625_2178338529 = ((NI) 1);
			{
				while (1) {
					Tident195012* ident0;
					if (!(res_320625_2178338529 <= HEX3Atmp_320622_2178338529)) goto LA8;
					i_320617_2178338529 = res_320625_2178338529;
					ident0 = considerquotedident_318004_254525290((*n0).kindU.S6.sons->data[i_320617_2178338529]);
					incl_242832_2627731572((&exceptset0), (*ident0).Sup.id);
					res_320625_2178338529 += ((NI) 1);
				} LA8: ;
			}
		}
		importallsymbolsexcept_320262_2178338529(c0, m0, (&exceptset0));
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, importsymbol_320200_2178338529)(Tcontext316020* c0, Tnode265794* n0, Tsym265826* frommod0) {
	Tident195012* ident0;
	Tsym265826* s0;
	ident0 = considerquotedident_318004_254525290(n0);
	s0 = strtableget_272070_2984716966((*frommod0).kindU.S3.tab, ident0);
	{
		if (!(s0 == NIM_NIL)) goto LA3;
		localerror_192080_155036129((*n0).info, ((Tmsgkind187002) 63), (*ident0).s);
	}
	goto LA1;
	LA3: ;
	{
		{
			if (!((*s0).kind == ((Tsymkind265435) 22))) goto LA8;
			loadstub_306824_1724185294(s0);
		}
		LA8: ;
		{
			if (!!(((21755776 &(1U<<((NU)((*s0).kind)&31U)))!=0))) goto LA12;
			internalerror_192100_155036129((*n0).info, ((NimStringDesc*) &TMP3816));
		}
		LA12: ;
		switch ((*s0).kind) {
		case ((Tsymkind265435) 12):
		case ((Tsymkind265435) 17):
		case ((Tsymkind265435) 16):
		case ((Tsymkind265435) 14):
		case ((Tsymkind265435) 13):
		case ((Tsymkind265435) 15):
		{
			Tidentiter272088 it0;
			Tsym265826* e0;
			memset((void*)(&it0), 0, sizeof(it0));
			e0 = initidentiter_272091_2984716966((&it0), (*frommod0).kindU.S3.tab, (*s0).name);
			{
				while (1) {
					if (!!((e0 == NIM_NIL))) goto LA16;
					{
						if (!!(((*(*e0).name).Sup.id == (*(*s0).name).Sup.id))) goto LA19;
						internalerror_192100_155036129((*n0).info, ((NimStringDesc*) &TMP3817));
					}
					LA19: ;
					rawimportsymbol_320058_2178338529(c0, e0);
					e0 = nextidentiter_272097_2984716966((&it0), (*frommod0).kindU.S3.tab);
				} LA16: ;
			}
		}
		break;
		default:
		{
			rawimportsymbol_320058_2178338529(c0, s0);
		}
		break;
		}
	}
	LA1: ;
}

N_NIMCALL(Tnode265794*, evalfrom_320005_2178338529)(Tcontext316020* c0, Tnode265794* n0) {
	Tnode265794* result0;
	Tsym265826* m0;
	result0 = (Tnode265794*)0;
	result0 = n0;
	checkminsonslen_316962_893308950(n0, ((NI) 2));
	m0 = myimportmodule_320474_2178338529(c0, (*n0).kindU.S6.sons->data[((NI) 0)]);
	{
		if (!!((m0 == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 0)]), newsymnode_267234_850551059(m0));
		adddecl_318445_254525290(c0, m0);
		{
			NI i_320565_2178338529;
			NI HEX3Atmp_320578_2178338529;
			NI LOC6;
			NI res_320581_2178338529;
			i_320565_2178338529 = (NI)0;
			HEX3Atmp_320578_2178338529 = (NI)0;
			LOC6 = (NI)0;
			LOC6 = sonslen_268351_850551059(n0);
			HEX3Atmp_320578_2178338529 = (NI)(LOC6 - ((NI) 1));
			res_320581_2178338529 = ((NI) 1);
			{
				while (1) {
					if (!(res_320581_2178338529 <= HEX3Atmp_320578_2178338529)) goto LA8;
					i_320565_2178338529 = res_320581_2178338529;
					{
						if (!!(((*(*n0).kindU.S6.sons->data[i_320565_2178338529]).kind == ((Tnodekind265020) 23)))) goto LA11;
						importsymbol_320200_2178338529(c0, (*n0).kindU.S6.sons->data[i_320565_2178338529], m0);
					}
					LA11: ;
					res_320581_2178338529 += ((NI) 1);
				} LA8: ;
			}
		}
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, importallsymbols_320324_2178338529)(Tcontext316020* c0, Tsym265826* frommod0) {
	Intset242031 exceptset0;
	memset((void*)(&exceptset0), 0, sizeof(exceptset0));
	importallsymbolsexcept_320262_2178338529(c0, frommod0, (&exceptset0));
}
NIM_EXTERNC N_NOINLINE(void, compiler_importerInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_importerDatInit000)(void) {
}

