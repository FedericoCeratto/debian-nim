/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
typedef struct Tnode264794 Tnode264794;
typedef struct Tcontext315020 Tcontext315020;
typedef struct Intset241031 Intset241031;
typedef struct Trunk241027 Trunk241027;
typedef struct Trunkseq241029 Trunkseq241029;
typedef struct Tsym264826 Tsym264826;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype264832 Ttype264832;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct Tident194012 Tident194012;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct TY124906 TY124906;
typedef struct Cell47904 Cell47904;
typedef struct Cellseq47920 Cellseq47920;
typedef struct Gcheap50418 Gcheap50418;
typedef struct Gcstack50416 Gcstack50416;
typedef struct Memregion30085 Memregion30085;
typedef struct Smallchunk30039 Smallchunk30039;
typedef struct Llchunk30079 Llchunk30079;
typedef struct Bigchunk30041 Bigchunk30041;
typedef struct Intset30014 Intset30014;
typedef struct Trunk30010 Trunk30010;
typedef struct Avlnode30083 Avlnode30083;
typedef struct Gcstat50414 Gcstat50414;
typedef struct Cellset47916 Cellset47916;
typedef struct Pagedesc47912 Pagedesc47912;
typedef struct Tidobj194006 Tidobj194006;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct Tscope264820 Tscope264820;
typedef struct TY264927 TY264927;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct Tloc264808 Tloc264808;
typedef struct Ropeobj173006 Ropeobj173006;
typedef struct Tlib264812 Tlib264812;
typedef struct Tpasscontext312002 Tpasscontext312002;
typedef struct Tproccon315008 Tproccon315008;
typedef struct Tlinkedlist141016 Tlinkedlist141016;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct Tidtable264844 Tidtable264844;
typedef struct Tidpairseq264842 Tidpairseq264842;
typedef struct Tctx314036 Tctx314036;
typedef struct TY315144 TY315144;
typedef struct Ttabiter271075 Ttabiter271075;
typedef struct Tidentiter271088 Tidentiter271088;
typedef struct Basechunk30037 Basechunk30037;
typedef struct Freecell30029 Freecell30029;
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct Tidpair264840 Tidpair264840;
typedef struct TY314242 TY314242;
typedef struct TY187093 TY187093;
typedef struct PprocHEX3Aobjecttype314221 PprocHEX3Aobjecttype314221;
typedef struct TY314261 TY314261;
typedef struct Tinstantiationpair315010 Tinstantiationpair315010;
typedef struct TY264917 TY264917;
typedef struct TY314222 TY314222;
typedef struct TY314227 TY314227;
typedef struct TY314262 TY314262;
typedef struct Vmargs314030 Vmargs314030;
typedef struct Tblock314018 Tblock314018;
typedef struct TY314202 TY314202;
struct  Intset241031  {
NI counter;
NI max;
Trunk241027* head;
Trunkseq241029* data;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo186336  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct TY124906 {
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
struct  Cell47904  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47920  {
NI len;
NI cap;
Cell47904** d;
};
typedef Smallchunk30039* TY30100[512];
typedef Trunk30010* Trunkbuckets30012[256];
struct  Intset30014  {
Trunkbuckets30012 data;
};
struct  Memregion30085  {
NI minlargeobj;
NI maxlargeobj;
TY30100 freesmallchunks;
Llchunk30079* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30041* freechunkslist;
Intset30014 chunkstarts;
Avlnode30083* root;
Avlnode30083* deleted;
Avlnode30083* last;
Avlnode30083* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47916  {
NI counter;
NI max;
Pagedesc47912* head;
Pagedesc47912** data;
};
struct  Gcheap50418  {
Gcstack50416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47920 zct;
Cellseq47920 decstack;
Cellseq47920 tempstack;
NI recgclock;
Memregion30085 region;
Gcstat50414 stat;
Cellset47916 marked;
Cellseq47920 additionalroots;
};
struct  Tidobj194006  {
  TNimObject Sup;
NI id;
};
struct  Tident194012  {
  Tidobj194006 Sup;
NimStringDesc* s;
Tident194012* next;
NI h;
};
typedef NU8 Tsymkind264435;
struct  Tstrtable264798  {
NI counter;
Tsymseq264796* data;
};
typedef NU8 Tmagic264525;
typedef NU32 Tsymflag264184Set;
typedef NU32 Toption164009Set;
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
typedef NU8 Trenderflag283006Set;
typedef NU16 Tmsgkind186002;
typedef N_NIMCALL_PTR(Tsym264826*, TY312074) (Tsym264826* m0, NI32 fileidx0);
struct  Tpasscontext312002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tlinkedlist141016  {
Tlistentry141010* head;
Tlistentry141010* tail;
NI counter;
};
struct  Tidtable264844  {
NI counter;
Tidpairseq264842* data;
};
typedef N_NIMCALL_PTR(Tnode264794*, TY315075) (Tcontext315020* c0, Tnode264794* n0);
typedef NU16 Texprflag315012Set;
typedef N_NIMCALL_PTR(Tnode264794*, TY315080) (Tcontext315020* c0, Tnode264794* n0, Texprflag315012Set flags0);
typedef N_NIMCALL_PTR(Tnode264794*, TY315088) (Tcontext315020* c0, Tnode264794* n0, Texprflag315012Set flags0);
typedef N_NIMCALL_PTR(Tnode264794*, TY315096) (Tcontext315020* c0, Tnode264794* n0);
typedef N_NIMCALL_PTR(Tnode264794*, TY315101) (Tcontext315020* c0, Tnode264794* n0, Texprflag315012Set flags0);
typedef N_NIMCALL_PTR(Tnode264794*, TY315109) (Tcontext315020* c0, Tnode264794* n0);
typedef NU32 Tsymkind264435Set;
typedef N_NIMCALL_PTR(Tnode264794*, TY315114) (Tcontext315020* c0, Tnode264794* n0, Tnode264794* norig0, Tsymkind264435Set filter0);
typedef N_NIMCALL_PTR(Ttype264832*, TY315121) (Tcontext315020* c0, Tnode264794* n0, Ttype264832* prev0);
typedef struct {
N_NIMCALL_PTR(Tnode264794*, ClPrc) (Tcontext315020* c0, Tidtable264844 pt0, Tnode264794* n0, void* ClEnv);
void* ClEnv;
} TY315127;
typedef struct {
N_NIMCALL_PTR(Tsym264826*, ClPrc) (Tcontext315020* c0, Tsym264826* fn0, Tidtable264844 pt0, Tlineinfo186336 info0, void* ClEnv);
void* ClEnv;
} TY315133;
typedef NU8 Ttypeattachedop315016;
typedef N_NIMCALL_PTR(Tsym264826*, TY315149) (Tcontext315020* c0, Tsym264826* dc0, Ttype264832* t0, Tlineinfo186336 info0, Ttypeattachedop315016 op0);
struct  Tcontext315020  {
  Tpasscontext312002 Sup;
Tsym264826* module;
Tscope264820* currentscope;
Tscope264820* importtable;
Tscope264820* toplevelscope;
Tproccon315008* p;
Tsymseq264796* friendmodules;
NI instcounter;
Intset241031 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq264796* converters;
Tsymseq264796* patterns;
Tlinkedlist141016 optionstack;
Tidtable264844 symmapping;
Tlinkedlist141016 libs;
TY315075 semconstexpr;
TY315080 semexpr;
TY315088 semtryexpr;
TY315096 semtryconstexpr;
TY315101 semoperand;
TY315109 semconstboolexpr;
TY315114 semoverloadedcall;
TY315121 semtypenode;
TY315127 seminferredlambda;
TY315133 semgenerateinstance;
Intset241031 includedfiles;
Tstrtable264798 userpragmas;
Tctx314036* evalcontext;
Intset241031 unknownidents;
TY315144* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY315149 insttypeboundop;
Tident194012* selfname;
Tstrtable264798 signatures;
};
typedef NU8 Tsymflag264184;
struct  Ttabiter271075  {
NI h;
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
struct  Tidentiter271088  {
NI h;
Tident194012* name;
};
typedef NI TY30018[16];
struct  Trunk241027  {
Trunk241027* next;
NI key;
TY30018 bits;
};
struct  Gcstack50416  {
Gcstack50416* prev;
Gcstack50416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30037  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30039  {
  Basechunk30037 Sup;
Smallchunk30039* next;
Smallchunk30039* prev;
Freecell30029* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30079  {
NI size;
NI acc;
Llchunk30079* next;
};
struct  Bigchunk30041  {
  Basechunk30037 Sup;
Bigchunk30041* next;
Bigchunk30041* prev;
NI align;
NF data;
};
struct  Trunk30010  {
Trunk30010* next;
NI key;
TY30018 bits;
};
typedef Avlnode30083* TY30090[2];
struct  Avlnode30083  {
TY30090 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47912  {
Pagedesc47912* next;
NI key;
TY30018 bits;
};
struct  Ropeobj173006  {
  TNimObject Sup;
Ropeobj173006* left;
Ropeobj173006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
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
struct  Tproccon315008  {
Tsym264826* owner;
Tsym264826* resultsym;
Tsym264826* selfsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon315008* next;
NIM_BOOL wasforwarded;
Tnode264794* bracketexpr;
};
struct  Tidpair264840  {
Tidobj194006* key;
TNimObject* val;
};
typedef NU8 Tevalmode314020;
typedef NU8 Tsandboxflag314022Set;
struct  Tctx314036  {
  Tpasscontext312002 Sup;
TY314242* code;
TY187093* debug;
Tnode264794* globals;
Tnode264794* constants;
Ttypeseq264828* types;
Tnode264794* currentexceptiona;
Tnode264794* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype314221* prc;
Tsym264826* module;
Tnode264794* callsite;
Tevalmode314020 mode;
Tsandboxflag314022Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo186336 comesfromheuristic;
TY314261* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair315010  {
Tsym264826* genericsym;
Tinstantiation264816* inst;
};
struct  Freecell30029  {
Freecell30029* next;
NI zerofield;
};
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
};
typedef NU8 Tslotkind314026;
struct TY314227 {
NIM_BOOL Field0;
Tslotkind314026 Field1;
};
typedef TY314227 TY314230[256];
struct  PprocHEX3Aobjecttype314221  {
TY314222* blocks;
Tsym264826* sym;
TY314230 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs314030* args0, void* ClEnv);
void* ClEnv;
} Vmcallback314032;
struct TY314262 {
NimStringDesc* Field0;
Vmcallback314032 Field1;
};
struct  Tblock314018  {
Tsym264826* label;
TY314202* fixups;
};
struct  Vmargs314030  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode264794* currentexception;
};
struct Tnodeseq264788 {
  TGenericSeq Sup;
  Tnode264794* data[SEQ_DECL_SIZE];
};
struct Trunkseq241029 {
  TGenericSeq Sup;
  Trunk241027* data[SEQ_DECL_SIZE];
};
struct Ttypeseq264828 {
  TGenericSeq Sup;
  Ttype264832* data[SEQ_DECL_SIZE];
};
struct TY264927 {
  TGenericSeq Sup;
  Tinstantiation264816* data[SEQ_DECL_SIZE];
};
struct Tsymseq264796 {
  TGenericSeq Sup;
  Tsym264826* data[SEQ_DECL_SIZE];
};
struct Tidpairseq264842 {
  TGenericSeq Sup;
  Tidpair264840 data[SEQ_DECL_SIZE];
};
struct TY315144 {
  TGenericSeq Sup;
  Tinstantiationpair315010 data[SEQ_DECL_SIZE];
};
struct TY314242 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY187093 {
  TGenericSeq Sup;
  Tlineinfo186336 data[SEQ_DECL_SIZE];
};
struct TY314261 {
  TGenericSeq Sup;
  TY314262 data[SEQ_DECL_SIZE];
};
struct TY264917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY314222 {
  TGenericSeq Sup;
  Tblock314018 data[SEQ_DECL_SIZE];
};
struct TY314202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, sonslen_267351_850551059)(Tnode264794* n0);
N_NIMCALL(Tsym264826*, myimportmodule_319474_2178338529)(Tcontext315020* c0, Tnode264794* n0);
N_NIMCALL(NI32, checkmodulename_319051_2178338529)(Tnode264794* n0);
N_NIMCALL(NimStringDesc*, getmodulename_319009_2178338529)(Tnode264794* n0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
N_NIMCALL(NimStringDesc*, pathsubs_164613_2607990831)(NimStringDesc* p0, NimStringDesc* config0);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path0, TY124906* Result);
N_NIMCALL(NimStringDesc*, tofullpath_187273_155036129)(NI32 fileidx0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj0, TNimType* subclass0);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(void, localerror_191085_155036129)(Tlineinfo186336 info0, NimStringDesc* arg0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_54019_1689653243)(Cell47904* c0);
static N_INLINE(Cell47904*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, decref_53601_1689653243)(Cell47904* c0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47904* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47920* s0, Cell47904* c0);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(Tident194012*, getident_194441_791273810)(NimStringDesc* identifier0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s0, NimStringDesc* sub0, NimStringDesc* by0);
N_NIMCALL(NimStringDesc*, rendertree_283046_382274130)(Tnode264794* n0, Trenderflag283006Set renderflags0);
N_NIMCALL(void, localerror_191080_155036129)(Tlineinfo186336 info0, Tmsgkind186002 msg0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr0, NimStringDesc* a0);
N_NIMCALL(NimStringDesc*, findmodule_165484_2607990831)(NimStringDesc* modulename0, NimStringDesc* currentmodule0);
N_NIMCALL(NI32, fileinfoidx_187017_155036129)(NimStringDesc* filename0);
N_NIMCALL(Tsym264826*, importmoduleas_319443_2178338529)(Tnode264794* n0, Tsym264826* realmodule0);
static N_INLINE(NI, len_265080_850551059)(Tnode264794* n0);
N_NIMCALL(Tsym264826*, createmodulealias_267838_850551059)(Tsym264826* s0, Tident194012* newident0, Tlineinfo186336 info0);
N_NIMCALL(void, message_191095_155036129)(Tlineinfo186336 info0, Tmsgkind186002 msg0, NimStringDesc* arg0);
N_NIMCALL(void, adddecl_317445_254525290)(Tcontext315020* c0, Tsym264826* sym0);
N_NIMCALL(void, importallsymbolsexcept_319262_2178338529)(Tcontext315020* c0, Tsym264826* frommod0, Intset241031 exceptset0);
N_NIMCALL(Tsym264826*, inittabiter_271077_2984716966)(Ttabiter271075* ti0, Tstrtable264798 tab0);
N_NIMCALL(void, internalerror_191100_155036129)(Tlineinfo186336 info0, NimStringDesc* errmsg0);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e0, TNimType* typ0);
static N_INLINE(NIM_BOOL, isnil_241929_2627731572)(Intset241031 x0);
N_NIMCALL(NIM_BOOL, contains_241811_2627731572)(Intset241031 s0, NI key0);
N_NIMCALL(void, rawimportsymbol_319058_2178338529)(Tcontext315020* c0, Tsym264826* s0);
N_NIMCALL(Tsym264826*, strtableget_271070_2984716966)(Tstrtable264798 t0, Tident194012* name0);
N_NIMCALL(void, incl_241832_2627731572)(Intset241031* s0, NI key0);
N_NIMCALL(void, strtableadd_271065_2984716966)(Tstrtable264798* t0, Tsym264826* n0);
N_NIMCALL(Tsym264826*, initidentiter_271091_2984716966)(Tidentiter271088* ti0, Tstrtable264798 tab0, Tident194012* s0);
N_NIMCALL(Tsym264826*, nextidentiter_271097_2984716966)(Tidentiter271088* ti0, Tstrtable264798 tab0);
N_NIMCALL(void, addconverter_315425_893308950)(Tcontext315020* c0, Tsym264826* conv0);
static N_INLINE(NIM_BOOL, haspattern_269410_850551059)(Tsym264826* s0);
static N_INLINE(NIM_BOOL, isroutine_269396_850551059)(Tsym264826* s0);
N_NIMCALL(void, addpattern_315430_893308950)(Tcontext315020* c0, Tsym264826* p0);
N_NIMCALL(Tsym264826*, nextiter_271082_2984716966)(Ttabiter271075* ti0, Tstrtable264798 tab0);
N_NIMCALL(void, checkminsonslen_315962_893308950)(Tnode264794* n0, NI length0);
N_NIMCALL(Tnode264794*, newsymnode_266234_850551059)(Tsym264826* sym0);
N_NIMCALL(void, initintset_241885_2627731572)(Intset241031* Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(Tident194012*, considerquotedident_317004_254525290)(Tnode264794* n0);
N_NIMCALL(void, importsymbol_319200_2178338529)(Tcontext315020* c0, Tnode264794* n0, Tsym264826* frommod0);
N_NIMCALL(void, loadstub_305825_1724185294)(Tsym264826* s0);
STRING_LITERAL(TMP3801, "invalid path: ", 14);
STRING_LITERAL(TMP3802, "as", 2);
STRING_LITERAL(TMP3803, " ", 1);
STRING_LITERAL(TMP3804, "", 0);
STRING_LITERAL(TMP3805, ".", 1);
STRING_LITERAL(TMP3806, "/", 1);
STRING_LITERAL(TMP3807, "invalid module name: \'$1\'", 25);
STRING_LITERAL(TMP3808, "module alias must be an identifier", 34);
STRING_LITERAL(TMP3809, "A module cannot import itself", 29);
STRING_LITERAL(TMP3810, "importAllSymbols: ", 18);
STRING_LITERAL(TMP3811, "rawImportSymbol", 15);
STRING_LITERAL(TMP3813, "importSymbol: 2", 15);
STRING_LITERAL(TMP3814, "importSymbol: 3", 15);
extern TSafePoint* exchandler_19637_1689653243;
extern TNimType NTI3446; /* ValueError */
extern Exception* currexception_19639_1689653243;
extern Gcheap50418 gch_50458_1689653243;
extern TY312074 gimportmodule_312078_2355241294;
extern TNimType NTI264435; /* TSymKind */

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

static N_INLINE(void, incref_54019_1689653243)(Cell47904* c0) {
	(*c0).refcount = (NI)((NU32)((*c0).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(Cell47904*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47904* result0;
	result0 = (Cell47904*)0;
	result0 = ((Cell47904*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47904))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47904* c0) {
	addzct_52017_1689653243((&gch_50458_1689653243.zct), c0);
}

static N_INLINE(void, decref_53601_1689653243)(Cell47904* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell47904* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell47904*)0;
		LOC5 = usrtocell_52040_1689653243(src0);
		incref_54019_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell47904* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell47904*)0;
		LOC10 = usrtocell_52040_1689653243((*dest0));
		decref_53601_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_19639_1689653243), NIM_NIL);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47904* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_52040_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47904* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_52040_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53201_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(NimStringDesc*, getmodulename_319009_2178338529)(Tnode264794* n0) {
	NimStringDesc* volatile result0;
{	result0 = (NimStringDesc*)0;
	switch ((*n0).kind) {
	case ((Tnodekind264020) 20):
	case ((Tnodekind264020) 21):
	case ((Tnodekind264020) 22):
	{
		TSafePoint TMP3800;
		pushSafePoint(&TMP3800);
		TMP3800.status = setjmp(TMP3800.context);
		if (TMP3800.status == 0) {
			NimStringDesc* LOC3;
			TY124906 LOC4;
			LOC3 = (NimStringDesc*)0;
			LOC3 = tofullpath_187273_155036129((*n0).info.fileindex);
			memset((void*)(&LOC4), 0, sizeof(LOC4));
			nossplitFile(LOC3, (&LOC4));
			result0 = pathsubs_164613_2607990831((*n0).kindU.S3.strval, LOC4.Field0);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3446))) {
				NimStringDesc* LOC7;
				TMP3800.status = 0;
				LOC7 = (NimStringDesc*)0;
				LOC7 = rawNewString((*n0).kindU.S3.strval->Sup.len + 14);
appendString(LOC7, ((NimStringDesc*) &TMP3801));
appendString(LOC7, (*n0).kindU.S3.strval);
				localerror_191085_155036129((*n0).info, LOC7);
				result0 = copyString((*n0).kindU.S3.strval);
				popCurrentException();
			}
		}
		if (TMP3800.status != 0) reraiseException();
	}
	break;
	case ((Tnodekind264020) 2):
	{
		result0 = copyString((*(*n0).kindU.S5.ident).s);
	}
	break;
	case ((Tnodekind264020) 3):
	{
		result0 = copyString((*(*(*n0).kindU.S4.sym).name).s);
	}
	break;
	case ((Tnodekind264020) 29):
	case ((Tnodekind264020) 30):
	{
		NimStringDesc* LOC18;
		{
			NIM_BOOL LOC13;
			Tident194012* LOC15;
			LOC13 = (NIM_BOOL)0;
			LOC13 = ((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind264020) 2));
			if (!(LOC13)) goto LA14;
			LOC15 = (Tident194012*)0;
			LOC15 = getident_194441_791273810(((NimStringDesc*) &TMP3802));
			LOC13 = ((*(*(*n0).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident).Sup.id == (*LOC15).Sup.id);
			LA14: ;
			if (!LOC13) goto LA16;
			(*n0).kind = ((Tnodekind264020) 78);
			asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 0)]), (*n0).kindU.S6.sons->data[((NI) 1)]);
			asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 1)]), (*n0).kindU.S6.sons->data[((NI) 2)]);
			(*n0).kindU.S6.sons = (Tnodeseq264788*) setLengthSeq(&((*n0).kindU.S6.sons)->Sup, sizeof(Tnode264794*), ((NI) 2));
			result0 = getmodulename_319009_2178338529((*n0).kindU.S6.sons->data[((NI) 0)]);
			goto BeforeRet;
		}
		LA16: ;
		LOC18 = (NimStringDesc*)0;
		LOC18 = rendertree_283046_382274130(n0, 4);
		result0 = nsuReplaceStr(LOC18, ((NimStringDesc*) &TMP3803), ((NimStringDesc*) &TMP3804));
	}
	break;
	case ((Tnodekind264020) 45):
	{
		NimStringDesc* LOC20;
		LOC20 = (NimStringDesc*)0;
		LOC20 = rendertree_283046_382274130(n0, 4);
		result0 = nsuReplaceStr(LOC20, ((NimStringDesc*) &TMP3805), ((NimStringDesc*) &TMP3806));
	}
	break;
	case ((Tnodekind264020) 78):
	{
		result0 = getmodulename_319009_2178338529((*n0).kindU.S6.sons->data[((NI) 0)]);
	}
	break;
	default:
	{
		NimStringDesc* LOC23;
		NimStringDesc* LOC24;
		LOC23 = (NimStringDesc*)0;
		LOC23 = rendertree_283046_382274130(n0, 0);
		LOC24 = (NimStringDesc*)0;
		LOC24 = nsuFormatSingleElem(((NimStringDesc*) &TMP3807), LOC23);
		localerror_191080_155036129((*n0).info, ((Tmsgkind186002) 4), LOC24);
		result0 = copyString(((NimStringDesc*) &TMP3804));
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI32, checkmodulename_319051_2178338529)(Tnode264794* n0) {
	NI32 result0;
	NimStringDesc* modulename0;
	NimStringDesc* fullpath0;
	NimStringDesc* LOC1;
	result0 = (NI32)0;
	modulename0 = getmodulename_319009_2178338529(n0);
	LOC1 = (NimStringDesc*)0;
	LOC1 = tofullpath_187273_155036129((*n0).info.fileindex);
	fullpath0 = findmodule_165484_2607990831(modulename0, LOC1);
	{
		if (!((fullpath0 ? fullpath0->Sup.len : 0) == ((NI) 0))) goto LA4;
		localerror_191080_155036129((*n0).info, ((Tmsgkind186002) 3), modulename0);
		result0 = ((NI32) -1);
	}
	goto LA2;
	LA4: ;
	{
		result0 = fileinfoidx_187017_155036129(fullpath0);
	}
	LA2: ;
	return result0;
}

