/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tnode293802 Tnode293802;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype293840 Ttype293840;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct Tsym293834 Tsym293834;
typedef struct Tident200010 Tident200010;
typedef struct Tnodeseq293796 Tnodeseq293796;
typedef struct Tidobj200004 Tidobj200004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq293836 Ttypeseq293836;
typedef struct TY293929 TY293929;
typedef struct Tstrtable293806 Tstrtable293806;
typedef struct Tsymseq293804 Tsymseq293804;
typedef struct Tloc293816 Tloc293816;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct Tlib293820 Tlib293820;
typedef struct TY293960 TY293960;
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
typedef struct TY204018 TY204018;
typedef struct Tinstantiation293824 Tinstantiation293824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct TY293961 TY293961;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
typedef NIM_BOOL TY366069[65];
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
typedef NU8 Topcode365006;
typedef NU8 Tsymkind293435;
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
struct  Tidobj200004  {
  TNimObject Sup;
NI id;
};
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
typedef NU8 Tassignableresult365802;
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
typedef NU32 Tsymkind293435Set;
typedef NU8 Tsymflag293184;
typedef NU64 Ttypekind293244Set;
typedef NU8 Tdistinctcompare325427;
typedef NU8 Ttypecmpflag325429Set;
typedef NU8 Tsideeffectanalysis365646;
typedef NU8 Ttypeflag293431;
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
typedef NU16 Tmsgkind192002;
typedef NU8 Trenderflag312004Set;
struct  Tident200010  {
  Tidobj200004 Sup;
NimStringDesc* s;
Tident200010* next;
NI h;
};
struct TY204018 {
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
typedef NU8 Taliasrequest365004;
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
struct TY293961 {
NI Field0;
Tsym293834* Field1;
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
typedef NI TY29419[8];
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
struct  Tinstantiation293824  {
Tsym293834* sym;
Ttypeseq293836* concretetypes;
NI compilesid;
};
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
};
struct Tnodeseq293796 {
  TGenericSeq Sup;
  Tnode293802* data[SEQ_DECL_SIZE];
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
struct TY293960 {
  TGenericSeq Sup;
  TY293961 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, isatom_298419_850551059)(Tnode293802* n0);
N_NIMCALL(Tassignableresult365802, isassignable_365808_3566143041)(Tsym293834* owner0, Tnode293802* n0, NIM_BOOL isunsafeaddr0);
N_NIMCALL(Ttype293840*, skiptypes_297099_850551059)(Ttype293840* t0, Ttypekind293244Set kinds0);
N_NIMCALL(NIM_BOOL, comparetypes_327214_3876443242)(Ttype293840* x0, Ttype293840* y0, Tdistinctcompare325427 cmp0, Ttypecmpflag325429Set flags0);
N_NIMCALL(Tmagic293524, getmagic_319502_2616423590)(Tnode293802* op0);
N_NIMCALL(Tnode293802*, lastson_296364_850551059)(Tnode293802* n0);
N_NIMCALL(Tsideeffectanalysis365646, checkforsideeffects_365650_3566143041)(Tnode293802* n0);
static N_INLINE(NIM_BOOL, isroutine_298324_850551059)(Tsym293834* s0);
static N_INLINE(NI, len_294081_850551059)(Tnode293802* n0);
N_NIMCALL(Tnode293802*, newnodei_295197_850551059)(Tnodekind293020 kind0, Tlineinfo192336 info0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(void, compileconstraints_365072_3566143041)(Tnode293802* p0, NimStringDesc** result0);
N_NIMCALL(void, patternerror_365028_3566143041)(Tnode293802* n0);
N_NIMCALL(void, localerror_197080_155036129)(Tlineinfo192336 info0, Tmsgkind192002 msg0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, rendertree_312044_382274130)(Tnode293802* n0, Trenderflag312004Set renderflags0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
static N_INLINE(void, add_365032_3566143041)(NimStringDesc** code0, Topcode365006 op0);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s0);
N_NIMCALL(NI, hashString)(NimStringDesc* s0);
N_NIMCALL(void, internalerror_197113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(NimStringDesc*, HEX24_197185_1689653243)(TY204018 x0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e0, TNimType* typ0);
N_NIMCALL(void, internalerror_197100_155036129)(Tlineinfo192336 info0, NimStringDesc* errmsg0);
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
NIM_CONST TY204018 T3566143041_16 = {((NimStringDesc*) &T3566143041_17),
((NI) 100)}
;
NIM_CONST TY204018 T3566143041_18 = {((NimStringDesc*) &T3566143041_17),
((NI) 107)}
;
STRING_LITERAL(T3566143041_19, "parameter pattern too complex", 29);
extern Gcheap49818 gch_49858_1689653243;
extern TNimType NTI293435; /* TSymKind */
extern TNimType NTI293020; /* TNodeKind */

static N_INLINE(NIM_BOOL, isatom_298419_850551059)(Tnode293802* n0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = (((Tnodekind293020) 0) <= (*n0).kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n0).kind <= ((Tnodekind293020) 23));
	LA2: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(Tassignableresult365802, isassignable_365808_3566143041)(Tsym293834* owner0, Tnode293802* n0, NIM_BOOL isunsafeaddr0) {
	Tassignableresult365802 result0;
	result0 = (Tassignableresult365802)0;
	result0 = ((Tassignableresult365802) 0);
	switch ((*n0).kind) {
	case ((Tnodekind293020) 1):
	{
		{
			NIM_BOOL LOC4;
			LOC4 = (NIM_BOOL)0;
			LOC4 = !(((*n0).typ == NIM_NIL));
			if (!(LOC4)) goto LA5;
			LOC4 = ((*(*n0).typ).kind == ((Ttypekind293244) 23));
			LA5: ;
			if (!LOC4) goto LA6;
			result0 = ((Tassignableresult365802) 1);
		}
		LA6: ;
	}
	break;
	case ((Tnodekind293020) 3):
	{
		Tsymkind293435Set kinds0;
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
				LOC20 = !((((*(*n0).kindU.S4.sym).flags &(1U<<((NU)(((Tsymflag293184) 3))&31U)))!=0));
				LA23: ;
				if (!LOC20) goto LA24;
				result0 = ((Tassignableresult365802) 2);
			}
			goto LA18;
			LA24: ;
			{
				result0 = ((Tassignableresult365802) 1);
			}
			LA18: ;
		}
		goto LA14;
		LA16: ;
		{
			NIM_BOOL LOC28;
			LOC28 = (NIM_BOOL)0;
			LOC28 = ((*(*n0).kindU.S4.sym).kind == ((Tsymkind293435) 3));
			if (!(LOC28)) goto LA29;
			LOC28 = ((*(*(*n0).kindU.S4.sym).typ).kind == ((Ttypekind293244) 23));
			LA29: ;
			if (!LOC28) goto LA30;
			result0 = ((Tassignableresult365802) 1);
		}
		goto LA14;
		LA30: ;
		{
			Ttype293840* t0;
			if (!((*(*n0).kindU.S4.sym).kind == ((Tsymkind293435) 7))) goto LA33;
			t0 = skiptypes_297099_850551059((*(*n0).kindU.S4.sym).typ, 256);
			{
				if (!((*t0).kind == ((Ttypekind293244) 23))) goto LA37;
				result0 = ((Tassignableresult365802) 4);
			}
			LA37: ;
		}
		goto LA14;
		LA33: ;
		LA14: ;
	}
	break;
	case ((Tnodekind293020) 45):
	{
		{
			Ttype293840* LOC42;
			LOC42 = (Ttype293840*)0;
			LOC42 = skiptypes_297099_850551059((*(*n0).kindU.S6.sons->data[((NI) 0)]).typ, IL64(211106232576000));
			if (!((14680064 &((NU64)1<<((NU)((*LOC42).kind)&63U)))!=0)) goto LA43;
			result0 = ((Tassignableresult365802) 1);
		}
		goto LA40;
		LA43: ;
		{
			result0 = isassignable_365808_3566143041(owner0, (*n0).kindU.S6.sons->data[((NI) 0)], isunsafeaddr0);
		}
		LA40: ;
		{
			NIM_BOOL LOC48;
			LOC48 = (NIM_BOOL)0;
			LOC48 = !((result0 == ((Tassignableresult365802) 0)));
			if (!(LOC48)) goto LA49;
			LOC48 = (((*(*(*n0).kindU.S6.sons->data[((NI) 1)]).kindU.S4.sym).flags &(1U<<((NU)(((Tsymflag293184) 18))&31U)))!=0);
			LA49: ;
			if (!LOC48) goto LA50;
			result0 = ((Tassignableresult365802) 3);
		}
		LA50: ;
	}
	break;
	case ((Tnodekind293020) 42):
	{
		{
			Ttype293840* LOC55;
			LOC55 = (Ttype293840*)0;
			LOC55 = skiptypes_297099_850551059((*(*n0).kindU.S6.sons->data[((NI) 0)]).typ, IL64(211106232576000));
			if (!((14680064 &((NU64)1<<((NU)((*LOC55).kind)&63U)))!=0)) goto LA56;
			result0 = ((Tassignableresult365802) 1);
		}
		goto LA53;
		LA56: ;
		{
			result0 = isassignable_365808_3566143041(owner0, (*n0).kindU.S6.sons->data[((NI) 0)], isunsafeaddr0);
		}
		LA53: ;
	}
	break;
	case ((Tnodekind293020) 58):
	case ((Tnodekind293020) 59):
	case ((Tnodekind293020) 60):
	{
		{
			Ttype293840* LOC62;
			LOC62 = (Ttype293840*)0;
			LOC62 = skiptypes_297099_850551059((*n0).typ, IL64(211106247256064));
			if (!((134610944 &((NU64)1<<((NU)((*LOC62).kind)&63U)))!=0)) goto LA63;
			result0 = isassignable_365808_3566143041(owner0, (*n0).kindU.S6.sons->data[((NI) 1)], isunsafeaddr0);
		}
		goto LA60;
		LA63: ;
		{
			NIM_BOOL LOC66;
			LOC66 = (NIM_BOOL)0;
			LOC66 = comparetypes_327214_3876443242((*n0).typ, (*(*n0).kindU.S6.sons->data[((NI) 1)]).typ, ((Tdistinctcompare325427) 1), 0);
			if (!LOC66) goto LA67;
			result0 = isassignable_365808_3566143041(owner0, (*n0).kindU.S6.sons->data[((NI) 1)], isunsafeaddr0);
		}
		goto LA60;
		LA67: ;
		LA60: ;
	}
	break;
	case ((Tnodekind293020) 65):
	case ((Tnodekind293020) 47):
	case ((Tnodekind293020) 64):
	{
		result0 = ((Tassignableresult365802) 1);
	}
	break;
	case ((Tnodekind293020) 67):
	case ((Tnodekind293020) 66):
	case ((Tnodekind293020) 46):
	{
		result0 = isassignable_365808_3566143041(owner0, (*n0).kindU.S6.sons->data[((NI) 0)], isunsafeaddr0);
	}
	break;
	case ((Tnodekind293020) 27):
	case ((Tnodekind293020) 29):
	case ((Tnodekind293020) 30):
	case ((Tnodekind293020) 31):
	case ((Tnodekind293020) 26):
	case ((Tnodekind293020) 28):
	case ((Tnodekind293020) 32):
	{
		{
			Tmagic293524 LOC74;
			LOC74 = (Tmagic293524)0;
			LOC74 = getmagic_319502_2616423590(n0);
			if (!(LOC74 == ((Tmagic293524) 4) || LOC74 == ((Tmagic293524) 139))) goto LA75;
			result0 = isassignable_365808_3566143041(owner0, (*n0).kindU.S6.sons->data[((NI) 1)], isunsafeaddr0);
		}
		LA75: ;
	}
	break;
	case ((Tnodekind293020) 115):
	case ((Tnodekind293020) 126):
	{
		{
			Tnode293802* LOC82;
			if (!!(((*n0).typ == NIM_NIL))) goto LA80;
			LOC82 = (Tnode293802*)0;
			LOC82 = lastson_296364_850551059(n0);
			result0 = isassignable_365808_3566143041(owner0, LOC82, isunsafeaddr0);
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

static N_INLINE(NIM_BOOL, isroutine_298324_850551059)(Tsym293834* s0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = ((258048 &(1U<<((NU)((*s0).kind)&31U)))!=0);
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

N_NIMCALL(Tsideeffectanalysis365646, checkforsideeffects_365650_3566143041)(Tnode293802* n0) {
	Tsideeffectanalysis365646 result0;
{	result0 = (Tsideeffectanalysis365646)0;
	switch ((*n0).kind) {
	case ((Tnodekind293020) 27):
	case ((Tnodekind293020) 29):
	case ((Tnodekind293020) 30):
	case ((Tnodekind293020) 31):
	case ((Tnodekind293020) 26):
	case ((Tnodekind293020) 28):
	case ((Tnodekind293020) 32):
	{
		Tnode293802* op0;
		op0 = (*n0).kindU.S6.sons->data[((NI) 0)];
		{
			NIM_BOOL LOC4;
			Tsym293834* s0;
			LOC4 = (NIM_BOOL)0;
			LOC4 = ((*op0).kind == ((Tnodekind293020) 3));
			if (!(LOC4)) goto LA5;
			LOC4 = isroutine_298324_850551059((*op0).kindU.S4.sym);
			LA5: ;
			if (!LOC4) goto LA6;
			s0 = (*op0).kindU.S4.sym;
			{
				if (!(((*s0).flags &(1U<<((NU)(((Tsymflag293184) 11))&31U)))!=0)) goto LA10;
				result0 = ((Tsideeffectanalysis365646) 1);
				goto BeforeRet;
			}
			LA10: ;
			result0 = ((Tsideeffectanalysis365646) 2);
		}
		goto LA2;
		LA6: ;
		{
			if (!(((*(*op0).typ).flags &(1U<<((NU)(((Ttypeflag293431) 1))&31U)))!=0)) goto LA13;
			result0 = ((Tsideeffectanalysis365646) 2);
		}
		goto LA2;
		LA13: ;
		{
			result0 = ((Tsideeffectanalysis365646) 1);
			goto BeforeRet;
		}
		LA2: ;
		{
			NI i_365707_3566143041;
			NI HEX3Atmp_365786_3566143041;
			NI LOC17;
			NI res_365789_3566143041;
			i_365707_3566143041 = (NI)0;
			HEX3Atmp_365786_3566143041 = (NI)0;
			LOC17 = (NI)0;
			LOC17 = len_294081_850551059(n0);
			HEX3Atmp_365786_3566143041 = (LOC17 - 1);
			res_365789_3566143041 = ((NI) 0);
			{
				while (1) {
					Tsideeffectanalysis365646 ret0;
					if (!(res_365789_3566143041 <= HEX3Atmp_365786_3566143041)) goto LA19;
					i_365707_3566143041 = res_365789_3566143041;
					ret0 = checkforsideeffects_365650_3566143041((*n0).kindU.S6.sons->data[i_365707_3566143041]);
					{
						if (!(ret0 == ((Tsideeffectanalysis365646) 1))) goto LA22;
						result0 = ret0;
						goto BeforeRet;
					}
					goto LA20;
					LA22: ;
					{
						NIM_BOOL LOC25;
						LOC25 = (NIM_BOOL)0;
						LOC25 = (ret0 == ((Tsideeffectanalysis365646) 0));
						if (!(LOC25)) goto LA26;
						LOC25 = (result0 == ((Tsideeffectanalysis365646) 2));
						LA26: ;
						if (!LOC25) goto LA27;
						result0 = ((Tsideeffectanalysis365646) 0);
					}
					goto LA20;
					LA27: ;
					LA20: ;
					res_365789_3566143041 += ((NI) 1);
				} LA19: ;
			}
		}
	}
	break;
	case ((Tnodekind293020) 0) ... ((Tnodekind293020) 23):
	{
		result0 = ((Tsideeffectanalysis365646) 2);
	}
	break;
	default:
	{
		result0 = ((Tsideeffectanalysis365646) 2);
		{
			NI i_365755_3566143041;
			NI HEX3Atmp_365794_3566143041;
			NI LOC32;
			NI res_365797_3566143041;
			i_365755_3566143041 = (NI)0;
			HEX3Atmp_365794_3566143041 = (NI)0;
			LOC32 = (NI)0;
			LOC32 = len_294081_850551059(n0);
			HEX3Atmp_365794_3566143041 = (LOC32 - 1);
			res_365797_3566143041 = ((NI) 0);
			{
				while (1) {
					Tsideeffectanalysis365646 ret0;
					if (!(res_365797_3566143041 <= HEX3Atmp_365794_3566143041)) goto LA34;
					i_365755_3566143041 = res_365797_3566143041;
					ret0 = checkforsideeffects_365650_3566143041((*n0).kindU.S6.sons->data[i_365755_3566143041]);
					{
						if (!(ret0 == ((Tsideeffectanalysis365646) 1))) goto LA37;
						result0 = ret0;
						goto BeforeRet;
					}
					goto LA35;
					LA37: ;
					{
						NIM_BOOL LOC40;
						LOC40 = (NIM_BOOL)0;
						LOC40 = (ret0 == ((Tsideeffectanalysis365646) 0));
						if (!(LOC40)) goto LA41;
						LOC40 = (result0 == ((Tsideeffectanalysis365646) 2));
						LA41: ;
						if (!LOC40) goto LA42;
						result0 = ((Tsideeffectanalysis365646) 0);
					}
					goto LA35;
					LA42: ;
					LA35: ;
					res_365797_3566143041 += ((NI) 1);
				} LA34: ;
			}
		}
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, matchnodekinds_366063_3566143041)(Tnode293802* p0, Tnode293802* n0) {
	NIM_BOOL result0;
	TY366069 stack0;
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
			switch (((Topcode365006) (((NU8)(code0->data[pc0]))))) {
			case ((Topcode365006) 1):
			{
				goto LA1;
			}
			break;
			case ((Topcode365006) 2):
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
			case ((Topcode365006) 3):
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
			case ((Topcode365006) 4):
			{
				stack0[((NI)(sp0 - ((NI) 1)))- 0] = !(stack0[((NI)(sp0 - ((NI) 1)))- 0]);
			}
			break;
			case ((Topcode365006) 5):
			{
				stack0[(sp0)- 0] = ((*n0).kind == ((Tnodekind293020) 3));
				sp0 += ((NI) 1);
			}
			break;
			case ((Topcode365006) 6):
			{
				stack0[(sp0)- 0] = isatom_298419_850551059(n0);
				sp0 += ((NI) 1);
			}
			break;
			case ((Topcode365006) 7):
			{
				stack0[(sp0)- 0] = ((*n0).kind >= ((Tnodekind293020) 5) && (*n0).kind <= ((Tnodekind293020) 23));
				sp0 += ((NI) 1);
			}
			break;
			case ((Topcode365006) 8):
			{
				stack0[(sp0)- 0] = ((*n0).kind == ((Tnodekind293020) 2));
				sp0 += ((NI) 1);
			}
			break;
			case ((Topcode365006) 9):
			{
				stack0[(sp0)- 0] = ((*n0).kind == ((Tnodekind293020) 27) || (*n0).kind == ((Tnodekind293020) 29) || (*n0).kind == ((Tnodekind293020) 30) || (*n0).kind == ((Tnodekind293020) 31) || (*n0).kind == ((Tnodekind293020) 26) || (*n0).kind == ((Tnodekind293020) 28) || (*n0).kind == ((Tnodekind293020) 32));
				sp0 += ((NI) 1);
			}
			break;
			case ((Topcode365006) 10):
			{
				Tsymkind293435 kind0;
				NIM_BOOL LOC17;
				kind0 = ((Tsymkind293435) (((NU8)(code0->data[(NI)(pc0 + ((NI) 1))]))));
				LOC17 = (NIM_BOOL)0;
				LOC17 = ((*n0).kind == ((Tnodekind293020) 3));
				if (!(LOC17)) goto LA18;
				LOC17 = ((*(*n0).kindU.S4.sym).kind == kind0);
				LA18: ;
				stack0[(sp0)- 0] = LOC17;
				sp0 += ((NI) 1);
				pc0 += ((NI) 1);
			}
			break;
			case ((Topcode365006) 11):
			{
				Tnodekind293020 kind0;
				kind0 = ((Tnodekind293020) (((NU8)(code0->data[(NI)(pc0 + ((NI) 1))]))));
				stack0[(sp0)- 0] = ((*n0).kind == kind0);
				sp0 += ((NI) 1);
				pc0 += ((NI) 1);
			}
			break;
			case ((Topcode365006) 12):
			{
				Tassignableresult365802 LOC21;
				LOC21 = (Tassignableresult365802)0;
				LOC21 = isassignable_365808_3566143041(NIM_NIL, n0, NIM_FALSE);
				stack0[(sp0)- 0] = ((6 &(1U<<((NU)(LOC21)&7U)))!=0);
				sp0 += ((NI) 1);
			}
			break;
			case ((Topcode365006) 13):
			{
				Tassignableresult365802 LOC23;
				LOC23 = (Tassignableresult365802)0;
				LOC23 = isassignable_365808_3566143041(NIM_NIL, n0, NIM_FALSE);
				stack0[(sp0)- 0] = (LOC23 == ((Tassignableresult365802) 2));
				sp0 += ((NI) 1);
			}
			break;
			case ((Topcode365006) 14):
			{
				Tsideeffectanalysis365646 LOC25;
				LOC25 = (Tsideeffectanalysis365646)0;
				LOC25 = checkforsideeffects_365650_3566143041(n0);
				stack0[(sp0)- 0] = (LOC25 == ((Tsideeffectanalysis365646) 1));
				sp0 += ((NI) 1);
			}
			break;
			case ((Topcode365006) 15):
			{
				Tsideeffectanalysis365646 LOC27;
				LOC27 = (Tsideeffectanalysis365646)0;
				LOC27 = checkforsideeffects_365650_3566143041(n0);
				stack0[(sp0)- 0] = !((LOC27 == ((Tsideeffectanalysis365646) 1)));
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

N_NIMCALL(NIM_BOOL, islvalue_366048_3566143041)(Tnode293802* n0) {
	NIM_BOOL result0;
	Tassignableresult365802 LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (Tassignableresult365802)0;
	LOC1 = isassignable_365808_3566143041(NIM_NIL, n0, NIM_FALSE);
	result0 = ((22 &(1U<<((NU)(LOC1)&7U)))!=0);
	return result0;
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

N_NIMCALL(void, patternerror_365028_3566143041)(Tnode293802* n0) {
	NimStringDesc* LOC1;
	LOC1 = (NimStringDesc*)0;
	LOC1 = rendertree_312044_382274130(n0, 4);
	localerror_197080_155036129((*n0).info, ((Tmsgkind192002) 1), LOC1);
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

static N_INLINE(void, add_365032_3566143041)(NimStringDesc** code0, Topcode365006 op0) {
	(*code0) = addChar((*code0), ((NIM_CHAR) (((NI) (op0)))));
}

N_NIMCALL(void, compileconstraints_365072_3566143041)(Tnode293802* p0, NimStringDesc** result0) {
{	switch ((*p0).kind) {
	case ((Tnodekind293020) 27):
	case ((Tnodekind293020) 29):
	case ((Tnodekind293020) 30):
	case ((Tnodekind293020) 31):
	case ((Tnodekind293020) 26):
	case ((Tnodekind293020) 28):
	case ((Tnodekind293020) 32):
	{
		Tident200010* op0;
		{
			if (!!(((*(*p0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind293020) 2)))) goto LA4;
			patternerror_365028_3566143041((*p0).kindU.S6.sons->data[((NI) 0)]);
			goto BeforeRet;
		}
		LA4: ;
		op0 = (*(*p0).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident;
		{
			NI LOC8;
			LOC8 = (NI)0;
			LOC8 = len_294081_850551059(p0);
			if (!(LOC8 == ((NI) 3))) goto LA9;
			{
				NIM_BOOL LOC13;
				LOC13 = (NIM_BOOL)0;
				LOC13 = eqStrings((*op0).s, ((NimStringDesc*) &T3566143041_2));
				if (LOC13) goto LA14;
				LOC13 = ((*op0).Sup.id == ((NI) 49));
				LA14: ;
				if (!LOC13) goto LA15;
				compileconstraints_365072_3566143041((*p0).kindU.S6.sons->data[((NI) 1)], result0);
				compileconstraints_365072_3566143041((*p0).kindU.S6.sons->data[((NI) 2)], result0);
				add_365032_3566143041(result0, ((Topcode365006) 2));
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
				compileconstraints_365072_3566143041((*p0).kindU.S6.sons->data[((NI) 1)], result0);
				compileconstraints_365072_3566143041((*p0).kindU.S6.sons->data[((NI) 2)], result0);
				add_365032_3566143041(result0, ((Topcode365006) 3));
			}
			goto LA11;
			LA20: ;
			{
				patternerror_365028_3566143041(p0);
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
			LOC25 = len_294081_850551059(p0);
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
			compileconstraints_365072_3566143041((*p0).kindU.S6.sons->data[((NI) 1)], result0);
			add_365032_3566143041(result0, ((Topcode365006) 4));
		}
		goto LA6;
		LA29: ;
		{
			patternerror_365028_3566143041(p0);
		}
		LA6: ;
	}
	break;
	case ((Tnodekind293020) 53):
	case ((Tnodekind293020) 37):
	{
		{
			NI LOC35;
			LOC35 = (NI)0;
			LOC35 = len_294081_850551059(p0);
			if (!(LOC35 == ((NI) 1))) goto LA36;
			compileconstraints_365072_3566143041((*p0).kindU.S6.sons->data[((NI) 0)], result0);
		}
		goto LA33;
		LA36: ;
		{
			patternerror_365028_3566143041(p0);
		}
		LA33: ;
	}
	break;
	case ((Tnodekind293020) 2):
	{
		NimStringDesc* spec0;
		spec0 = nsuNormalize((*(*p0).kindU.S5.ident).s);
		switch (hashString(spec0) & 15) {
		case 2: 
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_15))) goto LA50;
break;
		case 4: 
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_7))) goto LA42;
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_12))) goto LA47;
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_14))) goto LA49;
break;
		case 6: 
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_8))) goto LA43;
break;
		case 10: 
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_11))) goto LA46;
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
if (eqStrings(spec0, ((NimStringDesc*) &T3566143041_13))) goto LA48;
break;
		}
		goto LA51;
		LA40: ;
		{
			add_365032_3566143041(result0, ((Topcode365006) 6));
		}
		goto LA52;
		LA41: ;
		{
			add_365032_3566143041(result0, ((Topcode365006) 7));
		}
		goto LA52;
		LA42: ;
		{
			add_365032_3566143041(result0, ((Topcode365006) 5));
		}
		goto LA52;
		LA43: ;
		{
			add_365032_3566143041(result0, ((Topcode365006) 8));
		}
		goto LA52;
		LA44: ;
		{
			add_365032_3566143041(result0, ((Topcode365006) 9));
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
			add_365032_3566143041(result0, ((Topcode365006) 12));
		}
		goto LA52;
		LA48: ;
		{
			add_365032_3566143041(result0, ((Topcode365006) 13));
		}
		goto LA52;
		LA49: ;
		{
			add_365032_3566143041(result0, ((Topcode365006) 14));
		}
		goto LA52;
		LA50: ;
		{
			add_365032_3566143041(result0, ((Topcode365006) 15));
		}
		goto LA52;
		LA51: ;
		{
			{
				NimStringDesc* LOC69;
				if (!NIM_FALSE) goto LA67;
				LOC69 = (NimStringDesc*)0;
				LOC69 = HEX24_197185_1689653243(T3566143041_16);
				internalerror_197113_155036129(LOC69);
			}
			LA67: ;
			{
				Tsymkind293435 i_365214_3566143041;
				NI res_365435_3566143041;
				i_365214_3566143041 = (Tsymkind293435)0;
				res_365435_3566143041 = ((NI) 0);
				{
					while (1) {
						if (!(res_365435_3566143041 <= ((NI) 24))) goto LA72;
						i_365214_3566143041 = ((Tsymkind293435) (res_365435_3566143041));
						{
							NimStringDesc* LOC75;
							NI LOC76;
							LOC75 = (NimStringDesc*)0;
							LOC75 = copyStr(reprEnum((NI)i_365214_3566143041, (&NTI293435)), ((NI) 2));
							LOC76 = (NI)0;
							LOC76 = nsuCmpIgnoreStyle(LOC75, spec0);
							if (!(LOC76 == ((NI) 0))) goto LA77;
							add_365032_3566143041(result0, ((Topcode365006) 10));
							(*result0) = addChar((*result0), ((NIM_CHAR) (((NI) (i_365214_3566143041)))));
							goto BeforeRet;
						}
						LA77: ;
						res_365435_3566143041 += ((NI) 1);
					} LA72: ;
				}
			}
			{
				NimStringDesc* LOC83;
				if (!NIM_FALSE) goto LA81;
				LOC83 = (NimStringDesc*)0;
				LOC83 = HEX24_197185_1689653243(T3566143041_18);
				internalerror_197113_155036129(LOC83);
			}
			LA81: ;
			{
				Tnodekind293020 i_365414_3566143041;
				NI res_365443_3566143041;
				i_365414_3566143041 = (Tnodekind293020)0;
				res_365443_3566143041 = ((NI) 0);
				{
					while (1) {
						if (!(res_365443_3566143041 <= ((NI) 158))) goto LA86;
						i_365414_3566143041 = ((Tnodekind293020) (res_365443_3566143041));
						{
							NI LOC89;
							LOC89 = (NI)0;
							LOC89 = nsuCmpIgnoreStyle(reprEnum((NI)i_365414_3566143041, (&NTI293020)), spec0);
							if (!(LOC89 == ((NI) 0))) goto LA90;
							add_365032_3566143041(result0, ((Topcode365006) 11));
							(*result0) = addChar((*result0), ((NIM_CHAR) (((NI) (i_365414_3566143041)))));
							goto BeforeRet;
						}
						LA90: ;
						res_365443_3566143041 += ((NI) 1);
					} LA86: ;
				}
			}
			patternerror_365028_3566143041(p0);
		}
		LA52: ;
	}
	break;
	default:
	{
		patternerror_365028_3566143041(p0);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(Tnode293802*, semnodekindconstraints_365446_3566143041)(Tnode293802* p0) {
	Tnode293802* result0;
	result0 = (Tnode293802*)0;
	result0 = newnodei_295197_850551059(((Tnodekind293020) 20), (*p0).info);
	asgnRefNoCycle((void**) (&(*result0).kindU.S3.strval), rawNewString(((NI) 10)));
	(*result0).kindU.S3.strval = addChar((*result0).kindU.S3.strval, 1);
	{
		NI LOC3;
		LOC3 = (NI)0;
		LOC3 = len_294081_850551059(p0);
		if (!(((NI) 2) <= LOC3)) goto LA4;
		{
			NI i_365630_3566143041;
			NI HEX3Atmp_365638_3566143041;
			NI LOC7;
			NI res_365641_3566143041;
			i_365630_3566143041 = (NI)0;
			HEX3Atmp_365638_3566143041 = (NI)0;
			LOC7 = (NI)0;
			LOC7 = len_294081_850551059(p0);
			HEX3Atmp_365638_3566143041 = (LOC7 - 1);
			res_365641_3566143041 = ((NI) 1);
			{
				while (1) {
					if (!(res_365641_3566143041 <= HEX3Atmp_365638_3566143041)) goto LA9;
					i_365630_3566143041 = res_365641_3566143041;
					compileconstraints_365072_3566143041((*p0).kindU.S6.sons->data[i_365630_3566143041], (&(*result0).kindU.S3.strval));
					res_365641_3566143041 += ((NI) 1);
				} LA9: ;
			}
		}
		{
			if (!(((NI) 63) < ((*result0).kindU.S3.strval ? (*result0).kindU.S3.strval->Sup.len : 0))) goto LA12;
			internalerror_197100_155036129((*p0).info, ((NimStringDesc*) &T3566143041_19));
		}
		LA12: ;
	}
	goto LA1;
	LA4: ;
	{
		patternerror_365028_3566143041(p0);
	}
	LA1: ;
	add_365032_3566143041((&(*result0).kindU.S3.strval), ((Topcode365006) 1));
	return result0;
}

N_NIMCALL(Taliasrequest365004, whichalias_365045_3566143041)(Tsym293834* p0) {
	Taliasrequest365004 result0;
	result0 = (Taliasrequest365004)0;
	{
		if (!!(((*p0).constraint == NIM_NIL))) goto LA3;
		result0 = ((Taliasrequest365004) (((NU8)((*(*p0).constraint).kindU.S3.strval->data[((NI) 0)]))));
	}
	goto LA1;
	LA3: ;
	{
		result0 = ((Taliasrequest365004) 1);
	}
	LA1: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_parampatternsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_parampatternsDatInit000)(void) {
}

