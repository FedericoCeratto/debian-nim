/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tsym264826 Tsym264826;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttype264832 Ttype264832;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct Tidobj194006 Tidobj194006;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct Tnode264794 Tnode264794;
typedef struct Tloc264808 Tloc264808;
typedef struct Ropeobj173006 Ropeobj173006;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell47905 Cell47905;
typedef struct Cellseq47921 Cellseq47921;
typedef struct Gcheap50418 Gcheap50418;
typedef struct Gcstack50416 Gcstack50416;
typedef struct Memregion30085 Memregion30085;
typedef struct Smallchunk30039 Smallchunk30039;
typedef struct Llchunk30079 Llchunk30079;
typedef struct Bigchunk30041 Bigchunk30041;
typedef struct Intset30014 Intset30014;
typedef struct Trunk30010 Trunk30010;
typedef struct Avlnode30083 Avlnode30083;
typedef struct Gcstat50414 Gcstat50414;
typedef struct Cellset47917 Cellset47917;
typedef struct Pagedesc47913 Pagedesc47913;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tident194012 Tident194012;
typedef struct Tscope264820 Tscope264820;
typedef struct TY264927 TY264927;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct Tlib264812 Tlib264812;
typedef struct Tidentiter271088 Tidentiter271088;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct Basechunk30037 Basechunk30037;
typedef struct Freecell30029 Freecell30029;
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct TY264917 TY264917;
typedef NU8 Tnimkind3203;
typedef NU8 Tnimtypeflag3209Set;
typedef N_NIMCALL_PTR(void, TY3289) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3203 kind;
Tnimtypeflag3209Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, Globalmarkerproc56402) (void);
typedef Ttype264832* TY309011[62];
struct  Tstrtable264798  {
NI counter;
Tsymseq264796* data;
};
typedef Ttype264832* TY309219[70];
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj194006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Ttypekind264244;
typedef NU8 Tcallingconvention264002;
typedef NU32 Ttypeflag264431Set;
typedef NU8 Tlockind264800;
typedef NU8 Tstorageloc264804;
typedef NU16 Tlocflag264802Set;
struct  Tloc264808  {
Tlockind264800 k;
Tstorageloc264804 s;
Tlocflag264802Set flags;
Ttype264832* t;
Ropeobj173006* r;
Ropeobj173006* heaproot;
};
struct  Ttype264832  {
  Tidobj194006 Sup;
Ttypekind264244 kind;
Tcallingconvention264002 callconv;
Ttypeflag264431Set flags;
Ttypeseq264828* sons;
Tnode264794* n;
Tsym264826* owner;
Tsym264826* sym;
Tsym264826* destructor;
Tsym264826* deepcopy;
Tsym264826* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc264808 loc;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  Cell47905  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47921  {
NI len;
NI cap;
Cell47905** d;
};
typedef Smallchunk30039* TY30100[512];
typedef Trunk30010* Trunkbuckets30012[256];
struct  Intset30014  {
Trunkbuckets30012 data;
};
struct  Memregion30085  {
NI minlargeobj;
NI maxlargeobj;
TY30100 freesmallchunks;
Llchunk30079* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30041* freechunkslist;
Intset30014 chunkstarts;
Avlnode30083* root;
Avlnode30083* deleted;
Avlnode30083* last;
Avlnode30083* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47917  {
NI counter;
NI max;
Pagedesc47913* head;
Pagedesc47913** data;
};
struct  Gcheap50418  {
Gcstack50416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47921 zct;
Cellseq47921 decstack;
Cellseq47921 tempstack;
NI recgclock;
Memregion30085 region;
Gcstat50414 stat;
Cellset47917 marked;
Cellseq47921 additionalroots;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Tsymkind264435;
typedef NU8 Tmagic264525;
struct  Tlineinfo186336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Tsymflag264184Set;
typedef NU32 Toption164009Set;
struct  Tsym264826  {
  Tidobj194006 Sup;
Tsymkind264435 kind;
union{
struct {Ttypeseq264828* typeinstcache;
Tscope264820* typscope;
} S1;
struct {TY264927* procinstcache;
Tsym264826* gcunsafetyreason;
} S2;
struct {TY264927* usedgenerics;
Tstrtable264798 tab;
} S3;
struct {Tsym264826* guard;
NI bitsize;
} S4;
} kindU;
Tmagic264525 magic;
Ttype264832* typ;
Tident194012* name;
Tlineinfo186336 info;
Tsym264826* owner;
Tsymflag264184Set flags;
Tnode264794* ast;
Toption164009Set options;
NI position;
NI offset;
Tloc264808 loc;
Tlib264812* annex;
Tnode264794* constraint;
};
typedef NU16 Tmsgkind186002;
struct  Tidentiter271088  {
NI h;
Tident194012* name;
};
typedef NU16 Tnodeflag264427Set;
typedef NU8 Tnodekind264020;
struct  Tnode264794  {
Ttype264832* typ;
Tlineinfo186336 info;
Tnodeflag264427Set flags;
Tnodekind264020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym264826* sym;
} S4;
struct {Tident194012* ident;
} S5;
struct {Tnodeseq264788* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Ropeobj173006  {
  TNimObject Sup;
Ropeobj173006* left;
Ropeobj173006* right;
NI length;
NimStringDesc* data;
};
struct  Gcstack50416  {
Gcstack50416* prev;
Gcstack50416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30037  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30039  {
  Basechunk30037 Sup;
Smallchunk30039* next;
Smallchunk30039* prev;
Freecell30029* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30079  {
NI size;
NI acc;
Llchunk30079* next;
};
struct  Bigchunk30041  {
  Basechunk30037 Sup;
Bigchunk30041* next;
Bigchunk30041* prev;
NI align;
NF data;
};
typedef NI TY30018[16];
struct  Trunk30010  {
Trunk30010* next;
NI key;
TY30018 bits;
};
typedef Avlnode30083* TY30090[2];
struct  Avlnode30083  {
TY30090 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47913  {
Pagedesc47913* next;
NI key;
TY30018 bits;
};
struct  Tident194012  {
  Tidobj194006 Sup;
NimStringDesc* s;
Tident194012* next;
NI h;
};
struct  Tscope264820  {
NI depthlevel;
Tstrtable264798 symbols;
Tscope264820* parent;
};
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
};
typedef NU8 Tlibkind264810;
struct  Tlib264812  {
  Tlistentry141010 Sup;
Tlibkind264810 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj173006* name;
Tnode264794* path;
};
struct  Freecell30029  {
Freecell30029* next;
NI zerofield;
};
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
};
struct Ttypeseq264828 {
  TGenericSeq Sup;
  Ttype264832* data[SEQ_DECL_SIZE];
};
struct Tsymseq264796 {
  TGenericSeq Sup;
  Tsym264826* data[SEQ_DECL_SIZE];
};
struct TY264927 {
  TGenericSeq Sup;
  Tinstantiation264816* data[SEQ_DECL_SIZE];
};
struct Tnodeseq264788 {
  TGenericSeq Sup;
  Tnode264794* data[SEQ_DECL_SIZE];
};
struct TY264917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP1004)();
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56402 markerproc0);
N_NIMCALL(void, TMP1005)();
N_NIMCALL(void, TMP1006)();
N_NIMCALL(void, TMP1007)();
N_NIMCALL(void, TMP1008)();
N_NIMCALL(void, initstrtable_268001_850551059)(Tstrtable264798* x0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
static N_INLINE(Ttype264832*, skipintlit_309651_3937434831)(Ttype264832* t0);
N_NIMCALL(Ttype264832*, getsystype_309153_3937434831)(Ttypekind264244 kind0);
N_NIMCALL(Ttype264832*, systypefromname_309148_3937434831)(NimStringDesc* name0);
N_NIMCALL(Tsym264826*, getsyssym_309041_3937434831)(NimStringDesc* name0);
N_NIMCALL(Tsym264826*, strtableget_271070_2984716966)(Tstrtable264798 t0, Tident194012* name0);
N_NIMCALL(Tident194012*, getident_194441_791273810)(NimStringDesc* identifier0);
N_NIMCALL(void, rawmessage_189612_155036129)(Tmsgkind186002 msg0, NimStringDesc* arg0);
N_NIMCALL(Tsym264826*, newsym_265684_850551059)(Tsymkind264435 symkind0, Tident194012* name0, Tsym264826* owner0, Tlineinfo186336 info0);
N_NIMCALL(Ttype264832*, newtype_267107_850551059)(Ttypekind264244 kind0, Tsym264826* owner0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(void, loadstub_305825_1724185294)(Tsym264826* s0);
N_NIMCALL(Ttype264832*, newsystype_309036_3937434831)(Ttypekind264244 kind0, NI size0);
N_NIMCALL(void, internalerror_191113_155036129)(NimStringDesc* errmsg0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e0, TNimType* typ0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
N_NIMCALL(void, propagatetoowner_268190_850551059)(Ttype264832* owner0, Ttype264832* elem0);
N_NIMCALL(Tsym264826*, initidentiter_271091_2984716966)(Tidentiter271088* ti0, Tstrtable264798 tab0, Tident194012* s0);
N_NIMCALL(Tsym264826*, nextidentiter_271097_2984716966)(Tidentiter271088* ti0, Tstrtable264798 tab0);
N_NIMCALL(void, strtableadd_271065_2984716966)(Tstrtable264798* t0, Tsym264826* n0);
N_NIMCALL(void, localerror_191085_155036129)(Tlineinfo186336 info0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, HEX24_187431_155036129)(Tlineinfo186336 info0);
N_NIMCALL(Ttype264832*, copytype_267470_850551059)(Ttype264832* t0, Tsym264826* owner0, NIM_BOOL keepid0);
N_NIMCALL(Ttype264832*, getintlittype_309627_3937434831)(Tnode264794* literal0);
N_NIMCALL(void, internalerror_191100_155036129)(Tlineinfo186336 info0, NimStringDesc* errmsg0);
STRING_LITERAL(TMP1210, "int", 3);
STRING_LITERAL(TMP1211, "int8", 4);
STRING_LITERAL(TMP1212, "int16", 5);
STRING_LITERAL(TMP1213, "int32", 5);
STRING_LITERAL(TMP1214, "int64", 5);
STRING_LITERAL(TMP1215, "uint", 4);
STRING_LITERAL(TMP1216, "uint8", 5);
STRING_LITERAL(TMP1217, "uint16", 6);
STRING_LITERAL(TMP1218, "uint32", 6);
STRING_LITERAL(TMP1219, "uint64", 6);
STRING_LITERAL(TMP1220, "float", 5);
STRING_LITERAL(TMP1221, "float32", 7);
STRING_LITERAL(TMP1222, "float64", 7);
STRING_LITERAL(TMP1223, "float128", 8);
STRING_LITERAL(TMP1224, "bool", 4);
STRING_LITERAL(TMP1225, "char", 4);
STRING_LITERAL(TMP1226, "string", 6);
STRING_LITERAL(TMP1227, "cstring", 7);
STRING_LITERAL(TMP1228, "pointer", 7);
STRING_LITERAL(TMP1229, "request for typekind: ", 22);
STRING_LITERAL(TMP1231, "wanted: ", 8);
STRING_LITERAL(TMP1232, " got: ", 6);
STRING_LITERAL(TMP1233, "type not found: ", 16);
STRING_LITERAL(TMP3436, "symbol conflicts with other .exportNims symbol at: ", 51);
STRING_LITERAL(TMP3725, "invalid int size", 16);
Tsym264826* systemmodule_309007_3937434831;
extern TNimType NTI264792; /* PSym */
TY309011 gsystypes_309012_3937434831;
extern TNimType NTI264790; /* PType */
TNimType NTI309011; /* array[TTypeKind, PType] */
Tstrtable264798 compilerprocs_309013_3937434831;
extern TNimType NTI264798; /* TStrTable */
Tstrtable264798 exposed_309014_3937434831;
TY309219 inttypecache_309220_3937434831;
TNimType NTI309219; /* array[-5..64, PType] */
extern TNimType NTI264828; /* TTypeSeq */
extern Gcheap50418 gch_50458_1689653243;
extern NI ptrsize_171638_4151366050;
extern TNimType NTI264244; /* TTypeKind */
extern Tstrtable264798 rodcompilerprocs_303078_1724185294;
extern NI intsize_171636_4151366050;
N_NIMCALL(void, TMP1004)() {
	nimGCvisit((void*)systemmodule_309007_3937434831, 0);
}
N_NIMCALL(void, TMP1005)() {
	NI LOC1;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 62; LOC1++) {
	nimGCvisit((void*)gsystypes_309012_3937434831[LOC1], 0);
	}
}
N_NIMCALL(void, TMP1006)() {
	nimGCvisit((void*)compilerprocs_309013_3937434831.data, 0);
}
N_NIMCALL(void, TMP1007)() {
	nimGCvisit((void*)exposed_309014_3937434831.data, 0);
}
N_NIMCALL(void, TMP1008)() {
	NI LOC1;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 70; LOC1++) {
	nimGCvisit((void*)inttypecache_309220_3937434831[LOC1], 0);
	}
}

static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47905* result0;
	result0 = (Cell47905*)0;
	result0 = ((Cell47905*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47905))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0) {
	addzct_52017_1689653243((&gch_50458_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47905* c0;
	c0 = usrtocell_52040_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47905* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_52040_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47905* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_52040_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53201_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(Tsym264826*, getsyssym_309041_3937434831)(NimStringDesc* name0) {
	Tsym264826* result0;
	Tident194012* LOC1;
	result0 = (Tsym264826*)0;
	LOC1 = (Tident194012*)0;
	LOC1 = getident_194441_791273810(name0);
	result0 = strtableget_271070_2984716966((*systemmodule_309007_3937434831).kindU.S3.tab, LOC1);
	{
		Tident194012* LOC6;
		if (!(result0 == NIM_NIL)) goto LA4;
		rawmessage_189612_155036129(((Tmsgkind186002) 68), name0);
		LOC6 = (Tident194012*)0;
		LOC6 = getident_194441_791273810(name0);
		result0 = newsym_265684_850551059(((Tsymkind264435) 0), LOC6, systemmodule_309007_3937434831, (*systemmodule_309007_3937434831).info);
		asgnRefNoCycle((void**) (&(*result0).typ), newtype_267107_850551059(((Ttypekind264244) 50), systemmodule_309007_3937434831));
	}
	LA4: ;
	{
		if (!((*result0).kind == ((Tsymkind264435) 22))) goto LA9;
		loadstub_305825_1724185294(result0);
	}
	LA9: ;
	{
		if (!((*result0).kind == ((Tsymkind264435) 24))) goto LA13;
		result0 = (*result0).owner;
	}
	LA13: ;
	return result0;
}

N_NIMCALL(Ttype264832*, systypefromname_309148_3937434831)(NimStringDesc* name0) {
	Ttype264832* result0;
	Tsym264826* LOC1;
	result0 = (Ttype264832*)0;
	LOC1 = (Tsym264826*)0;
	LOC1 = getsyssym_309041_3937434831(name0);
	result0 = (*LOC1).typ;
	return result0;
}

N_NIMCALL(Ttype264832*, newsystype_309036_3937434831)(Ttypekind264244 kind0, NI size0) {
	Ttype264832* result0;
	result0 = (Ttype264832*)0;
	result0 = newtype_267107_850551059(kind0, systemmodule_309007_3937434831);
	(*result0).size = ((NI64) (size0));
	(*result0).align = ((NI16) (size0));
	return result0;
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(Ttype264832*, getsystype_309153_3937434831)(Ttypekind264244 kind0) {
	Ttype264832* result0;
{	result0 = (Ttype264832*)0;
	result0 = gsystypes_309012_3937434831[(kind0)- 0];
	{
		if (!(result0 == NIM_NIL)) goto LA3;
		switch (kind0) {
		case ((Ttypekind264244) 31):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1210));
		}
		break;
		case ((Ttypekind264244) 32):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1211));
		}
		break;
		case ((Ttypekind264244) 33):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1212));
		}
		break;
		case ((Ttypekind264244) 34):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1213));
		}
		break;
		case ((Ttypekind264244) 35):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1214));
		}
		break;
		case ((Ttypekind264244) 40):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1215));
		}
		break;
		case ((Ttypekind264244) 41):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1216));
		}
		break;
		case ((Ttypekind264244) 42):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1217));
		}
		break;
		case ((Ttypekind264244) 43):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1218));
		}
		break;
		case ((Ttypekind264244) 44):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1219));
		}
		break;
		case ((Ttypekind264244) 36):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1220));
		}
		break;
		case ((Ttypekind264244) 37):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1221));
		}
		break;
		case ((Ttypekind264244) 38):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1222));
			goto BeforeRet;
		}
		break;
		case ((Ttypekind264244) 39):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1223));
		}
		break;
		case ((Ttypekind264244) 1):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1224));
		}
		break;
		case ((Ttypekind264244) 2):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1225));
		}
		break;
		case ((Ttypekind264244) 28):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1226));
		}
		break;
		case ((Ttypekind264244) 29):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1227));
		}
		break;
		case ((Ttypekind264244) 26):
		{
			result0 = systypefromname_309148_3937434831(((NimStringDesc*) &TMP1228));
		}
		break;
		case ((Ttypekind264244) 5):
		{
			result0 = newsystype_309036_3937434831(((Ttypekind264244) 5), ptrsize_171638_4151366050);
		}
		break;
		default:
		{
			NimStringDesc* LOC26;
			LOC26 = (NimStringDesc*)0;
			LOC26 = rawNewString(reprEnum((NI)kind0, (&NTI264244))->Sup.len + 22);
appendString(LOC26, ((NimStringDesc*) &TMP1229));
appendString(LOC26, reprEnum((NI)kind0, (&NTI264244)));
			internalerror_191113_155036129(LOC26);
		}
		break;
		}
		asgnRefNoCycle((void**) (&gsystypes_309012_3937434831[(kind0)- 0]), result0);
	}
	LA3: ;
	{
		NimStringDesc* LOC31;
		if (!!(((*result0).kind == kind0))) goto LA29;
		LOC31 = (NimStringDesc*)0;
		LOC31 = rawNewString(reprEnum((NI)kind0, (&NTI264244))->Sup.len + reprEnum((NI)(*result0).kind, (&NTI264244))->Sup.len + 14);
appendString(LOC31, ((NimStringDesc*) &TMP1231));
appendString(LOC31, reprEnum((NI)kind0, (&NTI264244)));
appendString(LOC31, ((NimStringDesc*) &TMP1232));
appendString(LOC31, reprEnum((NI)(*result0).kind, (&NTI264244)));
		internalerror_191113_155036129(LOC31);
	}
	LA29: ;
	{
		NimStringDesc* LOC36;
		if (!(result0 == NIM_NIL)) goto LA34;
		LOC36 = (NimStringDesc*)0;
		LOC36 = rawNewString(reprEnum((NI)kind0, (&NTI264244))->Sup.len + 16);
appendString(LOC36, ((NimStringDesc*) &TMP1233));
appendString(LOC36, reprEnum((NI)kind0, (&NTI264244)));
		internalerror_191113_155036129(LOC36);
	}
	LA34: ;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(Ttype264832*, skipintlit_309651_3937434831)(Ttype264832* t0) {
	Ttype264832* result0;
{	result0 = (Ttype264832*)0;
	{
		if (!!(((*t0).n == NIM_NIL))) goto LA3;
		{
			if (!((*t0).kind == ((Ttypekind264244) 31) || (*t0).kind == ((Ttypekind264244) 36))) goto LA7;
			result0 = getsystype_309153_3937434831((*t0).kind);
			goto BeforeRet;
		}
		LA7: ;
	}
	LA3: ;
	result0 = t0;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, addsonskipintlit_309678_3937434831)(Ttype264832* father0, Ttype264832* son0) {
	Ttype264832* s0;
	{
		if (!(*father0).sons == 0) goto LA3;
		if ((*father0).sons) nimGCunrefNoCycle((*father0).sons);
		(*father0).sons = (Ttypeseq264828*) newSeqRC1((&NTI264828), 0);
	}
	LA3: ;
	s0 = skipintlit_309651_3937434831(son0);
	(*father0).sons = (Ttypeseq264828*) incrSeqV2(&((*father0).sons)->Sup, sizeof(Ttype264832*));
	asgnRefNoCycle((void**) (&(*father0).sons->data[(*father0).sons->Sup.len]), s0);
	++(*father0).sons->Sup.len;
	propagatetoowner_268190_850551059(father0, s0);
}

N_NIMCALL(Ttype264832*, nilorsysint_309018_3937434831)(void) {
	Ttype264832* result0;
	result0 = (Ttype264832*)0;
	result0 = gsystypes_309012_3937434831[(((Ttypekind264244) 31))- 0];
	return result0;
}

N_NIMCALL(Tsym264826*, getsysmagic_309079_3937434831)(NimStringDesc* name0, Tmagic264525 m0) {
	Tsym264826* result0;
	Tidentiter271088 ti0;
	Tident194012* id0;
	Tsym264826* r0;
{	result0 = (Tsym264826*)0;
	memset((void*)(&ti0), 0, sizeof(ti0));
	id0 = getident_194441_791273810(name0);
	r0 = initidentiter_271091_2984716966((&ti0), (*systemmodule_309007_3937434831).kindU.S3.tab, id0);
	{
		while (1) {
			if (!!((r0 == NIM_NIL))) goto LA2;
			{
				if (!((*r0).kind == ((Tsymkind264435) 22))) goto LA5;
				loadstub_305825_1724185294(r0);
			}
			LA5: ;
			{
				if (!((*r0).magic == m0)) goto LA9;
				{
					if (!((*(*(*r0).typ).sons->data[((NI) 0)]).kind == ((Ttypekind264244) 31))) goto LA13;
					result0 = r0;
					goto BeforeRet;
				}
				LA13: ;
				result0 = r0;
			}
			LA9: ;
			r0 = nextidentiter_271097_2984716966((&ti0), (*systemmodule_309007_3937434831).kindU.S3.tab);
		} LA2: ;
	}
	{
		if (!!((result0 == NIM_NIL))) goto LA17;
		goto BeforeRet;
	}
	LA17: ;
	rawmessage_189612_155036129(((Tmsgkind186002) 68), name0);
	result0 = newsym_265684_850551059(((Tsymkind264435) 0), id0, systemmodule_309007_3937434831, (*systemmodule_309007_3937434831).info);
	asgnRefNoCycle((void**) (&(*result0).typ), newtype_267107_850551059(((Ttypekind264244) 50), systemmodule_309007_3937434831));
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tsym264826*, getcompilerproc_309746_3937434831)(NimStringDesc* name0) {
	Tsym264826* result0;
	Tident194012* ident0;
	result0 = (Tsym264826*)0;
	ident0 = getident_194441_791273810(name0);
	result0 = strtableget_271070_2984716966(compilerprocs_309013_3937434831, ident0);
	{
		if (!(result0 == NIM_NIL)) goto LA3;
		result0 = strtableget_271070_2984716966(rodcompilerprocs_303078_1724185294, ident0);
		{
			if (!!((result0 == NIM_NIL))) goto LA7;
			strtableadd_271065_2984716966((&compilerprocs_309013_3937434831), result0);
			{
				if (!((*result0).kind == ((Tsymkind264435) 22))) goto LA11;
				loadstub_305825_1724185294(result0);
			}
			LA11: ;
			{
				if (!((*result0).kind == ((Tsymkind264435) 24))) goto LA15;
				result0 = (*result0).owner;
			}
			LA15: ;
		}
		LA7: ;
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, registercompilerproc_309795_3937434831)(Tsym264826* s0) {
	strtableadd_271065_2984716966((&compilerprocs_309013_3937434831), s0);
}

N_NIMCALL(void, registernimscriptsymbol_309799_3937434831)(Tsym264826* s0) {
	Tsym264826* conflict0;
	conflict0 = strtableget_271070_2984716966(exposed_309014_3937434831, (*s0).name);
	{
		if (!(conflict0 == NIM_NIL)) goto LA3;
		strtableadd_271065_2984716966((&exposed_309014_3937434831), s0);
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC6;
		NimStringDesc* LOC7;
		LOC6 = (NimStringDesc*)0;
		LOC7 = (NimStringDesc*)0;
		LOC7 = HEX24_187431_155036129((*conflict0).info);
		LOC6 = rawNewString(LOC7->Sup.len + 51);
appendString(LOC6, ((NimStringDesc*) &TMP3436));
appendString(LOC6, LOC7);
		localerror_191085_155036129((*s0).info, LOC6);
	}
	LA1: ;
}

N_NIMCALL(Ttype264832*, getintlittype_309627_3937434831)(Tnode264794* literal0) {
	Ttype264832* result0;
	NI64 value0;
	result0 = (Ttype264832*)0;
	value0 = (*literal0).kindU.S1.intval;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (IL64(-5) <= value0);
		if (!(LOC3)) goto LA4;
		LOC3 = (value0 <= IL64(64));
		LA4: ;
		if (!LOC3) goto LA5;
		result0 = inttypecache_309220_3937434831[(((NI) (value0)))- -5];
		{
			Ttype264832* ti0;
			if (!(result0 == NIM_NIL)) goto LA9;
			ti0 = getsystype_309153_3937434831(((Ttypekind264244) 31));
			result0 = copytype_267470_850551059(ti0, (*ti0).owner, NIM_FALSE);
			asgnRefNoCycle((void**) (&(*result0).n), literal0);
			asgnRefNoCycle((void**) (&inttypecache_309220_3937434831[(((NI) (value0)))- -5]), result0);
		}
		LA9: ;
	}
	goto LA1;
	LA5: ;
	{
		Ttype264832* ti0;
		ti0 = getsystype_309153_3937434831(((Ttypekind264244) 31));
		result0 = copytype_267470_850551059(ti0, (*ti0).owner, NIM_FALSE);
		asgnRefNoCycle((void**) (&(*result0).n), literal0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Ttype264832*, getfloatlittype_309647_3937434831)(Tnode264794* literal0) {
	Ttype264832* result0;
	result0 = (Ttype264832*)0;
	result0 = newsystype_309036_3937434831(((Ttypekind264244) 36), ((NI) 8));
	asgnRefNoCycle((void**) (&(*result0).n), literal0);
	return result0;
}

N_NIMCALL(void, setintlittype_309717_3937434831)(Tnode264794* result0) {
	NI64 i0;
	i0 = (*result0).kindU.S1.intval;
	switch (intsize_171636_4151366050) {
	case ((NI) 8):
	{
		asgnRefNoCycle((void**) (&(*result0).typ), getintlittype_309627_3937434831(result0));
	}
	break;
	case ((NI) 4):
	{
		{
			NIM_BOOL LOC5;
			LOC5 = (NIM_BOOL)0;
			LOC5 = (IL64(-2147483648) <= i0);
			if (!(LOC5)) goto LA6;
			LOC5 = (i0 <= IL64(2147483647));
			LA6: ;
			if (!LOC5) goto LA7;
			asgnRefNoCycle((void**) (&(*result0).typ), getintlittype_309627_3937434831(result0));
		}
		goto LA3;
		LA7: ;
		{
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_309153_3937434831(((Ttypekind264244) 35)));
		}
		LA3: ;
	}
	break;
	case ((NI) 2):
	{
		{
			NIM_BOOL LOC13;
			LOC13 = (NIM_BOOL)0;
			LOC13 = (IL64(-32768) <= i0);
			if (!(LOC13)) goto LA14;
			LOC13 = (i0 <= IL64(32767));
			LA14: ;
			if (!LOC13) goto LA15;
			asgnRefNoCycle((void**) (&(*result0).typ), getintlittype_309627_3937434831(result0));
		}
		goto LA11;
		LA15: ;
		{
			NIM_BOOL LOC18;
			LOC18 = (NIM_BOOL)0;
			LOC18 = (IL64(-2147483648) <= i0);
			if (!(LOC18)) goto LA19;
			LOC18 = (i0 <= IL64(2147483647));
			LA19: ;
			if (!LOC18) goto LA20;
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_309153_3937434831(((Ttypekind264244) 34)));
		}
		goto LA11;
		LA20: ;
		{
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_309153_3937434831(((Ttypekind264244) 35)));
		}
		LA11: ;
	}
	break;
	case ((NI) 1):
	{
		{
			NIM_BOOL LOC26;
			LOC26 = (NIM_BOOL)0;
			LOC26 = (IL64(-128) <= i0);
			if (!(LOC26)) goto LA27;
			LOC26 = (i0 <= IL64(127));
			LA27: ;
			if (!LOC26) goto LA28;
			asgnRefNoCycle((void**) (&(*result0).typ), getintlittype_309627_3937434831(result0));
		}
		goto LA24;
		LA28: ;
		{
			NIM_BOOL LOC31;
			LOC31 = (NIM_BOOL)0;
			LOC31 = (IL64(-32768) <= i0);
			if (!(LOC31)) goto LA32;
			LOC31 = (i0 <= IL64(32767));
			LA32: ;
			if (!LOC31) goto LA33;
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_309153_3937434831(((Ttypekind264244) 33)));
		}
		goto LA24;
		LA33: ;
		{
			NIM_BOOL LOC36;
			LOC36 = (NIM_BOOL)0;
			LOC36 = (IL64(-2147483648) <= i0);
			if (!(LOC36)) goto LA37;
			LOC36 = (i0 <= IL64(2147483647));
			LA37: ;
			if (!LOC36) goto LA38;
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_309153_3937434831(((Ttypekind264244) 34)));
		}
		goto LA24;
		LA38: ;
		{
			asgnRefNoCycle((void**) (&(*result0).typ), getsystype_309153_3937434831(((Ttypekind264244) 35)));
		}
		LA24: ;
	}
	break;
	default:
	{
		internalerror_191100_155036129((*result0).info, ((NimStringDesc*) &TMP3725));
	}
	break;
	}
}

