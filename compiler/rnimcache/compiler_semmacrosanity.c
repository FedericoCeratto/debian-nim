/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/ubuntu/nim-ci/Nim/lib -o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_semmacrosanity.o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_semmacrosanity.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tnode293798 Tnode293798;
typedef struct Ttype293836 Ttype293836;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym293830 Tsym293830;
typedef struct Tident200012 Tident200012;
typedef struct Tnodeseq293792 Tnodeseq293792;
typedef struct Cell47305 Cell47305;
typedef struct TNimType TNimType;
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
typedef struct Tidobj200006 Tidobj200006;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq293832 Ttypeseq293832;
typedef struct TY293956 TY293956;
typedef struct Tloc293812 Tloc293812;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct TY204019 TY204019;
typedef struct TY293925 TY293925;
typedef struct Tstrtable293802 Tstrtable293802;
typedef struct Tsymseq293800 Tsymseq293800;
typedef struct Tlib293816 Tlib293816;
typedef struct Basechunk29435 Basechunk29435;
typedef struct Freecell29427 Freecell29427;
typedef struct TY293957 TY293957;
typedef struct Tinstantiation293820 Tinstantiation293820;
typedef struct Tlistentry147010 Tlistentry147010;
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  Tloc293812  {
NU8 k;
NU8 s;
NU16 flags;
Ttype293836* t;
Ropeobj179006* r;
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
struct TY204019 {
NimStringDesc* Field0;
NI Field1;
};
struct  Tstrtable293802  {
NI counter;
Tsymseq293800* data;
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
struct  Tident200012  {
  Tidobj200006 Sup;
NimStringDesc* s;
Tident200012* next;
NI h;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY293957 {
NI Field0;
Tsym293830* Field1;
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
struct  Freecell29427  {
Freecell29427* next;
NI zerofield;
};
struct  Tinstantiation293820  {
Tsym293830* sym;
Ttypeseq293832* concretetypes;
NI compilesid;
};
struct Tnodeseq293792 {
  TGenericSeq Sup;
  Tnode293798* data[SEQ_DECL_SIZE];
};
struct Ttypeseq293832 {
  TGenericSeq Sup;
  Ttype293836* data[SEQ_DECL_SIZE];
};
struct TY293956 {
  TGenericSeq Sup;
  TY293957 data[SEQ_DECL_SIZE];
};
struct TY293925 {
  TGenericSeq Sup;
  Tinstantiation293820* data[SEQ_DECL_SIZE];
};
struct Tsymseq293800 {
  TGenericSeq Sup;
  Tsym293830* data[SEQ_DECL_SIZE];
};
N_NIMCALL(Ttype293836*, skiptypes_297099)(Ttype293836* t, NU64 kinds);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47305*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_52601)(Cell47305* c);
N_NOINLINE(void, addzct_51417)(Cellseq47321* s, Cell47305* c);
static N_INLINE(NI, len_294062)(Tnode293798* n);
N_NIMCALL(Tsym293830*, ithfield_476003)(Tnode293798* n, NI* field);
N_NIMCALL(NI, sonslen_296351)(Tnode293798* n);
N_NIMCALL(void, internalerror_197100)(Tlineinfo192336 info, NimStringDesc* errmsg);
N_NIMCALL(Tnode293798*, lastson_296364)(Tnode293798* n);
N_NIMCALL(void, globalerror_197076)(Tlineinfo192336 info, NimStringDesc* arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copymem_7478)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, internalerror_197113)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_197185)(TY204019 x);
N_NIMCALL(void, annotatetype_476109)(Tnode293798* n, Ttype293836* t);
N_NIMCALL(NI, len_296339)(Ttype293836* n);
N_NIMCALL(Ttype293836*, elemtype_321383)(Ttype293836* t);
STRING_LITERAL(TMP3546, "ithField", 8);
STRING_LITERAL(TMP3547, "ithField(record case branch)", 28);
STRING_LITERAL(TMP3548, "invalid field at index ", 23);
STRING_LITERAL(TMP3550, "compiler/semmacrosanity.nim", 27);
NIM_CONST TY204019 TMP3549 = {((NimStringDesc*) &TMP3550),
((NI) 51)}
;
STRING_LITERAL(TMP3551, "() must have a tuple type", 25);
STRING_LITERAL(TMP3552, "[] must have some form of array type", 36);
STRING_LITERAL(TMP3553, "{} must have the set type", 25);
STRING_LITERAL(TMP3554, "float literal must have some float type", 39);
STRING_LITERAL(TMP3555, "integer literal must have some int type", 39);
STRING_LITERAL(TMP3556, "string literal must be of some string type", 42);
STRING_LITERAL(TMP3557, "nil literal must be of some pointer type", 40);
extern Gcheap49818 gch_49855;

static N_INLINE(Cell47305*, usrtocell_51440)(void* usr) {
	Cell47305* result;
	result = 0;
	result = ((Cell47305*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47305))))));
	return result;
}

