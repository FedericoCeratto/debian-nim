/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tsym225846 tsym225846;
typedef struct ttype225852 ttype225852;
typedef struct tstrtable225820 tstrtable225820;
typedef struct tsymseq225818 tsymseq225818;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct tident200021 tident200021;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq225848 ttypeseq225848;
typedef struct tscope225840 tscope225840;
typedef struct TY225947 TY225947;
typedef struct tinstantiation225836 tinstantiation225836;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tnode225816 tnode225816;
typedef struct tloc225830 tloc225830;
typedef struct trope177009 trope177009;
typedef struct tlib225834 tlib225834;
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
typedef struct tidentiter235141 tidentiter235141;
typedef struct tnodeseq225810 tnodeseq225810;
typedef struct TY225936 TY225936;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef ttype225852* TY282060[62];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tstrtable225820  {
NI Counter;
tsymseq225818* Data;
};
typedef ttype225852* TY282352[70];
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tidentiter235141  {
NI H;
tident200021* Name;
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
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
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
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
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
struct tnodeseq225810 {
  TGenericSeq Sup;
  tnode225816* data[SEQ_DECL_SIZE];
};
struct TY225936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, initstrtable_226153)(tstrtable225820* x);
N_NIMCALL(ttype225852*, systypefromname_282261)(NimStringDesc* name);
N_NIMCALL(tsym225846*, getsyssym_282054)(NimStringDesc* name);
N_NIMCALL(tsym225846*, strtableget_235111)(tstrtable225820 t, tident200021* name);
N_NIMCALL(tident200021*, getident_200472)(NimStringDesc* identifier);
N_NIMCALL(void, rawmessage_197733)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tsym225846*, newsym_226074)(NU8 symkind, tident200021* name, tsym225846* owner, tlineinfo195539 info);
N_NIMCALL(ttype225852*, newtype_226083)(NU8 kind, tsym225846* owner);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(void, loadstub_279260)(tsym225846* s);
N_NIMCALL(ttype225852*, newsystype_282105)(NU8 kind, NI size);
N_NIMCALL(void, internalerror_198006)(NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_80907, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
static N_INLINE(ttype225852*, skipintlit_282533)(ttype225852* t);
N_NIMCALL(ttype225852*, getsystype_282030)(NU8 kind);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, propagatetoowner_230318)(ttype225852* owner, ttype225852* elem);
N_NIMCALL(tsym225846*, initidentiter_235147)(tidentiter235141* ti, tstrtable225820 tab, tident200021* s);
N_NIMCALL(tsym225846*, nextidentiter_235156)(tidentiter235141* ti, tstrtable225820 tab);
N_NIMCALL(void, strtableadd_235103)(tstrtable225820* t, tsym225846* n);
N_NIMCALL(ttype225852*, copytype_226195)(ttype225852* t, tsym225846* owner, NIM_BOOL keepid);
N_NIMCALL(tident200021*, getident_200482)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_128885)(NimStringDesc* x);
N_NIMCALL(ttype225852*, getintlittype_282477)(tnode225816* literal);
N_NIMCALL(void, internalerror_197987)(tlineinfo195539 info, NimStringDesc* errmsg);
STRING_LITERAL(TMP2640, "int", 3);
STRING_LITERAL(TMP2641, "int8", 4);
STRING_LITERAL(TMP2642, "int16", 5);
STRING_LITERAL(TMP2643, "int32", 5);
STRING_LITERAL(TMP2644, "int64", 5);
STRING_LITERAL(TMP2645, "uint", 4);
STRING_LITERAL(TMP2646, "uint8", 5);
STRING_LITERAL(TMP2647, "uint16", 6);
STRING_LITERAL(TMP2648, "uint32", 6);
STRING_LITERAL(TMP2649, "uint64", 6);
STRING_LITERAL(TMP2650, "float", 5);
STRING_LITERAL(TMP2651, "float32", 7);
STRING_LITERAL(TMP2652, "float64", 7);
STRING_LITERAL(TMP2653, "float128", 8);
STRING_LITERAL(TMP2654, "bool", 4);
STRING_LITERAL(TMP2655, "char", 4);
STRING_LITERAL(TMP2656, "string", 6);
STRING_LITERAL(TMP2657, "cstring", 7);
STRING_LITERAL(TMP2658, "pointer", 7);
STRING_LITERAL(TMP2659, "request for typekind: ", 22);
STRING_LITERAL(TMP2660, "wanted: ", 8);
STRING_LITERAL(TMP2661, " got: ", 6);
STRING_LITERAL(TMP2662, "type not found: ", 16);
STRING_LITERAL(TMP3253, "invalid int size", 16);
tsym225846* systemmodule_282019;
TY282060 gsystypes_282063;
tstrtable225820 compilerprocs_282064;
TY282352 inttypecache_282354;
extern tgcheap47016 gch_47044;
extern NI ptrsize_174612;
extern TNimType NTI225258; /* TTypeKind */
extern TNimType NTI225848; /* TTypeSeq */
extern tstrtable225820 rodcompilerprocs_276066;
extern NI intsize_174610;

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

