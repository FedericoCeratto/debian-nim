/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct table195576 table195576;
typedef struct keyvaluepairseq195579 keyvaluepairseq195579;
typedef struct keyvaluepair195582 keyvaluepair195582;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell44933 tcell44933;
typedef struct tcellseq44949 tcellseq44949;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44945 tcellset44945;
typedef struct tpagedesc44941 tpagedesc44941;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct table358052 table358052;
typedef struct keyvaluepairseq358055 keyvaluepairseq358055;
typedef struct keyvaluepair358058 keyvaluepair358058;
typedef struct table359277 table359277;
typedef struct keyvaluepairseq359280 keyvaluepairseq359280;
typedef struct keyvaluepair359283 keyvaluepair359283;
typedef struct tindexentry359264 tindexentry359264;
typedef struct TY361804 TY361804;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct keyvaluepair195582 {
NU8 Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct  table195576  {
keyvaluepairseq195579* Data;
NI Counter;
};
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
struct  tcell44933  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44949  {
NI Len;
NI Cap;
tcell44933** D;
};
struct  tcellset44945  {
NI Counter;
NI Max;
tpagedesc44941* Head;
tpagedesc44941** Data;
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
tcellseq44949 Zct;
tcellseq44949 Decstack;
tcellset44945 Cycleroots;
tcellseq44949 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
struct keyvaluepair358058 {
NU8 Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  table358052  {
keyvaluepairseq358055* Data;
NI Counter;
};
struct  tindexentry359264  {
NimStringDesc* Keyword;
NimStringDesc* Link;
NimStringDesc* Linktitle;
NimStringDesc* Linkdesc;
};
struct keyvaluepair359283 {
NU8 Field0;
tindexentry359264 Field1;
TY361804* Field2;
};
struct  table359277  {
keyvaluepairseq359280* Data;
NI Counter;
};
typedef NI TY26420[16];
struct  tpagedesc44941  {
tpagedesc44941* Next;
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
struct keyvaluepairseq195579 {
  TGenericSeq Sup;
  keyvaluepair195582 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq358055 {
  TGenericSeq Sup;
  keyvaluepair358058 data[SEQ_DECL_SIZE];
};
struct TY361804 {
  TGenericSeq Sup;
  tindexentry359264 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq359280 {
  TGenericSeq Sup;
  keyvaluepair359283 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP134)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, rawget_195770)(table195576 t_195777, NimStringDesc* key_195780);
N_NIMCALL(NI, hash_128839)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, nexttry_171409)(NI h, NI maxhash);
static N_INLINE(NIM_BOOL, mustrehash_171302)(NI length, NI counter);
N_NIMCALL(void, enlarge_195924)(table195576* t_195933);
N_NIMCALL(void, rawinsert_195994)(table195576* t_196003, keyvaluepairseq195579** data_196011, NimStringDesc* key_196015, NI32 val_196017);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44933*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44933* c);
N_NOINLINE(void, addzct_48617)(tcellseq44949* s, tcell44933* c);
N_NIMCALL(NI, rawget_358894)(table358052 t_358901, NimStringDesc* key_358904);
N_NIMCALL(void, enlarge_359019)(table358052* t_359028);
N_NIMCALL(void, TMP2447)(void* p, NI op);
N_NIMCALL(void, rawinsert_359089)(table358052* t_359098, keyvaluepairseq358055** data_359106, NimStringDesc* key_359110, NI val_359112);
N_NIMCALL(void, TMP4787)(void* p, NI op);
N_NIMCALL(NI, rawget_361312)(table359277 t_361319, tindexentry359264 key_361322);
N_NIMCALL(NI, hash_359309)(tindexentry359264 x);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_361335)(tindexentry359264 x_361339, tindexentry359264 y_361341);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_79804, TNimType* mt);
N_NIMCALL(void, enlarge_362346)(table359277* t_362355);
N_NIMCALL(void, rawinsert_362416)(table359277* t_362425, keyvaluepairseq359280** data_362433, tindexentry359264 key_362437, TY361804* val_362439);
TNimType NTI195582; /* KeyValuePair */
TNimType NTI171017; /* SlotEnum */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI195579; /* KeyValuePairSeq */
TNimType NTI195576; /* Table */
extern TNimType NTI108; /* int */
extern tgcheap47016 gch_47044;
TNimType NTI358058; /* KeyValuePair */
TNimType NTI358055; /* KeyValuePairSeq */
TNimType NTI358052; /* Table */
TNimType NTI359283; /* KeyValuePair */
extern TNimType NTI359264; /* TIndexEntry */
extern TNimType NTI361804; /* seq[TIndexEntry] */
TNimType NTI359280; /* KeyValuePairSeq */
N_NIMCALL(void, TMP134)(void* p, NI op) {
	keyvaluepairseq195579* a;
	NI LOC1;
	a = (keyvaluepairseq195579*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

N_NIMCALL(void, inittable_195568)(NI initialsize_195573, table195576* Result) {
	(*Result).Counter = 0;
	unsureAsgnRef((void**) (&(*Result).Data), (keyvaluepairseq195579*) newSeq((&NTI195579), initialsize_195573));
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, nexttry_171409)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI32)((NI32)(5 * h) + 1) & maxhash);
	return result;
}

