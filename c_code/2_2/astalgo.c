/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tiitable236274 tiitable236274;
typedef struct tiipairseq236272 tiipairseq236272;
typedef struct tiipair236270 tiipair236270;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tstrtable226820 tstrtable226820;
typedef struct tsym226846 tsym226846;
typedef struct tsymseq226818 tsymseq226818;
typedef struct tidobj201015 tidobj201015;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq226848 ttypeseq226848;
typedef struct ttype226852 ttype226852;
typedef struct tscope226840 tscope226840;
typedef struct TY226947 TY226947;
typedef struct tinstantiation226836 tinstantiation226836;
typedef struct tident201021 tident201021;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct tnode226816 tnode226816;
typedef struct tloc226830 tloc226830;
typedef struct trope178009 trope178009;
typedef struct tlib226834 tlib226834;
typedef struct NimStringDesc NimStringDesc;
typedef struct tcell44935 tcell44935;
typedef struct tcellseq44951 tcellseq44951;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44947 tcellset44947;
typedef struct tpagedesc44943 tpagedesc44943;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct tidtable226864 tidtable226864;
typedef struct tidpairseq226862 tidpairseq226862;
typedef struct tidpair226860 tidpair226860;
typedef struct ttabiter236119 ttabiter236119;
typedef struct tnodeseq226810 tnodeseq226810;
typedef struct tidentiter236141 tidentiter236141;
typedef struct intset223056 intset223056;
typedef struct ttrunk223052 ttrunk223052;
typedef struct ttrunkseq223054 ttrunkseq223054;
typedef struct tidnodetable226870 tidnodetable226870;
typedef struct tidnodepairseq226868 tidnodepairseq226868;
typedef struct tidnodepair226866 tidnodepair226866;
typedef struct TY226936 TY226936;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
struct  tiipair236270  {
NI Key;
NI Val;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tiitable236274  {
NI Counter;
tiipairseq236272* Data;
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
struct  tstrtable226820  {
NI Counter;
tsymseq226818* Data;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj201015  {
  TNimObject Sup;
NI Id;
};
struct  tlineinfo196539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc226830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype226852* T;
trope178009* R;
trope178009* Heaproot;
};
struct  tsym226846  {
  tidobj201015 Sup;
NU8 Kind;
union {
struct {ttypeseq226848* Typeinstcache;
tscope226840* Typscope;
} S1;
struct {TY226947* Procinstcache;
tscope226840* Scope;
} S2;
struct {TY226947* Usedgenerics;
tstrtable226820 Tab;
} S3;
struct {tsym226846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype226852* Typ;
tident201021* Name;
tlineinfo196539 Info;
tsym226846* Owner;
NU32 Flags;
tnode226816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc226830 Loc;
tlib226834* Annex;
tnode226816* Constraint;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
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
struct  tidpair226860  {
tidobj201015* Key;
TNimObject* Val;
};
struct  tidtable226864  {
NI Counter;
tidpairseq226862* Data;
};
struct  ttabiter236119  {
NI H;
};
struct  tnode226816  {
ttype226852* Typ;
tlineinfo196539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym226846* Sym;
} S4;
struct {tident201021* Ident;
} S5;
struct {tnodeseq226810* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  tidentiter236141  {
NI H;
tident201021* Name;
};
struct  intset223056  {
NI Counter;
NI Max;
ttrunk223052* Head;
ttrunkseq223054* Data;
};
struct  tidnodepair226866  {
tidobj201015* Key;
tnode226816* Val;
};
struct  tidnodetable226870  {
NI Counter;
tidnodepairseq226868* Data;
};
struct  ttype226852  {
  tidobj201015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq226848* Sons;
tnode226816* N;
tsym226846* Owner;
tsym226846* Sym;
tsym226846* Destructor;
tsym226846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc226830 Loc;
};
struct  tscope226840  {
NI Depthlevel;
tstrtable226820 Symbols;
tnodeseq226810* Usingsyms;
tscope226840* Parent;
};
struct  tinstantiation226836  {
tsym226846* Sym;
ttypeseq226848* Concretetypes;
TY226936* Usedby;
};
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib226834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode226816* Path;
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
struct  ttrunk223052  {
ttrunk223052* Next;
NI Key;
TY26420 Bits;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct tiipairseq236272 {
  TGenericSeq Sup;
  tiipair236270 data[SEQ_DECL_SIZE];
};
struct tsymseq226818 {
  TGenericSeq Sup;
  tsym226846* data[SEQ_DECL_SIZE];
};
struct ttypeseq226848 {
  TGenericSeq Sup;
  ttype226852* data[SEQ_DECL_SIZE];
};
struct TY226947 {
  TGenericSeq Sup;
  tinstantiation226836* data[SEQ_DECL_SIZE];
};
struct tidpairseq226862 {
  TGenericSeq Sup;
  tidpair226860 data[SEQ_DECL_SIZE];
};
struct tnodeseq226810 {
  TGenericSeq Sup;
  tnode226816* data[SEQ_DECL_SIZE];
};
struct ttrunkseq223054 {
  TGenericSeq Sup;
  ttrunk223052* data[SEQ_DECL_SIZE];
};
struct tidnodepairseq226868 {
  TGenericSeq Sup;
  tidnodepair226866 data[SEQ_DECL_SIZE];
};
struct TY226936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP825)(void* p, NI op);
N_NIMCALL(NIM_BOOL, mustrehash_236249)(NI length, NI counter);
N_NIMCALL(void, strtableenlarge_241628)(tstrtable226820* t);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, strtablerawinsert_240805)(tsymseq226818** data, tsym226846* n);
static N_INLINE(NI, nexttry_236256)(NI h, NI maxhash);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, iitablerawget_244248)(tiitable236274 t, NI key);
N_NIMCALL(void, iitablerawinsert_244280)(tiipairseq236272** data, NI key, NI val);
N_NIMCALL(NI, idtablerawget_242542)(tidtable226864 t, NI key);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51025)(tcell44935* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44935* c);
static N_INLINE(void, rtladdcycleroot_49429)(tcell44935* c);
N_NOINLINE(void, incl_45671)(tcellset44947* s, tcell44935* cell);
static N_INLINE(void, decref_50604)(tcell44935* c);
N_NIMCALL(void, idtablerawinsert_242688)(tidpairseq226862** data, tidobj201015* key, TNimObject* val);
N_NIMCALL(tsym226846*, nextiter_236132)(ttabiter236119* ti, tstrtable226820 tab);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, reallysameident_241763)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, sonslen_227249)(tnode226816* n);
N_NIMCALL(void, internalerror_198987)(tlineinfo196539 info, NimStringDesc* errmsg);
static N_INLINE(NI, cmpStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, levalue_236487)(tnode226816* a, tnode226816* b);
N_NIMCALL(tsym226846*, nextidentiter_236156)(tidentiter236141* ti, tstrtable226820 tab);
N_NIMCALL(tsym226846*, nextidentexcluding_242317)(tidentiter236141* ti, tstrtable226820 tab, intset223056* excluding);
N_NIMCALL(NIM_BOOL, contains_223837)(intset223056* s, NI key);
N_NIMCALL(NI, idnodetablerawget_243503)(tidnodetable226870 t, tidobj201015* key);
N_NIMCALL(void, idnodetablerawinsert_243575)(tidnodepairseq226868** data, tidobj201015* key, tnode226816* val);
N_NIMCALL(tsym226846*, lookupinrecord_236236)(tnode226816* n, tident201021* field);
static N_INLINE(tnode226816*, lastson_227261)(tnode226816* n);
N_NIMCALL(void, symtabreplaceraw_241237)(tsymseq226818** data, tsym226846* prevsym, tsym226846* newsym);
STRING_LITERAL(TMP2707, "getSymFromList", 14);
STRING_LITERAL(TMP3188, "lookupInRecord", 14);
STRING_LITERAL(TMP3189, "lookupInRecord(record case branch)", 34);
STRING_LITERAL(TMP3190, "lookupInRecord()", 16);
TNimType NTI236274; /* TIITable */
extern TNimType NTI108; /* int */
TNimType NTI236270; /* TIIPair */
TNimType NTI236272; /* TIIPairSeq */
extern TNimType NTI226818; /* TSymSeq */
extern tgcheap47016 gch_47044;
extern TNimType NTI226862; /* TIdPairSeq */
extern TNimType NTI226868; /* TIdNodePairSeq */
N_NIMCALL(void, TMP825)(void* p, NI op) {
	tiipairseq236272* a;
	NI LOC1;
	a = (tiipairseq236272*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(NIM_BOOL, mustrehash_236249)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((NI64)(length * 2) < (NI64)(counter * 3));
	if (LOC1) goto LA2;
	LOC1 = ((NI64)(length - counter) < 4);
	LA2: ;
	result = LOC1;
	return result;
}

static N_INLINE(NI, nexttry_236256)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI64)((NI64)(5 * h) + 1) & maxhash);
	return result;
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

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44935* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48646(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44935* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48646((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, strtablerawinsert_240805)(tsymseq226818** data, tsym226846* n) {
	NI h;
	h = (NI)((*(*n).Name).H & ((*data)->Sup.len-1));
	{
		if (!!((((*n).Flags &(1<<((((NU8) 25))&31)))!=0))) goto LA3;
		{
			while (1) {
				if (!!(((*data)->data[h] == NIM_NIL))) goto LA6;
				{
					if (!((*data)->data[h] == n)) goto LA9;
					goto BeforeRet;
				}
				LA9: ;
				h = nexttry_236256(h, ((*data)->Sup.len-1));
			} LA6: ;
		}
		asgnRefNoCycle((void**) (&(*data)->data[h]), n);
	}
	goto LA1;
	LA3: ;
	{
		NI favpos;
		favpos = -1;
		{
			while (1) {
				if (!!(((*data)->data[h] == NIM_NIL))) goto LA13;
				{
					if (!((*data)->data[h] == n)) goto LA16;
					goto BeforeRet;
				}
				LA16: ;
				{
					NIM_BOOL LOC20;
					LOC20 = 0;
					LOC20 = (favpos < 0);
					if (!(LOC20)) goto LA21;
					LOC20 = ((*(*(*data)->data[h]).Name).Sup.Id == (*(*n).Name).Sup.Id);
					LA21: ;
					if (!LOC20) goto LA22;
					favpos = h;
				}
				LA22: ;
				h = nexttry_236256(h, ((*data)->Sup.len-1));
			} LA13: ;
		}
		asgnRefNoCycle((void**) (&(*data)->data[h]), n);
		{
			tsym226846* LOC28;
			if (!(0 <= favpos)) goto LA26;
			LOC28 = 0;
			LOC28 = (*data)->data[h];
			asgnRefNoCycle((void**) (&(*data)->data[h]), (*data)->data[favpos]);
			asgnRefNoCycle((void**) (&(*data)->data[favpos]), LOC28);
		}
		LA26: ;
	}
	LA1: ;
	BeforeRet: ;
}

N_NIMCALL(void, strtableenlarge_241628)(tstrtable226820* t) {
	tsymseq226818* n;
	tsymseq226818* LOC8;
	n = 0;
	n = (tsymseq226818*) newSeq((&NTI226818), (NI64)((*t).Data->Sup.len * 2));
	{
		NI i_241672;
		NI HEX3Atmp_241708;
		NI res_241711;
		i_241672 = 0;
		HEX3Atmp_241708 = 0;
		HEX3Atmp_241708 = ((*t).Data->Sup.len-1);
		res_241711 = 0;
		{
			while (1) {
				if (!(res_241711 <= HEX3Atmp_241708)) goto LA3;
				i_241672 = res_241711;
				{
					if (!!(((*t).Data->data[i_241672] == NIM_NIL))) goto LA6;
					strtablerawinsert_240805((&n), (*t).Data->data[i_241672]);
				}
				LA6: ;
				res_241711 += 1;
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).Data;
	unsureAsgnRef((void**) (&(*t).Data), n);
	n = LOC8;
}

N_NIMCALL(void, strtableadd_236103)(tstrtable226820* t, tsym226846* n) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = mustrehash_236249((*t).Data->Sup.len, (*t).Counter);
		if (!LOC3) goto LA4;
		strtableenlarge_241628(t);
	}
	LA4: ;
	strtablerawinsert_240805((&(*t).Data), n);
	(*t).Counter += 1;
}

N_NIMCALL(void, initiitable_236282)(tiitable236274* x) {
	(*x).Counter = 0;
	unsureAsgnRef((void**) (&(*x).Data), (tiipairseq236272*) newSeq((&NTI236272), 8));
	{
		NI i_244227;
		NI res_244231;
		i_244227 = 0;
		res_244231 = 0;
		{
			while (1) {
				if (!(res_244231 <= 7)) goto LA3;
				i_244227 = res_244231;
				(*x).Data->data[i_244227].Key = (IL64(-9223372036854775807) - IL64(1));
				res_244231 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(NI, iitablerawget_244248)(tiitable236274 t, NI key) {
	NI result;
	NI h;
	result = 0;
	h = 0;
	h = (NI)(key & (t.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t.Data->data[h].Key == (IL64(-9223372036854775807) - IL64(1))))) goto LA2;
			{
				if (!(t.Data->data[h].Key == key)) goto LA5;
				result = h;
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_236256(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, iitablerawinsert_244280)(tiipairseq236272** data, NI key, NI val) {
	NI h;
	h = 0;
	h = (NI)(key & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h].Key == (IL64(-9223372036854775807) - IL64(1))))) goto LA2;
			h = nexttry_236256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	(*data)->data[h].Key = key;
	(*data)->data[h].Val = val;
}

N_NIMCALL(void, iitableput_236296)(tiitable236274* t, NI key, NI val) {
	NI index;
	index = iitablerawget_244248((*t), key);
	{
		if (!(0 <= index)) goto LA3;
		(*t).Data->data[index].Val = val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			tiipairseq236272* n;
			tiipairseq236272* LOC21;
			LOC8 = 0;
			LOC8 = mustrehash_236249((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			n = 0;
			n = (tiipairseq236272*) newSeq((&NTI236272), (NI64)((*t).Data->Sup.len * 2));
			{
				NI i_244852;
				NI HEX3Atmp_244897;
				NI res_244900;
				i_244852 = 0;
				HEX3Atmp_244897 = 0;
				HEX3Atmp_244897 = (n->Sup.len-1);
				res_244900 = 0;
				{
					while (1) {
						if (!(res_244900 <= HEX3Atmp_244897)) goto LA13;
						i_244852 = res_244900;
						n->data[i_244852].Key = (IL64(-9223372036854775807) - IL64(1));
						res_244900 += 1;
					} LA13: ;
				}
			}
			{
				NI i_244865;
				NI HEX3Atmp_244903;
				NI res_244906;
				i_244865 = 0;
				HEX3Atmp_244903 = 0;
				HEX3Atmp_244903 = ((*t).Data->Sup.len-1);
				res_244906 = 0;
				{
					while (1) {
						if (!(res_244906 <= HEX3Atmp_244903)) goto LA16;
						i_244865 = res_244906;
						{
							if (!!(((*t).Data->data[i_244865].Key == (IL64(-9223372036854775807) - IL64(1))))) goto LA19;
							iitablerawinsert_244280((&n), (*t).Data->data[i_244865].Key, (*t).Data->data[i_244865].Val);
						}
						LA19: ;
						res_244906 += 1;
					} LA16: ;
				}
			}
			LOC21 = 0;
			LOC21 = (*t).Data;
			unsureAsgnRef((void**) (&(*t).Data), n);
			n = LOC21;
		}
		LA9: ;
		iitablerawinsert_244280((&(*t).Data), key, val);
		(*t).Counter += 1;
	}
	LA1: ;
}

N_NIMCALL(NI, idtablerawget_242542)(tidtable226864 t, NI key) {
	NI result;
	NI h;
	result = 0;
	h = 0;
	h = (NI)(key & (t.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t.Data->data[h].Key == NIM_NIL))) goto LA2;
			{
				if (!((*t.Data->data[h].Key).Id == key)) goto LA5;
				result = h;
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_236256(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
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

N_NIMCALL(void, idtablerawinsert_242688)(tidpairseq226862** data, tidobj201015* key, TNimObject* val) {
	NI h;
	h = 0;
	h = (NI)((*key).Id & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA2;
			h = nexttry_236256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h].Key), key);
	asgnRef((void**) (&(*data)->data[h].Val), val);
}

N_NIMCALL(void, idtableput_236196)(tidtable226864* t, tidobj201015* key, TNimObject* val) {
	NI index;
	tidpairseq226862* n;
	index = 0;
	n = 0;
	index = idtablerawget_242542((*t), (*key).Id);
	{
		if (!(0 <= index)) goto LA3;
		asgnRef((void**) (&(*t).Data->data[index].Val), val);
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			tidpairseq226862* LOC18;
			LOC8 = 0;
			LOC8 = mustrehash_236249((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			n = (tidpairseq226862*) newSeq((&NTI226862), (NI64)((*t).Data->Sup.len * 2));
			{
				NI i_243251;
				NI HEX3Atmp_243432;
				NI res_243435;
				i_243251 = 0;
				HEX3Atmp_243432 = 0;
				HEX3Atmp_243432 = ((*t).Data->Sup.len-1);
				res_243435 = 0;
				{
					while (1) {
						if (!(res_243435 <= HEX3Atmp_243432)) goto LA13;
						i_243251 = res_243435;
						{
							if (!!(((*t).Data->data[i_243251].Key == NIM_NIL))) goto LA16;
							idtablerawinsert_242688((&n), (*t).Data->data[i_243251].Key, (*t).Data->data[i_243251].Val);
						}
						LA16: ;
						res_243435 += 1;
					} LA13: ;
				}
			}
			LOC18 = 0;
			LOC18 = (*t).Data;
			unsureAsgnRef((void**) (&(*t).Data), n);
			n = LOC18;
		}
		LA9: ;
		idtablerawinsert_242688((&(*t).Data), key, val);
		(*t).Counter += 1;
	}
	LA1: ;
}

N_NIMCALL(TNimObject*, idtableget_236189)(tidtable226864 t, NI key) {
	TNimObject* result;
	NI index;
	result = 0;
	index = idtablerawget_242542(t, key);
	{
		if (!(0 <= index)) goto LA3;
		result = t.Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_NIL;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, iitableget_236289)(tiitable236274 t, NI key) {
	NI result;
	NI index;
	result = 0;
	index = iitablerawget_244248(t, key);
	{
		if (!(0 <= index)) goto LA3;
		result = t.Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	LA1: ;
	return result;
}

N_NIMCALL(tsym226846*, nextiter_236132)(ttabiter236119* ti, tstrtable226820 tab) {
	tsym226846* result;
	result = 0;
	result = NIM_NIL;
	{
		while (1) {
			if (!((*ti).H <= (tab.Data->Sup.len-1))) goto LA2;
			result = tab.Data->data[(*ti).H];
			(*ti).H += 1;
			{
				if (!!((result == NIM_NIL))) goto LA5;
				goto LA1;
			}
			LA5: ;
		} LA2: ;
	} LA1: ;
	return result;
}

N_NIMCALL(tsym226846*, inittabiter_236124)(ttabiter236119* ti, tstrtable226820 tab) {
	tsym226846* result;
	result = 0;
	(*ti).H = 0;
	{
		if (!(tab.Counter == 0)) goto LA3;
		result = NIM_NIL;
	}
	goto LA1;
	LA3: ;
	{
		result = nextiter_236132(ti, tab);
	}
	LA1: ;
	return result;
}

N_NIMCALL(tsym226846*, getmodule_236243)(tsym226846* s) {
	tsym226846* result;
	result = 0;
	result = s;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = !((result == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = !(((*result).Kind == ((NU8) 6)));
			LA4: ;
			if (!LOC3) goto LA2;
			result = (*result).Owner;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(TNimObject*, idtableget_236182)(tidtable226864 t, tidobj201015* key) {
	TNimObject* result;
	NI index;
	result = 0;
	index = idtablerawget_242542(t, (*key).Id);
	{
		if (!(0 <= index)) goto LA3;
		result = t.Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_NIL;
	}
	LA1: ;
	return result;
}

N_NIMCALL(tsym226846*, strtableget_236111)(tstrtable226820 t, tident201021* name) {
	tsym226846* result;
	NI h;
	result = 0;
	h = (NI)((*name).H & (t.Data->Sup.len-1));
	{
		while (1) {
			result = t.Data->data[h];
			{
				if (!(result == NIM_NIL)) goto LA5;
				goto LA1;
			}
			LA5: ;
			{
				if (!((*(*result).Name).Sup.Id == (*name).Sup.Id)) goto LA9;
				goto LA1;
			}
			LA9: ;
			h = nexttry_236256(h, (t.Data->Sup.len-1));
		}
	} LA1: ;
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

N_NIMCALL(NIM_BOOL, samevalue_236350)(tnode226816* a, tnode226816* b) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	switch ((*a).Kind) {
	case ((NU8) 5) ... ((NU8) 10):
	{
		{
			if (!((*b).Kind >= ((NU8) 5) && (*b).Kind <= ((NU8) 10))) goto LA4;
			result = ((*a).kindU.S1.Intval == (*b).kindU.S1.Intval);
		}
		LA4: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		{
			if (!((*b).Kind >= ((NU8) 16) && (*b).Kind <= ((NU8) 18))) goto LA9;
			result = ((*a).kindU.S2.Floatval == (*b).kindU.S2.Floatval);
		}
		LA9: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			if (!((*b).Kind >= ((NU8) 20) && (*b).Kind <= ((NU8) 22))) goto LA14;
			result = eqStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval);
		}
		LA14: ;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

static N_INLINE(NIM_BOOL, reallysameident_241763)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	result = 0;
	result = NIM_TRUE;
	return result;
}

N_NIMCALL(NIM_BOOL, strtableincl_241807)(tstrtable226820* t, tsym226846* n) {
	NIM_BOOL result;
	NI h;
	NI replaceslot;
	result = 0;
	h = (NI)((*(*n).Name).H & ((*t).Data->Sup.len-1));
	replaceslot = -1;
	{
		while (1) {
			tsym226846* it;
			it = (*t).Data->data[h];
			{
				if (!(it == NIM_NIL)) goto LA5;
				goto LA1;
			}
			LA5: ;
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = ((*(*it).Name).Sup.Id == (*(*n).Name).Sup.Id);
				if (!(LOC9)) goto LA10;
				LOC9 = reallysameident_241763((*(*it).Name).S, (*(*n).Name).S);
				LA10: ;
				if (!LOC9) goto LA11;
				{
					if (!(it == n)) goto LA15;
					result = NIM_FALSE;
					goto BeforeRet;
				}
				LA15: ;
				replaceslot = h;
			}
			LA11: ;
			h = nexttry_236256(h, ((*t).Data->Sup.len-1));
		}
	} LA1: ;
	{
		if (!(0 <= replaceslot)) goto LA19;
		asgnRefNoCycle((void**) (&(*t).Data->data[replaceslot]), n);
		result = NIM_TRUE;
		goto BeforeRet;
	}
	goto LA17;
	LA19: ;
	{
		NIM_BOOL LOC22;
		LOC22 = 0;
		LOC22 = mustrehash_236249((*t).Data->Sup.len, (*t).Counter);
		if (!LOC22) goto LA23;
		strtableenlarge_241628(t);
		strtablerawinsert_240805((&(*t).Data), n);
	}
	goto LA17;
	LA23: ;
	{
		asgnRefNoCycle((void**) (&(*t).Data->data[h]), n);
	}
	LA17: ;
	(*t).Counter += 1;
	result = NIM_FALSE;
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, sonslen_227249)(tnode226816* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

N_NIMCALL(tsym226846*, getsymfromlist_236228)(tnode226816* list, tident201021* ident, NI start) {
	tsym226846* result;
	result = 0;
	{
		NI i_237058;
		NI HEX3Atmp_237111;
		NI LOC2;
		NI res_237114;
		i_237058 = 0;
		HEX3Atmp_237111 = 0;
		LOC2 = 0;
		LOC2 = sonslen_227249(list);
		HEX3Atmp_237111 = (NI64)(LOC2 - 1);
		res_237114 = start;
		{
			while (1) {
				if (!(res_237114 <= HEX3Atmp_237111)) goto LA4;
				i_237058 = res_237114;
				{
					if (!((*(*list).kindU.S6.Sons->data[i_237058]).Kind == ((NU8) 3))) goto LA7;
					result = (*(*list).kindU.S6.Sons->data[i_237058]).kindU.S4.Sym;
					{
						if (!((*(*result).Name).Sup.Id == (*ident).Sup.Id)) goto LA11;
						goto BeforeRet;
					}
					LA11: ;
				}
				goto LA5;
				LA7: ;
				{
					internalerror_198987((*list).Info, ((NimStringDesc*) &TMP2707));
				}
				LA5: ;
				res_237114 += 1;
			} LA4: ;
		}
	}
	result = NIM_NIL;
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, cmpStrings)(NimStringDesc* a, NimStringDesc* b) {
	NI result;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = 0;
		goto BeforeRet;
	}
	LA3: ;
	{
		if (!(a == NIM_NIL)) goto LA7;
		result = -1;
		goto BeforeRet;
	}
	LA7: ;
	{
		if (!(b == NIM_NIL)) goto LA11;
		result = 1;
		goto BeforeRet;
	}
	LA11: ;
	LOC13 = 0;
	LOC13 = strcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)));
	result = ((NI) (LOC13));
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, levalue_236487)(tnode226816* a, tnode226816* b) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	switch ((*a).Kind) {
	case ((NU8) 5) ... ((NU8) 10):
	{
		{
			if (!((*b).Kind >= ((NU8) 5) && (*b).Kind <= ((NU8) 10))) goto LA4;
			result = ((*a).kindU.S1.Intval <= (*b).kindU.S1.Intval);
		}
		LA4: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		{
			if (!((*b).Kind >= ((NU8) 16) && (*b).Kind <= ((NU8) 18))) goto LA9;
			result = ((*a).kindU.S2.Floatval <= (*b).kindU.S2.Floatval);
		}
		LA9: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			if (!((*b).Kind >= ((NU8) 20) && (*b).Kind <= ((NU8) 22))) goto LA14;
			result = (cmpStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval) <= 0);
		}
		LA14: ;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(NU8, weaklevalue_236624)(tnode226816* a, tnode226816* b) {
	NU8 result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = !(((*a).Kind >= ((NU8) 5) && (*a).Kind <= ((NU8) 22)));
		if (LOC3) goto LA4;
		LOC3 = !(((*b).Kind >= ((NU8) 5) && (*b).Kind <= ((NU8) 22)));
		LA4: ;
		if (!LOC3) goto LA5;
		result = ((NU8) 0);
	}
	goto LA1;
	LA5: ;
	{
		{
			NIM_BOOL LOC10;
			LOC10 = 0;
			LOC10 = levalue_236487(a, b);
			if (!LOC10) goto LA11;
			result = ((NU8) 2);
		}
		goto LA8;
		LA11: ;
		{
			result = ((NU8) 1);
		}
		LA8: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(tsym226846*, nextidentiter_236156)(tidentiter236141* ti, tstrtable226820 tab) {
	tsym226846* result;
	NI h;
	NI start;
	result = 0;
	h = 0;
	start = 0;
	h = (NI)((*ti).H & (tab.Data->Sup.len-1));
	start = h;
	result = tab.Data->data[h];
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				if (!((*(*result).Name).Sup.Id == (*(*ti).Name).Sup.Id)) goto LA5;
				goto LA1;
			}
			LA5: ;
			h = nexttry_236256(h, (tab.Data->Sup.len-1));
			{
				if (!(h == start)) goto LA9;
				result = NIM_NIL;
				goto LA1;
			}
			LA9: ;
			result = tab.Data->data[h];
		} LA2: ;
	} LA1: ;
	(*ti).H = nexttry_236256(h, (tab.Data->Sup.len-1));
	return result;
}

N_NIMCALL(tsym226846*, initidentiter_236147)(tidentiter236141* ti, tstrtable226820 tab, tident201021* s) {
	tsym226846* result;
	result = 0;
	(*ti).H = (*s).H;
	unsureAsgnRef((void**) (&(*ti).Name), s);
	{
		if (!(tab.Counter == 0)) goto LA3;
		result = NIM_NIL;
	}
	goto LA1;
	LA3: ;
	{
		result = nextidentiter_236156(ti, tab);
	}
	LA1: ;
	return result;
}

N_NIMCALL(tsym226846*, nextidentexcluding_242317)(tidentiter236141* ti, tstrtable226820 tab, intset223056* excluding) {
	tsym226846* result;
	NI h;
	NI start;
	result = 0;
	h = (NI)((*ti).H & (tab.Data->Sup.len-1));
	start = h;
	result = tab.Data->data[h];
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				NIM_BOOL LOC7;
				LOC5 = 0;
				LOC5 = ((*(*result).Name).Sup.Id == (*(*ti).Name).Sup.Id);
				if (!(LOC5)) goto LA6;
				LOC7 = 0;
				LOC7 = contains_223837(excluding, (*result).Sup.Id);
				LOC5 = !(LOC7);
				LA6: ;
				if (!LOC5) goto LA8;
				goto LA1;
			}
			LA8: ;
			h = nexttry_236256(h, (tab.Data->Sup.len-1));
			{
				if (!(h == start)) goto LA12;
				result = NIM_NIL;
				goto LA1;
			}
			LA12: ;
			result = tab.Data->data[h];
		} LA2: ;
	} LA1: ;
	(*ti).H = nexttry_236256(h, (tab.Data->Sup.len-1));
	{
		NIM_BOOL LOC16;
		LOC16 = 0;
		LOC16 = !((result == NIM_NIL));
		if (!(LOC16)) goto LA17;
		LOC16 = contains_223837(excluding, (*result).Sup.Id);
		LA17: ;
		if (!LOC16) goto LA18;
		result = NIM_NIL;
	}
	LA18: ;
	return result;
}

N_NIMCALL(tsym226846*, firstidentexcluding_242374)(tidentiter236141* ti, tstrtable226820 tab, tident201021* s, intset223056* excluding) {
	tsym226846* result;
	result = 0;
	(*ti).H = (*s).H;
	unsureAsgnRef((void**) (&(*ti).Name), s);
	{
		if (!(tab.Counter == 0)) goto LA3;
		result = NIM_NIL;
	}
	goto LA1;
	LA3: ;
	{
		result = nextidentexcluding_242317(ti, tab, excluding);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, idnodetablerawget_243503)(tidnodetable226870 t, tidobj201015* key) {
	NI result;
	NI h;
	result = 0;
	h = 0;
	h = (NI)((*key).Id & (t.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t.Data->data[h].Key == NIM_NIL))) goto LA2;
			{
				if (!((*t.Data->data[h].Key).Id == (*key).Id)) goto LA5;
				result = h;
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_236256(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(tnode226816*, idnodetableget_236212)(tidnodetable226870 t, tidobj201015* key) {
	tnode226816* result;
	NI index;
	result = 0;
	index = 0;
	index = idnodetablerawget_243503(t, key);
	{
		if (!(0 <= index)) goto LA3;
		result = t.Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_NIL;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, idnodetablerawinsert_243575)(tidnodepairseq226868** data, tidobj201015* key, tnode226816* val) {
	NI h;
	h = 0;
	h = (NI)((*key).Id & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA2;
			h = nexttry_236256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h].Key), key);
	asgnRefNoCycle((void**) (&(*data)->data[h].Val), val);
}

N_NIMCALL(void, idnodetableput_236219)(tidnodetable226870* t, tidobj201015* key, tnode226816* val) {
	NI index;
	index = idnodetablerawget_243503((*t), key);
	{
		if (!(0 <= index)) goto LA3;
		asgnRefNoCycle((void**) (&(*t).Data->data[index].Val), val);
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			tidnodepairseq226868* n;
			tidnodepairseq226868* LOC18;
			LOC8 = 0;
			LOC8 = mustrehash_236249((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			n = 0;
			n = (tidnodepairseq226868*) newSeq((&NTI226868), (NI64)((*t).Data->Sup.len * 2));
			{
				NI i_244052;
				NI HEX3Atmp_244101;
				NI res_244104;
				i_244052 = 0;
				HEX3Atmp_244101 = 0;
				HEX3Atmp_244101 = ((*t).Data->Sup.len-1);
				res_244104 = 0;
				{
					while (1) {
						if (!(res_244104 <= HEX3Atmp_244101)) goto LA13;
						i_244052 = res_244104;
						{
							if (!!(((*t).Data->data[i_244052].Key == NIM_NIL))) goto LA16;
							idnodetablerawinsert_243575((&n), (*t).Data->data[i_244052].Key, (*t).Data->data[i_244052].Val);
						}
						LA16: ;
						res_244104 += 1;
					} LA13: ;
				}
			}
			LOC18 = 0;
			LOC18 = (*t).Data;
			unsureAsgnRef((void**) (&(*t).Data), n);
			n = LOC18;
		}
		LA9: ;
		idnodetablerawinsert_243575((&(*t).Data), key, val);
		(*t).Counter += 1;
	}
	LA1: ;
}

static N_INLINE(tnode226816*, lastson_227261)(tnode226816* n) {
	tnode226816* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sonslen_227249(n);
	result = (*n).kindU.S6.Sons->data[(NI64)(LOC1 - 1)];
	return result;
}

N_NIMCALL(tsym226846*, lookupinrecord_236236)(tnode226816* n, tident201021* field) {
	tsym226846* result;
	result = 0;
	result = NIM_NIL;
	switch ((*n).Kind) {
	case ((NU8) 137):
	{
		{
			NI i_236678;
			NI HEX3Atmp_236851;
			NI LOC3;
			NI res_236854;
			i_236678 = 0;
			HEX3Atmp_236851 = 0;
			LOC3 = 0;
			LOC3 = sonslen_227249(n);
			HEX3Atmp_236851 = (NI64)(LOC3 - 1);
			res_236854 = 0;
			{
				while (1) {
					if (!(res_236854 <= HEX3Atmp_236851)) goto LA5;
					i_236678 = res_236854;
					result = lookupinrecord_236236((*n).kindU.S6.Sons->data[i_236678], field);
					{
						if (!!((result == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_236854 += 1;
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 138):
	{
		{
			if (!!(((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3)))) goto LA13;
			internalerror_198987((*n).Info, ((NimStringDesc*) &TMP3188));
		}
		LA13: ;
		result = lookupinrecord_236236((*n).kindU.S6.Sons->data[0], field);
		{
			if (!!((result == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_236776;
			NI HEX3Atmp_236857;
			NI LOC20;
			NI res_236860;
			i_236776 = 0;
			HEX3Atmp_236857 = 0;
			LOC20 = 0;
			LOC20 = sonslen_227249(n);
			HEX3Atmp_236857 = (NI64)(LOC20 - 1);
			res_236860 = 1;
			{
				while (1) {
					if (!(res_236860 <= HEX3Atmp_236857)) goto LA22;
					i_236776 = res_236860;
					switch ((*(*n).kindU.S6.Sons->data[i_236776]).Kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						tnode226816* LOC24;
						LOC24 = 0;
						LOC24 = lastson_227261((*n).kindU.S6.Sons->data[i_236776]);
						result = lookupinrecord_236236(LOC24, field);
						{
							if (!!((result == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						internalerror_198987((*n).Info, ((NimStringDesc*) &TMP3189));
					}
					break;
					}
					res_236860 += 1;
				} LA22: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		{
			if (!((*(*(*n).kindU.S4.Sym).Name).Sup.Id == (*field).Sup.Id)) goto LA33;
			result = (*n).kindU.S4.Sym;
		}
		LA33: ;
	}
	break;
	default:
	{
		internalerror_198987((*n).Info, ((NimStringDesc*) &TMP3190));
	}
	break;
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(tnode226816*, skipconvandclosure_236305)(tnode226816* n) {
	tnode226816* result;
	result = 0;
	result = n;
	{
		while (1) {
			switch ((*result).Kind) {
			case ((NU8) 67):
			case ((NU8) 66):
			case ((NU8) 70):
			case ((NU8) 68):
			case ((NU8) 69):
			case ((NU8) 154):
			{
				result = (*result).kindU.S6.Sons->data[0];
			}
			break;
			case ((NU8) 58):
			case ((NU8) 59):
			case ((NU8) 60):
			{
				result = (*result).kindU.S6.Sons->data[1];
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	return result;
}

N_NIMCALL(void, symtabreplaceraw_241237)(tsymseq226818** data, tsym226846* prevsym, tsym226846* newsym) {
	NI h;
	h = (NI)((*(*prevsym).Name).H & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*data)->data[h] == prevsym)) goto LA5;
				asgnRefNoCycle((void**) (&(*data)->data[h]), newsym);
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_236256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	BeforeRet: ;
}

N_NIMCALL(void, symtabreplace_241615)(tstrtable226820* t, tsym226846* prevsym, tsym226846* newsym) {
	symtabreplaceraw_241237((&(*t).Data), prevsym, newsym);
}

N_NIMCALL(NIM_BOOL, idtablehasobjectaskey_236205)(tidtable226864 t, tidobj201015* key) {
	NIM_BOOL result;
	NI index;
	result = 0;
	index = idtablerawget_242542(t, (*key).Id);
	{
		if (!(0 <= index)) goto LA3;
		result = (t.Data->data[index].Key == key);
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_astalgoInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_astalgoDatInit)(void) {
static TNimNode* TMP823[2];
static TNimNode* TMP824[2];
static TNimNode TMP793[6];
NTI236274.size = sizeof(tiitable236274);
NTI236274.kind = 18;
NTI236274.base = 0;
NTI236274.flags = 2;
TMP823[0] = &TMP793[1];
TMP793[1].kind = 1;
TMP793[1].offset = offsetof(tiitable236274, Counter);
TMP793[1].typ = (&NTI108);
TMP793[1].name = "counter";
TMP823[1] = &TMP793[2];
NTI236270.size = sizeof(tiipair236270);
NTI236270.kind = 18;
NTI236270.base = 0;
NTI236270.flags = 3;
TMP824[0] = &TMP793[4];
TMP793[4].kind = 1;
TMP793[4].offset = offsetof(tiipair236270, Key);
TMP793[4].typ = (&NTI108);
TMP793[4].name = "key";
TMP824[1] = &TMP793[5];
TMP793[5].kind = 1;
TMP793[5].offset = offsetof(tiipair236270, Val);
TMP793[5].typ = (&NTI108);
TMP793[5].name = "val";
TMP793[3].len = 2; TMP793[3].kind = 2; TMP793[3].sons = &TMP824[0];
NTI236270.node = &TMP793[3];
NTI236272.size = sizeof(tiipairseq236272*);
NTI236272.kind = 24;
NTI236272.base = (&NTI236270);
NTI236272.flags = 2;
NTI236272.marker = TMP825;
TMP793[2].kind = 1;
TMP793[2].offset = offsetof(tiitable236274, Data);
TMP793[2].typ = (&NTI236272);
TMP793[2].name = "data";
TMP793[0].len = 2; TMP793[0].kind = 2; TMP793[0].sons = &TMP823[0];
NTI236274.node = &TMP793[0];
}

