/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tlistentry127022 tlistentry127022;
typedef struct TNimObject TNimObject;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tcell44935 tcell44935;
typedef struct tcellset44947 tcellset44947;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellseq44951 tcellseq44951;
typedef struct tpagedesc44943 tpagedesc44943;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tstrentry127024 tstrentry127024;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlinkedlist127028  {
tlistentry127022* Head;
tlistentry127022* Tail;
NI Counter;
};
struct  tcell44935  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44951  {
NI Len;
NI Cap;
tcell44935** D;
};
struct  tcellset44947  {
NI Counter;
NI Max;
tpagedesc44943* Head;
tpagedesc44943** Data;
};
typedef tsmallchunk26440* TY27222[512];
typedef ttrunk26413* ttrunkbuckets26415[256];
struct  tintset26417  {
ttrunkbuckets26415 Data;
};
struct  tmemregion27210  {
NI Minlargeobj;
NI Maxlargeobj;
TY27222 Freesmallchunks;
tllchunk27204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26442* Freechunkslist;
tintset26417 Chunkstarts;
tavlnode27208* Root;
tavlnode27208* Deleted;
tavlnode27208* Last;
tavlnode27208* Freeavlnodes;
};
struct  tgcstat47014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44951 Zct;
tcellseq44951 Decstack;
tcellset44947 Cycleroots;
tcellseq44951 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tstrentry127024  {
  tlistentry127022 Sup;
NimStringDesc* Data;
};
typedef NI TY26420[8];
struct  tpagedesc44943  {
tpagedesc44943* Next;
NI Key;
TY26420 Bits;
};
struct  tbasechunk26438  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26440  {
  tbasechunk26438 Sup;
tsmallchunk26440* Next;
tsmallchunk26440* Prev;
tfreecell26430* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27204  {
NI Size;
NI Acc;
tllchunk27204* Next;
};
struct  tbigchunk26442  {
  tbasechunk26438 Sup;
tbigchunk26442* Next;
tbigchunk26442* Prev;
NI Align;
NF Data;
};
struct  ttrunk26413  {
ttrunk26413* Next;
NI Key;
TY26420 Bits;
};
typedef tavlnode27208* TY27214[2];
struct  tavlnode27208  {
TY27214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP778)(void* p, NI op);
N_NIMCALL(void, remove_127652)(tlinkedlist127028* list, tlistentry127022* entry);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51025)(tcell44935* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44935* c);
static N_INLINE(void, rtladdcycleroot_49429)(tcell44935* c);
N_NOINLINE(void, incl_45671)(tcellset44947* s, tcell44935* cell);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, decref_50604)(tcell44935* c);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(void, prepend_127309)(tlinkedlist127028* list, tlistentry127022* entry);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(tstrentry127024*, newstrentry_127260)(NimStringDesc* data);
N_NIMCALL(void, TMP1680)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* patha, NimStringDesc* pathb);
N_NIMCALL(void, append_127053)(tlinkedlist127028* list, tlistentry127022* entry);
N_NIMCALL(NIM_BOOL, contains_127224)(tlinkedlist127028* list, NimStringDesc* data);
N_NIMCALL(void, appendstr_127286)(tlinkedlist127028* list, NimStringDesc* data);
extern TNimType NTI3211; /* RootObj */
TNimType NTI127022; /* TListEntry */
TNimType NTI127020; /* PListEntry */
TNimType NTI127028; /* TLinkedList */
extern TNimType NTI108; /* int */
extern tgcheap47016 gch_47044;
TNimType NTI127024; /* TStrEntry */
extern TNimType NTI149; /* string */
TNimType NTI127026; /* PStrEntry */
N_NIMCALL(void, TMP778)(void* p, NI op) {
	tlistentry127022* a;
	a = (tlistentry127022*)p;
	nimGCvisit((void*)(*a).Prev, op);
	nimGCvisit((void*)(*a).Next, op);
}

