/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY180027 TY180027;
typedef struct TY180030 TY180030;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ropeobj180006 Ropeobj180006;
typedef struct TNimObject TNimObject;
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
typedef struct TY193350 TY193350;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef NU8 Ropeserror180010;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Ropeserror180010 err0, NimStringDesc* msg0, NIM_BOOL usewarning0, void* ClEnv);
void* ClEnv;
} TY180019;
struct TY180027 {
void* Field0;
TY180030* Field1;
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
struct TY180030 {
char dummy;
};
typedef N_NIMCALL_PTR(void, Globalmarkerproc55802) (void);
typedef Ropeobj180006* TY180078[4096];
struct  TNimObject  {
TNimType* m_type;
};
struct  Ropeobj180006  {
  TNimObject Sup;
Ropeobj180006* left;
Ropeobj180006* right;
NI length;
NimStringDesc* data;
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
typedef Ropeobj180006* TY180507[1];
typedef N_CLOSURE_PTR(void, T2381377266_11) (Ropeserror180010 err0, NimStringDesc* msg0, NIM_BOOL usewarning0);
typedef N_CLOSURE_PTR(void, T2381377266_12) (Ropeserror180010 err0, NimStringDesc* msg0, NIM_BOOL usewarning0);
typedef N_CLOSURE_PTR(void, T2381377266_13) (Ropeserror180010 err0, NimStringDesc* msg0, NIM_BOOL usewarning0);
typedef N_CLOSURE_PTR(void, T2381377266_14) (Ropeserror180010 err0, NimStringDesc* msg0, NIM_BOOL usewarning0);
typedef NU8 Filemode13009;
typedef N_CLOSURE_PTR(void, T2381377266_15) (Ropeserror180010 err0, NimStringDesc* msg0, NIM_BOOL usewarning0);
typedef NIM_CHAR TY181409[1024];
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
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct TY193350 {
  TGenericSeq Sup;
  Ropeobj180006* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, T2381377266_3)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T2381377266_4)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55802 markerproc0);