static N_INLINE(void, rtladdzct_52601)(Cell47305* c) {
	addzct_51417((&gch_49855.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47305* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47305* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51440((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_52601(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
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

N_NIMCALL(Tsym293830*, ithfield_476003)(Tnode293798* n, NI* field) {
	Tsym293830* result;
{	result = 0;
	result = NIM_NIL;
	switch ((*n).kind) {
	case ((NU8) 138):
	{
		{
			NI i_476020;
			NI HEX3Atmp_476094;
			NI LOC3;
			NI res_476097;
			i_476020 = 0;
			HEX3Atmp_476094 = 0;
			LOC3 = 0;
			LOC3 = sonslen_296351(n);
			HEX3Atmp_476094 = (NI)(LOC3 - ((NI) 1));
			res_476097 = ((NI) 0);
			{
				while (1) {
					if (!(res_476097 <= HEX3Atmp_476094)) goto LA5;
					i_476020 = res_476097;
					result = ithfield_476003((*n).kindU.S6.sons->data[i_476020], field);
					{
						if (!!((result == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_476097 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 139):
	{
		{
			if (!!(((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 3)))) goto LA13;
			internalerror_197100((*n).info, ((NimStringDesc*) &TMP3546));
		}
		LA13: ;
		result = ithfield_476003((*n).kindU.S6.sons->data[((NI) 0)], field);
		{
			if (!!((result == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_476068;
			NI HEX3Atmp_476102;
			NI LOC20;
			NI res_476105;
			i_476068 = 0;
			HEX3Atmp_476102 = 0;
			LOC20 = 0;
			LOC20 = sonslen_296351(n);
			HEX3Atmp_476102 = (NI)(LOC20 - ((NI) 1));
			res_476105 = ((NI) 1);
			{
				while (1) {
					if (!(res_476105 <= HEX3Atmp_476102)) goto LA22;
					i_476068 = res_476105;
					switch ((*(*n).kindU.S6.sons->data[i_476068]).kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						Tnode293798* LOC24;
						LOC24 = 0;
						LOC24 = lastson_296364((*n).kindU.S6.sons->data[i_476068]);
						result = ithfield_476003(LOC24, field);
						{
							if (!!((result == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						internalerror_197100((*n).info, ((NimStringDesc*) &TMP3547));
					}
					break;
					}
					res_476105 += ((NI) 1);
				} LA22: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		{
			if (!((*field) == ((NI) 0))) goto LA33;
			result = (*n).kindU.S4.sym;
		}
		goto LA31;
		LA33: ;
		{
			(*field) -= ((NI) 1);
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

N_NIMCALL(void, annotatetype_476109)(Tnode293798* n, Ttype293836* t) {
	Ttype293836* x_476126;
	x_476126 = skiptypes_297099(t, IL64(211106233624832));
	switch ((*n).kind) {
	case ((NU8) 38):
	{
		Ttype293836* x;
		x = skiptypes_297099(t, IL64(211106247256320));
		asgnRefNoCycle((void**) (&(*n).typ), t);
		{
			NI i_476146;
			NI HEX3Atmp_476295;
			NI LOC3;
			NI res_476298;
			i_476146 = 0;
			HEX3Atmp_476295 = 0;
			LOC3 = 0;
			LOC3 = len_294062(n);
			HEX3Atmp_476295 = (LOC3 - 1);
			res_476298 = ((NI) 1);
			{
				while (1) {
					NI j;
					Tsym293830* field;
					if (!(res_476298 <= HEX3Atmp_476295)) goto LA5;
					i_476146 = res_476298;
					j = (NI)(i_476146 - ((NI) 1));
					field = ithfield_476003((*x).n, (&j));
					{
						NimStringDesc* LOC10;
						NimStringDesc* LOC11;
						if (!field == 0) goto LA8;
						LOC10 = 0;
						LOC11 = 0;
						LOC11 = nimIntToStr(i_476146);
						LOC10 = rawNewString(LOC11->Sup.len + 23);
appendString(LOC10, ((NimStringDesc*) &TMP3548));
appendString(LOC10, LOC11);
						globalerror_197076((*n).info, LOC10);
					}
					goto LA6;
					LA8: ;
					{
						{
							NimStringDesc* LOC17;
							if (!!(((*(*n).kindU.S6.sons->data[i_476146]).kind == ((NU8) 34)))) goto LA15;
							LOC17 = 0;
							LOC17 = HEX24_197185(TMP3549);
							internalerror_197113(LOC17);
						}
						LA15: ;
						annotatetype_476109((*(*n).kindU.S6.sons->data[i_476146]).kindU.S6.sons->data[((NI) 1)], (*field).typ);
					}
					LA6: ;
					res_476298 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 37):
	{
		{
			if (!((*x_476126).kind == ((NU8) 18))) goto LA21;
			asgnRefNoCycle((void**) (&(*n).typ), t);
			{
				NI i_476207;
				NI HEX3Atmp_476303;
				NI LOC24;
				NI res_476306;
				i_476207 = 0;
				HEX3Atmp_476303 = 0;
				LOC24 = 0;
				LOC24 = len_294062(n);
				HEX3Atmp_476303 = (LOC24 - 1);
				res_476306 = ((NI) 0);
				{
					while (1) {
						if (!(res_476306 <= HEX3Atmp_476303)) goto LA26;
						i_476207 = res_476306;
						{
							NI LOC29;
							NimStringDesc* LOC32;
							NimStringDesc* LOC33;
							LOC29 = 0;
							LOC29 = len_296339(x_476126);
							if (!(LOC29 <= i_476207)) goto LA30;
							LOC32 = 0;
							LOC33 = 0;
							LOC33 = nimIntToStr(i_476207);
							LOC32 = rawNewString(LOC33->Sup.len + 23);
appendString(LOC32, ((NimStringDesc*) &TMP3548));
appendString(LOC32, LOC33);
							globalerror_197076((*n).info, LOC32);
						}
						goto LA27;
						LA30: ;
						{
							annotatetype_476109((*n).kindU.S6.sons->data[i_476207], (*x_476126).sons->data[i_476207]);
						}
						LA27: ;
						res_476306 += ((NI) 1);
					} LA26: ;
				}
			}
		}
		goto LA19;
		LA21: ;
		{
			NIM_BOOL LOC36;
			LOC36 = 0;
			LOC36 = ((*x_476126).kind == ((NU8) 25));
			if (!(LOC36)) goto LA37;
			LOC36 = ((*x_476126).callconv == ((NU8) 8));
			LA37: ;
			if (!LOC36) goto LA38;
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA19;
		LA38: ;
		{
			globalerror_197076((*n).info, ((NimStringDesc*) &TMP3551));
		}
		LA19: ;
	}
	break;
	case ((NU8) 41):
	{
		{
			if (!((151060496 &((NU64)1<<((NU)((*x_476126).kind)&63U)))!=0)) goto LA44;
			asgnRefNoCycle((void**) (&(*n).typ), t);
			{
				Tnode293798* m_476238;
				m_476238 = 0;
				{
					NI i_476314;
					NI HEX3Atmp_476316;
					NI LOC48;
					NI res_476318;
					i_476314 = 0;
					HEX3Atmp_476316 = 0;
					LOC48 = 0;
					LOC48 = len_294062(n);
					HEX3Atmp_476316 = (LOC48 - 1);
					res_476318 = ((NI) 0);
					{
						while (1) {
							Ttype293836* LOC51;
							if (!(res_476318 <= HEX3Atmp_476316)) goto LA50;
							i_476314 = res_476318;
							m_476238 = (*n).kindU.S6.sons->data[i_476314];
							LOC51 = 0;
							LOC51 = elemtype_321383(x_476126);
							annotatetype_476109(m_476238, LOC51);
							res_476318 += ((NI) 1);
						} LA50: ;
					}
				}
			}
		}
		goto LA42;
		LA44: ;
		{
			globalerror_197076((*n).info, ((NimStringDesc*) &TMP3552));
		}
		LA42: ;
	}
	break;
	case ((NU8) 39):
	{
		{
			if (!((524288 &((NU64)1<<((NU)((*x_476126).kind)&63U)))!=0)) goto LA56;
			asgnRefNoCycle((void**) (&(*n).typ), t);
			{
				Tnode293798* m_476250;
				m_476250 = 0;
				{
					NI i_476325;
					NI HEX3Atmp_476327;
					NI LOC60;
					NI res_476329;
					i_476325 = 0;
					HEX3Atmp_476327 = 0;
					LOC60 = 0;
					LOC60 = len_294062(n);
					HEX3Atmp_476327 = (LOC60 - 1);
					res_476329 = ((NI) 0);
					{
						while (1) {
							Ttype293836* LOC63;
							if (!(res_476329 <= HEX3Atmp_476327)) goto LA62;
							i_476325 = res_476329;
							m_476250 = (*n).kindU.S6.sons->data[i_476325];
							LOC63 = 0;
							LOC63 = elemtype_321383(x_476126);
							annotatetype_476109(m_476250, LOC63);
							res_476329 += ((NI) 1);
						} LA62: ;
					}
				}
			}
		}
		goto LA54;
		LA56: ;
		{
			globalerror_197076((*n).info, ((NimStringDesc*) &TMP3553));
		}
		LA54: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 19):
	{
		{
			if (!((IL64(1030792151040) &((NU64)1<<((NU)((*x_476126).kind)&63U)))!=0)) goto LA68;
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA66;
		LA68: ;
		{
			globalerror_197076((*n).info, ((NimStringDesc*) &TMP3554));
		}
		LA66: ;
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		{
			if (!((IL64(35182224621574) &((NU64)1<<((NU)((*x_476126).kind)&63U)))!=0)) goto LA74;
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA72;
		LA74: ;
		{
			globalerror_197076((*n).info, ((NimStringDesc*) &TMP3555));
		}
		LA72: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			if (!((805306368 &((NU64)1<<((NU)((*x_476126).kind)&63U)))!=0)) goto LA80;
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA78;
		LA80: ;
		{
			globalerror_197076((*n).info, ((NimStringDesc*) &TMP3556));
		}
		LA78: ;
	}
	break;
	case ((NU8) 23):
	{
		{
			if (!((IL64(1125900835880960) &((NU64)1<<((NU)((*x_476126).kind)&63U)))!=0)) goto LA86;
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA84;
		LA86: ;
		{
			globalerror_197076((*n).info, ((NimStringDesc*) &TMP3557));
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

