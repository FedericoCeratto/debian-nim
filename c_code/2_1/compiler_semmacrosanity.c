/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode294802 Tnode294802;
typedef struct Ttype294840 Ttype294840;
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym294834 Tsym294834;
typedef struct Tident201010 Tident201010;
typedef struct Tnodeseq294796 Tnodeseq294796;
typedef struct Cell47305 Cell47305;
typedef struct TNimType TNimType;
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
typedef struct Tidobj201004 Tidobj201004;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq294836 Ttypeseq294836;
typedef struct TY294960 TY294960;
typedef struct Tloc294816 Tloc294816;
typedef struct Ropeobj180006 Ropeobj180006;
typedef struct TY205018 TY205018;
typedef struct TY294929 TY294929;
typedef struct Tstrtable294806 Tstrtable294806;
typedef struct Tsymseq294804 Tsymseq294804;
typedef struct Tlib294820 Tlib294820;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct TY294961 TY294961;
typedef struct Tinstantiation294824 Tinstantiation294824;
typedef struct Tlistentry148007 Tlistentry148007;
typedef NU64 Ttypekind294244Set;
struct  Tlineinfo193336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag294427Set;
typedef NU8 Tnodekind294020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode294802  {
Ttype294840* typ;
Tlineinfo193336 info;
Tnodeflag294427Set flags;
Tnodekind294020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym294834* sym;
} S4;
struct {Tident201010* ident;
} S5;
struct {Tnodeseq294796* sons;
} S6;
} kindU;
NimStringDesc* comment;
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
struct  Tidobj201004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Ttypekind294244;
typedef NU8 Tcallingconvention294002;
typedef NU32 Ttypeflag294431Set;
typedef NU8 Tlockind294808;
typedef NU8 Tstorageloc294812;
typedef NU16 Tlocflag294810Set;
struct  Tloc294816  {
Tlockind294808 k;
Tstorageloc294812 s;
Tlocflag294810Set flags;
Ttype294840* t;
Ropeobj180006* r;
};
struct  Ttype294840  {
  Tidobj201004 Sup;
Ttypekind294244 kind;
Tcallingconvention294002 callconv;
Ttypeflag294431Set flags;
Ttypeseq294836* sons;
Tnode294802* n;
Tsym294834* owner;
Tsym294834* sym;
Tsym294834* destructor;
Tsym294834* deepcopy;
Tsym294834* assignment;
TY294960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc294816 loc;
};
struct TY205018 {
NimStringDesc* Field0;
NI Field1;
};
typedef NU8 Tsymkind294435;
struct  Tstrtable294806  {
NI counter;
Tsymseq294804* data;
};
typedef NU16 Tmagic294524;
typedef NU32 Tsymflag294184Set;
typedef NU32 Toption171009Set;
struct  Tsym294834  {
  Tidobj201004 Sup;
Tsymkind294435 kind;
union{
struct {Ttypeseq294836* typeinstcache;
} S1;
struct {TY294929* procinstcache;
Tsym294834* gcunsafetyreason;
} S2;
struct {TY294929* usedgenerics;
Tstrtable294806 tab;
} S3;
struct {Tsym294834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic294524 magic;
Ttype294840* typ;
Tident201010* name;
Tlineinfo193336 info;
Tsym294834* owner;
Tsymflag294184Set flags;
Tnode294802* ast;
Toption171009Set options;
NI position;
NI offset;
Tloc294816 loc;
Tlib294820* annex;
Tnode294802* constraint;
};
struct  Tident201010  {
  Tidobj201004 Sup;
NimStringDesc* s;
Tident201010* next;
NI h;
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
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY294961 {
NI Field0;
Tsym294834* Field1;
};
struct  Ropeobj180006  {
  TNimObject Sup;
Ropeobj180006* left;
Ropeobj180006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry148007  {
  TNimObject Sup;
Tlistentry148007* prev;
Tlistentry148007* next;
};
typedef NU8 Tlibkind294818;
struct  Tlib294820  {
  Tlistentry148007 Sup;
Tlibkind294818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj180006* name;
Tnode294802* path;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct  Tinstantiation294824  {
Tsym294834* sym;
Ttypeseq294836* concretetypes;
NI compilesid;
};
struct Tnodeseq294796 {
  TGenericSeq Sup;
  Tnode294802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq294836 {
  TGenericSeq Sup;
  Ttype294840* data[SEQ_DECL_SIZE];
};
struct TY294960 {
  TGenericSeq Sup;
  TY294961 data[SEQ_DECL_SIZE];
};
struct TY294929 {
  TGenericSeq Sup;
  Tinstantiation294824* data[SEQ_DECL_SIZE];
};
struct Tsymseq294804 {
  TGenericSeq Sup;
  Tsym294834* data[SEQ_DECL_SIZE];
};
N_NIMCALL(Ttype294840*, skiptypes_298099_850551059)(Ttype294840* t0, Ttypekind294244Set kinds0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
static N_INLINE(NI, len_295081_850551059)(Tnode294802* n0);
N_NIMCALL(Tsym294834*, ithfield_478002_658252590)(Tnode294802* n0, NI* field0);
N_NIMCALL(NI, sonslen_297351_850551059)(Tnode294802* n0);
N_NIMCALL(void, internalerror_198100_155036129)(Tlineinfo193336 info0, NimStringDesc* errmsg0);
N_NIMCALL(Tnode294802*, lastson_297364_850551059)(Tnode294802* n0);
N_NIMCALL(void, globalerror_198076_155036129)(Tlineinfo193336 info0, NimStringDesc* arg0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(void, internalerror_198113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(NimStringDesc*, HEX24_198185_1689653243)(TY205018 x0);
N_NIMCALL(void, annotatetype_478108_658252590)(Tnode294802* n0, Ttype294840* t0);
N_NIMCALL(NI, len_297339_850551059)(Ttype294840* n0);
N_NIMCALL(Ttype294840*, elemtype_322394_3876443242)(Ttype294840* t0);
STRING_LITERAL(T658252590_2, "ithField", 8);
STRING_LITERAL(T658252590_3, "ithField(record case branch)", 28);
STRING_LITERAL(T658252590_4, "invalid field at index ", 23);
STRING_LITERAL(T658252590_6, "compiler/semmacrosanity.nim", 27);
NIM_CONST TY205018 T658252590_5 = {((NimStringDesc*) &T658252590_6),
((NI) 51)}
;
STRING_LITERAL(T658252590_7, "() must have a tuple type", 25);
STRING_LITERAL(T658252590_8, "[] must have some form of array type", 36);
STRING_LITERAL(T658252590_9, "{} must have the set type", 25);
STRING_LITERAL(T658252590_10, "float literal must have some float type", 39);
STRING_LITERAL(T658252590_11, "integer literal must have some int type", 39);
STRING_LITERAL(T658252590_12, "string literal must be of some string type", 42);
STRING_LITERAL(T658252590_13, "nil literal must be of some pointer type", 40);
extern Gcheap49818 gch_49858_1689653243;

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

static N_INLINE(NI, len_295081_850551059)(Tnode294802* n0) {
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

N_NIMCALL(Tsym294834*, ithfield_478002_658252590)(Tnode294802* n0, NI* field0) {
	Tsym294834* result0;
{	result0 = (Tsym294834*)0;
	result0 = NIM_NIL;
	switch ((*n0).kind) {
	case ((Tnodekind294020) 138):
	{
		{
			NI i_478019_658252590;
			NI HEX3Atmp_478093_658252590;
			NI LOC3;
			NI res_478096_658252590;
			i_478019_658252590 = (NI)0;
			HEX3Atmp_478093_658252590 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = sonslen_297351_850551059(n0);
			HEX3Atmp_478093_658252590 = (NI)(LOC3 - ((NI) 1));
			res_478096_658252590 = ((NI) 0);
			{
				while (1) {
					if (!(res_478096_658252590 <= HEX3Atmp_478093_658252590)) goto LA5;
					i_478019_658252590 = res_478096_658252590;
					result0 = ithfield_478002_658252590((*n0).kindU.S6.sons->data[i_478019_658252590], field0);
					{
						if (!!((result0 == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_478096_658252590 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind294020) 139):
	{
		{
			if (!!(((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind294020) 3)))) goto LA13;
			internalerror_198100_155036129((*n0).info, ((NimStringDesc*) &T658252590_2));
		}
		LA13: ;
		result0 = ithfield_478002_658252590((*n0).kindU.S6.sons->data[((NI) 0)], field0);
		{
			if (!!((result0 == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_478067_658252590;
			NI HEX3Atmp_478101_658252590;
			NI LOC20;
			NI res_478104_658252590;
			i_478067_658252590 = (NI)0;
			HEX3Atmp_478101_658252590 = (NI)0;
			LOC20 = (NI)0;
			LOC20 = sonslen_297351_850551059(n0);
			HEX3Atmp_478101_658252590 = (NI)(LOC20 - ((NI) 1));
			res_478104_658252590 = ((NI) 1);
			{
				while (1) {
					if (!(res_478104_658252590 <= HEX3Atmp_478101_658252590)) goto LA22;
					i_478067_658252590 = res_478104_658252590;
					switch ((*(*n0).kindU.S6.sons->data[i_478067_658252590]).kind) {
					case ((Tnodekind294020) 85):
					case ((Tnodekind294020) 88):
					{
						Tnode294802* LOC24;
						LOC24 = (Tnode294802*)0;
						LOC24 = lastson_297364_850551059((*n0).kindU.S6.sons->data[i_478067_658252590]);
						result0 = ithfield_478002_658252590(LOC24, field0);
						{
							if (!!((result0 == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						internalerror_198100_155036129((*n0).info, ((NimStringDesc*) &T658252590_3));
					}
					break;
					}
					res_478104_658252590 += ((NI) 1);
				} LA22: ;
			}
		}
	}
	break;
	case ((Tnodekind294020) 3):
	{
		{
			if (!((*field0) == ((NI) 0))) goto LA33;
			result0 = (*n0).kindU.S4.sym;
		}
		goto LA31;
		LA33: ;
		{
			(*field0) -= ((NI) 1);
		}
		LA31: ;
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
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

N_NIMCALL(void, annotatetype_478108_658252590)(Tnode294802* n0, Ttype294840* t0) {
	Ttype294840* x_478125_658252590;
	x_478125_658252590 = skiptypes_298099_850551059(t0, IL64(211106233624832));
	switch ((*n0).kind) {
	case ((Tnodekind294020) 38):
	{
		Ttype294840* x0;
		x0 = skiptypes_298099_850551059(t0, IL64(211106247256320));
		asgnRefNoCycle((void**) (&(*n0).typ), t0);
		{
			NI i_478145_658252590;
			NI HEX3Atmp_478294_658252590;
			NI LOC3;
			NI res_478297_658252590;
			i_478145_658252590 = (NI)0;
			HEX3Atmp_478294_658252590 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = len_295081_850551059(n0);
			HEX3Atmp_478294_658252590 = (LOC3 - 1);
			res_478297_658252590 = ((NI) 1);
			{
				while (1) {
					NI j0;
					Tsym294834* field0;
					if (!(res_478297_658252590 <= HEX3Atmp_478294_658252590)) goto LA5;
					i_478145_658252590 = res_478297_658252590;
					j0 = (NI)(i_478145_658252590 - ((NI) 1));
					field0 = ithfield_478002_658252590((*x0).n, (&j0));
					{
						NimStringDesc* LOC10;
						NimStringDesc* LOC11;
						if (!field0 == 0) goto LA8;
						LOC10 = (NimStringDesc*)0;
						LOC11 = (NimStringDesc*)0;
						LOC11 = nimIntToStr(i_478145_658252590);
						LOC10 = rawNewString(LOC11->Sup.len + 23);
appendString(LOC10, ((NimStringDesc*) &T658252590_4));
appendString(LOC10, LOC11);
						globalerror_198076_155036129((*n0).info, LOC10);
					}
					goto LA6;
					LA8: ;
					{
						{
							NimStringDesc* LOC17;
							if (!!(((*(*n0).kindU.S6.sons->data[i_478145_658252590]).kind == ((Tnodekind294020) 34)))) goto LA15;
							LOC17 = (NimStringDesc*)0;
							LOC17 = HEX24_198185_1689653243(T658252590_5);
							internalerror_198113_155036129(LOC17);
						}
						LA15: ;
						annotatetype_478108_658252590((*(*n0).kindU.S6.sons->data[i_478145_658252590]).kindU.S6.sons->data[((NI) 1)], (*field0).typ);
					}
					LA6: ;
					res_478297_658252590 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind294020) 37):
	{
		{
			if (!((*x_478125_658252590).kind == ((Ttypekind294244) 18))) goto LA21;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				NI i_478206_658252590;
				NI HEX3Atmp_478302_658252590;
				NI LOC24;
				NI res_478305_658252590;
				i_478206_658252590 = (NI)0;
				HEX3Atmp_478302_658252590 = (NI)0;
				LOC24 = (NI)0;
				LOC24 = len_295081_850551059(n0);
				HEX3Atmp_478302_658252590 = (LOC24 - 1);
				res_478305_658252590 = ((NI) 0);
				{
					while (1) {
						if (!(res_478305_658252590 <= HEX3Atmp_478302_658252590)) goto LA26;
						i_478206_658252590 = res_478305_658252590;
						{
							NI LOC29;
							NimStringDesc* LOC32;
							NimStringDesc* LOC33;
							LOC29 = (NI)0;
							LOC29 = len_297339_850551059(x_478125_658252590);
							if (!(LOC29 <= i_478206_658252590)) goto LA30;
							LOC32 = (NimStringDesc*)0;
							LOC33 = (NimStringDesc*)0;
							LOC33 = nimIntToStr(i_478206_658252590);
							LOC32 = rawNewString(LOC33->Sup.len + 23);
appendString(LOC32, ((NimStringDesc*) &T658252590_4));
appendString(LOC32, LOC33);
							globalerror_198076_155036129((*n0).info, LOC32);
						}
						goto LA27;
						LA30: ;
						{
							annotatetype_478108_658252590((*n0).kindU.S6.sons->data[i_478206_658252590], (*x_478125_658252590).sons->data[i_478206_658252590]);
						}
						LA27: ;
						res_478305_658252590 += ((NI) 1);
					} LA26: ;
				}
			}
		}
		goto LA19;
		LA21: ;
		{
			NIM_BOOL LOC36;
			LOC36 = (NIM_BOOL)0;
			LOC36 = ((*x_478125_658252590).kind == ((Ttypekind294244) 25));
			if (!(LOC36)) goto LA37;
			LOC36 = ((*x_478125_658252590).callconv == ((Tcallingconvention294002) 8));
			LA37: ;
			if (!LOC36) goto LA38;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA19;
		LA38: ;
		{
			globalerror_198076_155036129((*n0).info, ((NimStringDesc*) &T658252590_7));
		}
		LA19: ;
	}
	break;
	case ((Tnodekind294020) 41):
	{
		{
			if (!((*x_478125_658252590).kind == ((Ttypekind294244) 4) || (*x_478125_658252590).kind == ((Ttypekind294244) 16) || (*x_478125_658252590).kind == ((Ttypekind294244) 24) || (*x_478125_658252590).kind == ((Ttypekind294244) 27))) goto LA44;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				Tnode294802* m_478237_658252590;
				m_478237_658252590 = (Tnode294802*)0;
				{
					NI i_478313_658252590;
					NI HEX3Atmp_478315_658252590;
					NI LOC48;
					NI res_478317_658252590;
					i_478313_658252590 = (NI)0;
					HEX3Atmp_478315_658252590 = (NI)0;
					LOC48 = (NI)0;
					LOC48 = len_295081_850551059(n0);
					HEX3Atmp_478315_658252590 = (LOC48 - 1);
					res_478317_658252590 = ((NI) 0);
					{
						while (1) {
							Ttype294840* LOC51;
							if (!(res_478317_658252590 <= HEX3Atmp_478315_658252590)) goto LA50;
							i_478313_658252590 = res_478317_658252590;
							m_478237_658252590 = (*n0).kindU.S6.sons->data[i_478313_658252590];
							LOC51 = (Ttype294840*)0;
							LOC51 = elemtype_322394_3876443242(x_478125_658252590);
							annotatetype_478108_658252590(m_478237_658252590, LOC51);
							res_478317_658252590 += ((NI) 1);
						} LA50: ;
					}
				}
			}
		}
		goto LA42;
		LA44: ;
		{
			globalerror_198076_155036129((*n0).info, ((NimStringDesc*) &T658252590_8));
		}
		LA42: ;
	}
	break;
	case ((Tnodekind294020) 39):
	{
		{
			if (!((*x_478125_658252590).kind == ((Ttypekind294244) 19))) goto LA56;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				Tnode294802* m_478249_658252590;
				m_478249_658252590 = (Tnode294802*)0;
				{
					NI i_478324_658252590;
					NI HEX3Atmp_478326_658252590;
					NI LOC60;
					NI res_478328_658252590;
					i_478324_658252590 = (NI)0;
					HEX3Atmp_478326_658252590 = (NI)0;
					LOC60 = (NI)0;
					LOC60 = len_295081_850551059(n0);
					HEX3Atmp_478326_658252590 = (LOC60 - 1);
					res_478328_658252590 = ((NI) 0);
					{
						while (1) {
							Ttype294840* LOC63;
							if (!(res_478328_658252590 <= HEX3Atmp_478326_658252590)) goto LA62;
							i_478324_658252590 = res_478328_658252590;
							m_478249_658252590 = (*n0).kindU.S6.sons->data[i_478324_658252590];
							LOC63 = (Ttype294840*)0;
							LOC63 = elemtype_322394_3876443242(x_478125_658252590);
							annotatetype_478108_658252590(m_478249_658252590, LOC63);
							res_478328_658252590 += ((NI) 1);
						} LA62: ;
					}
				}
			}
		}
		goto LA54;
		LA56: ;
		{
			globalerror_198076_155036129((*n0).info, ((NimStringDesc*) &T658252590_9));
		}
		LA54: ;
	}
	break;
	case ((Tnodekind294020) 16) ... ((Tnodekind294020) 19):
	{
		{
			if (!((*x_478125_658252590).kind >= ((Ttypekind294244) 36) && (*x_478125_658252590).kind <= ((Ttypekind294244) 39))) goto LA68;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA66;
		LA68: ;
		{
			globalerror_198076_155036129((*n0).info, ((NimStringDesc*) &T658252590_10));
		}
		LA66: ;
	}
	break;
	case ((Tnodekind294020) 5) ... ((Tnodekind294020) 15):
	{
		{
			if (!((*x_478125_658252590).kind >= ((Ttypekind294244) 31) && (*x_478125_658252590).kind <= ((Ttypekind294244) 44) || (*x_478125_658252590).kind == ((Ttypekind294244) 1) || (*x_478125_658252590).kind == ((Ttypekind294244) 2) || (*x_478125_658252590).kind == ((Ttypekind294244) 14))) goto LA74;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA72;
		LA74: ;
		{
			globalerror_198076_155036129((*n0).info, ((NimStringDesc*) &T658252590_11));
		}
		LA72: ;
	}
	break;
	case ((Tnodekind294020) 20) ... ((Tnodekind294020) 22):
	{
		{
			if (!((*x_478125_658252590).kind == ((Ttypekind294244) 28) || (*x_478125_658252590).kind == ((Ttypekind294244) 29))) goto LA80;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA78;
		LA80: ;
		{
			globalerror_198076_155036129((*n0).info, ((NimStringDesc*) &T658252590_12));
		}
		LA78: ;
	}
	break;
	case ((Tnodekind294020) 23):
	{
		{
			if (!((*x_478125_658252590).kind == ((Ttypekind294244) 26) || (*x_478125_658252590).kind == ((Ttypekind294244) 29) || (*x_478125_658252590).kind == ((Ttypekind294244) 22) || (*x_478125_658252590).kind == ((Ttypekind294244) 21) || (*x_478125_658252590).kind == ((Ttypekind294244) 24) || (*x_478125_658252590).kind == ((Ttypekind294244) 25) || (*x_478125_658252590).kind == ((Ttypekind294244) 28) || (*x_478125_658252590).kind == ((Ttypekind294244) 50))) goto LA86;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA84;
		LA86: ;
		{
			globalerror_198076_155036129((*n0).info, ((NimStringDesc*) &T658252590_13));
		}
		LA84: ;
	}
	break;
	default:
	{
	}
	break;
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityDatInit000)(void) {
}

