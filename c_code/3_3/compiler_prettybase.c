/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
#include <stdio.h>
typedef struct TY316012 TY316012;
typedef struct Tsourcefile316004 Tsourcefile316004;
typedef struct TY131602 TY131602;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell48104 Cell48104;
typedef struct Cellseq48120 Cellseq48120;
typedef struct Gcheap50618 Gcheap50618;
typedef struct Gcstack50616 Gcstack50616;
typedef struct Memregion30286 Memregion30286;
typedef struct Smallchunk30240 Smallchunk30240;
typedef struct Llchunk30280 Llchunk30280;
typedef struct Bigchunk30242 Bigchunk30242;
typedef struct Intset30214 Intset30214;
typedef struct Trunk30210 Trunk30210;
typedef struct Avlnode30284 Avlnode30284;
typedef struct Gcstat50614 Gcstat50614;
typedef struct Cellset48116 Cellset48116;
typedef struct Pagedesc48112 Pagedesc48112;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct Tsym264826 Tsym264826;
typedef struct Tident194012 Tident194012;
typedef struct TY125106 TY125106;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TSafePoint TSafePoint;
typedef struct Baselexer213009 Baselexer213009;
typedef struct Streamobj150418 Streamobj150418;
typedef struct Filestreamobj151477 Filestreamobj151477;
typedef struct Slice90451 Slice90451;
typedef struct Tidobj194006 Tidobj194006;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct Tscope264820 Tscope264820;
typedef struct TY264927 TY264927;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct Ttype264832 Ttype264832;
typedef struct Tnode264794 Tnode264794;
typedef struct Tloc264808 Tloc264808;
typedef struct Ropeobj173006 Ropeobj173006;
typedef struct Tlib264812 Tlib264812;
typedef struct Basechunk30238 Basechunk30238;
typedef struct Freecell30230 Freecell30230;
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct TY264917 TY264917;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tsourcefile316004  {
TY131602* lines;
NIM_BOOL dirty;
NIM_BOOL isnimfixfile;
NimStringDesc* fullpath;
NimStringDesc* newline;
NI32 fileidx;
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
struct  Cell48104  {
NI refcount;
TNimType* typ;
};
struct  Cellseq48120  {
NI len;
NI cap;
Cell48104** d;
};
typedef Smallchunk30240* TY30301[512];
typedef Trunk30210* Trunkbuckets30212[256];
struct  Intset30214  {
Trunkbuckets30212 data;
};
struct  Memregion30286  {
NI minlargeobj;
NI maxlargeobj;
TY30301 freesmallchunks;
Llchunk30280* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30242* freechunkslist;
Intset30214 chunkstarts;
Avlnode30284* root;
Avlnode30284* deleted;
Avlnode30284* last;
Avlnode30284* freeavlnodes;
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
struct  Cellset48116  {
NI counter;
NI max;
Pagedesc48112* head;
Pagedesc48112** data;
};
struct  Gcheap50618  {
Gcstack50616* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq48120 zct;
Cellseq48120 decstack;
Cellseq48120 tempstack;
NI recgclock;
Memregion30286 region;
Gcstat50614 stat;
Cellset48116 marked;
Cellseq48120 additionalroots;
};
struct  Tlineinfo186336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct TY125106 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
typedef NU8 Filemode12409;
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
} TY18211;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY18211 raiseAction;
};
typedef NU8 char136Set[32];
struct  Baselexer213009  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj150418* input;
NI linenumber;
NI sentinel;
NI linestart;
char136Set refillchars;
};
struct  Slice90451  {
NI a;
NI b;
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
struct  Gcstack50616  {
Gcstack50616* prev;
Gcstack50616* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30238  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30240  {
  Basechunk30238 Sup;
Smallchunk30240* next;
Smallchunk30240* prev;
Freecell30230* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30280  {
NI size;
NI acc;
Llchunk30280* next;
};
struct  Bigchunk30242  {
  Basechunk30238 Sup;
Bigchunk30242* next;
Bigchunk30242* prev;
NI align;
NF data;
};
typedef NI TY30219[8];
struct  Trunk30210  {
Trunk30210* next;
NI key;
TY30219 bits;
};
typedef Avlnode30284* TY30291[2];
struct  Avlnode30284  {
TY30291 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc48112  {
Pagedesc48112* next;
NI key;
TY30219 bits;
};
typedef N_NIMCALL_PTR(void, TY150419) (Streamobj150418* s0);
typedef N_NIMCALL_PTR(NIM_BOOL, TY150423) (Streamobj150418* s0);
typedef N_NIMCALL_PTR(void, TY150427) (Streamobj150418* s0, NI pos0);
typedef N_NIMCALL_PTR(NI, TY150432) (Streamobj150418* s0);
typedef N_NIMCALL_PTR(NI, TY150436) (Streamobj150418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(NI, TY150442) (Streamobj150418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY150448) (Streamobj150418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY150454) (Streamobj150418* s0);
struct  Streamobj150418  {
  TNimObject Sup;
TY150419 closeimpl;
TY150423 atendimpl;
TY150427 setpositionimpl;
TY150432 getpositionimpl;
TY150436 readdataimpl;
TY150442 peekdataimpl;
TY150448 writedataimpl;
TY150454 flushimpl;
};
struct  Filestreamobj151477  {
  Streamobj150418 Sup;
FILE* f;
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
struct  Freecell30230  {
Freecell30230* next;
NI zerofield;
};
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
};
struct TY316012 {
  TGenericSeq Sup;
  Tsourcefile316004 data[SEQ_DECL_SIZE];
};
struct TY131602 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
struct Tnodeseq264788 {
  TGenericSeq Sup;
  Tnode264794* data[SEQ_DECL_SIZE];
};
struct TY264917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP1027)(void* p, NI op);
N_NIMCALL(void, TMP1028)();
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56602 markerproc0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell48104*, usrtocell_52240_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53401_1689653243)(Cell48104* c0);
N_NOINLINE(void, addzct_52217_1689653243)(Cellseq48120* s0, Cell48104* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(void, replacedeprecated_316156_3901077974)(Tlineinfo186336 info0, Tident194012* oldsym0, Tident194012* newsym0);
N_NIMCALL(void, loadfile_316031_3901077974)(Tlineinfo186336 info0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
N_NIMCALL(NimStringDesc*, tofullpath_187270_155036129)(NI32 fileidx0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path0, TY125106* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(FILE*, open_15817_1689653243)(NimStringDesc* filename0, Filemode12409 mode0, NI bufsize0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, readline_15913_1689653243)(FILE* f0, NimStringDesc** line0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, open_215223_1314243012)(Baselexer213009* L0, Streamobj150418* input0, NI buflen0, char136Set refillchars0);
N_NIMCALL(Filestreamobj151477*, newfilestream_151543_1780494535)(NimStringDesc* filename0, Filemode12409 mode0);
N_NIMCALL(void, close_213022_1314243012)(Baselexer213009* L0);
N_NIMCALL(NI, identlen_316113_3901077974)(NimStringDesc* line0, NI start0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_90444_1689653243)(NimStringDesc* s0, Slice90451 x0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_79810_1689653243, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
static N_INLINE(Slice90451, HEX2EHEX2E_105260_1689653243)(NI a0, NI b0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
STRING_LITERAL(TMP2971, ".nimfix", 7);
static NIM_CONST char136Set TMP2981 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2982, "\015\012", 2);
STRING_LITERAL(TMP2983, "\012", 1);
TY316012* gsourcefiles_316029_3901077974;
TNimType NTI316004; /* TSourceFile */
extern TNimType NTI131602; /* seq[string] */
extern TNimType NTI130; /* bool */
extern TNimType NTI138; /* string */
extern TNimType NTI110; /* int32 */
TNimType NTI316012; /* seq[TSourceFile] */
extern Gcheap50618 gch_50658_1689653243;
extern TSafePoint* exchandler_19837_1689653243;
extern TNimType NTI213009; /* BaseLexer */
N_NIMCALL(void, TMP1027)(void* p, NI op) {
	TY316012* a;
	NI LOC1;
	a = (TY316012*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].lines, op);
	nimGCvisit((void*)a->data[LOC1].fullpath, op);
	nimGCvisit((void*)a->data[LOC1].newline, op);
	}
}
N_NIMCALL(void, TMP1028)() {
	nimGCvisit((void*)gsourcefiles_316029_3901077974, 0);
}

static N_INLINE(Cell48104*, usrtocell_52240_1689653243)(void* usr0) {
	Cell48104* result0;
	result0 = (Cell48104*)0;
	result0 = ((Cell48104*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell48104))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53401_1689653243)(Cell48104* c0) {
	addzct_52217_1689653243((&gch_50658_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell48104* c0;
	c0 = usrtocell_52240_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53401_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
	int LOC13;
{	result0 = (NIM_BOOL)0;
	{
		if (!(a0 == b0)) goto LA3;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = (a0 == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b0 == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = (NIM_BOOL)0;
	LOC11 = ((*a0).Sup.len == (*b0).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = (int)0;
	LOC13 = memcmp(((NCSTRING) ((*a0).data)), ((NCSTRING) ((*b0).data)), (*a0).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_19837_1689653243;
	exchandler_19837_1689653243 = s0;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_19837_1689653243 = (*exchandler_19837_1689653243).prev;
}

N_NIMCALL(void, loadfile_316031_3901077974)(Tlineinfo186336 info0) {
	NI32 i0;
	i0 = info0.fileindex;
	{
		if (!((gsourcefiles_316029_3901077974 ? gsourcefiles_316029_3901077974->Sup.len : 0) <= ((NI) (i0)))) goto LA3;
		gsourcefiles_316029_3901077974 = (TY316012*) setLengthSeq(&(gsourcefiles_316029_3901077974)->Sup, sizeof(Tsourcefile316004), ((NI) ((NI32)(i0 + ((NI32) 1)))));
	}
	LA3: ;
	{
		NimStringDesc* path0;
		NimStringDesc* LOC9;
		TY125106 LOC10;
		Baselexer213009 lex0;
		Filestreamobj151477* LOC19;
		Streamobj150418* LOC20;
		NI pos0;
		if (!gsourcefiles_316029_3901077974->data[i0].lines == 0) goto LA7;
		gsourcefiles_316029_3901077974->data[i0].fileidx = info0.fileindex;
		if (gsourcefiles_316029_3901077974->data[i0].lines) nimGCunrefNoCycle(gsourcefiles_316029_3901077974->data[i0].lines);
		gsourcefiles_316029_3901077974->data[i0].lines = (TY131602*) newSeqRC1((&NTI131602), 0);
		path0 = tofullpath_187270_155036129(info0.fileindex);
		LOC9 = (NimStringDesc*)0;
		LOC9 = gsourcefiles_316029_3901077974->data[i0].fullpath; gsourcefiles_316029_3901077974->data[i0].fullpath = copyStringRC1(path0);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		memset((void*)(&LOC10), 0, sizeof(LOC10));
		nossplitFile(path0, (&LOC10));
		gsourcefiles_316029_3901077974->data[i0].isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &TMP2971));
		{
			NimStringDesc* line_316078_3901077974;
			FILE* f_316105_3901077974;
			TSafePoint TMP2972;
			line_316078_3901077974 = (NimStringDesc*)0;
			f_316105_3901077974 = open_15817_1689653243(path0, ((Filemode12409) 0), ((NI) 8000));
			pushSafePoint(&TMP2972);
			TMP2972.status = _setjmp(TMP2972.context);
			if (TMP2972.status == 0) {
				NimStringDesc* res_316107_3901077974;
				res_316107_3901077974 = rawNewString(((NI) 80));
				{
					while (1) {
						NIM_BOOL LOC15;
						NimStringDesc* LOC16;
						LOC15 = (NIM_BOOL)0;
						LOC15 = readline_15913_1689653243(f_316105_3901077974, (&res_316107_3901077974));
						if (!LOC15) goto LA14;
						line_316078_3901077974 = res_316107_3901077974;
						gsourcefiles_316029_3901077974->data[i0].lines = (TY131602*) incrSeqV2(&(gsourcefiles_316029_3901077974->data[i0].lines)->Sup, sizeof(NimStringDesc*));
						LOC16 = (NimStringDesc*)0;
						LOC16 = gsourcefiles_316029_3901077974->data[i0].lines->data[gsourcefiles_316029_3901077974->data[i0].lines->Sup.len]; gsourcefiles_316029_3901077974->data[i0].lines->data[gsourcefiles_316029_3901077974->data[i0].lines->Sup.len] = copyStringRC1(line_316078_3901077974);
						if (LOC16) nimGCunrefNoCycle(LOC16);
						++gsourcefiles_316029_3901077974->data[i0].lines->Sup.len;
					} LA14: ;
				}
				popSafePoint();
			}
			else {
				popSafePoint();
			}
			{
				fclose(f_316105_3901077974);
			}
			if (TMP2972.status != 0) reraiseException();
		}
		memset((void*)(&lex0), 0, sizeof(lex0));
		lex0.Sup.m_type = (&NTI213009);
		LOC19 = (Filestreamobj151477*)0;
		LOC19 = newfilestream_151543_1780494535(path0, ((Filemode12409) 0));
		LOC20 = (Streamobj150418*)0;
		LOC20 = &LOC19->Sup;
		open_215223_1314243012((&lex0), LOC20, ((NI) 8192), TMP2981);
		pos0 = lex0.bufpos;
		{
			while (1) {
				switch (((NU8)(lex0.buf[pos0]))) {
				case 13:
				{
					NimStringDesc* LOC24;
					LOC24 = (NimStringDesc*)0;
					LOC24 = gsourcefiles_316029_3901077974->data[i0].newline; gsourcefiles_316029_3901077974->data[i0].newline = copyStringRC1(((NimStringDesc*) &TMP2982));
					if (LOC24) nimGCunrefNoCycle(LOC24);
					goto LA21;
				}
				break;
				case 10:
				case 0:
				{
					NimStringDesc* LOC26;
					LOC26 = (NimStringDesc*)0;
					LOC26 = gsourcefiles_316029_3901077974->data[i0].newline; gsourcefiles_316029_3901077974->data[i0].newline = copyStringRC1(((NimStringDesc*) &TMP2983));
					if (LOC26) nimGCunrefNoCycle(LOC26);
					goto LA21;
				}
				break;
				default:
				{
				}
				break;
				}
				pos0 += ((NI) 1);
			}
		} LA21: ;
		close_213022_1314243012((&lex0));
	}
	LA7: ;
}

N_NIMCALL(NI, identlen_316113_3901077974)(NimStringDesc* line0, NI start0) {
	NI result0;
	result0 = (NI)0;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = (NIM_BOOL)0;
			LOC3 = ((NI)(start0 + result0) < (line0 ? line0->Sup.len : 0));
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(line0->data[(NI)(start0 + result0)])) >= ((NU8)(97)) && ((NU8)(line0->data[(NI)(start0 + result0)])) <= ((NU8)(122)) || ((NU8)(line0->data[(NI)(start0 + result0)])) >= ((NU8)(65)) && ((NU8)(line0->data[(NI)(start0 + result0)])) <= ((NU8)(90)) || ((NU8)(line0->data[(NI)(start0 + result0)])) >= ((NU8)(48)) && ((NU8)(line0->data[(NI)(start0 + result0)])) <= ((NU8)(57)) || ((NU8)(line0->data[(NI)(start0 + result0)])) >= ((NU8)(128)) && ((NU8)(line0->data[(NI)(start0 + result0)])) <= ((NU8)(255)) || ((NU8)(line0->data[(NI)(start0 + result0)])) == ((NU8)(95)));
			LA4: ;
			if (!LOC3) goto LA2;
			result0 += ((NI) 1);
		} LA2: ;
	}
	return result0;
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_90444_1689653243)(NimStringDesc* s0, Slice90451 x0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = copyStrLast(s0, x0.a, x0.b);
	return result0;
}

static N_INLINE(Slice90451, HEX2EHEX2E_105260_1689653243)(NI a0, NI b0) {
	Slice90451 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.a = a0;
	result0.b = b0;
	return result0;
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell48104* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_52240_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell48104* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_52240_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53401_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(void, replacedeprecated_316156_3901077974)(Tlineinfo186336 info0, Tident194012* oldsym0, Tident194012* newsym0) {
	NimStringDesc* line0;
	NI first0;
	NI last0;
	NI LOC17;
{	loadfile_316031_3901077974(info0);
	line0 = gsourcefiles_316029_3901077974->data[info0.fileindex].lines->data[(NI16)(info0.line - ((NI16) 1))];
	first0 = ((((NI) (info0.col)) <= (line0 ? line0->Sup.len : 0)) ? ((NI) (info0.col)) : (line0 ? line0->Sup.len : 0));
	{
		if (!(first0 < ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = (NIM_BOOL)0;
			LOC7 = (((NI) 0) < first0);
			if (!(LOC7)) goto LA8;
			LOC7 = (((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) >= ((NU8)(97)) && ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) <= ((NU8)(122)) || ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) >= ((NU8)(65)) && ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) <= ((NU8)(90)) || ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) >= ((NU8)(48)) && ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) <= ((NU8)(57)) || ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) >= ((NU8)(128)) && ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) <= ((NU8)(255)) || ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) == ((NU8)(95)));
			LA8: ;
			if (!LOC7) goto LA6;
			first0 -= ((NI) 1);
		} LA6: ;
	}
	{
		if (!(first0 < ((NI) 0))) goto LA11;
		goto BeforeRet;
	}
	LA11: ;
	{
		if (!((NU8)(line0->data[first0]) == (NU8)(96))) goto LA15;
		first0 += ((NI) 1);
	}
	LA15: ;
	LOC17 = (NI)0;
	LOC17 = identlen_316113_3901077974(line0, first0);
	last0 = (NI)((NI)(first0 + LOC17) - ((NI) 1));
	{
		Slice90451 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x0;
		NimStringDesc* LOC25;
		NimStringDesc* LOC26;
		NimStringDesc* LOC27;
		LOC20 = HEX2EHEX2E_105260_1689653243(first0, last0);
		LOC21 = (NimStringDesc*)0;
		LOC21 = HEX5BHEX5D_90444_1689653243(line0, LOC20);
		LOC22 = (NI)0;
		LOC22 = nsuCmpIgnoreStyle(LOC21, (*oldsym0).s);
		if (!(LOC22 == ((NI) 0))) goto LA23;
		LOC25 = (NimStringDesc*)0;
		LOC26 = (NimStringDesc*)0;
		LOC26 = copyStrLast(line0, ((NI) 0), (NI)(first0 - ((NI) 1)));
		LOC27 = (NimStringDesc*)0;
		LOC27 = copyStr(line0, (NI)(last0 + ((NI) 1)));
		LOC25 = rawNewString(LOC26->Sup.len + (*newsym0).s->Sup.len + LOC27->Sup.len + 0);
appendString(LOC25, LOC26);
appendString(LOC25, (*newsym0).s);
appendString(LOC25, LOC27);
		x0 = LOC25;
		asgnRefNoCycle((void**) (&gsourcefiles_316029_3901077974->data[info0.fileindex].lines->data[(NI16)(info0.line - ((NI16) 1))]), x0);
		gsourcefiles_316029_3901077974->data[info0.fileindex].dirty = NIM_TRUE;
	}
	LA23: ;
	}BeforeRet: ;
}

N_NIMCALL(void, replacedeprecated_316209_3901077974)(Tlineinfo186336 info0, Tsym264826* oldsym0, Tsym264826* newsym0) {
	replacedeprecated_316156_3901077974(info0, (*oldsym0).name, (*newsym0).name);
}
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseInit000)(void) {
nimRegisterGlobalMarker(TMP1028);
	if (gsourcefiles_316029_3901077974) nimGCunrefNoCycle(gsourcefiles_316029_3901077974);
	gsourcefiles_316029_3901077974 = (TY316012*) newSeqRC1((&NTI316012), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseDatInit000)(void) {
static TNimNode* TMP1026[6];
static TNimNode TMP1024[7];
NTI316004.size = sizeof(Tsourcefile316004);
NTI316004.kind = 18;
NTI316004.base = 0;
NTI316004.flags = 2;
TMP1026[0] = &TMP1024[1];
TMP1024[1].kind = 1;
TMP1024[1].offset = offsetof(Tsourcefile316004, lines);
TMP1024[1].typ = (&NTI131602);
TMP1024[1].name = "lines";
TMP1026[1] = &TMP1024[2];
TMP1024[2].kind = 1;
TMP1024[2].offset = offsetof(Tsourcefile316004, dirty);
TMP1024[2].typ = (&NTI130);
TMP1024[2].name = "dirty";
TMP1026[2] = &TMP1024[3];
TMP1024[3].kind = 1;
TMP1024[3].offset = offsetof(Tsourcefile316004, isnimfixfile);
TMP1024[3].typ = (&NTI130);
TMP1024[3].name = "isNimfixFile";
TMP1026[3] = &TMP1024[4];
TMP1024[4].kind = 1;
TMP1024[4].offset = offsetof(Tsourcefile316004, fullpath);
TMP1024[4].typ = (&NTI138);
TMP1024[4].name = "fullpath";
TMP1026[4] = &TMP1024[5];
TMP1024[5].kind = 1;
TMP1024[5].offset = offsetof(Tsourcefile316004, newline);
TMP1024[5].typ = (&NTI138);
TMP1024[5].name = "newline";
TMP1026[5] = &TMP1024[6];
TMP1024[6].kind = 1;
TMP1024[6].offset = offsetof(Tsourcefile316004, fileidx);
TMP1024[6].typ = (&NTI110);
TMP1024[6].name = "fileIdx";
TMP1024[0].len = 6; TMP1024[0].kind = 2; TMP1024[0].sons = &TMP1026[0];
NTI316004.node = &TMP1024[0];
NTI316012.size = sizeof(TY316012*);
NTI316012.kind = 24;
NTI316012.base = (&NTI316004);
NTI316012.flags = 2;
NTI316012.marker = TMP1027;
}

