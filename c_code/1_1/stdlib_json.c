/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct jsonnodeobj337042 jsonnodeobj337042;
typedef struct TY337611 TY337611;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY337057 TY337057;
typedef struct TY337062 TY337062;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell44733 tcell44733;
typedef struct tcellseq44749 tcellseq44749;
typedef struct tgcheap46816 tgcheap46816;
typedef struct tcellset44745 tcellset44745;
typedef struct tpagedesc44741 tpagedesc44741;
typedef struct tmemregion27010 tmemregion27010;
typedef struct tsmallchunk26240 tsmallchunk26240;
typedef struct tllchunk27004 tllchunk27004;
typedef struct tbigchunk26242 tbigchunk26242;
typedef struct tintset26217 tintset26217;
typedef struct ttrunk26213 ttrunk26213;
typedef struct tavlnode27008 tavlnode27008;
typedef struct tgcstat46814 tgcstat46814;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY337611 {
NimStringDesc* Field0;
jsonnodeobj337042* Field1;
};
struct  jsonnodeobj337042  {
NU8 Kind;
union {
struct {NimStringDesc* Str;
} S1;
struct {NI64 Num;
} S2;
struct {NF Fnum;
} S3;
struct {NIM_BOOL Bval;
} S4;
struct {TY337057* Fields;
} S6;
struct {TY337062* Elems;
} S7;
} kindU;
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
struct  tcell44733  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44749  {
NI Len;
NI Cap;
tcell44733** D;
};
struct  tcellset44745  {
NI Counter;
NI Max;
tpagedesc44741* Head;
tpagedesc44741** Data;
};
typedef tsmallchunk26240* TY27022[512];
typedef ttrunk26213* ttrunkbuckets26215[256];
struct  tintset26217  {
ttrunkbuckets26215 Data;
};
struct  tmemregion27010  {
NI Minlargeobj;
NI Maxlargeobj;
TY27022 Freesmallchunks;
tllchunk27004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26242* Freechunkslist;
tintset26217 Chunkstarts;
tavlnode27008* Root;
tavlnode27008* Deleted;
tavlnode27008* Last;
tavlnode27008* Freeavlnodes;
};
struct  tgcstat46814  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap46816  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44749 Zct;
tcellseq44749 Decstack;
tcellset44745 Cycleroots;
tcellseq44749 Tempstack;
NI Recgclock;
tmemregion27010 Region;
tgcstat46814 Stat;
};
typedef NI TY26220[16];
struct  tpagedesc44741  {
tpagedesc44741* Next;
NI Key;
TY26220 Bits;
};
struct  tbasechunk26238  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26240  {
  tbasechunk26238 Sup;
tsmallchunk26240* Next;
tsmallchunk26240* Prev;
tfreecell26230* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27004  {
NI Size;
NI Acc;
tllchunk27004* Next;
};
struct  tbigchunk26242  {
  tbasechunk26238 Sup;
tbigchunk26242* Next;
tbigchunk26242* Prev;
NI Align;
NF Data;
};
struct  ttrunk26213  {
ttrunk26213* Next;
NI Key;
TY26220 Bits;
};
typedef tavlnode27008* TY27014[2];
struct  tavlnode27008  {
TY27014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct TY337057 {
  TGenericSeq Sup;
  TY337611 data[SEQ_DECL_SIZE];
};
struct TY337062 {
  TGenericSeq Sup;
  jsonnodeobj337042* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4758)(void* p, NI op);
N_NIMCALL(void, TMP4759)(void* p, NI op);
N_NIMCALL(void, TMP4760)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44733*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44733* c);
N_NOINLINE(void, addzct_48417)(tcellseq44749* s, tcell44733* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_338082)(TY337062* x_338088, TY337062* y_338093);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_338237)(TY337057* x_338243, TY337057* y_338248);
N_NIMCALL(void, topretty_341353)(NimStringDesc** result, jsonnodeobj337042* node, NI indent, NIM_BOOL ml, NIM_BOOL lstarr, NI currindent);
N_NIMCALL(void, nl_341305)(NimStringDesc** s, NIM_BOOL ml);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, indent_341282)(NimStringDesc** s, NI i);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
N_NIMCALL(NI, newindent_341293)(NI curr, NI indent, NIM_BOOL ml);
N_NIMCALL(NimStringDesc*, escapejson_341316)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x);
N_NIMCALL(NimStringDesc*, nimFloatToStr)(NF f);
N_NIMCALL(NimStringDesc*, nimBoolToStr)(NIM_BOOL x);
TNimNode* NimDT_337042_kind[8];
STRING_LITERAL(TMP4765, "", 0);
STRING_LITERAL(TMP4766, "\015\012", 2);
STRING_LITERAL(TMP4767, "{", 1);
STRING_LITERAL(TMP4768, ", ", 2);
STRING_LITERAL(TMP4769, "\"", 1);
STRING_LITERAL(TMP4770, "\\\"", 2);
STRING_LITERAL(TMP4771, "\\\\", 2);
STRING_LITERAL(TMP4772, "\\u", 2);
STRING_LITERAL(TMP4773, ": ", 2);
STRING_LITERAL(TMP4774, "}", 1);
STRING_LITERAL(TMP4775, "{}", 2);
STRING_LITERAL(TMP4778, "[", 1);
STRING_LITERAL(TMP4779, "]", 1);
STRING_LITERAL(TMP4780, "[]", 2);
STRING_LITERAL(TMP4781, "null", 4);
TNimType NTI337042; /* JsonNodeObj */
TNimType NTI337038; /* JsonNodeKind */
extern TNimType NTI149; /* string */
extern TNimType NTI5510; /* BiggestInt */
extern TNimType NTI128; /* float */
extern TNimType NTI138; /* bool */
TNimType NTI337611; /* tuple[key: string, val: JsonNode] */
TNimType NTI337057; /* seq[tuple[key: string, val: JsonNode]] */
TNimType NTI337062; /* seq[JsonNode] */
TNimType NTI337040; /* JsonNode */
extern tgcheap46816 gch_46844;
N_NIMCALL(void, TMP4758)(void* p, NI op) {
	TY337057* a;
	NI LOC1;
	a = (TY337057*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}
N_NIMCALL(void, TMP4759)(void* p, NI op) {
	TY337062* a;
	NI LOC1;
	a = (TY337062*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP4760)(void* p, NI op) {
	jsonnodeobj337042* a;
	a = (jsonnodeobj337042*)p;
	switch ((*a).Kind) {
	case ((NU8) 4):
	nimGCvisit((void*)(*a).kindU.S1.Str, op);
	break;
	case ((NU8) 2):
	break;
	case ((NU8) 3):
	break;
	case ((NU8) 1):
	break;
	case ((NU8) 0):
	break;
	case ((NU8) 5):
	nimGCvisit((void*)(*a).kindU.S6.Fields, op);
	break;
	case ((NU8) 6):
	nimGCvisit((void*)(*a).kindU.S7.Elems, op);
	break;
	} 
}

static N_INLINE(tcell44733*, usrtocell_48446)(void* usr) {
	tcell44733* result;
	result = 0;
	result = ((tcell44733*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44733))))));
	return result;
}

