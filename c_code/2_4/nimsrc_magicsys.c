/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tsym191843 Tsym191843;
typedef struct Ttype191849 Ttype191849;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tnode191813 Tnode191813;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tcell46346 Tcell46346;
typedef struct Tcellseq46362 Tcellseq46362;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46358 Tcellset46358;
typedef struct Tpagedesc46354 Tpagedesc46354;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tident168021 Tident168021;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct Tlib191831 Tlib191831;
typedef struct Tidentiter199141 Tidentiter199141;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY191933 TY191933;
typedef Ttype191849* TY239060[62];
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
typedef Ttype191849* TY239295[70];
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
};
struct  Ttype191849  {
  Tidobj168015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq191845* sons;
Tnode191813* n;
Tsym191843* owner;
Tsym191843* sym;
Tsym191843* destructor;
Tsym191843* deepcopy;
Tsym191843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc191827 loc;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tcell46346  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46362  {
NI len;
NI cap;
Tcell46346** d;
};
struct  Tcellset46358  {
NI counter;
NI max;
Tpagedesc46354* head;
Tpagedesc46354** data;
};
typedef Tsmallchunk27440* TY28222[512];
typedef Ttrunk27413* Ttrunkbuckets27415[256];
struct  Tintset27417  {
Ttrunkbuckets27415 data;
};
struct  Tmemregion28210  {
NI minlargeobj;
NI maxlargeobj;
TY28222 freesmallchunks;
Tllchunk28204* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27442* freechunkslist;
Tintset27417 chunkstarts;
Tavlnode28208* root;
Tavlnode28208* deleted;
Tavlnode28208* last;
Tavlnode28208* freeavlnodes;
};
struct  Tgcstat48214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48216  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46362 zct;
Tcellseq46362 decstack;
Tcellset46358 cycleroots;
Tcellseq46362 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tsym191843  {
  Tidobj168015 Sup;
NU8 kind;
union{
struct {Ttypeseq191845* typeinstcache;
Tscope191837* typscope;
} S1;
struct {TY191944* procinstcache;
Tsym191843* gcunsafetyreason;
} S2;
struct {TY191944* usedgenerics;
Tstrtable191817 tab;
} S3;
struct {Tsym191843* guard;
} S4;
} kindU;
NU16 magic;
Ttype191849* typ;
Tident168021* name;
Tlineinfo164338 info;
Tsym191843* owner;
NU32 flags;
Tnode191813* ast;
NU32 options;
NI position;
NI offset;
Tloc191827 loc;
Tlib191831* annex;
Tnode191813* constraint;
};
struct  Tidentiter199141  {
NI h;
Tident168021* name;
};
struct  Tnode191813  {
Ttype191849* typ;
Tlineinfo164338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym191843* sym;
} S4;
struct {Tident168021* ident;
} S5;
struct {Tnodeseq191807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
};
typedef NI TY27420[16];
struct  Tpagedesc46354  {
Tpagedesc46354* next;
NI key;
TY27420 bits;
};
struct  Tbasechunk27438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27440  {
  Tbasechunk27438 Sup;
Tsmallchunk27440* next;
Tsmallchunk27440* prev;
Tfreecell27430* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28204  {
NI size;
NI acc;
Tllchunk28204* next;
};
struct  Tbigchunk27442  {
  Tbasechunk27438 Sup;
Tbigchunk27442* next;
Tbigchunk27442* prev;
NI align;
NF data;
};
struct  Ttrunk27413  {
Ttrunk27413* next;
NI key;
TY27420 bits;
};
typedef Tavlnode28208* TY28214[2];
struct  Tavlnode28208  {
TY28214 link;
NI key;
NI upperbound;
NI level;
};
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib191831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode191813* path;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, initstrtable_195007)(Tstrtable191817* x);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
static N_INLINE(Ttype191849*, skipintlit_239696)(Ttype191849* t);
N_NIMCALL(Ttype191849*, getsystype_239030)(NU8 kind);
N_NIMCALL(Ttype191849*, systypefromname_239213)(NimStringDesc* name);
N_NIMCALL(Tsym191843*, getsyssym_239054)(NimStringDesc* name);
N_NIMCALL(Tsym191843*, strtableget_199111)(Tstrtable191817 t, Tident168021* name);
N_NIMCALL(Tident168021*, getident_168463)(NimStringDesc* identifier);
N_NIMCALL(void, rawmessage_165960)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tsym191843*, newsym_192656)(NU8 symkind, Tident168021* name, Tsym191843* owner, Tlineinfo164338 info);
N_NIMCALL(Ttype191849*, newtype_194140)(NU8 kind, Tsym191843* owner);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, loadstub_236639)(Tsym191843* s);
N_NIMCALL(Ttype191849*, newsystype_239100)(NU8 kind, NI size);
N_NIMCALL(void, internalerror_166218)(NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_82529, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, propagatetoowner_195274)(Ttype191849* owner, Ttype191849* elem);
N_NIMCALL(Tsym191843*, initidentiter_199147)(Tidentiter199141* ti, Tstrtable191817 tab, Tident168021* s);
N_NIMCALL(Tsym191843*, nextidentiter_199156)(Tidentiter199141* ti, Tstrtable191817 tab);
N_NIMCALL(Tident168021*, getident_168473)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_131887)(NimStringDesc* x);
N_NIMCALL(void, strtableadd_199103)(Tstrtable191817* t, Tsym191843* n);
N_NIMCALL(Ttype191849*, copytype_194549)(Ttype191849* t, Tsym191843* owner, NIM_BOOL keepid);
N_NIMCALL(Ttype191849*, getintlittype_239660)(Tnode191813* literal);
N_NIMCALL(void, internalerror_166199)(Tlineinfo164338 info, NimStringDesc* errmsg);
STRING_LITERAL(TMP1011, "int", 3);
STRING_LITERAL(TMP1012, "int8", 4);
STRING_LITERAL(TMP1013, "int16", 5);
STRING_LITERAL(TMP1014, "int32", 5);
STRING_LITERAL(TMP1015, "int64", 5);
STRING_LITERAL(TMP1016, "uint", 4);
STRING_LITERAL(TMP1017, "uint8", 5);
STRING_LITERAL(TMP1018, "uint16", 6);
STRING_LITERAL(TMP1019, "uint32", 6);
STRING_LITERAL(TMP1020, "uint64", 6);
STRING_LITERAL(TMP1021, "float", 5);
STRING_LITERAL(TMP1022, "float32", 7);
STRING_LITERAL(TMP1023, "float64", 7);
STRING_LITERAL(TMP1024, "float128", 8);
STRING_LITERAL(TMP1025, "bool", 4);
STRING_LITERAL(TMP1026, "char", 4);
STRING_LITERAL(TMP1027, "string", 6);
STRING_LITERAL(TMP1028, "cstring", 7);
STRING_LITERAL(TMP1029, "pointer", 7);
STRING_LITERAL(TMP1030, "request for typekind: ", 22);
STRING_LITERAL(TMP1032, "wanted: ", 8);
STRING_LITERAL(TMP1033, " got: ", 6);
STRING_LITERAL(TMP1034, "type not found: ", 16);
STRING_LITERAL(TMP3390, "invalid int size", 16);
Tsym191843* systemmodule_239019;
TY239060 gsystypes_239063;
Tstrtable191817 compilerprocs_239064;
TY239295 inttypecache_239297;
extern TNimType NTI191845; /* TTypeSeq */
extern Tgcheap48216 gch_48244;
extern NI ptrsize_160625;
extern TNimType NTI191260; /* TTypeKind */
extern Tstrtable191817 rodcompilerprocs_234066;
extern NI intsize_160623;