N_NIMCALL(void, T2381377266_6)(void* p, NI op);
N_NIMCALL(void, T2381377266_7)(void);
N_NIMCALL(void, T2381377266_8)(void);
N_NIMCALL(Ropeobj180006*, newrope_180047_2381377266)(NimStringDesc* data0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(void, T2381377266_9)(void);
N_NIMCALL(Ropeobj180006*, HEX26_180418_2381377266)(Ropeobj180006* a0, Ropeobj180006* b0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(Ropeobj180006*, insertincache_180241_2381377266)(NimStringDesc* s0);
N_NIMCALL(NI, hash_150827_213663784)(NimStringDesc* x0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
N_NIMCALL(NI, len_180031_2381377266)(Ropeobj180006* a0);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s0, NI newlen0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
static N_INLINE(Ropeobj180006*, pop_180530_1689653243)(TY193350** s0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(Ropeobj180006*, rope_180277_2381377266)(NimStringDesc* s0);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x0);
N_NIMCALL(Ropeobj180006*, HEX26_180447_2381377266)(Ropeobj180006* a0, NimStringDesc* b0);
N_NIMCALL(void, add_180487_2381377266)(Ropeobj180006** a0, NimStringDesc* b0);
N_NIMCALL(void, add_180482_2381377266)(Ropeobj180006** a0, Ropeobj180006* b0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR x0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_79210_1689653243, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
N_NIMCALL(Ropeobj180006*, HEX25_180905_2381377266)(NimStringDesc* frmt0, Ropeobj180006** args0, NI args0Len0);
N_NIMCALL(NIM_BOOL, open_14803_1689653243)(FILE** f0, NimStringDesc* filename0, Filemode13009 mode0, NI bufsize0);
N_NIMCALL(void, writerope_180822_2381377266)(FILE* f0, Ropeobj180006* r0);
N_NIMCALL(void, write_14891_1689653243)(FILE* f0, NimStringDesc* s0);
N_NIMCALL(void, close_14853_1689653243)(FILE* f0);
N_NIMCALL(NIM_BOOL, equalsfile_181503_2381377266)(Ropeobj180006* r0, NimStringDesc* filename0);
N_NIMCALL(NIM_BOOL, equalsfile_181403_2381377266)(Ropeobj180006* r0, FILE* f0);
N_NIMCALL(NI, readbuffer_14956_1689653243)(FILE* f0, void* buffer0, NI len0);
N_NIMCALL(void, writerope_180836_2381377266)(Ropeobj180006* head0, NimStringDesc* filename0, NIM_BOOL usewarning0);
STRING_LITERAL(T2381377266_10, "$", 1);
TY180019 errorhandler_180024_2381377266;
TNimType NTI180019; /* (pointer, ref tuple[]) */
extern TNimType NTI142; /* pointer */
TNimType NTI180030; /* tuple[] */
TNimType NTI180029; /* ref tuple[] */
TY180078 cache_180079_2381377266;
extern TNimType NTI3608; /* RootObj */
TNimType NTI180006; /* RopeObj */
extern TNimType NTI104; /* int */
extern TNimType NTI138; /* string */
TNimType NTI180004; /* Rope */
TNimType NTI180078; /* array[0..4095, Rope] */
NI gcachetries_180238_2381377266;
NI gcachemisses_180239_2381377266;
NI gcacheinttries_180240_2381377266;
Ropeobj180006* rnl_180903_2381377266;
extern Gcheap49818 gch_49858_1689653243;
extern NimStringDesc* tnl_178644_4151366050;
Ropeobj180006* softrnl_180904_2381377266;
extern TNimType NTI193350; /* seq[Rope] */
N_NIMCALL(void, T2381377266_3)(void* p, NI op) {
	TY180030* a;
	a = (TY180030*)p;
}
N_NIMCALL(void, T2381377266_4)(void) {
	nimGCvisit((void*)errorhandler_180024_2381377266.ClEnv, 0);
}
N_NIMCALL(void, T2381377266_6)(void* p, NI op) {
	Ropeobj180006* a;
	a = (Ropeobj180006*)p;
	nimGCvisit((void*)(*a).left, op);
	nimGCvisit((void*)(*a).right, op);
	nimGCvisit((void*)(*a).data, op);
}
N_NIMCALL(void, T2381377266_7)(void) {
	NI LOC1;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 4096; LOC1++) {
	nimGCvisit((void*)cache_180079_2381377266[LOC1], 0);
	}
}
N_NIMCALL(void, T2381377266_8)(void) {
	nimGCvisit((void*)rnl_180903_2381377266, 0);
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

N_NIMCALL(Ropeobj180006*, newrope_180047_2381377266)(NimStringDesc* data0) {
	Ropeobj180006* result0;
	result0 = (Ropeobj180006*)0;
	result0 = (Ropeobj180006*) newObj((&NTI180004), sizeof(Ropeobj180006));
	(*result0).Sup.m_type = (&NTI180006);
	{
		NimStringDesc* LOC5;
		if (!!((data0 == NIM_NIL))) goto LA3;
		(*result0).length = (data0 ? data0->Sup.len : 0);
		LOC5 = (NimStringDesc*)0;
		LOC5 = (*result0).data; (*result0).data = copyStringRC1(data0);
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	LA3: ;
	return result0;
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
N_NIMCALL(void, T2381377266_9)(void) {
	nimGCvisit((void*)softrnl_180904_2381377266, 0);
}

N_NIMCALL(Ropeobj180006*, HEX26_180418_2381377266)(Ropeobj180006* a0, Ropeobj180006* b0) {
	Ropeobj180006* result0;
	result0 = (Ropeobj180006*)0;
	{
		if (!(a0 == NIM_NIL)) goto LA3;
		result0 = b0;
	}
	goto LA1;
	LA3: ;
	{
		if (!(b0 == NIM_NIL)) goto LA6;
		result0 = a0;
	}
	goto LA1;
	LA6: ;
	{
		result0 = newrope_180047_2381377266(NIM_NIL);
		(*result0).length = (NI)((*a0).length + (*b0).length);
		asgnRefNoCycle((void**) (&(*result0).left), a0);
		asgnRefNoCycle((void**) (&(*result0).right), b0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(void, add_180482_2381377266)(Ropeobj180006** a0, Ropeobj180006* b0) {
	unsureAsgnRef((void**) (&(*a0)), HEX26_180418_2381377266((*a0), b0));
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

N_NIMCALL(Ropeobj180006*, insertincache_180241_2381377266)(NimStringDesc* s0) {
	Ropeobj180006* result0;
	NI h0;
	NI LOC1;
	result0 = (Ropeobj180006*)0;
	gcachetries_180238_2381377266 += ((NI) 1);
	LOC1 = (NI)0;
	LOC1 = hash_150827_213663784(s0);
	h0 = (NI)(LOC1 & ((NI) 4095));
	result0 = cache_180079_2381377266[(h0)- 0];
	{
		NIM_BOOL LOC4;
		LOC4 = (NIM_BOOL)0;
		LOC4 = result0 == 0;
		if (LOC4) goto LA5;
		LOC4 = !(eqStrings((*result0).data, s0));
		LA5: ;
		if (!LOC4) goto LA6;
		gcachemisses_180239_2381377266 += ((NI) 1);
		result0 = newrope_180047_2381377266(s0);
		asgnRefNoCycle((void**) (&cache_180079_2381377266[(h0)- 0]), result0);
	}
	LA6: ;
	return result0;
}

N_NIMCALL(Ropeobj180006*, rope_180277_2381377266)(NimStringDesc* s0) {
	Ropeobj180006* result0;
	result0 = (Ropeobj180006*)0;
	{
		if (!((s0 ? s0->Sup.len : 0) == ((NI) 0))) goto LA3;
		result0 = NIM_NIL;
	}
	goto LA1;
	LA3: ;
	{
		result0 = insertincache_180241_2381377266(s0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NI, len_180031_2381377266)(Ropeobj180006* a0) {
	NI result0;
	result0 = (NI)0;
	{
		if (!(a0 == NIM_NIL)) goto LA3;
		result0 = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result0 = (*a0).length;
	}
	LA1: ;
	return result0;
}

static N_INLINE(Ropeobj180006*, pop_180530_1689653243)(TY193350** s0) {
	Ropeobj180006* result0;
	NI L0;
	result0 = (Ropeobj180006*)0;
	L0 = (NI)(((*s0) ? (*s0)->Sup.len : 0) - ((NI) 1));
	result0 = (*s0)->data[L0];
	(*s0) = (TY193350*) setLengthSeq(&((*s0))->Sup, sizeof(Ropeobj180006*), ((NI) (L0)));
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

N_NIMCALL(NimStringDesc*, HEX24_180856_2381377266)(Ropeobj180006* r0) {
	NimStringDesc* result0;
	NI LOC1;
	result0 = (NimStringDesc*)0;
	LOC1 = (NI)0;
	LOC1 = len_180031_2381377266(r0);
	result0 = mnewString(((NI) (LOC1)));
	result0 = setLengthStr(result0, ((NI) 0));
	{
		NimStringDesc* s_180860_2381377266;
		s_180860_2381377266 = (NimStringDesc*)0;
		{
			TY193350* stack_180865_2381377266;
			TY180507 LOC7;
			if (!!((r0 == NIM_NIL))) goto LA5;
			stack_180865_2381377266 = (TY193350*) newSeq((&NTI193350), 1);
			memset((void*)LOC7, 0, sizeof(LOC7));
			LOC7[0] = r0;
			asgnRefNoCycle((void**) (&stack_180865_2381377266->data[0]), LOC7[0]);
			{
				while (1) {
					Ropeobj180006* it_180867_2381377266;
					if (!(((NI) 0) < (stack_180865_2381377266 ? stack_180865_2381377266->Sup.len : 0))) goto LA9;
					it_180867_2381377266 = pop_180530_1689653243((&stack_180865_2381377266));
					{
						while (1) {
							if (!(*it_180867_2381377266).data == 0) goto LA11;
							stack_180865_2381377266 = (TY193350*) incrSeqV2(&(stack_180865_2381377266)->Sup, sizeof(Ropeobj180006*));
							asgnRefNoCycle((void**) (&stack_180865_2381377266->data[stack_180865_2381377266->Sup.len]), (*it_180867_2381377266).right);
							++stack_180865_2381377266->Sup.len;
							it_180867_2381377266 = (*it_180867_2381377266).left;
						} LA11: ;
					}
					s_180860_2381377266 = (*it_180867_2381377266).data;
					result0 = resizeString(result0, s_180860_2381377266->Sup.len + 0);
appendString(result0, s_180860_2381377266);
				} LA9: ;
			}
		}
		LA5: ;
	}
	return result0;
}

N_NIMCALL(Ropeobj180006*, rope_180401_2381377266)(NI64 i0) {
	Ropeobj180006* result0;
	NimStringDesc* LOC1;
	result0 = (Ropeobj180006*)0;
	gcacheinttries_180240_2381377266 += ((NI) 1);
	LOC1 = (NimStringDesc*)0;
	LOC1 = nimInt64ToStr(i0);
	result0 = rope_180277_2381377266(LOC1);
	return result0;
}

N_NIMCALL(Ropeobj180006*, HEX26_180447_2381377266)(Ropeobj180006* a0, NimStringDesc* b0) {
	Ropeobj180006* result0;
	Ropeobj180006* LOC1;
	result0 = (Ropeobj180006*)0;
	LOC1 = (Ropeobj180006*)0;
	LOC1 = rope_180277_2381377266(b0);
	result0 = HEX26_180418_2381377266(a0, LOC1);
	return result0;
}

N_NIMCALL(void, add_180487_2381377266)(Ropeobj180006** a0, NimStringDesc* b0) {
	unsureAsgnRef((void**) (&(*a0)), HEX26_180447_2381377266((*a0), b0));
}

N_NIMCALL(Ropeobj180006*, HEX25_180905_2381377266)(NimStringDesc* frmt0, Ropeobj180006** args0, NI args0Len0) {
	Ropeobj180006* result0;
	NI i0;
	NI length0;
	NI num0;
	result0 = (Ropeobj180006*)0;
	i0 = ((NI) 0);
	length0 = (frmt0 ? frmt0->Sup.len : 0);
	result0 = NIM_NIL;
	num0 = ((NI) 0);
	{
		while (1) {
			NI start0;
			if (!(i0 < length0)) goto LA2;
			{
				if (!((NU8)(frmt0->data[i0]) == (NU8)(36))) goto LA5;
				i0 += ((NI) 1);
				switch (((NU8)(frmt0->data[i0]))) {
				case 36:
				{
					add_180487_2381377266(&result0, ((NimStringDesc*) &T2381377266_10));
					i0 += ((NI) 1);
				}
				break;
				case 35:
				{
					i0 += ((NI) 1);
					add_180482_2381377266(&result0, args0[num0]);
					num0 += ((NI) 1);
				}
				break;
				case 48 ... 57:
				{
					NI j0;
					j0 = ((NI) 0);
					{
						while (1) {
							j0 = (NI)((NI)((NI)(j0 * ((NI) 10)) + ((NI) (((NU8)(frmt0->data[i0]))))) - ((NI) 48));
							i0 += ((NI) 1);
							{
								if (!!((((NU8)(frmt0->data[i0])) >= ((NU8)(48)) && ((NU8)(frmt0->data[i0])) <= ((NU8)(57))))) goto LA14;
								goto LA10;
							}
							LA14: ;
						}
					} LA10: ;
					num0 = j0;
					{
						NimStringDesc* LOC20;
						if (!((NI)((args0Len0-1) + ((NI) 1)) < j0)) goto LA18;
						LOC20 = (NimStringDesc*)0;
						LOC20 = nimIntToStr(j0);
						errorhandler_180024_2381377266.ClEnv? errorhandler_180024_2381377266.ClPrc(((Ropeserror180010) 1), LOC20, NIM_FALSE, errorhandler_180024_2381377266.ClEnv):((T2381377266_11)(errorhandler_180024_2381377266.ClPrc))(((Ropeserror180010) 1), LOC20, NIM_FALSE);
					}
					goto LA16;
					LA18: ;
					{
						add_180482_2381377266(&result0, args0[(NI)(j0 - ((NI) 1))]);
					}
					LA16: ;
				}
				break;
				case 123:
				{
					NI j0;
					i0 += ((NI) 1);
					j0 = ((NI) 0);
					{
						while (1) {
							if (!(((NU8)(frmt0->data[i0])) >= ((NU8)(48)) && ((NU8)(frmt0->data[i0])) <= ((NU8)(57)))) goto LA24;
							j0 = (NI)((NI)((NI)(j0 * ((NI) 10)) + ((NI) (((NU8)(frmt0->data[i0]))))) - ((NI) 48));
							i0 += ((NI) 1);
						} LA24: ;
					}
					num0 = j0;
					{
						if (!((NU8)(frmt0->data[i0]) == (NU8)(125))) goto LA27;
						i0 += ((NI) 1);
					}
					goto LA25;
					LA27: ;
					{
						NimStringDesc* LOC30;
						LOC30 = (NimStringDesc*)0;
						LOC30 = nimCharToStr(frmt0->data[i0]);
						errorhandler_180024_2381377266.ClEnv? errorhandler_180024_2381377266.ClPrc(((Ropeserror180010) 1), LOC30, NIM_FALSE, errorhandler_180024_2381377266.ClEnv):((T2381377266_12)(errorhandler_180024_2381377266.ClPrc))(((Ropeserror180010) 1), LOC30, NIM_FALSE);
					}
					LA25: ;
					{
						NimStringDesc* LOC35;
						if (!((NI)((args0Len0-1) + ((NI) 1)) < j0)) goto LA33;
						LOC35 = (NimStringDesc*)0;
						LOC35 = nimIntToStr(j0);
						errorhandler_180024_2381377266.ClEnv? errorhandler_180024_2381377266.ClPrc(((Ropeserror180010) 1), LOC35, NIM_FALSE, errorhandler_180024_2381377266.ClEnv):((T2381377266_13)(errorhandler_180024_2381377266.ClPrc))(((Ropeserror180010) 1), LOC35, NIM_FALSE);
					}
					goto LA31;
					LA33: ;
					{
						add_180482_2381377266(&result0, args0[(NI)(j0 - ((NI) 1))]);
					}
					LA31: ;
				}
				break;
				case 110:
				{
					add_180482_2381377266(&result0, softrnl_180904_2381377266);
					i0 += ((NI) 1);
				}
				break;
				case 78:
				{
					add_180482_2381377266(&result0, rnl_180903_2381377266);
					i0 += ((NI) 1);
				}
				break;
				default:
				{
					NimStringDesc* LOC40;
					LOC40 = (NimStringDesc*)0;
					LOC40 = nimCharToStr(frmt0->data[i0]);
					errorhandler_180024_2381377266.ClEnv? errorhandler_180024_2381377266.ClPrc(((Ropeserror180010) 1), LOC40, NIM_FALSE, errorhandler_180024_2381377266.ClEnv):((T2381377266_14)(errorhandler_180024_2381377266.ClPrc))(((Ropeserror180010) 1), LOC40, NIM_FALSE);
				}
				break;
				}
			}
			LA5: ;
			start0 = i0;
			{
				while (1) {
					if (!(i0 < length0)) goto LA42;
					{
						if (!!(((NU8)(frmt0->data[i0]) == (NU8)(36)))) goto LA45;
						i0 += ((NI) 1);
					}
					goto LA43;
					LA45: ;
					{
						goto LA41;
					}
					LA43: ;
				} LA42: ;
			} LA41: ;
			{
				NimStringDesc* LOC52;
				if (!(start0 <= (NI)(i0 - ((NI) 1)))) goto LA50;
				LOC52 = (NimStringDesc*)0;
				LOC52 = copyStrLast(frmt0, start0, (NI)(i0 - ((NI) 1)));
				add_180487_2381377266(&result0, LOC52);
			}
			LA50: ;
		} LA2: ;
	}
	return result0;
}

N_NIMCALL(void, addf_181205_2381377266)(Ropeobj180006** c0, NimStringDesc* frmt0, Ropeobj180006** args0, NI args0Len0) {
	Ropeobj180006* LOC1;
	LOC1 = (Ropeobj180006*)0;
	LOC1 = HEX25_180905_2381377266(frmt0, args0, args0Len0);
	add_180482_2381377266(c0, LOC1);
}

N_NIMCALL(Ropeobj180006*, HEX26_180452_2381377266)(NimStringDesc* a0, Ropeobj180006* b0) {
	Ropeobj180006* result0;
	Ropeobj180006* LOC1;
	result0 = (Ropeobj180006*)0;
	LOC1 = (Ropeobj180006*)0;
	LOC1 = rope_180277_2381377266(a0);
	result0 = HEX26_180418_2381377266(LOC1, b0);
	return result0;
}

N_NIMCALL(void, prepend_180893_2381377266)(Ropeobj180006** a0, Ropeobj180006* b0) {
	unsureAsgnRef((void**) (&(*a0)), HEX26_180418_2381377266(b0, (*a0)));
}

N_NIMCALL(void, writerope_180822_2381377266)(FILE* f0, Ropeobj180006* r0) {
	{
		NimStringDesc* s_180826_2381377266;
		s_180826_2381377266 = (NimStringDesc*)0;
		{
			TY193350* stack_180833_2381377266;
			TY180507 LOC6;
			if (!!((r0 == NIM_NIL))) goto LA4;
			stack_180833_2381377266 = (TY193350*) newSeq((&NTI193350), 1);
			memset((void*)LOC6, 0, sizeof(LOC6));
			LOC6[0] = r0;
			asgnRefNoCycle((void**) (&stack_180833_2381377266->data[0]), LOC6[0]);
			{
				while (1) {
					Ropeobj180006* it_180835_2381377266;
					if (!(((NI) 0) < (stack_180833_2381377266 ? stack_180833_2381377266->Sup.len : 0))) goto LA8;
					it_180835_2381377266 = pop_180530_1689653243((&stack_180833_2381377266));
					{
						while (1) {
							if (!(*it_180835_2381377266).data == 0) goto LA10;
							stack_180833_2381377266 = (TY193350*) incrSeqV2(&(stack_180833_2381377266)->Sup, sizeof(Ropeobj180006*));
							asgnRefNoCycle((void**) (&stack_180833_2381377266->data[stack_180833_2381377266->Sup.len]), (*it_180835_2381377266).right);
							++stack_180833_2381377266->Sup.len;
							it_180835_2381377266 = (*it_180835_2381377266).left;
						} LA10: ;
					}
					s_180826_2381377266 = (*it_180835_2381377266).data;
					write_14891_1689653243(f0, s_180826_2381377266);
				} LA8: ;
			}
		}
		LA4: ;
	}
}

N_NIMCALL(void, writerope_180836_2381377266)(Ropeobj180006* head0, NimStringDesc* filename0, NIM_BOOL usewarning0) {
	FILE* f0;
	f0 = (FILE*)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = open_14803_1689653243(&f0, filename0, ((Filemode13009) 1), ((NI) -1));
		if (!LOC3) goto LA4;
		{
			if (!!((head0 == NIM_NIL))) goto LA8;
			writerope_180822_2381377266(f0, head0);
		}
		LA8: ;
		close_14853_1689653243(f0);
	}
	goto LA1;
	LA4: ;
	{
		errorhandler_180024_2381377266.ClEnv? errorhandler_180024_2381377266.ClPrc(((Ropeserror180010) 0), filename0, usewarning0, errorhandler_180024_2381377266.ClEnv):((T2381377266_15)(errorhandler_180024_2381377266.ClPrc))(((Ropeserror180010) 0), filename0, usewarning0);
	}
	LA1: ;
}

N_NIMCALL(NIM_BOOL, equalsfile_181403_2381377266)(Ropeobj180006* r0, FILE* f0) {
	NIM_BOOL result0;
	TY181409 buf0;
	NI bpos0;
	NI blen0;
	NI btotal0;
	NI rtotal0;
	NIM_BOOL LOC26;
	NI LOC27;
{	result0 = (NIM_BOOL)0;
	memset((void*)buf0, 0, sizeof(buf0));
	bpos0 = ((NI) 1024);
	blen0 = ((NI) 1024);
	btotal0 = ((NI) 0);
	rtotal0 = ((NI) 0);
	{
		NimStringDesc* s_181433_2381377266;
		s_181433_2381377266 = (NimStringDesc*)0;
		{
			TY193350* stack_181500_2381377266;
			TY180507 LOC6;
			if (!!((r0 == NIM_NIL))) goto LA4;
			stack_181500_2381377266 = (TY193350*) newSeq((&NTI193350), 1);
			memset((void*)LOC6, 0, sizeof(LOC6));
			LOC6[0] = r0;
			asgnRefNoCycle((void**) (&stack_181500_2381377266->data[0]), LOC6[0]);
			{
				while (1) {
					Ropeobj180006* it_181502_2381377266;
					NI spos0;
					NI slen0;
					if (!(((NI) 0) < (stack_181500_2381377266 ? stack_181500_2381377266->Sup.len : 0))) goto LA8;
					it_181502_2381377266 = pop_180530_1689653243((&stack_181500_2381377266));
					{
						while (1) {
							if (!(*it_181502_2381377266).data == 0) goto LA10;
							stack_181500_2381377266 = (TY193350*) incrSeqV2(&(stack_181500_2381377266)->Sup, sizeof(Ropeobj180006*));
							asgnRefNoCycle((void**) (&stack_181500_2381377266->data[stack_181500_2381377266->Sup.len]), (*it_181502_2381377266).right);
							++stack_181500_2381377266->Sup.len;
							it_181502_2381377266 = (*it_181502_2381377266).left;
						} LA10: ;
					}
					s_181433_2381377266 = (*it_181502_2381377266).data;
					spos0 = ((NI) 0);
					slen0 = (s_181433_2381377266 ? s_181433_2381377266->Sup.len : 0);
					rtotal0 += slen0;
					{
						while (1) {
							NI n0;
							if (!(spos0 < slen0)) goto LA12;
							{
								if (!(bpos0 == blen0)) goto LA15;
								bpos0 = ((NI) 0);
								blen0 = readbuffer_14956_1689653243(f0, ((void*) ((&buf0[(((NI) 0))- 0]))), ((NI) 1024));
								btotal0 += blen0;
								{
									if (!(blen0 == ((NI) 0))) goto LA19;
									result0 = NIM_FALSE;
									goto BeforeRet;
								}
								LA19: ;
							}
							LA15: ;
							n0 = (((NI)(blen0 - bpos0) <= (NI)(slen0 - spos0)) ? (NI)(blen0 - bpos0) : (NI)(slen0 - spos0));
							{
								NIM_BOOL LOC23;
								LOC23 = (NIM_BOOL)0;
								LOC23 = equalmem_7495_1689653243(((void*) ((&buf0[(bpos0)- 0]))), ((void*) ((NI)(((NI) (s_181433_2381377266->data)) + spos0))), ((NI) (n0)));
								if (!!(LOC23)) goto LA24;
								result0 = NIM_FALSE;
								goto BeforeRet;
							}
							LA24: ;
							spos0 += n0;
							bpos0 += n0;
						} LA12: ;
					}
				} LA8: ;
			}
		}
		LA4: ;
	}
	LOC26 = (NIM_BOOL)0;
	LOC27 = (NI)0;
	LOC27 = readbuffer_14956_1689653243(f0, ((void*) ((&buf0[(((NI) 0))- 0]))), ((NI) 1));
	LOC26 = (LOC27 == ((NI) 0));
	if (!(LOC26)) goto LA28;
	LOC26 = (btotal0 == rtotal0);
	LA28: ;
	result0 = LOC26;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, equalsfile_181503_2381377266)(Ropeobj180006* r0, NimStringDesc* filename0) {
	NIM_BOOL result0;
	FILE* f0;
	result0 = (NIM_BOOL)0;
	f0 = (FILE*)0;
	result0 = open_14803_1689653243(&f0, filename0, ((Filemode13009) 0), ((NI) -1));
	{
		if (!result0) goto LA3;
		result0 = equalsfile_181403_2381377266(r0, f0);
		close_14853_1689653243(f0);
	}
	LA3: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, writeropeifnotequal_181511_2381377266)(Ropeobj180006* r0, NimStringDesc* filename0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = equalsfile_181503_2381377266(r0, filename0);
		if (!!(LOC3)) goto LA4;
		writerope_180836_2381377266(r0, filename0, NIM_FALSE);
		result0 = NIM_TRUE;
	}
	goto LA1;
	LA4: ;
	{
		result0 = NIM_FALSE;
	}
	LA1: ;
	return result0;
}

N_NIMCALL(void, resetropecache_180081_2381377266)(void) {
	{
		NI i_180214_2381377266;
		NI res_180219_2381377266;
		i_180214_2381377266 = (NI)0;
		res_180219_2381377266 = ((NI) 0);
		{
			while (1) {
				if (!(res_180219_2381377266 <= ((NI) 4095))) goto LA3;
				i_180214_2381377266 = ((NI) (res_180219_2381377266));
				asgnRefNoCycle((void**) (&cache_180079_2381377266[(i_180214_2381377266)- 0]), NIM_NIL);
				res_180219_2381377266 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_ropesInit000)(void) {
nimRegisterGlobalMarker(T2381377266_4);
nimRegisterGlobalMarker(T2381377266_7);
nimRegisterGlobalMarker(T2381377266_8);
nimRegisterGlobalMarker(T2381377266_9);
	gcachetries_180238_2381377266 = ((NI) 0);
	gcachemisses_180239_2381377266 = ((NI) 0);
	gcacheinttries_180240_2381377266 = ((NI) 0);
	asgnRefNoCycle((void**) (&rnl_180903_2381377266), newrope_180047_2381377266(tnl_178644_4151366050));
	asgnRefNoCycle((void**) (&softrnl_180904_2381377266), newrope_180047_2381377266(tnl_178644_4151366050));
}

NIM_EXTERNC N_NOINLINE(void, compiler_ropesDatInit000)(void) {
static TNimNode* T2381377266_2[2];
static TNimNode* T2381377266_5[4];
static TNimNode T2381377266_0[9];
NTI180019.size = sizeof(TY180027);
NTI180019.kind = 18;
NTI180019.base = 0;
NTI180019.flags = 2;
T2381377266_2[0] = &T2381377266_0[1];
T2381377266_0[1].kind = 1;
T2381377266_0[1].offset = offsetof(TY180027, Field0);
T2381377266_0[1].typ = (&NTI142);
T2381377266_0[1].name = "Field0";
T2381377266_2[1] = &T2381377266_0[2];
NTI180030.size = sizeof(TY180030);
NTI180030.kind = 18;
NTI180030.base = 0;
NTI180030.flags = 3;
T2381377266_0[3].len = 0; T2381377266_0[3].kind = 2;
NTI180030.node = &T2381377266_0[3];
NTI180029.size = sizeof(TY180030*);
NTI180029.kind = 22;
NTI180029.base = (&NTI180030);
NTI180029.flags = 2;
NTI180029.marker = T2381377266_3;
T2381377266_0[2].kind = 1;
T2381377266_0[2].offset = offsetof(TY180027, Field1);
T2381377266_0[2].typ = (&NTI180029);
T2381377266_0[2].name = "Field1";
T2381377266_0[0].len = 2; T2381377266_0[0].kind = 2; T2381377266_0[0].sons = &T2381377266_2[0];
NTI180019.node = &T2381377266_0[0];
NTI180006.size = sizeof(Ropeobj180006);
NTI180006.kind = 17;
NTI180006.base = (&NTI3608);
NTI180006.flags = 2;
T2381377266_5[0] = &T2381377266_0[5];
T2381377266_0[5].kind = 1;
T2381377266_0[5].offset = offsetof(Ropeobj180006, left);
T2381377266_0[5].typ = (&NTI180004);
T2381377266_0[5].name = "left";
T2381377266_5[1] = &T2381377266_0[6];
T2381377266_0[6].kind = 1;
T2381377266_0[6].offset = offsetof(Ropeobj180006, right);
T2381377266_0[6].typ = (&NTI180004);
T2381377266_0[6].name = "right";
T2381377266_5[2] = &T2381377266_0[7];
T2381377266_0[7].kind = 1;
T2381377266_0[7].offset = offsetof(Ropeobj180006, length);
T2381377266_0[7].typ = (&NTI104);
T2381377266_0[7].name = "length";
T2381377266_5[3] = &T2381377266_0[8];
T2381377266_0[8].kind = 1;
T2381377266_0[8].offset = offsetof(Ropeobj180006, data);
T2381377266_0[8].typ = (&NTI138);
T2381377266_0[8].name = "data";
T2381377266_0[4].len = 4; T2381377266_0[4].kind = 2; T2381377266_0[4].sons = &T2381377266_5[0];
NTI180006.node = &T2381377266_0[4];
NTI180004.size = sizeof(Ropeobj180006*);
NTI180004.kind = 22;
NTI180004.base = (&NTI180006);
NTI180004.flags = 2;
NTI180004.marker = T2381377266_6;
NTI180078.size = sizeof(TY180078);
NTI180078.kind = 16;
NTI180078.base = (&NTI180004);
NTI180078.flags = 2;
}

