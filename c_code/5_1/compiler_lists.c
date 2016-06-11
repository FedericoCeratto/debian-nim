/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tlinkedlist141016 Tlinkedlist141016;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct Cell47905 Cell47905;
typedef struct Cellseq47921 Cellseq47921;
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
typedef struct Cellset47917 Cellset47917;
typedef struct Pagedesc47913 Pagedesc47913;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tstrentry141012 Tstrentry141012;
typedef struct Basechunk30037 Basechunk30037;
typedef struct Freecell30029 Freecell30029;
struct  Tlinkedlist141016  {
Tlistentry141010* head;
Tlistentry141010* tail;
NI counter;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
};
struct  Cell47905  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47921  {
NI len;
NI cap;
Cell47905** d;
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
struct  Cellset47917  {
NI counter;
NI max;
Pagedesc47913* head;
Pagedesc47913** data;
};
struct  Gcheap50418  {
Gcstack50416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47921 zct;
Cellseq47921 decstack;
Cellseq47921 tempstack;
NI recgclock;
Memregion30085 region;
Gcstat50414 stat;
Cellset47917 marked;
Cellseq47921 additionalroots;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tstrentry141012  {
  Tlistentry141010 Sup;
NimStringDesc* data;
};
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
struct  Pagedesc47913  {
Pagedesc47913* next;
NI key;
TY30018 bits;
};
struct  Freecell30029  {
Freecell30029* next;
NI zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP49)(void* p, NI op);
N_NIMCALL(void, remove_141633_3771138726)(Tlinkedlist141016* list0, Tlistentry141010* entry0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_54019_1689653243)(Cell47905* c0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, decref_53601_1689653243)(Cell47905* c0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(void, prepend_141255_3771138726)(Tlinkedlist141016* list0, Tlistentry141010* entry0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(Tstrentry141012*, newstrentry_141232_3771138726)(NimStringDesc* data0);
N_NIMCALL(void, TMP1947)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* patha0, NimStringDesc* pathb0);
N_NIMCALL(void, append_141038_3771138726)(Tlinkedlist141016* list0, Tlistentry141010* entry0);
N_NIMCALL(NIM_BOOL, contains_141213_3771138726)(Tlinkedlist141016 list0, NimStringDesc* data0);
N_NIMCALL(void, appendstr_141244_3771138726)(Tlinkedlist141016* list0, NimStringDesc* data0);
TNimType NTI141016; /* TLinkedList */
extern TNimType NTI3408; /* RootObj */
TNimType NTI141010; /* TListEntry */
TNimType NTI141008; /* PListEntry */
extern TNimType NTI104; /* int */
extern Gcheap50418 gch_50458_1689653243;
TNimType NTI141012; /* TStrEntry */
extern TNimType NTI138; /* string */
TNimType NTI141014; /* PStrEntry */
N_NIMCALL(void, TMP49)(void* p, NI op) {
	Tlistentry141010* a;
	a = (Tlistentry141010*)p;
	nimGCvisit((void*)(*a).prev, op);
	nimGCvisit((void*)(*a).next, op);
}

static N_INLINE(void, incref_54019_1689653243)(Cell47905* c0) {
	(*c0).refcount = (NI)((NU32)((*c0).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47905* result0;
	result0 = (Cell47905*)0;
	result0 = ((Cell47905*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47905))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0) {
	addzct_52017_1689653243((&gch_50458_1689653243.zct), c0);
}

static N_INLINE(void, decref_53601_1689653243)(Cell47905* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell47905* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell47905*)0;
		LOC5 = usrtocell_52040_1689653243(src0);
		incref_54019_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell47905* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell47905*)0;
		LOC10 = usrtocell_52040_1689653243((*dest0));
		decref_53601_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, remove_141633_3771138726)(Tlinkedlist141016* list0, Tlistentry141010* entry0) {
	(*list0).counter -= ((NI) 1);
	{
		if (!(entry0 == (*list0).tail)) goto LA3;
		unsureAsgnRef((void**) (&(*list0).tail), (*entry0).prev);
	}
	LA3: ;
	{
		if (!(entry0 == (*list0).head)) goto LA7;
		unsureAsgnRef((void**) (&(*list0).head), (*entry0).next);
	}
	LA7: ;
	{
		if (!!(((*entry0).next == NIM_NIL))) goto LA11;
		asgnRef((void**) (&(*(*entry0).next).prev), (*entry0).prev);
	}
	LA11: ;
	{
		if (!!(((*entry0).prev == NIM_NIL))) goto LA15;
		asgnRef((void**) (&(*(*entry0).prev).next), (*entry0).next);
	}
	LA15: ;
}

N_NIMCALL(void, prepend_141255_3771138726)(Tlinkedlist141016* list0, Tlistentry141010* entry0) {
	(*list0).counter += ((NI) 1);
	asgnRef((void**) (&(*entry0).prev), NIM_NIL);
	asgnRef((void**) (&(*entry0).next), (*list0).head);
	{
		if (!!(((*list0).head == NIM_NIL))) goto LA3;
		asgnRef((void**) (&(*(*list0).head).prev), entry0);
	}
	LA3: ;
	unsureAsgnRef((void**) (&(*list0).head), entry0);
	{
		if (!((*list0).tail == NIM_NIL)) goto LA7;
		unsureAsgnRef((void**) (&(*list0).tail), entry0);
	}
	LA7: ;
}

N_NIMCALL(void, bringtofront_141693_3771138726)(Tlinkedlist141016* list0, Tlistentry141010* entry0) {
	remove_141633_3771138726(list0, entry0);
	prepend_141255_3771138726(list0, entry0);
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

N_NIMCALL(NIM_BOOL, contains_141213_3771138726)(Tlinkedlist141016 list0, NimStringDesc* data0) {
	NIM_BOOL result0;
	Tlistentry141010* it0;
{	result0 = (NIM_BOOL)0;
	it0 = list0.head;
	{
		while (1) {
			if (!!((it0 == NIM_NIL))) goto LA2;
			{
				if (!eqStrings((*((Tstrentry141012*) (it0))).data, data0)) goto LA5;
				result0 = NIM_TRUE;
				goto BeforeRet;
			}
			LA5: ;
			it0 = (*it0).next;
		} LA2: ;
	}
	}BeforeRet: ;
	return result0;
}
N_NIMCALL(void, TMP1947)(void* p, NI op) {
	Tstrentry141012* a;
	a = (Tstrentry141012*)p;
	nimGCvisit((void*)(*a).Sup.prev, op);
	nimGCvisit((void*)(*a).Sup.next, op);
	nimGCvisit((void*)(*a).data, op);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47905* c0;
	c0 = usrtocell_52040_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(Tstrentry141012*, newstrentry_141232_3771138726)(NimStringDesc* data0) {
	Tstrentry141012* result0;
	NimStringDesc* LOC1;
	result0 = (Tstrentry141012*)0;
	result0 = (Tstrentry141012*) newObj((&NTI141014), sizeof(Tstrentry141012));
	(*result0).Sup.Sup.m_type = (&NTI141012);
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*result0).data; (*result0).data = copyStringRC1(data0);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result0;
}

N_NIMCALL(void, prependstr_141413_3771138726)(Tlinkedlist141016* list0, NimStringDesc* data0) {
	Tstrentry141012* LOC1;
	Tlistentry141010* LOC2;
	LOC1 = (Tstrentry141012*)0;
	LOC1 = newstrentry_141232_3771138726(data0);
	LOC2 = (Tlistentry141010*)0;
	LOC2 = &LOC1->Sup;
	prepend_141255_3771138726(list0, LOC2);
}

N_NIMCALL(void, excludepath_141801_3771138726)(Tlinkedlist141016* list0, NimStringDesc* data0) {
	Tlistentry141010* it0;
	it0 = (*list0).head;
	{
		while (1) {
			Tlistentry141010* nxt0;
			if (!!((it0 == NIM_NIL))) goto LA2;
			nxt0 = (*it0).next;
			{
				NI LOC5;
				LOC5 = (NI)0;
				LOC5 = noscmpPaths((*((Tstrentry141012*) (it0))).data, data0);
				if (!(LOC5 == ((NI) 0))) goto LA6;
				remove_141633_3771138726(list0, it0);
			}
			LA6: ;
			it0 = nxt0;
		} LA2: ;
	}
}

N_NIMCALL(void, append_141038_3771138726)(Tlinkedlist141016* list0, Tlistentry141010* entry0) {
	(*list0).counter += ((NI) 1);
	asgnRef((void**) (&(*entry0).next), NIM_NIL);
	asgnRef((void**) (&(*entry0).prev), (*list0).tail);
	{
		if (!!(((*list0).tail == NIM_NIL))) goto LA3;
		asgnRef((void**) (&(*(*list0).tail).next), entry0);
	}
	LA3: ;
	unsureAsgnRef((void**) (&(*list0).tail), entry0);
	{
		if (!((*list0).head == NIM_NIL)) goto LA7;
		unsureAsgnRef((void**) (&(*list0).head), entry0);
	}
	LA7: ;
}

N_NIMCALL(void, appendstr_141244_3771138726)(Tlinkedlist141016* list0, NimStringDesc* data0) {
	Tstrentry141012* LOC1;
	Tlistentry141010* LOC2;
	LOC1 = (Tstrentry141012*)0;
	LOC1 = newstrentry_141232_3771138726(data0);
	LOC2 = (Tlistentry141010*)0;
	LOC2 = &LOC1->Sup;
	append_141038_3771138726(list0, LOC2);
}

N_NIMCALL(void, initlinkedlist_141034_3771138726)(Tlinkedlist141016* list0) {
	(*list0).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*list0).head), NIM_NIL);
	unsureAsgnRef((void**) (&(*list0).tail), NIM_NIL);
}

N_NIMCALL(NIM_BOOL, includestr_141249_3771138726)(Tlinkedlist141016* list0, NimStringDesc* data0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = contains_141213_3771138726((*list0), data0);
		if (!LOC3) goto LA4;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA4: ;
	appendstr_141244_3771138726(list0, data0);
	}BeforeRet: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_listsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_listsDatInit000)(void) {
static TNimNode* TMP47[3];
static TNimNode* TMP48[2];
static TNimNode TMP29[8];
NTI141016.size = sizeof(Tlinkedlist141016);
NTI141016.kind = 18;
NTI141016.base = 0;
TMP47[0] = &TMP29[1];
NTI141010.size = sizeof(Tlistentry141010);
NTI141010.kind = 17;
NTI141010.base = (&NTI3408);
TMP48[0] = &TMP29[3];
TMP29[3].kind = 1;
TMP29[3].offset = offsetof(Tlistentry141010, prev);
TMP29[3].typ = (&NTI141008);
TMP29[3].name = "prev";
TMP48[1] = &TMP29[4];
TMP29[4].kind = 1;
TMP29[4].offset = offsetof(Tlistentry141010, next);
TMP29[4].typ = (&NTI141008);
TMP29[4].name = "next";
TMP29[2].len = 2; TMP29[2].kind = 2; TMP29[2].sons = &TMP48[0];
NTI141010.node = &TMP29[2];
NTI141008.size = sizeof(Tlistentry141010*);
NTI141008.kind = 22;
NTI141008.base = (&NTI141010);
NTI141008.marker = TMP49;
TMP29[1].kind = 1;
TMP29[1].offset = offsetof(Tlinkedlist141016, head);
TMP29[1].typ = (&NTI141008);
TMP29[1].name = "head";
TMP47[1] = &TMP29[5];
TMP29[5].kind = 1;
TMP29[5].offset = offsetof(Tlinkedlist141016, tail);
TMP29[5].typ = (&NTI141008);
TMP29[5].name = "tail";
TMP47[2] = &TMP29[6];
TMP29[6].kind = 1;
TMP29[6].offset = offsetof(Tlinkedlist141016, counter);
TMP29[6].typ = (&NTI104);
TMP29[6].name = "counter";
TMP29[0].len = 3; TMP29[0].kind = 2; TMP29[0].sons = &TMP47[0];
NTI141016.node = &TMP29[0];
NTI141012.size = sizeof(Tstrentry141012);
NTI141012.kind = 17;
NTI141012.base = (&NTI141010);
TMP29[7].kind = 1;
TMP29[7].offset = offsetof(Tstrentry141012, data);
TMP29[7].typ = (&NTI138);
TMP29[7].name = "data";
NTI141012.node = &TMP29[7];
NTI141014.size = sizeof(Tstrentry141012*);
NTI141014.kind = 22;
NTI141014.base = (&NTI141012);
NTI141014.marker = TMP1947;
}

