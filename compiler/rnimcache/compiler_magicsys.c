/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/ubuntu/nim-ci/Nim/lib -o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_magicsys.o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_magicsys.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tsym293830 Tsym293830;
typedef struct Ttype293836 Ttype293836;
typedef struct Tstrtable293802 Tstrtable293802;
typedef struct Tsymseq293800 Tsymseq293800;
typedef struct Tidobj200006 Tidobj200006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq293832 Ttypeseq293832;
typedef struct Tnode293798 Tnode293798;
typedef struct TY293956 TY293956;
typedef struct Tloc293812 Tloc293812;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29480 Memregion29480;
typedef struct Smallchunk29437 Smallchunk29437;
typedef struct Llchunk29474 Llchunk29474;
typedef struct Bigchunk29439 Bigchunk29439;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29478 Avlnode29478;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tident200012 Tident200012;
typedef struct TY293925 TY293925;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct Tlib293816 Tlib293816;
typedef struct Tidentiter300063 Tidentiter300063;
typedef struct Tnodeseq293792 Tnodeseq293792;
typedef struct TY293957 TY293957;
typedef struct Basechunk29435 Basechunk29435;
typedef struct Freecell29427 Freecell29427;
typedef struct Tinstantiation293820 Tinstantiation293820;
typedef struct Tlistentry147010 Tlistentry147010;
typedef Ttype293836* TY338011[63];
struct  Tstrtable293802  {
NI counter;
Tsymseq293800* data;
};
typedef Ttype293836* TY338219[70];
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj200006  {
  TNimObject Sup;
NI id;
};
struct  Tloc293812  {
NU8 k;
NU8 s;
NU16 flags;
Ttype293836* t;
Ropeobj179006* r;
};
struct  Ttype293836  {
  Tidobj200006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq293832* sons;
Tnode293798* n;
Tsym293830* owner;
Tsym293830* sym;
Tsym293830* destructor;
Tsym293830* deepcopy;
Tsym293830* assignment;
TY293956* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc293812 loc;
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
struct  Cell47305  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47321  {
NI len;
NI cap;
Cell47305** d;
};
typedef Smallchunk29437* TY29495[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29480  {
NI minlargeobj;
NI maxlargeobj;
TY29495 freesmallchunks;
Llchunk29474* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29439* freechunkslist;
Intset29414 chunkstarts;
Avlnode29478* root;
Avlnode29478* deleted;
Avlnode29478* last;
Avlnode29478* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat49814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47317  {
NI counter;
NI max;
Pagedesc47313* head;
Pagedesc47313** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47321 zct;
Cellseq47321 decstack;
Cellseq47321 tempstack;
NI recgclock;
Memregion29480 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tsym293830  {
  Tidobj200006 Sup;
NU8 kind;
union{
struct {Ttypeseq293832* typeinstcache;
} S1;
struct {TY293925* procinstcache;
Tsym293830* gcunsafetyreason;
} S2;
struct {TY293925* usedgenerics;
Tstrtable293802 tab;
} S3;
struct {Tsym293830* guard;
NI bitsize;
} S4;
} kindU;
NU16 magic;
Ttype293836* typ;
Tident200012* name;
Tlineinfo192336 info;
Tsym293830* owner;
NU32 flags;
Tnode293798* ast;
NU32 options;
NI position;
NI offset;
Tloc293812 loc;
Tlib293816* annex;
Tnode293798* constraint;
};
struct  Tidentiter300063  {
NI h;
Tident200012* name;
};
struct  Tnode293798  {
Ttype293836* typ;
Tlineinfo192336 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym293830* sym;
} S4;
struct {Tident200012* ident;
} S5;
struct {Tnodeseq293792* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct TY293957 {
NI Field0;
Tsym293830* Field1;
};
struct  Ropeobj179006  {
  TNimObject Sup;
Ropeobj179006* left;
Ropeobj179006* right;
NI length;
NimStringDesc* data;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29435  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29437  {
  Basechunk29435 Sup;
Smallchunk29437* next;
Smallchunk29437* prev;
Freecell29427* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29474  {
NI size;
NI acc;
Llchunk29474* next;
};
struct  Bigchunk29439  {
  Basechunk29435 Sup;
Bigchunk29439* next;
Bigchunk29439* prev;
NI align;
NF data;
};
typedef NI TY29419[8];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29419 bits;
};
typedef Avlnode29478* TY29485[2];
struct  Avlnode29478  {
TY29485 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29419 bits;
};
struct  Tident200012  {
  Tidobj200006 Sup;
NimStringDesc* s;
Tident200012* next;
NI h;
};
struct  Tlistentry147010  {
  TNimObject Sup;
Tlistentry147010* prev;
Tlistentry147010* next;
};
struct  Tlib293816  {
  Tlistentry147010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj179006* name;
Tnode293798* path;
};
struct  Freecell29427  {
Freecell29427* next;
NI zerofield;
};
struct  Tinstantiation293820  {
Tsym293830* sym;
Ttypeseq293832* concretetypes;
NI compilesid;
};
struct Ttypeseq293832 {
  TGenericSeq Sup;
  Ttype293836* data[SEQ_DECL_SIZE];
};
struct Tsymseq293800 {
  TGenericSeq Sup;
  Tsym293830* data[SEQ_DECL_SIZE];
};
struct TY293956 {
  TGenericSeq Sup;
  TY293957 data[SEQ_DECL_SIZE];
};
struct TY293925 {
  TGenericSeq Sup;
  Tinstantiation293820* data[SEQ_DECL_SIZE];
};
struct Tnodeseq293792 {
  TGenericSeq Sup;
  Tnode293798* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, initstrtable_297001)(Tstrtable293802* x);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47305*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_52601)(Cell47305* c);
N_NOINLINE(void, addzct_51417)(Cellseq47321* s, Cell47305* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
static N_INLINE(Ttype293836*, skipintlit_338653)(Ttype293836* t);
N_NIMCALL(Ttype293836*, getsystype_338153)(NU8 kind);
N_NIMCALL(Ttype293836*, systypefromname_338148)(NimStringDesc* name);
N_NIMCALL(Tsym293830*, getsyssym_338041)(NimStringDesc* name);
N_NIMCALL(Tsym293830*, strtableget_300045)(Tstrtable293802 t, Tident200012* name);
N_NIMCALL(Tident200012*, getident_200441)(NimStringDesc* identifier);
N_NIMCALL(void, rawmessage_195612)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tsym293830*, newsym_294683)(NU8 symkind, Tident200012* name, Tsym293830* owner, Tlineinfo192336 info);
N_NIMCALL(Ttype293836*, newtype_296107)(NU8 kind, Tsym293830* owner);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, loadstub_335223)(Tsym293830* s);
N_NIMCALL(Ttype293836*, newsystype_338036)(NU8 kind, NI size);
N_NIMCALL(void, internalerror_197113)(NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copymem_7478)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, propagatetoowner_297176)(Ttype293836* owner, Ttype293836* elem);
N_NIMCALL(Tsym293830*, initidentiter_300066)(Tidentiter300063* ti, Tstrtable293802 tab, Tident200012* s);
N_NIMCALL(Tsym293830*, nextidentiter_300072)(Tidentiter300063* ti, Tstrtable293802 tab);
N_NIMCALL(void, strtableadd_300040)(Tstrtable293802* t, Tsym293830* n);
N_NIMCALL(void, localerror_197085)(Tlineinfo192336 info, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, HEX24_193431)(Tlineinfo192336 info);
N_NIMCALL(Ttype293836*, copytype_296470)(Ttype293836* t, Tsym293830* owner, NIM_BOOL keepid);
N_NIMCALL(Ttype293836*, getintlittype_338627)(Tnode293798* literal);
N_NIMCALL(void, internalerror_197100)(Tlineinfo192336 info, NimStringDesc* errmsg);
STRING_LITERAL(TMP1103, "int", 3);
STRING_LITERAL(TMP1104, "int8", 4);
STRING_LITERAL(TMP1105, "int16", 5);
STRING_LITERAL(TMP1106, "int32", 5);
STRING_LITERAL(TMP1107, "int64", 5);
STRING_LITERAL(TMP1108, "uint", 4);
STRING_LITERAL(TMP1109, "uint8", 5);
STRING_LITERAL(TMP1110, "uint16", 6);
STRING_LITERAL(TMP1111, "uint32", 6);
STRING_LITERAL(TMP1112, "uint64", 6);
STRING_LITERAL(TMP1113, "float", 5);
STRING_LITERAL(TMP1114, "float32", 7);
STRING_LITERAL(TMP1115, "float64", 7);
STRING_LITERAL(TMP1116, "float128", 8);
STRING_LITERAL(TMP1117, "bool", 4);
STRING_LITERAL(TMP1118, "char", 4);
STRING_LITERAL(TMP1119, "string", 6);
STRING_LITERAL(TMP1120, "cstring", 7);
STRING_LITERAL(TMP1121, "pointer", 7);
STRING_LITERAL(TMP1122, "request for typekind: ", 22);
STRING_LITERAL(TMP1124, "wanted: ", 8);
STRING_LITERAL(TMP1125, " got: ", 6);
STRING_LITERAL(TMP1126, "type not found: ", 16);
STRING_LITERAL(TMP3346, "symbol conflicts with other .exportNims symbol at: ", 51);
STRING_LITERAL(TMP3636, "invalid int size", 16);
Tsym293830* systemmodule_338007;
TY338011 gsystypes_338012;
Tstrtable293802 compilerprocs_338013;
Tstrtable293802 exposed_338014;
TY338219 inttypecache_338220;
extern TNimType NTI293832; /* TTypeSeq */
extern Gcheap49818 gch_49855;
extern NI ptrsize_177624;
extern TNimType NTI293242; /* TTypeKind */
extern Tstrtable293802 rodcompilerprocs_332077;
extern NI intsize_177622;

static N_INLINE(Cell47305*, usrtocell_51440)(void* usr) {
	Cell47305* result;
	result = 0;
	result = ((Cell47305*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47305))))));
	return result;
}

