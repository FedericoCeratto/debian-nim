/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/ubuntu/nim-ci/Nim/lib -o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_typesrenderer.o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_typesrenderer.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode293798 Tnode293798;
typedef struct Ttype293836 Ttype293836;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct Tsym293830 Tsym293830;
typedef struct Tident200012 Tident200012;
typedef struct Tnodeseq293792 Tnodeseq293792;
typedef struct Tidobj200006 Tidobj200006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY135002 TY135002;
typedef struct Ttypeseq293832 Ttypeseq293832;
typedef struct TY293925 TY293925;
typedef struct Tstrtable293802 Tstrtable293802;
typedef struct Tsymseq293800 Tsymseq293800;
typedef struct Tloc293812 Tloc293812;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct Tlib293816 Tlib293816;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29480 Memregion29480;
typedef struct Smallchunk29437 Smallchunk29437;
typedef struct Llchunk29474 Llchunk29474;
typedef struct Bigchunk29439 Bigchunk29439;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29478 Avlnode29478;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct TY293956 TY293956;
typedef struct Tinstantiation293820 Tinstantiation293820;
typedef struct Tlistentry147010 Tlistentry147010;
typedef struct Basechunk29435 Basechunk29435;
typedef struct Freecell29427 Freecell29427;
typedef struct TY293957 TY293957;
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
struct  Tnode293798  {
Ttype293836* typ;
Tlineinfo192336 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym293830* sym;
} S4;
struct {Tident200012* ident;
} S5;
struct {Tnodeseq293792* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj200006  {
  TNimObject Sup;
NI id;
};
struct  Tident200012  {
  Tidobj200006 Sup;
NimStringDesc* s;
Tident200012* next;
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tstrtable293802  {
NI counter;
Tsymseq293800* data;
};
struct  Tloc293812  {
NU8 k;
NU8 s;
NU16 flags;
Ttype293836* t;
Ropeobj179006* r;
};
struct  Tsym293830  {
  Tidobj200006 Sup;
NU8 kind;
union{
struct {Ttypeseq293832* typeinstcache;
} S1;
struct {TY293925* procinstcache;
Tsym293830* gcunsafetyreason;
} S2;
struct {TY293925* usedgenerics;
Tstrtable293802 tab;
} S3;
struct {Tsym293830* guard;
NI bitsize;
} S4;
} kindU;
NU16 magic;
Ttype293836* typ;
Tident200012* name;
Tlineinfo192336 info;
Tsym293830* owner;
NU32 flags;
Tnode293798* ast;
NU32 options;
NI position;
NI offset;
Tloc293812 loc;
Tlib293816* annex;
Tnode293798* constraint;
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
typedef Smallchunk29437* TY29495[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29480  {
NI minlargeobj;
NI maxlargeobj;
TY29495 freesmallchunks;
Llchunk29474* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29439* freechunkslist;
Intset29414 chunkstarts;
Avlnode29478* root;
Avlnode29478* deleted;
Avlnode29478* last;
Avlnode29478* freeavlnodes;
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
Memregion29480 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
struct  Ttype293836  {
  Tidobj200006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq293832* sons;
Tnode293798* n;
Tsym293830* owner;
Tsym293830* sym;
Tsym293830* destructor;
Tsym293830* deepcopy;
Tsym293830* assignment;
TY293956* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc293812 loc;
};
struct  Ropeobj179006  {
  TNimObject Sup;
Ropeobj179006* left;
Ropeobj179006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147010  {
  TNimObject Sup;
Tlistentry147010* prev;
Tlistentry147010* next;
};
struct  Tlib293816  {
  Tlistentry147010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj179006* name;
Tnode293798* path;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29435  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29437  {
  Basechunk29435 Sup;
Smallchunk29437* next;
Smallchunk29437* prev;
Freecell29427* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29474  {
NI size;
NI acc;
Llchunk29474* next;
};
struct  Bigchunk29439  {
  Basechunk29435 Sup;
Bigchunk29439* next;
Bigchunk29439* prev;
NI align;
NF data;
};
typedef NI TY29419[8];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29419 bits;
};
typedef Avlnode29478* TY29485[2];
struct  Avlnode29478  {
TY29485 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29419 bits;
};
struct TY293957 {
NI Field0;
Tsym293830* Field1;
};
struct  Tinstantiation293820  {
Tsym293830* sym;
Ttypeseq293832* concretetypes;
NI compilesid;
};
struct  Freecell29427  {
Freecell29427* next;
NI zerofield;
};
struct TY135002 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct Tnodeseq293792 {
  TGenericSeq Sup;
  Tnode293798* data[SEQ_DECL_SIZE];
};
struct Ttypeseq293832 {
  TGenericSeq Sup;
  Ttype293836* data[SEQ_DECL_SIZE];
};
struct TY293925 {
  TGenericSeq Sup;
  Tinstantiation293820* data[SEQ_DECL_SIZE];
};
struct Tsymseq293800 {
  TGenericSeq Sup;
  Tsym293830* data[SEQ_DECL_SIZE];
};
struct TY293956 {
  TGenericSeq Sup;
  TY293957 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, renderplainsymbolname_412004)(Tnode293798* n);
static N_INLINE(Tnode293798*, HEX5BHEX5D_294238)(Tnode293798* n, NI i);
static N_INLINE(NI, len_294062)(Tnode293798* n);
N_NIMCALL(NimStringDesc*, renderdefinitionname_312113)(Tsym293830* s, NIM_BOOL noquotes);
N_NIMCALL(void, internalerror_197100)(Tlineinfo192336 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copymem_7478)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, renderparamtypes_414233)(TY135002** found, Tnode293798* n);
N_NIMCALL(NimStringDesc*, rendertype_412201)(Tnode293798* n);
N_NIMCALL(NimStringDesc*, typetostring_321017)(Ttype293836* typ, NU8 prefer);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47305*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_52601)(Cell47305* c);
N_NOINLINE(void, addzct_51417)(Cellseq47321* s, Cell47305* c);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen0, NimStringDesc* sep);
STRING_LITERAL(TMP5276, "", 0);
STRING_LITERAL(TMP5277, "renderPlainSymbolName() with ", 29);
STRING_LITERAL(TMP5284, "ref.", 4);
STRING_LITERAL(TMP5285, "ptr.", 4);
STRING_LITERAL(TMP5286, "proc(", 5);
STRING_LITERAL(TMP5287, "tuple[", 6);
STRING_LITERAL(TMP5288, "renderParamTypes(found,n) with ", 31);
extern TNimType NTI293020; /* TNodeKind */
extern TNimType NTI135002; /* seq[string] */
extern Gcheap49818 gch_49855;

static N_INLINE(Tnode293798*, HEX5BHEX5D_294238)(Tnode293798* n, NI i) {
	Tnode293798* result;
	result = 0;
	result = (*n).kindU.S6.sons->data[i];
	return result;
}

static N_INLINE(NI, len_294062)(Tnode293798* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

static N_INLINE(void, copymem_7478)(void* dest, void* source, NI size) {
	void* LOC1;
	LOC1 = 0;
	LOC1 = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copymem_7478(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, renderplainsymbolname_412004)(Tnode293798* n) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP5276));
	switch ((*n).kind) {
	case ((NU8) 31):
	case ((NU8) 53):
	{
		NI LOC2;
		Tnode293798* LOC3;
		LOC2 = 0;
		LOC2 = len_294062(n);
		LOC3 = 0;
		LOC3 = HEX5BHEX5D_294238(n, (LOC2 - 1));
		result = renderplainsymbolname_412004(LOC3);
	}
	break;
	case ((NU8) 2):
	{
		result = copyString((*(*n).kindU.S5.ident).s);
	}
	break;
	case ((NU8) 3):
	{
		result = renderdefinitionname_312113((*n).kindU.S4.sym, NIM_TRUE);
	}
	break;
	case ((NU8) 43):
	{
		Tnode293798* LOC7;
		LOC7 = 0;
		LOC7 = HEX5BHEX5D_294238(n, ((NI) 0));
		result = renderplainsymbolname_412004(LOC7);
	}
	break;
	default:
	{
		NimStringDesc* LOC9;
		LOC9 = 0;
		LOC9 = rawNewString(reprEnum((*n).kind, (&NTI293020))->Sup.len + 29);
appendString(LOC9, ((NimStringDesc*) &TMP5277));
appendString(LOC9, reprEnum((*n).kind, (&NTI293020)));
		internalerror_197100((*n).info, LOC9);
	}
	break;
	}
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, rendertype_412201)(Tnode293798* n) {
	NimStringDesc* result;
	result = 0;
	switch ((*n).kind) {
	case ((NU8) 2):
	{
		result = copyString((*(*n).kindU.S5.ident).s);
	}
	break;
	case ((NU8) 3):
	{
		result = typetostring_321017((*(*n).kindU.S4.sym).typ, ((NU8) 0));
	}
	break;
	case ((NU8) 143):
	{
		Tnode293798* LOC4;
		LOC4 = 0;
		LOC4 = HEX5BHEX5D_294238(n, ((NI) 0));
		result = rendertype_412201(LOC4);
	}
	break;
	case ((NU8) 141):
	{
		NimStringDesc* LOC6;
		Tnode293798* LOC7;
		NimStringDesc* LOC8;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = HEX5BHEX5D_294238(n, ((NI) 0));
		LOC8 = 0;
		LOC8 = rendertype_412201(LOC7);
		LOC6 = rawNewString(LOC8->Sup.len + 4);
appendString(LOC6, ((NimStringDesc*) &TMP5284));
appendString(LOC6, LOC8);
		result = LOC6;
	}
	break;
	case ((NU8) 142):
	{
		NimStringDesc* LOC10;
		Tnode293798* LOC11;
		NimStringDesc* LOC12;
		LOC10 = 0;
		LOC11 = 0;
		LOC11 = HEX5BHEX5D_294238(n, ((NI) 0));
		LOC12 = 0;
		LOC12 = rendertype_412201(LOC11);
		LOC10 = rawNewString(LOC12->Sup.len + 4);
appendString(LOC10, ((NimStringDesc*) &TMP5285));
appendString(LOC10, LOC12);
		result = LOC10;
	}
	break;
	case ((NU8) 147):
	{
		Tnode293798* params;
		params = HEX5BHEX5D_294238(n, ((NI) 0));
		result = copyString(((NimStringDesc*) &TMP5286));
		{
			NI i_413418;
			NI HEX3Atmp_414202;
			NI LOC15;
			NI res_414205;
			i_413418 = 0;
			HEX3Atmp_414202 = 0;
			LOC15 = 0;
			LOC15 = len_294062(params);
			HEX3Atmp_414202 = (LOC15 - 1);
			res_414205 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC18;
					Tnode293798* LOC19;
					NimStringDesc* LOC20;
					if (!(res_414205 <= HEX3Atmp_414202)) goto LA17;
					i_413418 = res_414205;
					LOC18 = 0;
					LOC19 = 0;
					LOC19 = HEX5BHEX5D_294238(params, i_413418);
					LOC20 = 0;
					LOC20 = rendertype_412201(LOC19);
					LOC18 = rawNewString(LOC20->Sup.len + 1);
appendString(LOC18, LOC20);
appendChar(LOC18, 44);
					result = resizeString(result, LOC18->Sup.len + 0);
appendString(result, LOC18);
					res_414205 += ((NI) 1);
				} LA17: ;
			}
		}
		result->data[((result ? result->Sup.len : 0) - 1)] = 41;
	}
	break;
	case ((NU8) 35):
	{
		NI typepos;
		NI LOC22;
		NimStringDesc* typestr;
		Tnode293798* LOC23;
		LOC22 = 0;
		LOC22 = len_294062(n);
		typepos = (NI)(LOC22 - ((NI) 2));
		LOC23 = 0;
		LOC23 = HEX5BHEX5D_294238(n, typepos);
		typestr = rendertype_412201(LOC23);
		result = copyString(typestr);
		{
			NI i_413620;
			NI HEX3Atmp_414210;
			NI res_414213;
			i_413620 = 0;
			HEX3Atmp_414210 = 0;
			HEX3Atmp_414210 = (typepos - 1);
			res_414213 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC27;
					if (!(res_414213 <= HEX3Atmp_414210)) goto LA26;
					i_413620 = res_414213;
					LOC27 = 0;
					LOC27 = rawNewString(typestr->Sup.len + 1);
appendChar(LOC27, 44);
appendString(LOC27, typestr);
					result = resizeString(result, LOC27->Sup.len + 0);
appendString(result, LOC27);
					res_414213 += ((NI) 1);
				} LA26: ;
			}
		}
	}
	break;
	case ((NU8) 134):
	{
		result = copyString(((NimStringDesc*) &TMP5287));
		{
			NI i_413818;
			NI HEX3Atmp_414218;
			NI LOC30;
			NI res_414221;
			i_413818 = 0;
			HEX3Atmp_414218 = 0;
			LOC30 = 0;
			LOC30 = len_294062(n);
			HEX3Atmp_414218 = (LOC30 - 1);
			res_414221 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* LOC33;
					Tnode293798* LOC34;
					NimStringDesc* LOC35;
					if (!(res_414221 <= HEX3Atmp_414218)) goto LA32;
					i_413818 = res_414221;
					LOC33 = 0;
					LOC34 = 0;
					LOC34 = HEX5BHEX5D_294238(n, i_413818);
					LOC35 = 0;
					LOC35 = rendertype_412201(LOC34);
					LOC33 = rawNewString(LOC35->Sup.len + 1);
appendString(LOC33, LOC35);
appendChar(LOC33, 44);
					result = resizeString(result, LOC33->Sup.len + 0);
appendString(result, LOC33);
					res_414221 += ((NI) 1);
				} LA32: ;
			}
		}
		result->data[((result ? result->Sup.len : 0) - 1)] = 93;
	}
	break;
	case ((NU8) 42):
	{
		NimStringDesc* LOC37;
		Tnode293798* LOC38;
		NimStringDesc* LOC39;
		LOC37 = 0;
		LOC38 = 0;
		LOC38 = HEX5BHEX5D_294238(n, ((NI) 0));
		LOC39 = 0;
		LOC39 = rendertype_412201(LOC38);
		LOC37 = rawNewString(LOC39->Sup.len + 1);
appendString(LOC37, LOC39);
appendChar(LOC37, 91);
		result = LOC37;
		{
			NI i_414018;
			NI HEX3Atmp_414226;
			NI LOC41;
			NI res_414229;
			i_414018 = 0;
			HEX3Atmp_414226 = 0;
			LOC41 = 0;
			LOC41 = len_294062(n);
			HEX3Atmp_414226 = (LOC41 - 1);
			res_414229 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC44;
					Tnode293798* LOC45;
					NimStringDesc* LOC46;
					if (!(res_414229 <= HEX3Atmp_414226)) goto LA43;
					i_414018 = res_414229;
					LOC44 = 0;
					LOC45 = 0;
					LOC45 = HEX5BHEX5D_294238(n, i_414018);
					LOC46 = 0;
					LOC46 = rendertype_412201(LOC45);
					LOC44 = rawNewString(LOC46->Sup.len + 1);
appendString(LOC44, LOC46);
appendChar(LOC44, 44);
					result = resizeString(result, LOC44->Sup.len + 0);
appendString(result, LOC44);
					res_414229 += ((NI) 1);
				} LA43: ;
			}
		}
		result->data[((result ? result->Sup.len : 0) - 1)] = 93;
	}
	break;
	default:
	{
		result = copyString(((NimStringDesc*) &TMP5276));
	}
	break;
	}
	return result;
}

