/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tsym292834 Tsym292834;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttype292840 Ttype292840;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Tidobj199004 Tidobj199004;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct Tnode292802 Tnode292802;
typedef struct TY292960 TY292960;
typedef struct Tloc292816 Tloc292816;
typedef struct Ropeobj178006 Ropeobj178006;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct Tident199010 Tident199010;
typedef struct TY292929 TY292929;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct Tlib292820 Tlib292820;
typedef struct Tidentiter299063 Tidentiter299063;
typedef struct Tnodeseq292796 Tnodeseq292796;
typedef struct TY292961 TY292961;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct Tlistentry147007 Tlistentry147007;
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
typedef Ttype292840* TY338008[63];
struct  Tstrtable292806  {
NI counter;
Tsymseq292804* data;
};
typedef Ttype292840* TY338216[70];
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj199004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Ttypekind292244;
typedef NU8 Tcallingconvention292002;
typedef NU32 Ttypeflag292431Set;
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
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Tsymkind292435;
typedef NU16 Tmagic292524;
struct  Tlineinfo191336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Tsymflag292184Set;
typedef NU32 Toption169009Set;
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
typedef NU16 Tmsgkind191002;
struct  Tidentiter299063  {
NI h;
Tident199010* name;
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
struct TY292961 {
NI Field0;
Tsym292834* Field1;
};
struct  Ropeobj178006  {
  TNimObject Sup;
Ropeobj178006* left;
Ropeobj178006* right;
NI length;
NimStringDesc* data;
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
struct  Tident199010  {
  Tidobj199004 Sup;
NimStringDesc* s;
Tident199010* next;
NI h;
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
struct Ttypeseq292836 {
  TGenericSeq Sup;
  Ttype292840* data[SEQ_DECL_SIZE];
};
struct Tsymseq292804 {
  TGenericSeq Sup;
  Tsym292834* data[SEQ_DECL_SIZE];
};
struct TY292960 {
  TGenericSeq Sup;
  TY292961 data[SEQ_DECL_SIZE];
};
struct TY292929 {
  TGenericSeq Sup;
  Tinstantiation292824* data[SEQ_DECL_SIZE];
};
struct Tnodeseq292796 {
  TGenericSeq Sup;
  Tnode292802* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T3937434831_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55802 markerproc0);
N_NIMCALL(void, T3937434831_3)(void);
N_NIMCALL(void, T3937434831_4)(void);
N_NIMCALL(void, T3937434831_5)(void);
N_NIMCALL(void, T3937434831_6)(void);
N_NIMCALL(void, initstrtable_296001_850551059)(Tstrtable292806* x0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
static N_INLINE(Ttype292840*, skipintlit_338651_3937434831)(Ttype292840* t0);
N_NIMCALL(Ttype292840*, getsystype_338150_3937434831)(Ttypekind292244 kind0);
N_NIMCALL(Ttype292840*, systypefromname_338145_3937434831)(NimStringDesc* name0);
N_NIMCALL(Tsym292834*, getsyssym_338038_3937434831)(NimStringDesc* name0);
N_NIMCALL(Tsym292834*, strtableget_299045_2984716966)(Tstrtable292806 t0, Tident199010* name0);
N_NIMCALL(Tident199010*, getident_199441_791273810)(NimStringDesc* identifier0);
N_NIMCALL(void, rawmessage_194612_155036129)(Tmsgkind191002 msg0, NimStringDesc* arg0);
N_NIMCALL(Tsym292834*, newsym_293684_850551059)(Tsymkind292435 symkind0, Tident199010* name0, Tsym292834* owner0, Tlineinfo191336 info0);
N_NIMCALL(Ttype292840*, newtype_295107_850551059)(Ttypekind292244 kind0, Tsym292834* owner0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(void, loadstub_335224_1724185294)(Tsym292834* s0);
N_NIMCALL(Ttype292840*, newsystype_338033_3937434831)(Ttypekind292244 kind0, NI size0);
N_NIMCALL(void, internalerror_196113_155036129)(NimStringDesc* errmsg0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e0, TNimType* typ0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
N_NIMCALL(void, propagatetoowner_296176_850551059)(Ttype292840* owner0, Ttype292840* elem0);
N_NIMCALL(Tsym292834*, initidentiter_299066_2984716966)(Tidentiter299063* ti0, Tstrtable292806 tab0, Tident199010* s0);
N_NIMCALL(Tsym292834*, nextidentiter_299072_2984716966)(Tidentiter299063* ti0, Tstrtable292806 tab0);
N_NIMCALL(void, strtableadd_299040_2984716966)(Tstrtable292806* t0, Tsym292834* n0);
N_NIMCALL(void, localerror_196085_155036129)(Tlineinfo191336 info0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, HEX24_192431_155036129)(Tlineinfo191336 info0);
N_NIMCALL(Ttype292840*, copytype_295470_850551059)(Ttype292840* t0, Tsym292834* owner0, NIM_BOOL keepid0);
N_NIMCALL(Ttype292840*, getintlittype_338627_3937434831)(Tnode292802* literal0);
N_NIMCALL(void, internalerror_196100_155036129)(Tlineinfo191336 info0, NimStringDesc* errmsg0);
STRING_LITERAL(T3937434831_7, "int", 3);
STRING_LITERAL(T3937434831_8, "int8", 4);
STRING_LITERAL(T3937434831_9, "int16", 5);
STRING_LITERAL(T3937434831_10, "int32", 5);
STRING_LITERAL(T3937434831_11, "int64", 5);
STRING_LITERAL(T3937434831_12, "uint", 4);
STRING_LITERAL(T3937434831_13, "uint8", 5);
STRING_LITERAL(T3937434831_14, "uint16", 6);
STRING_LITERAL(T3937434831_15, "uint32", 6);
STRING_LITERAL(T3937434831_16, "uint64", 6);
STRING_LITERAL(T3937434831_17, "float", 5);
STRING_LITERAL(T3937434831_18, "float32", 7);
STRING_LITERAL(T3937434831_19, "float64", 7);
STRING_LITERAL(T3937434831_20, "float128", 8);
STRING_LITERAL(T3937434831_21, "bool", 4);
STRING_LITERAL(T3937434831_22, "char", 4);
STRING_LITERAL(T3937434831_23, "string", 6);
STRING_LITERAL(T3937434831_24, "cstring", 7);
STRING_LITERAL(T3937434831_25, "pointer", 7);
STRING_LITERAL(T3937434831_26, "request for typekind: ", 22);
STRING_LITERAL(T3937434831_27, "wanted: ", 8);
STRING_LITERAL(T3937434831_28, " got: ", 6);
STRING_LITERAL(T3937434831_29, "type not found: ", 16);
STRING_LITERAL(T3937434831_30, "symbol conflicts with other .exportNims symbol at: ", 51);
STRING_LITERAL(T3937434831_31, "invalid int size", 16);
Tsym292834* systemmodule_338004_3937434831;
extern TNimType NTI292800; /* PSym */
TY338008 gsystypes_338009_3937434831;
extern TNimType NTI292798; /* PType */
TNimType NTI338008; /* array[TTypeKind, PType] */
Tstrtable292806 compilerprocs_338010_3937434831;
extern TNimType NTI292806; /* TStrTable */
Tstrtable292806 exposed_338011_3937434831;
TY338216 inttypecache_338217_3937434831;
TNimType NTI338216; /* array[-5..64, PType] */
extern TNimType NTI292836; /* TTypeSeq */
extern Gcheap49818 gch_49858_1689653243;
extern NI ptrsize_176643_4151366050;
extern TNimType NTI292244; /* TTypeKind */
extern Tstrtable292806 rodcompilerprocs_332078_1724185294;
extern NI intsize_176641_4151366050;
N_NIMCALL(void, T3937434831_2)(void) {
	nimGCvisit((void*)systemmodule_338004_3937434831, 0);
}
N_NIMCALL(void, T3937434831_3)(void) {
	NI LOC1;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 63; LOC1++) {
	nimGCvisit((void*)gsystypes_338009_3937434831[LOC1], 0);
	}
}
N_NIMCALL(void, T3937434831_4)(void) {
	nimGCvisit((void*)compilerprocs_338010_3937434831.data, 0);
}
N_NIMCALL(void, T3937434831_5)(void) {
	nimGCvisit((void*)exposed_338011_3937434831.data, 0);
}
N_NIMCALL(void, T3937434831_6)(void) {
	NI LOC1;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 70; LOC1++) {
	nimGCvisit((void*)inttypecache_338217_3937434831[LOC1], 0);
	}
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

N_NIMCALL(Tsym292834*, getsyssym_338038_3937434831)(NimStringDesc* name0) {
	Tsym292834* result0;
	Tident199010* LOC1;
	result0 = (Tsym292834*)0;
	LOC1 = (Tident199010*)0;
	LOC1 = getident_199441_791273810(name0);
	result0 = strtableget_299045_2984716966((*systemmodule_338004_3937434831).kindU.S3.tab, LOC1);
	{
		Tident199010* LOC6;
		if (!(result0 == NIM_NIL)) goto LA4;
		rawmessage_194612_155036129(((Tmsgkind191002) 68), name0);
		LOC6 = (Tident199010*)0;
		LOC6 = getident_199441_791273810(name0);
		result0 = newsym_293684_850551059(((Tsymkind292435) 0), LOC6, systemmodule_338004_3937434831, (*systemmodule_338004_3937434831).info);
		asgnRefNoCycle((void**) (&(*result0).typ), newtype_295107_850551059(((Ttypekind292244) 50), systemmodule_338004_3937434831));
	}
	LA4: ;
	{
		if (!((*result0).kind == ((Tsymkind292435) 22))) goto LA9;
		loadstub_335224_1724185294(result0);
	}
	LA9: ;
	{
		if (!((*result0).kind == ((Tsymkind292435) 24))) goto LA13;
		result0 = (*result0).owner;
	}
	LA13: ;
	return result0;
}

N_NIMCALL(Ttype292840*, systypefromname_338145_3937434831)(NimStringDesc* name0) {
	Ttype292840* result0;
	Tsym292834* LOC1;
	result0 = (Ttype292840*)0;
	LOC1 = (Tsym292834*)0;
	LOC1 = getsyssym_338038_3937434831(name0);
	result0 = (*LOC1).typ;
	return result0;
}

N_NIMCALL(Ttype292840*, newsystype_338033_3937434831)(Ttypekind292244 kind0, NI size0) {
	Ttype292840* result0;
	result0 = (Ttype292840*)0;
	result0 = newtype_295107_850551059(kind0, systemmodule_338004_3937434831);
	(*result0).size = ((NI64) (size0));
	(*result0).align = ((NI16) (size0));
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

N_NIMCALL(Ttype292840*, getsystype_338150_3937434831)(Ttypekind292244 kind0) {
	Ttype292840* result0;
{	result0 = (Ttype292840*)0;
	result0 = gsystypes_338009_3937434831[(kind0)- 0];
	{
		if (!(result0 == NIM_NIL)) goto LA3;
		switch (kind0) {
		case ((Ttypekind292244) 31):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_7));
		}
		break;
		case ((Ttypekind292244) 32):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_8));
		}
		break;
		case ((Ttypekind292244) 33):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_9));
		}
		break;
		case ((Ttypekind292244) 34):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_10));
		}
		break;
		case ((Ttypekind292244) 35):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_11));
		}
		break;
		case ((Ttypekind292244) 40):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_12));
		}
		break;
		case ((Ttypekind292244) 41):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_13));
		}
		break;
		case ((Ttypekind292244) 42):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_14));
		}
		break;
		case ((Ttypekind292244) 43):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_15));
		}
		break;
		case ((Ttypekind292244) 44):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_16));
		}
		break;
		case ((Ttypekind292244) 36):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_17));
		}
		break;
		case ((Ttypekind292244) 37):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_18));
		}
		break;
		case ((Ttypekind292244) 38):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_19));
			goto BeforeRet;
		}
		break;
		case ((Ttypekind292244) 39):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_20));
		}
		break;
		case ((Ttypekind292244) 1):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_21));
		}
		break;
		case ((Ttypekind292244) 2):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_22));
		}
		break;
		case ((Ttypekind292244) 28):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_23));
		}
		break;
		case ((Ttypekind292244) 29):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_24));
		}
		break;
		case ((Ttypekind292244) 26):
		{
			result0 = systypefromname_338145_3937434831(((NimStringDesc*) &T3937434831_25));
		}
		break;
		case ((Ttypekind292244) 5):
		{
			result0 = newsystype_338033_3937434831(((Ttypekind292244) 5), ptrsize_176643_4151366050);
		}
		break;
		default:
		{
			NimStringDesc* LOC26;
			LOC26 = (NimStringDesc*)0;
			LOC26 = rawNewString(reprEnum((NI)kind0, (&NTI292244))->Sup.len + 22);
appendString(LOC26, ((NimStringDesc*) &T3937434831_26));
appendString(LOC26, reprEnum((NI)kind0, (&NTI292244)));
			internalerror_196113_155036129(LOC26);
		}
		break;
		}
		asgnRefNoCycle((void**) (&gsystypes_338009_3937434831[(kind0)- 0]), result0);
	}
	LA3: ;
	{
		NimStringDesc* LOC31;
		if (!!(((*result0).kind == kind0))) goto LA29;
		LOC31 = (NimStringDesc*)0;
		LOC31 = rawNewString(reprEnum((NI)kind0, (&NTI292244))->Sup.len + reprEnum((NI)(*result0).kind, (&NTI292244))->Sup.len + 14);
appendString(LOC31, ((NimStringDesc*) &T3937434831_27));
appendString(LOC31, reprEnum((NI)kind0, (&NTI292244)));
appendString(LOC31, ((NimStringDesc*) &T3937434831_28));
appendString(LOC31, reprEnum((NI)(*result0).kind, (&NTI292244)));
		internalerror_196113_155036129(LOC31);
	}
	LA29: ;
	{
		NimStringDesc* LOC36;
		if (!(result0 == NIM_NIL)) goto LA34;
		LOC36 = (NimStringDesc*)0;
		LOC36 = rawNewString(reprEnum((NI)kind0, (&NTI292244))->Sup.len + 16);
appendString(LOC36, ((NimStringDesc*) &T3937434831_29));
appendString(LOC36, reprEnum((NI)kind0, (&NTI292244)));
		internalerror_196113_155036129(LOC36);
	}
	LA34: ;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(Ttype292840*, skipintlit_338651_3937434831)(Ttype292840* t0) {
	Ttype292840* result0;
{	result0 = (Ttype292840*)0;
	{
		if (!!(((*t0).n == NIM_NIL))) goto LA3;
		{
			if (!((*t0).kind == ((Ttypekind292244) 31) || (*t0).kind == ((Ttypekind292244) 36))) goto LA7;
			result0 = getsystype_338150_3937434831((*t0).kind);
			goto BeforeRet;
		}
		LA7: ;
	}
	LA3: ;
	result0 = t0;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, addsonskipintlit_338678_3937434831)(Ttype292840* father0, Ttype292840* son0) {
	Ttype292840* s0;
	{
		if (!(*father0).sons == 0) goto LA3;
		if ((*father0).sons) nimGCunrefNoCycle((*father0).sons);
		(*father0).sons = (Ttypeseq292836*) newSeqRC1((&NTI292836), 0);
	}
	LA3: ;
	s0 = skipintlit_338651_3937434831(son0);
	(*father0).sons = (Ttypeseq292836*) incrSeqV2(&((*father0).sons)->Sup, sizeof(Ttype292840*));
	asgnRefNoCycle((void**) (&(*father0).sons->data[(*father0).sons->Sup.len]), s0);
	++(*father0).sons->Sup.len;
	propagatetoowner_296176_850551059(father0, s0);
}

N_NIMCALL(Ttype292840*, nilorsysint_338015_3937434831)(void) {
	Ttype292840* result0;
	result0 = (Ttype292840*)0;
	result0 = gsystypes_338009_3937434831[(((Ttypekind292244) 31))- 0];
	return result0;
}

N_NIMCALL(Tsym292834*, getsysmagic_338076_3937434831)(NimStringDesc* name0, Tmagic292524 m0) {
	Tsym292834* result0;
	Tidentiter299063 ti0;
	Tident199010* id0;
	Tsym292834* r0;
{	result0 = (Tsym292834*)0;
	memset((void*)(&ti0), 0, sizeof(ti0));
	id0 = getident_199441_791273810(name0);
	r0 = initidentiter_299066_2984716966((&ti0), (*systemmodule_338004_3937434831).kindU.S3.tab, id0);
	{
		while (1) {
			if (!!((r0 == NIM_NIL))) goto LA2;
			{
				if (!((*r0).kind == ((Tsymkind292435) 22))) goto LA5;
				loadstub_335224_1724185294(r0);
			}
			LA5: ;
			{
				if (!((*r0).magic == m0)) goto LA9;
				{
					if (!((*(*(*r0).typ).sons->data[((NI) 0)]).kind == ((Ttypekind292244) 31))) goto LA13;
					result0 = r0;
					goto BeforeRet;
				}
				LA13: ;
				result0 = r0;
			}
			LA9: ;
			r0 = nextidentiter_299072_2984716966((&ti0), (*systemmodule_338004_3937434831).kindU.S3.tab);
		} LA2: ;
	}
	{
		if (!!((result0 == NIM_NIL))) goto LA17;
		goto BeforeRet;
	}
	LA17: ;
	rawmessage_194612_155036129(((Tmsgkind191002) 68), name0);
	result0 = newsym_293684_850551059(((Tsymkind292435) 0), id0, systemmodule_338004_3937434831, (*systemmodule_338004_3937434831).info);
	asgnRefNoCycle((void**) (&(*result0).typ), newtype_295107_850551059(((Ttypekind292244) 50), systemmodule_338004_3937434831));
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tsym292834*, getcompilerproc_338746_3937434831)(NimStringDesc* name0) {
	Tsym292834* result0;
	Tident199010* ident0;
	result0 = (Tsym292834*)0;
	ident0 = getident_199441_791273810(name0);
	result0 = strtableget_299045_2984716966(compilerprocs_338010_3937434831, ident0);
	{
		if (!(result0 == NIM_NIL)) goto LA3;
		result0 = strtableget_299045_2984716966(rodcompilerprocs_332078_1724185294, ident0);
		{
			if (!!((result0 == NIM_NIL))) goto LA7;
			strtableadd_299040_2984716966((&compilerprocs_338010_3937434831), result0);
			{
				if (!((*result0).kind == ((Tsymkind292435) 22))) goto LA11;
				loadstub_335224_1724185294(result0);
			}
			LA11: ;
			{
				if (!((*result0).kind == ((Tsymkind292435) 24))) goto LA15;
				result0 = (*result0).owner;
			}
			LA15: ;
		}
		LA7: ;
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, registercompilerproc_338795_3937434831)(Tsym292834* s0) {
	strtableadd_299040_2984716966((&compilerprocs_338010_3937434831), s0);
}

N_NIMCALL(void, registernimscriptsymbol_338799_3937434831)(Tsym292834* s0) {
	Tsym292834* conflict0;
	conflict0 = strtableget_299045_2984716966(exposed_338011_3937434831, (*s0).name);
	{
		if (!(conflict0 == NIM_NIL)) goto LA3;
		strtableadd_299040_2984716966((&exposed_338011_3937434831), s0);
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC6;
		NimStringDesc* LOC7;
		LOC6 = (NimStringDesc*)0;
		LOC7 = (NimStringDesc*)0;
		LOC7 = HEX24_192431_155036129((*conflict0).info);
		LOC6 = rawNewString(LOC7->Sup.len + 51);
appendString(LOC6, ((NimStringDesc*) &T3937434831_30));
appendString(LOC6, LOC7);
		localerror_196085_155036129((*s0).info, LOC6);
	}
	LA1: ;
}

N_NIMCALL(Ttype292840*, getintlittype_338627_3937434831)(Tnode292802* literal0) {
	Ttype292840* result0;
	NI64 value0;
	result0 = (Ttype292840*)0;
	value0 = (*literal0).kindU.S1.intval;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (IL64(-5) <= value0);
		if (!(LOC3)) goto LA4;
		LOC3 = (value0 <= IL64(64));
		LA4: ;
		if (!LOC3) goto LA5;
		result0 = inttypecache_338217_3937434831[(((NI) (value0)))- -5];
		{
			Ttype292840* ti0;
			if (!(result0 == NIM_NIL)) goto LA9;
			ti0 = getsystype_338150_3937434831(((Ttypekind292244) 31));
			result0 = copytype_295470_850551059(ti0, (*ti0).owner, NIM_FALSE);
			asgnRefNoCycle((void**) (&(*result0).n), literal0);
			asgnRefNoCycle((void**) (&inttypecache_338217_3937434831[(((NI) (value0)))- -5]), result0);
		}
		LA9: ;
	}
	goto LA1;
	LA5: ;
	{
		Ttype292840* ti0;
		ti0 = getsystype_338150_3937434831(((Ttypekind292244) 31));
		result0 = copytype_295470_850551059(ti0, (*ti0).owner, NIM_FALSE);
		asgnRefNoCycle((void**) (&(*result0).n), literal0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Ttype292840*, getfloatlittype_338647_3937434831)(Tnode292802* literal0) {
	Ttype292840* result0;
	result0 = (Ttype292840*)0;
	result0 = newsystype_338033_3937434831(((Ttypekind292244) 36), ((NI) 8));
	asgnRefNoCycle((void**) (&(*result0).n), literal0);
	return result0;
}

N_NIMCALL(void, setintlittype_338717_3937434831)(Tnode292802* result0) {
	NI64 i0;
	i0 = (*result0).kindU.S1.intval;
	switch (intsize_176641_4151366050) {
	case ((NI) 8):
	{
		asgnRefNoCycle((void**) (&(*result0).typ), getintlittype_338627_3937434831(result0));
	}
	break;
	case ((NI) 4):
	{
		{
			NIM_BOOL LOC5;
			LOC5 = (NIM_BOOL)0;
			LOC5 = (IL64(-2147483648) <= i0);
			if (!(LOC5)) goto LA6;
			LOC5 = (i0 <= IL64(2147483647));
			LA6: ;
			if (!LOC5) goto LA7;
			asgnRefNoCycle((void**) (&(*result0).typ), getintlittype_338627_3937434831(result0));
		}
		goto LA3;
		LA7: ;
		{
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_338150_3937434831(((Ttypekind292244) 35)));
		}
		LA3: ;
	}
	break;
	case ((NI) 2):
	{
		{
			NIM_BOOL LOC13;
			LOC13 = (NIM_BOOL)0;
			LOC13 = (IL64(-32768) <= i0);
			if (!(LOC13)) goto LA14;
			LOC13 = (i0 <= IL64(32767));
			LA14: ;
			if (!LOC13) goto LA15;
			asgnRefNoCycle((void**) (&(*result0).typ), getintlittype_338627_3937434831(result0));
		}
		goto LA11;
		LA15: ;
		{
			NIM_BOOL LOC18;
			LOC18 = (NIM_BOOL)0;
			LOC18 = (IL64(-2147483648) <= i0);
			if (!(LOC18)) goto LA19;
			LOC18 = (i0 <= IL64(2147483647));
			LA19: ;
			if (!LOC18) goto LA20;
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_338150_3937434831(((Ttypekind292244) 34)));
		}
		goto LA11;
		LA20: ;
		{
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_338150_3937434831(((Ttypekind292244) 35)));
		}
		LA11: ;
	}
	break;
	case ((NI) 1):
	{
		{
			NIM_BOOL LOC26;
			LOC26 = (NIM_BOOL)0;
			LOC26 = (IL64(-128) <= i0);
			if (!(LOC26)) goto LA27;
			LOC26 = (i0 <= IL64(127));
			LA27: ;
			if (!LOC26) goto LA28;
			asgnRefNoCycle((void**) (&(*result0).typ), getintlittype_338627_3937434831(result0));
		}
		goto LA24;
		LA28: ;
		{
			NIM_BOOL LOC31;
			LOC31 = (NIM_BOOL)0;
			LOC31 = (IL64(-32768) <= i0);
			if (!(LOC31)) goto LA32;
			LOC31 = (i0 <= IL64(32767));
			LA32: ;
			if (!LOC31) goto LA33;
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_338150_3937434831(((Ttypekind292244) 33)));
		}
		goto LA24;
		LA33: ;
		{
			NIM_BOOL LOC36;
			LOC36 = (NIM_BOOL)0;
			LOC36 = (IL64(-2147483648) <= i0);
			if (!(LOC36)) goto LA37;
			LOC36 = (i0 <= IL64(2147483647));
			LA37: ;
			if (!LOC36) goto LA38;
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_338150_3937434831(((Ttypekind292244) 34)));
		}
		goto LA24;
		LA38: ;
		{
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_338150_3937434831(((Ttypekind292244) 35)));
		}
		LA24: ;
	}
	break;
	default:
	{
		internalerror_196100_155036129((*result0).info, ((NimStringDesc*) &T3937434831_31));
	}
	break;
	}
}