N_NIMCALL(NI, rawget_195770)(table195576 t_195777, NimStringDesc* key_195780) {
	NI result;
	NI h;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = hash_128839(key_195780);
	h = (NI)(LOC1 & (t_195777.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t_195777.Data->data[h].Field0 == ((NU8) 0)))) goto LA3;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = eqStrings(t_195777.Data->data[h].Field1, key_195780);
				if (!(LOC6)) goto LA7;
				LOC6 = (t_195777.Data->data[h].Field0 == ((NU8) 1));
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_171409(h, (t_195777.Data->Sup.len-1));
		} LA3: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, haskey_195756)(table195576 t_195763, NimStringDesc* key_195766) {
	NIM_BOOL result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rawget_195770(t_195763, key_195766);
	result = (0 <= LOC1);
	return result;
}

N_NIMCALL(NI32, HEX5BHEX5D_195817)(table195576 t_195824, NimStringDesc* key_195827) {
	NI32 result;
	NI index;
	result = 0;
	index = rawget_195770(t_195824, key_195827);
	{
		if (!(0 <= index)) goto LA3;
		result = t_195824.Data->data[index].Field2;
	}
	LA3: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustrehash_171302)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((NI32)(length * 2) < (NI32)(counter * 3));
	if (LOC1) goto LA2;
	LOC1 = ((NI32)(length - counter) < 4);
	LA2: ;
	result = LOC1;
	return result;
}