static N_INLINE(void, rtladdzct_52601)(Cell47305* c) {
	addzct_51417((&gch_49855.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47305* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601(c);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47305* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47305* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51440((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_52601(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Tsym293830*, getsyssym_338041)(NimStringDesc* name) {
	Tsym293830* result;
	Tident200012* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_200441(name);
	result = strtableget_300045((*systemmodule_338007).kindU.S3.tab, LOC1);
	{
		Tident200012* LOC6;
		if (!(result == NIM_NIL)) goto LA4;
		rawmessage_195612(((NU16) 68), name);
		LOC6 = 0;
		LOC6 = getident_200441(name);
		result = newsym_294683(((NU8) 0), LOC6, systemmodule_338007, (*systemmodule_338007).info);
		asgnRefNoCycle((void**) (&(*result).typ), newtype_296107(((NU8) 50), systemmodule_338007));
	}
	LA4: ;
	{
		if (!((*result).kind == ((NU8) 22))) goto LA9;
		loadstub_335223(result);
	}
	LA9: ;
	{
		if (!((*result).kind == ((NU8) 24))) goto LA13;
		result = (*result).owner;
	}
	LA13: ;
	return result;
}

N_NIMCALL(Ttype293836*, systypefromname_338148)(NimStringDesc* name) {
	Ttype293836* result;
	Tsym293830* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getsyssym_338041(name);
	result = (*LOC1).typ;
	return result;
}

N_NIMCALL(Ttype293836*, newsystype_338036)(NU8 kind, NI size) {
	Ttype293836* result;
	result = 0;
	result = newtype_296107(kind, systemmodule_338007);
	(*result).size = ((NI64) (size));
	(*result).align = ((NI16) (size));
	return result;
}

static N_INLINE(void, copymem_7478)(void* dest, void* source, NI size) {
	void* LOC1;
	LOC1 = 0;
	LOC1 = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copymem_7478(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(Ttype293836*, getsystype_338153)(NU8 kind) {
	Ttype293836* result;
{	result = 0;
	result = gsystypes_338012[(kind)- 0];
	{
		if (!(result == NIM_NIL)) goto LA3;
		switch (kind) {
		case ((NU8) 31):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1103));
		}
		break;
		case ((NU8) 32):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1104));
		}
		break;
		case ((NU8) 33):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1105));
		}
		break;
		case ((NU8) 34):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1106));
		}
		break;
		case ((NU8) 35):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1107));
		}
		break;
		case ((NU8) 40):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1108));
		}
		break;
		case ((NU8) 41):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1109));
		}
		break;
		case ((NU8) 42):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1110));
		}
		break;
		case ((NU8) 43):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1111));
		}
		break;
		case ((NU8) 44):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1112));
		}
		break;
		case ((NU8) 36):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1113));
		}
		break;
		case ((NU8) 37):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1114));
		}
		break;
		case ((NU8) 38):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1115));
			goto BeforeRet;
		}
		break;
		case ((NU8) 39):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1116));
		}
		break;
		case ((NU8) 1):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1117));
		}
		break;
		case ((NU8) 2):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1118));
		}
		break;
		case ((NU8) 28):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1119));
		}
		break;
		case ((NU8) 29):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1120));
		}
		break;
		case ((NU8) 26):
		{
			result = systypefromname_338148(((NimStringDesc*) &TMP1121));
		}
		break;
		case ((NU8) 5):
		{
			result = newsystype_338036(((NU8) 5), ptrsize_177624);
		}
		break;
		default:
		{
			NimStringDesc* LOC26;
			LOC26 = 0;
			LOC26 = rawNewString(reprEnum(kind, (&NTI293242))->Sup.len + 22);
appendString(LOC26, ((NimStringDesc*) &TMP1122));
appendString(LOC26, reprEnum(kind, (&NTI293242)));
			internalerror_197113(LOC26);
		}
		break;
		}
		asgnRefNoCycle((void**) (&gsystypes_338012[(kind)- 0]), result);
	}
	LA3: ;
	{
		NimStringDesc* LOC31;
		if (!!(((*result).kind == kind))) goto LA29;
		LOC31 = 0;
		LOC31 = rawNewString(reprEnum(kind, (&NTI293242))->Sup.len + reprEnum((*result).kind, (&NTI293242))->Sup.len + 14);
appendString(LOC31, ((NimStringDesc*) &TMP1124));
appendString(LOC31, reprEnum(kind, (&NTI293242)));
appendString(LOC31, ((NimStringDesc*) &TMP1125));
appendString(LOC31, reprEnum((*result).kind, (&NTI293242)));
		internalerror_197113(LOC31);
	}
	LA29: ;
	{
		NimStringDesc* LOC36;
		if (!(result == NIM_NIL)) goto LA34;
		LOC36 = 0;
		LOC36 = rawNewString(reprEnum(kind, (&NTI293242))->Sup.len + 16);
appendString(LOC36, ((NimStringDesc*) &TMP1126));
appendString(LOC36, reprEnum(kind, (&NTI293242)));
		internalerror_197113(LOC36);
	}
	LA34: ;
	}BeforeRet: ;
	return result;
}

