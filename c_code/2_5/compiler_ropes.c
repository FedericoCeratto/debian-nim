/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY173027 TY173027;
typedef struct TY173030 TY173030;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ropeobj173006 Ropeobj173006;
typedef struct TNimObject TNimObject;
typedef struct Cell47904 Cell47904;
typedef struct Cellseq47920 Cellseq47920;
typedef struct Gcheap50418 Gcheap50418;
typedef struct Gcstack50416 Gcstack50416;
typedef struct Memregion30085 Memregion30085;
typedef struct Smallchunk30039 Smallchunk30039;
typedef struct Llchunk30079 Llchunk30079;
typedef struct Bigchunk30041 Bigchunk30041;
typedef struct Intset30014 Intset30014;
typedef struct Trunk30010 Trunk30010;
typedef struct Avlnode30083 Avlnode30083;
typedef struct Gcstat50414 Gcstat50414;
typedef struct Cellset47916 Cellset47916;
typedef struct Pagedesc47912 Pagedesc47912;
typedef struct TY186349 TY186349;
typedef struct Basechunk30037 Basechunk30037;
typedef struct Freecell30029 Freecell30029;
typedef NU8 Ropeserror173010;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Ropeserror173010 err0, NimStringDesc* msg0, NIM_BOOL usewarning0, void* ClEnv);
void* ClEnv;
} TY173019;
struct TY173027 {
void* Field0;
TY173030* Field1;
};
typedef NU8 Tnimkind3203;
typedef NU8 Tnimtypeflag3209Set;
typedef N_NIMCALL_PTR(void, TY3289) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3203 kind;
Tnimtypeflag3209Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY173030 {
char dummy;
};
typedef N_NIMCALL_PTR(void, Globalmarkerproc56402) (void);
typedef Ropeobj173006* TY173078[4096];
struct  TNimObject  {
TNimType* m_type;
};
struct  Ropeobj173006  {
  TNimObject Sup;
Ropeobj173006* left;
Ropeobj173006* right;
NI length;
NimStringDesc* data;
};
struct  Cell47904  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47920  {
NI len;
NI cap;
Cell47904** d;
};
typedef Smallchunk30039* TY30100[512];
typedef Trunk30010* Trunkbuckets30012[256];
struct  Intset30014  {
Trunkbuckets30012 data;
};
struct  Memregion30085  {
NI minlargeobj;
NI maxlargeobj;
TY30100 freesmallchunks;
Llchunk30079* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30041* freechunkslist;
Intset30014 chunkstarts;
Avlnode30083* root;
Avlnode30083* deleted;
Avlnode30083* last;
Avlnode30083* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47916  {
NI counter;
NI max;
Pagedesc47912* head;
Pagedesc47912** data;
};
struct  Gcheap50418  {
Gcstack50416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47920 zct;
Cellseq47920 decstack;
Cellseq47920 tempstack;
NI recgclock;
Memregion30085 region;
Gcstat50414 stat;
Cellset47916 marked;
Cellseq47920 additionalroots;
};
typedef Ropeobj173006* TY173507[1];
typedef N_CLOSURE_PTR(void, TMP3936) (Ropeserror173010 err0, NimStringDesc* msg0, NIM_BOOL usewarning0);
typedef N_CLOSURE_PTR(void, TMP3937) (Ropeserror173010 err0, NimStringDesc* msg0, NIM_BOOL usewarning0);
typedef N_CLOSURE_PTR(void, TMP3938) (Ropeserror173010 err0, NimStringDesc* msg0, NIM_BOOL usewarning0);
typedef N_CLOSURE_PTR(void, TMP3939) (Ropeserror173010 err0, NimStringDesc* msg0, NIM_BOOL usewarning0);
typedef NU8 Filemode12409;
typedef N_CLOSURE_PTR(void, TMP4773) (Ropeserror173010 err0, NimStringDesc* msg0, NIM_BOOL usewarning0);
typedef NIM_CHAR TY174409[1024];
struct  Gcstack50416  {
Gcstack50416* prev;
Gcstack50416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30037  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30039  {
  Basechunk30037 Sup;
Smallchunk30039* next;
Smallchunk30039* prev;
Freecell30029* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30079  {
NI size;
NI acc;
Llchunk30079* next;
};
struct  Bigchunk30041  {
  Basechunk30037 Sup;
Bigchunk30041* next;
Bigchunk30041* prev;
NI align;
NF data;
};
typedef NI TY30018[16];
struct  Trunk30010  {
Trunk30010* next;
NI key;
TY30018 bits;
};
typedef Avlnode30083* TY30090[2];
struct  Avlnode30083  {
TY30090 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47912  {
Pagedesc47912* next;
NI key;
TY30018 bits;
};
struct  Freecell30029  {
Freecell30029* next;
NI zerofield;
};
struct TY186349 {
  TGenericSeq Sup;
  Ropeobj173006* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP157)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP158)();
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56402 markerproc0);
N_NIMCALL(void, TMP160)(void* p, NI op);
N_NIMCALL(void, TMP161)();
N_NIMCALL(void, TMP162)();
N_NIMCALL(Ropeobj173006*, newrope_173047_2381377266)(NimStringDesc* data0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47904*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47904* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47920* s0, Cell47904* c0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(void, TMP163)();
N_NIMCALL(Ropeobj173006*, HEX26_173418_2381377266)(Ropeobj173006* a0, Ropeobj173006* b0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(Ropeobj173006*, insertincache_173241_2381377266)(NimStringDesc* s0);
N_NIMCALL(NI, hash_143827_213663784)(NimStringDesc* x0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
N_NIMCALL(NI, len_173031_2381377266)(Ropeobj173006* a0);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s0, NI newlen0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
static N_INLINE(Ropeobj173006*, pop_173530_1689653243)(TY186349** s0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(Ropeobj173006*, HEX26_173447_2381377266)(Ropeobj173006* a0, NimStringDesc* b0);
N_NIMCALL(Ropeobj173006*, rope_173277_2381377266)(NimStringDesc* s0);
N_NIMCALL(void, add_173487_2381377266)(Ropeobj173006** a0, NimStringDesc* b0);
N_NIMCALL(void, add_173482_2381377266)(Ropeobj173006** a0, Ropeobj173006* b0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR x0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_79610_1689653243, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x0);
N_NIMCALL(Ropeobj173006*, HEX25_173905_2381377266)(NimStringDesc* frmt0, Ropeobj173006** args0, NI args0Len0);
N_NIMCALL(NIM_BOOL, open_15603_1689653243)(FILE** f0, NimStringDesc* filename0, Filemode12409 mode0, NI bufsize0);
N_NIMCALL(void, writerope_173822_2381377266)(FILE* f0, Ropeobj173006* r0);
N_NIMCALL(void, write_15689_1689653243)(FILE* f0, NimStringDesc* s0);
N_NIMCALL(NIM_BOOL, equalsfile_174483_2381377266)(Ropeobj173006* r0, NimStringDesc* filename0);
N_NIMCALL(NIM_BOOL, equalsfile_174403_2381377266)(Ropeobj173006* r0, FILE* f0);
N_NIMCALL(NI, readbuffer_15754_1689653243)(FILE* f0, void* buffer0, NI len0);
N_NIMCALL(void, writerope_173836_2381377266)(Ropeobj173006* head0, NimStringDesc* filename0, NIM_BOOL usewarning0);
STRING_LITERAL(TMP3935, "$", 1);
TY173019 errorhandler_173024_2381377266;
TNimType NTI173019; /* (pointer, ref tuple[]) */
extern TNimType NTI142; /* pointer */
TNimType NTI173030; /* tuple[] */
TNimType NTI173029; /* ref tuple[] */
TY173078 cache_173079_2381377266;
extern TNimType NTI3408; /* RootObj */
TNimType NTI173006; /* RopeObj */
extern TNimType NTI104; /* int */
extern TNimType NTI138; /* string */
TNimType NTI173004; /* Rope */
TNimType NTI173078; /* array[0..4095, Rope] */
NI gcachetries_173238_2381377266;
NI gcachemisses_173239_2381377266;
NI gcacheinttries_173240_2381377266;
Ropeobj173006* rnl_173903_2381377266;
extern Gcheap50418 gch_50458_1689653243;
extern NimStringDesc* tnl_171639_4151366050;
Ropeobj173006* softrnl_173904_2381377266;
extern TNimType NTI186349; /* seq[Rope] */
N_NIMCALL(void, TMP157)(void* p, NI op) {
	TY173030* a;
	a = (TY173030*)p;
}
N_NIMCALL(void, TMP158)() {
	nimGCvisit((void*)errorhandler_173024_2381377266.ClEnv, 0);
}
N_NIMCALL(void, TMP160)(void* p, NI op) {
	Ropeobj173006* a;
	a = (Ropeobj173006*)p;
	nimGCvisit((void*)(*a).left, op);
	nimGCvisit((void*)(*a).right, op);
	nimGCvisit((void*)(*a).data, op);
}
N_NIMCALL(void, TMP161)() {
	NI LOC1;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 4096; LOC1++) {
	nimGCvisit((void*)cache_173079_2381377266[LOC1], 0);
	}
}
N_NIMCALL(void, TMP162)() {
	nimGCvisit((void*)rnl_173903_2381377266, 0);
}

static N_INLINE(Cell47904*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47904* result0;
	result0 = (Cell47904*)0;
	result0 = ((Cell47904*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47904))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47904* c0) {
	addzct_52017_1689653243((&gch_50458_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47904* c0;
	c0 = usrtocell_52040_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(Ropeobj173006*, newrope_173047_2381377266)(NimStringDesc* data0) {
	Ropeobj173006* result0;
	result0 = (Ropeobj173006*)0;
	result0 = (Ropeobj173006*) newObj((&NTI173004), sizeof(Ropeobj173006));
	(*result0).Sup.m_type = (&NTI173006);
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
		Cell47904* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_52040_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47904* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_52040_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53201_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}
N_NIMCALL(void, TMP163)() {
	nimGCvisit((void*)softrnl_173904_2381377266, 0);
}

N_NIMCALL(Ropeobj173006*, HEX26_173418_2381377266)(Ropeobj173006* a0, Ropeobj173006* b0) {
	Ropeobj173006* result0;
	result0 = (Ropeobj173006*)0;
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
		result0 = newrope_173047_2381377266(NIM_NIL);
		(*result0).length = (NI)((*a0).length + (*b0).length);
		asgnRefNoCycle((void**) (&(*result0).left), a0);
		asgnRefNoCycle((void**) (&(*result0).right), b0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(void, add_173482_2381377266)(Ropeobj173006** a0, Ropeobj173006* b0) {
	unsureAsgnRef((void**) (&(*a0)), HEX26_173418_2381377266((*a0), b0));
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
	int LOC13;
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
	LOC13 = (int)0;
	LOC13 = memcmp(((NCSTRING) ((*a0).data)), ((NCSTRING) ((*b0).data)), (*a0).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Ropeobj173006*, insertincache_173241_2381377266)(NimStringDesc* s0) {
	Ropeobj173006* result0;
	NI h0;
	NI LOC1;
	result0 = (Ropeobj173006*)0;
	gcachetries_173238_2381377266 += ((NI) 1);
	LOC1 = (NI)0;
	LOC1 = hash_143827_213663784(s0);
	h0 = (NI)(LOC1 & ((NI) 4095));
	result0 = cache_173079_2381377266[(h0)- 0];
	{
		NIM_BOOL LOC4;
		LOC4 = (NIM_BOOL)0;
		LOC4 = result0 == 0;
		if (LOC4) goto LA5;
		LOC4 = !(eqStrings((*result0).data, s0));
		LA5: ;
		if (!LOC4) goto LA6;
		gcachemisses_173239_2381377266 += ((NI) 1);
		result0 = newrope_173047_2381377266(s0);
		asgnRefNoCycle((void**) (&cache_173079_2381377266[(h0)- 0]), result0);
	}
	LA6: ;
	return result0;
}

N_NIMCALL(Ropeobj173006*, rope_173277_2381377266)(NimStringDesc* s0) {
	Ropeobj173006* result0;
	result0 = (Ropeobj173006*)0;
	{
		if (!((s0 ? s0->Sup.len : 0) == ((NI) 0))) goto LA3;
		result0 = NIM_NIL;
	}
	goto LA1;
	LA3: ;
	{
		result0 = insertincache_173241_2381377266(s0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NI, len_173031_2381377266)(Ropeobj173006* a0) {
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

static N_INLINE(Ropeobj173006*, pop_173530_1689653243)(TY186349** s0) {
	Ropeobj173006* result0;
	NI L0;
	result0 = (Ropeobj173006*)0;
	L0 = (NI)(((*s0) ? (*s0)->Sup.len : 0) - ((NI) 1));
	result0 = (*s0)->data[L0];
	(*s0) = (TY186349*) setLengthSeq(&((*s0))->Sup, sizeof(Ropeobj173006*), ((NI) (L0)));
	return result0;
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(NimStringDesc*, HEX24_173856_2381377266)(Ropeobj173006* r0) {
	NimStringDesc* result0;
	NI LOC1;
	result0 = (NimStringDesc*)0;
	LOC1 = (NI)0;
	LOC1 = len_173031_2381377266(r0);
	result0 = mnewString(((NI) (LOC1)));
	result0 = setLengthStr(result0, ((NI) 0));
	{
		NimStringDesc* s_173860_2381377266;
		s_173860_2381377266 = (NimStringDesc*)0;
		{
			TY186349* stack_173865_2381377266;
			TY173507 LOC7;
			if (!!((r0 == NIM_NIL))) goto LA5;
			stack_173865_2381377266 = (TY186349*) newSeq((&NTI186349), 1);
			memset((void*)LOC7, 0, sizeof(LOC7));
			LOC7[0] = r0;
			asgnRefNoCycle((void**) (&stack_173865_2381377266->data[0]), LOC7[0]);
			{
				while (1) {
					Ropeobj173006* it_173867_2381377266;
					if (!(((NI) 0) < (stack_173865_2381377266 ? stack_173865_2381377266->Sup.len : 0))) goto LA9;
					it_173867_2381377266 = pop_173530_1689653243((&stack_173865_2381377266));
					{
						while (1) {
							if (!(*it_173867_2381377266).data == 0) goto LA11;
							stack_173865_2381377266 = (TY186349*) incrSeqV2(&(stack_173865_2381377266)->Sup, sizeof(Ropeobj173006*));
							asgnRefNoCycle((void**) (&stack_173865_2381377266->data[stack_173865_2381377266->Sup.len]), (*it_173867_2381377266).right);
							++stack_173865_2381377266->Sup.len;
							it_173867_2381377266 = (*it_173867_2381377266).left;
						} LA11: ;
					}
					s_173860_2381377266 = (*it_173867_2381377266).data;
					result0 = resizeString(result0, s_173860_2381377266->Sup.len + 0);
appendString(result0, s_173860_2381377266);
				} LA9: ;
			}
		}
		LA5: ;
	}
	return result0;
}

N_NIMCALL(Ropeobj173006*, HEX26_173447_2381377266)(Ropeobj173006* a0, NimStringDesc* b0) {
	Ropeobj173006* result0;
	Ropeobj173006* LOC1;
	result0 = (Ropeobj173006*)0;
	LOC1 = (Ropeobj173006*)0;
	LOC1 = rope_173277_2381377266(b0);
	result0 = HEX26_173418_2381377266(a0, LOC1);
	return result0;
}

N_NIMCALL(void, add_173487_2381377266)(Ropeobj173006** a0, NimStringDesc* b0) {
	unsureAsgnRef((void**) (&(*a0)), HEX26_173447_2381377266((*a0), b0));
}

N_NIMCALL(Ropeobj173006*, HEX25_173905_2381377266)(NimStringDesc* frmt0, Ropeobj173006** args0, NI args0Len0) {
	Ropeobj173006* result0;
	NI i0;
	NI length0;
	NI num0;
	result0 = (Ropeobj173006*)0;
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
					add_173487_2381377266(&result0, ((NimStringDesc*) &TMP3935));
					i0 += ((NI) 1);
				}
				break;
				case 35:
				{
					i0 += ((NI) 1);
					add_173482_2381377266(&result0, args0[num0]);
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
						errorhandler_173024_2381377266.ClEnv? errorhandler_173024_2381377266.ClPrc(((Ropeserror173010) 1), LOC20, NIM_FALSE, errorhandler_173024_2381377266.ClEnv):((TMP3936)(errorhandler_173024_2381377266.ClPrc))(((Ropeserror173010) 1), LOC20, NIM_FALSE);
					}
					goto LA16;
					LA18: ;
					{
						add_173482_2381377266(&result0, args0[(NI)(j0 - ((NI) 1))]);
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
						errorhandler_173024_2381377266.ClEnv? errorhandler_173024_2381377266.ClPrc(((Ropeserror173010) 1), LOC30, NIM_FALSE, errorhandler_173024_2381377266.ClEnv):((TMP3937)(errorhandler_173024_2381377266.ClPrc))(((Ropeserror173010) 1), LOC30, NIM_FALSE);
					}
					LA25: ;
					{
						NimStringDesc* LOC35;
						if (!((NI)((args0Len0-1) + ((NI) 1)) < j0)) goto LA33;
						LOC35 = (NimStringDesc*)0;
						LOC35 = nimIntToStr(j0);
						errorhandler_173024_2381377266.ClEnv? errorhandler_173024_2381377266.ClPrc(((Ropeserror173010) 1), LOC35, NIM_FALSE, errorhandler_173024_2381377266.ClEnv):((TMP3938)(errorhandler_173024_2381377266.ClPrc))(((Ropeserror173010) 1), LOC35, NIM_FALSE);
					}
					goto LA31;
					LA33: ;
					{
						add_173482_2381377266(&result0, args0[(NI)(j0 - ((NI) 1))]);
					}
					LA31: ;
				}
				break;
				case 110:
				{
					add_173482_2381377266(&result0, softrnl_173904_2381377266);
					i0 += ((NI) 1);
				}
				break;
				case 78:
				{
					add_173482_2381377266(&result0, rnl_173903_2381377266);
					i0 += ((NI) 1);
				}
				break;
				default:
				{
					NimStringDesc* LOC40;
					LOC40 = (NimStringDesc*)0;
					LOC40 = nimCharToStr(frmt0->data[i0]);
					errorhandler_173024_2381377266.ClEnv? errorhandler_173024_2381377266.ClPrc(((Ropeserror173010) 1), LOC40, NIM_FALSE, errorhandler_173024_2381377266.ClEnv):((TMP3939)(errorhandler_173024_2381377266.ClPrc))(((Ropeserror173010) 1), LOC40, NIM_FALSE);
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
				add_173487_2381377266(&result0, LOC52);
			}
			LA50: ;
		} LA2: ;
	}
	return result0;
}

N_NIMCALL(Ropeobj173006*, rope_173401_2381377266)(NI64 i0) {
	Ropeobj173006* result0;
	NimStringDesc* LOC1;
	result0 = (Ropeobj173006*)0;
	gcacheinttries_173240_2381377266 += ((NI) 1);
	LOC1 = (NimStringDesc*)0;
	LOC1 = nimInt64ToStr(i0);
	result0 = rope_173277_2381377266(LOC1);
	return result0;
}

N_NIMCALL(void, addf_174205_2381377266)(Ropeobj173006** c0, NimStringDesc* frmt0, Ropeobj173006** args0, NI args0Len0) {
	Ropeobj173006* LOC1;
	LOC1 = (Ropeobj173006*)0;
	LOC1 = HEX25_173905_2381377266(frmt0, args0, args0Len0);
	add_173482_2381377266(c0, LOC1);
}

N_NIMCALL(Ropeobj173006*, HEX26_173452_2381377266)(NimStringDesc* a0, Ropeobj173006* b0) {
	Ropeobj173006* result0;
	Ropeobj173006* LOC1;
	result0 = (Ropeobj173006*)0;
	LOC1 = (Ropeobj173006*)0;
	LOC1 = rope_173277_2381377266(a0);
	result0 = HEX26_173418_2381377266(LOC1, b0);
	return result0;
}

N_NIMCALL(void, prepend_173893_2381377266)(Ropeobj173006** a0, Ropeobj173006* b0) {
	unsureAsgnRef((void**) (&(*a0)), HEX26_173418_2381377266(b0, (*a0)));
}

N_NIMCALL(void, writerope_173822_2381377266)(FILE* f0, Ropeobj173006* r0) {
	{
		NimStringDesc* s_173826_2381377266;
		s_173826_2381377266 = (NimStringDesc*)0;
		{
			TY186349* stack_173833_2381377266;
			TY173507 LOC6;
			if (!!((r0 == NIM_NIL))) goto LA4;
			stack_173833_2381377266 = (TY186349*) newSeq((&NTI186349), 1);
			memset((void*)LOC6, 0, sizeof(LOC6));
			LOC6[0] = r0;
			asgnRefNoCycle((void**) (&stack_173833_2381377266->data[0]), LOC6[0]);
			{
				while (1) {
					Ropeobj173006* it_173835_2381377266;
					if (!(((NI) 0) < (stack_173833_2381377266 ? stack_173833_2381377266->Sup.len : 0))) goto LA8;
					it_173835_2381377266 = pop_173530_1689653243((&stack_173833_2381377266));
					{
						while (1) {
							if (!(*it_173835_2381377266).data == 0) goto LA10;
							stack_173833_2381377266 = (TY186349*) incrSeqV2(&(stack_173833_2381377266)->Sup, sizeof(Ropeobj173006*));
							asgnRefNoCycle((void**) (&stack_173833_2381377266->data[stack_173833_2381377266->Sup.len]), (*it_173835_2381377266).right);
							++stack_173833_2381377266->Sup.len;
							it_173835_2381377266 = (*it_173835_2381377266).left;
						} LA10: ;
					}
					s_173826_2381377266 = (*it_173835_2381377266).data;
					write_15689_1689653243(f0, s_173826_2381377266);
				} LA8: ;
			}
		}
		LA4: ;
	}
}

N_NIMCALL(void, writerope_173836_2381377266)(Ropeobj173006* head0, NimStringDesc* filename0, NIM_BOOL usewarning0) {
	FILE* f0;
	f0 = (FILE*)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = open_15603_1689653243(&f0, filename0, ((Filemode12409) 1), ((NI) -1));
		if (!LOC3) goto LA4;
		{
			if (!!((head0 == NIM_NIL))) goto LA8;
			writerope_173822_2381377266(f0, head0);
		}
		LA8: ;
		fclose(f0);
	}
	goto LA1;
	LA4: ;
	{
		errorhandler_173024_2381377266.ClEnv? errorhandler_173024_2381377266.ClPrc(((Ropeserror173010) 0), filename0, usewarning0, errorhandler_173024_2381377266.ClEnv):((TMP4773)(errorhandler_173024_2381377266.ClPrc))(((Ropeserror173010) 0), filename0, usewarning0);
	}
	LA1: ;
}

N_NIMCALL(NIM_BOOL, equalsfile_174403_2381377266)(Ropeobj173006* r0, FILE* f0) {
	NIM_BOOL result0;
	TY174409 buf0;
	NI bpos0;
	NI blen0;
	NI LOC26;
{	result0 = (NIM_BOOL)0;
	memset((void*)buf0, 0, sizeof(buf0));
	bpos0 = ((NI) 1024);
	blen0 = ((NI) 1024);
	{
		NimStringDesc* s_174431_2381377266;
		s_174431_2381377266 = (NimStringDesc*)0;
		{
			TY186349* stack_174480_2381377266;
			TY173507 LOC6;
			if (!!((r0 == NIM_NIL))) goto LA4;
			stack_174480_2381377266 = (TY186349*) newSeq((&NTI186349), 1);
			memset((void*)LOC6, 0, sizeof(LOC6));
			LOC6[0] = r0;
			asgnRefNoCycle((void**) (&stack_174480_2381377266->data[0]), LOC6[0]);
			{
				while (1) {
					Ropeobj173006* it_174482_2381377266;
					NI spos0;
					NI slen0;
					if (!(((NI) 0) < (stack_174480_2381377266 ? stack_174480_2381377266->Sup.len : 0))) goto LA8;
					it_174482_2381377266 = pop_173530_1689653243((&stack_174480_2381377266));
					{
						while (1) {
							if (!(*it_174482_2381377266).data == 0) goto LA10;
							stack_174480_2381377266 = (TY186349*) incrSeqV2(&(stack_174480_2381377266)->Sup, sizeof(Ropeobj173006*));
							asgnRefNoCycle((void**) (&stack_174480_2381377266->data[stack_174480_2381377266->Sup.len]), (*it_174482_2381377266).right);
							++stack_174480_2381377266->Sup.len;
							it_174482_2381377266 = (*it_174482_2381377266).left;
						} LA10: ;
					}
					s_174431_2381377266 = (*it_174482_2381377266).data;
					spos0 = ((NI) 0);
					slen0 = (s_174431_2381377266 ? s_174431_2381377266->Sup.len : 0);
					{
						while (1) {
							NI n0;
							if (!(spos0 < slen0)) goto LA12;
							{
								if (!(bpos0 == blen0)) goto LA15;
								bpos0 = ((NI) 0);
								blen0 = readbuffer_15754_1689653243(f0, ((void*) ((&buf0[(((NI) 0))- 0]))), ((NI) 1024));
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
								LOC23 = equalMem(((void*) ((&buf0[(bpos0)- 0]))), ((void*) ((NI)(((NI) (s_174431_2381377266->data)) + spos0))), ((NI) (n0)));
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
	LOC26 = (NI)0;
	LOC26 = readbuffer_15754_1689653243(f0, ((void*) ((&buf0[(((NI) 0))- 0]))), ((NI) 1));
	result0 = (LOC26 == ((NI) 0));
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, equalsfile_174483_2381377266)(Ropeobj173006* r0, NimStringDesc* filename0) {
	NIM_BOOL result0;
	FILE* f0;
	result0 = (NIM_BOOL)0;
	f0 = (FILE*)0;
	result0 = open_15603_1689653243(&f0, filename0, ((Filemode12409) 0), ((NI) -1));
	{
		if (!result0) goto LA3;
		result0 = equalsfile_174403_2381377266(r0, f0);
		fclose(f0);
	}
	LA3: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, writeropeifnotequal_174491_2381377266)(Ropeobj173006* r0, NimStringDesc* filename0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = equalsfile_174483_2381377266(r0, filename0);
		if (!!(LOC3)) goto LA4;
		writerope_173836_2381377266(r0, filename0, NIM_FALSE);
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

N_NIMCALL(void, resetropecache_173081_2381377266)(void) {
	{
		NI i_173214_2381377266;
		NI res_173219_2381377266;
		i_173214_2381377266 = (NI)0;
		res_173219_2381377266 = ((NI) 0);
		{
			while (1) {
				if (!(res_173219_2381377266 <= ((NI) 4095))) goto LA3;
				i_173214_2381377266 = ((NI) (res_173219_2381377266));
				asgnRefNoCycle((void**) (&cache_173079_2381377266[(i_173214_2381377266)- 0]), NIM_NIL);
				res_173219_2381377266 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_ropesInit000)(void) {
nimRegisterGlobalMarker(TMP158);
nimRegisterGlobalMarker(TMP161);
	gcachetries_173238_2381377266 = ((NI) 0);
	gcachemisses_173239_2381377266 = ((NI) 0);
	gcacheinttries_173240_2381377266 = ((NI) 0);
nimRegisterGlobalMarker(TMP162);
	asgnRefNoCycle((void**) (&rnl_173903_2381377266), newrope_173047_2381377266(tnl_171639_4151366050));
nimRegisterGlobalMarker(TMP163);
	asgnRefNoCycle((void**) (&softrnl_173904_2381377266), newrope_173047_2381377266(tnl_171639_4151366050));
}

NIM_EXTERNC N_NOINLINE(void, compiler_ropesDatInit000)(void) {
static TNimNode* TMP156[2];
static TNimNode* TMP159[4];
static TNimNode TMP82[9];
NTI173019.size = sizeof(TY173027);
NTI173019.kind = 18;
NTI173019.base = 0;
NTI173019.flags = 2;
TMP156[0] = &TMP82[1];
TMP82[1].kind = 1;
TMP82[1].offset = offsetof(TY173027, Field0);
TMP82[1].typ = (&NTI142);
TMP82[1].name = "Field0";
TMP156[1] = &TMP82[2];
NTI173030.size = sizeof(TY173030);
NTI173030.kind = 18;
NTI173030.base = 0;
NTI173030.flags = 3;
TMP82[3].len = 0; TMP82[3].kind = 2;
NTI173030.node = &TMP82[3];
NTI173029.size = sizeof(TY173030*);
NTI173029.kind = 22;
NTI173029.base = (&NTI173030);
NTI173029.flags = 2;
NTI173029.marker = TMP157;
TMP82[2].kind = 1;
TMP82[2].offset = offsetof(TY173027, Field1);
TMP82[2].typ = (&NTI173029);
TMP82[2].name = "Field1";
TMP82[0].len = 2; TMP82[0].kind = 2; TMP82[0].sons = &TMP156[0];
NTI173019.node = &TMP82[0];
NTI173006.size = sizeof(Ropeobj173006);
NTI173006.kind = 17;
NTI173006.base = (&NTI3408);
NTI173006.flags = 2;
TMP159[0] = &TMP82[5];
TMP82[5].kind = 1;
TMP82[5].offset = offsetof(Ropeobj173006, left);
TMP82[5].typ = (&NTI173004);
TMP82[5].name = "left";
TMP159[1] = &TMP82[6];
TMP82[6].kind = 1;
TMP82[6].offset = offsetof(Ropeobj173006, right);
TMP82[6].typ = (&NTI173004);
TMP82[6].name = "right";
TMP159[2] = &TMP82[7];
TMP82[7].kind = 1;
TMP82[7].offset = offsetof(Ropeobj173006, length);
TMP82[7].typ = (&NTI104);
TMP82[7].name = "length";
TMP159[3] = &TMP82[8];
TMP82[8].kind = 1;
TMP82[8].offset = offsetof(Ropeobj173006, data);
TMP82[8].typ = (&NTI138);
TMP82[8].name = "data";
TMP82[4].len = 4; TMP82[4].kind = 2; TMP82[4].sons = &TMP159[0];
NTI173006.node = &TMP82[4];
NTI173004.size = sizeof(Ropeobj173006*);
NTI173004.kind = 22;
NTI173004.base = (&NTI173006);
NTI173004.flags = 2;
NTI173004.marker = TMP160;
NTI173078.size = sizeof(TY173078);
NTI173078.kind = 16;
NTI173078.base = (&NTI173004);
NTI173078.flags = 2;
}