static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44935* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_49429)(tcell44935* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_45671((&gch_47044.Cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_51025)(tcell44935* c) {
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_48667(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_49429(c);
	}
	LA4: ;
}

static N_INLINE(tcell44935*, usrtocell_48646)(void* usr) {
	tcell44935* result;
	result = 0;
	result = ((tcell44935*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44935))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44935* c) {
	addzct_48617((&gch_47044.Zct), c);
}

static N_INLINE(void, decref_50604)(tcell44935* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_48667(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_49429(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell44935* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_48646(src);
		incref_51025(LOC5);
	}
	LA3: ;
	{
		tcell44935* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_48646((*dest));
		decref_50604(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, remove_127652)(tlinkedlist127028* list, tlistentry127022* entry) {
	(*list).Counter -= 1;
	{
		if (!(entry == (*list).Tail)) goto LA3;
		unsureAsgnRef((void**) (&(*list).Tail), (*entry).Prev);
	}
	LA3: ;
	{
		if (!(entry == (*list).Head)) goto LA7;
		unsureAsgnRef((void**) (&(*list).Head), (*entry).Next);
	}
	LA7: ;
	{
		if (!!(((*entry).Next == NIM_NIL))) goto LA11;
		asgnRef((void**) (&(*(*entry).Next).Prev), (*entry).Prev);
	}
	LA11: ;
	{
		if (!!(((*entry).Prev == NIM_NIL))) goto LA15;
		asgnRef((void**) (&(*(*entry).Prev).Next), (*entry).Next);
	}
	LA15: ;
}

N_NIMCALL(void, prepend_127309)(tlinkedlist127028* list, tlistentry127022* entry) {
	(*list).Counter += 1;
	asgnRef((void**) (&(*entry).Prev), NIM_NIL);
	asgnRef((void**) (&(*entry).Next), (*list).Head);
	{
		if (!!(((*list).Head == NIM_NIL))) goto LA3;
		asgnRef((void**) (&(*(*list).Head).Prev), entry);
	}
	LA3: ;
	unsureAsgnRef((void**) (&(*list).Head), entry);
	{
		if (!((*list).Tail == NIM_NIL)) goto LA7;
		unsureAsgnRef((void**) (&(*list).Tail), entry);
	}
	LA7: ;
}

N_NIMCALL(void, bringtofront_127741)(tlinkedlist127028* list, tlistentry127022* entry) {
	remove_127652(list, entry);
	prepend_127309(list, entry);
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, contains_127224)(tlinkedlist127028* list, NimStringDesc* data) {
	NIM_BOOL result;
	tlistentry127022* it;
	result = 0;
	it = (*list).Head;
	{
		while (1) {
			if (!!((it == NIM_NIL))) goto LA2;
			{
				if (!eqStrings((*((tstrentry127024*) (it))).Data, data)) goto LA5;
				result = NIM_TRUE;
				goto BeforeRet;
			}
			LA5: ;
			it = (*it).Next;
		} LA2: ;
	}
	BeforeRet: ;
	return result;
}
N_NIMCALL(void, TMP1680)(void* p, NI op) {
	tstrentry127024* a;
	a = (tstrentry127024*)p;
	nimGCvisit((void*)(*a).Sup.Prev, op);
	nimGCvisit((void*)(*a).Sup.Next, op);
	nimGCvisit((void*)(*a).Data, op);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44935* c;
	c = usrtocell_48646(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	LA3: ;
}

N_NIMCALL(tstrentry127024*, newstrentry_127260)(NimStringDesc* data) {
	tstrentry127024* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (tstrentry127024*) newObj((&NTI127026), sizeof(tstrentry127024));
	(*result).Sup.Sup.m_type = (&NTI127024);
	LOC1 = 0;
	LOC1 = (*result).Data; (*result).Data = copyStringRC1(data);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
}

N_NIMCALL(void, prependstr_127424)(tlinkedlist127028* list, NimStringDesc* data) {
	tstrentry127024* LOC1;
	tlistentry127022* LOC2;
	LOC1 = 0;
	LOC1 = newstrentry_127260(data);
	LOC2 = 0;
	LOC2 = &LOC1->Sup;
	prepend_127309(list, LOC2);
}

N_NIMCALL(void, excludepath_127807)(tlinkedlist127028* list, NimStringDesc* data) {
	tlistentry127022* it;
	it = (*list).Head;
	{
		while (1) {
			tlistentry127022* nxt;
			if (!!((it == NIM_NIL))) goto LA2;
			nxt = (*it).Next;
			{
				NI LOC5;
				LOC5 = 0;
				LOC5 = noscmpPaths((*((tstrentry127024*) (it))).Data, data);
				if (!(LOC5 == 0)) goto LA6;
				remove_127652(list, it);
			}
			LA6: ;
			it = nxt;
		} LA2: ;
	}
}

N_NIMCALL(void, append_127053)(tlinkedlist127028* list, tlistentry127022* entry) {
	(*list).Counter += 1;
	asgnRef((void**) (&(*entry).Next), NIM_NIL);
	asgnRef((void**) (&(*entry).Prev), (*list).Tail);
	{
		if (!!(((*list).Tail == NIM_NIL))) goto LA3;
		asgnRef((void**) (&(*(*list).Tail).Next), entry);
	}
	LA3: ;
	unsureAsgnRef((void**) (&(*list).Tail), entry);
	{
		if (!((*list).Head == NIM_NIL)) goto LA7;
		unsureAsgnRef((void**) (&(*list).Head), entry);
	}
	LA7: ;
}

N_NIMCALL(void, appendstr_127286)(tlinkedlist127028* list, NimStringDesc* data) {
	tstrentry127024* LOC1;
	tlistentry127022* LOC2;
	LOC1 = 0;
	LOC1 = newstrentry_127260(data);
	LOC2 = 0;
	LOC2 = &LOC1->Sup;
	append_127053(list, LOC2);
}

N_NIMCALL(void, initlinkedlist_127043)(tlinkedlist127028* list) {
	(*list).Counter = 0;
	unsureAsgnRef((void**) (&(*list).Head), NIM_NIL);
	unsureAsgnRef((void**) (&(*list).Tail), NIM_NIL);
}

N_NIMCALL(NIM_BOOL, includestr_127297)(tlinkedlist127028* list, NimStringDesc* data) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_127224((&(*list)), data);
		if (!LOC3) goto LA4;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA4: ;
	appendstr_127286(list, data);
	BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_listsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_listsDatInit)(void) {
static TNimNode* TMP777[2];
static TNimNode* TMP970[3];
static TNimNode TMP23[8];
NTI127022.size = sizeof(tlistentry127022);
NTI127022.kind = 17;
NTI127022.base = (&NTI3211);
TMP777[0] = &TMP23[1];
NTI127020.size = sizeof(tlistentry127022*);
NTI127020.kind = 22;
NTI127020.base = (&NTI127022);
NTI127020.marker = TMP778;
TMP23[1].kind = 1;
TMP23[1].offset = offsetof(tlistentry127022, Prev);
TMP23[1].typ = (&NTI127020);
TMP23[1].name = "prev";
TMP777[1] = &TMP23[2];
TMP23[2].kind = 1;
TMP23[2].offset = offsetof(tlistentry127022, Next);
TMP23[2].typ = (&NTI127020);
TMP23[2].name = "next";
TMP23[0].len = 2; TMP23[0].kind = 2; TMP23[0].sons = &TMP777[0];
NTI127022.node = &TMP23[0];
NTI127028.size = sizeof(tlinkedlist127028);
NTI127028.kind = 18;
NTI127028.base = 0;
TMP970[0] = &TMP23[4];
TMP23[4].kind = 1;
TMP23[4].offset = offsetof(tlinkedlist127028, Head);
TMP23[4].typ = (&NTI127020);
TMP23[4].name = "head";
TMP970[1] = &TMP23[5];
TMP23[5].kind = 1;
TMP23[5].offset = offsetof(tlinkedlist127028, Tail);
TMP23[5].typ = (&NTI127020);
TMP23[5].name = "tail";
TMP970[2] = &TMP23[6];
TMP23[6].kind = 1;
TMP23[6].offset = offsetof(tlinkedlist127028, Counter);
TMP23[6].typ = (&NTI108);
TMP23[6].name = "counter";
TMP23[3].len = 3; TMP23[3].kind = 2; TMP23[3].sons = &TMP970[0];
NTI127028.node = &TMP23[3];
NTI127024.size = sizeof(tstrentry127024);
NTI127024.kind = 17;
NTI127024.base = (&NTI127022);
TMP23[7].kind = 1;
TMP23[7].offset = offsetof(tstrentry127024, Data);
TMP23[7].typ = (&NTI149);
TMP23[7].name = "data";
NTI127024.node = &TMP23[7];
NTI127026.size = sizeof(tstrentry127024*);
NTI127026.kind = 22;
NTI127026.base = (&NTI127024);
NTI127026.marker = TMP1680;
}

