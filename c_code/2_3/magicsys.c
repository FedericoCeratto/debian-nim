/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tsym226846 tsym226846;
typedef struct ttype226852 ttype226852;
typedef struct tstrtable226820 tstrtable226820;
typedef struct tsymseq226818 tsymseq226818;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct tident201021 tident201021;
typedef struct tidobj201015 tidobj201015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq226848 ttypeseq226848;
typedef struct tscope226840 tscope226840;
typedef struct TY226947 TY226947;
typedef struct tinstantiation226836 tinstantiation226836;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct tnode226816 tnode226816;
typedef struct tloc226830 tloc226830;
typedef struct trope178009 trope178009;
typedef struct tlib226834 tlib226834;
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
typedef struct tidentiter236141 tidentiter236141;
typedef struct tnodeseq226810 tnodeseq226810;
typedef struct TY226936 TY226936;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef ttype226852* TY283060[62];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tstrtable226820  {
NI Counter;
tsymseq226818* Data;
};
typedef ttype226852* TY283352[70];
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tidentiter236141  {
NI H;
tident201021* Name;
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
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
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
struct tnodeseq226810 {
  TGenericSeq Sup;
  tnode226816* data[SEQ_DECL_SIZE];
};
struct TY226936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, initstrtable_227153)(tstrtable226820* x);
N_NIMCALL(ttype226852*, systypefromname_283261)(NimStringDesc* name);
N_NIMCALL(tsym226846*, getsyssym_283054)(NimStringDesc* name);
N_NIMCALL(tsym226846*, strtableget_236111)(tstrtable226820 t, tident201021* name);
N_NIMCALL(tident201021*, getident_201472)(NimStringDesc* identifier);
N_NIMCALL(void, rawmessage_198733)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tsym226846*, newsym_227074)(NU8 symkind, tident201021* name, tsym226846* owner, tlineinfo196539 info);
N_NIMCALL(ttype226852*, newtype_227083)(NU8 kind, tsym226846* owner);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44933*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44933* c);
N_NOINLINE(void, addzct_48617)(tcellseq44949* s, tcell44933* c);
N_NIMCALL(void, loadstub_280260)(tsym226846* s);
N_NIMCALL(ttype226852*, newsystype_283105)(NU8 kind, NI size);
N_NIMCALL(void, internalerror_199006)(NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_80907, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
static N_INLINE(ttype226852*, skipintlit_283533)(ttype226852* t);
N_NIMCALL(ttype226852*, getsystype_283030)(NU8 kind);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, propagatetoowner_231318)(ttype226852* owner, ttype226852* elem);
N_NIMCALL(tsym226846*, initidentiter_236147)(tidentiter236141* ti, tstrtable226820 tab, tident201021* s);
N_NIMCALL(tsym226846*, nextidentiter_236156)(tidentiter236141* ti, tstrtable226820 tab);
N_NIMCALL(void, strtableadd_236103)(tstrtable226820* t, tsym226846* n);
N_NIMCALL(ttype226852*, copytype_227195)(ttype226852* t, tsym226846* owner, NIM_BOOL keepid);
N_NIMCALL(tident201021*, getident_201482)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_128885)(NimStringDesc* x);
N_NIMCALL(ttype226852*, getintlittype_283477)(tnode226816* literal);
N_NIMCALL(void, internalerror_198987)(tlineinfo196539 info, NimStringDesc* errmsg);
STRING_LITERAL(TMP2641, "int", 3);
STRING_LITERAL(TMP2642, "int8", 4);
STRING_LITERAL(TMP2643, "int16", 5);
STRING_LITERAL(TMP2644, "int32", 5);
STRING_LITERAL(TMP2645, "int64", 5);
STRING_LITERAL(TMP2646, "uint", 4);
STRING_LITERAL(TMP2647, "uint8", 5);
STRING_LITERAL(TMP2648, "uint16", 6);
STRING_LITERAL(TMP2649, "uint32", 6);
STRING_LITERAL(TMP2650, "uint64", 6);
STRING_LITERAL(TMP2651, "float", 5);
STRING_LITERAL(TMP2652, "float32", 7);
STRING_LITERAL(TMP2653, "float64", 7);
STRING_LITERAL(TMP2654, "float128", 8);
STRING_LITERAL(TMP2655, "bool", 4);
STRING_LITERAL(TMP2656, "char", 4);
STRING_LITERAL(TMP2657, "string", 6);
STRING_LITERAL(TMP2658, "cstring", 7);
STRING_LITERAL(TMP2659, "pointer", 7);
STRING_LITERAL(TMP2660, "request for typekind: ", 22);
STRING_LITERAL(TMP2661, "wanted: ", 8);
STRING_LITERAL(TMP2662, " got: ", 6);
STRING_LITERAL(TMP2663, "type not found: ", 16);
STRING_LITERAL(TMP3255, "invalid int size", 16);
tsym226846* systemmodule_283019;
TY283060 gsystypes_283063;
tstrtable226820 compilerprocs_283064;
TY283352 inttypecache_283354;
extern tgcheap47016 gch_47044;
extern NI ptrsize_175612;
extern TNimType NTI226258; /* TTypeKind */
extern TNimType NTI226848; /* TTypeSeq */
extern tstrtable226820 rodcompilerprocs_277066;
extern NI intsize_175610;

