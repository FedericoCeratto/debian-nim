/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode292802 Tnode292802;
typedef struct Ttype292840 Ttype292840;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct Tsym292834 Tsym292834;
typedef struct Tident199010 Tident199010;
typedef struct Tnodeseq292796 Tnodeseq292796;
typedef struct Tidobj199004 Tidobj199004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY135002 TY135002;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct TY292929 TY292929;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Tloc292816 Tloc292816;
typedef struct Ropeobj178006 Ropeobj178006;
typedef struct Tlib292820 Tlib292820;
typedef struct Cell47705 Cell47705;
typedef struct Cellseq47721 Cellseq47721;
typedef struct Gcheap50218 Gcheap50218;
typedef struct Gcstack50216 Gcstack50216;
typedef struct Memregion29885 Memregion29885;
typedef struct Smallchunk29839 Smallchunk29839;
typedef struct Llchunk29879 Llchunk29879;
typedef struct Bigchunk29841 Bigchunk29841;
typedef struct Intset29814 Intset29814;
typedef struct Trunk29810 Trunk29810;
typedef struct Avlnode29883 Avlnode29883;
typedef struct Gcstat50214 Gcstat50214;
typedef struct Cellset47717 Cellset47717;
typedef struct Pagedesc47713 Pagedesc47713;
typedef struct TY292960 TY292960;
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Basechunk29837 Basechunk29837;
typedef struct Freecell29829 Freecell29829;
typedef struct TY292961 TY292961;
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
struct  Tident199010  {
  Tidobj199004 Sup;
NimStringDesc* s;
Tident199010* next;
NI h;
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
typedef NU8 Tprefereddesc320011;
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
struct  Cell47705  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47721  {
NI len;
NI cap;
Cell47705** d;
};
typedef Smallchunk29839* TY29900[512];
typedef Trunk29810* Trunkbuckets29812[256];
struct  Intset29814  {
Trunkbuckets29812 data;
};
struct  Memregion29885  {
NI minlargeobj;
NI maxlargeobj;
TY29900 freesmallchunks;
Llchunk29879* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29841* freechunkslist;
Intset29814 chunkstarts;
Avlnode29883* root;
Avlnode29883* deleted;
Avlnode29883* last;
Avlnode29883* freeavlnodes;
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
Memregion29885 region;
Gcstat50214 stat;
Cellset47717 marked;
Cellseq47721 additionalroots;
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
struct  Gcstack50216  {
Gcstack50216* prev;
Gcstack50216* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29837  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29839  {
  Basechunk29837 Sup;
Smallchunk29839* next;
Smallchunk29839* prev;
Freecell29829* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29879  {
NI size;
NI acc;
Llchunk29879* next;
};
struct  Bigchunk29841  {
  Basechunk29837 Sup;
Bigchunk29841* next;
Bigchunk29841* prev;
NI align;
NF data;
};
typedef NI TY29818[16];
struct  Trunk29810  {
Trunk29810* next;
NI key;
TY29818 bits;
};
typedef Avlnode29883* TY29890[2];
struct  Avlnode29883  {
TY29890 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47713  {
Pagedesc47713* next;
NI key;
TY29818 bits;
};
struct TY292961 {
NI Field0;
Tsym292834* Field1;
};
struct  Tinstantiation292824  {
Tsym292834* sym;
Ttypeseq292836* concretetypes;
NI compilesid;
};
struct  Freecell29829  {
Freecell29829* next;
NI zerofield;
};
struct TY135002 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, renderplainsymbolname_412003_117375469)(Tnode292802* n0);
static N_INLINE(Tnode292802*, HEX5BHEX5D_293238_850551059)(Tnode292802* n0, NI i0);
static N_INLINE(NI, len_293081_850551059)(Tnode292802* n0);
N_NIMCALL(NimStringDesc*, renderdefinitionname_311113_382274130)(Tsym292834* s0, NIM_BOOL noquotes0);
N_NIMCALL(void, internalerror_196100_155036129)(Tlineinfo191336 info0, NimStringDesc* errmsg0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e0, TNimType* typ0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, renderparamtypes_414233_117375469)(TY135002** found0, Tnode292802* n0);
N_NIMCALL(NimStringDesc*, rendertype_412201_117375469)(Tnode292802* n0);
N_NIMCALL(NimStringDesc*, typetostring_320017_3876443242)(Ttype292840* typ0, Tprefereddesc320011 prefer0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47705*, usrtocell_51840_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47705* c0);
N_NOINLINE(void, addzct_51817_1689653243)(Cellseq47721* s0, Cell47705* c0);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a0, NI a0Len0, NimStringDesc* sep0);
STRING_LITERAL(T117375469_2, "", 0);
STRING_LITERAL(T117375469_3, "renderPlainSymbolName() with ", 29);
STRING_LITERAL(T117375469_4, "ref.", 4);
STRING_LITERAL(T117375469_5, "ptr.", 4);
STRING_LITERAL(T117375469_6, "proc(", 5);
STRING_LITERAL(T117375469_7, "tuple[", 6);
STRING_LITERAL(T117375469_8, "renderParamTypes(found,n) with ", 31);
extern TNimType NTI292020; /* TNodeKind */
extern TNimType NTI135002; /* seq[string] */
extern Gcheap50218 gch_50258_1689653243;

static N_INLINE(Tnode292802*, HEX5BHEX5D_293238_850551059)(Tnode292802* n0, NI i0) {
	Tnode292802* result0;
	result0 = (Tnode292802*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
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

static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_7485_1689653243(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(NimStringDesc*, renderplainsymbolname_412003_117375469)(Tnode292802* n0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = copyString(((NimStringDesc*) &T117375469_2));
	switch ((*n0).kind) {
	case ((Tnodekind292020) 31):
	case ((Tnodekind292020) 53):
	{
		NI LOC2;
		Tnode292802* LOC3;
		LOC2 = (NI)0;
		LOC2 = len_293081_850551059(n0);
		LOC3 = (Tnode292802*)0;
		LOC3 = HEX5BHEX5D_293238_850551059(n0, (LOC2 - 1));
		result0 = renderplainsymbolname_412003_117375469(LOC3);
	}
	break;
	case ((Tnodekind292020) 2):
	{
		result0 = copyString((*(*n0).kindU.S5.ident).s);
	}
	break;
	case ((Tnodekind292020) 3):
	{
		result0 = renderdefinitionname_311113_382274130((*n0).kindU.S4.sym, NIM_TRUE);
	}
	break;
	case ((Tnodekind292020) 43):
	{
		Tnode292802* LOC7;
		LOC7 = (Tnode292802*)0;
		LOC7 = HEX5BHEX5D_293238_850551059(n0, ((NI) 0));
		result0 = renderplainsymbolname_412003_117375469(LOC7);
	}
	break;
	default:
	{
		NimStringDesc* LOC9;
		LOC9 = (NimStringDesc*)0;
		LOC9 = rawNewString(reprEnum((NI)(*n0).kind, (&NTI292020))->Sup.len + 29);
appendString(LOC9, ((NimStringDesc*) &T117375469_3));
appendString(LOC9, reprEnum((NI)(*n0).kind, (&NTI292020)));
		internalerror_196100_155036129((*n0).info, LOC9);
	}
	break;
	}
	return result0;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, rendertype_412201_117375469)(Tnode292802* n0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	switch ((*n0).kind) {
	case ((Tnodekind292020) 2):
	{
		result0 = copyString((*(*n0).kindU.S5.ident).s);
	}
	break;
	case ((Tnodekind292020) 3):
	{
		result0 = typetostring_320017_3876443242((*(*n0).kindU.S4.sym).typ, ((Tprefereddesc320011) 0));
	}
	break;
	case ((Tnodekind292020) 143):
	{
		Tnode292802* LOC4;
		LOC4 = (Tnode292802*)0;
		LOC4 = HEX5BHEX5D_293238_850551059(n0, ((NI) 0));
		result0 = rendertype_412201_117375469(LOC4);
	}
	break;
	case ((Tnodekind292020) 141):
	{
		NimStringDesc* LOC6;
		Tnode292802* LOC7;
		NimStringDesc* LOC8;
		LOC6 = (NimStringDesc*)0;
		LOC7 = (Tnode292802*)0;
		LOC7 = HEX5BHEX5D_293238_850551059(n0, ((NI) 0));
		LOC8 = (NimStringDesc*)0;
		LOC8 = rendertype_412201_117375469(LOC7);
		LOC6 = rawNewString(LOC8->Sup.len + 4);
appendString(LOC6, ((NimStringDesc*) &T117375469_4));
appendString(LOC6, LOC8);
		result0 = LOC6;
	}
	break;
	case ((Tnodekind292020) 142):
	{
		NimStringDesc* LOC10;
		Tnode292802* LOC11;
		NimStringDesc* LOC12;
		LOC10 = (NimStringDesc*)0;
		LOC11 = (Tnode292802*)0;
		LOC11 = HEX5BHEX5D_293238_850551059(n0, ((NI) 0));
		LOC12 = (NimStringDesc*)0;
		LOC12 = rendertype_412201_117375469(LOC11);
		LOC10 = rawNewString(LOC12->Sup.len + 4);
appendString(LOC10, ((NimStringDesc*) &T117375469_5));
appendString(LOC10, LOC12);
		result0 = LOC10;
	}
	break;
	case ((Tnodekind292020) 147):
	{
		Tnode292802* params0;
		params0 = HEX5BHEX5D_293238_850551059(n0, ((NI) 0));
		result0 = copyString(((NimStringDesc*) &T117375469_6));
		{
			NI i_413418_117375469;
			NI HEX3Atmp_414202_117375469;
			NI LOC15;
			NI res_414205_117375469;
			i_413418_117375469 = (NI)0;
			HEX3Atmp_414202_117375469 = (NI)0;
			LOC15 = (NI)0;
			LOC15 = len_293081_850551059(params0);
			HEX3Atmp_414202_117375469 = (LOC15 - 1);
			res_414205_117375469 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC18;
					Tnode292802* LOC19;
					NimStringDesc* LOC20;
					if (!(res_414205_117375469 <= HEX3Atmp_414202_117375469)) goto LA17;
					i_413418_117375469 = res_414205_117375469;
					LOC18 = (NimStringDesc*)0;
					LOC19 = (Tnode292802*)0;
					LOC19 = HEX5BHEX5D_293238_850551059(params0, i_413418_117375469);
					LOC20 = (NimStringDesc*)0;
					LOC20 = rendertype_412201_117375469(LOC19);
					LOC18 = rawNewString(LOC20->Sup.len + 1);
appendString(LOC18, LOC20);
appendChar(LOC18, 44);
					result0 = resizeString(result0, LOC18->Sup.len + 0);
appendString(result0, LOC18);
					res_414205_117375469 += ((NI) 1);
				} LA17: ;
			}
		}
		result0->data[((result0 ? result0->Sup.len : 0) - 1)] = 41;
	}
	break;
	case ((Tnodekind292020) 35):
	{
		NI typepos0;
		NI LOC22;
		NimStringDesc* typestr0;
		Tnode292802* LOC23;
		LOC22 = (NI)0;
		LOC22 = len_293081_850551059(n0);
		typepos0 = (NI)(LOC22 - ((NI) 2));
		LOC23 = (Tnode292802*)0;
		LOC23 = HEX5BHEX5D_293238_850551059(n0, typepos0);
		typestr0 = rendertype_412201_117375469(LOC23);
		result0 = copyString(typestr0);
		{
			NI i_413620_117375469;
			NI HEX3Atmp_414210_117375469;
			NI res_414213_117375469;
			i_413620_117375469 = (NI)0;
			HEX3Atmp_414210_117375469 = (NI)0;
			HEX3Atmp_414210_117375469 = (typepos0 - 1);
			res_414213_117375469 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC27;
					if (!(res_414213_117375469 <= HEX3Atmp_414210_117375469)) goto LA26;
					i_413620_117375469 = res_414213_117375469;
					LOC27 = (NimStringDesc*)0;
					LOC27 = rawNewString(typestr0->Sup.len + 1);
appendChar(LOC27, 44);
appendString(LOC27, typestr0);
					result0 = resizeString(result0, LOC27->Sup.len + 0);
appendString(result0, LOC27);
					res_414213_117375469 += ((NI) 1);
				} LA26: ;
			}
		}
	}
	break;
	case ((Tnodekind292020) 134):
	{
		result0 = copyString(((NimStringDesc*) &T117375469_7));
		{
			NI i_413818_117375469;
			NI HEX3Atmp_414218_117375469;
			NI LOC30;
			NI res_414221_117375469;
			i_413818_117375469 = (NI)0;
			HEX3Atmp_414218_117375469 = (NI)0;
			LOC30 = (NI)0;
			LOC30 = len_293081_850551059(n0);
			HEX3Atmp_414218_117375469 = (LOC30 - 1);
			res_414221_117375469 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* LOC33;
					Tnode292802* LOC34;
					NimStringDesc* LOC35;
					if (!(res_414221_117375469 <= HEX3Atmp_414218_117375469)) goto LA32;
					i_413818_117375469 = res_414221_117375469;
					LOC33 = (NimStringDesc*)0;
					LOC34 = (Tnode292802*)0;
					LOC34 = HEX5BHEX5D_293238_850551059(n0, i_413818_117375469);
					LOC35 = (NimStringDesc*)0;
					LOC35 = rendertype_412201_117375469(LOC34);
					LOC33 = rawNewString(LOC35->Sup.len + 1);
appendString(LOC33, LOC35);
appendChar(LOC33, 44);
					result0 = resizeString(result0, LOC33->Sup.len + 0);
appendString(result0, LOC33);
					res_414221_117375469 += ((NI) 1);
				} LA32: ;
			}
		}
		result0->data[((result0 ? result0->Sup.len : 0) - 1)] = 93;
	}
	break;
	case ((Tnodekind292020) 42):
	{
		NimStringDesc* LOC37;
		Tnode292802* LOC38;
		NimStringDesc* LOC39;
		LOC37 = (NimStringDesc*)0;
		LOC38 = (Tnode292802*)0;
		LOC38 = HEX5BHEX5D_293238_850551059(n0, ((NI) 0));
		LOC39 = (NimStringDesc*)0;
		LOC39 = rendertype_412201_117375469(LOC38);
		LOC37 = rawNewString(LOC39->Sup.len + 1);
appendString(LOC37, LOC39);
appendChar(LOC37, 91);
		result0 = LOC37;
		{
			NI i_414018_117375469;
			NI HEX3Atmp_414226_117375469;
			NI LOC41;
			NI res_414229_117375469;
			i_414018_117375469 = (NI)0;
			HEX3Atmp_414226_117375469 = (NI)0;
			LOC41 = (NI)0;
			LOC41 = len_293081_850551059(n0);
			HEX3Atmp_414226_117375469 = (LOC41 - 1);
			res_414229_117375469 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC44;
					Tnode292802* LOC45;
					NimStringDesc* LOC46;
					if (!(res_414229_117375469 <= HEX3Atmp_414226_117375469)) goto LA43;
					i_414018_117375469 = res_414229_117375469;
					LOC44 = (NimStringDesc*)0;
					LOC45 = (Tnode292802*)0;
					LOC45 = HEX5BHEX5D_293238_850551059(n0, i_414018_117375469);
					LOC46 = (NimStringDesc*)0;
					LOC46 = rendertype_412201_117375469(LOC45);
					LOC44 = rawNewString(LOC46->Sup.len + 1);
appendString(LOC44, LOC46);
appendChar(LOC44, 44);
					result0 = resizeString(result0, LOC44->Sup.len + 0);
appendString(result0, LOC44);
					res_414229_117375469 += ((NI) 1);
				} LA43: ;
			}
		}
		result0->data[((result0 ? result0->Sup.len : 0) - 1)] = 93;
	}
	break;
	default:
	{
		result0 = copyString(((NimStringDesc*) &T117375469_2));
	}
	break;
	}
	return result0;
}