N_NIMCALL(tsym225846*, getsyssym_282054)(NimStringDesc* name) {
	tsym225846* result;
	tident200021* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_200472(name);
	result = strtableget_235111((*systemmodule_282019).kindU.S3.Tab, LOC1);
	{
		tident200021* LOC6;
		if (!(result == NIM_NIL)) goto LA4;
		rawmessage_197733(((NU16) 64), name);
		LOC6 = 0;
		LOC6 = getident_200472(name);
		result = newsym_226074(((NU8) 0), LOC6, systemmodule_282019, (*systemmodule_282019).Info);
		asgnRefNoCycle((void**) (&(*result).Typ), newtype_226083(((NU8) 50), systemmodule_282019));
	}
	LA4: ;
	{
		if (!((*result).Kind == ((NU8) 23))) goto LA9;
		loadstub_279260(result);
	}
	LA9: ;
	{
		if (!((*result).Kind == ((NU8) 25))) goto LA13;
		result = (*result).Owner;
	}
	LA13: ;
	return result;
}

N_NIMCALL(ttype225852*, systypefromname_282261)(NimStringDesc* name) {
	ttype225852* result;
	tsym225846* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getsyssym_282054(name);
	result = (*LOC1).Typ;
	return result;
}

N_NIMCALL(ttype225852*, newsystype_282105)(NU8 kind, NI size) {
	ttype225852* result;
	result = 0;
	result = newtype_226083(kind, systemmodule_282019);
	(*result).Size = ((NI64) (size));
	(*result).Align = ((NI16) (size));
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(ttype225852*, getsystype_282030)(NU8 kind) {
	ttype225852* result;
	result = 0;
	result = gsystypes_282063[(kind)- 0];
	{
		if (!(result == NIM_NIL)) goto LA3;
		switch (kind) {
		case ((NU8) 31):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2640));
		}
		break;
		case ((NU8) 32):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2641));
		}
		break;
		case ((NU8) 33):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2642));
		}
		break;
		case ((NU8) 34):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2643));
		}
		break;
		case ((NU8) 35):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2644));
		}
		break;
		case ((NU8) 40):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2645));
		}
		break;
		case ((NU8) 41):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2646));
		}
		break;
		case ((NU8) 42):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2647));
		}
		break;
		case ((NU8) 43):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2648));
		}
		break;
		case ((NU8) 44):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2649));
		}
		break;
		case ((NU8) 36):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2650));
		}
		break;
		case ((NU8) 37):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2651));
		}
		break;
		case ((NU8) 38):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2652));
			goto BeforeRet;
		}
		break;
		case ((NU8) 39):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2653));
		}
		break;
		case ((NU8) 1):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2654));
		}
		break;
		case ((NU8) 2):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2655));
		}
		break;
		case ((NU8) 28):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2656));
		}
		break;
		case ((NU8) 29):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2657));
		}
		break;
		case ((NU8) 26):
		{
			result = systypefromname_282261(((NimStringDesc*) &TMP2658));
		}
		break;
		case ((NU8) 5):
		{
			result = newsystype_282105(((NU8) 5), ptrsize_174612);
		}
		break;
		default:
		{
			NimStringDesc* LOC26;
			LOC26 = 0;
			LOC26 = rawNewString(reprEnum(kind, (&NTI225258))->Sup.len + 22);
appendString(LOC26, ((NimStringDesc*) &TMP2659));
appendString(LOC26, reprEnum(kind, (&NTI225258)));
			internalerror_198006(LOC26);
		}
		break;
		}
		asgnRefNoCycle((void**) (&gsystypes_282063[(kind)- 0]), result);
	}
	LA3: ;
	{
		NimStringDesc* LOC31;
		if (!!(((*result).Kind == kind))) goto LA29;
		LOC31 = 0;
		LOC31 = rawNewString(reprEnum(kind, (&NTI225258))->Sup.len + reprEnum((*result).Kind, (&NTI225258))->Sup.len + 14);
appendString(LOC31, ((NimStringDesc*) &TMP2660));
appendString(LOC31, reprEnum(kind, (&NTI225258)));
appendString(LOC31, ((NimStringDesc*) &TMP2661));
appendString(LOC31, reprEnum((*result).Kind, (&NTI225258)));
		internalerror_198006(LOC31);
	}
	LA29: ;
	{
		NimStringDesc* LOC36;
		if (!(result == NIM_NIL)) goto LA34;
		LOC36 = 0;
		LOC36 = rawNewString(reprEnum(kind, (&NTI225258))->Sup.len + 16);
appendString(LOC36, ((NimStringDesc*) &TMP2662));
appendString(LOC36, reprEnum(kind, (&NTI225258)));
		internalerror_198006(LOC36);
	}
	LA34: ;
	BeforeRet: ;
	return result;
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