static N_INLINE(tcell44933*, usrtocell_48646)(void* usr) {
	tcell44933* result;
	result = 0;
	result = ((tcell44933*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44933))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44933* c) {
	addzct_48617((&gch_47044.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44933* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48646(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44933* c;
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

N_NIMCALL(tsym226846*, getsyssym_283054)(NimStringDesc* name) {
	tsym226846* result;
	tident201021* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_201472(name);
	result = strtableget_236111((*systemmodule_283019).kindU.S3.Tab, LOC1);
	{
		tident201021* LOC6;
		if (!(result == NIM_NIL)) goto LA4;
		rawmessage_198733(((NU16) 64), name);
		LOC6 = 0;
		LOC6 = getident_201472(name);
		result = newsym_227074(((NU8) 0), LOC6, systemmodule_283019, (*systemmodule_283019).Info);
		asgnRefNoCycle((void**) (&(*result).Typ), newtype_227083(((NU8) 50), systemmodule_283019));
	}
	LA4: ;
	{
		if (!((*result).Kind == ((NU8) 23))) goto LA9;
		loadstub_280260(result);
	}
	LA9: ;
	{
		if (!((*result).Kind == ((NU8) 25))) goto LA13;
		result = (*result).Owner;
	}
	LA13: ;
	return result;
}

N_NIMCALL(ttype226852*, systypefromname_283261)(NimStringDesc* name) {
	ttype226852* result;
	tsym226846* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getsyssym_283054(name);
	result = (*LOC1).Typ;
	return result;
}

N_NIMCALL(ttype226852*, newsystype_283105)(NU8 kind, NI size) {
	ttype226852* result;
	result = 0;
	result = newtype_227083(kind, systemmodule_283019);
	(*result).Size = ((NI64) (size));
	(*result).Align = ((NI16) (size));
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(ttype226852*, getsystype_283030)(NU8 kind) {
	ttype226852* result;
	result = 0;
	result = gsystypes_283063[(kind)- 0];
	{
		if (!(result == NIM_NIL)) goto LA3;
		switch (kind) {
		case ((NU8) 31):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2641));
		}
		break;
		case ((NU8) 32):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2642));
		}
		break;
		case ((NU8) 33):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2643));
		}
		break;
		case ((NU8) 34):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2644));
		}
		break;
		case ((NU8) 35):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2645));
		}
		break;
		case ((NU8) 40):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2646));
		}
		break;
		case ((NU8) 41):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2647));
		}
		break;
		case ((NU8) 42):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2648));
		}
		break;
		case ((NU8) 43):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2649));
		}
		break;
		case ((NU8) 44):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2650));
		}
		break;
		case ((NU8) 36):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2651));
		}
		break;
		case ((NU8) 37):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2652));
		}
		break;
		case ((NU8) 38):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2653));
			goto BeforeRet;
		}
		break;
		case ((NU8) 39):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2654));
		}
		break;
		case ((NU8) 1):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2655));
		}
		break;
		case ((NU8) 2):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2656));
		}
		break;
		case ((NU8) 28):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2657));
		}
		break;
		case ((NU8) 29):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2658));
		}
		break;
		case ((NU8) 26):
		{
			result = systypefromname_283261(((NimStringDesc*) &TMP2659));
		}
		break;
		case ((NU8) 5):
		{
			result = newsystype_283105(((NU8) 5), ptrsize_175612);
		}
		break;
		default:
		{
			NimStringDesc* LOC26;
			LOC26 = 0;
			LOC26 = rawNewString(reprEnum(kind, (&NTI226258))->Sup.len + 22);
appendString(LOC26, ((NimStringDesc*) &TMP2660));
appendString(LOC26, reprEnum(kind, (&NTI226258)));
			internalerror_199006(LOC26);
		}
		break;
		}
		asgnRefNoCycle((void**) (&gsystypes_283063[(kind)- 0]), result);
	}
	LA3: ;
	{
		NimStringDesc* LOC31;
		if (!!(((*result).Kind == kind))) goto LA29;
		LOC31 = 0;
		LOC31 = rawNewString(reprEnum(kind, (&NTI226258))->Sup.len + reprEnum((*result).Kind, (&NTI226258))->Sup.len + 14);
appendString(LOC31, ((NimStringDesc*) &TMP2661));
appendString(LOC31, reprEnum(kind, (&NTI226258)));
appendString(LOC31, ((NimStringDesc*) &TMP2662));
appendString(LOC31, reprEnum((*result).Kind, (&NTI226258)));
		internalerror_199006(LOC31);
	}
	LA29: ;
	{
		NimStringDesc* LOC36;
		if (!(result == NIM_NIL)) goto LA34;
		LOC36 = 0;
		LOC36 = rawNewString(reprEnum(kind, (&NTI226258))->Sup.len + 16);
appendString(LOC36, ((NimStringDesc*) &TMP2663));
appendString(LOC36, reprEnum(kind, (&NTI226258)));
		internalerror_199006(LOC36);
	}
	LA34: ;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44933* c;
	c = usrtocell_48646(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	LA3: ;
}

