/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct jsonnodeobj336042 jsonnodeobj336042;
typedef struct TY336611 TY336611;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY336057 TY336057;
typedef struct TY336062 TY336062;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell45135 tcell45135;
typedef struct tcellseq45151 tcellseq45151;
typedef struct tgcheap47216 tgcheap47216;
typedef struct tcellset45147 tcellset45147;
typedef struct tpagedesc45143 tpagedesc45143;
typedef struct tmemregion27410 tmemregion27410;
typedef struct tsmallchunk26640 tsmallchunk26640;
typedef struct tllchunk27404 tllchunk27404;
typedef struct tbigchunk26642 tbigchunk26642;
typedef struct tintset26617 tintset26617;
typedef struct ttrunk26613 ttrunk26613;
typedef struct tavlnode27408 tavlnode27408;
typedef struct tgcstat47214 tgcstat47214;
typedef struct tbasechunk26638 tbasechunk26638;
typedef struct tfreecell26630 tfreecell26630;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY336611 {
NimStringDesc* Field0;
jsonnodeobj336042* Field1;
};
struct  jsonnodeobj336042  {
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
struct {TY336057* Fields;
} S6;
struct {TY336062* Elems;
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
struct  tcell45135  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45151  {
NI Len;
NI Cap;
tcell45135** D;
};
struct  tcellset45147  {
NI Counter;
NI Max;
tpagedesc45143* Head;
tpagedesc45143** Data;
};
typedef tsmallchunk26640* TY27422[512];
typedef ttrunk26613* ttrunkbuckets26615[256];
struct  tintset26617  {
ttrunkbuckets26615 Data;
};
struct  tmemregion27410  {
NI Minlargeobj;
NI Maxlargeobj;
TY27422 Freesmallchunks;
tllchunk27404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26642* Freechunkslist;
tintset26617 Chunkstarts;
tavlnode27408* Root;
tavlnode27408* Deleted;
tavlnode27408* Last;
tavlnode27408* Freeavlnodes;
};
struct  tgcstat47214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45151 Zct;
tcellseq45151 Decstack;
tcellset45147 Cycleroots;
tcellseq45151 Tempstack;
NI Recgclock;
tmemregion27410 Region;
tgcstat47214 Stat;
};
typedef NI TY26620[8];
struct  tpagedesc45143  {
tpagedesc45143* Next;
NI Key;
TY26620 Bits;
};
struct  tbasechunk26638  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26640  {
  tbasechunk26638 Sup;
tsmallchunk26640* Next;
tsmallchunk26640* Prev;
tfreecell26630* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27404  {
NI Size;
NI Acc;
tllchunk27404* Next;
};
struct  tbigchunk26642  {
  tbasechunk26638 Sup;
tbigchunk26642* Next;
tbigchunk26642* Prev;
NI Align;
NF Data;
};
struct  ttrunk26613  {
ttrunk26613* Next;
NI Key;
TY26620 Bits;
};
typedef tavlnode27408* TY27414[2];
struct  tavlnode27408  {
TY27414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26630  {
tfreecell26630* Next;
NI Zerofield;
};
struct TY336057 {
  TGenericSeq Sup;
  TY336611 data[SEQ_DECL_SIZE];
};
struct TY336062 {
  TGenericSeq Sup;
  jsonnodeobj336042* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4756)(void* p, NI op);
N_NIMCALL(void, TMP4757)(void* p, NI op);
N_NIMCALL(void, TMP4758)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45135*, usrtocell_48846)(void* usr);
static N_INLINE(void, rtladdzct_50404)(tcell45135* c);
N_NOINLINE(void, addzct_48817)(tcellseq45151* s, tcell45135* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_337082)(TY336062* x_337088, TY336062* y_337093);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_337237)(TY336057* x_337243, TY336057* y_337248);
N_NIMCALL(void, topretty_340353)(NimStringDesc** result, jsonnodeobj336042* node, NI indent, NIM_BOOL ml, NIM_BOOL lstarr, NI currindent);
N_NIMCALL(void, nl_340305)(NimStringDesc** s, NIM_BOOL ml);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, indent_340282)(NimStringDesc** s, NI i);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
N_NIMCALL(NI, newindent_340293)(NI curr, NI indent, NIM_BOOL ml);
N_NIMCALL(NimStringDesc*, escapejson_340316)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x);
N_NIMCALL(NimStringDesc*, nimFloatToStr)(NF f);
N_NIMCALL(NimStringDesc*, nimBoolToStr)(NIM_BOOL x);
TNimNode* NimDT_336042_kind[8];
STRING_LITERAL(TMP4763, "", 0);
STRING_LITERAL(TMP4764, "\012", 1);
STRING_LITERAL(TMP4765, "{", 1);
STRING_LITERAL(TMP4766, ", ", 2);
STRING_LITERAL(TMP4767, "\"", 1);
STRING_LITERAL(TMP4768, "\\\"", 2);
STRING_LITERAL(TMP4769, "\\\\", 2);
STRING_LITERAL(TMP4770, "\\u", 2);
STRING_LITERAL(TMP4771, ": ", 2);
STRING_LITERAL(TMP4772, "}", 1);
STRING_LITERAL(TMP4773, "{}", 2);
STRING_LITERAL(TMP4776, "[", 1);
STRING_LITERAL(TMP4777, "]", 1);
STRING_LITERAL(TMP4778, "[]", 2);
STRING_LITERAL(TMP4779, "null", 4);
TNimType NTI336042; /* JsonNodeObj */
TNimType NTI336038; /* JsonNodeKind */
extern TNimType NTI149; /* string */
extern TNimType NTI5510; /* BiggestInt */
extern TNimType NTI128; /* float */
extern TNimType NTI138; /* bool */
TNimType NTI336611; /* tuple[key: string, val: JsonNode] */
TNimType NTI336057; /* seq[tuple[key: string, val: JsonNode]] */
TNimType NTI336062; /* seq[JsonNode] */
TNimType NTI336040; /* JsonNode */
extern tgcheap47216 gch_47244;
N_NIMCALL(void, TMP4756)(void* p, NI op) {
	TY336057* a;
	NI LOC1;
	a = (TY336057*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}
N_NIMCALL(void, TMP4757)(void* p, NI op) {
	TY336062* a;
	NI LOC1;
	a = (TY336062*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP4758)(void* p, NI op) {
	jsonnodeobj336042* a;
	a = (jsonnodeobj336042*)p;
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

static N_INLINE(tcell45135*, usrtocell_48846)(void* usr) {
	tcell45135* result;
	result = 0;
	result = ((tcell45135*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45135))))));
	return result;
}