N_NIMCALL(void, resetsystypes_309222_3937434831)(void) {
	asgnRefNoCycle((void**) (&systemmodule_309007_3937434831), NIM_NIL);
	initstrtable_268001_850551059((&compilerprocs_309013_3937434831));
	initstrtable_268001_850551059((&exposed_309014_3937434831));
	{
		Ttypekind264244 i_309414_3937434831;
		NI res_309618_3937434831;
		i_309414_3937434831 = (Ttypekind264244)0;
		res_309618_3937434831 = ((NI) 0);
		{
			while (1) {
				if (!(res_309618_3937434831 <= ((NI) 61))) goto LA3;
				i_309414_3937434831 = ((Ttypekind264244) (res_309618_3937434831));
				asgnRefNoCycle((void**) (&gsystypes_309012_3937434831[(i_309414_3937434831)- 0]), NIM_NIL);
				res_309618_3937434831 += ((NI) 1);
			} LA3: ;
		}
	}
	{
		NI i_309614_3937434831;
		NI res_309624_3937434831;
		i_309614_3937434831 = (NI)0;
		res_309624_3937434831 = ((NI) -5);
		{
			while (1) {
				if (!(res_309624_3937434831 <= ((NI) 64))) goto LA6;
				i_309614_3937434831 = ((NI) (res_309624_3937434831));
				asgnRefNoCycle((void**) (&inttypecache_309220_3937434831[(i_309614_3937434831)- -5]), NIM_NIL);
				res_309624_3937434831 += ((NI) 1);
			} LA6: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_magicsysInit000)(void) {
nimRegisterGlobalMarker(TMP1004);
nimRegisterGlobalMarker(TMP1005);
nimRegisterGlobalMarker(TMP1006);
nimRegisterGlobalMarker(TMP1007);
nimRegisterGlobalMarker(TMP1008);
	initstrtable_268001_850551059((&compilerprocs_309013_3937434831));
	initstrtable_268001_850551059((&exposed_309014_3937434831));
}

NIM_EXTERNC N_NOINLINE(void, compiler_magicsysDatInit000)(void) {
NTI309011.size = sizeof(TY309011);
NTI309011.kind = 16;
NTI309011.base = (&NTI264790);
NTI309011.flags = 2;
NTI309219.size = sizeof(TY309219);
NTI309219.kind = 16;
NTI309219.base = (&NTI264790);
NTI309219.flags = 2;
}