static N_INLINE(ttype226852*, skipintlit_283533)(ttype226852* t) {
	ttype226852* result;
	result = 0;
	{
		if (!!(((*t).N == NIM_NIL))) goto LA3;
		{
			if (!((IL64(70866960384) &(IL64(1)<<(((*t).Kind)&IL64(63))))!=0)) goto LA7;
			result = getsystype_283030((*t).Kind);
			goto BeforeRet;
		}
		LA7: ;
	}
	LA3: ;
	result = t;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, addsonskipintlit_283574)(ttype226852* father, ttype226852* son) {
	ttype226852* s;
	{
		if (!(*father).Sons == 0) goto LA3;
		if ((*father).Sons) nimGCunrefNoCycle((*father).Sons);
		(*father).Sons = (ttypeseq226848*) newSeqRC1((&NTI226848), 0);
	}
	LA3: ;
	s = skipintlit_283533(son);
	(*father).Sons = (ttypeseq226848*) incrSeq(&((*father).Sons)->Sup, sizeof(ttype226852*));
	asgnRefNoCycle((void**) (&(*father).Sons->data[(*father).Sons->Sup.len-1]), s);
	propagatetoowner_231318(father, s);
}

N_NIMCALL(tsym226846*, getsysmagic_283175)(NimStringDesc* name, NU16 m) {
	tsym226846* result;
	tidentiter236141 ti;
	tident201021* id;
	result = 0;
	memset((void*)(&ti), 0, sizeof(ti));
	id = getident_201472(name);
	result = initidentiter_236147((&ti), (*systemmodule_283019).kindU.S3.Tab, id);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				if (!((*result).Kind == ((NU8) 23))) goto LA5;
				loadstub_280260(result);
			}
			LA5: ;
			{
				if (!((*result).Magic == m)) goto LA9;
				goto BeforeRet;
			}
			LA9: ;
			result = nextidentiter_236156((&ti), (*systemmodule_283019).kindU.S3.Tab);
		} LA2: ;
	}
	rawmessage_198733(((NU16) 64), name);
	result = newsym_227074(((NU8) 0), id, systemmodule_283019, (*systemmodule_283019).Info);
	asgnRefNoCycle((void**) (&(*result).Typ), newtype_227083(((NU8) 50), systemmodule_283019));
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, registercompilerproc_283042)(tsym226846* s) {
	strtableadd_236103((&compilerprocs_283064), s);
}

