/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tidtable292850 Tidtable292850;
typedef struct Tidpairseq292848 Tidpairseq292848;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttype292840 Ttype292840;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj199004 Tidobj199004;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct Tnode292802 Tnode292802;
typedef struct Tsym292834 Tsym292834;
typedef struct TY292960 TY292960;
typedef struct Tloc292816 Tloc292816;
typedef struct Ropeobj178006 Ropeobj178006;
typedef struct Cell47705 Cell47705;
typedef struct Cellseq47721 Cellseq47721;
typedef struct Gcheap50218 Gcheap50218;
typedef struct Gcstack50216 Gcstack50216;
typedef struct Memregion29886 Memregion29886;
typedef struct Smallchunk29840 Smallchunk29840;
typedef struct Llchunk29880 Llchunk29880;
typedef struct Bigchunk29842 Bigchunk29842;
typedef struct Intset29814 Intset29814;
typedef struct Trunk29810 Trunk29810;
typedef struct Avlnode29884 Avlnode29884;
typedef struct Gcstat50214 Gcstat50214;
typedef struct Cellset47717 Cellset47717;
typedef struct Pagedesc47713 Pagedesc47713;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct TY292929 TY292929;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Tident199010 Tident199010;
typedef struct Tlib292820 Tlib292820;
typedef struct Tidpair292846 Tidpair292846;
typedef struct Tnodeseq292796 Tnodeseq292796;
typedef struct Tinfocpu176476 Tinfocpu176476;
typedef struct TY292961 TY292961;
typedef struct Basechunk29838 Basechunk29838;
typedef struct Freecell29830 Freecell29830;
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct Tlistentry147007 Tlistentry147007;
struct  Tidtable292850  {
NI counter;
Tidpairseq292848* data;
};
typedef Tidtable292850 TY528202[63];
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
typedef N_NIMCALL_PTR(void, Globalmarkerproc56202) (void);
typedef Ttype292840* TY338008[63];
typedef NU8 Ttypekind292244;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj199004  {
  TNimObject Sup;
NI id;
};
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
struct  Cell47705  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47721  {
NI len;
NI cap;
Cell47705** d;
};
typedef Smallchunk29840* TY29901[512];
typedef Trunk29810* Trunkbuckets29812[256];
struct  Intset29814  {
Trunkbuckets29812 data;
};
struct  Memregion29886  {
NI minlargeobj;
NI maxlargeobj;
TY29901 freesmallchunks;
Llchunk29880* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29842* freechunkslist;
Intset29814 chunkstarts;
Avlnode29884* root;
Avlnode29884* deleted;
Avlnode29884* last;
Avlnode29884* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47717  {
NI counter;
NI max;
Pagedesc47713* head;
Pagedesc47713** data;
};
struct  Gcheap50218  {
Gcstack50216* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47721 zct;
Cellseq47721 decstack;
Cellseq47721 tempstack;
NI recgclock;
Memregion29886 region;
Gcstat50214 stat;
Cellset47717 marked;
Cellseq47721 additionalroots;
};
struct  Tlineinfo191336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU8 Tsymkind292435;
struct  Tstrtable292806  {
NI counter;
Tsymseq292804* data;
};
typedef NU16 Tmagic292524;
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
struct  Tidpair292846  {
Tidobj199004* key;
TNimObject* val;
};
typedef NU8 Ttypeflag292431;
typedef NU16 Tspecialword275003;
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
typedef NU8 Tendian176474;
struct Tinfocpu176476 {
NimStringDesc* Field0;
NI Field1;
Tendian176474 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu176476 TY176510[19];
typedef NU8 Tsystemcpu176452;
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
struct  Gcstack50216  {
Gcstack50216* prev;
Gcstack50216* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29838  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29840  {
  Basechunk29838 Sup;
Smallchunk29840* next;
Smallchunk29840* prev;
Freecell29830* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29880  {
NI size;
NI acc;
Llchunk29880* next;
};
struct  Bigchunk29842  {
  Basechunk29838 Sup;
Bigchunk29842* next;
Bigchunk29842* prev;
NI align;
NF data;
};
typedef NI TY29819[8];
struct  Trunk29810  {
Trunk29810* next;
NI key;
TY29819 bits;
};
typedef Avlnode29884* TY29891[2];
struct  Avlnode29884  {
TY29891 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47713  {
Pagedesc47713* next;
NI key;
TY29819 bits;
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
struct  Freecell29830  {
Freecell29830* next;
NI zerofield;
};
struct  Tinstantiation292824  {
Tsym292834* sym;
Ttypeseq292836* concretetypes;
NI compilesid;
};
struct Tidpairseq292848 {
  TGenericSeq Sup;
  Tidpair292846 data[SEQ_DECL_SIZE];
};
struct Ttypeseq292836 {
  TGenericSeq Sup;
  Ttype292840* data[SEQ_DECL_SIZE];
};
struct TY292960 {
  TGenericSeq Sup;
  TY292961 data[SEQ_DECL_SIZE];
};
struct TY292929 {
  TGenericSeq Sup;
  Tinstantiation292824* data[SEQ_DECL_SIZE];
};
struct Tsymseq292804 {
  TGenericSeq Sup;
  Tsym292834* data[SEQ_DECL_SIZE];
};
struct Tnodeseq292796 {
  TGenericSeq Sup;
  Tnode292802* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T2036603609_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56202 markerproc0);
N_NIMCALL(void, T2036603609_3)(void);
N_NIMCALL(void, inittypetables_528210_2036603609)(void);
N_NIMCALL(void, initidtable_296019_850551059)(Tidtable292850* x0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x0, NI len0);
N_NIMCALL(NIM_CHAR, nsuToLowerAsciiChar)(NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, tocchar_191634_155036129)(NIM_CHAR c0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47705*, usrtocell_51840_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47705* c0);
N_NOINLINE(void, addzct_51817_1689653243)(Cellseq47721* s0, Cell47705* c0);
N_NIMCALL(void, internalerror_196100_155036129)(Tlineinfo191336 info0, NimStringDesc* errmsg0);
N_NIMCALL(void, internalerror_196113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(Ttype292840*, getuniquetype_528640_2036603609)(Ttype292840* key0);
N_NIMCALL(Ttype292840*, lastson_295377_850551059)(Ttype292840* n0);
N_NIMCALL(Ttype292840*, slowsearch_528601_2036603609)(Ttype292840* key0, Ttypekind292244 k0);
N_NIMCALL(NIM_BOOL, idtablehasobjectaskey_299100_2984716966)(Tidtable292850 t0, Tidobj199004* key0);
N_NIMCALL(NIM_BOOL, samebackendtype_326197_3876443242)(Ttype292840* x0, Ttype292840* y0);
N_NIMCALL(void, idtableput_299094_2984716966)(Tidtable292850* t0, Tidobj199004* key0, TNimObject* val0);
N_NIMCALL(TNimObject*, idtableget_299086_2984716966)(Tidtable292850 t0, Tidobj199004* key0);
N_NIMCALL(Tnode292802*, getpragmastmt_528003_2036603609)(Tnode292802* n0, Tspecialword275003 w0);
static N_INLINE(NI, len_293081_850551059)(Tnode292802* n0);
static N_INLINE(Tnode292802*, HEX5BHEX5D_293238_850551059)(Tnode292802* n0, NI i0);
N_NIMCALL(Tspecialword275003, whichpragma_318911_2616423590)(Tnode292802* n0);
STRING_LITERAL(T2036603609_4, "N", 1);
STRING_LITERAL(T2036603609_5, "HEX", 3);
STRING_LITERAL(T2036603609_6, "\"", 1);
STRING_LITERAL(T2036603609_7, "metatype not eliminated", 23);
extern NIM_CONST TY176510 Cpu_176496_4151366050;
TY528202 gtypetable_528203_2036603609;
extern TNimType NTI292850; /* TIdTable */
TNimType NTI528202; /* array[TTypeKind, TIdTable] */
TY338008 gcanonicaltypes_528207_2036603609;
extern TNimType NTI338008; /* array[TTypeKind, PType] */
extern Gcheap50218 gch_50258_1689653243;
extern Tsystemcpu176452 targetcpu_176627_4151366050;
N_NIMCALL(void, T2036603609_2)(void) {
	NI LOC1;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 63; LOC1++) {
	nimGCvisit((void*)gtypetable_528203_2036603609[LOC1].data, 0);
	}
}
N_NIMCALL(void, T2036603609_3)(void) {
	NI LOC1;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 63; LOC1++) {
	nimGCvisit((void*)gcanonicaltypes_528207_2036603609[LOC1], 0);
	}
}

N_NIMCALL(void, inittypetables_528210_2036603609)(void) {
	{
		Ttypekind292244 i_528414_2036603609;
		NI res_528421_2036603609;
		i_528414_2036603609 = (Ttypekind292244)0;
		res_528421_2036603609 = ((NI) 0);
		{
			while (1) {
				if (!(res_528421_2036603609 <= ((NI) 62))) goto LA3;
				i_528414_2036603609 = ((Ttypekind292244) (res_528421_2036603609));
				initidtable_296019_850551059((&gtypetable_528203_2036603609[(i_528414_2036603609)- 0]));
				res_528421_2036603609 += ((NI) 1);
			} LA3: ;
		}
	}
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

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, mangle_528847_2036603609)(NimStringDesc* name0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = rawNewString(((NI) ((name0 ? name0->Sup.len : 0))));
	switch (((NU8)(name0->data[((NI) 0)]))) {
	case 65 ... 90:
	case 97 ... 122:
	{
		result0 = addChar(result0, name0->data[((NI) 0)]);
	}
	break;
	case 48 ... 57:
	{
		NimStringDesc* LOC3;
		LOC3 = (NimStringDesc*)0;
		LOC3 = rawNewString(2);
appendString(LOC3, ((NimStringDesc*) &T2036603609_4));
appendChar(LOC3, name0->data[((NI) 0)]);
		result0 = resizeString(result0, LOC3->Sup.len + 0);
appendString(result0, LOC3);
	}
	break;
	default:
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		LOC5 = (NimStringDesc*)0;
		LOC6 = (NimStringDesc*)0;
		LOC6 = nsuToHex(((NI64) (((NU8)(name0->data[((NI) 0)])))), ((NI) 2));
		LOC5 = rawNewString(LOC6->Sup.len + 3);
appendString(LOC5, ((NimStringDesc*) &T2036603609_5));
appendString(LOC5, LOC6);
		result0 = LOC5;
	}
	break;
	}
	{
		NI i_528868_2036603609;
		NI HEX3Atmp_528879_2036603609;
		NI res_528882_2036603609;
		i_528868_2036603609 = (NI)0;
		HEX3Atmp_528879_2036603609 = (NI)0;
		HEX3Atmp_528879_2036603609 = (NI)((name0 ? name0->Sup.len : 0) - ((NI) 1));
		res_528882_2036603609 = ((NI) 1);
		{
			while (1) {
				NIM_CHAR c0;
				if (!(res_528882_2036603609 <= HEX3Atmp_528879_2036603609)) goto LA9;
				i_528868_2036603609 = res_528882_2036603609;
				c0 = name0->data[i_528868_2036603609];
				switch (((NU8)(c0))) {
				case 65 ... 90:
				{
					NIM_CHAR LOC11;
					LOC11 = (NIM_CHAR)0;
					LOC11 = nsuToLowerAsciiChar(c0);
					result0 = addChar(result0, LOC11);
				}
				break;
				case 95:
				{
				}
				break;
				case 97 ... 122:
				case 48 ... 57:
				{
					result0 = addChar(result0, c0);
				}
				break;
				default:
				{
					NimStringDesc* LOC15;
					NimStringDesc* LOC16;
					LOC15 = (NimStringDesc*)0;
					LOC16 = (NimStringDesc*)0;
					LOC16 = nsuToHex(((NI64) (((NU8)(c0)))), ((NI) 2));
					LOC15 = rawNewString(LOC16->Sup.len + 3);
appendString(LOC15, ((NimStringDesc*) &T2036603609_5));
appendString(LOC15, LOC16);
					result0 = resizeString(result0, LOC15->Sup.len + 0);
appendString(result0, LOC15);
				}
				break;
				}
				res_528882_2036603609 += ((NI) 1);
			} LA9: ;
		}
	}
	return result0;
}

N_NIMCALL(NimStringDesc*, makesinglelinecstring_528835_2036603609)(NimStringDesc* s0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = copyString(((NimStringDesc*) &T2036603609_6));
	{
		NIM_CHAR c_528840_2036603609;
		NI i_528844_2036603609;
		NI L_528846_2036603609;
		c_528840_2036603609 = (NIM_CHAR)0;
		i_528844_2036603609 = ((NI) 0);
		L_528846_2036603609 = (s0 ? s0->Sup.len : 0);
		{
			while (1) {
				NimStringDesc* LOC4;
				if (!(i_528844_2036603609 < L_528846_2036603609)) goto LA3;
				c_528840_2036603609 = s0->data[i_528844_2036603609];
				LOC4 = (NimStringDesc*)0;
				LOC4 = tocchar_191634_155036129(c_528840_2036603609);
				result0 = resizeString(result0, LOC4->Sup.len + 0);
appendString(result0, LOC4);
				i_528844_2036603609 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = addChar(result0, 34);
	return result0;
}

static N_INLINE(Cell47705*, usrtocell_51840_1689653243)(void* usr0) {
	Cell47705* result0;
	result0 = (Cell47705*)0;
	result0 = ((Cell47705*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47705))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47705* c0) {
	addzct_51817_1689653243((&gch_50258_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47705* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51840_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47705* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51840_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53001_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(Ttype292840*, slowsearch_528601_2036603609)(Ttype292840* key0, Ttypekind292244 k0) {
	Ttype292840* result0;
	Tidobj199004* LOC16;
	TNimObject* LOC17;
{	result0 = (Ttype292840*)0;
	{
		Tidobj199004* LOC3;
		NIM_BOOL LOC4;
		LOC3 = (Tidobj199004*)0;
		LOC3 = &key0->Sup;
		LOC4 = (NIM_BOOL)0;
		LOC4 = idtablehasobjectaskey_299100_2984716966(gtypetable_528203_2036603609[(k0)- 0], LOC3);
		if (!LOC4) goto LA5;
		result0 = key0;
		goto BeforeRet;
	}
	LA5: ;
	{
		NI h_528617_2036603609;
		NI HEX3Atmp_528633_2036603609;
		NI res_528636_2036603609;
		h_528617_2036603609 = (NI)0;
		HEX3Atmp_528633_2036603609 = (NI)0;
		HEX3Atmp_528633_2036603609 = (gtypetable_528203_2036603609[(k0)- 0].data ? (gtypetable_528203_2036603609[(k0)- 0].data->Sup.len-1) : -1);
		res_528636_2036603609 = ((NI) 0);
		{
			while (1) {
				Ttype292840* t0;
				if (!(res_528636_2036603609 <= HEX3Atmp_528633_2036603609)) goto LA9;
				h_528617_2036603609 = res_528636_2036603609;
				t0 = ((Ttype292840*) (gtypetable_528203_2036603609[(k0)- 0].data->data[h_528617_2036603609].key));
				{
					NIM_BOOL LOC12;
					LOC12 = (NIM_BOOL)0;
					LOC12 = !((t0 == NIM_NIL));
					if (!(LOC12)) goto LA13;
					LOC12 = samebackendtype_326197_3876443242(t0, key0);
					LA13: ;
					if (!LOC12) goto LA14;
					result0 = t0;
					goto BeforeRet;
				}
				LA14: ;
				res_528636_2036603609 += ((NI) 1);
			} LA9: ;
		}
	}
	LOC16 = (Tidobj199004*)0;
	LOC16 = &key0->Sup;
	LOC17 = (TNimObject*)0;
	LOC17 = &key0->Sup.Sup;
	idtableput_299094_2984716966((&gtypetable_528203_2036603609[(k0)- 0]), LOC16, LOC17);
	result0 = key0;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Ttype292840*, getuniquetype_528640_2036603609)(Ttype292840* key0) {
	Ttype292840* result0;
	Ttypekind292244 k0;
{	result0 = (Ttype292840*)0;
	{
		if (!(key0 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	k0 = (*key0).kind;
	switch (k0) {
	case ((Ttypekind292244) 1):
	case ((Ttypekind292244) 2):
	case ((Ttypekind292244) 31) ... ((Ttypekind292244) 44):
	{
		result0 = key0;
	}
	break;
	case ((Ttypekind292244) 3):
	case ((Ttypekind292244) 5):
	case ((Ttypekind292244) 6):
	case ((Ttypekind292244) 7):
	case ((Ttypekind292244) 26):
	case ((Ttypekind292244) 28):
	case ((Ttypekind292244) 29):
	case ((Ttypekind292244) 0):
	case ((Ttypekind292244) 45):
	case ((Ttypekind292244) 62):
	{
		result0 = gcanonicaltypes_528207_2036603609[(k0)- 0];
		{
			if (!(result0 == NIM_NIL)) goto LA9;
			asgnRefNoCycle((void**) (&gcanonicaltypes_528207_2036603609[(k0)- 0]), key0);
			result0 = key0;
		}
		LA9: ;
	}
	break;
	case ((Ttypekind292244) 8):
	case ((Ttypekind292244) 51):
	case ((Ttypekind292244) 12):
	case ((Ttypekind292244) 60):
	case ((Ttypekind292244) 61):
	case ((Ttypekind292244) 54):
	case ((Ttypekind292244) 52):
	case ((Ttypekind292244) 53):
	case ((Ttypekind292244) 55):
	case ((Ttypekind292244) 56):
	case ((Ttypekind292244) 57):
	case ((Ttypekind292244) 58):
	{
		{
			if (!!(((*key0).sym == NIM_NIL))) goto LA14;
			internalerror_196100_155036129((*(*key0).sym).info, ((NimStringDesc*) &T2036603609_7));
		}
		goto LA12;
		LA14: ;
		{
			internalerror_196113_155036129(((NimStringDesc*) &T2036603609_7));
		}
		LA12: ;
	}
	break;
	case ((Ttypekind292244) 13):
	{
		{
			if (!!(((*key0).deepcopy == NIM_NIL))) goto LA20;
			result0 = key0;
		}
		goto LA18;
		LA20: ;
		{
			Ttype292840* LOC23;
			LOC23 = (Ttype292840*)0;
			LOC23 = lastson_295377_850551059(key0);
			result0 = getuniquetype_528640_2036603609(LOC23);
		}
		LA18: ;
	}
	break;
	case ((Ttypekind292244) 11):
	case ((Ttypekind292244) 15):
	case ((Ttypekind292244) 47):
	case ((Ttypekind292244) 46):
	case ((Ttypekind292244) 49):
	case ((Ttypekind292244) 59):
	{
		Ttype292840* LOC25;
		LOC25 = (Ttype292840*)0;
		LOC25 = lastson_295377_850551059(key0);
		result0 = getuniquetype_528640_2036603609(LOC25);
	}
	break;
	case ((Ttypekind292244) 21):
	case ((Ttypekind292244) 22):
	case ((Ttypekind292244) 23):
	{
		Ttype292840* elemtype0;
		elemtype0 = lastson_295377_850551059(key0);
		{
			if (!((IL64(35182224605190) &((NU64)1<<((NU)((*elemtype0).kind)&63U)))!=0)) goto LA29;
			result0 = key0;
		}
		goto LA27;
		LA29: ;
		{
			result0 = slowsearch_528601_2036603609(key0, k0);
		}
		LA27: ;
	}
	break;
	case ((Ttypekind292244) 4):
	case ((Ttypekind292244) 9):
	case ((Ttypekind292244) 10):
	case ((Ttypekind292244) 27):
	case ((Ttypekind292244) 16):
	case ((Ttypekind292244) 19):
	case ((Ttypekind292244) 20):
	case ((Ttypekind292244) 18):
	case ((Ttypekind292244) 24):
	case ((Ttypekind292244) 30):
	case ((Ttypekind292244) 48):
	case ((Ttypekind292244) 50):
	{
		result0 = slowsearch_528601_2036603609(key0, k0);
	}
	break;
	case ((Ttypekind292244) 17):
	{
		{
			Tidobj199004* LOC38;
			TNimObject* LOC39;
			if (!!((((*key0).flags &(1U<<((NU)(((Ttypeflag292431) 8))&31U)))!=0))) goto LA36;
			LOC38 = (Tidobj199004*)0;
			LOC38 = &key0->Sup;
			LOC39 = (TNimObject*)0;
			LOC39 = idtableget_299086_2984716966(gtypetable_528203_2036603609[(k0)- 0], LOC38);
			result0 = ((Ttype292840*) (LOC39));
			{
				Tidobj199004* LOC44;
				TNimObject* LOC45;
				if (!(result0 == NIM_NIL)) goto LA42;
				LOC44 = (Tidobj199004*)0;
				LOC44 = &key0->Sup;
				LOC45 = (TNimObject*)0;
				LOC45 = &key0->Sup.Sup;
				idtableput_299094_2984716966((&gtypetable_528203_2036603609[(k0)- 0]), LOC44, LOC45);
				result0 = key0;
			}
			LA42: ;
		}
		goto LA34;
		LA36: ;
		{
			Tidobj199004* LOC62;
			TNimObject* LOC63;
			{
				Tidobj199004* LOC49;
				NIM_BOOL LOC50;
				LOC49 = (Tidobj199004*)0;
				LOC49 = &key0->Sup;
				LOC50 = (NIM_BOOL)0;
				LOC50 = idtablehasobjectaskey_299100_2984716966(gtypetable_528203_2036603609[(k0)- 0], LOC49);
				if (!LOC50) goto LA51;
				result0 = key0;
				goto BeforeRet;
			}
			LA51: ;
			{
				NI h_528740_2036603609;
				NI HEX3Atmp_528778_2036603609;
				NI res_528781_2036603609;
				h_528740_2036603609 = (NI)0;
				HEX3Atmp_528778_2036603609 = (NI)0;
				HEX3Atmp_528778_2036603609 = (gtypetable_528203_2036603609[(k0)- 0].data ? (gtypetable_528203_2036603609[(k0)- 0].data->Sup.len-1) : -1);
				res_528781_2036603609 = ((NI) 0);
				{
					while (1) {
						Ttype292840* t0;
						if (!(res_528781_2036603609 <= HEX3Atmp_528778_2036603609)) goto LA55;
						h_528740_2036603609 = res_528781_2036603609;
						t0 = ((Ttype292840*) (gtypetable_528203_2036603609[(k0)- 0].data->data[h_528740_2036603609].key));
						{
							NIM_BOOL LOC58;
							LOC58 = (NIM_BOOL)0;
							LOC58 = !((t0 == NIM_NIL));
							if (!(LOC58)) goto LA59;
							LOC58 = samebackendtype_326197_3876443242(t0, key0);
							LA59: ;
							if (!LOC58) goto LA60;
							result0 = t0;
							goto BeforeRet;
						}
						LA60: ;
						res_528781_2036603609 += ((NI) 1);
					} LA55: ;
				}
			}
			LOC62 = (Tidobj199004*)0;
			LOC62 = &key0->Sup;
			LOC63 = (TNimObject*)0;
			LOC63 = &key0->Sup.Sup;
			idtableput_299094_2984716966((&gtypetable_528203_2036603609[(k0)- 0]), LOC62, LOC63);
			result0 = key0;
		}
		LA34: ;
	}
	break;
	case ((Ttypekind292244) 14):
	{
		Tidobj199004* LOC65;
		TNimObject* LOC66;
		LOC65 = (Tidobj199004*)0;
		LOC65 = &key0->Sup;
		LOC66 = (TNimObject*)0;
		LOC66 = idtableget_299086_2984716966(gtypetable_528203_2036603609[(k0)- 0], LOC65);
		result0 = ((Ttype292840*) (LOC66));
		{
			Tidobj199004* LOC71;
			TNimObject* LOC72;
			if (!(result0 == NIM_NIL)) goto LA69;
			LOC71 = (Tidobj199004*)0;
			LOC71 = &key0->Sup;
			LOC72 = (TNimObject*)0;
			LOC72 = &key0->Sup.Sup;
			idtableput_299094_2984716966((&gtypetable_528203_2036603609[(k0)- 0]), LOC71, LOC72);
			result0 = key0;
		}
		LA69: ;
	}
	break;
	case ((Ttypekind292244) 25):
	{
		{
			if (!!(((*key0).callconv == ((Tcallingconvention292002) 8)))) goto LA76;
			result0 = key0;
		}
		goto LA74;
		LA76: ;
		{
			result0 = slowsearch_528601_2036603609(key0, k0);
		}
		LA74: ;
	}
	break;
	}
	}BeforeRet: ;
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

static N_INLINE(Tnode292802*, HEX5BHEX5D_293238_850551059)(Tnode292802* n0, NI i0) {
	Tnode292802* result0;
	result0 = (Tnode292802*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
}

N_NIMCALL(Tnode292802*, getpragmastmt_528003_2036603609)(Tnode292802* n0, Tspecialword275003 w0) {
	Tnode292802* result0;
{	result0 = (Tnode292802*)0;
	switch ((*n0).kind) {
	case ((Tnodekind292020) 115):
	{
		{
			NI i_528026_2036603609;
			NI HEX3Atmp_528068_2036603609;
			NI LOC3;
			NI res_528071_2036603609;
			i_528026_2036603609 = (NI)0;
			HEX3Atmp_528068_2036603609 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = len_293081_850551059(n0);
			HEX3Atmp_528068_2036603609 = (LOC3 - 1);
			res_528071_2036603609 = ((NI) 0);
			{
				while (1) {
					Tnode292802* LOC6;
					if (!(res_528071_2036603609 <= HEX3Atmp_528068_2036603609)) goto LA5;
					i_528026_2036603609 = res_528071_2036603609;
					LOC6 = (Tnode292802*)0;
					LOC6 = HEX5BHEX5D_293238_850551059(n0, i_528026_2036603609);
					result0 = getpragmastmt_528003_2036603609(LOC6, w0);
					{
						if (!!((result0 == NIM_NIL))) goto LA9;
						goto LA2;
					}
					LA9: ;
					res_528071_2036603609 += ((NI) 1);
				} LA5: ;
			}
		} LA2: ;
	}
	break;
	case ((Tnodekind292020) 90):
	{
		{
			NI i_528057_2036603609;
			NI HEX3Atmp_528076_2036603609;
			NI LOC13;
			NI res_528079_2036603609;
			i_528057_2036603609 = (NI)0;
			HEX3Atmp_528076_2036603609 = (NI)0;
			LOC13 = (NI)0;
			LOC13 = len_293081_850551059(n0);
			HEX3Atmp_528076_2036603609 = (LOC13 - 1);
			res_528079_2036603609 = ((NI) 0);
			{
				while (1) {
					if (!(res_528079_2036603609 <= HEX3Atmp_528076_2036603609)) goto LA15;
					i_528057_2036603609 = res_528079_2036603609;
					{
						Tnode292802* LOC18;
						Tspecialword275003 LOC19;
						LOC18 = (Tnode292802*)0;
						LOC18 = HEX5BHEX5D_293238_850551059(n0, i_528057_2036603609);
						LOC19 = (Tspecialword275003)0;
						LOC19 = whichpragma_318911_2616423590(LOC18);
						if (!(LOC19 == w0)) goto LA20;
						result0 = HEX5BHEX5D_293238_850551059(n0, i_528057_2036603609);
						goto BeforeRet;
					}
					LA20: ;
					res_528079_2036603609 += ((NI) 1);
				} LA15: ;
			}
		}
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

N_NIMCALL(NIM_BOOL, stmtscontainpragma_528083_2036603609)(Tnode292802* n0, Tspecialword275003 w0) {
	NIM_BOOL result0;
	Tnode292802* LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (Tnode292802*)0;
	LOC1 = getpragmastmt_528003_2036603609(n0, w0);
	result0 = !((LOC1 == NIM_NIL));
	return result0;
}

N_NIMCALL(NI64, hashstring_528100_2036603609)(NimStringDesc* s0) {
	NI64 result0;
	result0 = (NI64)0;
	{
		NI64 b0;
		if (!(Cpu_176496_4151366050[(targetcpu_176627_4151366050)- 1].Field4 == ((NI) 64))) goto LA3;
		b0 = IL64(0);
		{
			NI i_528116_2036603609;
			NI HEX3Atmp_528184_2036603609;
			NI res_528187_2036603609;
			i_528116_2036603609 = (NI)0;
			HEX3Atmp_528184_2036603609 = (NI)0;
			HEX3Atmp_528184_2036603609 = (NI)((s0 ? s0->Sup.len : 0) - ((NI) 1));
			res_528187_2036603609 = ((NI) 0);
			{
				while (1) {
					if (!(res_528187_2036603609 <= HEX3Atmp_528184_2036603609)) goto LA7;
					i_528116_2036603609 = res_528187_2036603609;
					b0 = (NI64)((NU64)(b0) + (NU64)(((NI64) (((NU8)(s0->data[i_528116_2036603609]))))));
					b0 = (NI64)((NU64)(b0) + (NU64)((NI64)((NU64)(b0) << (NU64)(IL64(10)))));
					b0 = (NI64)(b0 ^ (NI64)((NU64)(b0) >> (NU64)(IL64(6))));
					res_528187_2036603609 += ((NI) 1);
				} LA7: ;
			}
		}
		b0 = (NI64)((NU64)(b0) + (NU64)((NI64)((NU64)(b0) << (NU64)(IL64(3)))));
		b0 = (NI64)(b0 ^ (NI64)((NU64)(b0) >> (NU64)(IL64(11))));
		b0 = (NI64)((NU64)(b0) + (NU64)((NI64)((NU64)(b0) << (NU64)(IL64(15)))));
		result0 = b0;
	}
	goto LA1;
	LA3: ;
	{
		NI32 a0;
		a0 = ((NI32) 0);
		{
			NI i_528137_2036603609;
			NI HEX3Atmp_528193_2036603609;
			NI res_528196_2036603609;
			i_528137_2036603609 = (NI)0;
			HEX3Atmp_528193_2036603609 = (NI)0;
			HEX3Atmp_528193_2036603609 = (NI)((s0 ? s0->Sup.len : 0) - ((NI) 1));
			res_528196_2036603609 = ((NI) 0);
			{
				while (1) {
					if (!(res_528196_2036603609 <= HEX3Atmp_528193_2036603609)) goto LA11;
					i_528137_2036603609 = res_528196_2036603609;
					a0 = (NI32)((NU32)(a0) + (NU32)(((NI32) (((NU8)(s0->data[i_528137_2036603609]))))));
					a0 = (NI32)((NU32)(a0) + (NU32)((NI32)((NU32)(a0) << (NU32)(((NI32) 10)))));
					a0 = (NI32)(a0 ^ (NI32)((NU32)(a0) >> (NU32)(((NI32) 6))));
					res_528196_2036603609 += ((NI) 1);
				} LA11: ;
			}
		}
		a0 = (NI32)((NU32)(a0) + (NU32)((NI32)((NU32)(a0) << (NU32)(((NI32) 3)))));
		a0 = (NI32)(a0 ^ (NI32)((NU32)(a0) >> (NU32)(((NI32) 11))));
		a0 = (NI32)((NU32)(a0) + (NU32)((NI32)((NU32)(a0) << (NU32)(((NI32) 15)))));
		result0 = ((NI64) (a0));
	}
	LA1: ;
	return result0;
}

N_NIMCALL(void, resetcaches_528424_2036603609)(void) {
	inittypetables_528210_2036603609();
	{
		Ttypekind292244 i_528435_2036603609;
		NI res_528439_2036603609;
		i_528435_2036603609 = (Ttypekind292244)0;
		res_528439_2036603609 = ((NI) 0);
		{
			while (1) {
				if (!(res_528439_2036603609 <= ((NI) 62))) goto LA3;
				i_528435_2036603609 = ((Ttypekind292244) (res_528439_2036603609));
				asgnRefNoCycle((void**) (&gcanonicaltypes_528207_2036603609[(i_528435_2036603609)- 0]), NIM_NIL);
				res_528439_2036603609 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsInit000)(void) {
nimRegisterGlobalMarker(T2036603609_2);
nimRegisterGlobalMarker(T2036603609_3);
	inittypetables_528210_2036603609();
}

NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsDatInit000)(void) {
NTI528202.size = sizeof(TY528202);
NTI528202.kind = 16;
NTI528202.base = (&NTI292850);
}