static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr) {
	Tcell46346* result;
	result = 0;
	result = ((Tcell46346*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46346))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46346* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46346* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46346* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46346* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49846((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Tsym191843*, getsyssym_239054)(NimStringDesc* name) {
	Tsym191843* result;
	Tident168021* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_168463(name);
	result = strtableget_199111((*systemmodule_239019).kindU.S3.tab, LOC1);
	{
		Tident168021* LOC6;
		if (!(result == NIM_NIL)) goto LA4;
		rawmessage_165960(((NU16) 64), name);
		LOC6 = 0;
		LOC6 = getident_168463(name);
		result = newsym_192656(((NU8) 0), LOC6, systemmodule_239019, (*systemmodule_239019).info);
		asgnRefNoCycle((void**) (&(*result).typ), newtype_194140(((NU8) 50), systemmodule_239019));
	}
	LA4: ;
	{
		if (!((*result).kind == ((NU8) 23))) goto LA9;
		loadstub_236639(result);
	}
	LA9: ;
	{
		if (!((*result).kind == ((NU8) 25))) goto LA13;
		result = (*result).owner;
	}
	LA13: ;
	return result;
}

N_NIMCALL(Ttype191849*, systypefromname_239213)(NimStringDesc* name) {
	Ttype191849* result;
	Tsym191843* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getsyssym_239054(name);
	result = (*LOC1).typ;
	return result;
}

N_NIMCALL(Ttype191849*, newsystype_239100)(NU8 kind, NI size) {
	Ttype191849* result;
	result = 0;
	result = newtype_194140(kind, systemmodule_239019);
	(*result).size = ((NI64) (size));
	(*result).align = ((NI16) (size));
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(Ttype191849*, getsystype_239030)(NU8 kind) {
	Ttype191849* result;
{	result = 0;
	result = gsystypes_239063[(kind)- 0];
	{
		if (!(result == NIM_NIL)) goto LA3;
		switch (kind) {
		case ((NU8) 31):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1011));
		}
		break;
		case ((NU8) 32):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1012));
		}
		break;
		case ((NU8) 33):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1013));
		}
		break;
		case ((NU8) 34):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1014));
		}
		break;
		case ((NU8) 35):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1015));
		}
		break;
		case ((NU8) 40):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1016));
		}
		break;
		case ((NU8) 41):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1017));
		}
		break;
		case ((NU8) 42):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1018));
		}
		break;
		case ((NU8) 43):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1019));
		}
		break;
		case ((NU8) 44):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1020));
		}
		break;
		case ((NU8) 36):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1021));
		}
		break;
		case ((NU8) 37):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1022));
		}
		break;
		case ((NU8) 38):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1023));
			goto BeforeRet;
		}
		break;
		case ((NU8) 39):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1024));
		}
		break;
		case ((NU8) 1):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1025));
		}
		break;
		case ((NU8) 2):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1026));
		}
		break;
		case ((NU8) 28):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1027));
		}
		break;
		case ((NU8) 29):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1028));
		}
		break;
		case ((NU8) 26):
		{
			result = systypefromname_239213(((NimStringDesc*) &TMP1029));
		}
		break;
		case ((NU8) 5):
		{
			result = newsystype_239100(((NU8) 5), ptrsize_160625);
		}
		break;
		default:
		{
			NimStringDesc* LOC26;
			LOC26 = 0;
			LOC26 = rawNewString(reprEnum(kind, (&NTI191260))->Sup.len + 22);
appendString(LOC26, ((NimStringDesc*) &TMP1030));
appendString(LOC26, reprEnum(kind, (&NTI191260)));
			internalerror_166218(LOC26);
		}
		break;
		}
		asgnRefNoCycle((void**) (&gsystypes_239063[(kind)- 0]), result);
	}
	LA3: ;
	{
		NimStringDesc* LOC31;
		if (!!(((*result).kind == kind))) goto LA29;
		LOC31 = 0;
		LOC31 = rawNewString(reprEnum(kind, (&NTI191260))->Sup.len + reprEnum((*result).kind, (&NTI191260))->Sup.len + 14);
appendString(LOC31, ((NimStringDesc*) &TMP1032));
appendString(LOC31, reprEnum(kind, (&NTI191260)));
appendString(LOC31, ((NimStringDesc*) &TMP1033));
appendString(LOC31, reprEnum((*result).kind, (&NTI191260)));
		internalerror_166218(LOC31);
	}
	LA29: ;
	{
		NimStringDesc* LOC36;
		if (!(result == NIM_NIL)) goto LA34;
		LOC36 = 0;
		LOC36 = rawNewString(reprEnum(kind, (&NTI191260))->Sup.len + 16);
appendString(LOC36, ((NimStringDesc*) &TMP1034));
appendString(LOC36, reprEnum(kind, (&NTI191260)));
		internalerror_166218(LOC36);
	}
	LA34: ;
	}BeforeRet: ;
	return result;
}

