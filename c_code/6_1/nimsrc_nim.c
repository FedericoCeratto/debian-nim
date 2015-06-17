/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <setjmp.h>

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
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
typedef struct TY119589 TY119589;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY15609;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15609 raiseAction;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY119589 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
typedef NI TY27420[16];
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
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
N_NIMCALL(void, Gcdisablemarkandsweep_8819)(void);
N_NIMCALL(void, initdefines_168254)(void);
N_NIMCALL(void, handlecmdline_527607)(void);
N_NIMCALL(NI, paramcount_125830)(void);
N_NIMCALL(void, writecommandlineusage_176020)(void);
N_NIMCALL(void, processcmdline_521209)(NU8 pass, NimStringDesc* cmd);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, canonicalizepath_154374)(NimStringDesc* path);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52222)(Tcell46347* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46347* c);
static N_INLINE(void, rtladdcycleroot_50623)(Tcell46347* c);
N_NOINLINE(void, incl_47065)(Tcellset46359* s, Tcell46347* cell);
static N_INLINE(void, decref_51804)(Tcell46347* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY119589* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(void, loadconfigs_186609)(NimStringDesc* cfg);
N_NIMCALL(void, initvars_170876)(void);
N_NIMCALL(void, maincommand_524628)(void);
N_NIMCALL(NimStringDesc*, Gcgetstatistics_8821)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, nospquoteShell)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, prependcurdir_527401)(NimStringDesc* f);
N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, completecfilepath_170912)(NimStringDesc* cfile, NIM_BOOL createsubdir);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(void, execexternalprogram_170985)(NimStringDesc* cmd, NimStringDesc* prettycmd);
N_NIMCALL(NimStringDesc*, findnodejs_526009)(void);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(void, msgquit_164107)(NI8 x);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
NIM_EXTERNC N_NOINLINE(void, systemInit)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_testabilityInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_testabilityDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_listsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_listsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_setsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_setsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_optionsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_optionsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_platformInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_platformDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_ropesInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_ropesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_msgsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_msgsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_nversionInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_nversionDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_identsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_identsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_condsymsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_condsymsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_crcInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_crcDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_extccompInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_extccompDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_wordrecgInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_wordrecgDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_nimblecmdInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_nimblecmdDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_commandsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_commandsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_llstreamInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_llstreamDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_nimlexbaseInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_nimlexbaseDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_lexerInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_lexerDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_nimconfInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_nimconfDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_idgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_idgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_astInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_astDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_rodutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_rodutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_astalgoInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_astalgoDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_parserInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_parserDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_pbracesInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_pbracesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_rendererInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_rendererDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_filtersInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_filtersDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_filter_tmplInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_filter_tmplDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_syntaxesInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_syntaxesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_treesInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_treesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_typesInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_typesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_rodreadInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_rodreadDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_magicsysInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_magicsysDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_bitsetsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_bitsetsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_nimsetsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_nimsetsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_passesInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_passesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_treetabInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_treetabDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_vmdefInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_vmdefDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_semdataInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_semdataDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_prettybaseInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_prettybaseDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_lookupsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_lookupsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_importerInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_importerDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_rodwriteInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_rodwriteDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_saturateInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_saturateDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_semfoldInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_semfoldDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_procfindInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_procfindDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_pragmasInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_pragmasDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_semtypinstInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_semtypinstDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_parampatternsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_parampatternsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_prettyInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_prettyDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_highliteInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_highliteDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_guardsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_guardsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_sempass2Init)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_sempass2DatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cookiesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cookiesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cgiInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cgiDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_typesrendererInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_typesrendererDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_docgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_docgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_sigmatchInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_sigmatchDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_cgmethInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_cgmethDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_loweringsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_loweringsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_lambdaliftingInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_lambdaliftingDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_transfInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_transfDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unsignedInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unsignedDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_vmgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_vmgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_vmdepsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_vmdepsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_vmmarshalInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_vmmarshalDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_evaltemplInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_evaltemplDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_vmInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_vmDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_aliasesInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_aliasesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_patternsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_patternsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_semmacrosanityInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_semmacrosanityDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_semparallelInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_semparallelDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_pluginsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_pluginsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_localsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_localsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_activeInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_activeDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_semInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_semDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_ccgutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_ccgutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_cgendataInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_cgendataDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_ccgmergeInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_ccgmergeDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_cgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_cgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_jsgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_jsgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_passauxInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_passauxDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_dependsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_dependsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_docgen2Init)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_docgen2DatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_rawsocketsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_rawsocketsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_netInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_netDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_serviceInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_serviceDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_modulesInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_modulesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_mainInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_mainDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_nodejsInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimsrc_nodejsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimDatInit)(void);
STRING_LITERAL(TMP1869, "", 0);
STRING_LITERAL(TMP1898, "nim.cfg", 7);
STRING_LITERAL(TMP5023, "-", 1);
STRING_LITERAL(TMP5024, "stdinfile", 9);
STRING_LITERAL(TMP5025, "./", 2);
STRING_LITERAL(TMP5026, "js", 2);
STRING_LITERAL(TMP5029, " ", 1);
extern NimStringDesc* gprojectname_154234;
extern TSafePoint* exchandler_17043;
extern NimStringDesc* gprojectfull_154236;
extern Tgcheap48216 gch_48244;
extern TNimType NTI3433; /* OSError */
extern Exception* currexception_17045;
extern NimStringDesc* gprojectpath_154235;
extern NI gverbosity_154137;
extern NI gerrorcounter_164015;
extern NU32 gglobaloptions_154128;
extern NU8 gcmd_154130;
extern NimStringDesc* outfile_154134;
extern NimStringDesc* arguments_177721;

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17043;
	exchandler_17043 = s;
}