static N_INLINE(Ttype293836*, skipintlit_338653)(Ttype293836* t) {
	Ttype293836* result;
{	result = 0;
	{
		if (!!(((*t).n == NIM_NIL))) goto LA3;
		{
			if (!((IL64(70866960384) &((NU64)1<<((NU)((*t).kind)&63U)))!=0)) goto LA7;
			result = getsystype_338153((*t).kind);
			goto BeforeRet;
		}
		LA7: ;
	}
	LA3: ;
	result = t;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, addsonskipintlit_338680)(Ttype293836* father, Ttype293836* son) {
	Ttype293836* s;
	{
		if (!(*father).sons == 0) goto LA3;
		if ((*father).sons) nimGCunrefNoCycle((*father).sons);
		(*father).sons = (Ttypeseq293832*) newSeqRC1((&NTI293832), 0);
	}
	LA3: ;
	s = skipintlit_338653(son);
	(*father).sons = (Ttypeseq293832*) incrSeqV2(&((*father).sons)->Sup, sizeof(Ttype293836*));
	asgnRefNoCycle((void**) (&(*father).sons->data[(*father).sons->Sup.len]), s);
	++(*father).sons->Sup.len;
	propagatetoowner_297176(father, s);
}

N_NIMCALL(Ttype293836*, nilorsysint_338018)(void) {
	Ttype293836* result;
	result = 0;
	result = gsystypes_338012[(((NU8) 31))- 0];
	return result;
}

N_NIMCALL(Tsym293830*, getsysmagic_338079)(NimStringDesc* name, NU16 m) {
	Tsym293830* result;
	Tidentiter300063 ti;
	Tident200012* id;
	Tsym293830* r;
{	result = 0;
	memset((void*)(&ti), 0, sizeof(ti));
	id = getident_200441(name);
	r = initidentiter_300066((&ti), (*systemmodule_338007).kindU.S3.tab, id);
	{
		while (1) {
			if (!!((r == NIM_NIL))) goto LA2;
			{
				if (!((*r).kind == ((NU8) 22))) goto LA5;
				loadstub_335223(r);
			}
			LA5: ;
			{
				if (!((*r).magic == m)) goto LA9;
				{
					if (!((*(*(*r).typ).sons->data[((NI) 0)]).kind == ((NU8) 31))) goto LA13;
					result = r;
					goto BeforeRet;
				}
				LA13: ;
				result = r;
			}
			LA9: ;
			r = nextidentiter_300072((&ti), (*systemmodule_338007).kindU.S3.tab);
		} LA2: ;
	}
	{
		if (!!((result == NIM_NIL))) goto LA17;
		goto BeforeRet;
	}
	LA17: ;
	rawmessage_195612(((NU16) 68), name);
	result = newsym_294683(((NU8) 0), id, systemmodule_338007, (*systemmodule_338007).info);
	asgnRefNoCycle((void**) (&(*result).typ), newtype_296107(((NU8) 50), systemmodule_338007));
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym293830*, getcompilerproc_338748)(NimStringDesc* name) {
	Tsym293830* result;
	Tident200012* ident;
	result = 0;
	ident = getident_200441(name);
	result = strtableget_300045(compilerprocs_338013, ident);
	{
		if (!(result == NIM_NIL)) goto LA3;
		result = strtableget_300045(rodcompilerprocs_332077, ident);
		{
			if (!!((result == NIM_NIL))) goto LA7;
			strtableadd_300040((&compilerprocs_338013), result);
			{
				if (!((*result).kind == ((NU8) 22))) goto LA11;
				loadstub_335223(result);
			}
			LA11: ;
			{
				if (!((*result).kind == ((NU8) 24))) goto LA15;
				result = (*result).owner;
			}
			LA15: ;
		}
		LA7: ;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, registercompilerproc_338797)(Tsym293830* s) {
	strtableadd_300040((&compilerprocs_338013), s);
}

N_NIMCALL(void, registernimscriptsymbol_338801)(Tsym293830* s) {
	Tsym293830* conflict;
	conflict = strtableget_300045(exposed_338014, (*s).name);
	{
		if (!(conflict == NIM_NIL)) goto LA3;
		strtableadd_300040((&exposed_338014), s);
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC6;
		NimStringDesc* LOC7;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = HEX24_193431((*conflict).info);
		LOC6 = rawNewString(LOC7->Sup.len + 51);
appendString(LOC6, ((NimStringDesc*) &TMP3346));
appendString(LOC6, LOC7);
		localerror_197085((*s).info, LOC6);
	}
	LA1: ;
}

N_NIMCALL(Ttype293836*, getintlittype_338627)(Tnode293798* literal) {
	Ttype293836* result;
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
		result = inttypecache_338220[(((NI) (value)))- -5];
		{
			Ttype293836* ti;
			if (!(result == NIM_NIL)) goto LA9;
			ti = getsystype_338153(((NU8) 31));
			result = copytype_296470(ti, (*ti).owner, NIM_FALSE);
			asgnRefNoCycle((void**) (&(*result).n), literal);
			asgnRefNoCycle((void**) (&inttypecache_338220[(((NI) (value)))- -5]), result);
		}
		LA9: ;
	}
	goto LA1;
	LA5: ;
	{
		Ttype293836* ti;
		ti = getsystype_338153(((NU8) 31));
		result = copytype_296470(ti, (*ti).owner, NIM_FALSE);
		asgnRefNoCycle((void**) (&(*result).n), literal);
	}
	LA1: ;
	return result;
}

N_NIMCALL(Ttype293836*, getfloatlittype_338649)(Tnode293798* literal) {
	Ttype293836* result;
	result = 0;
	result = newsystype_338036(((NU8) 36), ((NI) 8));
	asgnRefNoCycle((void**) (&(*result).n), literal);
	return result;
}

N_NIMCALL(void, setintlittype_338719)(Tnode293798* result) {
	NI64 i;
	i = (*result).kindU.S1.intval;
	switch (intsize_177622) {
	case ((NI) 8):
	{
		asgnRefNoCycle((void**) (&(*result).typ), getintlittype_338627(result));
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
			asgnRefNoCycle((void**) (&(*result).typ), getintlittype_338627(result));
		}
		goto LA3;
		LA7: ;
		{
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_338153(((NU8) 35)));
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
			asgnRefNoCycle((void**) (&(*result).typ), getintlittype_338627(result));
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
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_338153(((NU8) 34)));
		}
		goto LA11;
		LA20: ;
		{
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_338153(((NU8) 35)));
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
			asgnRefNoCycle((void**) (&(*result).typ), getintlittype_338627(result));
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
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_338153(((NU8) 33)));
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
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_338153(((NU8) 34)));
		}
		goto LA24;
		LA38: ;
		{
			asgnRefNoCycle((void**) (&(*result).typ), getsystype_338153(((NU8) 35)));
		}
		LA24: ;
	}
	break;
	default:
	{
		internalerror_197100((*result).info, ((NimStringDesc*) &TMP3636));
	}
	break;
	}
}