static N_INLINE(void, rtladdzct_50404)(tcell45135* c) {
	addzct_48817((&gch_47244.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45135* c;
	c = usrtocell_48846(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50404(c);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45135* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48846(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45135* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48846((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(jsonnodeobj336042*, HEX25_336608)(TY336611* keyvals, NI keyvalsLen0) {
	jsonnodeobj336042* result;
	result = 0;
	result = (jsonnodeobj336042*) newObj((&NTI336040), sizeof(jsonnodeobj336042));
	(*result).Kind = ((NU8) 5);
	if ((*result).kindU.S6.Fields) nimGCunrefNoCycle((*result).kindU.S6.Fields);
	(*result).kindU.S6.Fields = (TY336057*) newSeqRC1((&NTI336057), keyvalsLen0);
	{
		NI i_336717;
		TY336611 p_336718;
		NI i_336736;
		i_336717 = 0;
		memset((void*)(&p_336718), 0, sizeof(p_336718));
		i_336736 = 0;
		{
			while (1) {
				NimStringDesc* LOC4;
				if (!(i_336736 < keyvalsLen0)) goto LA3;
				i_336717 = i_336736;
				p_336718.Field0 = keyvals[i_336736].Field0;
				p_336718.Field1 = keyvals[i_336736].Field1;
				LOC4 = 0;
				LOC4 = (*result).kindU.S6.Fields->data[i_336717].Field0; (*result).kindU.S6.Fields->data[i_336717].Field0 = copyStringRC1(p_336718.Field0);
				if (LOC4) nimGCunrefNoCycle(LOC4);
				asgnRefNoCycle((void**) (&(*result).kindU.S6.Fields->data[i_336717].Field1), p_336718.Field1);
				i_336736 += 1;
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(jsonnodeobj336042*, HEX25_336448)(NimStringDesc* s) {
	jsonnodeobj336042* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (jsonnodeobj336042*) newObj((&NTI336040), sizeof(jsonnodeobj336042));
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_339240)(jsonnodeobj336042* obj, NimStringDesc* key, jsonnodeobj336042* val) {
	TY336611 LOC8;
	NimStringDesc* LOC9;
	{
		NI i_339436;
		NI HEX3Atmp_339499;
		NI res_339502;
		i_339436 = 0;
		HEX3Atmp_339499 = 0;
		HEX3Atmp_339499 = (NI64)((*obj).kindU.S6.Fields->Sup.len - 1);
		res_339502 = 0;
		{
			while (1) {
				if (!(res_339502 <= HEX3Atmp_339499)) goto LA3;
				i_339436 = res_339502;
				{
					if (!eqStrings((*obj).kindU.S6.Fields->data[i_339436].Field0, key)) goto LA6;
					asgnRefNoCycle((void**) (&(*obj).kindU.S6.Fields->data[i_339436].Field1), val);
					goto BeforeRet;
				}
				LA6: ;
				res_339502 += 1;
			} LA3: ;
		}
	}
	memset((void*)(&LOC8), 0, sizeof(LOC8));
	LOC8.Field0 = copyString(key);
	LOC8.Field1 = val;
	(*obj).kindU.S6.Fields = (TY336057*) incrSeq(&((*obj).kindU.S6.Fields)->Sup, sizeof(TY336611));
	LOC9 = 0;
	LOC9 = (*obj).kindU.S6.Fields->data[(*obj).kindU.S6.Fields->Sup.len-1].Field0; (*obj).kindU.S6.Fields->data[(*obj).kindU.S6.Fields->Sup.len-1].Field0 = copyStringRC1(LOC8.Field0);
	if (LOC9) nimGCunrefNoCycle(LOC9);
	asgnRefNoCycle((void**) (&(*obj).kindU.S6.Fields->data[(*obj).kindU.S6.Fields->Sup.len-1].Field1), LOC8.Field1);
	BeforeRet: ;
}

N_NIMCALL(NIM_BOOL, HEX3DHEX3D_336893)(jsonnodeobj336042* a, jsonnodeobj336042* b) {
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
			result = HEX3DHEX3D_337082((*a).kindU.S7.Elems, (*b).kindU.S7.Elems);
		}
		break;
		case ((NU8) 5):
		{
			result = HEX3DHEX3D_337237((*a).kindU.S6.Fields, (*b).kindU.S6.Fields);
		}
		break;
		}
		goto BeforeRet;
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(jsonnodeobj336042*, newjarray_336389)(void) {
	jsonnodeobj336042* result;
	result = 0;
	result = (jsonnodeobj336042*) newObj((&NTI336040), sizeof(jsonnodeobj336042));
	(*result).Kind = ((NU8) 6);
	if ((*result).kindU.S7.Elems) nimGCunrefNoCycle((*result).kindU.S7.Elems);
	(*result).kindU.S7.Elems = (TY336062*) newSeqRC1((&NTI336062), 0);
	return result;
}

N_NIMCALL(void, add_338862)(jsonnodeobj336042* father, jsonnodeobj336042* child) {
	(*father).kindU.S7.Elems = (TY336062*) incrSeq(&((*father).kindU.S7.Elems)->Sup, sizeof(jsonnodeobj336042*));
	asgnRefNoCycle((void**) (&(*father).kindU.S7.Elems->data[(*father).kindU.S7.Elems->Sup.len-1]), child);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, nl_340305)(NimStringDesc** s, NIM_BOOL ml) {
	{
		if (!ml) goto LA3;
		(*s) = resizeString((*s), 1);
appendString((*s), ((NimStringDesc*) &TMP4764));
	}
	LA3: ;
}

N_NIMCALL(void, indent_340282)(NimStringDesc** s, NI i) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = nsuRepeatChar(i, 32);
	(*s) = resizeString((*s), LOC1->Sup.len + 0);
appendString((*s), LOC1);
}

N_NIMCALL(NI, newindent_340293)(NI curr, NI indent, NIM_BOOL ml) {
	NI result;
	result = 0;
	{
		if (!ml) goto LA3;
		result = (NI64)(curr + indent);
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

N_NIMCALL(NimStringDesc*, escapejson_340316)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString((NI64)(s->Sup.len + (NI)((NU64)(s->Sup.len) >> (NU64)(3))));
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP4767));
	{
		NI x_340320;
		NI i_340328;
		NI result_340330;
		x_340320 = 0;
		i_340328 = 0;
		result_340330 = 0;
		{
			while (1) {
				NI r;
				if (!(i_340328 < s->Sup.len)) goto LA3;
				{
					if (!((NU64)(((NU8)(s->data[i_340328]))) <= (NU64)(127))) goto LA6;
					result_340330 = ((NI) (((NU8)(s->data[i_340328]))));
					i_340328 += 1;
				}
				goto LA4;
				LA6: ;
				{
					if (!((NI)((NU64)(((NI) (((NU8)(s->data[i_340328]))))) >> (NU64)(5)) == 6)) goto LA9;
					result_340330 = (NI)((NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[i_340328])))) & 31)))) << (NU64)(6)) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_340328 + 1)])))) & 63))));
					i_340328 += 2;
				}
				goto LA4;
				LA9: ;
				{
					if (!((NI)((NU64)(((NI) (((NU8)(s->data[i_340328]))))) >> (NU64)(4)) == 14)) goto LA12;
					result_340330 = (NI)((NI)((NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[i_340328])))) & 15)))) << (NU64)(12)) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_340328 + 1)])))) & 63)))) << (NU64)(6))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_340328 + 2)])))) & 63))));
					i_340328 += 3;
				}
				goto LA4;
				LA12: ;
				{
					if (!((NI)((NU64)(((NI) (((NU8)(s->data[i_340328]))))) >> (NU64)(3)) == 30)) goto LA15;
					result_340330 = (NI)((NI)((NI)((NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[i_340328])))) & 7)))) << (NU64)(18)) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_340328 + 1)])))) & 63)))) << (NU64)(12))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_340328 + 2)])))) & 63)))) << (NU64)(6))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_340328 + 3)])))) & 63))));
					i_340328 += 4;
				}
				goto LA4;
				LA15: ;
				{
					if (!((NI)((NU64)(((NI) (((NU8)(s->data[i_340328]))))) >> (NU64)(2)) == 62)) goto LA18;
					result_340330 = (NI)((NI)((NI)((NI)((NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[i_340328])))) & 3)))) << (NU64)(24)) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_340328 + 1)])))) & 63)))) << (NU64)(18))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_340328 + 2)])))) & 63)))) << (NU64)(12))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_340328 + 3)])))) & 63)))) << (NU64)(6))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_340328 + 4)])))) & 63))));
					i_340328 += 5;
				}
				goto LA4;
				LA18: ;
				{
					if (!((NI)((NU64)(((NI) (((NU8)(s->data[i_340328]))))) >> (NU64)(1)) == 126)) goto LA21;
					result_340330 = (NI)((NI)((NI)((NI)((NI)((NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[i_340328])))) & 1)))) << (NU64)(30)) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_340328 + 1)])))) & 63)))) << (NU64)(24))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_340328 + 2)])))) & 63)))) << (NU64)(18))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_340328 + 3)])))) & 63)))) << (NU64)(12))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_340328 + 4)])))) & 63)))) << (NU64)(6))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_340328 + 5)])))) & 63))));
					i_340328 += 6;
				}
				goto LA4;
				LA21: ;
				{
					result_340330 = ((NI) (((NU8)(s->data[i_340328]))));
					i_340328 += 1;
				}
				LA4: ;
				x_340320 = result_340330;
				r = x_340320;
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
appendString(result, ((NimStringDesc*) &TMP4768));
					}
					break;
					case 92:
					{
						result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP4769));
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
appendString(result, ((NimStringDesc*) &TMP4770));
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
appendString(result, ((NimStringDesc*) &TMP4767));
	return result;
}