static N_INLINE(void, rtladdzct_50004)(tcell44733* c) {
	addzct_48417((&gch_46844.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44733* c;
	c = usrtocell_48446(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44733* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48446(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44733* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48446((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(jsonnodeobj337042*, HEX25_337608)(TY337611* keyvals, NI keyvalsLen0) {
	jsonnodeobj337042* result;
	result = 0;
	result = (jsonnodeobj337042*) newObj((&NTI337040), sizeof(jsonnodeobj337042));
	(*result).Kind = ((NU8) 5);
	if ((*result).kindU.S6.Fields) nimGCunrefNoCycle((*result).kindU.S6.Fields);
	(*result).kindU.S6.Fields = (TY337057*) newSeqRC1((&NTI337057), keyvalsLen0);
	{
		NI i_337717;
		TY337611 p_337718;
		NI i_337736;
		i_337717 = 0;
		memset((void*)(&p_337718), 0, sizeof(p_337718));
		i_337736 = 0;
		{
			while (1) {
				NimStringDesc* LOC4;
				if (!(i_337736 < keyvalsLen0)) goto LA3;
				i_337717 = i_337736;
				p_337718.Field0 = keyvals[i_337736].Field0;
				p_337718.Field1 = keyvals[i_337736].Field1;
				LOC4 = 0;
				LOC4 = (*result).kindU.S6.Fields->data[i_337717].Field0; (*result).kindU.S6.Fields->data[i_337717].Field0 = copyStringRC1(p_337718.Field0);
				if (LOC4) nimGCunrefNoCycle(LOC4);
				asgnRefNoCycle((void**) (&(*result).kindU.S6.Fields->data[i_337717].Field1), p_337718.Field1);
				i_337736 += 1;
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(jsonnodeobj337042*, HEX25_337448)(NimStringDesc* s) {
	jsonnodeobj337042* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (jsonnodeobj337042*) newObj((&NTI337040), sizeof(jsonnodeobj337042));
	(*result).Kind = ((NU8) 4);
	LOC1 = 0;
	LOC1 = (*result).kindU.S1.Str; (*result).kindU.S1.Str = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
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

N_NIMCALL(void, HEX5BHEX5DHEX3D_340240)(jsonnodeobj337042* obj, NimStringDesc* key, jsonnodeobj337042* val) {
	TY337611 LOC8;
	NimStringDesc* LOC9;
	{
		NI i_340436;
		NI HEX3Atmp_340499;
		NI res_340502;
		i_340436 = 0;
		HEX3Atmp_340499 = 0;
		HEX3Atmp_340499 = (NI32)((*obj).kindU.S6.Fields->Sup.len - 1);
		res_340502 = 0;
		{
			while (1) {
				if (!(res_340502 <= HEX3Atmp_340499)) goto LA3;
				i_340436 = res_340502;
				{
					if (!eqStrings((*obj).kindU.S6.Fields->data[i_340436].Field0, key)) goto LA6;
					asgnRefNoCycle((void**) (&(*obj).kindU.S6.Fields->data[i_340436].Field1), val);
					goto BeforeRet;
				}
				LA6: ;
				res_340502 += 1;
			} LA3: ;
		}
	}
	memset((void*)(&LOC8), 0, sizeof(LOC8));
	LOC8.Field0 = copyString(key);
	LOC8.Field1 = val;
	(*obj).kindU.S6.Fields = (TY337057*) incrSeq(&((*obj).kindU.S6.Fields)->Sup, sizeof(TY337611));
	LOC9 = 0;
	LOC9 = (*obj).kindU.S6.Fields->data[(*obj).kindU.S6.Fields->Sup.len-1].Field0; (*obj).kindU.S6.Fields->data[(*obj).kindU.S6.Fields->Sup.len-1].Field0 = copyStringRC1(LOC8.Field0);
	if (LOC9) nimGCunrefNoCycle(LOC9);
	asgnRefNoCycle((void**) (&(*obj).kindU.S6.Fields->data[(*obj).kindU.S6.Fields->Sup.len-1].Field1), LOC8.Field1);
	BeforeRet: ;
}

N_NIMCALL(NIM_BOOL, HEX3DHEX3D_337893)(jsonnodeobj337042* a, jsonnodeobj337042* b) {
	NIM_BOOL result;
	result = 0;
	{
		if (!a == 0) goto LA3;
		{
			if (!b == 0) goto LA7;
			result = NIM_TRUE;
			goto BeforeRet;
		}
		LA7: ;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC10;
		LOC10 = 0;
		LOC10 = b == 0;
		if (LOC10) goto LA11;
		LOC10 = !(((*a).Kind == (*b).Kind));
		LA11: ;
		if (!LOC10) goto LA12;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	goto LA1;
	LA12: ;
	{
		switch ((*a).Kind) {
		case ((NU8) 4):
		{
			result = eqStrings((*a).kindU.S1.Str, (*b).kindU.S1.Str);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*a).kindU.S2.Num == (*b).kindU.S2.Num);
		}
		break;
		case ((NU8) 3):
		{
			result = ((*a).kindU.S3.Fnum == (*b).kindU.S3.Fnum);
		}
		break;
		case ((NU8) 1):
		{
			result = ((*a).kindU.S4.Bval == (*b).kindU.S4.Bval);
		}
		break;
		case ((NU8) 0):
		{
			result = NIM_TRUE;
		}
		break;
		case ((NU8) 6):
		{
			result = HEX3DHEX3D_338082((*a).kindU.S7.Elems, (*b).kindU.S7.Elems);
		}
		break;
		case ((NU8) 5):
		{
			result = HEX3DHEX3D_338237((*a).kindU.S6.Fields, (*b).kindU.S6.Fields);
		}
		break;
		}
		goto BeforeRet;
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(jsonnodeobj337042*, newjarray_337389)(void) {
	jsonnodeobj337042* result;
	result = 0;
	result = (jsonnodeobj337042*) newObj((&NTI337040), sizeof(jsonnodeobj337042));
	(*result).Kind = ((NU8) 6);
	if ((*result).kindU.S7.Elems) nimGCunrefNoCycle((*result).kindU.S7.Elems);
	(*result).kindU.S7.Elems = (TY337062*) newSeqRC1((&NTI337062), 0);
	return result;
}

N_NIMCALL(void, add_339862)(jsonnodeobj337042* father, jsonnodeobj337042* child) {
	(*father).kindU.S7.Elems = (TY337062*) incrSeq(&((*father).kindU.S7.Elems)->Sup, sizeof(jsonnodeobj337042*));
	asgnRefNoCycle((void**) (&(*father).kindU.S7.Elems->data[(*father).kindU.S7.Elems->Sup.len-1]), child);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, nl_341305)(NimStringDesc** s, NIM_BOOL ml) {
	{
		if (!ml) goto LA3;
		(*s) = resizeString((*s), 2);
appendString((*s), ((NimStringDesc*) &TMP4766));
	}
	LA3: ;
}

N_NIMCALL(void, indent_341282)(NimStringDesc** s, NI i) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = nsuRepeatChar(i, 32);
	(*s) = resizeString((*s), LOC1->Sup.len + 0);
appendString((*s), LOC1);
}

N_NIMCALL(NI, newindent_341293)(NI curr, NI indent, NIM_BOOL ml) {
	NI result;
	result = 0;
	{
		if (!ml) goto LA3;
		result = (NI32)(curr + indent);
		goto BeforeRet;
	}
	goto LA1;
	LA3: ;
	{
		result = indent;
		goto BeforeRet;
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, escapejson_341316)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString((NI32)(s->Sup.len + (NI)((NU32)(s->Sup.len) >> (NU32)(3))));
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP4769));
	{
		NI x_341320;
		NI i_341328;
		NI result_341330;
		x_341320 = 0;
		i_341328 = 0;
		result_341330 = 0;
		{
			while (1) {
				NI r;
				if (!(i_341328 < s->Sup.len)) goto LA3;
				{
					if (!((NU32)(((NU8)(s->data[i_341328]))) <= (NU32)(127))) goto LA6;
					result_341330 = ((NI) (((NU8)(s->data[i_341328]))));
					i_341328 += 1;
				}
				goto LA4;
				LA6: ;
				{
					if (!((NI)((NU32)(((NI) (((NU8)(s->data[i_341328]))))) >> (NU32)(5)) == 6)) goto LA9;
					result_341330 = (NI)((NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[i_341328])))) & 31)))) << (NU32)(6)) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_341328 + 1)])))) & 63))));
					i_341328 += 2;
				}
				goto LA4;
				LA9: ;
				{
					if (!((NI)((NU32)(((NI) (((NU8)(s->data[i_341328]))))) >> (NU32)(4)) == 14)) goto LA12;
					result_341330 = (NI)((NI)((NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[i_341328])))) & 15)))) << (NU32)(12)) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_341328 + 1)])))) & 63)))) << (NU32)(6))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_341328 + 2)])))) & 63))));
					i_341328 += 3;
				}
				goto LA4;
				LA12: ;
				{
					if (!((NI)((NU32)(((NI) (((NU8)(s->data[i_341328]))))) >> (NU32)(3)) == 30)) goto LA15;
					result_341330 = (NI)((NI)((NI)((NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[i_341328])))) & 7)))) << (NU32)(18)) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_341328 + 1)])))) & 63)))) << (NU32)(12))) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_341328 + 2)])))) & 63)))) << (NU32)(6))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_341328 + 3)])))) & 63))));
					i_341328 += 4;
				}
				goto LA4;
				LA15: ;
				{
					if (!((NI)((NU32)(((NI) (((NU8)(s->data[i_341328]))))) >> (NU32)(2)) == 62)) goto LA18;
					result_341330 = (NI)((NI)((NI)((NI)((NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[i_341328])))) & 3)))) << (NU32)(24)) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_341328 + 1)])))) & 63)))) << (NU32)(18))) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_341328 + 2)])))) & 63)))) << (NU32)(12))) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_341328 + 3)])))) & 63)))) << (NU32)(6))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_341328 + 4)])))) & 63))));
					i_341328 += 5;
				}
				goto LA4;
				LA18: ;
				{
					if (!((NI)((NU32)(((NI) (((NU8)(s->data[i_341328]))))) >> (NU32)(1)) == 126)) goto LA21;
					result_341330 = (NI)((NI)((NI)((NI)((NI)((NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[i_341328])))) & 1)))) << (NU32)(30)) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_341328 + 1)])))) & 63)))) << (NU32)(24))) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_341328 + 2)])))) & 63)))) << (NU32)(18))) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_341328 + 3)])))) & 63)))) << (NU32)(12))) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_341328 + 4)])))) & 63)))) << (NU32)(6))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_341328 + 5)])))) & 63))));
					i_341328 += 6;
				}
				goto LA4;
				LA21: ;
				{
					result_341330 = ((NI) (((NU8)(s->data[i_341328]))));
					i_341328 += 1;
				}
				LA4: ;
				x_341320 = result_341330;
				r = x_341320;
				{
					NIM_BOOL LOC26;
					NIM_CHAR c;
					LOC26 = 0;
					LOC26 = (32 <= r);
					if (!(LOC26)) goto LA27;
					LOC26 = (r <= 127);
					LA27: ;
					if (!LOC26) goto LA28;
					c = ((NIM_CHAR) (((NI) (r))));
					switch (((NU8)(c))) {
					case 34:
					{
						result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP4770));
					}
					break;
					case 92:
					{
						result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP4771));
					}
					break;
					default:
					{
						result = addChar(result, c);
					}
					break;
					}
				}
				goto LA24;
				LA28: ;
				{
					NimStringDesc* LOC34;
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP4772));
					LOC34 = 0;
					LOC34 = nsuToHex(((NI64) (r)), 4);
					result = resizeString(result, LOC34->Sup.len + 0);