static N_INLINE(ttype225852*, skipintlit_282533)(ttype225852* t) {
	ttype225852* result;
	result = 0;
	{
		if (!!(((*t).N == NIM_NIL))) goto LA3;
		{
			if (!((IL64(70866960384) &(IL64(1)<<(((*t).Kind)&IL64(63))))!=0)) goto LA7;
			result = getsystype_282030((*t).Kind);
			goto BeforeRet;
		}
		LA7: ;
	}
	LA3: ;
	result = t;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, addsonskipintlit_282574)(ttype225852* father, ttype225852* son) {
	ttype225852* s;
	{
		if (!(*father).Sons == 0) goto LA3;
		if ((*father).Sons) nimGCunrefNoCycle((*father).Sons);
		(*father).Sons = (ttypeseq225848*) newSeqRC1((&NTI225848), 0);
	}
	LA3: ;
	s = skipintlit_282533(son);
	(*father).Sons = (ttypeseq225848*) incrSeq(&((*father).Sons)->Sup, sizeof(ttype225852*));
	asgnRefNoCycle((void**) (&(*father).Sons->data[(*father).Sons->Sup.len-1]), s);
	propagatetoowner_230318(father, s);
}

N_NIMCALL(tsym225846*, getsysmagic_282175)(NimStringDesc* name, NU16 m) {
	tsym225846* result;
	tidentiter235141 ti;
	tident200021* id;
	result = 0;
	memset((void*)(&ti), 0, sizeof(ti));
	id = getident_200472(name);
	result = initidentiter_235147((&ti), (*systemmodule_282019).kindU.S3.Tab, id);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				if (!((*result).Kind == ((NU8) 23))) goto LA5;
				loadstub_279260(result);
			}
			LA5: ;
			{
				if (!((*result).Magic == m)) goto LA9;
				goto BeforeRet;
			}
			LA9: ;
			result = nextidentiter_235156((&ti), (*systemmodule_282019).kindU.S3.Tab);
		} LA2: ;
	}
	rawmessage_197733(((NU16) 64), name);
	result = newsym_226074(((NU8) 0), id, systemmodule_282019, (*systemmodule_282019).Info);
	asgnRefNoCycle((void**) (&(*result).Typ), newtype_226083(((NU8) 50), systemmodule_282019));
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, registercompilerproc_282042)(tsym225846* s) {
	strtableadd_235103((&compilerprocs_282064), s);
}

N_NIMCALL(ttype225852*, getintlittype_282477)(tnode225816* literal) {
	ttype225852* result;
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
		result = inttypecache_282354[(((NI) (value)))- -5];
		{
			ttype225852* ti;
			if (!(result == NIM_NIL)) goto LA9;
			ti = getsystype_282030(((NU8) 31));
			result = copytype_226195(ti, (*ti).Owner, NIM_FALSE);
			asgnRefNoCycle((void**) (&(*result).N), literal);
			asgnRefNoCycle((void**) (&inttypecache_282354[(((NI) (value)))- -5]), result);
		}
		LA9: ;
	}
	goto LA1;
	LA5: ;
	{
		ttype225852* ti;
		ti = getsystype_282030(((NU8) 31));
		result = copytype_226195(ti, (*ti).Owner, NIM_FALSE);
		asgnRefNoCycle((void**) (&(*result).N), literal);
	}
	LA1: ;
	return result;
}