static N_INLINE(NI, len_265080_850551059)(Tnode264794* n0) {
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

N_NIMCALL(Tsym264826*, importmoduleas_319443_2178338529)(Tnode264794* n0, Tsym264826* realmodule0) {
	Tsym264826* result0;
	result0 = (Tsym264826*)0;
	result0 = realmodule0;
	{
		if (!!(((*n0).kind == ((Tnodekind264020) 78)))) goto LA3;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NI LOC7;
		LOC6 = (NIM_BOOL)0;
		LOC7 = (NI)0;
		LOC7 = len_265080_850551059(n0);
		LOC6 = !((LOC7 == ((NI) 2)));
		if (LOC6) goto LA8;
		LOC6 = !(((*(*n0).kindU.S6.sons->data[((NI) 1)]).kind == ((Tnodekind264020) 2)));
		LA8: ;
		if (!LOC6) goto LA9;
		localerror_191080_155036129((*n0).info, ((Tmsgkind186002) 4), ((NimStringDesc*) &TMP3808));
	}
	goto LA1;
	LA9: ;
	{
		if (!!(((*(*(*n0).kindU.S6.sons->data[((NI) 1)]).kindU.S5.ident).Sup.id == (*(*realmodule0).name).Sup.id))) goto LA12;
		result0 = createmodulealias_267838_850551059(realmodule0, (*(*n0).kindU.S6.sons->data[((NI) 1)]).kindU.S5.ident, (*realmodule0).info);
	}
	goto LA1;
	LA12: ;
	LA1: ;
	return result0;
}

N_NIMCALL(Tsym264826*, myimportmodule_319474_2178338529)(Tcontext315020* c0, Tnode264794* n0) {
	Tsym264826* result0;
	NI32 f0;
	result0 = (Tsym264826*)0;
	f0 = checkmodulename_319051_2178338529(n0);
	{
		Tsym264826* LOC5;
		if (!!((f0 == ((NI32) -1)))) goto LA3;
		LOC5 = (Tsym264826*)0;
		LOC5 = gimportmodule_312078_2355241294((*c0).module, f0);
		result0 = importmoduleas_319443_2178338529(n0, LOC5);
		{
			if (!((*result0).info.fileindex == (*n0).info.fileindex)) goto LA8;
			localerror_191080_155036129((*n0).info, ((Tmsgkind186002) 4), ((NimStringDesc*) &TMP3809));
		}
		LA8: ;
		{
			if (!(((*result0).flags &(1U<<((NU)(((Tsymflag264184) 19))&31U)))!=0)) goto LA12;
			message_191095_155036129((*n0).info, ((Tmsgkind186002) 241), (*(*result0).name).s);
		}
		LA12: ;
	}
	LA3: ;
	return result0;
}

static N_INLINE(NIM_BOOL, isnil_241929_2627731572)(Intset241031 x0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = x0.head == 0;
	return result0;
}

static N_INLINE(NIM_BOOL, isroutine_269396_850551059)(Tsym264826* s0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = ((258048 &(1U<<((NU)((*s0).kind)&31U)))!=0);
	return result0;
}

static N_INLINE(NIM_BOOL, haspattern_269410_850551059)(Tsym264826* s0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = isroutine_269396_850551059(s0);
	if (!(LOC1)) goto LA2;
	LOC1 = !(((*(*(*s0).ast).kindU.S6.sons->data[((NI) 1)]).kind == ((Tnodekind264020) 1)));
	LA2: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(void, rawimportsymbol_319058_2178338529)(Tcontext315020* c0, Tsym264826* s0) {
	Tsym264826* check0;
	check0 = strtableget_271070_2984716966((*(*c0).importtable).symbols, (*s0).name);
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
			incl_241832_2627731572((&(*c0).ambiguoussymbols), (*s0).Sup.id);
			incl_241832_2627731572((&(*c0).ambiguoussymbols), (*check0).Sup.id);
		}
		LA9: ;
	}
	LA5: ;
	strtableadd_271065_2984716966((&(*(*c0).importtable).symbols), s0);
	{
		Ttype264832* etyp0;
		if (!((*s0).kind == ((Tsymkind264435) 7))) goto LA13;
		etyp0 = (*s0).typ;
		{
			NIM_BOOL LOC17;
			LOC17 = (NIM_BOOL)0;
			LOC17 = ((*etyp0).kind == ((Ttypekind264244) 1) || (*etyp0).kind == ((Ttypekind264244) 14));
			if (!(LOC17)) goto LA18;
			LOC17 = !((((*s0).flags &(1U<<((NU)(((Tsymflag264184) 9))&31U)))!=0));
			LA18: ;
			if (!LOC17) goto LA19;
			{
				NI j_319137_2178338529;
				NI HEX3Atmp_319193_2178338529;
				NI LOC22;
				NI res_319196_2178338529;
				j_319137_2178338529 = (NI)0;
				HEX3Atmp_319193_2178338529 = (NI)0;
				LOC22 = (NI)0;
				LOC22 = sonslen_267351_850551059((*etyp0).n);
				HEX3Atmp_319193_2178338529 = (NI)(LOC22 - ((NI) 1));
				res_319196_2178338529 = ((NI) 0);
				{
					while (1) {
						Tsym264826* e0;
						Tidentiter271088 it0;
						if (!(res_319196_2178338529 <= HEX3Atmp_319193_2178338529)) goto LA24;
						j_319137_2178338529 = res_319196_2178338529;
						e0 = (*(*(*etyp0).n).kindU.S6.sons->data[j_319137_2178338529]).kindU.S4.sym;
						{
							if (!!(((*e0).kind == ((Tsymkind264435) 19)))) goto LA27;
							internalerror_191100_155036129((*s0).info, ((NimStringDesc*) &TMP3811));
						}
						LA27: ;
						memset((void*)(&it0), 0, sizeof(it0));
						check0 = initidentiter_271091_2984716966((&it0), (*(*c0).importtable).symbols, (*e0).name);
						{
							while (1) {
								if (!!((check0 == NIM_NIL))) goto LA30;
								{
									if (!((*check0).Sup.id == (*e0).Sup.id)) goto LA33;
									e0 = NIM_NIL;
									goto LA29;
								}
								LA33: ;
								check0 = nextidentiter_271097_2984716966((&it0), (*(*c0).importtable).symbols);
							} LA30: ;
						} LA29: ;
						{
							if (!!((e0 == NIM_NIL))) goto LA37;
							rawimportsymbol_319058_2178338529(c0, e0);
						}
						LA37: ;
						res_319196_2178338529 += ((NI) 1);
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
			if (!((*s0).kind == ((Tsymkind264435) 15))) goto LA42;
			addconverter_315425_893308950(c0, s0);
		}
		LA42: ;
		{
			NIM_BOOL LOC46;
			LOC46 = (NIM_BOOL)0;
			LOC46 = haspattern_269410_850551059(s0);
			if (!LOC46) goto LA47;
			addpattern_315430_893308950(c0, s0);
		}
		LA47: ;
	}
	LA11: ;
}

N_NIMCALL(void, importallsymbolsexcept_319262_2178338529)(Tcontext315020* c0, Tsym264826* frommod0, Intset241031 exceptset0) {
	Ttabiter271075 i0;
	Tsym264826* s0;
	memset((void*)(&i0), 0, sizeof(i0));
	s0 = inittabiter_271077_2984716966((&i0), (*frommod0).kindU.S3.tab);
	{
		while (1) {
			if (!!((s0 == NIM_NIL))) goto LA2;
			{
				if (!!(((*s0).kind == ((Tsymkind264435) 6)))) goto LA5;
				{
					if (!!(((*s0).kind == ((Tsymkind264435) 19)))) goto LA9;
					{
						NimStringDesc* LOC15;
						if (!!(((21755776 &(1U<<((NU)((*s0).kind)&31U)))!=0))) goto LA13;
						LOC15 = (NimStringDesc*)0;
						LOC15 = rawNewString(reprEnum((NI)(*s0).kind, (&NTI264435))->Sup.len + 18);
appendString(LOC15, ((NimStringDesc*) &TMP3810));
appendString(LOC15, reprEnum((NI)(*s0).kind, (&NTI264435)));
						internalerror_191100_155036129((*s0).info, LOC15);
					}
					LA13: ;
					{
						NIM_BOOL LOC18;
						NIM_BOOL LOC20;
						LOC18 = (NIM_BOOL)0;
						LOC18 = isnil_241929_2627731572(exceptset0);
						if (LOC18) goto LA19;
						LOC20 = (NIM_BOOL)0;
						LOC20 = contains_241811_2627731572(exceptset0, (*(*s0).name).Sup.id);
						LOC18 = !(LOC20);
						LA19: ;
						if (!LOC18) goto LA21;
						rawimportsymbol_319058_2178338529(c0, s0);
					}
					LA21: ;
				}
				LA9: ;
			}
			LA5: ;
			s0 = nextiter_271082_2984716966((&i0), (*frommod0).kindU.S3.tab);
		} LA2: ;
	}
}

N_NIMCALL(Tnode264794*, evalimport_319001_2178338529)(Tcontext315020* c0, Tnode264794* n0) {
	Tnode264794* result0;
	Intset241031 emptyset0;
	result0 = (Tnode264794*)0;
	result0 = n0;
	memset((void*)(&emptyset0), 0, sizeof(emptyset0));
	{
		NI i_319510_2178338529;
		NI HEX3Atmp_319527_2178338529;
		NI LOC2;
		NI res_319530_2178338529;
		i_319510_2178338529 = (NI)0;
		HEX3Atmp_319527_2178338529 = (NI)0;
		LOC2 = (NI)0;
		LOC2 = sonslen_267351_850551059(n0);
		HEX3Atmp_319527_2178338529 = (NI)(LOC2 - ((NI) 1));
		res_319530_2178338529 = ((NI) 0);
		{
			while (1) {
				Tsym264826* m0;
				if (!(res_319530_2178338529 <= HEX3Atmp_319527_2178338529)) goto LA4;
				i_319510_2178338529 = res_319530_2178338529;
				m0 = myimportmodule_319474_2178338529(c0, (*n0).kindU.S6.sons->data[i_319510_2178338529]);
				{
					if (!!((m0 == NIM_NIL))) goto LA7;
					adddecl_317445_254525290(c0, m0);
					importallsymbolsexcept_319262_2178338529(c0, m0, emptyset0);
				}
				LA7: ;
				res_319530_2178338529 += ((NI) 1);
			} LA4: ;
		}
	}
	return result0;
}

N_NIMCALL(Tnode264794*, evalimportexcept_319585_2178338529)(Tcontext315020* c0, Tnode264794* n0) {
	Tnode264794* result0;
	Tsym264826* m0;
	result0 = (Tnode264794*)0;
	result0 = n0;
	checkminsonslen_315962_893308950(n0, ((NI) 2));
	m0 = myimportmodule_319474_2178338529(c0, (*n0).kindU.S6.sons->data[((NI) 0)]);
	{
		Intset241031 exceptset0;
		if (!!((m0 == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 0)]), newsymnode_266234_850551059(m0));
		adddecl_317445_254525290(c0, m0);
		memset((void*)(&exceptset0), 0, sizeof(exceptset0));
		chckNil((void*)(&exceptset0));
		memset((void*)(&exceptset0), 0, sizeof(exceptset0));
		initintset_241885_2627731572((&exceptset0));
		{
			NI i_319617_2178338529;
			NI HEX3Atmp_319622_2178338529;
			NI LOC6;
			NI res_319625_2178338529;
			i_319617_2178338529 = (NI)0;
			HEX3Atmp_319622_2178338529 = (NI)0;
			LOC6 = (NI)0;
			LOC6 = sonslen_267351_850551059(n0);
			HEX3Atmp_319622_2178338529 = (NI)(LOC6 - ((NI) 1));
			res_319625_2178338529 = ((NI) 1);
			{
				while (1) {
					Tident194012* ident0;
					if (!(res_319625_2178338529 <= HEX3Atmp_319622_2178338529)) goto LA8;
					i_319617_2178338529 = res_319625_2178338529;
					ident0 = considerquotedident_317004_254525290((*n0).kindU.S6.sons->data[i_319617_2178338529]);
					incl_241832_2627731572((&exceptset0), (*ident0).Sup.id);
					res_319625_2178338529 += ((NI) 1);
				} LA8: ;
			}
		}
		importallsymbolsexcept_319262_2178338529(c0, m0, exceptset0);
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, importsymbol_319200_2178338529)(Tcontext315020* c0, Tnode264794* n0, Tsym264826* frommod0) {
	Tident194012* ident0;
	Tsym264826* s0;
	ident0 = considerquotedident_317004_254525290(n0);
	s0 = strtableget_271070_2984716966((*frommod0).kindU.S3.tab, ident0);
	{
		if (!(s0 == NIM_NIL)) goto LA3;
		localerror_191080_155036129((*n0).info, ((Tmsgkind186002) 63), (*ident0).s);
	}
	goto LA1;
	LA3: ;
	{
		{
			if (!((*s0).kind == ((Tsymkind264435) 22))) goto LA8;
			loadstub_305825_1724185294(s0);
		}
		LA8: ;
		{
			if (!!(((21755776 &(1U<<((NU)((*s0).kind)&31U)))!=0))) goto LA12;
			internalerror_191100_155036129((*n0).info, ((NimStringDesc*) &TMP3813));
		}
		LA12: ;
		switch ((*s0).kind) {
		case ((Tsymkind264435) 12):
		case ((Tsymkind264435) 17):
		case ((Tsymkind264435) 16):
		case ((Tsymkind264435) 14):
		case ((Tsymkind264435) 13):
		case ((Tsymkind264435) 15):
		{
			Tidentiter271088 it0;
			Tsym264826* e0;
			memset((void*)(&it0), 0, sizeof(it0));
			e0 = initidentiter_271091_2984716966((&it0), (*frommod0).kindU.S3.tab, (*s0).name);
			{
				while (1) {
					if (!!((e0 == NIM_NIL))) goto LA16;
					{
						if (!!(((*(*e0).name).Sup.id == (*(*s0).name).Sup.id))) goto LA19;
						internalerror_191100_155036129((*n0).info, ((NimStringDesc*) &TMP3814));
					}
					LA19: ;
					rawimportsymbol_319058_2178338529(c0, e0);
					e0 = nextidentiter_271097_2984716966((&it0), (*frommod0).kindU.S3.tab);
				} LA16: ;
			}
		}
		break;
		default:
		{
			rawimportsymbol_319058_2178338529(c0, s0);
		}
		break;
		}
	}
	LA1: ;
}

N_NIMCALL(Tnode264794*, evalfrom_319005_2178338529)(Tcontext315020* c0, Tnode264794* n0) {
	Tnode264794* result0;
	Tsym264826* m0;
	result0 = (Tnode264794*)0;
	result0 = n0;
	checkminsonslen_315962_893308950(n0, ((NI) 2));
	m0 = myimportmodule_319474_2178338529(c0, (*n0).kindU.S6.sons->data[((NI) 0)]);
	{
		if (!!((m0 == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n0).kindU.S6.sons->data[((NI) 0)]), newsymnode_266234_850551059(m0));
		adddecl_317445_254525290(c0, m0);
		{
			NI i_319565_2178338529;
			NI HEX3Atmp_319578_2178338529;
			NI LOC6;
			NI res_319581_2178338529;
			i_319565_2178338529 = (NI)0;
			HEX3Atmp_319578_2178338529 = (NI)0;
			LOC6 = (NI)0;
			LOC6 = sonslen_267351_850551059(n0);
			HEX3Atmp_319578_2178338529 = (NI)(LOC6 - ((NI) 1));
			res_319581_2178338529 = ((NI) 1);
			{
				while (1) {
					if (!(res_319581_2178338529 <= HEX3Atmp_319578_2178338529)) goto LA8;
					i_319565_2178338529 = res_319581_2178338529;
					{
						if (!!(((*(*n0).kindU.S6.sons->data[i_319565_2178338529]).kind == ((Tnodekind264020) 23)))) goto LA11;
						importsymbol_319200_2178338529(c0, (*n0).kindU.S6.sons->data[i_319565_2178338529], m0);
					}
					LA11: ;
					res_319581_2178338529 += ((NI) 1);
				} LA8: ;
			}
		}
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, importallsymbols_319324_2178338529)(Tcontext315020* c0, Tsym264826* frommod0) {
	Intset241031 exceptset0;
	memset((void*)(&exceptset0), 0, sizeof(exceptset0));
	importallsymbolsexcept_319262_2178338529(c0, frommod0, exceptset0);
}
NIM_EXTERNC N_NOINLINE(void, compiler_importerInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_importerDatInit000)(void) {
}