static N_INLINE(Ttype191849*, skipintlit_239696)(Ttype191849* t) {
	Ttype191849* result;
{	result = 0;
	{
		if (!!(((*t).n == NIM_NIL))) goto LA3;
		{
			if (!((*t).kind == ((NU8) 31) || (*t).kind == ((NU8) 36))) goto LA7;
			result = getsystype_239030((*t).kind);
			goto BeforeRet;
		}
		LA7: ;
	}
	LA3: ;
	result = t;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, addsonskipintlit_239729)(Ttype191849* father, Ttype191849* son) {
	Ttype191849* s;
	{
		if (!(*father).sons == 0) goto LA3;
		if ((*father).sons) nimGCunrefNoCycle((*father).sons);
		(*father).sons = (Ttypeseq191845*) newSeqRC1((&NTI191845), 0);
	}
	LA3: ;
	s = skipintlit_239696(son);
	(*father).sons = (Ttypeseq191845*) incrSeq(&((*father).sons)->Sup, sizeof(Ttype191849*));
	asgnRefNoCycle((void**) (&(*father).sons->data[(*father).sons->Sup.len-1]), s);
	propagatetoowner_195274(father, s);
}

N_NIMCALL(Tsym191843*, getsysmagic_239155)(NimStringDesc* name, NU16 m) {
	Tsym191843* result;
	Tidentiter199141 ti;
	Tident168021* id;
{	result = 0;
	memset((void*)(&ti), 0, sizeof(ti));
	id = getident_168463(name);
	result = initidentiter_199147((&ti), (*systemmodule_239019).kindU.S3.tab, id);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				if (!((*result).kind == ((NU8) 23))) goto LA5;
				loadstub_236639(result);
			}
			LA5: ;
			{
				if (!((*result).magic == m)) goto LA9;
				goto BeforeRet;
			}
			LA9: ;
			result = nextidentiter_199156((&ti), (*systemmodule_239019).kindU.S3.tab);
		} LA2: ;
	}
	rawmessage_165960(((NU16) 64), name);
	result = newsym_192656(((NU8) 0), id, systemmodule_239019, (*systemmodule_239019).info);
	asgnRefNoCycle((void**) (&(*result).typ), newtype_194140(((NU8) 50), systemmodule_239019));
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym191843*, getcompilerproc_239036)(NimStringDesc* name) {
	Tsym191843* result;
	Tident168021* ident;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = hashignorestyle_131887(name);
	ident = getident_168473(name, LOC1);
	result = strtableget_199111(compilerprocs_239064, ident);
	{
		if (!(result == NIM_NIL)) goto LA4;
		result = strtableget_199111(rodcompilerprocs_234066, ident);
		{
			if (!!((result == NIM_NIL))) goto LA8;
			strtableadd_199103((&compilerprocs_239064), result);
			{
				if (!((*result).kind == ((NU8) 23))) goto LA12;
				loadstub_236639(result);
			}
			LA12: ;
			{
				if (!((*result).kind == ((NU8) 25))) goto LA16;
				result = (*result).owner;
			}
			LA16: ;
		}
		LA8: ;
	}
	LA4: ;
	return result;
}