N_NIMCALL(ttype226852*, getintlittype_283477)(tnode226816* literal) {
	ttype226852* result;
	NI64 value;
	result = 0;
	value = (*literal).kindU.S1.Intval;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (IL64(-5) <= value);
		if (!(LOC3)) goto LA4;
		LOC3 = (value <= IL64(64));
		LA4: ;
		if (!LOC3) goto LA5;
		result = inttypecache_283354[(((NI) (value)))- -5];
		{
			ttype226852* ti;
			if (!(result == NIM_NIL)) goto LA9;
			ti = getsystype_283030(((NU8) 31));
			result = copytype_227195(ti, (*ti).Owner, NIM_FALSE);
			asgnRefNoCycle((void**) (&(*result).N), literal);
			asgnRefNoCycle((void**) (&inttypecache_283354[(((NI) (value)))- -5]), result);
		}
		LA9: ;
	}
	goto LA1;
	LA5: ;
	{
		ttype226852* ti;
		ti = getsystype_283030(((NU8) 31));
		result = copytype_227195(ti, (*ti).Owner, NIM_FALSE);
		asgnRefNoCycle((void**) (&(*result).N), literal);
	}
	LA1: ;
	return result;
}

N_NIMCALL(ttype226852*, getfloatlittype_283523)(tnode226816* literal) {
	ttype226852* result;
	result = 0;
	result = newsystype_283105(((NU8) 36), 8);
	asgnRefNoCycle((void**) (&(*result).N), literal);
	return result;
}

N_NIMCALL(tsym226846*, getcompilerproc_283036)(NimStringDesc* name) {
	tsym226846* result;
	tident201021* ident;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = hashignorestyle_128885(name);
	ident = getident_201482(name, LOC1);
	result = strtableget_236111(compilerprocs_283064, ident);
	{
		if (!(result == NIM_NIL)) goto LA4;
		result = strtableget_236111(rodcompilerprocs_277066, ident);
		{
			if (!!((result == NIM_NIL))) goto LA8;
			strtableadd_236103((&compilerprocs_283064), result);
			{
				if (!((*result).Kind == ((NU8) 23))) goto LA12;
				loadstub_280260(result);
			}
			LA12: ;
			{
				if (!((*result).Kind == ((NU8) 25))) goto LA16;
				result = (*result).Owner;
			}
			LA16: ;
		}
		LA8: ;
	}
	LA4: ;
	return result;
}

N_NIMCALL(ttype226852*, nilorsysint_283070)(void) {
	ttype226852* result;
	result = 0;
	result = gsystypes_283063[(((NU8) 31))- 0];
	return result;
}