N_NIMCALL(void, topretty_340353)(NimStringDesc** result, jsonnodeobj336042* node, NI indent, NIM_BOOL ml, NIM_BOOL lstarr, NI currindent) {
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
			nl_340305(result, ml);
		}
		LA6: ;
		indent_340282(result, currindent);
		{
			if (!(0 < (*node).kindU.S6.Fields->Sup.len)) goto LA10;
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4765));
			nl_340305(result, ml);
			{
				NI i_340423;
				NI HEX3Atmp_340586;
				NI res_340589;
				i_340423 = 0;
				HEX3Atmp_340586 = 0;
				HEX3Atmp_340586 = (NI64)((*node).kindU.S6.Fields->Sup.len - 1);
				res_340589 = 0;
				{
					while (1) {
						NI LOC19;
						NimStringDesc* LOC20;
						NI LOC21;
						if (!(res_340589 <= HEX3Atmp_340586)) goto LA14;
						i_340423 = res_340589;
						{
							if (!(0 < i_340423)) goto LA17;
							(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4766));
							nl_340305(result, ml);
						}
						LA17: ;
						LOC19 = 0;
						LOC19 = newindent_340293(currindent, indent, ml);
						indent_340282(result, LOC19);
						LOC20 = 0;
						LOC20 = escapejson_340316((*node).kindU.S6.Fields->data[i_340423].Field0);
						(*result) = resizeString((*result), LOC20->Sup.len + 0);
appendString((*result), LOC20);
						(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4771));
						LOC21 = 0;
						LOC21 = newindent_340293(currindent, indent, ml);
						topretty_340353(result, (*node).kindU.S6.Fields->data[i_340423].Field1, indent, ml, NIM_FALSE, LOC21);
						res_340589 += 1;
					} LA14: ;
				}
			}
			nl_340305(result, ml);
			indent_340282(result, currindent);
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4772));
		}
		goto LA8;
		LA10: ;
		{
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4773));
		}
		LA8: ;
	}
	break;
	case ((NU8) 4):
	{
		NimStringDesc* LOC28;
		{
			if (!lstarr) goto LA26;
			indent_340282(result, currindent);
		}
		LA26: ;
		LOC28 = 0;
		LOC28 = escapejson_340316((*node).kindU.S1.Str);
		(*result) = resizeString((*result), LOC28->Sup.len + 0);
appendString((*result), LOC28);
	}
	break;
	case ((NU8) 2):
	{
		NimStringDesc* LOC34;
		{
			if (!lstarr) goto LA32;
			indent_340282(result, currindent);
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
			indent_340282(result, currindent);
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
			indent_340282(result, currindent);
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
			indent_340282(result, currindent);
		}
		LA50: ;
		{
			if (!!(((*node).kindU.S7.Elems->Sup.len == 0))) goto LA54;
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4776));
			nl_340305(result, ml);
			{
				NI i_340569;
				NI HEX3Atmp_340592;
				NI res_340595;
				i_340569 = 0;
				HEX3Atmp_340592 = 0;
				HEX3Atmp_340592 = (NI64)((*node).kindU.S7.Elems->Sup.len - 1);
				res_340595 = 0;
				{
					while (1) {
						NI LOC63;
						if (!(res_340595 <= HEX3Atmp_340592)) goto LA58;
						i_340569 = res_340595;
						{
							if (!(0 < i_340569)) goto LA61;
							(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4766));
							nl_340305(result, ml);
						}
						LA61: ;
						LOC63 = 0;
						LOC63 = newindent_340293(currindent, indent, ml);
						topretty_340353(result, (*node).kindU.S7.Elems->data[i_340569], indent, ml, NIM_TRUE, LOC63);
						res_340595 += 1;
					} LA58: ;
				}
			}
			nl_340305(result, ml);
			indent_340282(result, currindent);
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4777));
		}
		goto LA52;
		LA54: ;
		{
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4778));
		}
		LA52: ;
	}
	break;
	case ((NU8) 0):
	{
		{
			if (!lstarr) goto LA68;
			indent_340282(result, currindent);
		}
		LA68: ;
		(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP4779));
	}
	break;
	}
}