N_NIMCALL(void, registercompilerproc_239042)(Tsym191843* s) {
	strtableadd_199103((&compilerprocs_239064), s);
}

N_NIMCALL(Ttype191849*, getintlittype_239660)(Tnode191813* literal) {
	Ttype191849* result;
	NI64 value;
	result = 0;
	value = (*literal).kindU.S1.intval;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (IL64(-5) <= value);
		if (!(LOC3)) goto LA4;
		LOC3 = (value <= IL64(64));
		LA4: ;
		if (!LOC3) goto LA5;
		result = inttypecache_239297[(((NI) (value)))- -5];
		{
			Ttype191849* ti;
			if (!(result == NIM_NIL)) goto LA9;
			ti = getsystype_239030(((NU8) 31));
			result = copytype_194549(ti, (*ti).owner, NIM_FALSE);
			asgnRefNoCycle((void**) (&(*result).n), literal);
			asgnRefNoCycle((void**) (&inttypecache_239297[(((NI) (value)))- -5]), result);
		}
		LA9: ;
	}
	goto LA1;
	LA5: ;
	{
		Ttype191849* ti;
		ti = getsystype_239030(((NU8) 31));
		result = copytype_194549(ti, (*ti).owner, NIM_FALSE);
		asgnRefNoCycle((void**) (&(*result).n), literal);
	}
	LA1: ;
	return result;
}

