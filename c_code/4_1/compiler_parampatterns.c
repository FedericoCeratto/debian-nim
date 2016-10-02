/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode292802 Tnode292802;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype292840 Ttype292840;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct Tsym292834 Tsym292834;
typedef struct Tident199010 Tident199010;
typedef struct Tnodeseq292796 Tnodeseq292796;
typedef struct Tidobj199004 Tidobj199004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct TY292929 TY292929;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Tloc292816 Tloc292816;
typedef struct Ropeobj178006 Ropeobj178006;
typedef struct Tlib292820 Tlib292820;
typedef struct TY292960 TY292960;
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
typedef struct TY203018 TY203018;
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct TY292961 TY292961;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef NIM_BOOL TY365069[65];
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
typedef NU8 Topcode364006;
typedef NU8 Tsymkind292435;
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
struct  Tidobj199004  {
  TNimObject Sup;
NI id;
};
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
typedef NU8 Tassignableresult364802;
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
typedef NU32 Tsymkind292435Set;
typedef NU8 Tsymflag292184;
typedef NU64 Ttypekind292244Set;
typedef NU8 Tdistinctcompare324427;
typedef NU8 Ttypecmpflag324429Set;
typedef NU8 Tsideeffectanalysis364646;
typedef NU8 Ttypeflag292431;
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
typedef NU16 Tmsgkind191002;
typedef NU8 Trenderflag311004Set;
struct  Tident199010  {
  Tidobj199004 Sup;
NimStringDesc* s;
Tident199010* next;
NI h;
};
struct TY203018 {
NimStringDesc* Field0;
NI Field1;
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
typedef NU8 Taliasrequest364004;
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
struct TY292961 {
NI Field0;
Tsym292834* Field1;
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
struct  Tinstantiation292824  {
Tsym292834* sym;
Ttypeseq292836* concretetypes;
NI compilesid;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct Tnodeseq292796 {
  TGenericSeq Sup;
  Tnode292802* data[SEQ_DECL_SIZE];
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
static N_INLINE(NIM_BOOL, isatom_297418_850551059)(Tnode292802* n0);
N_NIMCALL(Tassignableresult364802, isassignable_364808_3566143041)(Tsym292834* owner0, Tnode292802* n0, NIM_BOOL isunsafeaddr0);
N_NIMCALL(Ttype292840*, skiptypes_296099_850551059)(Ttype292840* t0, Ttypekind292244Set kinds0);
N_NIMCALL(NIM_BOOL, comparetypes_326214_3876443242)(Ttype292840* x0, Ttype292840* y0, Tdistinctcompare324427 cmp0, Ttypecmpflag324429Set flags0);
N_NIMCALL(Tmagic292524, getmagic_318502_2616423590)(Tnode292802* op0);
N_NIMCALL(Tnode292802*, lastson_295364_850551059)(Tnode292802* n0);
N_NIMCALL(Tsideeffectanalysis364646, checkforsideeffects_364650_3566143041)(Tnode292802* n0);
static N_INLINE(NIM_BOOL, isroutine_297323_850551059)(Tsym292834* s0);
static N_INLINE(NI, len_293081_850551059)(Tnode292802* n0);
N_NIMCALL(Tnode292802*, newnodei_294197_850551059)(Tnodekind292020 kind0, Tlineinfo191336 info0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(void, compileconstraints_364072_3566143041)(Tnode292802* p0, NimStringDesc** result0);
N_NIMCALL(void, patternerror_364028_3566143041)(Tnode292802* n0);
N_NIMCALL(void, localerror_196080_155036129)(Tlineinfo191336 info0, Tmsgkind191002 msg0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, rendertree_311044_382274130)(Tnode292802* n0, Trenderflag311004Set renderflags0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
static N_INLINE(void, add_364032_3566143041)(NimStringDesc** code0, Topcode364006 op0);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s0);
N_NIMCALL(NI, hashString)(NimStringDesc* s0);
N_NIMCALL(void, internalerror_196113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(NimStringDesc*, HEX24_196185_1689653243)(TY203018 x0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e0, TNimType* typ0);
N_NIMCALL(void, internalerror_196100_155036129)(Tlineinfo191336 info0, NimStringDesc* errmsg0);
STRING_LITERAL(T3566143041_2, "|", 1);
STRING_LITERAL(T3566143041_3, "&", 1);
STRING_LITERAL(T3566143041_4, "~", 1);
STRING_LITERAL(T3566143041_5, "atom", 4);
STRING_LITERAL(T3566143041_6, "lit", 3);
STRING_LITERAL(T3566143041_7, "sym", 3);
STRING_LITERAL(T3566143041_8, "ident", 5);
STRING_LITERAL(T3566143041_9, "call", 4);
STRING_LITERAL(T3566143041_10, "alias", 5);
STRING_LITERAL(T3566143041_11, "noalias", 7);
STRING_LITERAL(T3566143041_12, "lvalue", 6);
STRING_LITERAL(T3566143041_13, "local", 5);
STRING_LITERAL(T3566143041_14, "sideeffect", 10);
STRING_LITERAL(T3566143041_15, "nosideeffect", 12);
STRING_LITERAL(T3566143041_17, "compiler/parampatterns.nim", 26);
NIM_CONST TY203018 T3566143041_16 = {((NimStringDesc*) &T3566143041_17),
((NI) 100)}
;
NIM_CONST TY203018 T3566143041_18 = {((NimStringDesc*) &T3566143041_17),
((NI) 107)}
;
STRING_LITERAL(T3566143041_19, "parameter pattern too complex", 29);
extern Gcheap49818 gch_49858_1689653243;
extern TNimType NTI292435; /* TSymKind */
extern TNimType NTI292020; /* TNodeKind */

static N_INLINE(NIM_BOOL, isatom_297418_850551059)(Tnode292802* n0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = (((Tnodekind292020) 0) <= (*n0).kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n0).kind <= ((Tnodekind292020) 23));
	LA2: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(Tassignableresult364802, isassignable_364808_3566143041)(Tsym292834* owner0, Tnode292802* n0, NIM_BOOL isunsafeaddr0) {
	Tassignableresult364802 result0;
	result0 = (Tassignableresult364802)0;
	result0 = ((Tassignableresult364802) 0);
	switch ((*n0).kind) {
	case ((Tnodekind292020) 1):
	{
		{
			NIM_BOOL LOC4;
			LOC4 = (NIM_BOOL)0;
			LOC4 = !(((*n0).typ == NIM_NIL));
			if (!(LOC4)) goto LA5;
			LOC4 = ((*(*n0).typ).kind == ((Ttypekind292244) 23));
			LA5: ;
			if (!LOC4) goto LA6;
			result0 = ((Tassignableresult364802) 1);
		}
		LA6: ;
	}
	break;
	case ((Tnodekind292020) 3):
	{
		Tsymkind292435Set kinds0;
		{
			if (!isunsafeaddr0) goto LA11;
			kinds0 = 2856;
		}
		goto LA9;
		LA11: ;
		{
			kinds0 = 2336;
		}
		LA9: ;
		{
			if (!((kinds0 &(1U<<((NU)((*(*n0).kindU.S4.sym).kind)&31U)))!=0)) goto LA16;
			{
				NIM_BOOL LOC20;
				NIM_BOOL LOC21;
				LOC20 = (NIM_BOOL)0;
				LOC21 = (NIM_BOOL)0;
				LOC21 = !((owner0 == NIM_NIL));
				if (!(LOC21)) goto LA22;
				LOC21 = ((*owner0).Sup.id == (*(*(*n0).kindU.S4.sym).owner).Sup.id);
				LA22: ;
				LOC20 = LOC21;
				if (!(LOC20)) goto LA23;
				LOC20 = !((((*(*n0).kindU.S4.sym).flags &(1U<<((NU)(((Tsymflag292184) 3))&31U)))!=0));
				LA23: ;
				if (!LOC20) goto LA24;
				result0 = ((Tassignableresult364802) 2);
			}
			goto LA18;
			LA24: ;
			{
				result0 = ((Tassignableresult364802) 1);
			}
			LA18: ;
		}
		goto LA14;
		LA16: ;
		{
			NIM_BOOL LOC28;
			LOC28 = (NIM_BOOL)0;
			LOC28 = ((*(*n0).kindU.S4.sym).kind == ((Tsymkind292435) 3));
			if (!(LOC28)) goto LA29;
			LOC28 = ((*(*(*n0).kindU.S4.sym).typ).kind == ((Ttypekind292244) 23));
			LA29: ;
			if (!LOC28) goto LA30;
			result0 = ((Tassignableresult364802) 1);
		}
		goto LA14;
		LA30: ;
		{
			Ttype292840* t0;
			if (!((*(*n0).kindU.S4.sym).kind == ((Tsymkind292435) 7))) goto LA33;
			t0 = skiptypes_296099_850551059((*(*n0).kindU.S4.sym).typ, 256);
			{
				if (!((*t0).kind == ((Ttypekind292244) 23))) goto LA37;
				result0 = ((Tassignableresult364802) 4);
			}
			LA37: ;
		}
		goto LA14;
		LA33: ;
		LA14: ;
	}
	break;
	case ((Tnodekind292020) 45):
	{
		{
			Ttype292840* LOC42;
			LOC42 = (Ttype292840*)0;
			LOC42 = skiptypes_296099_850551059((*(*n0).kindU.S6.sons->data[((NI) 0)]).typ, IL64(211106232576000));
			if (!((*LOC42).kind == ((Ttypekind292244) 23) || (*LOC42).kind == ((Ttypekind292244) 21) || (*LOC42).kind == ((Ttypekind292244) 22))) goto LA43;
			result0 = ((Tassignableresult364802) 1);
		}
		goto LA40;
		LA43: ;
		{
			result0 = isassignable_364808_3566143041(owner0, (*n0).kindU.S6.sons->data[((NI) 0)], isunsafeaddr0);
		}
		LA40: ;
		{
			NIM_BOOL LOC48;
			LOC48 = (NIM_BOOL)0;
			LOC48 = !((result0 == ((Tassignableresult364802) 0)));
			if (!(LOC48)) goto LA49;
			LOC48 = (((*(*(*n0).kindU.S6.sons->data[((NI) 1)]).kindU.S4.sym).flags &(1U<<((NU)(((Tsymflag292184) 18))&31U)))!=0);
			LA49: ;
			if (!LOC48) goto LA50;
			result0 = ((Tassignableresult364802) 3);
		}
		LA50: ;
	}
	break;
	case ((Tnodekind292020) 42):
	{
		{
			Ttype292840* LOC55;
			LOC55 = (Ttype292840*)0;
			LOC55 = skiptypes_296099_850551059((*(*n0).kindU.S6.sons->data[((NI) 0)]).typ, IL64(211106232576000));
			if (!((*LOC55).kind == ((Ttypekind292244) 23) || (*LOC55).kind == ((Ttypekind292244) 21) || (*LOC55).kind == ((Ttypekind292244) 22))) goto LA56;
			result0 = ((Tassignableresult364802) 1);
		}
		goto LA53;
		LA56: ;
		{
			result0 = isassignable_364808_3566143041(owner0, (*n0).kindU.S6.sons->data[((NI) 0)], isunsafeaddr0);
		}
		LA53: ;
	}
	break;
	case ((Tnodekind292020) 58):
	case ((Tnodekind292020) 59):
	case ((Tnodekind292020) 60):
	{
		{
			Ttype292840* LOC62;
			LOC62 = (Ttype292840*)0;
			LOC62 = skiptypes_296099_850551059((*n0).typ, IL64(211106247256064));
			if (!((*LOC62).kind == ((Ttypekind292244) 27) || (*LOC62).kind == ((Ttypekind292244) 18) || (*LOC62).kind == ((Ttypekind292244) 17))) goto LA63;
			result0 = isassignable_364808_3566143041(owner0, (*n0).kindU.S6.sons->data[((NI) 1)], isunsafeaddr0);
		}
		goto LA60;
		LA63: ;
		{
			NIM_BOOL LOC66;
			LOC66 = (NIM_BOOL)0;
			LOC66 = comparetypes_326214_3876443242((*n0).typ, (*(*n0).kindU.S6.sons->data[((NI) 1)]).typ, ((Tdistinctcompare324427) 1), 0);
			if (!LOC66) goto LA67;
			result0 = isassignable_364808_3566143041(owner0, (*n0).kindU.S6.sons->data[((NI) 1)], isunsafeaddr0);
		}
		goto LA60;
		LA67: ;
		LA60: ;
	}
	break;
	case ((Tnodekind292020) 65):
	case ((Tnodekind292020) 47):
	case ((Tnodekind292020) 64):
	{
		result0 = ((Tassignableresult364802) 1);
	}
	break;
	case ((Tnodekind292020) 67):
	case ((Tnodekind292020) 66):
	case ((Tnodekind292020) 46):
	{
		result0 = isassignable_364808_3566143041(owner0, (*n0).kindU.S6.sons->data[((NI) 0)], isunsafeaddr0);
	}
	break;
	case ((Tnodekind292020) 27):
	case ((Tnodekind292020) 29):
	case ((Tnodekind292020) 30):
	case ((Tnodekind292020) 31):
	case ((Tnodekind292020) 26):
	case ((Tnodekind292020) 28):
	case ((Tnodekind292020) 32):
	{
		{
			Tmagic292524 LOC74;
			LOC74 = (Tmagic292524)0;
			LOC74 = getmagic_318502_2616423590(n0);
			if (!(LOC74 == ((Tmagic292524) 4) || LOC74 == ((Tmagic292524) 139))) goto LA75;
			result0 = isassignable_364808_3566143041(owner0, (*n0).kindU.S6.sons->data[((NI) 1)], isunsafeaddr0);
		}
		LA75: ;
	}
	break;
	case ((Tnodekind292020) 115):
	case ((Tnodekind292020) 126):
	{
		{
			Tnode292802* LOC82;
			if (!!(((*n0).typ == NIM_NIL))) goto LA80;
			LOC82 = (Tnode292802*)0;
			LOC82 = lastson_295364_850551059(n0);
			result0 = isassignable_364808_3566143041(owner0, LOC82, isunsafeaddr0);
		}
		LA80: ;
	}
	break;
	default:
	{
	}
	break;
	}
	return result0;
}

static N_INLINE(NIM_BOOL, isroutine_297323_850551059)(Tsym292834* s0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = ((258048 &(1U<<((NU)((*s0).kind)&31U)))!=0);
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

N_NIMCALL(Tsideeffectanalysis364646, checkforsideeffects_364650_3566143041)(Tnode292802* n0) {
	Tsideeffectanalysis364646 result0;
{	result0 = (Tsideeffectanalysis364646)0;
	switch ((*n0).kind) {
	case ((Tnodekind292020) 27):
	case ((Tnodekind292020) 29):
	case ((Tnodekind292020) 30):
	case ((Tnodekind292020) 31):
	case ((Tnodekind292020) 26):
	case ((Tnodekind292020) 28):
	case ((Tnodekind292020) 32):
	{
		Tnode292802* op0;
		op0 = (*n0).kindU.S6.sons->data[((NI) 0)];
		{
			NIM_BOOL LOC4;
			Tsym292834* s0;
			LOC4 = (NIM_BOOL)0;
			LOC4 = ((*op0).kind == ((Tnodekind292020) 3));
			if (!(LOC4)) goto LA5;
			LOC4 = isroutine_297323_850551059((*op0).kindU.S4.sym);
			LA5: ;
			if (!LOC4) goto LA6;
			s0 = (*op0).kindU.S4.sym;
			{
				if (!(((*s0).flags &(1U<<((NU)(((Tsymflag292184) 11))&31U)))!=0)) goto LA10;
				result0 = ((Tsideeffectanalysis364646) 1);
				goto BeforeRet;
			}
			LA10: ;
			result0 = ((Tsideeffectanalysis364646) 2);
		}
		goto LA2;
		LA6: ;
		{
			if (!(((*(*op0).typ).flags &(1U<<((NU)(((Ttypeflag292431) 1))&31U)))!=0)) goto LA13;
			result0 = ((Tsideeffectanalysis364646) 2);
		}
		goto LA2;
		LA13: ;
		{
			result0 = ((Tsideeffectanalysis364646) 1);
			goto BeforeRet;
		}
		LA2: ;
		{
			NI i_364707_3566143041;
			NI HEX3Atmp_364786_3566143041;
			NI LOC17;
			NI res_364789_3566143041;
			i_364707_3566143041 = (NI)0;
			HEX3Atmp_364786_3566143041 = (NI)0;
			LOC17 = (NI)0;
			LOC17 = len_293081_850551059(n0);
			HEX3Atmp_364786_3566143041 = (LOC17 - 1);
			res_364789_3566143041 = ((NI) 0);
			{
				while (1) {
					Tsideeffectanalysis364646 ret0;
					if (!(res_364789_3566143041 <= HEX3Atmp_364786_3566143041)) goto LA19;
					i_364707_3566143041 = res_364789_3566143041;
					ret0 = checkforsideeffects_364650_3566143041((*n0).kindU.S6.sons->data[i_364707_3566143041]);
					{
						if (!(ret0 == ((Tsideeffectanalysis364646) 1))) goto LA22;
						result0 = ret0;
						goto BeforeRet;
					}
					goto LA20;
					LA22: ;
					{
						NIM_BOOL LOC25;
						LOC25 = (NIM_BOOL)0;
						LOC25 = (ret0 == ((Tsideeffectanalysis364646) 0));
						if (!(LOC25)) goto LA26;
						LOC25 = (result0 == ((Tsideeffectanalysis364646) 2));
						LA26: ;
						if (!LOC25) goto LA27;
						result0 = ((Tsideeffectanalysis364646) 0);
					}
					goto LA20;
					LA27: ;
					LA20: ;
					res_364789_3566143041 += ((NI) 1);
				} LA19: ;
			}
		}
	}
	break;
	case ((Tnodekind292020) 0) ... ((Tnodekind292020) 23):
	{
		result0 = ((Tsideeffectanalysis364646) 2);
	}
	break;
	default:
	{
		result0 = ((Tsideeffectanalysis364646) 2);
		{
			NI i_364755_3566143041;
			NI HEX3Atmp_364794_3566143041;
			NI LOC32;
			NI res_364797_3566143041;
			i_364755_3566143041 = (NI)0;
			HEX3Atmp_364794_3566143041 = (NI)0;
			LOC32 = (NI)0;
			LOC32 = len_293081_850551059(n0);
			HEX3Atmp_364794_3566143041 = (LOC32 - 1);
			res_364797_3566143041 = ((NI) 0);
			{
				while (1) {
					Tsideeffectanalysis364646 ret0;
					if (!(res_364797_3566143041 <= HEX3Atmp_364794_3566143041)) goto LA34;
					i_364755_3566143041 = res_364797_3566143041;
					ret0 = checkforsideeffects_364650_3566143041((*n0).kindU.S6.sons->data[i_364755_3566143041]);
					{
						if (!(ret0 == ((Tsideeffectanalysis364646) 1))) goto LA37;
						result0 = ret0;
						goto BeforeRet;
					}
					goto LA35;
					LA37: ;
					{
						NIM_BOOL LOC40;
						LOC40 = (NIM_BOOL)0;
						LOC40 = (ret0 == ((Tsideeffectanalysis364646) 0));
						if (!(LOC40)) goto LA41;
						LOC40 = (result0 == ((Tsideeffectanalysis364646) 2));
						LA41: ;
						if (!LOC40) goto LA42;
						result0 = ((Tsideeffectanalysis364646) 0);
					}
					goto LA35;
					LA42: ;
					LA35: ;
					res_364797_3566143041 += ((NI) 1);
				} LA34: ;
			}
		}
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, matchnodekinds_365063_3566143041)(Tnode292802* p0, Tnode292802* n0) {
	NIM_BOOL result0;
	TY365069 stack0;
	NI sp0;
	NimStringDesc* code0;
	NI pc0;
	result0 = (NIM_BOOL)0;
	stack0[(((NI) 0))- 0] = NIM_TRUE;
	sp0 = ((NI) 1);
	code0 = (*p0).kindU.S3.strval;
	pc0 = ((NI) 1);
	{
		while (1) {
			switch (((Topcode364006) (((NU8)(code0->data[pc0]))))) {
			case ((Topcode364006) 1):
			{
				goto LA1;
			}
			break;
			case ((Topcode364006) 2):
			{
				NIM_BOOL LOC5;
				LOC5 = (NIM_BOOL)0;
				LOC5 = stack0[((NI)(sp0 - ((NI) 1)))- 0];
				if (LOC5) goto LA6;
				LOC5 = stack0[((NI)(sp0 - ((NI) 2)))- 0];
				LA6: ;
				stack0[((NI)(sp0 - ((NI) 2)))- 0] = LOC5;
				sp0 -= ((NI) 1);
			}
			break;
			case ((Topcode364006) 3):
			{
				NIM_BOOL LOC8;
				LOC8 = (NIM_BOOL)0;
				LOC8 = stack0[((NI)(sp0 - ((NI) 1)))- 0];
				if (!(LOC8)) goto LA9;
				LOC8 = stack0[((NI)(sp0 - ((NI) 2)))- 0];
				LA9: ;
				stack0[((NI)(sp0 - ((NI) 2)))- 0] = LOC8;
				sp0 -= ((NI) 1);
			}
			break;
			case ((Topcode364006) 4):
			{
				stack0[((NI)(sp0 - ((NI) 1)))- 0] = !(stack0[((NI)(sp0 - ((NI) 1)))- 0]);
			}
			break;
			case ((Topcode364006) 5):
			{
				stack0[(sp0)- 0] = ((*n0).kind == ((Tnodekind292020) 3));
				sp0 += ((NI) 1);
			}
			break;
			case ((Topcode364006) 6):
			{
				stack0[(sp0)- 0] = isatom_297418_850551059(n0);
				sp0 += ((NI) 1);
			}
			break;
			case ((Topcode364006) 7):
			{
				stack0[(sp0)- 0] = ((*n0).kind >= ((Tnodekind292020) 5) && (*n0).kind <= ((Tnodekind292020) 23));
				sp0 += ((NI) 1);
			}
			break;
			case ((Topcode364006) 8):
			{
				stack0[(sp0)- 0] = ((*n0).kind == ((Tnodekind292020) 2));
				sp0 += ((NI) 1);
			}
			break;
			case ((Topcode364006) 9):
			{
				stack0[(sp0)- 0] = ((*n0).kind == ((Tnodekind292020) 27) || (*n0).kind == ((Tnodekind292020) 29) || (*n0).kind == ((Tnodekind292020) 30) || (*n0).kind == ((Tnodekind292020) 31) || (*n0).kind == ((Tnodekind292020) 26) || (*n0).kind == ((Tnodekind292020) 28) || (*n0).kind == ((Tnodekind292020) 32));
				sp0 += ((NI) 1);
			}
			break;
			case ((Topcode364006) 10):
			{
				Tsymkind292435 kind0;
				NIM_BOOL LOC17;
				kind0 = ((Tsymkind292435) (((NU8)(code0->data[(NI)(pc0 + ((NI) 1))]))));
				LOC17 = (NIM_BOOL)0;
				LOC17 = ((*n0).kind == ((Tnodekind292020) 3));
				if (!(LOC17)) goto LA18;
				LOC17 = ((*(*n0).kindU.S4.sym).kind == kind0);
				LA18: ;
				stack0[(sp0)- 0] = LOC17;
				sp0 += ((NI) 1);
				pc0 += ((NI) 1);
			}
			break;
			case ((Topcode364006) 11):
			{
				Tnodekind292020 kind0;
				kind0 = ((Tnodekind292020) (((NU8)(code0->data[(NI)(pc0 + ((NI) 1))]))));
				stack0[(sp0)- 0] = ((*n0).kind == kind0);
				sp0 += ((NI) 1);
				pc0 += ((NI) 1);
			}
			break;
			case ((Topcode364006) 12):
			{
				Tassignableresult364802 LOC21;
				LOC21 = (Tassignableresult364802)0;
				LOC21 = isassignable_364808_3566143041(NIM_NIL, n0, NIM_FALSE);
				stack0[(sp0)- 0] = ((6 &(1U<<((NU)(LOC21)&7U)))!=0);
				sp0 += ((NI) 1);
			}
			break;
			case ((Topcode364006) 13):
			{
				Tassignableresult364802 LOC23;
				LOC23 = (Tassignableresult364802)0;
				LOC23 = isassignable_364808_3566143041(NIM_NIL, n0, NIM_FALSE);
				stack0[(sp0)- 0] = (LOC23 == ((Tassignableresult364802) 2));
				sp0 += ((NI) 1);
			}
			break;
			case ((Topcode364006) 14):
			{
				Tsideeffectanalysis364646 LOC25;
				LOC25 = (Tsideeffectanalysis364646)0;
				LOC25 = checkforsideeffects_364650_3566143041(n0);
				stack0[(sp0)- 0] = (LOC25 == ((Tsideeffectanalysis364646) 1));
				sp0 += ((NI) 1);
			}
			break;
			case ((Topcode364006) 15):
			{
				Tsideeffectanalysis364646 LOC27;
				LOC27 = (Tsideeffectanalysis364646)0;
				LOC27 = checkforsideeffects_364650_3566143041(n0);
				stack0[(sp0)- 0] = !((LOC27 == ((Tsideeffectanalysis364646) 1)));
				sp0 += ((NI) 1);
			}
			break;
			}
			pc0 += ((NI) 1);
		}
	} LA1: ;
	result0 = stack0[((NI)(sp0 - ((NI) 1)))- 0];
	return result0;
}

N_NIMCALL(NIM_BOOL, islvalue_365048_3566143041)(Tnode292802* n0) {
	NIM_BOOL result0;
	Tassignableresult364802 LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (Tassignableresult364802)0;
	LOC1 = isassignable_364808_3566143041(NIM_NIL, n0, NIM_FALSE);
	result0 = ((22 &(1U<<((NU)(LOC1)&7U)))!=0);
	return result0;
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

N_NIMCALL(void, patternerror_364028_3566143041)(Tnode292802* n0) {
	NimStringDesc* LOC1;
	LOC1 = (NimStringDesc*)0;
	LOC1 = rendertree_311044_382274130(n0, 4);
	localerror_196080_155036129((*n0).info, ((Tmsgkind191002) 1), LOC1);
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

static N_INLINE(void, add_364032_3566143041)(NimStringDesc** code0, Topcode364006 op0) {
	(*code0) = addChar((*code0), ((NIM_CHAR) (((NI) (op0)))));
}

N_NIMCALL(void, compileconstraints_364072_3566143041)(Tnode292802* p0, NimStringDesc** result0) {
{	switch ((*p0).kind) {
	case ((Tnodekind292020) 27):
	case ((Tnodekind292020) 29):
	case ((Tnodekind292020) 30):
	case ((Tnodekind292020) 31):
	case ((Tnodekind292020) 26):
	case ((Tnodekind292020) 28):
	case ((Tnodekind292020) 32):
	{
		Tident199010* op0;
		{
			if (!!(((*(*p0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind292020) 2)))) goto LA4;
			patternerror_364028_3566143041((*p0).kindU.S6.sons->data[((NI) 0)]);
			goto BeforeRet;
		}
		LA4: ;
		op0 = (*(*p0).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident;
		{
			NI LOC8;
			LOC8 = (NI)0;
			LOC8 = len_293081_850551059(p0);
			if (!(LOC8 == ((NI) 3))) goto LA9;
			{
				NIM_BOOL LOC13;
				LOC13 = (NIM_BOOL)0;
				LOC13 = eqStrings((*op0).s, ((NimStringDesc*) &T3566143041_2));
				if (LOC13) goto LA14;
				LOC13 = ((*op0).Sup.id == ((NI) 49));
				LA14: ;
				if (!LOC13) goto LA15;
				compileconstraints_364072_3566143041((*p0).kindU.S6.sons->data[((NI) 1)], result0);
				compileconstraints_364072_3566143041((*p0).kindU.S6.sons->data[((NI) 2)], result0);
				add_364032_3566143041(result0, ((Topcode364006) 2));
			}
			goto LA11;
			LA15: ;
			{
				NIM_BOOL LOC18;
				LOC18 = (NIM_BOOL)0;
				LOC18 = eqStrings((*op0).s, ((NimStringDesc*) &T3566143041_3));
				if (LOC18) goto LA19;
				LOC18 = ((*op0).Sup.id == ((NI) 2));
				LA19: ;
				if (!LOC18) goto LA20;
				compileconstraints_364072_3566143041((*p0).kindU.S6.sons->data[((NI) 1)], result0);
				compileconstraints_364072_3566143041((*p0).kindU.S6.sons->data[((NI) 2)], result0);
				add_364032_3566143041(result0, ((Topcode364006) 3));
			}
			goto LA11;
			LA20: ;
			{
				patternerror_364028_3566143041(p0);
			}
			LA11: ;
		}
		goto LA6;
		LA9: ;
		{
			NIM_BOOL LOC24;
			NI LOC25;
			NIM_BOOL LOC27;
			LOC24 = (NIM_BOOL)0;
			LOC25 = (NI)0;
			LOC25 = len_293081_850551059(p0);
			LOC24 = (LOC25 == ((NI) 2));
			if (!(LOC24)) goto LA26;
			LOC27 = (NIM_BOOL)0;
			LOC27 = eqStrings((*op0).s, ((NimStringDesc*) &T3566143041_4));
			if (LOC27) goto LA28;
			LOC27 = ((*op0).Sup.id == ((NI) 45));
			LA28: ;
			LOC24 = LOC27;
			LA26: ;
			if (!LOC24) goto LA29;
			compileconstraints_364072_3566143041((*p0).kindU.S6.sons->data[((NI) 1)], result0);
			add_364032_3566143041(result0, ((Topcode364006) 4));
		}
		goto LA6;
		LA29: ;
		{
			patternerror_364028_3566143041(p0);
		}
		LA6: ;
	}
	break;
	case ((Tnodekind292020) 53):
	case ((Tnodekind292020) 37):
	{
		{
			NI LOC35;
			LOC35 = (NI)0;
			LOC35 = len_293081_850551059(p0);
			if (!(LOC35 == ((NI) 1))) goto LA36;
			compileconstraints_364072_3566143041((*p0).kindU.S6.sons->data[((NI) 0)], result0);
		}
		goto LA33;
		LA36: ;
		{
			patternerror_364028_3566143041(p0);
		}
		LA33: ;
	}
	break;
	case ((Tnodekind292020) 2):
	{
		NimStringDesc* spec0;
		spec0 = nsuNormalize((*(*p0).kindU.S5.ident).s);
		switch (hashString(spec0) & 15) {
		case 1: 
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_15))) goto LA50;
break;
		case 3: 
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_11))) goto LA46;
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_12))) goto LA47;
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_14))) goto LA49;
break;
		case 4: 
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_7))) goto LA42;
break;
		case 6: 
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_8))) goto LA43;
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_13))) goto LA48;
break;
		case 11: 
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_5))) goto LA40;
break;
		case 12: 
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_6))) goto LA41;
break;
		case 13: 
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_9))) goto LA44;
break;
		case 14: 
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_10))) goto LA45;
break;
		}
		goto LA51;
		LA40: ;
		{
			add_364032_3566143041(result0, ((Topcode364006) 6));
		}
		goto LA52;
		LA41: ;
		{
			add_364032_3566143041(result0, ((Topcode364006) 7));
		}
		goto LA52;
		LA42: ;
		{
			add_364032_3566143041(result0, ((Topcode364006) 5));
		}
		goto LA52;
		LA43: ;
		{
			add_364032_3566143041(result0, ((Topcode364006) 8));
		}
		goto LA52;
		LA44: ;
		{
			add_364032_3566143041(result0, ((Topcode364006) 9));
		}
		goto LA52;
		LA45: ;
		{
			(*result0)->data[((NI) 0)] = 2;
		}
		goto LA52;
		LA46: ;
		{
			(*result0)->data[((NI) 0)] = 3;
		}
		goto LA52;
		LA47: ;
		{
			add_364032_3566143041(result0, ((Topcode364006) 12));
		}
		goto LA52;
		LA48: ;
		{
			add_364032_3566143041(result0, ((Topcode364006) 13));
		}
		goto LA52;
		LA49: ;
		{
			add_364032_3566143041(result0, ((Topcode364006) 14));
		}
		goto LA52;
		LA50: ;
		{
			add_364032_3566143041(result0, ((Topcode364006) 15));
		}
		goto LA52;
		LA51: ;
		{
			{
				NimStringDesc* LOC69;
				if (!NIM_FALSE) goto LA67;
				LOC69 = (NimStringDesc*)0;
				LOC69 = HEX24_196185_1689653243(T3566143041_16);
				internalerror_196113_155036129(LOC69);
			}
			LA67: ;
			{
				Tsymkind292435 i_364214_3566143041;
				NI res_364435_3566143041;
				i_364214_3566143041 = (Tsymkind292435)0;
				res_364435_3566143041 = ((NI) 0);
				{
					while (1) {
						if (!(res_364435_3566143041 <= ((NI) 24))) goto LA72;
						i_364214_3566143041 = ((Tsymkind292435) (res_364435_3566143041));
						{
							NimStringDesc* LOC75;
							NI LOC76;
							LOC75 = (NimStringDesc*)0;
							LOC75 = copyStr(reprEnum((NI)i_364214_3566143041, (&NTI292435)), ((NI) 2));
							LOC76 = (NI)0;
							LOC76 = nsuCmpIgnoreStyle(LOC75, spec0);
							if (!(LOC76 == ((NI) 0))) goto LA77;
							add_364032_3566143041(result0, ((Topcode364006) 10));
							(*result0) = addChar((*result0), ((NIM_CHAR) (((NI) (i_364214_3566143041)))));
							goto BeforeRet;
						}
						LA77: ;
						res_364435_3566143041 += ((NI) 1);
					} LA72: ;
				}
			}
			{
				NimStringDesc* LOC83;
				if (!NIM_FALSE) goto LA81;
				LOC83 = (NimStringDesc*)0;
				LOC83 = HEX24_196185_1689653243(T3566143041_18);
				internalerror_196113_155036129(LOC83);
			}
			LA81: ;
			{
				Tnodekind292020 i_364414_3566143041;
				NI res_364443_3566143041;
				i_364414_3566143041 = (Tnodekind292020)0;
				res_364443_3566143041 = ((NI) 0);
				{
					while (1) {
						if (!(res_364443_3566143041 <= ((NI) 158))) goto LA86;
						i_364414_3566143041 = ((Tnodekind292020) (res_364443_3566143041));
						{
							NI LOC89;
							LOC89 = (NI)0;
							LOC89 = nsuCmpIgnoreStyle(reprEnum((NI)i_364414_3566143041, (&NTI292020)), spec0);
							if (!(LOC89 == ((NI) 0))) goto LA90;
							add_364032_3566143041(result0, ((Topcode364006) 11));
							(*result0) = addChar((*result0), ((NIM_CHAR) (((NI) (i_364414_3566143041)))));
							goto BeforeRet;
						}
						LA90: ;
						res_364443_3566143041 += ((NI) 1);
					} LA86: ;
				}
			}
			patternerror_364028_3566143041(p0);
		}
		LA52: ;
	}
	break;
	default:
	{
		patternerror_364028_3566143041(p0);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(Tnode292802*, semnodekindconstraints_364446_3566143041)(Tnode292802* p0) {
	Tnode292802* result0;
	result0 = (Tnode292802*)0;
	result0 = newnodei_294197_850551059(((Tnodekind292020) 20), (*p0).info);
	asgnRefNoCycle((void**) (&(*result0).kindU.S3.strval), rawNewString(((NI) 10)));
	(*result0).kindU.S3.strval = addChar((*result0).kindU.S3.strval, 1);
	{
		NI LOC3;
		LOC3 = (NI)0;
		LOC3 = len_293081_850551059(p0);
		if (!(((NI) 2) <= LOC3)) goto LA4;
		{
			NI i_364630_3566143041;
			NI HEX3Atmp_364638_3566143041;
			NI LOC7;
			NI res_364641_3566143041;
			i_364630_3566143041 = (NI)0;
			HEX3Atmp_364638_3566143041 = (NI)0;
			LOC7 = (NI)0;
			LOC7 = len_293081_850551059(p0);
			HEX3Atmp_364638_3566143041 = (LOC7 - 1);
			res_364641_3566143041 = ((NI) 1);
			{
				while (1) {
					if (!(res_364641_3566143041 <= HEX3Atmp_364638_3566143041)) goto LA9;
					i_364630_3566143041 = res_364641_3566143041;
					compileconstraints_364072_3566143041((*p0).kindU.S6.sons->data[i_364630_3566143041], (&(*result0).kindU.S3.strval));
					res_364641_3566143041 += ((NI) 1);
				} LA9: ;
			}
		}
		{
			if (!(((NI) 63) < ((*result0).kindU.S3.strval ? (*result0).kindU.S3.strval->Sup.len : 0))) goto LA12;
			internalerror_196100_155036129((*p0).info, ((NimStringDesc*) &T3566143041_19));
		}
		LA12: ;
	}
	goto LA1;
	LA4: ;
	{
		patternerror_364028_3566143041(p0);
	}
	LA1: ;
	add_364032_3566143041((&(*result0).kindU.S3.strval), ((Topcode364006) 1));
	return result0;
}

N_NIMCALL(Taliasrequest364004, whichalias_364045_3566143041)(Tsym292834* p0) {
	Taliasrequest364004 result0;
	result0 = (Taliasrequest364004)0;
	{
		if (!!(((*p0).constraint == NIM_NIL))) goto LA3;
		result0 = ((Taliasrequest364004) (((NU8)((*(*p0).constraint).kindU.S3.strval->data[((NI) 0)]))));
	}
	goto LA1;
	LA3: ;
	{
		result0 = ((Taliasrequest364004) 1);
	}
	LA1: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_parampatternsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_parampatternsDatInit000)(void) {
}