N_NIMCALL(void, resetsystypes_338222)(void) {
	asgnRefNoCycle((void**) (&systemmodule_338007), NIM_NIL);
	initstrtable_297001((&compilerprocs_338013));
	initstrtable_297001((&exposed_338014));
	{
		NU8 i_338414;
		NI res_338618;
		i_338414 = 0;
		res_338618 = ((NI) 0);
		{
			while (1) {
				if (!(res_338618 <= ((NI) 62))) goto LA3;
				i_338414 = ((NU8) (res_338618));
				asgnRefNoCycle((void**) (&gsystypes_338012[(i_338414)- 0]), NIM_NIL);
				res_338618 += ((NI) 1);
			} LA3: ;
		}
	}
	{
		NI i_338614;
		NI res_338624;
		i_338614 = 0;
		res_338624 = ((NI) -5);
		{
			while (1) {
				if (!(res_338624 <= ((NI) 64))) goto LA6;
				i_338614 = ((NI) (res_338624));
				asgnRefNoCycle((void**) (&inttypecache_338220[(i_338614)- -5]), NIM_NIL);
				res_338624 += ((NI) 1);
			} LA6: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_magicsysInit000)(void) {
	initstrtable_297001((&compilerprocs_338013));
	initstrtable_297001((&exposed_338014));
}

NIM_EXTERNC N_NOINLINE(void, compiler_magicsysDatInit000)(void) {
}
