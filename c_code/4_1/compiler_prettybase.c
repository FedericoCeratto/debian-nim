/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
#include <stdio.h>
typedef struct TY345011 TY345011;
typedef struct Tsourcefile345003 Tsourcefile345003;
typedef struct TY135002 TY135002;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
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
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct Tsym292834 Tsym292834;
typedef struct Tident199010 Tident199010;
typedef struct TY128506 TY128506;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TSafePoint TSafePoint;
typedef struct Baselexer218007 Baselexer218007;
typedef struct Streamobj156818 Streamobj156818;
typedef struct Filestreamobj157877 Filestreamobj157877;
typedef struct Slice90651 Slice90651;
typedef struct Tidobj199004 Tidobj199004;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct TY292929 TY292929;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Ttype292840 Ttype292840;
typedef struct Tnode292802 Tnode292802;
typedef struct Tloc292816 Tloc292816;
typedef struct Ropeobj178006 Ropeobj178006;
typedef struct Tlib292820 Tlib292820;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct TY292960 TY292960;
typedef struct Tnodeseq292796 Tnodeseq292796;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct TY292961 TY292961;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tsourcefile345003  {
TY135002* lines;
NIM_BOOL dirty;
NIM_BOOL isnimfixfile;
NimStringDesc* fullpath;
NimStringDesc* newline;
NI32 fileidx;
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
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, Globalmarkerproc55802) (void);
struct  Cell47305  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47321  {
NI len;
NI cap;
Cell47305** d;
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
Memregion29485 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
struct  Tlineinfo191336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct TY128506 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
typedef NU8 Filemode13009;
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
typedef NU8 char136Set[32];
struct  Baselexer218007  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj156818* input;
NI linenumber;
NI sentinel;
NI linestart;
char136Set refillchars;
};
struct  Slice90651  {
NI a;
NI b;
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
typedef NI TY29418[16];
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
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29418 bits;
};
typedef N_NIMCALL_PTR(void, TY156819) (Streamobj156818* s0);
typedef N_NIMCALL_PTR(NIM_BOOL, TY156823) (Streamobj156818* s0);
typedef N_NIMCALL_PTR(void, TY156827) (Streamobj156818* s0, NI pos0);
typedef N_NIMCALL_PTR(NI, TY156832) (Streamobj156818* s0);
typedef N_NIMCALL_PTR(NI, TY156836) (Streamobj156818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(NI, TY156842) (Streamobj156818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY156848) (Streamobj156818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY156854) (Streamobj156818* s0);
struct  Streamobj156818  {
  TNimObject Sup;
TY156819 closeimpl;
TY156823 atendimpl;
TY156827 setpositionimpl;
TY156832 getpositionimpl;
TY156836 readdataimpl;
TY156842 peekdataimpl;
TY156848 writedataimpl;
TY156854 flushimpl;
};
struct  Filestreamobj157877  {
  Streamobj156818 Sup;
FILE* f;
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
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct  Tinstantiation292824  {
Tsym292834* sym;
Ttypeseq292836* concretetypes;
NI compilesid;
};
struct TY292961 {
NI Field0;
Tsym292834* Field1;
};
struct TY345011 {
  TGenericSeq Sup;
  Tsourcefile345003 data[SEQ_DECL_SIZE];
};
struct TY135002 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
struct TY292960 {
  TGenericSeq Sup;
  TY292961 data[SEQ_DECL_SIZE];
};
struct Tnodeseq292796 {
  TGenericSeq Sup;
  Tnode292802* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T3901077974_3)(void* p, NI op);
N_NIMCALL(void, T3901077974_4)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55802 markerproc0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(void, replacedeprecated_345155_3901077974)(Tlineinfo191336 info0, Tident199010* oldsym0, Tident199010* newsym0);
N_NIMCALL(void, loadfile_345030_3901077974)(Tlineinfo191336 info0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
N_NIMCALL(NimStringDesc*, tofullpath_192264_155036129)(NI32 fileidx0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path0, TY128506* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
N_NIMCALL(FILE*, open_14817_1689653243)(NimStringDesc* filename0, Filemode13009 mode0, NI bufsize0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, readline_14915_1689653243)(FILE* f0, NimStringDesc** line0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, close_14853_1689653243)(FILE* f0);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, open_220223_1314243012)(Baselexer218007* L0, Streamobj156818* input0, NI buflen0, char136Set refillchars0);
N_NIMCALL(Filestreamobj157877*, newfilestream_157942_1780494535)(NimStringDesc* filename0, Filemode13009 mode0);
N_NIMCALL(void, close_218021_1314243012)(Baselexer218007* L0);
N_NIMCALL(NI, identlen_345112_3901077974)(NimStringDesc* line0, NI start0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_90644_1689653243)(NimStringDesc* s0, Slice90651 x0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_79210_1689653243, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
static N_INLINE(Slice90651, HEX2EHEX2E_109260_1689653243)(NI a0, NI b0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
STRING_LITERAL(T3901077974_5, ".nimfix", 7);
static NIM_CONST char136Set T3901077974_7 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(T3901077974_8, "\015\012", 2);
STRING_LITERAL(T3901077974_9, "\012", 1);
TY345011* gsourcefiles_345028_3901077974;
TNimType NTI345003; /* TSourceFile */
extern TNimType NTI135002; /* seq[string] */
extern TNimType NTI130; /* bool */
extern TNimType NTI138; /* string */
extern TNimType NTI110; /* int32 */
TNimType NTI345011; /* seq[TSourceFile] */
extern Gcheap49818 gch_49858_1689653243;
extern TSafePoint* exchandler_18837_1689653243;
extern TNimType NTI218007; /* BaseLexer */
N_NIMCALL(void, T3901077974_3)(void* p, NI op) {
	TY345011* a;
	NI LOC1;
	a = (TY345011*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].lines, op);
	nimGCvisit((void*)a->data[LOC1].fullpath, op);
	nimGCvisit((void*)a->data[LOC1].newline, op);
	}
}
N_NIMCALL(void, T3901077974_4)(void) {
	nimGCvisit((void*)gsourcefiles_345028_3901077974, 0);
}

static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47305* result0;
	result0 = (Cell47305*)0;
	result0 = ((Cell47305*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47305))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47305* c0;
	c0 = usrtocell_51440_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0) {
	NIM_BOOL result0;
	int LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (int)0;
	LOC1 = memcmp(a0, b0, ((size_t) (size0)));
	result0 = (LOC1 == ((NI32) 0));
	return result0;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
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
	LOC11 = equalmem_7495_1689653243(((void*) ((*a0).data)), ((void*) ((*b0).data)), ((NI) ((*a0).Sup.len)));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_18837_1689653243;
	exchandler_18837_1689653243 = s0;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_18837_1689653243 = (*exchandler_18837_1689653243).prev;
}

N_NIMCALL(void, loadfile_345030_3901077974)(Tlineinfo191336 info0) {
	NI32 i0;
	i0 = info0.fileindex;
	{
		if (!((gsourcefiles_345028_3901077974 ? gsourcefiles_345028_3901077974->Sup.len : 0) <= ((NI) (i0)))) goto LA3;
		gsourcefiles_345028_3901077974 = (TY345011*) setLengthSeq(&(gsourcefiles_345028_3901077974)->Sup, sizeof(Tsourcefile345003), ((NI) ((NI32)(i0 + ((NI32) 1)))));
	}
	LA3: ;
	{
		NimStringDesc* path0;
		NimStringDesc* LOC9;
		TY128506 LOC10;
		Baselexer218007 lex0;
		Filestreamobj157877* LOC19;
		Streamobj156818* LOC20;
		NI pos0;
		if (!gsourcefiles_345028_3901077974->data[i0].lines == 0) goto LA7;
		gsourcefiles_345028_3901077974->data[i0].fileidx = info0.fileindex;
		if (gsourcefiles_345028_3901077974->data[i0].lines) nimGCunrefNoCycle(gsourcefiles_345028_3901077974->data[i0].lines);
		gsourcefiles_345028_3901077974->data[i0].lines = (TY135002*) newSeqRC1((&NTI135002), 0);
		path0 = tofullpath_192264_155036129(info0.fileindex);
		LOC9 = (NimStringDesc*)0;
		LOC9 = gsourcefiles_345028_3901077974->data[i0].fullpath; gsourcefiles_345028_3901077974->data[i0].fullpath = copyStringRC1(path0);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		memset((void*)(&LOC10), 0, sizeof(LOC10));
		nossplitFile(path0, (&LOC10));
		gsourcefiles_345028_3901077974->data[i0].isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &T3901077974_5));
		{
			NimStringDesc* line_345077_3901077974;
			FILE* f_345104_3901077974;
			TSafePoint T3901077974_6;
			line_345077_3901077974 = (NimStringDesc*)0;
			f_345104_3901077974 = open_14817_1689653243(path0, ((Filemode13009) 0), ((NI) 8000));
			pushSafePoint(&T3901077974_6);
			T3901077974_6.status = _setjmp(T3901077974_6.context);
			if (T3901077974_6.status == 0) {
				NimStringDesc* res_345106_3901077974;
				res_345106_3901077974 = rawNewString(((NI) 80));
				{
					while (1) {
						NIM_BOOL LOC15;
						NimStringDesc* LOC16;
						LOC15 = (NIM_BOOL)0;
						LOC15 = readline_14915_1689653243(f_345104_3901077974, (&res_345106_3901077974));
						if (!LOC15) goto LA14;
						line_345077_3901077974 = res_345106_3901077974;
						gsourcefiles_345028_3901077974->data[i0].lines = (TY135002*) incrSeqV2(&(gsourcefiles_345028_3901077974->data[i0].lines)->Sup, sizeof(NimStringDesc*));
						LOC16 = (NimStringDesc*)0;
						LOC16 = gsourcefiles_345028_3901077974->data[i0].lines->data[gsourcefiles_345028_3901077974->data[i0].lines->Sup.len]; gsourcefiles_345028_3901077974->data[i0].lines->data[gsourcefiles_345028_3901077974->data[i0].lines->Sup.len] = copyStringRC1(line_345077_3901077974);
						if (LOC16) nimGCunrefNoCycle(LOC16);
						++gsourcefiles_345028_3901077974->data[i0].lines->Sup.len;
					} LA14: ;
				}
				popSafePoint();
			}
			else {
				popSafePoint();
			}
			{
				close_14853_1689653243(f_345104_3901077974);
			}
			if (T3901077974_6.status != 0) reraiseException();
		}
		memset((void*)(&lex0), 0, sizeof(lex0));
		lex0.Sup.m_type = (&NTI218007);
		LOC19 = (Filestreamobj157877*)0;
		LOC19 = newfilestream_157942_1780494535(path0, ((Filemode13009) 0));
		LOC20 = (Streamobj156818*)0;
		LOC20 = &LOC19->Sup;
		open_220223_1314243012((&lex0), LOC20, ((NI) 8192), T3901077974_7);
		pos0 = lex0.bufpos;
		{
			while (1) {
				switch (((NU8)(lex0.buf[pos0]))) {
				case 13:
				{
					NimStringDesc* LOC24;
					LOC24 = (NimStringDesc*)0;
					LOC24 = gsourcefiles_345028_3901077974->data[i0].newline; gsourcefiles_345028_3901077974->data[i0].newline = copyStringRC1(((NimStringDesc*) &T3901077974_8));
					if (LOC24) nimGCunrefNoCycle(LOC24);
					goto LA21;
				}
				break;
				case 10:
				case 0:
				{
					NimStringDesc* LOC26;
					LOC26 = (NimStringDesc*)0;
					LOC26 = gsourcefiles_345028_3901077974->data[i0].newline; gsourcefiles_345028_3901077974->data[i0].newline = copyStringRC1(((NimStringDesc*) &T3901077974_9));
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
		close_218021_1314243012((&lex0));
	}
	LA7: ;
}

N_NIMCALL(NI, identlen_345112_3901077974)(NimStringDesc* line0, NI start0) {
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

static N_INLINE(NimStringDesc*, HEX5BHEX5D_90644_1689653243)(NimStringDesc* s0, Slice90651 x0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = copyStrLast(s0, x0.a, x0.b);
	return result0;
}

static N_INLINE(Slice90651, HEX2EHEX2E_109260_1689653243)(NI a0, NI b0) {
	Slice90651 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.a = a0;
	result0.b = b0;
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
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(void, replacedeprecated_345155_3901077974)(Tlineinfo191336 info0, Tident199010* oldsym0, Tident199010* newsym0) {
	NimStringDesc* line0;
	NI first0;
	NI last0;
	NI LOC17;
{	loadfile_345030_3901077974(info0);
	line0 = gsourcefiles_345028_3901077974->data[info0.fileindex].lines->data[(NI16)(info0.line - ((NI16) 1))];
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
	LOC17 = identlen_345112_3901077974(line0, first0);
	last0 = (NI)((NI)(first0 + LOC17) - ((NI) 1));
	{
		Slice90651 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x0;
		NimStringDesc* LOC25;
		NimStringDesc* LOC26;
		NimStringDesc* LOC27;
		LOC20 = HEX2EHEX2E_109260_1689653243(first0, last0);
		LOC21 = (NimStringDesc*)0;
		LOC21 = HEX5BHEX5D_90644_1689653243(line0, LOC20);
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
		asgnRefNoCycle((void**) (&gsourcefiles_345028_3901077974->data[info0.fileindex].lines->data[(NI16)(info0.line - ((NI16) 1))]), x0);
		gsourcefiles_345028_3901077974->data[info0.fileindex].dirty = NIM_TRUE;
	}
	LA23: ;
	}BeforeRet: ;
}

N_NIMCALL(void, replacedeprecated_345208_3901077974)(Tlineinfo191336 info0, Tsym292834* oldsym0, Tsym292834* newsym0) {
	replacedeprecated_345155_3901077974(info0, (*oldsym0).name, (*newsym0).name);
}
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseInit000)(void) {
nimRegisterGlobalMarker(T3901077974_4);
	if (gsourcefiles_345028_3901077974) nimGCunrefNoCycle(gsourcefiles_345028_3901077974);
	gsourcefiles_345028_3901077974 = (TY345011*) newSeqRC1((&NTI345011), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseDatInit000)(void) {
static TNimNode* T3901077974_2[6];
static TNimNode T3901077974_0[7];
NTI345003.size = sizeof(Tsourcefile345003);
NTI345003.kind = 18;
NTI345003.base = 0;
NTI345003.flags = 2;
T3901077974_2[0] = &T3901077974_0[1];
T3901077974_0[1].kind = 1;
T3901077974_0[1].offset = offsetof(Tsourcefile345003, lines);
T3901077974_0[1].typ = (&NTI135002);
T3901077974_0[1].name = "lines";
T3901077974_2[1] = &T3901077974_0[2];
T3901077974_0[2].kind = 1;
T3901077974_0[2].offset = offsetof(Tsourcefile345003, dirty);
T3901077974_0[2].typ = (&NTI130);
T3901077974_0[2].name = "dirty";
T3901077974_2[2] = &T3901077974_0[3];
T3901077974_0[3].kind = 1;
T3901077974_0[3].offset = offsetof(Tsourcefile345003, isnimfixfile);
T3901077974_0[3].typ = (&NTI130);
T3901077974_0[3].name = "isNimfixFile";
T3901077974_2[3] = &T3901077974_0[4];
T3901077974_0[4].kind = 1;
T3901077974_0[4].offset = offsetof(Tsourcefile345003, fullpath);
T3901077974_0[4].typ = (&NTI138);
T3901077974_0[4].name = "fullpath";
T3901077974_2[4] = &T3901077974_0[5];
T3901077974_0[5].kind = 1;
T3901077974_0[5].offset = offsetof(Tsourcefile345003, newline);
T3901077974_0[5].typ = (&NTI138);
T3901077974_0[5].name = "newline";
T3901077974_2[5] = &T3901077974_0[6];
T3901077974_0[6].kind = 1;
T3901077974_0[6].offset = offsetof(Tsourcefile345003, fileidx);
T3901077974_0[6].typ = (&NTI110);
T3901077974_0[6].name = "fileIdx";
T3901077974_0[0].len = 6; T3901077974_0[0].kind = 2; T3901077974_0[0].sons = &T3901077974_2[0];
NTI345003.node = &T3901077974_0[0];
NTI345011.size = sizeof(TY345011*);
NTI345011.kind = 24;
NTI345011.base = (&NTI345003);
NTI345011.flags = 2;
NTI345011.marker = T3901077974_3;
}