N_NIMCALL(void, setintlittype_283634)(tnode226816* result) {
	NI64 i;
	i = (*result).kindU.S1.Intval;
	switch (intsize_175610) {
	case 8:
	{
		asgnRefNoCycle((void**) (&(*result).Typ), getintlittype_283477(result));
	}
	break;
	case 4:
	{
		{
			NIM_BOOL LOC5;
			LOC5 = 0;
			LOC5 = (IL64(-2147483648) <= i);
			if (!(LOC5)) goto LA6;
			LOC5 = (i <= IL64(2147483647));
			LA6: ;
			if (!LOC5) goto LA7;
			asgnRefNoCycle((void**) (&(*result).Typ), getintlittype_283477(result));
		}
		goto LA3;
		LA7: ;
		{
			asgnRefNoCycle((void**) (&(*result).Typ), getsystype_283030(((NU8) 35)));
		}
		LA3: ;
	}
	break;
	case 2:
	{
		{
			NIM_BOOL LOC13;
			LOC13 = 0;
			LOC13 = (IL64(-32768) <= i);
			if (!(LOC13)) goto LA14;
			LOC13 = (i <= IL64(32767));
			LA14: ;
			if (!LOC13) goto LA15;
			asgnRefNoCycle((void**) (&(*result).Typ), getintlittype_283477(result));
		}
		goto LA11;
		LA15: ;
		{
			NIM_BOOL LOC18;
			LOC18 = 0;
			LOC18 = (IL64(-2147483648) <= i);
			if (!(LOC18)) goto LA19;
			LOC18 = (i <= IL64(2147483647));
			LA19: ;
			if (!LOC18) goto LA20;
			asgnRefNoCycle((void**) (&(*result).Typ), getsystype_283030(((NU8) 34)));
		}
		goto LA11;
		LA20: ;
		{
			asgnRefNoCycle((void**) (&(*result).Typ), getsystype_283030(((NU8) 35)));
		}
		LA11: ;
	}
	break;
	case 1:
	{
		{
			NIM_BOOL LOC26;
			LOC26 = 0;
			LOC26 = (IL64(-128) <= i);
			if (!(LOC26)) goto LA27;
			LOC26 = (i <= IL64(127));
			LA27: ;
			if (!LOC26) goto LA28;
			asgnRefNoCycle((void**) (&(*result).Typ), getintlittype_283477(result));
		}
		goto LA24;
		LA28: ;
		{
			NIM_BOOL LOC31;
			LOC31 = 0;
			LOC31 = (IL64(-32768) <= i);
			if (!(LOC31)) goto LA32;
			LOC31 = (i <= IL64(32767));
			LA32: ;
			if (!LOC31) goto LA33;
			asgnRefNoCycle((void**) (&(*result).Typ), getsystype_283030(((NU8) 33)));
		}
		goto LA24;
		LA33: ;
		{
			NIM_BOOL LOC36;
			LOC36 = 0;
			LOC36 = (IL64(-2147483648) <= i);
			if (!(LOC36)) goto LA37;
			LOC36 = (i <= IL64(2147483647));
			LA37: ;
			if (!LOC36) goto LA38;
			asgnRefNoCycle((void**) (&(*result).Typ), getsystype_283030(((NU8) 34)));
		}
		goto LA24;
		LA38: ;
		{
			asgnRefNoCycle((void**) (&(*result).Typ), getsystype_283030(((NU8) 35)));
		}
		LA24: ;
	}
	break;
	default:
	{
		internalerror_198987((*result).Info, ((NimStringDesc*) &TMP3255));
	}
	break;
	}
}

N_NIMCALL(void, resetsystypes_283359)(void) {
	asgnRefNoCycle((void**) (&systemmodule_283019), NIM_NIL);
	initstrtable_227153((&compilerprocs_283064));
	{
		NU8 i_283406;
		NU8 res_283446;
		i_283406 = 0;
		res_283446 = ((NU8) 0);
		{
			while (1) {
				if (!(res_283446 <= ((NU8) 61))) goto LA3;
				i_283406 = res_283446;
				asgnRefNoCycle((void**) (&gsystypes_283063[(i_283406)- 0]), NIM_NIL);
				res_283446 += 1;
			} LA3: ;
		}
	}
	{
		NI i_283442;
		NI res_283451;
		i_283442 = 0;
		res_283451 = -5;
		{
			while (1) {
				if (!(((NI) (res_283451)) <= 64)) goto LA6;
				i_283442 = res_283451;
				asgnRefNoCycle((void**) (&inttypecache_283354[(i_283442)- -5]), NIM_NIL);
				res_283451 += 1;
			} LA6: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, HEX00_magicsysInit)(void) {
	initstrtable_227153((&compilerprocs_283064));
}

NIM_EXTERNC N_NOINLINE(void, HEX00_magicsysDatInit)(void) {
}