N_NIMCALL(ttype225852*, getfloatlittype_282523)(tnode225816* literal) {
	ttype225852* result;
	result = 0;
	result = newsystype_282105(((NU8) 36), 8);
	asgnRefNoCycle((void**) (&(*result).N), literal);
	return result;
}

N_NIMCALL(tsym225846*, getcompilerproc_282036)(NimStringDesc* name) {
	tsym225846* result;
	tident200021* ident;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = hashignorestyle_128885(name);
	ident = getident_200482(name, LOC1);
	result = strtableget_235111(compilerprocs_282064, ident);
	{
		if (!(result == NIM_NIL)) goto LA4;
		result = strtableget_235111(rodcompilerprocs_276066, ident);
		{
			if (!!((result == NIM_NIL))) goto LA8;
			strtableadd_235103((&compilerprocs_282064), result);
			{
				if (!((*result).Kind == ((NU8) 23))) goto LA12;
				loadstub_279260(result);
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

N_NIMCALL(ttype225852*, nilorsysint_282070)(void) {
	ttype225852* result;
	result = 0;
	result = gsystypes_282063[(((NU8) 31))- 0];
	return result;
}

N_NIMCALL(void, setintlittype_282634)(tnode225816* result) {
	NI64 i;
	i = (*result).kindU.S1.Intval;
	switch (intsize_174610) {
	case 8:
	{
		asgnRefNoCycle((void**) (&(*result).Typ), getintlittype_282477(result));
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
			asgnRefNoCycle((void**) (&(*result).Typ), getintlittype_282477(result));
		}
		goto LA3;
		LA7: ;
		{
			asgnRefNoCycle((void**) (&(*result).Typ), getsystype_282030(((NU8) 35)));
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
			asgnRefNoCycle((void**) (&(*result).Typ), getintlittype_282477(result));
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
			asgnRefNoCycle((void**) (&(*result).Typ), getsystype_282030(((NU8) 34)));
		}
		goto LA11;
		LA20: ;
		{
			asgnRefNoCycle((void**) (&(*result).Typ), getsystype_282030(((NU8) 35)));
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
			asgnRefNoCycle((void**) (&(*result).Typ), getintlittype_282477(result));
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
			asgnRefNoCycle((void**) (&(*result).Typ), getsystype_282030(((NU8) 33)));
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
			asgnRefNoCycle((void**) (&(*result).Typ), getsystype_282030(((NU8) 34)));
		}
		goto LA24;
		LA38: ;
		{
			asgnRefNoCycle((void**) (&(*result).Typ), getsystype_282030(((NU8) 35)));
		}
		LA24: ;
	}
	break;
	default:
	{
		internalerror_197987((*result).Info, ((NimStringDesc*) &TMP3253));
	}
	break;
	}
}

N_NIMCALL(void, resetsystypes_282359)(void) {
	asgnRefNoCycle((void**) (&systemmodule_282019), NIM_NIL);
	initstrtable_226153((&compilerprocs_282064));
	{
		NU8 i_282406;
		NU8 res_282446;
		i_282406 = 0;
		res_282446 = ((NU8) 0);
		{
			while (1) {
				if (!(res_282446 <= ((NU8) 61))) goto LA3;
				i_282406 = res_282446;
				asgnRefNoCycle((void**) (&gsystypes_282063[(i_282406)- 0]), NIM_NIL);
				res_282446 += 1;
			} LA3: ;
		}
	}
	{
		NI i_282442;
		NI res_282451;
		i_282442 = 0;
		res_282451 = -5;
		{
			while (1) {
				if (!(((NI) (res_282451)) <= 64)) goto LA6;
				i_282442 = res_282451;
				asgnRefNoCycle((void**) (&inttypecache_282354[(i_282442)- -5]), NIM_NIL);
				res_282451 += 1;
			} LA6: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, HEX00_magicsysInit)(void) {
	initstrtable_226153((&compilerprocs_282064));
}

NIM_EXTERNC N_NOINLINE(void, HEX00_magicsysDatInit)(void) {
}

