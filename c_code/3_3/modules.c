/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tsymseq225818 tsymseq225818;
typedef struct tsym225846 tsym225846;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell45133 tcell45133;
typedef struct tcellseq45149 tcellseq45149;
typedef struct tgcheap47216 tgcheap47216;
typedef struct tcellset45145 tcellset45145;
typedef struct tpagedesc45141 tpagedesc45141;
typedef struct tmemregion27410 tmemregion27410;
typedef struct tsmallchunk26640 tsmallchunk26640;
typedef struct tllchunk27404 tllchunk27404;
typedef struct tbigchunk26642 tbigchunk26642;
typedef struct tintset26617 tintset26617;
typedef struct ttrunk26613 ttrunk26613;
typedef struct tavlnode27408 tavlnode27408;
typedef struct tgcstat47214 tgcstat47214;
typedef struct TY611058 TY611058;
typedef struct tmoduleinmemory611017 tmoduleinmemory611017;
typedef struct TY225936 TY225936;
typedef struct tnode225816 tnode225816;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq225848 ttypeseq225848;
typedef struct ttype225852 ttype225852;
typedef struct tscope225840 tscope225840;
typedef struct TY225947 TY225947;
typedef struct tinstantiation225836 tinstantiation225836;
typedef struct tstrtable225820 tstrtable225820;
typedef struct tident200021 tident200021;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tloc225830 tloc225830;
typedef struct trope177009 trope177009;
typedef struct tlib225834 tlib225834;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY117804 TY117804;
typedef struct trodreader276030 trodreader276030;
typedef struct tllstream211204 tllstream211204;
typedef struct TY84945 TY84945;
typedef struct TY549150 TY549150;
typedef struct tcgen549035 tcgen549035;
typedef struct tbasechunk26638 tbasechunk26638;
typedef struct tfreecell26630 tfreecell26630;
typedef struct tnodeseq225810 tnodeseq225810;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tindex276028 tindex276028;
typedef struct tiitable235274 tiitable235274;
typedef struct tiipairseq235272 tiipairseq235272;
typedef struct tiipair235270 tiipair235270;
typedef struct tidtable225864 tidtable225864;
typedef struct tidpairseq225862 tidpairseq225862;
typedef struct tidpair225860 tidpair225860;
typedef struct memfile274208 memfile274208;
typedef struct tpasscontext286005 tpasscontext286005;
typedef struct intset222056 intset222056;
typedef struct ttrunk222052 ttrunk222052;
typedef struct ttrunkseq222054 ttrunkseq222054;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tcproc549031 tcproc549031;
typedef struct tnodetable225876 tnodetable225876;
typedef struct tnodepairseq225874 tnodepairseq225874;
typedef struct tnodepair225872 tnodepair225872;
typedef struct TY195552 TY195552;
typedef struct TY549102 TY549102;
typedef struct tblock549029 tblock549029;
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell45133  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45149  {
NI Len;
NI Cap;
tcell45133** D;
};
struct  tcellset45145  {
NI Counter;
NI Max;
tpagedesc45141* Head;
tpagedesc45141** Data;
};
typedef tsmallchunk26640* TY27422[512];
typedef ttrunk26613* ttrunkbuckets26615[256];
struct  tintset26617  {
ttrunkbuckets26615 Data;
};
struct  tmemregion27410  {
NI Minlargeobj;
NI Maxlargeobj;
TY27422 Freesmallchunks;
tllchunk27404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26642* Freechunkslist;
tintset26617 Chunkstarts;
tavlnode27408* Root;
tavlnode27408* Deleted;
tavlnode27408* Last;
tavlnode27408* Freeavlnodes;
};
struct  tgcstat47214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45149 Zct;
tcellseq45149 Decstack;
tcellset45145 Cycleroots;
tcellseq45149 Tempstack;
NI Recgclock;
tmemregion27410 Region;
tgcstat47214 Stat;
};
struct  tmoduleinmemory611017  {
NF Compiledat;
NI32 Crc;
TY225936* Deps;
NU8 Needsrecompile;
NU8 Crcstatus;
};
typedef N_NIMCALL_PTR(tnode225816*, TY286069) (tsym225846* m, NI32 fileidx);
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable225820  {
NI Counter;
tsymseq225818* Data;
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc225830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype225852* T;
trope177009* R;
trope177009* Heaproot;
};
struct  tsym225846  {
  tidobj200015 Sup;
NU8 Kind;
union {
struct {ttypeseq225848* Typeinstcache;
tscope225840* Typscope;
} S1;
struct {TY225947* Procinstcache;
tscope225840* Scope;
} S2;
struct {TY225947* Usedgenerics;
tstrtable225820 Tab;
} S3;
struct {tsym225846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype225852* Typ;
tident200021* Name;
tlineinfo195539 Info;
tsym225846* Owner;
NU32 Flags;
tnode225816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc225830 Loc;
tlib225834* Annex;
tnode225816* Constraint;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(tsym225846*, TY286064) (tsym225846* m, NI32 fileidx);
struct TY117804 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
struct TY84945 {
NimStringDesc* Field0;
NI Field1;
};
typedef NI TY26620[8];
struct  tpagedesc45141  {
tpagedesc45141* Next;
NI Key;
TY26620 Bits;
};
struct  tbasechunk26638  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26640  {
  tbasechunk26638 Sup;
tsmallchunk26640* Next;
tsmallchunk26640* Prev;
tfreecell26630* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27404  {
NI Size;
NI Acc;
tllchunk27404* Next;
};
struct  tbigchunk26642  {
  tbasechunk26638 Sup;
tbigchunk26642* Next;
tbigchunk26642* Prev;
NI Align;
NF Data;
};
struct  ttrunk26613  {
ttrunk26613* Next;
NI Key;
TY26620 Bits;
};
typedef tavlnode27408* TY27414[2];
struct  tavlnode27408  {
TY27414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tnode225816  {
ttype225852* Typ;
tlineinfo195539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym225846* Sym;
} S4;
struct {tident200021* Ident;
} S5;
struct {tnodeseq225810* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  ttype225852  {
  tidobj200015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq225848* Sons;
tnode225816* N;
tsym225846* Owner;
tsym225846* Sym;
tsym225846* Destructor;
tsym225846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc225830 Loc;
};
struct  tscope225840  {
NI Depthlevel;
tstrtable225820 Symbols;
tnodeseq225810* Usingsyms;
tscope225840* Parent;
};
struct  tinstantiation225836  {
tsym225846* Sym;
ttypeseq225848* Concretetypes;
TY225936* Usedby;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib225834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode225816* Path;
};
struct  tiipair235270  {
NI Key;
NI Val;
};
struct  tiitable235274  {
NI Counter;
tiipairseq235272* Data;
};
struct  tindex276028  {
NI Lastidxkey;
NI Lastidxval;
tiitable235274 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair225860  {
tidobj200015* Key;
TNimObject* Val;
};
struct  tidtable225864  {
NI Counter;
tidpairseq225862* Data;
};
struct  memfile274208  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader276030  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY225936* Moddeps;
TY225936* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex276028 Index;
tindex276028 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable225864 Syms;
memfile274208 Memfile;
tsymseq225818* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct  tllstream211204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tpasscontext286005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
typedef trope177009* tcfilesections549019[18];
struct  intset222056  {
NI Counter;
NI Max;
ttrunk222052* Head;
ttrunkseq222054* Data;
};
struct  tlinkedlist127028  {
tlistentry127022* Head;
tlistentry127022* Tail;
NI Counter;
};
struct  tnodepair225872  {
NI H;
tnode225816* Key;
NI Val;
};
struct  tnodetable225876  {
NI Counter;
tnodepairseq225874* Data;
};
typedef trope177009* TY549138[10];
struct  tcgen549035  {
  tpasscontext286005 Sup;
tsym225846* Module;
NimStringDesc* Filename;
tcfilesections549019 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NIM_BOOL Objhaskidsvalid;
NimStringDesc* Cfilename;
tidtable225864 Typecache;
tidtable225864 Forwtypecache;
intset222056 Declaredthings;
intset222056 Declaredprotos;
tlinkedlist127028 Headerfiles;
intset222056 Typeinfomarker;
tcproc549031* Initproc;
tcproc549031* Postinitproc;
tcproc549031* Preinitproc;
ttypeseq225848* Typestack;
tnodetable225876 Datacache;
tsymseq225818* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope177009* Typenodesname;
trope177009* Nimtypesname;
NI Labels;
TY549138 Extensionloaders;
trope177009* Injectstmt;
};
struct  tfreecell26630  {
tfreecell26630* Next;
NI Zerofield;
};
struct  ttrunk222052  {
ttrunk222052* Next;
NI Key;
TY26620 Bits;
};
typedef trope177009* tcprocsections549023[3];
struct  tblock549029  {
NI Id;
trope177009* Label;
tcprocsections549023 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc549031  {
tsym225846* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq225810* Nestedtrystmts;
NI Inexceptblock;
TY195552* Finallysafepoints;
NI Labels;
TY549102* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen549035* Module;
NI Withinloop;
NI Gcframeid;
trope177009* Gcframetype;
};
struct tsymseq225818 {
  TGenericSeq Sup;
  tsym225846* data[SEQ_DECL_SIZE];
};
struct TY225936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY611058 {
  TGenericSeq Sup;
  tmoduleinmemory611017 data[SEQ_DECL_SIZE];
};
struct ttypeseq225848 {
  TGenericSeq Sup;
  ttype225852* data[SEQ_DECL_SIZE];
};
struct TY225947 {
  TGenericSeq Sup;
  tinstantiation225836* data[SEQ_DECL_SIZE];
};
struct TY549150 {
  TGenericSeq Sup;
  tcgen549035* data[SEQ_DECL_SIZE];
};
struct tnodeseq225810 {
  TGenericSeq Sup;
  tnode225816* data[SEQ_DECL_SIZE];
};
struct tiipairseq235272 {
  TGenericSeq Sup;
  tiipair235270 data[SEQ_DECL_SIZE];
};
struct tidpairseq225862 {
  TGenericSeq Sup;
  tidpair225860 data[SEQ_DECL_SIZE];
};
struct ttrunkseq222054 {
  TGenericSeq Sup;
  ttrunk222052* data[SEQ_DECL_SIZE];
};
struct tnodepairseq225874 {
  TGenericSeq Sup;
  tnodepair225872 data[SEQ_DECL_SIZE];
};
struct TY195552 {
  TGenericSeq Sup;
  trope177009* data[SEQ_DECL_SIZE];
};
struct TY549102 {
  TGenericSeq Sup;
  tblock549029 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45133*, usrtocell_48846)(void* usr);
static N_INLINE(void, rtladdzct_50404)(tcell45133* c);
N_NOINLINE(void, addzct_48817)(tcellseq45149* s, tcell45133* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1001)(void* p, NI op);
N_NIMCALL(tnode225816*, includemodule_611926)(tsym225846* s, NI32 fileidx);
N_NIMCALL(tnode225816*, parsefile_260041)(NI32 fileidx);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(void, adddep_611182)(tsym225846* x, NI32 dep);
N_NIMCALL(void, safeadd_611216)(TY225936** x_611224, NI32 y_611228);
N_NIMCALL(void, docrc_611164)(NI32 fileidx);
N_NIMCALL(NI32, crcfromfile_176046)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, tofilename_197025)(NI32 fileidx);
N_NIMCALL(tsym225846*, importmodule_611887)(tsym225846* s, NI32 fileidx);
N_NIMCALL(tsym225846*, compilemodule_611776)(NI32 fileidx, NU32 flags);
N_NIMCALL(tsym225846*, getmodule_611085)(NI32 fileidx);
N_NIMCALL(tsym225846*, newmodule_611649)(NI32 fileidx);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, tofullpath_197037)(NI32 fileidx);
N_NIMCALL(tident200021*, getident_200472)(NimStringDesc* identifier);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY117804* Result);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NIM_BOOL, isnimidentifier_215325)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_197733)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tlineinfo195539, newlineinfo_196128)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(tsym225846*, newsym_226074)(NU8 symkind, tident200021* name, tsym225846* owner, tlineinfo195539 info);
N_NIMCALL(NimStringDesc*, getpackagename_169825)(NimStringDesc* path);
N_NIMCALL(void, initstrtable_226153)(tstrtable225820* x);
N_NIMCALL(void, strtableadd_235103)(tstrtable225820* t, tsym225846* n);
N_NIMCALL(trodreader276030*, handlesymbolfile_276071)(tsym225846* module);
N_NIMCALL(void, internalerror_198006)(NimStringDesc* errmsg);
static N_INLINE(NI, getid_224404)(void);
N_NIMCALL(void, processmodule_286056)(tsym225846* module, tllstream211204* stream, trodreader276030* rd);
N_NIMCALL(NU8, checkdepmem_611462)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, crcchanged_611119)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, HEX24_198126)(TY84945 x_198130);
N_NIMCALL(void, resetmodule_611402)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51225)(tcell45133* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48867)(tcell45133* c);
static N_INLINE(void, rtladdcycleroot_49629)(tcell45133* c);
N_NOINLINE(void, incl_45871)(tcellset45145* s, tcell45133* cell);
static N_INLINE(void, decref_50804)(tcell45133* c);
N_NIMCALL(void, resetsourcemap_418529)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_611232)(TY225936* x_611238, TY225936* y_611243);
N_NIMCALL(void, localerror_197955)(tlineinfo195539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, wantmainmodule_612014)(void);
N_NIMCALL(void, fatal_197923)(tlineinfo195539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NI32, fileinfoidx_195747)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, HEX2F_117499)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, compilesystemmodule_611988)(void);
N_NIMCALL(void, resetpackagecache_169605)(void);
STRING_LITERAL(TMP1431, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TMP1434, "compiler/modules.nim", 20);
NIM_CONST TY84945 TMP1433 = {((NimStringDesc*) &TMP1434),
44}
;
STRING_LITERAL(TMP4134, "", 0);
STRING_LITERAL(TMP4135, "nim", 3);
STRING_LITERAL(TMP4136, "system.nim", 10);
STRING_LITERAL(TMP4846, "stdin", 5);
tsymseq225818* gcompiledmodules_611057;
extern TNimType NTI225818; /* TSymSeq */
extern tgcheap47216 gch_47244;
TY611058* gmemcachedata_611079;
TNimType NTI611017; /* TModuleInMemory */
extern TNimType NTI128; /* float */
extern TNimType NTI176010; /* TCrc32 */
extern TNimType NTI225936; /* seq[int32] */
TNimType NTI611013; /* TNeedRecompile */
TNimType NTI611015; /* TCrcStatus */
TNimType NTI611058; /* seq[TModuleInMemory] */
extern TY286069 gincludefile_286073;
extern NU32 gglobaloptions_169118;
extern TY286064 gimportmodule_286068;
extern TNimType NTI225814; /* PSym */
extern TNimType NTI225846; /* TSym */
extern NU8 gcmd_169120;
extern NI gfrontendid_224012;
extern NF glastcmdtime_169131;
extern TY549150* gmodules_549171;
tsym225846* stdinmodule_612092;
extern NimStringDesc* gprojectfull_169236;
extern tlineinfo195539 gcmdlineinfo_196191;
extern NI32 gprojectmainidx_169237;
extern NimStringDesc* libpath_169233;
extern tsym225846* systemmodule_282019;
extern NI32 systemfileidx_195643;