static N_INLINE(Cell47705*, usrtocell_51840_1689653243)(void* usr0) {
	Cell47705* result0;
	result0 = (Cell47705*)0;
	result0 = ((Cell47705*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47705))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47705* c0) {
	addzct_51817_1689653243((&gch_50258_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47705* c0;
	c0 = usrtocell_51840_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53001_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(void, renderparamtypes_414233_117375469)(TY135002** found0, Tnode292802* n0) {
{	switch ((*n0).kind) {
	case ((Tnodekind292020) 76):
	{
		{
			NI i_414256_117375469;
			NI HEX3Atmp_414456_117375469;
			NI LOC3;
			NI res_414459_117375469;
			i_414256_117375469 = (NI)0;
			HEX3Atmp_414456_117375469 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = len_293081_850551059(n0);
			HEX3Atmp_414456_117375469 = (LOC3 - 1);
			res_414459_117375469 = ((NI) 1);
			{
				while (1) {
					Tnode292802* LOC6;
					if (!(res_414459_117375469 <= HEX3Atmp_414456_117375469)) goto LA5;
					i_414256_117375469 = res_414459_117375469;
					LOC6 = (Tnode292802*)0;
					LOC6 = HEX5BHEX5D_293238_850551059(n0, i_414256_117375469);
					renderparamtypes_414233_117375469(found0, LOC6);
					res_414459_117375469 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind292020) 35):
	{
		NI typepos0;
		NI LOC8;
		NimStringDesc* typestr0;
		Tnode292802* LOC9;
		LOC8 = (NI)0;
		LOC8 = len_293081_850551059(n0);
		typepos0 = (NI)(LOC8 - ((NI) 2));
		LOC9 = (Tnode292802*)0;
		LOC9 = HEX5BHEX5D_293238_850551059(n0, typepos0);
		typestr0 = rendertype_412201_117375469(LOC9);
		{
			NIM_BOOL LOC12;
			Tnode292802* LOC14;
			Ttype292840* typ0;
			Tnode292802* LOC17;
			LOC12 = (NIM_BOOL)0;
			LOC12 = ((typestr0 ? typestr0->Sup.len : 0) < ((NI) 1));
			if (!(LOC12)) goto LA13;
			LOC14 = (Tnode292802*)0;
			LOC14 = HEX5BHEX5D_293238_850551059(n0, (NI)(typepos0 + ((NI) 1)));
			LOC12 = !(((*LOC14).kind == ((Tnodekind292020) 1)));
			LA13: ;
			if (!LOC12) goto LA15;
			LOC17 = (Tnode292802*)0;
			LOC17 = HEX5BHEX5D_293238_850551059(n0, (NI)(typepos0 + ((NI) 1)));
			typ0 = (*LOC17).typ;
			{
				if (!!(typ0 == 0)) goto LA20;
				typestr0 = typetostring_320017_3876443242(typ0, ((Tprefereddesc320011) 2));
			}
			LA20: ;
			{
				if (!((typestr0 ? typestr0->Sup.len : 0) < ((NI) 1))) goto LA24;
				goto BeforeRet;
			}
			LA24: ;
		}
		LA15: ;
		{
			NI i_414437_117375469;
			NI HEX3Atmp_414464_117375469;
			NI res_414467_117375469;
			i_414437_117375469 = (NI)0;
			HEX3Atmp_414464_117375469 = (NI)0;
			HEX3Atmp_414464_117375469 = (typepos0 - 1);
			res_414467_117375469 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* LOC29;
					if (!(res_414467_117375469 <= HEX3Atmp_414464_117375469)) goto LA28;
					i_414437_117375469 = res_414467_117375469;
					(*found0) = (TY135002*) incrSeqV2(&((*found0))->Sup, sizeof(NimStringDesc*));
					LOC29 = (NimStringDesc*)0;
					LOC29 = (*found0)->data[(*found0)->Sup.len]; (*found0)->data[(*found0)->Sup.len] = copyStringRC1(typestr0);
					if (LOC29) nimGCunrefNoCycle(LOC29);
					++(*found0)->Sup.len;
					res_414467_117375469 += ((NI) 1);
				} LA28: ;
			}
		}
	}
	break;
	default:
	{
		NimStringDesc* LOC31;
		LOC31 = (NimStringDesc*)0;
		LOC31 = rawNewString(reprEnum((NI)(*n0).kind, (&NTI292020))->Sup.len + 31);
appendString(LOC31, ((NimStringDesc*) &T117375469_8));
appendString(LOC31, reprEnum((NI)(*n0).kind, (&NTI292020)));
		internalerror_196100_155036129((*n0).info, LOC31);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(NimStringDesc*, renderparamtypes_414471_117375469)(Tnode292802* n0, NimStringDesc* sep0) {
	NimStringDesc* result0;
	TY135002* found0;
	result0 = (NimStringDesc*)0;
	result0 = copyString(((NimStringDesc*) &T117375469_2));
	found0 = (TY135002*) newSeq((&NTI135002), 0);
	renderparamtypes_414233_117375469((&found0), n0);
	{
		if (!(((NI) 0) < (found0 ? found0->Sup.len : 0))) goto LA3;
		result0 = nsuJoinSep(found0->data, found0->Sup.len, sep0);
	}
	LA3: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_typesrendererInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_typesrendererDatInit000)(void) {
}