appendString(result, LOC34);
				}
				LA24: ;
			} LA3: ;
		}
	}
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP4769));
	return result;
}

N_NIMCALL(void, topretty_341353)(NimStringDesc** result, jsonnodeobj337042* node, NI indent, NIM_BOOL ml, NIM_BOOL lstarr, NI currindent) {
	switch ((*node).Kind) {
	case ((NU8) 5):
	{
		{
			NIM_BOOL LOC4;
			LOC4 = 0;
			LOC4 = !((currindent == 0));
			if (!(LOC4)) goto LA5;
			LOC4 = !(lstarr);
			LA5: ;
			if (!LOC4) goto LA6;
			nl_341305(result, ml);
		}
		LA6: ;
		indent_341282(result, currindent);
		{
			if (!(0 < (*node).kindU.S6.Fields->Sup.len)) goto LA10;
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4767));
			nl_341305(result, ml);
			{
				NI i_341423;
				NI HEX3Atmp_341586;
				NI res_341589;
				i_341423 = 0;
				HEX3Atmp_341586 = 0;
				HEX3Atmp_341586 = (NI32)((*node).kindU.S6.Fields->Sup.len - 1);
				res_341589 = 0;
				{
					while (1) {
						NI LOC19;
						NimStringDesc* LOC20;
						NI LOC21;
						if (!(res_341589 <= HEX3Atmp_341586)) goto LA14;
						i_341423 = res_341589;
						{
							if (!(0 < i_341423)) goto LA17;
							(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4768));
							nl_341305(result, ml);
						}
						LA17: ;
						LOC19 = 0;
						LOC19 = newindent_341293(currindent, indent, ml);
						indent_341282(result, LOC19);
						LOC20 = 0;
						LOC20 = escapejson_341316((*node).kindU.S6.Fields->data[i_341423].Field0);
						(*result) = resizeString((*result), LOC20->Sup.len + 0);
appendString((*result), LOC20);
						(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4773));
						LOC21 = 0;
						LOC21 = newindent_341293(currindent, indent, ml);
						topretty_341353(result, (*node).kindU.S6.Fields->data[i_341423].Field1, indent, ml, NIM_FALSE, LOC21);
						res_341589 += 1;
					} LA14: ;
				}
			}
			nl_341305(result, ml);
			indent_341282(result, currindent);
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4774));
		}
		goto LA8;
		LA10: ;
		{
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4775));
		}
		LA8: ;
	}
	break;
	case ((NU8) 4):
	{
		NimStringDesc* LOC28;
		{
			if (!lstarr) goto LA26;
			indent_341282(result, currindent);
		}
		LA26: ;
		LOC28 = 0;
		LOC28 = escapejson_341316((*node).kindU.S1.Str);
		(*result) = resizeString((*result), LOC28->Sup.len + 0);
appendString((*result), LOC28);
	}
	break;
	case ((NU8) 2):
	{
		NimStringDesc* LOC34;
		{
			if (!lstarr) goto LA32;
			indent_341282(result, currindent);
		}
		LA32: ;
		LOC34 = 0;
		LOC34 = nimInt64ToStr((*node).kindU.S2.Num);
		(*result) = resizeString((*result), LOC34->Sup.len + 0);
appendString((*result), LOC34);
	}
	break;
	case ((NU8) 3):
	{
		NimStringDesc* LOC40;
		{
			if (!lstarr) goto LA38;
			indent_341282(result, currindent);
		}
		LA38: ;
		LOC40 = 0;
		LOC40 = nimFloatToStr((*node).kindU.S3.Fnum);
		(*result) = resizeString((*result), LOC40->Sup.len + 0);
appendString((*result), LOC40);
	}
	break;
	case ((NU8) 1):
	{
		NimStringDesc* LOC46;
		{
			if (!lstarr) goto LA44;
			indent_341282(result, currindent);
		}
		LA44: ;
		LOC46 = 0;
		LOC46 = nimBoolToStr((*node).kindU.S4.Bval);
		(*result) = resizeString((*result), LOC46->Sup.len + 0);
appendString((*result), LOC46);
	}
	break;
	case ((NU8) 6):
	{
		{
			if (!lstarr) goto LA50;
			indent_341282(result, currindent);
		}
		LA50: ;
		{
			if (!!(((*node).kindU.S7.Elems->Sup.len == 0))) goto LA54;
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4778));
			nl_341305(result, ml);
			{
				NI i_341569;
				NI HEX3Atmp_341592;
				NI res_341595;
				i_341569 = 0;
				HEX3Atmp_341592 = 0;
				HEX3Atmp_341592 = (NI32)((*node).kindU.S7.Elems->Sup.len - 1);
				res_341595 = 0;
				{
					while (1) {
						NI LOC63;
						if (!(res_341595 <= HEX3Atmp_341592)) goto LA58;
						i_341569 = res_341595;
						{
							if (!(0 < i_341569)) goto LA61;
							(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4768));
							nl_341305(result, ml);
						}
						LA61: ;
						LOC63 = 0;
						LOC63 = newindent_341293(currindent, indent, ml);
						topretty_341353(result, (*node).kindU.S7.Elems->data[i_341569], indent, ml, NIM_TRUE, LOC63);
						res_341595 += 1;
					} LA58: ;
				}
			}
			nl_341305(result, ml);
			indent_341282(result, currindent);
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4779));
		}
		goto LA52;
		LA54: ;
		{
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4780));
		}
		LA52: ;
	}
	break;
	case ((NU8) 0):
	{
		{
			if (!lstarr) goto LA68;
			indent_341282(result, currindent);
		}
		LA68: ;
		(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP4781));
	}
	break;
	}
}