static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr) {
	Tcell46347* result;
	result = 0;
	result = ((Tcell46347*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46347))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46347* c) {
	addzct_49817((&gch_48244.zct), c);
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
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17043 = (*exchandler_17043).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_17045;
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46347* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
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
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
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
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
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

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17045), (*currexception_17045).parent);
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

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, prependcurdir_527401)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nosisAbsolute(f);
		if (!LOC3) goto LA4;
		result = copyString(f);
	}
	goto LA1;
	LA4: ;
	{
		NimStringDesc* LOC7;
		LOC7 = 0;
		LOC7 = rawNewString(f->Sup.len + 2);
appendString(LOC7, ((NimStringDesc*) &TMP5025));
appendString(LOC7, f);
		result = LOC7;
	}
	LA1: ;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(void, handlecmdline_527607)(void) {
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = paramcount_125830();
		if (!(LOC3 == ((NI) 0))) goto LA4;
		writecommandlineusage_176020();
	}
	goto LA1;
	LA4: ;
	{
		processcmdline_521209(((NU8) 0), ((NimStringDesc*) &TMP1869));
		{
			TSafePoint TMP1870;
			TY119589 p;
			NimStringDesc* LOC15;
			NimStringDesc* LOC16;
			if (!!(((gprojectname_154234) && (gprojectname_154234)->Sup.len == 0))) goto LA9;
			pushSafePoint(&TMP1870);
			TMP1870.status = _setjmp(TMP1870.context);
			if (TMP1870.status == 0) {
				asgnRefNoCycle((void**) (&gprojectfull_154236), canonicalizepath_154374(gprojectname_154234));
				popSafePoint();
			}
			else {
				popSafePoint();
				if (isObj(getCurrentException()->Sup.m_type, (&NTI3433))) {
					NimStringDesc* LOC14;
					TMP1870.status = 0;
					LOC14 = 0;
					LOC14 = gprojectfull_154236; gprojectfull_154236 = copyStringRC1(gprojectname_154234);
					if (LOC14) nimGCunrefNoCycle(LOC14);
					popCurrentException();
				}
			}
			if (TMP1870.status != 0) reraiseException();
			memset((void*)(&p), 0, sizeof(p));
			chckNil((void*)(&p));
			memset((void*)(&p), 0, sizeof(p));
			nossplitFile(gprojectfull_154236, (&p));
			LOC15 = 0;
			LOC15 = gprojectpath_154235; gprojectpath_154235 = copyStringRC1(p.Field0);
			if (LOC15) nimGCunrefNoCycle(LOC15);
			LOC16 = 0;
			LOC16 = gprojectname_154234; gprojectname_154234 = copyStringRC1(p.Field1);
			if (LOC16) nimGCunrefNoCycle(LOC16);
		}
		goto LA7;
		LA9: ;
		{
			asgnRefNoCycle((void**) (&gprojectpath_154235), nosgetCurrentDir());
		}
		LA7: ;
		loadconfigs_186609(((NimStringDesc*) &TMP1898));
		initvars_170876();
		processcmdline_521209(((NU8) 1), ((NimStringDesc*) &TMP1869));
		maincommand_524628();
		{
			NimStringDesc* LOC22;
			if (!(((NI) 2) <= gverbosity_154137)) goto LA20;
			LOC22 = 0;
			LOC22 = Gcgetstatistics_8821();
			printf("%s\012", LOC22? (LOC22)->data:"nil");
		}
		LA20: ;
		{
			if (!(gerrorcounter_164015 == ((NI) 0))) goto LA25;
			{
				if (!((gglobaloptions_154128 &(1<<((((NU8) 13))&31)))!=0)) goto LA29;
				{
					NimStringDesc* LOC35;
					if (!eqStrings(gprojectname_154234, ((NimStringDesc*) &TMP5023))) goto LA33;
					LOC35 = 0;
					LOC35 = gprojectfull_154236; gprojectfull_154236 = copyStringRC1(((NimStringDesc*) &TMP5024));
					if (LOC35) nimGCunrefNoCycle(LOC35);
				}
				LA33: ;
				{
					NimStringDesc* ex;
					NimStringDesc* LOC49;
					NimStringDesc* LOC50;
					if (!(gcmd_154130 == ((NU8) 4))) goto LA38;
					ex = 0;
					{
						NimStringDesc* LOC44;
						if (!(((NI) 0) < (outfile_154134 ? outfile_154134->Sup.len : 0))) goto LA42;
						LOC44 = 0;
						LOC44 = prependcurdir_527401(outfile_154134);
						ex = nospquoteShell(LOC44);
					}
					goto LA40;
					LA42: ;
					{
						NimStringDesc* LOC46;
						NimStringDesc* LOC47;
						NimStringDesc* LOC48;
						LOC46 = 0;
						LOC46 = noschangeFileExt(gprojectfull_154236, ((NimStringDesc*) &TMP5026));
						LOC47 = 0;
						LOC47 = prependcurdir_527401(LOC46);
						LOC48 = 0;
						LOC48 = completecfilepath_170912(LOC47, NIM_TRUE);
						ex = nospquoteShell(LOC48);
					}
					LA40: ;
					LOC49 = 0;
					LOC50 = 0;
					LOC50 = findnodejs_526009();
					LOC49 = rawNewString(LOC50->Sup.len + ex->Sup.len + arguments_177721->Sup.len + 2);
appendString(LOC49, LOC50);
appendString(LOC49, ((NimStringDesc*) &TMP5029));
appendString(LOC49, ex);
appendChar(LOC49, 32);
appendString(LOC49, arguments_177721);
					execexternalprogram_170985(LOC49, ((NimStringDesc*) &TMP1869));
				}
				goto LA36;
				LA38: ;
				{
					NimStringDesc* binpath;
					NimStringDesc* ex;
					NimStringDesc* LOC58;
					binpath = 0;
					{
						if (!(((NI) 0) < (outfile_154134 ? outfile_154134->Sup.len : 0))) goto LA54;
						binpath = prependcurdir_527401(outfile_154134);
					}
					goto LA52;
					LA54: ;
					{
						NimStringDesc* LOC57;
						LOC57 = 0;
						LOC57 = noschangeFileExt(gprojectfull_154236, ((NimStringDesc*) &TMP1869));
						binpath = prependcurdir_527401(LOC57);
					}
					LA52: ;
					ex = nospquoteShell(binpath);
					LOC58 = 0;
					LOC58 = rawNewString(ex->Sup.len + arguments_177721->Sup.len + 1);
appendString(LOC58, ex);
appendChar(LOC58, 32);
appendString(LOC58, arguments_177721);
					execexternalprogram_170985(LOC58, ((NimStringDesc*) &TMP1869));
				}
				LA36: ;
			}
			LA29: ;
		}
		LA25: ;
	}
	LA1: ;
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner() {
	systemInit();
	nimsrc_testabilityDatInit();
	stdlib_parseutilsDatInit();
	stdlib_strutilsDatInit();
	stdlib_timesDatInit();
	stdlib_posixDatInit();
	stdlib_osDatInit();
	nimsrc_listsDatInit();
	stdlib_hashesDatInit();
	stdlib_strtabsDatInit();
	stdlib_streamsDatInit();
	stdlib_cpuinfoDatInit();
	stdlib_osprocDatInit();
	stdlib_mathDatInit();
	stdlib_setsDatInit();
	nimsrc_optionsDatInit();
	stdlib_tablesDatInit();
	nimsrc_platformDatInit();
	nimsrc_ropesDatInit();
	nimsrc_msgsDatInit();
	nimsrc_nversionDatInit();
	nimsrc_identsDatInit();
	nimsrc_condsymsDatInit();
	nimsrc_crcDatInit();
	nimsrc_extccompDatInit();
	nimsrc_wordrecgDatInit();
	nimsrc_nimblecmdDatInit();
	stdlib_parseoptDatInit();
	nimsrc_commandsDatInit();
	nimsrc_llstreamDatInit();
	nimsrc_nimlexbaseDatInit();
	nimsrc_lexerDatInit();
	nimsrc_nimconfDatInit();
	stdlib_intsetsDatInit();
	nimsrc_idgenDatInit();
	nimsrc_astDatInit();
	nimsrc_rodutilsDatInit();
	nimsrc_astalgoDatInit();
	nimsrc_parserDatInit();
	nimsrc_pbracesDatInit();
	nimsrc_rendererDatInit();
	nimsrc_filtersDatInit();
	nimsrc_filter_tmplDatInit();
	nimsrc_syntaxesDatInit();
	nimsrc_treesDatInit();
	nimsrc_typesDatInit();
	stdlib_memfilesDatInit();
	nimsrc_rodreadDatInit();
	nimsrc_magicsysDatInit();
	nimsrc_bitsetsDatInit();
	nimsrc_nimsetsDatInit();
	nimsrc_passesDatInit();
	nimsrc_treetabDatInit();
	nimsrc_vmdefDatInit();
	nimsrc_semdataDatInit();
	stdlib_lexbaseDatInit();
	nimsrc_prettybaseDatInit();
	nimsrc_lookupsDatInit();
	nimsrc_importerDatInit();
	nimsrc_rodwriteDatInit();
	nimsrc_saturateDatInit();
	nimsrc_semfoldDatInit();
	nimsrc_procfindDatInit();
	nimsrc_pragmasDatInit();
	nimsrc_semtypinstDatInit();
	nimsrc_parampatternsDatInit();
	nimsrc_prettyDatInit();
	stdlib_unicodeDatInit();
	stdlib_macrosDatInit();
	stdlib_jsonDatInit();
	docutils_rstastDatInit();
	docutils_rstDatInit();
	docutils_highliteDatInit();
	stdlib_sequtilsDatInit();
	stdlib_algorithmDatInit();
	docutils_rstgenDatInit();
	nimsrc_guardsDatInit();
	nimsrc_sempass2DatInit();
	stdlib_xmltreeDatInit();
	stdlib_cookiesDatInit();
	stdlib_cgiDatInit();
	nimsrc_typesrendererDatInit();
	nimsrc_docgenDatInit();
	nimsrc_sigmatchDatInit();
	nimsrc_cgmethDatInit();
	nimsrc_loweringsDatInit();
	nimsrc_lambdaliftingDatInit();
	nimsrc_transfDatInit();
	stdlib_unsignedDatInit();
	nimsrc_vmgenDatInit();
	nimsrc_vmdepsDatInit();
	nimsrc_vmmarshalDatInit();
	nimsrc_evaltemplDatInit();
	nimsrc_vmDatInit();
	nimsrc_aliasesDatInit();
	nimsrc_patternsDatInit();
	nimsrc_semmacrosanityDatInit();
	nimsrc_semparallelDatInit();
	nimsrc_pluginsDatInit();
	nimsrc_localsDatInit();
	nimsrc_activeDatInit();
	nimsrc_semDatInit();
	nimsrc_ccgutilsDatInit();
	nimsrc_cgendataDatInit();
	nimsrc_ccgmergeDatInit();
	nimsrc_cgenDatInit();
	nimsrc_jsgenDatInit();
	nimsrc_passauxDatInit();
	nimsrc_dependsDatInit();
	nimsrc_docgen2DatInit();
	stdlib_rawsocketsDatInit();
	stdlib_netDatInit();
	nimsrc_serviceDatInit();
	nimsrc_modulesDatInit();
	nimsrc_mainDatInit();
	nimsrc_nodejsDatInit();
	nimDatInit();
	nimsrc_testabilityInit();
	stdlib_parseutilsInit();
	stdlib_strutilsInit();
	stdlib_timesInit();
	stdlib_posixInit();
	stdlib_osInit();
	nimsrc_listsInit();
	stdlib_hashesInit();
	stdlib_strtabsInit();
	stdlib_streamsInit();
	stdlib_cpuinfoInit();
	stdlib_osprocInit();
	stdlib_mathInit();
	stdlib_setsInit();
	nimsrc_optionsInit();
	stdlib_tablesInit();
	nimsrc_platformInit();
	nimsrc_ropesInit();
	nimsrc_msgsInit();
	nimsrc_nversionInit();
	nimsrc_identsInit();
	nimsrc_condsymsInit();
	nimsrc_crcInit();
	nimsrc_extccompInit();
	nimsrc_wordrecgInit();
	nimsrc_nimblecmdInit();
	stdlib_parseoptInit();
	nimsrc_commandsInit();
	nimsrc_llstreamInit();
	nimsrc_nimlexbaseInit();
	nimsrc_lexerInit();
	nimsrc_nimconfInit();
	stdlib_intsetsInit();
	nimsrc_idgenInit();
	nimsrc_astInit();
	nimsrc_rodutilsInit();
	nimsrc_astalgoInit();
	nimsrc_parserInit();
	nimsrc_pbracesInit();
	nimsrc_rendererInit();
	nimsrc_filtersInit();
	nimsrc_filter_tmplInit();
	nimsrc_syntaxesInit();
	nimsrc_treesInit();
	nimsrc_typesInit();
	stdlib_memfilesInit();
	nimsrc_rodreadInit();
	nimsrc_magicsysInit();
	nimsrc_bitsetsInit();
	nimsrc_nimsetsInit();
	nimsrc_passesInit();
	nimsrc_treetabInit();
	nimsrc_vmdefInit();
	nimsrc_semdataInit();
	stdlib_lexbaseInit();
	nimsrc_prettybaseInit();
	nimsrc_lookupsInit();
	nimsrc_importerInit();
	nimsrc_rodwriteInit();
	nimsrc_saturateInit();
	nimsrc_semfoldInit();
	nimsrc_procfindInit();
	nimsrc_pragmasInit();
	nimsrc_semtypinstInit();
	nimsrc_parampatternsInit();
	nimsrc_prettyInit();
	stdlib_unicodeInit();
	stdlib_macrosInit();
	stdlib_jsonInit();
	docutils_rstastInit();
	docutils_rstInit();
	docutils_highliteInit();
	stdlib_sequtilsInit();
	stdlib_algorithmInit();
	docutils_rstgenInit();
	nimsrc_guardsInit();
	nimsrc_sempass2Init();
	stdlib_xmltreeInit();
	stdlib_cookiesInit();
	stdlib_cgiInit();
	nimsrc_typesrendererInit();
	nimsrc_docgenInit();
	nimsrc_sigmatchInit();
	nimsrc_cgmethInit();
	nimsrc_loweringsInit();
	nimsrc_lambdaliftingInit();
	nimsrc_transfInit();
	stdlib_unsignedInit();
	nimsrc_vmgenInit();
	nimsrc_vmdepsInit();
	nimsrc_vmmarshalInit();
	nimsrc_evaltemplInit();
	nimsrc_vmInit();
	nimsrc_aliasesInit();
	nimsrc_patternsInit();
	nimsrc_semmacrosanityInit();
	nimsrc_semparallelInit();
	nimsrc_pluginsInit();
	nimsrc_localsInit();
	nimsrc_activeInit();
	nimsrc_semInit();
	nimsrc_ccgutilsInit();
	nimsrc_cgendataInit();
	nimsrc_ccgmergeInit();
	nimsrc_cgenInit();
	nimsrc_jsgenInit();
	nimsrc_passauxInit();
	nimsrc_dependsInit();
	nimsrc_docgen2Init();
	stdlib_rawsocketsInit();
	stdlib_netInit();
	nimsrc_serviceInit();
	nimsrc_modulesInit();
	nimsrc_mainInit();
	nimsrc_nodejsInit();
}

void PreMain() {
	void (*volatile inner)();
	systemDatInit();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	nimInit();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)();
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, nimInit)(void) {
	Gcdisablemarkandsweep_8819();
	initdefines_168254();
	handlecmdline_527607();
	msgquit_164107(((NI8) ((((NI) 0) < gerrorcounter_164015))));
}

NIM_EXTERNC N_NOINLINE(void, nimDatInit)(void) {
}