static N_INLINE(tcell45133*, usrtocell_48846)(void* usr) {
	tcell45133* result;
	result = 0;
	result = ((tcell45133*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45133))))));
	return result;
}

static N_INLINE(void, rtladdzct_50404)(tcell45133* c) {
	addzct_48817((&gch_47244.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45133* c;
	c = usrtocell_48846(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50404(c);
	}
	LA3: ;
}
N_NIMCALL(void, TMP1001)(void* p, NI op) {
	TY611058* a;
	NI LOC1;
	a = (TY611058*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Deps, op);
	}
}

N_NIMCALL(void, adddep_611182)(tsym225846* x, NI32 dep) {
	{
		if (!(gmemcachedata_611079->Sup.len <= ((NI) (dep)))) goto LA3;
		gmemcachedata_611079 = (TY611058*) setLengthSeq(&(gmemcachedata_611079)->Sup, sizeof(tmoduleinmemory611017), ((NI) ((NI32)(dep + ((NI32) 1)))));
	}
	LA3: ;
	safeadd_611216((&gmemcachedata_611079->data[(*x).Position].Deps), dep);
}

N_NIMCALL(void, docrc_611164)(NI32 fileidx) {
	{
		NimStringDesc* LOC5;
		if (!(gmemcachedata_611079->data[fileidx].Crcstatus == ((NU8) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = tofilename_197025(fileidx);
		gmemcachedata_611079->data[fileidx].Crc = crcfromfile_176046(LOC5);
	}
	LA3: ;
}

N_NIMCALL(tnode225816*, includemodule_611926)(tsym225846* s, NI32 fileidx) {
	tnode225816* result;
	result = 0;
	result = parsefile_260041(fileidx);
	{
		if (!((gglobaloptions_169118 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		{
			if (!(gmemcachedata_611079->Sup.len <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_611079 = (TY611058*) setLengthSeq(&(gmemcachedata_611079)->Sup, sizeof(tmoduleinmemory611017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		adddep_611182(s, fileidx);
		docrc_611164(fileidx);
	}
	LA3: ;
	return result;
}

N_NIMCALL(tsym225846*, getmodule_611085)(NI32 fileidx) {
	tsym225846* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < gcompiledmodules_611057->Sup.len);
		LA4: ;
		if (!LOC3) goto LA5;
		result = gcompiledmodules_611057->data[fileidx];
	}
	LA5: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45133* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48846(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45133* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48846((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(tsym225846*, newmodule_611649)(NI32 fileidx) {
	tsym225846* result;
	NimStringDesc* filename;
	TY117804 LOC1;
	NimStringDesc* LOC7;
	tident200021* LOC8;
	result = 0;
	result = (tsym225846*) newObj((&NTI225814), sizeof(tsym225846));
	(*result).Sup.Sup.m_type = (&NTI225846);
	(*result).Sup.Id = -1;
	(*result).Kind = ((NU8) 6);
	filename = tofullpath_197037(fileidx);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitFile(filename, (&LOC1));
	asgnRefNoCycle((void**) (&(*result).Name), getident_200472(LOC1.Field1));
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = isnimidentifier_215325((*(*result).Name).S);
		if (!!(LOC4)) goto LA5;
		rawmessage_197733(((NU16) 21), (*(*result).Name).S);
	}
	LA5: ;
	(*result).Info = newlineinfo_196128(fileidx, 1, 1);
	LOC7 = 0;
	LOC7 = getpackagename_169825(filename);
	LOC8 = 0;
	LOC8 = getident_200472(LOC7);
	asgnRefNoCycle((void**) (&(*result).Owner), newsym_226074(((NU8) 24), LOC8, NIM_NIL, (*result).Info));
	(*result).Position = ((NI) (fileidx));
	{
		if (!(gmemcachedata_611079->Sup.len <= ((NI) (fileidx)))) goto LA11;
		gmemcachedata_611079 = (TY611058*) setLengthSeq(&(gmemcachedata_611079)->Sup, sizeof(tmoduleinmemory611017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA11: ;
	{
		if (!(gcompiledmodules_611057->Sup.len <= ((NI) (fileidx)))) goto LA15;
		gcompiledmodules_611057 = (tsymseq225818*) setLengthSeq(&(gcompiledmodules_611057)->Sup, sizeof(tsym225846*), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA15: ;
	asgnRefNoCycle((void**) (&gcompiledmodules_611057->data[(*result).Position]), result);
	(*result).Flags |= ((NI32)1)<<((((NU8) 0))%(sizeof(NI32)*8));
	initstrtable_226153((&(*result).kindU.S3.Tab));
	strtableadd_235103((&(*result).kindU.S3.Tab), result);
	return result;
}

static N_INLINE(NI, getid_224404)(void) {
	NI result;
	result = 0;
	result = gfrontendid_224012;
	gfrontendid_224012 += 1;
	return result;
}

N_NIMCALL(NIM_BOOL, crcchanged_611119)(NI32 fileidx) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < gmemcachedata_611079->Sup.len);
		LA4: ;
		if (!!(LOC3)) goto LA5;
		LOC7 = 0;
		LOC7 = HEX24_198126(TMP1433);
		internalerror_198006(LOC7);
	}
	LA5: ;
	switch (gmemcachedata_611079->data[fileidx].Crcstatus) {
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
		LOC11 = tofilename_197025(fileidx);
		newcrc = crcfromfile_176046(LOC11);
		result = !((newcrc == gmemcachedata_611079->data[fileidx].Crc));
		gmemcachedata_611079->data[fileidx].Crc = newcrc;
		{
			if (!result) goto LA14;
			gmemcachedata_611079->data[fileidx].Crcstatus = ((NU8) 2);
		}
		goto LA12;
		LA14: ;
		{
			gmemcachedata_611079->data[fileidx].Crcstatus = ((NU8) 3);
		}
		LA12: ;
	}
	break;
	case ((NU8) 0):
	{
		NimStringDesc* LOC18;
		LOC18 = 0;
		LOC18 = tofilename_197025(fileidx);
		gmemcachedata_611079->data[fileidx].Crc = crcfromfile_176046(LOC18);
		result = NIM_TRUE;
		{
			if (!result) goto LA21;
			gmemcachedata_611079->data[fileidx].Crcstatus = ((NU8) 2);
		}
		goto LA19;
		LA21: ;
		{
			gmemcachedata_611079->data[fileidx].Crcstatus = ((NU8) 3);
		}
		LA19: ;
	}
	break;
	}
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_48867)(tcell45133* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_49629)(tcell45133* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_45871((&gch_47244.Cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_51225)(tcell45133* c) {
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_48867(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_49629(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_50804)(tcell45133* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50404(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_48867(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_49629(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell45133* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_48846(src);
		incref_51225(LOC5);
	}
	LA3: ;
	{
		tcell45133* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_48846((*dest));
		decref_50804(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, resetmodule_611402)(NI32 fileidx) {
	gmemcachedata_611079->data[fileidx].Needsrecompile = ((NU8) 2);
	asgnRefNoCycle((void**) (&gcompiledmodules_611057->data[fileidx]), NIM_NIL);
	asgnRef((void**) (&gmodules_549171->data[fileidx]), NIM_NIL);
	resetsourcemap_418529(fileidx);
}

N_NIMCALL(NU8, checkdepmem_611462)(NI32 fileidx) {
	NU8 result;
	result = 0;
	{
		if (!!((gmemcachedata_611079->data[fileidx].Needsrecompile == ((NU8) 0)))) goto LA3;
		result = gmemcachedata_611079->data[fileidx].Needsrecompile;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = ((gglobaloptions_169118 &(1<<((((NU8) 1))&31)))!=0);
		if (LOC7) goto LA8;
		LOC7 = crcchanged_611119(fileidx);
		LA8: ;
		if (!LOC7) goto LA9;
		resetmodule_611402(fileidx);
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = HEX3DHEX3D_611232(gmemcachedata_611079->data[fileidx].Deps, NIM_NIL);
		if (!!(LOC13)) goto LA14;
		gmemcachedata_611079->data[fileidx].Needsrecompile = ((NU8) 3);
		{
			NI32 dep_611611;
			TY225936* HEX3Atmp_611628;
			NI i_611631;
			NI l_611633;
			dep_611611 = 0;
			HEX3Atmp_611628 = 0;
			HEX3Atmp_611628 = gmemcachedata_611079->data[fileidx].Deps;
			i_611631 = 0;
			l_611633 = HEX3Atmp_611628->Sup.len;
			{
				while (1) {
					NU8 d;
					if (!(i_611631 < l_611633)) goto LA18;
					dep_611611 = HEX3Atmp_611628->data[i_611631];
					d = checkdepmem_611462(dep_611611);
					{
						if (!((20 &(1<<((d)&7)))!=0)) goto LA21;
						resetmodule_611402(fileidx);
						result = ((NU8) 2);
						goto BeforeRet;
					}
					LA21: ;
					i_611631 += 1;
				} LA18: ;
			}
		}
	}
	LA14: ;
	gmemcachedata_611079->data[fileidx].Needsrecompile = ((NU8) 1);
	result = ((NU8) 1);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(tsym225846*, compilemodule_611776)(NI32 fileidx, NU32 flags) {
	tsym225846* result;
	result = 0;
	result = getmodule_611085(fileidx);
	{
		trodreader276030* rd;
		if (!(result == NIM_NIL)) goto LA3;
		{
			if (!(gmemcachedata_611079->Sup.len <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_611079 = (TY611058*) setLengthSeq(&(gmemcachedata_611079)->Sup, sizeof(tmoduleinmemory611017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		gmemcachedata_611079->data[fileidx].Needsrecompile = ((NU8) 3);
		result = newmodule_611649(fileidx);
		rd = 0;
		(*result).Flags = ((*result).Flags | flags);
		{
			if (!((18438 &(1<<((gcmd_169120)&31)))!=0)) goto LA11;
			rd = handlesymbolfile_276071(result);
			{
				if (!((*result).Sup.Id < 0)) goto LA15;
				internalerror_198006(((NimStringDesc*) &TMP1431));
				goto BeforeRet;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*result).Sup.Id = getid_224404();
		}
		LA9: ;
		processmodule_286056(result, NIM_NIL, rd);
		{
			if (!((gglobaloptions_169118 &(1<<((((NU8) 15))&31)))!=0)) goto LA20;
			gmemcachedata_611079->data[fileidx].Compiledat = glastcmdtime_169131;
			gmemcachedata_611079->data[fileidx].Needsrecompile = ((NU8) 4);
			docrc_611164(fileidx);
		}
		LA20: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NU8 LOC25;
			LOC25 = 0;
			LOC25 = checkdepmem_611462(fileidx);
			if (!(LOC25 == ((NU8) 2))) goto LA26;
			result = compilemodule_611776(fileidx, flags);
		}
		goto LA23;
		LA26: ;
		{
			result = gcompiledmodules_611057->data[fileidx];
		}
		LA23: ;
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(tsym225846*, importmodule_611887)(tsym225846* s, NI32 fileidx) {
	tsym225846* result;
	result = 0;
	result = compilemodule_611776(fileidx, 0);
	{
		if (!((gglobaloptions_169118 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		adddep_611182(s, fileidx);
	}
	LA3: ;
	{
		if (!(((*result).Flags &(1<<((((NU8) 13))&31)))!=0)) goto LA7;
		localerror_197955((*result).Info, ((NU16) 40), (*(*result).Name).S);
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, wantmainmodule_612014)(void) {
	NimStringDesc* LOC5;
	{
		if (!(gprojectfull_169236->Sup.len == 0)) goto LA3;
		fatal_197923(gcmdlineinfo_196191, ((NU16) 186), ((NimStringDesc*) &TMP4134));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = nosaddFileExt(gprojectfull_169236, ((NimStringDesc*) &TMP4135));
	gprojectmainidx_169237 = fileinfoidx_195747(LOC5);
}

N_NIMCALL(void, compilesystemmodule_611988)(void) {
	{
		NimStringDesc* LOC5;
		tsym225846* LOC6;
		if (!(systemmodule_282019 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = HEX2F_117499(libpath_169233, ((NimStringDesc*) &TMP4136));
		systemfileidx_195643 = fileinfoidx_195747(LOC5);
		LOC6 = 0;
		LOC6 = compilemodule_611776(systemfileidx_195643, 8192);
	}
	LA3: ;
}

N_NIMCALL(void, compileproject_612077)(NI32 projectfileidx) {
	NI32 systemfileidx;
	NimStringDesc* LOC1;
	NI32 projectfile;
	wantmainmodule_612014();
	LOC1 = 0;
	LOC1 = HEX2F_117499(libpath_169233, ((NimStringDesc*) &TMP4136));
	systemfileidx = fileinfoidx_195747(LOC1);
	{
		if (!(projectfileidx < ((NI32) 0))) goto LA4;
		projectfile = gprojectmainidx_169237;
	}
	goto LA2;
	LA4: ;
	{
		projectfile = projectfileidx;
	}
	LA2: ;
	{
		tsym225846* LOC11;
		if (!(projectfile == systemfileidx)) goto LA9;
		LOC11 = 0;
		LOC11 = compilemodule_611776(projectfile, 12288);
	}
	goto LA7;
	LA9: ;
	{
		tsym225846* LOC13;
		compilesystemmodule_611988();
		LOC13 = 0;
		LOC13 = compilemodule_611776(projectfile, 4096);
	}
	LA7: ;
}

N_NIMCALL(tsym225846*, makestdinmodule_612097)(void) {
	tsym225846* result;
	result = 0;
	{
		NI32 LOC5;
		if (!(stdinmodule_612092 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = fileinfoidx_195747(((NimStringDesc*) &TMP4846));
		asgnRefNoCycle((void**) (&stdinmodule_612092), newmodule_611649(LOC5));
		(*stdinmodule_612092).Sup.Id = getid_224404();
	}
	LA3: ;
	result = stdinmodule_612092;
	return result;
}

N_NIMCALL(void, resetallmodules_611411)(void) {
	{
		NI i_611423;
		NI HEX3Atmp_611442;
		NI res_611445;
		i_611423 = 0;
		HEX3Atmp_611442 = 0;
		HEX3Atmp_611442 = (gcompiledmodules_611057->Sup.len-1);
		res_611445 = 0;
		{
			while (1) {
				if (!(res_611445 <= HEX3Atmp_611442)) goto LA3;
				i_611423 = res_611445;
				{
					if (!!((gcompiledmodules_611057->data[i_611423] == NIM_NIL))) goto LA6;
					resetmodule_611402(((NI32) (i_611423)));
				}
				LA6: ;
				res_611445 += 1;
			} LA3: ;
		}
	}
	resetpackagecache_169605();
}
NIM_EXTERNC N_NOINLINE(void, HEX00_modulesInit)(void) {
	if (gcompiledmodules_611057) nimGCunrefNoCycle(gcompiledmodules_611057);
	gcompiledmodules_611057 = (tsymseq225818*) newSeqRC1((&NTI225818), 0);
	if (gmemcachedata_611079) nimGCunrefNoCycle(gmemcachedata_611079);
	gmemcachedata_611079 = (TY611058*) newSeqRC1((&NTI611058), 0);
	gincludefile_286073 = includemodule_611926;
	gimportmodule_286068 = importmodule_611887;
}

NIM_EXTERNC N_NOINLINE(void, HEX00_modulesDatInit)(void) {
static TNimNode* TMP994[5];
static TNimNode* TMP995[5];
NI TMP997;
static char* NIM_CONST TMP996[5] = {
"Maybe", 
"No", 
"Yes", 
"Probing", 
"Recompiled"};
static TNimNode* TMP998[4];
NI TMP1000;
static char* NIM_CONST TMP999[4] = {
"crcNotTaken", 
"crcCached", 
"crcHasChanged", 
"crcNotChanged"};
static TNimNode TMP992[17];
NTI611017.size = sizeof(tmoduleinmemory611017);
NTI611017.kind = 18;
NTI611017.base = 0;
NTI611017.flags = 2;
TMP994[0] = &TMP992[1];
TMP992[1].kind = 1;
TMP992[1].offset = offsetof(tmoduleinmemory611017, Compiledat);
TMP992[1].typ = (&NTI128);
TMP992[1].name = "compiledAt";
TMP994[1] = &TMP992[2];
TMP992[2].kind = 1;
TMP992[2].offset = offsetof(tmoduleinmemory611017, Crc);
TMP992[2].typ = (&NTI176010);
TMP992[2].name = "crc";
TMP994[2] = &TMP992[3];
TMP992[3].kind = 1;
TMP992[3].offset = offsetof(tmoduleinmemory611017, Deps);
TMP992[3].typ = (&NTI225936);
TMP992[3].name = "deps";
TMP994[3] = &TMP992[4];
NTI611013.size = sizeof(NU8);
NTI611013.kind = 14;
NTI611013.base = 0;
NTI611013.flags = 3;
for (TMP997 = 0; TMP997 < 5; TMP997++) {
TMP992[TMP997+5].kind = 1;
TMP992[TMP997+5].offset = TMP997;
TMP992[TMP997+5].name = TMP996[TMP997];
TMP995[TMP997] = &TMP992[TMP997+5];
}
TMP992[10].len = 5; TMP992[10].kind = 2; TMP992[10].sons = &TMP995[0];
NTI611013.node = &TMP992[10];
TMP992[4].kind = 1;
TMP992[4].offset = offsetof(tmoduleinmemory611017, Needsrecompile);
TMP992[4].typ = (&NTI611013);
TMP992[4].name = "needsRecompile";
TMP994[4] = &TMP992[11];
NTI611015.size = sizeof(NU8);
NTI611015.kind = 14;
NTI611015.base = 0;
NTI611015.flags = 3;
for (TMP1000 = 0; TMP1000 < 4; TMP1000++) {
TMP992[TMP1000+12].kind = 1;
TMP992[TMP1000+12].offset = TMP1000;
TMP992[TMP1000+12].name = TMP999[TMP1000];
TMP998[TMP1000] = &TMP992[TMP1000+12];
}
TMP992[16].len = 4; TMP992[16].kind = 2; TMP992[16].sons = &TMP998[0];
NTI611015.node = &TMP992[16];
TMP992[11].kind = 1;
TMP992[11].offset = offsetof(tmoduleinmemory611017, Crcstatus);
TMP992[11].typ = (&NTI611015);
TMP992[11].name = "crcStatus";
TMP992[0].len = 5; TMP992[0].kind = 2; TMP992[0].sons = &TMP994[0];
NTI611017.node = &TMP992[0];
NTI611058.size = sizeof(TY611058*);
NTI611058.kind = 24;
NTI611058.base = (&NTI611017);
NTI611058.flags = 2;
NTI611058.marker = TMP1001;
}