N_NIMCALL(NimStringDesc*, pretty_341621)(jsonnodeobj337042* node, NI indent) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP4765));
	topretty_341353((&result), node, indent, NIM_TRUE, NIM_FALSE, 0);
	return result;
}

N_NIMCALL(NimStringDesc*, HEX24_341633)(jsonnodeobj337042* node) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP4765));
	topretty_341353((&result), node, 1, NIM_FALSE, NIM_FALSE, 0);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_jsonDatInit)(void) {
static TNimNode* TMP4754[7];
NI TMP4756;
static char* NIM_CONST TMP4755[7] = {
"JNull", 
"JBool", 
"JInt", 
"JFloat", 
"JString", 
"JObject", 
"JArray"};
static TNimNode* TMP4757[2];
static TNimNode TMP893[19];
NTI337042.size = sizeof(jsonnodeobj337042);
NTI337042.kind = 18;
NTI337042.base = 0;
NTI337042.flags = 2;
NTI337038.size = sizeof(NU8);
NTI337038.kind = 14;
NTI337038.base = 0;
NTI337038.flags = 3;
for (TMP4756 = 0; TMP4756 < 7; TMP4756++) {
TMP893[TMP4756+1].kind = 1;
TMP893[TMP4756+1].offset = TMP4756;
TMP893[TMP4756+1].name = TMP4755[TMP4756];
TMP4754[TMP4756] = &TMP893[TMP4756+1];
}
TMP893[8].len = 7; TMP893[8].kind = 2; TMP893[8].sons = &TMP4754[0];
NTI337038.node = &TMP893[8];
TMP893[0].kind = 3;
TMP893[0].offset = offsetof(jsonnodeobj337042, Kind);
TMP893[0].typ = (&NTI337038);
TMP893[0].name = "kind";
TMP893[0].sons = &NimDT_337042_kind[0];
TMP893[0].len = 7;
TMP893[9].kind = 1;
TMP893[9].offset = offsetof(jsonnodeobj337042, kindU.S1.Str);
TMP893[9].typ = (&NTI149);
TMP893[9].name = "str";
NimDT_337042_kind[4] = &TMP893[9];
TMP893[10].kind = 1;
TMP893[10].offset = offsetof(jsonnodeobj337042, kindU.S2.Num);
TMP893[10].typ = (&NTI5510);
TMP893[10].name = "num";
NimDT_337042_kind[2] = &TMP893[10];
TMP893[11].kind = 1;
TMP893[11].offset = offsetof(jsonnodeobj337042, kindU.S3.Fnum);
TMP893[11].typ = (&NTI128);
TMP893[11].name = "fnum";
NimDT_337042_kind[3] = &TMP893[11];
TMP893[12].kind = 1;
TMP893[12].offset = offsetof(jsonnodeobj337042, kindU.S4.Bval);
TMP893[12].typ = (&NTI138);
TMP893[12].name = "bval";
NimDT_337042_kind[1] = &TMP893[12];
TMP893[13].len = 0; TMP893[13].kind = 2;
NimDT_337042_kind[0] = &TMP893[13];
NTI337611.size = sizeof(TY337611);
NTI337611.kind = 18;
NTI337611.base = 0;
NTI337611.flags = 2;
TMP4757[0] = &TMP893[16];
TMP893[16].kind = 1;
TMP893[16].offset = offsetof(TY337611, Field0);
TMP893[16].typ = (&NTI149);
TMP893[16].name = "Field0";
TMP4757[1] = &TMP893[17];
TMP893[17].kind = 1;
TMP893[17].offset = offsetof(TY337611, Field1);
TMP893[17].typ = (&NTI337040);
TMP893[17].name = "Field1";
TMP893[15].len = 2; TMP893[15].kind = 2; TMP893[15].sons = &TMP4757[0];
NTI337611.node = &TMP893[15];
NTI337057.size = sizeof(TY337057*);
NTI337057.kind = 24;
NTI337057.base = (&NTI337611);
NTI337057.flags = 2;
NTI337057.marker = TMP4758;
TMP893[14].kind = 1;
TMP893[14].offset = offsetof(jsonnodeobj337042, kindU.S6.Fields);
TMP893[14].typ = (&NTI337057);
TMP893[14].name = "fields";
NimDT_337042_kind[5] = &TMP893[14];
NTI337062.size = sizeof(TY337062*);
NTI337062.kind = 24;
NTI337062.base = (&NTI337040);
NTI337062.flags = 2;
NTI337062.marker = TMP4759;
TMP893[18].kind = 1;
TMP893[18].offset = offsetof(jsonnodeobj337042, kindU.S7.Elems);
TMP893[18].typ = (&NTI337062);
TMP893[18].name = "elems";
NimDT_337042_kind[6] = &TMP893[18];
NTI337042.node = &TMP893[0];
NTI337040.size = sizeof(jsonnodeobj337042*);
NTI337040.kind = 22;
NTI337040.base = (&NTI337042);
NTI337040.flags = 2;
NTI337040.marker = TMP4760;
}

