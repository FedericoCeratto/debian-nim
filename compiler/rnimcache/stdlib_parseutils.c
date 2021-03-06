/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/ubuntu/nim-ci/Nim/lib -o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/stdlib_parseutils.o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/stdlib_parseutils.c */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Overflowerror3640 Overflowerror3640;
typedef struct Arithmeticerror3636 Arithmeticerror3636;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Basechunk29435 Basechunk29435;
typedef struct Freecell29427 Freecell29427;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Arithmeticerror3636  {
  Exception Sup;
};
struct  Overflowerror3640  {
  Arithmeticerror3636 Sup;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  Freecell29427  {
Freecell29427* next;
NI zerofield;
};
N_NIMCALL(NI, nimParseBiggestFloat)(NimStringDesc* s, NF* number, NI start);
N_NIMCALL(NI, nimParseBiggestFloat)(NimStringDesc* s, NF* number, NI start);
N_NIMCALL(NI, rawparseint_98557)(NimStringDesc* s, NI64* b, NI start);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI64, mulInt64)(NI64 a, NI64 b);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(NI64, subInt64)(NI64 a, NI64 b);
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47305*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_52601)(Cell47305* c);
N_NOINLINE(void, addzct_51417)(Cellseq47321* s, Cell47305* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
STRING_LITERAL(TMP1590, "overflow", 8);
extern TNimType NTI23269; /* ref OverflowError */
extern TNimType NTI3640; /* OverflowError */
extern Gcheap49818 gch_49855;

N_NIMCALL(NI, npuParseFloat)(NimStringDesc* s, NF* number, NI start) {
	NI result;
	NF bf;
	result = 0;
	bf = 0;
	result = nimParseBiggestFloat(s, (&bf), start);
	{
		if (!!((result == ((NI) 0)))) goto LA3;
		(*number) = bf;
	}
	LA3: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI64, subInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = 0;
	result = (NI64)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (IL64(0) <= (NI64)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (IL64(0) <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, rawparseint_98557)(NimStringDesc* s, NI64* b, NI start) {
	NI result;
	NI64 sign;
	NI i;
	result = 0;
	sign = IL64(-1);
	i = start;
	{
		NI TMP1265;
		if (!((NU8)(s->data[i]) == (NU8)(43))) goto LA3;
		TMP1265 = addInt(i, ((NI) 1));
		i = (NI)(TMP1265);
	}
	goto LA1;
	LA3: ;
	{
		NI TMP1266;
		if (!((NU8)(s->data[i]) == (NU8)(45))) goto LA6;
		TMP1266 = addInt(i, ((NI) 1));
		i = (NI)(TMP1266);
		sign = IL64(1);
	}
	goto LA1;
	LA6: ;
	LA1: ;
	{
		NI64 TMP1272;
		NI TMP1273;
		if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA10;
		(*b) = IL64(0);
		{
			while (1) {
				NI64 TMP1267;
				NI TMP1268;
				NI64 TMP1269;
				NI TMP1270;
				if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA13;
				TMP1267 = mulInt64((*b), IL64(10));
				TMP1268 = subInt(((NI) (((NU8)(s->data[i])))), ((NI) 48));
				TMP1269 = subInt64((NI64)(TMP1267), ((NI64) ((NI)(TMP1268))));
				(*b) = (NI64)(TMP1269);
				TMP1270 = addInt(i, ((NI) 1));
				i = (NI)(TMP1270);
				{
					while (1) {
						NI TMP1271;
						if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA15;
						TMP1271 = addInt(i, ((NI) 1));
						i = (NI)(TMP1271);
					} LA15: ;
				}
			} LA13: ;
		}
		TMP1272 = mulInt64((*b), sign);
		(*b) = (NI64)(TMP1272);
		TMP1273 = subInt(i, start);
		result = (NI)(TMP1273);
	}
	LA10: ;
	return result;
}

N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start) {
	NI result;
	NI64 res;
	result = 0;
	res = 0;
	result = rawparseint_98557(s, (&res), start);
	(*number) = res;
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

N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start) {
	NI result;
	NI64 res;
	result = 0;
	res = 0;
	result = npuParseBiggestInt(s, (&res), start);
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC5;
		Overflowerror3640* e_98671;
		NimStringDesc* LOC9;
		LOC3 = 0;
		LOC3 = NIM_FALSE;
		if (!(LOC3)) goto LA4;
		LOC5 = 0;
		LOC5 = (res < (IL64(-9223372036854775807) - IL64(1)));
		if (LOC5) goto LA6;
		LOC5 = (IL64(9223372036854775807) < res);
		LA6: ;
		LOC3 = LOC5;
		LA4: ;
		if (!LOC3) goto LA7;
		e_98671 = 0;
		e_98671 = (Overflowerror3640*) newObj((&NTI23269), sizeof(Overflowerror3640));
		(*e_98671).Sup.Sup.Sup.m_type = (&NTI3640);
		LOC9 = 0;
		LOC9 = (*e_98671).Sup.Sup.message; (*e_98671).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP1590));
		if (LOC9) nimGCunrefNoCycle(LOC9);
		raiseException((Exception*)e_98671, "OverflowError");
	}
	goto LA1;
	LA7: ;
	{
		if (!!((result == ((NI) 0)))) goto LA11;
		(*number) = ((NI) (res));
	}
	goto LA1;
	LA11: ;
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit000)(void) {
}