static N_INLINE(tcell44933*, usrtocell_48646)(void* usr) {
	tcell44933* result;
	result = 0;
	result = ((tcell44933*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44933))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44933* c) {
	addzct_48617((&gch_47044.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44933* c;
	c = usrtocell_48646(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	LA3: ;
}

N_NIMCALL(void, rawinsert_195994)(table195576* t_196003, keyvaluepairseq195579** data_196011, NimStringDesc* key_196015, NI32 val_196017) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC4;
	LOC1 = 0;
	LOC1 = hash_128839(key_196015);
	h = (NI)(LOC1 & ((*data_196011)->Sup.len-1));
	{
		while (1) {
			if (!((*data_196011)->data[h].Field0 == ((NU8) 1))) goto LA3;
			h = nexttry_171409(h, ((*data_196011)->Sup.len-1));
		} LA3: ;
	}
	LOC4 = 0;
	LOC4 = (*data_196011)->data[h].Field1; (*data_196011)->data[h].Field1 = copyStringRC1(key_196015);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	(*data_196011)->data[h].Field2 = val_196017;
	(*data_196011)->data[h].Field0 = ((NU8) 1);
}

N_NIMCALL(void, enlarge_195924)(table195576* t_195933) {
	keyvaluepairseq195579* n;
	keyvaluepairseq195579* LOC8;
	n = 0;
	n = (keyvaluepairseq195579*) newSeq((&NTI195579), (NI32)((*t_195933).Data->Sup.len * 2));
	{
		NI i_195979;
		NI HEX3Atmp_196058;
		NI res_196061;
		i_195979 = 0;
		HEX3Atmp_196058 = 0;
		HEX3Atmp_196058 = ((*t_195933).Data->Sup.len-1);
		res_196061 = 0;
		{
			while (1) {
				if (!(res_196061 <= HEX3Atmp_196058)) goto LA3;
				i_195979 = res_196061;
				{
					if (!((*t_195933).Data->data[i_195979].Field0 == ((NU8) 1))) goto LA6;
					rawinsert_195994(t_195933, (&n), (*t_195933).Data->data[i_195979].Field1, (*t_195933).Data->data[i_195979].Field2);
				}
				LA6: ;
				res_196061 += 1;
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t_195933).Data;
	unsureAsgnRef((void**) (&(*t_195933).Data), n);
	n = LOC8;
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_195879)(table195576* t_195888, NimStringDesc* key_195892, NI32 val_195894) {
	NI index;
	index = rawget_195770((*t_195888), key_195892);
	{
		if (!(0 <= index)) goto LA3;
		(*t_195888).Data->data[index].Field2 = val_195894;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_171302((*t_195888).Data->Sup.len, (*t_195888).Counter);
			if (!LOC8) goto LA9;
			enlarge_195924(t_195888);
		}
		LA9: ;
		rawinsert_195994(t_195888, (&(*t_195888).Data), key_195892, val_195894);
		(*t_195888).Counter += 1;
	}
	LA1: ;
}

N_NIMCALL(NI, rawget_358894)(table358052 t_358901, NimStringDesc* key_358904) {
	NI result;
	NI h;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = hash_128839(key_358904);
	h = (NI)(LOC1 & (t_358901.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t_358901.Data->data[h].Field0 == ((NU8) 0)))) goto LA3;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = eqStrings(t_358901.Data->data[h].Field1, key_358904);
				if (!(LOC6)) goto LA7;
				LOC6 = (t_358901.Data->data[h].Field0 == ((NU8) 1));
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_171409(h, (t_358901.Data->Sup.len-1));
		} LA3: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, haskey_358880)(table358052 t_358887, NimStringDesc* key_358890) {
	NIM_BOOL result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rawget_358894(t_358887, key_358890);
	result = (0 <= LOC1);
	return result;
}
N_NIMCALL(void, TMP2447)(void* p, NI op) {
	keyvaluepairseq358055* a;
	NI LOC1;
	a = (keyvaluepairseq358055*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

N_NIMCALL(void, rawinsert_359089)(table358052* t_359098, keyvaluepairseq358055** data_359106, NimStringDesc* key_359110, NI val_359112) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC4;
	LOC1 = 0;
	LOC1 = hash_128839(key_359110);
	h = (NI)(LOC1 & ((*data_359106)->Sup.len-1));
	{
		while (1) {
			if (!((*data_359106)->data[h].Field0 == ((NU8) 1))) goto LA3;
			h = nexttry_171409(h, ((*data_359106)->Sup.len-1));
		} LA3: ;
	}
	LOC4 = 0;
	LOC4 = (*data_359106)->data[h].Field1; (*data_359106)->data[h].Field1 = copyStringRC1(key_359110);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	(*data_359106)->data[h].Field2 = val_359112;
	(*data_359106)->data[h].Field0 = ((NU8) 1);
}

N_NIMCALL(void, enlarge_359019)(table358052* t_359028) {
	keyvaluepairseq358055* n;
	keyvaluepairseq358055* LOC8;
	n = 0;
	n = (keyvaluepairseq358055*) newSeq((&NTI358055), (NI32)((*t_359028).Data->Sup.len * 2));
	{
		NI i_359074;
		NI HEX3Atmp_359153;
		NI res_359156;
		i_359074 = 0;
		HEX3Atmp_359153 = 0;
		HEX3Atmp_359153 = ((*t_359028).Data->Sup.len-1);
		res_359156 = 0;
		{
			while (1) {
				if (!(res_359156 <= HEX3Atmp_359153)) goto LA3;
				i_359074 = res_359156;
				{
					if (!((*t_359028).Data->data[i_359074].Field0 == ((NU8) 1))) goto LA6;
					rawinsert_359089(t_359028, (&n), (*t_359028).Data->data[i_359074].Field1, (*t_359028).Data->data[i_359074].Field2);
				}
				LA6: ;
				res_359156 += 1;
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t_359028).Data;
	unsureAsgnRef((void**) (&(*t_359028).Data), n);
	n = LOC8;
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_358974)(table358052* t_358983, NimStringDesc* key_358987, NI val_358989) {
	NI index;
	index = rawget_358894((*t_358983), key_358987);
	{
		if (!(0 <= index)) goto LA3;
		(*t_358983).Data->data[index].Field2 = val_358989;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_171302((*t_358983).Data->Sup.len, (*t_358983).Counter);
			if (!LOC8) goto LA9;
			enlarge_359019(t_358983);
		}
		LA9: ;
		rawinsert_359089(t_358983, (&(*t_358983).Data), key_358987, val_358989);
		(*t_358983).Counter += 1;
	}
	LA1: ;
}

N_NIMCALL(NI, HEX5BHEX5D_358943)(table358052 t_358950, NimStringDesc* key_358953) {
	NI result;
	NI index;
	result = 0;
	index = rawget_358894(t_358950, key_358953);
	{
		if (!(0 <= index)) goto LA3;
		result = t_358950.Data->data[index].Field2;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, inittable_358120)(NI initialsize_358125, table358052* Result) {
	(*Result).Counter = 0;
	unsureAsgnRef((void**) (&(*Result).Data), (keyvaluepairseq358055*) newSeq((&NTI358055), initialsize_358125));
}
N_NIMCALL(void, TMP4787)(void* p, NI op) {
	keyvaluepairseq359280* a;
	NI LOC1;
	a = (keyvaluepairseq359280*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1.Keyword, op);
	nimGCvisit((void*)a->data[LOC1].Field1.Link, op);
	nimGCvisit((void*)a->data[LOC1].Field1.Linktitle, op);
	nimGCvisit((void*)a->data[LOC1].Field1.Linkdesc, op);
	nimGCvisit((void*)a->data[LOC1].Field2, op);
	}
}

N_NIMCALL(void, inittable_361830)(NI initialsize_361835, table359277* Result) {
	(*Result).Counter = 0;
	unsureAsgnRef((void**) (&(*Result).Data), (keyvaluepairseq359280*) newSeq((&NTI359280), initialsize_361835));
}

N_NIMCALL(NI, len_362285)(table359277 t_362292) {
	NI result;
	result = 0;
	result = t_362292.Counter;
	return result;
}

N_NIMCALL(NI, rawget_361312)(table359277 t_361319, tindexentry359264 key_361322) {
	NI result;
	NI h;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = hash_359309(key_361322);
	h = (NI)(LOC1 & (t_361319.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t_361319.Data->data[h].Field0 == ((NU8) 0)))) goto LA3;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = HEX3DHEX3D_361335(t_361319.Data->data[h].Field1, key_361322);
				if (!(LOC6)) goto LA7;
				LOC6 = (t_361319.Data->data[h].Field0 == ((NU8) 1));
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_171409(h, (t_361319.Data->Sup.len-1));
		} LA3: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawinsert_362416)(table359277* t_362425, keyvaluepairseq359280** data_362433, tindexentry359264 key_362437, TY361804* val_362439) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	NimStringDesc* LOC6;
	NimStringDesc* LOC7;
	LOC1 = 0;
	LOC1 = hash_359309(key_362437);
	h = (NI)(LOC1 & ((*data_362433)->Sup.len-1));
	{
		while (1) {
			if (!((*data_362433)->data[h].Field0 == ((NU8) 1))) goto LA3;
			h = nexttry_171409(h, ((*data_362433)->Sup.len-1));
		} LA3: ;
	}
	LOC4 = 0;
	LOC4 = (*data_362433)->data[h].Field1.Keyword; (*data_362433)->data[h].Field1.Keyword = copyStringRC1(key_362437.Keyword);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	LOC5 = 0;
	LOC5 = (*data_362433)->data[h].Field1.Link; (*data_362433)->data[h].Field1.Link = copyStringRC1(key_362437.Link);
	if (LOC5) nimGCunrefNoCycle(LOC5);
	LOC6 = 0;
	LOC6 = (*data_362433)->data[h].Field1.Linktitle; (*data_362433)->data[h].Field1.Linktitle = copyStringRC1(key_362437.Linktitle);
	if (LOC6) nimGCunrefNoCycle(LOC6);
	LOC7 = 0;
	LOC7 = (*data_362433)->data[h].Field1.Linkdesc; (*data_362433)->data[h].Field1.Linkdesc = copyStringRC1(key_362437.Linkdesc);
	if (LOC7) nimGCunrefNoCycle(LOC7);
	genericSeqAssign((&(*data_362433)->data[h].Field2), val_362439, (&NTI361804));
	(*data_362433)->data[h].Field0 = ((NU8) 1);
}