static N_INLINE(Cell47305*, usrtocell_51440)(void* usr) {
	Cell47305* result;
	result = 0;
	result = ((Cell47305*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47305))))));
	return result;
}

static N_INLINE(void, rtladdzct_52601)(Cell47305* c) {
	addzct_51417((&gch_49855.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47305* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601(c);
	}
	LA3: ;
}

N_NIMCALL(void, renderparamtypes_414233)(TY135002** found, Tnode293798* n) {
{	switch ((*n).kind) {
	case ((NU8) 76):
	{
		{
			NI i_414256;
			NI HEX3Atmp_414456;
			NI LOC3;
			NI res_414459;
			i_414256 = 0;
			HEX3Atmp_414456 = 0;
			LOC3 = 0;
			LOC3 = len_294062(n);
			HEX3Atmp_414456 = (LOC3 - 1);
			res_414459 = ((NI) 1);
			{
				while (1) {
					Tnode293798* LOC6;
					if (!(res_414459 <= HEX3Atmp_414456)) goto LA5;
					i_414256 = res_414459;
					LOC6 = 0;
					LOC6 = HEX5BHEX5D_294238(n, i_414256);
					renderparamtypes_414233(found, LOC6);
					res_414459 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 35):
	{
		NI typepos;
		NI LOC8;
		NimStringDesc* typestr;
		Tnode293798* LOC9;
		LOC8 = 0;
		LOC8 = len_294062(n);
		typepos = (NI)(LOC8 - ((NI) 2));
		LOC9 = 0;
		LOC9 = HEX5BHEX5D_294238(n, typepos);
		typestr = rendertype_412201(LOC9);
		{
			NIM_BOOL LOC12;
			Tnode293798* LOC14;
			Ttype293836* typ;
			Tnode293798* LOC17;
			LOC12 = 0;
			LOC12 = ((typestr ? typestr->Sup.len : 0) < ((NI) 1));
			if (!(LOC12)) goto LA13;
			LOC14 = 0;
			LOC14 = HEX5BHEX5D_294238(n, (NI)(typepos + ((NI) 1)));
			LOC12 = !(((*LOC14).kind == ((NU8) 1)));
			LA13: ;
			if (!LOC12) goto LA15;
			LOC17 = 0;
			LOC17 = HEX5BHEX5D_294238(n, (NI)(typepos + ((NI) 1)));
			typ = (*LOC17).typ;
			{
				if (!!(typ == 0)) goto LA20;
				typestr = typetostring_321017(typ, ((NU8) 2));
			}
			LA20: ;
			{
				if (!((typestr ? typestr->Sup.len : 0) < ((NI) 1))) goto LA24;
				goto BeforeRet;
			}
			LA24: ;
		}
		LA15: ;
		{
			NI i_414437;
			NI HEX3Atmp_414464;
			NI res_414467;
			i_414437 = 0;
			HEX3Atmp_414464 = 0;
			HEX3Atmp_414464 = (typepos - 1);
			res_414467 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* LOC29;
					if (!(res_414467 <= HEX3Atmp_414464)) goto LA28;
					i_414437 = res_414467;
					(*found) = (TY135002*) incrSeqV2(&((*found))->Sup, sizeof(NimStringDesc*));
					LOC29 = 0;
					LOC29 = (*found)->data[(*found)->Sup.len]; (*found)->data[(*found)->Sup.len] = copyStringRC1(typestr);
					if (LOC29) nimGCunrefNoCycle(LOC29);
					++(*found)->Sup.len;
					res_414467 += ((NI) 1);
				} LA28: ;
			}
		}
	}
	break;
	default:
	{
		NimStringDesc* LOC31;
		LOC31 = 0;
		LOC31 = rawNewString(reprEnum((*n).kind, (&NTI293020))->Sup.len + 31);
appendString(LOC31, ((NimStringDesc*) &TMP5288));
appendString(LOC31, reprEnum((*n).kind, (&NTI293020)));
		internalerror_197100((*n).info, LOC31);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(NimStringDesc*, renderparamtypes_414471)(Tnode293798* n, NimStringDesc* sep) {
	NimStringDesc* result;
	TY135002* found;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP5276));
	found = (TY135002*) newSeq((&NTI135002), 0);
	renderparamtypes_414233((&found), n);
	{
		if (!(((NI) 0) < (found ? found->Sup.len : 0))) goto LA3;
		result = nsuJoinSep(found->data, found->Sup.len, sep);
	}
	LA3: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_typesrendererInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_typesrendererDatInit000)(void) {
}

