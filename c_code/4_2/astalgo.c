/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tiitable235274 tiitable235274;
typedef struct tiipairseq235272 tiipairseq235272;
typedef struct tiipair235270 tiipair235270;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tstrtable225820 tstrtable225820;
typedef struct tsym225846 tsym225846;
typedef struct tsymseq225818 tsymseq225818;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq225848 ttypeseq225848;
typedef struct ttype225852 ttype225852;
typedef struct tscope225840 tscope225840;
typedef struct TY225947 TY225947;
typedef struct tinstantiation225836 tinstantiation225836;
typedef struct tident200021 tident200021;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tnode225816 tnode225816;
typedef struct tloc225830 tloc225830;
typedef struct trope177009 trope177009;
typedef struct tlib225834 tlib225834;
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
typedef struct tidtable225864 tidtable225864;
typedef struct tidpairseq225862 tidpairseq225862;
typedef struct tidpair225860 tidpair225860;
typedef struct ttabiter235119 ttabiter235119;
typedef struct tnodeseq225810 tnodeseq225810;
typedef struct tidentiter235141 tidentiter235141;
typedef struct intset222056 intset222056;
typedef struct ttrunk222052 ttrunk222052;
typedef struct ttrunkseq222054 ttrunkseq222054;
typedef struct tidnodetable225870 tidnodetable225870;
typedef struct tidnodepairseq225868 tidnodepairseq225868;
typedef struct tidnodepair225866 tidnodepair225866;
typedef struct TY225936 TY225936;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
struct  tiipair235270  {
NI Key;
NI Val;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tiitable235274  {
NI Counter;
tiipairseq235272* Data;
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
struct  tstrtable225820  {
NI Counter;
tsymseq225818* Data;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc225830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype225852* T;
trope177009* R;
trope177009* Heaproot;
};
struct  tsym225846  {
  tidobj200015 Sup;
NU8 Kind;
union {
struct {ttypeseq225848* Typeinstcache;
tscope225840* Typscope;
} S1;
struct {TY225947* Procinstcache;
tscope225840* Scope;
} S2;
struct {TY225947* Usedgenerics;
tstrtable225820 Tab;
} S3;
struct {tsym225846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype225852* Typ;
tident200021* Name;
tlineinfo195539 Info;
tsym225846* Owner;
NU32 Flags;
tnode225816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc225830 Loc;
tlib225834* Annex;
tnode225816* Constraint;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
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
struct  tidpair225860  {
tidobj200015* Key;
TNimObject* Val;
};
struct  tidtable225864  {
NI Counter;
tidpairseq225862* Data;
};
struct  ttabiter235119  {
NI H;
};
struct  tnode225816  {
ttype225852* Typ;
tlineinfo195539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym225846* Sym;
} S4;
struct {tident200021* Ident;
} S5;
struct {tnodeseq225810* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  tidentiter235141  {
NI H;
tident200021* Name;
};
struct  intset222056  {
NI Counter;
NI Max;
ttrunk222052* Head;
ttrunkseq222054* Data;
};
struct  tidnodepair225866  {
tidobj200015* Key;
tnode225816* Val;
};
struct  tidnodetable225870  {
NI Counter;
tidnodepairseq225868* Data;
};
struct  ttype225852  {
  tidobj200015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq225848* Sons;
tnode225816* N;
tsym225846* Owner;
tsym225846* Sym;
tsym225846* Destructor;
tsym225846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc225830 Loc;
};
struct  tscope225840  {
NI Depthlevel;
tstrtable225820 Symbols;
tnodeseq225810* Usingsyms;
tscope225840* Parent;
};
struct  tinstantiation225836  {
tsym225846* Sym;
ttypeseq225848* Concretetypes;
TY225936* Usedby;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib225834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode225816* Path;
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
struct  ttrunk222052  {
ttrunk222052* Next;
NI Key;
TY26420 Bits;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct tiipairseq235272 {
  TGenericSeq Sup;
  tiipair235270 data[SEQ_DECL_SIZE];
};
struct tsymseq225818 {
  TGenericSeq Sup;
  tsym225846* data[SEQ_DECL_SIZE];
};
struct ttypeseq225848 {
  TGenericSeq Sup;
  ttype225852* data[SEQ_DECL_SIZE];
};
struct TY225947 {
  TGenericSeq Sup;
  tinstantiation225836* data[SEQ_DECL_SIZE];
};
struct tidpairseq225862 {
  TGenericSeq Sup;
  tidpair225860 data[SEQ_DECL_SIZE];
};
struct tnodeseq225810 {
  TGenericSeq Sup;
  tnode225816* data[SEQ_DECL_SIZE];
};
struct ttrunkseq222054 {
  TGenericSeq Sup;
  ttrunk222052* data[SEQ_DECL_SIZE];
};
struct tidnodepairseq225868 {
  TGenericSeq Sup;
  tidnodepair225866 data[SEQ_DECL_SIZE];
};
struct TY225936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP823)(void* p, NI op);
N_NIMCALL(NIM_BOOL, mustrehash_235249)(NI length, NI counter);
N_NIMCALL(void, strtableenlarge_240628)(tstrtable225820* t);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, strtablerawinsert_239805)(tsymseq225818** data, tsym225846* n);
static N_INLINE(NI, nexttry_235256)(NI h, NI maxhash);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, iitablerawget_243248)(tiitable235274 t, NI key);
N_NIMCALL(void, iitablerawinsert_243280)(tiipairseq235272** data, NI key, NI val);
N_NIMCALL(NI, idtablerawget_241542)(tidtable225864 t, NI key);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51025)(tcell44935* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44935* c);
static N_INLINE(void, rtladdcycleroot_49429)(tcell44935* c);
N_NOINLINE(void, incl_45671)(tcellset44947* s, tcell44935* cell);
static N_INLINE(void, decref_50604)(tcell44935* c);
N_NIMCALL(void, idtablerawinsert_241688)(tidpairseq225862** data, tidobj200015* key, TNimObject* val);
N_NIMCALL(tsym225846*, nextiter_235132)(ttabiter235119* ti, tstrtable225820 tab);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, reallysameident_240763)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, sonslen_226249)(tnode225816* n);
N_NIMCALL(void, internalerror_197987)(tlineinfo195539 info, NimStringDesc* errmsg);
static N_INLINE(NI, cmpStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, levalue_235487)(tnode225816* a, tnode225816* b);
N_NIMCALL(tsym225846*, nextidentiter_235156)(tidentiter235141* ti, tstrtable225820 tab);
N_NIMCALL(tsym225846*, nextidentexcluding_241317)(tidentiter235141* ti, tstrtable225820 tab, intset222056* excluding);
N_NIMCALL(NIM_BOOL, contains_222837)(intset222056* s, NI key);
N_NIMCALL(NI, idnodetablerawget_242503)(tidnodetable225870 t, tidobj200015* key);
N_NIMCALL(void, idnodetablerawinsert_242575)(tidnodepairseq225868** data, tidobj200015* key, tnode225816* val);
N_NIMCALL(tsym225846*, lookupinrecord_235236)(tnode225816* n, tident200021* field);
static N_INLINE(tnode225816*, lastson_226261)(tnode225816* n);
N_NIMCALL(void, symtabreplaceraw_240237)(tsymseq225818** data, tsym225846* prevsym, tsym225846* newsym);
STRING_LITERAL(TMP2706, "getSymFromList", 14);
STRING_LITERAL(TMP3186, "lookupInRecord", 14);
STRING_LITERAL(TMP3187, "lookupInRecord(record case branch)", 34);
STRING_LITERAL(TMP3188, "lookupInRecord()", 16);
TNimType NTI235274; /* TIITable */
extern TNimType NTI108; /* int */
TNimType NTI235270; /* TIIPair */
TNimType NTI235272; /* TIIPairSeq */
extern TNimType NTI225818; /* TSymSeq */
extern tgcheap47016 gch_47044;
extern TNimType NTI225862; /* TIdPairSeq */
extern TNimType NTI225868; /* TIdNodePairSeq */
N_NIMCALL(void, TMP823)(void* p, NI op) {
	tiipairseq235272* a;
	NI LOC1;
	a = (tiipairseq235272*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(NIM_BOOL, mustrehash_235249)(NI length, NI counter) {
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

static N_INLINE(NI, nexttry_235256)(NI h, NI maxhash) {
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

N_NIMCALL(void, strtablerawinsert_239805)(tsymseq225818** data, tsym225846* n) {
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
				h = nexttry_235256(h, ((*data)->Sup.len-1));
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
				h = nexttry_235256(h, ((*data)->Sup.len-1));
			} LA13: ;
		}
		asgnRefNoCycle((void**) (&(*data)->data[h]), n);
		{
			tsym225846* LOC28;
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

N_NIMCALL(void, strtableenlarge_240628)(tstrtable225820* t) {
	tsymseq225818* n;
	tsymseq225818* LOC8;
	n = 0;
	n = (tsymseq225818*) newSeq((&NTI225818), (NI64)((*t).Data->Sup.len * 2));
	{
		NI i_240672;
		NI HEX3Atmp_240708;
		NI res_240711;
		i_240672 = 0;
		HEX3Atmp_240708 = 0;
		HEX3Atmp_240708 = ((*t).Data->Sup.len-1);
		res_240711 = 0;
		{
			while (1) {
				if (!(res_240711 <= HEX3Atmp_240708)) goto LA3;
				i_240672 = res_240711;
				{
					if (!!(((*t).Data->data[i_240672] == NIM_NIL))) goto LA6;
					strtablerawinsert_239805((&n), (*t).Data->data[i_240672]);
				}
				LA6: ;
				res_240711 += 1;
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).Data;
	unsureAsgnRef((void**) (&(*t).Data), n);
	n = LOC8;
}

N_NIMCALL(void, strtableadd_235103)(tstrtable225820* t, tsym225846* n) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = mustrehash_235249((*t).Data->Sup.len, (*t).Counter);
		if (!LOC3) goto LA4;
		strtableenlarge_240628(t);
	}
	LA4: ;
	strtablerawinsert_239805((&(*t).Data), n);
	(*t).Counter += 1;
}

N_NIMCALL(void, initiitable_235282)(tiitable235274* x) {
	(*x).Counter = 0;
	unsureAsgnRef((void**) (&(*x).Data), (tiipairseq235272*) newSeq((&NTI235272), 8));
	{
		NI i_243227;
		NI res_243231;
		i_243227 = 0;
		res_243231 = 0;
		{
			while (1) {
				if (!(res_243231 <= 7)) goto LA3;
				i_243227 = res_243231;
				(*x).Data->data[i_243227].Key = (IL64(-9223372036854775807) - IL64(1));
				res_243231 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(NI, iitablerawget_243248)(tiitable235274 t, NI key) {
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
			h = nexttry_235256(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, iitablerawinsert_243280)(tiipairseq235272** data, NI key, NI val) {
	NI h;
	h = 0;
	h = (NI)(key & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h].Key == (IL64(-9223372036854775807) - IL64(1))))) goto LA2;
			h = nexttry_235256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	(*data)->data[h].Key = key;
	(*data)->data[h].Val = val;
}

N_NIMCALL(void, iitableput_235296)(tiitable235274* t, NI key, NI val) {
	NI index;
	index = iitablerawget_243248((*t), key);
	{
		if (!(0 <= index)) goto LA3;
		(*t).Data->data[index].Val = val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			tiipairseq235272* n;
			tiipairseq235272* LOC21;
			LOC8 = 0;
			LOC8 = mustrehash_235249((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			n = 0;
			n = (tiipairseq235272*) newSeq((&NTI235272), (NI64)((*t).Data->Sup.len * 2));
			{
				NI i_243852;
				NI HEX3Atmp_243897;
				NI res_243900;
				i_243852 = 0;
				HEX3Atmp_243897 = 0;
				HEX3Atmp_243897 = (n->Sup.len-1);
				res_243900 = 0;
				{
					while (1) {
						if (!(res_243900 <= HEX3Atmp_243897)) goto LA13;
						i_243852 = res_243900;
						n->data[i_243852].Key = (IL64(-9223372036854775807) - IL64(1));
						res_243900 += 1;
					} LA13: ;
				}
			}
			{
				NI i_243865;
				NI HEX3Atmp_243903;
				NI res_243906;
				i_243865 = 0;
				HEX3Atmp_243903 = 0;
				HEX3Atmp_243903 = ((*t).Data->Sup.len-1);
				res_243906 = 0;
				{
					while (1) {
						if (!(res_243906 <= HEX3Atmp_243903)) goto LA16;
						i_243865 = res_243906;
						{
							if (!!(((*t).Data->data[i_243865].Key == (IL64(-9223372036854775807) - IL64(1))))) goto LA19;
							iitablerawinsert_243280((&n), (*t).Data->data[i_243865].Key, (*t).Data->data[i_243865].Val);
						}
						LA19: ;
						res_243906 += 1;
					} LA16: ;
				}
			}
			LOC21 = 0;
			LOC21 = (*t).Data;
			unsureAsgnRef((void**) (&(*t).Data), n);
			n = LOC21;
		}
		LA9: ;
		iitablerawinsert_243280((&(*t).Data), key, val);
		(*t).Counter += 1;
	}
	LA1: ;
}

N_NIMCALL(NI, idtablerawget_241542)(tidtable225864 t, NI key) {
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
			h = nexttry_235256(h, (t.Data->Sup.len-1));
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

N_NIMCALL(void, idtablerawinsert_241688)(tidpairseq225862** data, tidobj200015* key, TNimObject* val) {
	NI h;
	h = 0;
	h = (NI)((*key).Id & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA2;
			h = nexttry_235256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h].Key), key);
	asgnRef((void**) (&(*data)->data[h].Val), val);
}

N_NIMCALL(void, idtableput_235196)(tidtable225864* t, tidobj200015* key, TNimObject* val) {
	NI index;
	tidpairseq225862* n;
	index = 0;
	n = 0;
	index = idtablerawget_241542((*t), (*key).Id);
	{
		if (!(0 <= index)) goto LA3;
		asgnRef((void**) (&(*t).Data->data[index].Val), val);
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			tidpairseq225862* LOC18;
			LOC8 = 0;
			LOC8 = mustrehash_235249((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			n = (tidpairseq225862*) newSeq((&NTI225862), (NI64)((*t).Data->Sup.len * 2));
			{
				NI i_242251;
				NI HEX3Atmp_242432;
				NI res_242435;
				i_242251 = 0;
				HEX3Atmp_242432 = 0;
				HEX3Atmp_242432 = ((*t).Data->Sup.len-1);
				res_242435 = 0;
				{
					while (1) {
						if (!(res_242435 <= HEX3Atmp_242432)) goto LA13;
						i_242251 = res_242435;
						{
							if (!!(((*t).Data->data[i_242251].Key == NIM_NIL))) goto LA16;
							idtablerawinsert_241688((&n), (*t).Data->data[i_242251].Key, (*t).Data->data[i_242251].Val);
						}
						LA16: ;
						res_242435 += 1;
					} LA13: ;
				}
			}
			LOC18 = 0;
			LOC18 = (*t).Data;
			unsureAsgnRef((void**) (&(*t).Data), n);
			n = LOC18;
		}
		LA9: ;
		idtablerawinsert_241688((&(*t).Data), key, val);
		(*t).Counter += 1;
	}
	LA1: ;
}

N_NIMCALL(TNimObject*, idtableget_235189)(tidtable225864 t, NI key) {
	TNimObject* result;
	NI index;
	result = 0;
	index = idtablerawget_241542(t, key);
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

N_NIMCALL(NI, iitableget_235289)(tiitable235274 t, NI key) {
	NI result;
	NI index;
	result = 0;
	index = iitablerawget_243248(t, key);
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

N_NIMCALL(tsym225846*, nextiter_235132)(ttabiter235119* ti, tstrtable225820 tab) {
	tsym225846* result;
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

N_NIMCALL(tsym225846*, inittabiter_235124)(ttabiter235119* ti, tstrtable225820 tab) {
	tsym225846* result;
	result = 0;
	(*ti).H = 0;
	{
		if (!(tab.Counter == 0)) goto LA3;
		result = NIM_NIL;
	}
	goto LA1;
	LA3: ;
	{
		result = nextiter_235132(ti, tab);
	}
	LA1: ;
	return result;
}

N_NIMCALL(tsym225846*, getmodule_235243)(tsym225846* s) {
	tsym225846* result;
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

N_NIMCALL(TNimObject*, idtableget_235182)(tidtable225864 t, tidobj200015* key) {
	TNimObject* result;
	NI index;
	result = 0;
	index = idtablerawget_241542(t, (*key).Id);
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

N_NIMCALL(tsym225846*, strtableget_235111)(tstrtable225820 t, tident200021* name) {
	tsym225846* result;
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
			h = nexttry_235256(h, (t.Data->Sup.len-1));
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

N_NIMCALL(NIM_BOOL, samevalue_235350)(tnode225816* a, tnode225816* b) {
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

static N_INLINE(NIM_BOOL, reallysameident_240763)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	result = 0;
	result = NIM_TRUE;
	return result;
}

N_NIMCALL(NIM_BOOL, strtableincl_240807)(tstrtable225820* t, tsym225846* n) {
	NIM_BOOL result;
	NI h;
	NI replaceslot;
	result = 0;
	h = (NI)((*(*n).Name).H & ((*t).Data->Sup.len-1));
	replaceslot = -1;
	{
		while (1) {
			tsym225846* it;
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
				LOC9 = reallysameident_240763((*(*it).Name).S, (*(*n).Name).S);
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
			h = nexttry_235256(h, ((*t).Data->Sup.len-1));
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
		LOC22 = mustrehash_235249((*t).Data->Sup.len, (*t).Counter);
		if (!LOC22) goto LA23;
		strtableenlarge_240628(t);
		strtablerawinsert_239805((&(*t).Data), n);
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

static N_INLINE(NI, sonslen_226249)(tnode225816* n) {
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

N_NIMCALL(tsym225846*, getsymfromlist_235228)(tnode225816* list, tident200021* ident, NI start) {
	tsym225846* result;
	result = 0;
	{
		NI i_236058;
		NI HEX3Atmp_236111;
		NI LOC2;
		NI res_236114;
		i_236058 = 0;
		HEX3Atmp_236111 = 0;
		LOC2 = 0;
		LOC2 = sonslen_226249(list);
		HEX3Atmp_236111 = (NI64)(LOC2 - 1);
		res_236114 = start;
		{
			while (1) {
				if (!(res_236114 <= HEX3Atmp_236111)) goto LA4;
				i_236058 = res_236114;
				{
					if (!((*(*list).kindU.S6.Sons->data[i_236058]).Kind == ((NU8) 3))) goto LA7;
					result = (*(*list).kindU.S6.Sons->data[i_236058]).kindU.S4.Sym;
					{
						if (!((*(*result).Name).Sup.Id == (*ident).Sup.Id)) goto LA11;
						goto BeforeRet;
					}
					LA11: ;
				}
				goto LA5;
				LA7: ;
				{
					internalerror_197987((*list).Info, ((NimStringDesc*) &TMP2706));
				}
				LA5: ;
				res_236114 += 1;
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

N_NIMCALL(NIM_BOOL, levalue_235487)(tnode225816* a, tnode225816* b) {
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

N_NIMCALL(NU8, weaklevalue_235624)(tnode225816* a, tnode225816* b) {
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
			LOC10 = levalue_235487(a, b);
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

N_NIMCALL(tsym225846*, nextidentiter_235156)(tidentiter235141* ti, tstrtable225820 tab) {
	tsym225846* result;
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
			h = nexttry_235256(h, (tab.Data->Sup.len-1));
			{
				if (!(h == start)) goto LA9;
				result = NIM_NIL;
				goto LA1;
			}
			LA9: ;
			result = tab.Data->data[h];
		} LA2: ;
	} LA1: ;
	(*ti).H = nexttry_235256(h, (tab.Data->Sup.len-1));
	return result;
}

N_NIMCALL(tsym225846*, initidentiter_235147)(tidentiter235141* ti, tstrtable225820 tab, tident200021* s) {
	tsym225846* result;
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
		result = nextidentiter_235156(ti, tab);
	}
	LA1: ;
	return result;
}

N_NIMCALL(tsym225846*, nextidentexcluding_241317)(tidentiter235141* ti, tstrtable225820 tab, intset222056* excluding) {
	tsym225846* result;
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
				LOC7 = contains_222837(excluding, (*result).Sup.Id);
				LOC5 = !(LOC7);
				LA6: ;
				if (!LOC5) goto LA8;
				goto LA1;
			}
			LA8: ;
			h = nexttry_235256(h, (tab.Data->Sup.len-1));
			{
				if (!(h == start)) goto LA12;
				result = NIM_NIL;
				goto LA1;
			}
			LA12: ;
			result = tab.Data->data[h];
		} LA2: ;
	} LA1: ;
	(*ti).H = nexttry_235256(h, (tab.Data->Sup.len-1));
	{
		NIM_BOOL LOC16;
		LOC16 = 0;
		LOC16 = !((result == NIM_NIL));
		if (!(LOC16)) goto LA17;
		LOC16 = contains_222837(excluding, (*result).Sup.Id);
		LA17: ;
		if (!LOC16) goto LA18;
		result = NIM_NIL;
	}
	LA18: ;
	return result;
}

N_NIMCALL(tsym225846*, firstidentexcluding_241374)(tidentiter235141* ti, tstrtable225820 tab, tident200021* s, intset222056* excluding) {
	tsym225846* result;
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
		result = nextidentexcluding_241317(ti, tab, excluding);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, idnodetablerawget_242503)(tidnodetable225870 t, tidobj200015* key) {
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
			h = nexttry_235256(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(tnode225816*, idnodetableget_235212)(tidnodetable225870 t, tidobj200015* key) {
	tnode225816* result;
	NI index;
	result = 0;
	index = 0;
	index = idnodetablerawget_242503(t, key);
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

N_NIMCALL(void, idnodetablerawinsert_242575)(tidnodepairseq225868** data, tidobj200015* key, tnode225816* val) {
	NI h;
	h = 0;
	h = (NI)((*key).Id & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA2;
			h = nexttry_235256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h].Key), key);
	asgnRefNoCycle((void**) (&(*data)->data[h].Val), val);
}

N_NIMCALL(void, idnodetableput_235219)(tidnodetable225870* t, tidobj200015* key, tnode225816* val) {
	NI index;
	index = idnodetablerawget_242503((*t), key);
	{
		if (!(0 <= index)) goto LA3;
		asgnRefNoCycle((void**) (&(*t).Data->data[index].Val), val);
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			tidnodepairseq225868* n;
			tidnodepairseq225868* LOC18;
			LOC8 = 0;
			LOC8 = mustrehash_235249((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			n = 0;
			n = (tidnodepairseq225868*) newSeq((&NTI225868), (NI64)((*t).Data->Sup.len * 2));
			{
				NI i_243052;
				NI HEX3Atmp_243101;
				NI res_243104;
				i_243052 = 0;
				HEX3Atmp_243101 = 0;
				HEX3Atmp_243101 = ((*t).Data->Sup.len-1);
				res_243104 = 0;
				{
					while (1) {
						if (!(res_243104 <= HEX3Atmp_243101)) goto LA13;
						i_243052 = res_243104;
						{
							if (!!(((*t).Data->data[i_243052].Key == NIM_NIL))) goto LA16;
							idnodetablerawinsert_242575((&n), (*t).Data->data[i_243052].Key, (*t).Data->data[i_243052].Val);
						}
						LA16: ;
						res_243104 += 1;
					} LA13: ;
				}
			}
			LOC18 = 0;
			LOC18 = (*t).Data;
			unsureAsgnRef((void**) (&(*t).Data), n);
			n = LOC18;
		}
		LA9: ;
		idnodetablerawinsert_242575((&(*t).Data), key, val);
		(*t).Counter += 1;
	}
	LA1: ;
}

static N_INLINE(tnode225816*, lastson_226261)(tnode225816* n) {
	tnode225816* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sonslen_226249(n);
	result = (*n).kindU.S6.Sons->data[(NI64)(LOC1 - 1)];
	return result;
}

N_NIMCALL(tsym225846*, lookupinrecord_235236)(tnode225816* n, tident200021* field) {
	tsym225846* result;
	result = 0;
	result = NIM_NIL;
	switch ((*n).Kind) {
	case ((NU8) 137):
	{
		{
			NI i_235678;
			NI HEX3Atmp_235851;
			NI LOC3;
			NI res_235854;
			i_235678 = 0;
			HEX3Atmp_235851 = 0;
			LOC3 = 0;
			LOC3 = sonslen_226249(n);
			HEX3Atmp_235851 = (NI64)(LOC3 - 1);
			res_235854 = 0;
			{
				while (1) {
					if (!(res_235854 <= HEX3Atmp_235851)) goto LA5;
					i_235678 = res_235854;
					result = lookupinrecord_235236((*n).kindU.S6.Sons->data[i_235678], field);
					{
						if (!!((result == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_235854 += 1;
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 138):
	{
		{
			if (!!(((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3)))) goto LA13;
			internalerror_197987((*n).Info, ((NimStringDesc*) &TMP3186));
		}
		LA13: ;
		result = lookupinrecord_235236((*n).kindU.S6.Sons->data[0], field);
		{
			if (!!((result == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_235776;
			NI HEX3Atmp_235857;
			NI LOC20;
			NI res_235860;
			i_235776 = 0;
			HEX3Atmp_235857 = 0;
			LOC20 = 0;
			LOC20 = sonslen_226249(n);
			HEX3Atmp_235857 = (NI64)(LOC20 - 1);
			res_235860 = 1;
			{
				while (1) {
					if (!(res_235860 <= HEX3Atmp_235857)) goto LA22;
					i_235776 = res_235860;
					switch ((*(*n).kindU.S6.Sons->data[i_235776]).Kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						tnode225816* LOC24;
						LOC24 = 0;
						LOC24 = lastson_226261((*n).kindU.S6.Sons->data[i_235776]);
						result = lookupinrecord_235236(LOC24, field);
						{
							if (!!((result == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						internalerror_197987((*n).Info, ((NimStringDesc*) &TMP3187));
					}
					break;
					}
					res_235860 += 1;
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
		internalerror_197987((*n).Info, ((NimStringDesc*) &TMP3188));
	}
	break;
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(tnode225816*, skipconvandclosure_235305)(tnode225816* n) {
	tnode225816* result;
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

N_NIMCALL(void, symtabreplaceraw_240237)(tsymseq225818** data, tsym225846* prevsym, tsym225846* newsym) {
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
			h = nexttry_235256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	BeforeRet: ;
}

N_NIMCALL(void, symtabreplace_240615)(tstrtable225820* t, tsym225846* prevsym, tsym225846* newsym) {
	symtabreplaceraw_240237((&(*t).Data), prevsym, newsym);
}

N_NIMCALL(NIM_BOOL, idtablehasobjectaskey_235205)(tidtable225864 t, tidobj200015* key) {
	NIM_BOOL result;
	NI index;
	result = 0;
	index = idtablerawget_241542(t, (*key).Id);
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
static TNimNode* TMP821[2];
static TNimNode* TMP822[2];
static TNimNode TMP791[6];
NTI235274.size = sizeof(tiitable235274);
NTI235274.kind = 18;
NTI235274.base = 0;
NTI235274.flags = 2;
TMP821[0] = &TMP791[1];
TMP791[1].kind = 1;
TMP791[1].offset = offsetof(tiitable235274, Counter);
TMP791[1].typ = (&NTI108);
TMP791[1].name = "counter";
TMP821[1] = &TMP791[2];
NTI235270.size = sizeof(tiipair235270);
NTI235270.kind = 18;
NTI235270.base = 0;
NTI235270.flags = 3;
TMP822[0] = &TMP791[4];
TMP791[4].kind = 1;
TMP791[4].offset = offsetof(tiipair235270, Key);
TMP791[4].typ = (&NTI108);
TMP791[4].name = "key";
TMP822[1] = &TMP791[5];
TMP791[5].kind = 1;
TMP791[5].offset = offsetof(tiipair235270, Val);
TMP791[5].typ = (&NTI108);
TMP791[5].name = "val";
TMP791[3].len = 2; TMP791[3].kind = 2; TMP791[3].sons = &TMP822[0];
NTI235270.node = &TMP791[3];
NTI235272.size = sizeof(tiipairseq235272*);
NTI235272.kind = 24;
NTI235272.base = (&NTI235270);
NTI235272.flags = 2;
NTI235272.marker = TMP823;
TMP791[2].kind = 1;
TMP791[2].offset = offsetof(tiitable235274, Data);
TMP791[2].typ = (&NTI235272);
TMP791[2].name = "data";
TMP791[0].len = 2; TMP791[0].kind = 2; TMP791[0].sons = &TMP821[0];
NTI235274.node = &TMP791[0];
}