N_NIMCALL(NimStringDesc*, pretty_340621)(jsonnodeobj336042* node, NI indent) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP4763));
	topretty_340353((&result), node, indent, NIM_TRUE, NIM_FALSE, 0);
	return result;
}

N_NIMCALL(NimStringDesc*, HEX24_340633)(jsonnodeobj336042* node) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP4763));
	topretty_340353((&result), node, 1, NIM_FALSE, NIM_FALSE, 0);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_jsonDatInit)(void) {
static TNimNode* TMP4752[7];
NI TMP4754;
static char* NIM_CONST TMP4753[7] = {
"JNull", 
"JBool", 
"JInt", 
"JFloat", 
"JString", 
"JObject", 
"JArray"};
static TNimNode* TMP4755[2];
static TNimNode TMP880[19];
NTI336042.size = sizeof(jsonnodeobj336042);
NTI336042.kind = 18;
NTI336042.base = 0;
NTI336042.flags = 2;
NTI336038.size = sizeof(NU8);
NTI336038.kind = 14;
NTI336038.base = 0;
NTI336038.flags = 3;
for (TMP4754 = 0; TMP4754 < 7; TMP4754++) {
TMP880[TMP4754+1].kind = 1;
TMP880[TMP4754+1].offset = TMP4754;
TMP880[TMP4754+1].name = TMP4753[TMP4754];
TMP4752[TMP4754] = &TMP880[TMP4754+1];
}
TMP880[8].len = 7; TMP880[8].kind = 2; TMP880[8].sons = &TMP4752[0];
NTI336038.node = &TMP880[8];
TMP880[0].kind = 3;
TMP880[0].offset = offsetof(jsonnodeobj336042, Kind);
TMP880[0].typ = (&NTI336038);
TMP880[0].name = "kind";
TMP880[0].sons = &NimDT_336042_kind[0];
TMP880[0].len = 7;
TMP880[9].kind = 1;
TMP880[9].offset = offsetof(jsonnodeobj336042, kindU.S1.Str);
TMP880[9].typ = (&NTI149);
TMP880[9].name = "str";
NimDT_336042_kind[4] = &TMP880[9];
TMP880[10].kind = 1;
TMP880[10].offset = offsetof(jsonnodeobj336042, kindU.S2.Num);
TMP880[10].typ = (&NTI5510);
TMP880[10].name = "num";
NimDT_336042_kind[2] = &TMP880[10];
TMP880[11].kind = 1;
TMP880[11].offset = offsetof(jsonnodeobj336042, kindU.S3.Fnum);
TMP880[11].typ = (&NTI128);
TMP880[11].name = "fnum";
NimDT_336042_kind[3] = &TMP880[11];
TMP880[12].kind = 1;
TMP880[12].offset = offsetof(jsonnodeobj336042, kindU.S4.Bval);
TMP880[12].typ = (&NTI138);
TMP880[12].name = "bval";
NimDT_336042_kind[1] = &TMP880[12];
TMP880[13].len = 0; TMP880[13].kind = 2;
NimDT_336042_kind[0] = &TMP880[13];
NTI336611.size = sizeof(TY336611);
NTI336611.kind = 18;
NTI336611.base = 0;
NTI336611.flags = 2;
TMP4755[0] = &TMP880[16];
TMP880[16].kind = 1;
TMP880[16].offset = offsetof(TY336611, Field0);
TMP880[16].typ = (&NTI149);
TMP880[16].name = "Field0";
TMP4755[1] = &TMP880[17];
TMP880[17].kind = 1;
TMP880[17].offset = offsetof(TY336611, Field1);
TMP880[17].typ = (&NTI336040);
TMP880[17].name = "Field1";
TMP880[15].len = 2; TMP880[15].kind = 2; TMP880[15].sons = &TMP4755[0];
NTI336611.node = &TMP880[15];
NTI336057.size = sizeof(TY336057*);
NTI336057.kind = 24;
NTI336057.base = (&NTI336611);
NTI336057.flags = 2;
NTI336057.marker = TMP4756;
TMP880[14].kind = 1;
TMP880[14].offset = offsetof(jsonnodeobj336042, kindU.S6.Fields);
TMP880[14].typ = (&NTI336057);
TMP880[14].name = "fields";
NimDT_336042_kind[5] = &TMP880[14];
NTI336062.size = sizeof(TY336062*);
NTI336062.kind = 24;
NTI336062.base = (&NTI336040);
NTI336062.flags = 2;
NTI336062.marker = TMP4757;
TMP880[18].kind = 1;
TMP880[18].offset = offsetof(jsonnodeobj336042, kindU.S7.Elems);
TMP880[18].typ = (&NTI336062);
TMP880[18].name = "elems";
NimDT_336042_kind[6] = &TMP880[18];
NTI336042.node = &TMP880[0];
NTI336040.size = sizeof(jsonnodeobj336042*);
NTI336040.kind = 22;
NTI336040.base = (&NTI336042);
NTI336040.flags = 2;
NTI336040.marker = TMP4758;
}

