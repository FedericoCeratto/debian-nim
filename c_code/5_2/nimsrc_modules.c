/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tsym190843 Tsym190843;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tcell46347 Tcell46347;
typedef struct Tcellseq46363 Tcellseq46363;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46359 Tcellset46359;
typedef struct Tpagedesc46355 Tpagedesc46355;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct TY522054 TY522054;
typedef struct Tmoduleinmemory522017 Tmoduleinmemory522017;
typedef struct TY190933 TY190933;
typedef struct Tnode190813 Tnode190813;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Ttype190849 Ttype190849;
typedef struct Tident167021 Tident167021;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib190831 Tlib190831;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY119589 TY119589;
typedef struct Trodreader233030 Trodreader233030;
typedef struct Tllstream178204 Tllstream178204;
typedef struct TY86345 TY86345;
typedef struct TY456155 TY456155;
typedef struct Tcgen456038 Tcgen456038;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tindex233028 Tindex233028;
typedef struct Tiitable198274 Tiitable198274;
typedef struct Tiipairseq198272 Tiipairseq198272;
typedef struct Tidtable190861 Tidtable190861;
typedef struct Tidpairseq190859 Tidpairseq190859;
typedef struct Memfile231208 Memfile231208;
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct Intset187056 Intset187056;
typedef struct Ttrunk187052 Ttrunk187052;
typedef struct Ttrunkseq187054 Ttrunkseq187054;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tcproc456034 Tcproc456034;
typedef struct Tnodetable190873 Tnodetable190873;
typedef struct Tnodepairseq190871 Tnodepairseq190871;
typedef struct Tiipair198270 Tiipair198270;
typedef struct Tidpair190857 Tidpair190857;
typedef struct TY163351 TY163351;
typedef struct TY456106 TY456106;
typedef struct Tnodepair190869 Tnodepair190869;
typedef struct Tblock456032 Tblock456032;
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
struct  Tcell46347  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46363  {
NI len;
NI cap;
Tcell46347** d;
};
struct  Tcellset46359  {
NI counter;
NI max;
Tpagedesc46355* head;
Tpagedesc46355** data;
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
Tcellseq46363 zct;
Tcellseq46363 decstack;
Tcellset46359 cycleroots;
Tcellseq46363 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
struct  Tmoduleinmemory522017  {
NF compiledat;
NI32 crc;
TY190933* deps;
NU8 needsrecompile;
NU8 crcstatus;
};
typedef N_NIMCALL_PTR(Tnode190813*, TY241069) (Tsym190843* m, NI32 fileidx);
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
};
struct  Tsym190843  {
  Tidobj167015 Sup;
NU8 kind;
union{
struct {Ttypeseq190845* typeinstcache;
Tscope190837* typscope;
} S1;
struct {TY190944* procinstcache;
Tsym190843* gcunsafetyreason;
} S2;
struct {TY190944* usedgenerics;
Tstrtable190817 tab;
} S3;
struct {Tsym190843* guard;
} S4;
} kindU;
NU16 magic;
Ttype190849* typ;
Tident167021* name;
Tlineinfo163338 info;
Tsym190843* owner;
NU32 flags;
Tnode190813* ast;
NU32 options;
NI position;
NI offset;
Tloc190827 loc;
Tlib190831* annex;
Tnode190813* constraint;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tsym190843*, TY241064) (Tsym190843* m, NI32 fileidx);
struct TY119589 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct TY86345 {
NimStringDesc* Field0;
NI Field1;
};
typedef NI TY27420[8];
struct  Tpagedesc46355  {
Tpagedesc46355* next;
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
struct  Tnode190813  {
Ttype190849* typ;
Tlineinfo163338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym190843* sym;
} S4;
struct {Tident167021* ident;
} S5;
struct {Tnodeseq190807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
};
struct  Ttype190849  {
  Tidobj167015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq190845* sons;
Tnode190813* n;
Tsym190843* owner;
Tsym190843* sym;
Tsym190843* destructor;
Tsym190843* deepcopy;
Tsym190843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc190827 loc;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib190831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj161009* name;
Tnode190813* path;
};
struct  Tiitable198274  {
NI counter;
Tiipairseq198272* data;
};
struct  Tindex233028  {
NI lastidxkey;
NI lastidxval;
Tiitable198274 tab;
NimStringDesc* r;
NI offset;
};
struct  Tidtable190861  {
NI counter;
Tidpairseq190859* data;
};
struct  Memfile231208  {
void* mem;
NI size;
int handle;
};
struct  Trodreader233030  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY190933* moddeps;
TY190933* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex233028 index;
Tindex233028 imports;
NI readerindex;
NI line;
NI moduleid;
Tidtable190861 syms;
Memfile231208 memfile;
Tsymseq190815* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tllstream178204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Tpasscontext241005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef Ropeobj161009* Tcfilesections456022[18];
struct  Intset187056  {
NI counter;
NI max;
Ttrunk187052* head;
Ttrunkseq187054* data;
};
struct  Tlinkedlist130028  {
Tlistentry130022* head;
Tlistentry130022* tail;
NI counter;
};
struct  Tnodetable190873  {
NI counter;
Tnodepairseq190871* data;
};
typedef Ropeobj161009* TY456143[10];
struct  Tcgen456038  {
  Tpasscontext241005 Sup;
Tsym190843* module;
NimStringDesc* filename;
Tcfilesections456022 s;
NIM_BOOL preventstacktrace;
NIM_BOOL usesthreadvars;
NIM_BOOL framedeclared;
NIM_BOOL isheaderfile;
NIM_BOOL includesstringh;
NIM_BOOL objhaskidsvalid;
NimStringDesc* cfilename;
Tidtable190861 typecache;
Tidtable190861 forwtypecache;
Intset187056 declaredthings;
Intset187056 declaredprotos;
Tlinkedlist130028 headerfiles;
Intset187056 typeinfomarker;
Tcproc456034* initproc;
Tcproc456034* postinitproc;
Tcproc456034* preinitproc;
Ttypeseq190845* typestack;
Tnodetable190873 datacache;
Tsymseq190815* forwardedprocs;
NI typenodes;
NI nimtypes;
Ropeobj161009* typenodesname;
Ropeobj161009* nimtypesname;
NI labels;
TY456143 extensionloaders;
Ropeobj161009* injectstmt;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct  Tiipair198270  {
NI key;
NI val;
};
struct  Tidpair190857  {
Tidobj167015* key;
TNimObject* val;
};
struct  Ttrunk187052  {
Ttrunk187052* next;
NI key;
TY27420 bits;
};
struct  Tcproc456034  {
Tsym190843* prc;
NIM_BOOL beforeretneeded;
NIM_BOOL threadvaraccessed;
Tlineinfo163338 lastlineinfo;
Tnodeseq190807* nestedtrystmts;
NI inexceptblock;
TY163351* finallysafepoints;
NI labels;
TY456106* blocks;
NI breakidx;
NU32 options;
NI maxframelen;
Tcgen456038* module;
NI withinloop;
NI splitdecls;
NI gcframeid;
Ropeobj161009* gcframetype;
};
struct  Tnodepair190869  {
NI h;
Tnode190813* key;
NI val;
};
typedef Ropeobj161009* Tcprocsections456026[3];
struct  Tblock456032  {
NI id;
Ropeobj161009* label;
Tcprocsections456026 sections;
NIM_BOOL isloop;
NI16 nestedtrystmts;
NI16 nestedexceptstmts;
NI16 framelen;
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct TY522054 {
  TGenericSeq Sup;
  Tmoduleinmemory522017 data[SEQ_DECL_SIZE];
};
struct TY456155 {
  TGenericSeq Sup;
  Tcgen456038* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct Tiipairseq198272 {
  TGenericSeq Sup;
  Tiipair198270 data[SEQ_DECL_SIZE];
};
struct Tidpairseq190859 {
  TGenericSeq Sup;
  Tidpair190857 data[SEQ_DECL_SIZE];
};
struct Ttrunkseq187054 {
  TGenericSeq Sup;
  Ttrunk187052* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq190871 {
  TGenericSeq Sup;
  Tnodepair190869 data[SEQ_DECL_SIZE];
};
struct TY163351 {
  TGenericSeq Sup;
  Ropeobj161009* data[SEQ_DECL_SIZE];
};
struct TY456106 {
  TGenericSeq Sup;
  Tblock456032 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1085)(void* p, NI op);
N_NIMCALL(Tnode190813*, includemodule_522851)(Tsym190843* s, NI32 fileidx);
N_NIMCALL(Tnode190813*, parsefile_218041)(NI32 fileidx);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(void, adddep_522148)(Tsym190843* x, NI32 dep);
N_NIMCALL(void, safeadd_522172)(TY190933** x, NI32 y);
N_NIMCALL(void, docrc_522130)(NI32 fileidx);
N_NIMCALL(NI32, crcfromfile_169051)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, tofilename_164263)(NI32 fileidx);
N_NIMCALL(Tsym190843*, importmodule_522815)(Tsym190843* s, NI32 fileidx);
N_NIMCALL(Tsym190843*, compilemodule_522726)(NI32 fileidx, NU32 flags);
N_NIMCALL(Tsym190843*, getmodule_522077)(NI32 fileidx);
N_NIMCALL(Tsym190843*, newmodule_522646)(NI32 fileidx);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, tofullpath_164273)(NI32 fileidx);
N_NIMCALL(Tident167021*, getident_167463)(NimStringDesc* identifier);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY119589* Result);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, isnimidentifier_181257)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_164960)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tlineinfo163338, newlineinfo_163866)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(Tsym190843*, newsym_191655)(NU8 symkind, Tident167021* name, Tsym190843* owner, Tlineinfo163338 info);
N_NIMCALL(NimStringDesc*, getpackagename_154825)(NimStringDesc* path);
N_NIMCALL(void, initstrtable_194007)(Tstrtable190817* x);
N_NIMCALL(void, strtableadd_198103)(Tstrtable190817* t, Tsym190843* n);
N_NIMCALL(Trodreader233030*, handlesymbolfile_233071)(Tsym190843* module);
N_NIMCALL(void, internalerror_165218)(NimStringDesc* errmsg);
static N_INLINE(NI, getid_189404)(void);
N_NIMCALL(void, processmodule_241056)(Tsym190843* module, Tllstream178204* stream, Trodreader233030* rd);
N_NIMCALL(NU8, checkdepmem_522398)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, crcchanged_522101)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, HEX24_165306)(TY86345 x);
N_NIMCALL(void, resetmodule_522317)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52222)(Tcell46347* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46347* c);
static N_INLINE(void, rtladdcycleroot_50623)(Tcell46347* c);
N_NOINLINE(void, incl_47065)(Tcellset46359* s, Tcell46347* cell);
static N_INLINE(void, decref_51804)(Tcell46347* c);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_522183)(TY190933* x, TY190933* y);
N_NIMCALL(void, localerror_165155)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, wantmainmodule_522922)(void);
N_NIMCALL(void, fatal_165123)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NI32, fileinfoidx_163853)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, HEX2F_119292)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, compilesystemmodule_522901)(void);
N_NIMCALL(void, resetpackagecache_154605)(void);
STRING_LITERAL(TMP1432, "-", 1);
STRING_LITERAL(TMP1506, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TMP1511, "modules.nim", 11);
NIM_CONST TY86345 TMP1510 = {((NimStringDesc*) &TMP1511),
((NI) 41)}
;
STRING_LITERAL(TMP4266, "", 0);
STRING_LITERAL(TMP4267, "nim", 3);
STRING_LITERAL(TMP4268, "system.nim", 10);
STRING_LITERAL(TMP4979, "stdin", 5);
Tsymseq190815* gcompiledmodules_522053;
extern TNimType NTI190815; /* TSymSeq */
extern Tgcheap48216 gch_48244;
TY522054* gmemcachedata_522071;
TNimType NTI522017; /* TModuleInMemory */
extern TNimType NTI128; /* float */
extern TNimType NTI169015; /* TCrc32 */
extern TNimType NTI190933; /* seq[int32] */
TNimType NTI522013; /* TNeedRecompile */
TNimType NTI522015; /* TCrcStatus */
TNimType NTI522054; /* seq[TModuleInMemory] */
extern TY241069 gincludefile_241073;
extern NU32 gglobaloptions_154128;
extern TY241064 gimportmodule_241068;
extern TNimType NTI190811; /* PSym */
extern TNimType NTI190843; /* TSym */
extern NU8 gcmd_154130;
extern NI gfrontendid_189012;
extern NF glastcmdtime_154141;
extern TY456155* gmodules_456172;
Tsym190843* stdinmodule_522998;
extern NimStringDesc* gprojectfull_154236;
extern Tlineinfo163338 gcmdlineinfo_163921;
extern NI32 gprojectmainidx_154237;
extern NimStringDesc* libpath_154233;
extern Tsym190843* systemmodule_238019;
extern NI32 systemfileidx_163433;