N_NIMCALL(void, resetsystypes_338219_3937434831)(void) {
	asgnRefNoCycle((void**) (&systemmodule_338004_3937434831), NIM_NIL);
	initstrtable_296001_850551059((&compilerprocs_338010_3937434831));
	initstrtable_296001_850551059((&exposed_338011_3937434831));
	{
		Ttypekind292244 i_338414_3937434831;
		NI res_338618_3937434831;
		i_338414_3937434831 = (Ttypekind292244)0;
		res_338618_3937434831 = ((NI) 0);
		{
			while (1) {
				if (!(res_338618_3937434831 <= ((NI) 62))) goto LA3;
				i_338414_3937434831 = ((Ttypekind292244) (res_338618_3937434831));
				asgnRefNoCycle((void**) (&gsystypes_338009_3937434831[(i_338414_3937434831)- 0]), NIM_NIL);
				res_338618_3937434831 += ((NI) 1);
			} LA3: ;
		}
	}
	{
		NI i_338614_3937434831;
		NI res_338624_3937434831;
		i_338614_3937434831 = (NI)0;
		res_338624_3937434831 = ((NI) -5);
		{
			while (1) {
				if (!(res_338624_3937434831 <= ((NI) 64))) goto LA6;
				i_338614_3937434831 = ((NI) (res_338624_3937434831));
				asgnRefNoCycle((void**) (&inttypecache_338217_3937434831[(i_338614_3937434831)- -5]), NIM_NIL);
				res_338624_3937434831 += ((NI) 1);
			} LA6: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_magicsysInit000)(void) {
nimRegisterGlobalMarker(T3937434831_2);
nimRegisterGlobalMarker(T3937434831_3);
nimRegisterGlobalMarker(T3937434831_4);
nimRegisterGlobalMarker(T3937434831_5);
nimRegisterGlobalMarker(T3937434831_6);
	initstrtable_296001_850551059((&compilerprocs_338010_3937434831));
	initstrtable_296001_850551059((&exposed_338011_3937434831));
}

NIM_EXTERNC N_NOINLINE(void, compiler_magicsysDatInit000)(void) {
NTI338008.size = sizeof(TY338008);
NTI338008.kind = 16;
NTI338008.base = (&NTI292798);
NTI338008.flags = 2;
NTI338216.size = sizeof(TY338216);
NTI338216.kind = 16;
NTI338216.base = (&NTI292798);
NTI338216.flags = 2;
}