N_NIMCALL(void, enlarge_362346)(table359277* t_362355) {
	keyvaluepairseq359280* n;
	keyvaluepairseq359280* LOC8;
	n = 0;
	n = (keyvaluepairseq359280*) newSeq((&NTI359280), (NI32)((*t_362355).Data->Sup.len * 2));
	{
		NI i_362401;
		NI HEX3Atmp_362480;
		NI res_362483;
		i_362401 = 0;
		HEX3Atmp_362480 = 0;
		HEX3Atmp_362480 = ((*t_362355).Data->Sup.len-1);
		res_362483 = 0;
		{
			while (1) {
				if (!(res_362483 <= HEX3Atmp_362480)) goto LA3;
				i_362401 = res_362483;
				{
					if (!((*t_362355).Data->data[i_362401].Field0 == ((NU8) 1))) goto LA6;
					rawinsert_362416(t_362355, (&n), (*t_362355).Data->data[i_362401].Field1, (*t_362355).Data->data[i_362401].Field2);
				}
				LA6: ;
				res_362483 += 1;
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t_362355).Data;
	unsureAsgnRef((void**) (&(*t_362355).Data), n);
	n = LOC8;
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_362301)(table359277* t_362310, tindexentry359264 key_362314, TY361804* val_362316) {
	NI index;
	index = rawget_361312((*t_362310), key_362314);
	{
		if (!(0 <= index)) goto LA3;
		genericSeqAssign((&(*t_362310).Data->data[index].Field2), val_362316, (&NTI361804));
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_171302((*t_362310).Data->Sup.len, (*t_362310).Counter);
			if (!LOC8) goto LA9;
			enlarge_362346(t_362310);
		}
		LA9: ;
		rawinsert_362416(t_362310, (&(*t_362310).Data), key_362314, val_362316);
		(*t_362310).Counter += 1;
	}
	LA1: ;
}

N_NIMCALL(TY361804*, HEX5BHEX5D_361298)(table359277 t_361305, tindexentry359264 key_361308) {
	TY361804* result;
	NI index;
	result = 0;
	index = rawget_361312(t_361305, key_361308);
	{
		if (!(0 <= index)) goto LA3;
		genericSeqAssign((&result), t_361305.Data->data[index].Field2, (&NTI361804));
	}
	LA3: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit)(void) {
static TNimNode* TMP130[3];
static TNimNode* TMP131[3];
NI TMP133;
static char* NIM_CONST TMP132[3] = {
"seEmpty", 
"seFilled", 
"seDeleted"};
static TNimNode* TMP137[2];
static TNimNode* TMP2446[3];
static TNimNode* TMP4629[2];
static TNimNode* TMP4784[3];
static TNimNode TMP53[22];
NTI195582.size = sizeof(keyvaluepair195582);
NTI195582.kind = 18;
NTI195582.base = 0;
NTI195582.flags = 2;
TMP130[0] = &TMP53[1];
NTI171017.size = sizeof(NU8);
NTI171017.kind = 14;
NTI171017.base = 0;
NTI171017.flags = 3;
for (TMP133 = 0; TMP133 < 3; TMP133++) {
TMP53[TMP133+2].kind = 1;
TMP53[TMP133+2].offset = TMP133;
TMP53[TMP133+2].name = TMP132[TMP133];
TMP131[TMP133] = &TMP53[TMP133+2];
}
TMP53[5].len = 3; TMP53[5].kind = 2; TMP53[5].sons = &TMP131[0];
NTI171017.node = &TMP53[5];
TMP53[1].kind = 1;
TMP53[1].offset = offsetof(keyvaluepair195582, Field0);
TMP53[1].typ = (&NTI171017);
TMP53[1].name = "Field0";
TMP130[1] = &TMP53[6];
TMP53[6].kind = 1;
TMP53[6].offset = offsetof(keyvaluepair195582, Field1);
TMP53[6].typ = (&NTI149);
TMP53[6].name = "Field1";
TMP130[2] = &TMP53[7];
TMP53[7].kind = 1;
TMP53[7].offset = offsetof(keyvaluepair195582, Field2);
TMP53[7].typ = (&NTI114);
TMP53[7].name = "Field2";
TMP53[0].len = 3; TMP53[0].kind = 2; TMP53[0].sons = &TMP130[0];
NTI195582.node = &TMP53[0];
NTI195579.size = sizeof(keyvaluepairseq195579*);
NTI195579.kind = 24;
NTI195579.base = (&NTI195582);
NTI195579.flags = 2;
NTI195579.marker = TMP134;
NTI195576.size = sizeof(table195576);
NTI195576.kind = 18;
NTI195576.base = 0;
NTI195576.flags = 2;
TMP137[0] = &TMP53[9];
TMP53[9].kind = 1;
TMP53[9].offset = offsetof(table195576, Data);
TMP53[9].typ = (&NTI195579);
TMP53[9].name = "data";
TMP137[1] = &TMP53[10];
TMP53[10].kind = 1;
TMP53[10].offset = offsetof(table195576, Counter);
TMP53[10].typ = (&NTI108);
TMP53[10].name = "counter";
TMP53[8].len = 2; TMP53[8].kind = 2; TMP53[8].sons = &TMP137[0];
NTI195576.node = &TMP53[8];
NTI358058.size = sizeof(keyvaluepair358058);
NTI358058.kind = 18;
NTI358058.base = 0;
NTI358058.flags = 2;
TMP2446[0] = &TMP53[12];
TMP53[12].kind = 1;
TMP53[12].offset = offsetof(keyvaluepair358058, Field0);
TMP53[12].typ = (&NTI171017);
TMP53[12].name = "Field0";
TMP2446[1] = &TMP53[13];
TMP53[13].kind = 1;
TMP53[13].offset = offsetof(keyvaluepair358058, Field1);
TMP53[13].typ = (&NTI149);
TMP53[13].name = "Field1";
TMP2446[2] = &TMP53[14];
TMP53[14].kind = 1;
TMP53[14].offset = offsetof(keyvaluepair358058, Field2);
TMP53[14].typ = (&NTI108);
TMP53[14].name = "Field2";
TMP53[11].len = 3; TMP53[11].kind = 2; TMP53[11].sons = &TMP2446[0];
NTI358058.node = &TMP53[11];
NTI358055.size = sizeof(keyvaluepairseq358055*);
NTI358055.kind = 24;
NTI358055.base = (&NTI358058);
NTI358055.flags = 2;
NTI358055.marker = TMP2447;
NTI358052.size = sizeof(table358052);
NTI358052.kind = 18;
NTI358052.base = 0;
NTI358052.flags = 2;
TMP4629[0] = &TMP53[16];
TMP53[16].kind = 1;
TMP53[16].offset = offsetof(table358052, Data);
TMP53[16].typ = (&NTI358055);
TMP53[16].name = "data";
TMP4629[1] = &TMP53[17];
TMP53[17].kind = 1;
TMP53[17].offset = offsetof(table358052, Counter);
TMP53[17].typ = (&NTI108);
TMP53[17].name = "counter";
TMP53[15].len = 2; TMP53[15].kind = 2; TMP53[15].sons = &TMP4629[0];
NTI358052.node = &TMP53[15];
NTI359283.size = sizeof(keyvaluepair359283);
NTI359283.kind = 18;
NTI359283.base = 0;
NTI359283.flags = 2;
TMP4784[0] = &TMP53[19];
TMP53[19].kind = 1;
TMP53[19].offset = offsetof(keyvaluepair359283, Field0);
TMP53[19].typ = (&NTI171017);
TMP53[19].name = "Field0";
TMP4784[1] = &TMP53[20];
TMP53[20].kind = 1;
TMP53[20].offset = offsetof(keyvaluepair359283, Field1);
TMP53[20].typ = (&NTI359264);
TMP53[20].name = "Field1";
TMP4784[2] = &TMP53[21];
TMP53[21].kind = 1;
TMP53[21].offset = offsetof(keyvaluepair359283, Field2);
TMP53[21].typ = (&NTI361804);
TMP53[21].name = "Field2";
TMP53[18].len = 3; TMP53[18].kind = 2; TMP53[18].sons = &TMP4784[0];
NTI359283.node = &TMP53[18];
NTI359280.size = sizeof(keyvaluepairseq359280*);
NTI359280.kind = 24;
NTI359280.base = (&NTI359283);
NTI359280.flags = 2;
NTI359280.marker = TMP4787;
}