static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr) {
	Tcell46347* result;
	result = 0;
	result = ((Tcell46347*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46347))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46347* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46347* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}
N_NIMCALL(void, TMP1085)(void* p, NI op) {
	TY522054* a;
	NI LOC1;
	a = (TY522054*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].deps, op);
	}
}

N_NIMCALL(void, adddep_522148)(Tsym190843* x, NI32 dep) {
	{
		if (!((gmemcachedata_522071 ? gmemcachedata_522071->Sup.len : 0) <= ((NI) (dep)))) goto LA3;
		gmemcachedata_522071 = (TY522054*) setLengthSeq(&(gmemcachedata_522071)->Sup, sizeof(Tmoduleinmemory522017), ((NI) ((NI32)(dep + ((NI32) 1)))));
	}
	LA3: ;
	safeadd_522172((&gmemcachedata_522071->data[(*x).position].deps), dep);
}

N_NIMCALL(void, docrc_522130)(NI32 fileidx) {
	{
		NimStringDesc* LOC5;
		if (!(gmemcachedata_522071->data[fileidx].crcstatus == ((NU8) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = tofilename_164263(fileidx);
		gmemcachedata_522071->data[fileidx].crc = crcfromfile_169051(LOC5);
	}
	LA3: ;
}

N_NIMCALL(Tnode190813*, includemodule_522851)(Tsym190843* s, NI32 fileidx) {
	Tnode190813* result;
	result = 0;
	result = parsefile_218041(fileidx);
	{
		if (!((gglobaloptions_154128 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		{
			if (!((gmemcachedata_522071 ? gmemcachedata_522071->Sup.len : 0) <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_522071 = (TY522054*) setLengthSeq(&(gmemcachedata_522071)->Sup, sizeof(Tmoduleinmemory522017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		adddep_522148(s, fileidx);
		docrc_522130(fileidx);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Tsym190843*, getmodule_522077)(NI32 fileidx) {
	Tsym190843* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < (gcompiledmodules_522053 ? gcompiledmodules_522053->Sup.len : 0));
		LA4: ;
		if (!LOC3) goto LA5;
		result = gcompiledmodules_522053->data[fileidx];
	}
	LA5: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46347* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46347* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49846((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym190843*, newmodule_522646)(NI32 fileidx) {
	Tsym190843* result;
	NimStringDesc* filename;
	TY119589 LOC1;
	NimStringDesc* LOC9;
	Tident167021* LOC10;
	result = 0;
	result = (Tsym190843*) newObj((&NTI190811), sizeof(Tsym190843));
	(*result).Sup.Sup.m_type = (&NTI190843);
	(*result).Sup.id = ((NI) -1);
	(*result).kind = ((NU8) 6);
	filename = tofullpath_164273(fileidx);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitFile(filename, (&LOC1));
	asgnRefNoCycle((void**) (&(*result).name), getident_167463(LOC1.Field1));
	{
		NIM_BOOL LOC4;
		NIM_BOOL LOC6;
		LOC4 = 0;
		LOC4 = !(eqStrings((*(*result).name).s, ((NimStringDesc*) &TMP1432)));
		if (!(LOC4)) goto LA5;
		LOC6 = 0;
		LOC6 = isnimidentifier_181257((*(*result).name).s);
		LOC4 = !(LOC6);
		LA5: ;
		if (!LOC4) goto LA7;
		rawmessage_164960(((NU16) 21), (*(*result).name).s);
	}
	LA7: ;
	(*result).info = newlineinfo_163866(fileidx, ((NI) 1), ((NI) 1));
	LOC9 = 0;
	LOC9 = getpackagename_154825(filename);
	LOC10 = 0;
	LOC10 = getident_167463(LOC9);
	asgnRefNoCycle((void**) (&(*result).owner), newsym_191655(((NU8) 24), LOC10, NIM_NIL, (*result).info));
	(*result).position = ((NI) (fileidx));
	{
		if (!((gmemcachedata_522071 ? gmemcachedata_522071->Sup.len : 0) <= ((NI) (fileidx)))) goto LA13;
		gmemcachedata_522071 = (TY522054*) setLengthSeq(&(gmemcachedata_522071)->Sup, sizeof(Tmoduleinmemory522017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA13: ;
	{
		if (!((gcompiledmodules_522053 ? gcompiledmodules_522053->Sup.len : 0) <= ((NI) (fileidx)))) goto LA17;
		gcompiledmodules_522053 = (Tsymseq190815*) setLengthSeq(&(gcompiledmodules_522053)->Sup, sizeof(Tsym190843*), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA17: ;
	asgnRefNoCycle((void**) (&gcompiledmodules_522053->data[(*result).position]), result);
	(*result).flags |= ((NI32)1)<<((((NU8) 0))%(sizeof(NI32)*8));
	initstrtable_194007((&(*result).kindU.S3.tab));
	strtableadd_198103((&(*result).kindU.S3.tab), result);
	return result;
}

static N_INLINE(NI, getid_189404)(void) {
	NI result;
	result = 0;
	result = gfrontendid_189012;
	gfrontendid_189012 += ((NI) 1);
	return result;
}

N_NIMCALL(NIM_BOOL, crcchanged_522101)(NI32 fileidx) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < (gmemcachedata_522071 ? gmemcachedata_522071->Sup.len : 0));
		LA4: ;
		if (!!(LOC3)) goto LA5;
		LOC7 = 0;
		LOC7 = HEX24_165306(TMP1510);
		internalerror_165218(LOC7);
	}
	LA5: ;
	switch (gmemcachedata_522071->data[fileidx].crcstatus) {
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
		NI32 newcrc;
		NimStringDesc* LOC11;
		LOC11 = 0;
		LOC11 = tofilename_164263(fileidx);
		newcrc = crcfromfile_169051(LOC11);
		result = !((newcrc == gmemcachedata_522071->data[fileidx].crc));
		gmemcachedata_522071->data[fileidx].crc = newcrc;
		{
			if (!result) goto LA14;
			gmemcachedata_522071->data[fileidx].crcstatus = ((NU8) 2);
		}
		goto LA12;
		LA14: ;
		{
			gmemcachedata_522071->data[fileidx].crcstatus = ((NU8) 3);
		}
		LA12: ;
	}
	break;
	case ((NU8) 0):
	{
		NimStringDesc* LOC18;
		LOC18 = 0;
		LOC18 = tofilename_164263(fileidx);
		gmemcachedata_522071->data[fileidx].crc = crcfromfile_169051(LOC18);
		result = NIM_TRUE;
		{
			if (!result) goto LA21;
			gmemcachedata_522071->data[fileidx].crcstatus = ((NU8) 2);
		}
		goto LA19;
		LA21: ;
		{
			gmemcachedata_522071->data[fileidx].crcstatus = ((NU8) 3);
		}
		LA19: ;
	}
	break;
	}
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46347* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50623)(Tcell46347* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_47065((&gch_48244.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_52222)(Tcell46347* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49867(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50623(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_51804)(Tcell46347* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
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

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Tcell46347* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49846(src);
		incref_52222(LOC5);
	}
	LA3: ;
	{
		Tcell46347* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49846((*dest));
		decref_51804(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, resetmodule_522317)(NI32 fileidx) {
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gmemcachedata_522071 ? gmemcachedata_522071->Sup.len : 0)))))) goto LA3;
		gmemcachedata_522071->data[fileidx].needsrecompile = ((NU8) 2);
	}
	LA3: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gcompiledmodules_522053 ? gcompiledmodules_522053->Sup.len : 0)))))) goto LA7;
		asgnRefNoCycle((void**) (&gcompiledmodules_522053->data[fileidx]), NIM_NIL);
	}
	LA7: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gmodules_456172 ? gmodules_456172->Sup.len : 0)))))) goto LA11;
		asgnRef((void**) (&gmodules_456172->data[fileidx]), NIM_NIL);
	}
	LA11: ;
}