N_NIMCALL(Ttype191849*, getfloatlittype_239686)(Tnode191813* literal) {
	Ttype191849* result;
	result = 0;
	result = newsystype_239100(((NU8) 36), ((NI) 8));
	asgnRefNoCycle((void**) (&(*result).n), literal);
	return result;
}

N_NIMCALL(Ttype191849*, nilorsysint_239070)(void) {
	Ttype191849* result;
	result = 0;
	result = gsystypes_239063[(((NU8) 31))- 0];
	return result;
}

N_NIMCALL(void, setintlittype_239774)(Tnode191813* result) {
	NI64 i;
	i = (*result).kindU.S1.intval;
	switch (intsize_160623) {
	case ((NI) 8):
	{
		asgnRefNoCycle((void**) (&(*result).typ), getintlittype_239660(result));
	}
	break;
	case ((NI) 4):
	{
		{
			NIM_BOOL LOC5;
			LOC5 = 0;
			LOC5 = (IL64(-2147483648) <= i);
			if (!(LOC5)) goto LA6;
			LOC5 = (i <= IL64(2147483647));
			LA6: ;
			if (!LOC5) goto LA7;
			asgnRefNoCycle((void**) (&(*result).typ), getintlittype_239660(result));
		}
		goto LA3;
		LA7: ;
		{
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_239030(((NU8) 35)));
		}
		LA3: ;
	}
	break;
	case ((NI) 2):
	{
		{
			NIM_BOOL LOC13;
			LOC13 = 0;
			LOC13 = (IL64(-32768) <= i);
			if (!(LOC13)) goto LA14;
			LOC13 = (i <= IL64(32767));
			LA14: ;
			if (!LOC13) goto LA15;
			asgnRefNoCycle((void**) (&(*result).typ), getintlittype_239660(result));
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
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_239030(((NU8) 34)));
		}
		goto LA11;
		LA20: ;
		{
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_239030(((NU8) 35)));
		}
		LA11: ;
	}
	break;
	case ((NI) 1):
	{
		{
			NIM_BOOL LOC26;
			LOC26 = 0;
			LOC26 = (IL64(-128) <= i);
			if (!(LOC26)) goto LA27;
			LOC26 = (i <= IL64(127));
			LA27: ;
			if (!LOC26) goto LA28;
			asgnRefNoCycle((void**) (&(*result).typ), getintlittype_239660(result));
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
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_239030(((NU8) 33)));
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
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_239030(((NU8) 34)));
		}
		goto LA24;
		LA38: ;
		{
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_239030(((NU8) 35)));
		}
		LA24: ;
	}
	break;
	default:
	{
		internalerror_166199((*result).info, ((NimStringDesc*) &TMP3390));
	}
	break;
	}
}

N_NIMCALL(void, resetsystypes_239302)(void) {
	asgnRefNoCycle((void**) (&systemmodule_239019), NIM_NIL);
	initstrtable_195007((&compilerprocs_239064));
	{
		NU8 i_239423;
		NI res_239627;
		i_239423 = 0;
		res_239627 = ((NI) 0);
		{
			while (1) {
				if (!(res_239627 <= ((NI) 61))) goto LA3;
				i_239423 = ((NU8) (res_239627));
				asgnRefNoCycle((void**) (&gsystypes_239063[(i_239423)- 0]), NIM_NIL);
				res_239627 += ((NI) 1);
			} LA3: ;
		}
	}
	{
		NI i_239623;
		NI res_239633;
		i_239623 = 0;
		res_239633 = ((NI) -5);
		{
			while (1) {
				if (!(res_239633 <= ((NI) 64))) goto LA6;
				i_239623 = ((NI) (res_239633));
				asgnRefNoCycle((void**) (&inttypecache_239297[(i_239623)- -5]), NIM_NIL);
				res_239633 += ((NI) 1);
			} LA6: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_magicsysInit)(void) {
	initstrtable_195007((&compilerprocs_239064));
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_magicsysDatInit)(void) {
}