N_NIMCALL(NU8, checkdepmem_522398)(NI32 fileidx) {
	NU8 result;
{	result = 0;
	{
		if (!!((gmemcachedata_522071->data[fileidx].needsrecompile == ((NU8) 0)))) goto LA3;
		result = gmemcachedata_522071->data[fileidx].needsrecompile;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = ((gglobaloptions_154128 &(1<<((((NU8) 1))&31)))!=0);
		if (LOC7) goto LA8;
		LOC7 = crcchanged_522101(fileidx);
		LA8: ;
		if (!LOC7) goto LA9;
		resetmodule_522317(fileidx);
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = HEX3DHEX3D_522183(gmemcachedata_522071->data[fileidx].deps, NIM_NIL);
		if (!!(LOC13)) goto LA14;
		gmemcachedata_522071->data[fileidx].needsrecompile = ((NU8) 3);
		{
			NI32 dep_522611;
			TY190933* HEX3Atmp_522625;
			NI i_522628;
			NI L_522630;
			dep_522611 = 0;
			HEX3Atmp_522625 = 0;
			HEX3Atmp_522625 = gmemcachedata_522071->data[fileidx].deps;
			i_522628 = ((NI) 0);
			L_522630 = (HEX3Atmp_522625 ? HEX3Atmp_522625->Sup.len : 0);
			{
				while (1) {
					NU8 d;
					if (!(i_522628 < L_522630)) goto LA18;
					dep_522611 = HEX3Atmp_522625->data[i_522628];
					d = checkdepmem_522398(dep_522611);
					{
						if (!((20 &(1<<((d)&7)))!=0)) goto LA21;
						resetmodule_522317(fileidx);
						result = ((NU8) 2);
						goto BeforeRet;
					}
					LA21: ;
					i_522628 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	LA14: ;
	gmemcachedata_522071->data[fileidx].needsrecompile = ((NU8) 1);
	result = ((NU8) 1);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym190843*, compilemodule_522726)(NI32 fileidx, NU32 flags) {
	Tsym190843* result;
{	result = 0;
	result = getmodule_522077(fileidx);
	{
		Trodreader233030* rd;
		if (!(result == NIM_NIL)) goto LA3;
		{
			if (!((gmemcachedata_522071 ? gmemcachedata_522071->Sup.len : 0) <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_522071 = (TY522054*) setLengthSeq(&(gmemcachedata_522071)->Sup, sizeof(Tmoduleinmemory522017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		gmemcachedata_522071->data[fileidx].needsrecompile = ((NU8) 3);
		result = newmodule_522646(fileidx);
		rd = 0;
		(*result).flags = ((*result).flags | flags);
		{
			if (!((18438 &(1<<((gcmd_154130)&31)))!=0)) goto LA11;
			rd = handlesymbolfile_233071(result);
			{
				if (!((*result).Sup.id < ((NI) 0))) goto LA15;
				internalerror_165218(((NimStringDesc*) &TMP1506));
				goto BeforeRet;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*result).Sup.id = getid_189404();
		}
		LA9: ;
		processmodule_241056(result, NIM_NIL, rd);
		{
			if (!((gglobaloptions_154128 &(1<<((((NU8) 15))&31)))!=0)) goto LA20;
			gmemcachedata_522071->data[fileidx].compiledat = glastcmdtime_154141;
			gmemcachedata_522071->data[fileidx].needsrecompile = ((NU8) 4);
			docrc_522130(fileidx);
		}
		LA20: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NU8 LOC25;
			LOC25 = 0;
			LOC25 = checkdepmem_522398(fileidx);
			if (!(LOC25 == ((NU8) 2))) goto LA26;
			result = compilemodule_522726(fileidx, flags);
		}
		goto LA23;
		LA26: ;
		{
			result = gcompiledmodules_522053->data[fileidx];
		}
		LA23: ;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym190843*, importmodule_522815)(Tsym190843* s, NI32 fileidx) {
	Tsym190843* result;
	result = 0;
	result = compilemodule_522726(fileidx, 0);
	{
		if (!((gglobaloptions_154128 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		adddep_522148(s, fileidx);
	}
	LA3: ;
	{
		if (!(((*result).flags &(1<<((((NU8) 13))&31)))!=0)) goto LA7;
		localerror_165155((*result).info, ((NU16) 40), (*(*result).name).s);
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, wantmainmodule_522922)(void) {
	NimStringDesc* LOC5;
	{
		if (!((gprojectfull_154236 ? gprojectfull_154236->Sup.len : 0) == ((NI) 0))) goto LA3;
		fatal_165123(gcmdlineinfo_163921, ((NU16) 186), ((NimStringDesc*) &TMP4266));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = nosaddFileExt(gprojectfull_154236, ((NimStringDesc*) &TMP4267));
	gprojectmainidx_154237 = fileinfoidx_163853(LOC5);
}

N_NIMCALL(void, compilesystemmodule_522901)(void) {
	{
		NimStringDesc* LOC5;
		Tsym190843* LOC6;
		if (!(systemmodule_238019 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = HEX2F_119292(libpath_154233, ((NimStringDesc*) &TMP4268));
		systemfileidx_163433 = fileinfoidx_163853(LOC5);
		LOC6 = 0;
		LOC6 = compilemodule_522726(systemfileidx_163433, 8192);
	}
	LA3: ;
}

N_NIMCALL(void, compileproject_522985)(NI32 projectfileidx) {
	NI32 systemfileidx;
	NimStringDesc* LOC1;
	NI32 projectfile;
	wantmainmodule_522922();
	LOC1 = 0;
	LOC1 = HEX2F_119292(libpath_154233, ((NimStringDesc*) &TMP4268));
	systemfileidx = fileinfoidx_163853(LOC1);
	{
		if (!(projectfileidx < ((NI32) 0))) goto LA4;
		projectfile = gprojectmainidx_154237;
	}
	goto LA2;
	LA4: ;
	{
		projectfile = projectfileidx;
	}
	LA2: ;
	{
		Tsym190843* LOC11;
		if (!(projectfile == systemfileidx)) goto LA9;
		LOC11 = 0;
		LOC11 = compilemodule_522726(projectfile, 12288);
	}
	goto LA7;
	LA9: ;
	{
		Tsym190843* LOC13;
		compilesystemmodule_522901();
		LOC13 = 0;
		LOC13 = compilemodule_522726(projectfile, 4096);
	}
	LA7: ;
}

N_NIMCALL(Tsym190843*, makestdinmodule_523003)(void) {
	Tsym190843* result;
	result = 0;
	{
		NI32 LOC5;
		if (!(stdinmodule_522998 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = fileinfoidx_163853(((NimStringDesc*) &TMP4979));
		asgnRefNoCycle((void**) (&stdinmodule_522998), newmodule_522646(LOC5));
		(*stdinmodule_522998).Sup.id = getid_189404();
	}
	LA3: ;
	result = stdinmodule_522998;
	return result;
}

N_NIMCALL(void, resetallmodules_522350)(void) {
	{
		NI i_522362;
		NI HEX3Atmp_522376;
		NI res_522379;
		i_522362 = 0;
		HEX3Atmp_522376 = 0;
		HEX3Atmp_522376 = (gcompiledmodules_522053 ? (gcompiledmodules_522053->Sup.len-1) : -1);
		res_522379 = ((NI) 0);
		{
			while (1) {
				if (!(res_522379 <= HEX3Atmp_522376)) goto LA3;
				i_522362 = res_522379;
				{
					if (!!((gcompiledmodules_522053->data[i_522362] == NIM_NIL))) goto LA6;
					resetmodule_522317(((NI32) (i_522362)));
				}
				LA6: ;
				res_522379 += ((NI) 1);
			} LA3: ;
		}
	}
	resetpackagecache_154605();
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_modulesInit)(void) {
	if (gcompiledmodules_522053) nimGCunrefNoCycle(gcompiledmodules_522053);
	gcompiledmodules_522053 = (Tsymseq190815*) newSeqRC1((&NTI190815), 0);
	if (gmemcachedata_522071) nimGCunrefNoCycle(gmemcachedata_522071);
	gmemcachedata_522071 = (TY522054*) newSeqRC1((&NTI522054), 0);
	gincludefile_241073 = includemodule_522851;
	gimportmodule_241068 = importmodule_522815;
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_modulesDatInit)(void) {
static TNimNode* TMP1078[5];
static TNimNode* TMP1079[5];
NI TMP1081;
static char* NIM_CONST TMP1080[5] = {
"Maybe", 
"No", 
"Yes", 
"Probing", 
"Recompiled"};
static TNimNode* TMP1082[4];
NI TMP1084;
static char* NIM_CONST TMP1083[4] = {
"crcNotTaken", 
"crcCached", 
"crcHasChanged", 
"crcNotChanged"};
static TNimNode TMP1076[17];
NTI522017.size = sizeof(Tmoduleinmemory522017);
NTI522017.kind = 18;
NTI522017.base = 0;
NTI522017.flags = 2;
TMP1078[0] = &TMP1076[1];
TMP1076[1].kind = 1;
TMP1076[1].offset = offsetof(Tmoduleinmemory522017, compiledat);
TMP1076[1].typ = (&NTI128);
TMP1076[1].name = "compiledAt";
TMP1078[1] = &TMP1076[2];
TMP1076[2].kind = 1;
TMP1076[2].offset = offsetof(Tmoduleinmemory522017, crc);
TMP1076[2].typ = (&NTI169015);
TMP1076[2].name = "crc";
TMP1078[2] = &TMP1076[3];
TMP1076[3].kind = 1;
TMP1076[3].offset = offsetof(Tmoduleinmemory522017, deps);
TMP1076[3].typ = (&NTI190933);
TMP1076[3].name = "deps";
TMP1078[3] = &TMP1076[4];
NTI522013.size = sizeof(NU8);
NTI522013.kind = 14;
NTI522013.base = 0;
NTI522013.flags = 3;
for (TMP1081 = 0; TMP1081 < 5; TMP1081++) {
TMP1076[TMP1081+5].kind = 1;
TMP1076[TMP1081+5].offset = TMP1081;
TMP1076[TMP1081+5].name = TMP1080[TMP1081];
TMP1079[TMP1081] = &TMP1076[TMP1081+5];
}
TMP1076[10].len = 5; TMP1076[10].kind = 2; TMP1076[10].sons = &TMP1079[0];
NTI522013.node = &TMP1076[10];
TMP1076[4].kind = 1;
TMP1076[4].offset = offsetof(Tmoduleinmemory522017, needsrecompile);
TMP1076[4].typ = (&NTI522013);
TMP1076[4].name = "needsRecompile";
TMP1078[4] = &TMP1076[11];
NTI522015.size = sizeof(NU8);
NTI522015.kind = 14;
NTI522015.base = 0;
NTI522015.flags = 3;
for (TMP1084 = 0; TMP1084 < 4; TMP1084++) {
TMP1076[TMP1084+12].kind = 1;
TMP1076[TMP1084+12].offset = TMP1084;
TMP1076[TMP1084+12].name = TMP1083[TMP1084];
TMP1082[TMP1084] = &TMP1076[TMP1084+12];
}
TMP1076[16].len = 4; TMP1076[16].kind = 2; TMP1076[16].sons = &TMP1082[0];
NTI522015.node = &TMP1076[16];
TMP1076[11].kind = 1;
TMP1076[11].offset = offsetof(Tmoduleinmemory522017, crcstatus);
TMP1076[11].typ = (&NTI522015);
TMP1076[11].name = "crcStatus";
TMP1076[0].len = 5; TMP1076[0].kind = 2; TMP1076[0].sons = &TMP1078[0];
NTI522017.node = &TMP1076[0];
NTI522054.size = sizeof(TY522054*);
NTI522054.kind = 24;
NTI522054.base = (&NTI522017);
NTI522054.flags = 2;
NTI522054.marker = TMP1085;
}

