/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tidtable263844 Tidtable263844;
typedef struct Tidpairseq263842 Tidpairseq263842;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttype263832 Ttype263832;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj193006 Tidobj193006;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq263828 Ttypeseq263828;
typedef struct Tnode263794 Tnode263794;
typedef struct Tsym263826 Tsym263826;
typedef struct Tloc263808 Tloc263808;
typedef struct Ropeobj172006 Ropeobj172006;
typedef struct Cell47905 Cell47905;
typedef struct Cellseq47921 Cellseq47921;
typedef struct Gcheap50418 Gcheap50418;
typedef struct Gcstack50416 Gcstack50416;
typedef struct Memregion30086 Memregion30086;
typedef struct Smallchunk30040 Smallchunk30040;
typedef struct Llchunk30080 Llchunk30080;
typedef struct Bigchunk30042 Bigchunk30042;
typedef struct Intset30014 Intset30014;
typedef struct Trunk30010 Trunk30010;
typedef struct Avlnode30084 Avlnode30084;
typedef struct Gcstat50414 Gcstat50414;
typedef struct Cellset47917 Cellset47917;
typedef struct Pagedesc47913 Pagedesc47913;
typedef struct Tlineinfo185336 Tlineinfo185336;
typedef struct Tscope263820 Tscope263820;
typedef struct TY263927 TY263927;
typedef struct Tstrtable263798 Tstrtable263798;
typedef struct Tsymseq263796 Tsymseq263796;
typedef struct Tident193012 Tident193012;
typedef struct Tlib263812 Tlib263812;
typedef struct Tidpair263840 Tidpair263840;
typedef struct Tnodeseq263788 Tnodeseq263788;
typedef struct Tinfocpu170477 Tinfocpu170477;
typedef struct Basechunk30038 Basechunk30038;
typedef struct Freecell30030 Freecell30030;
typedef struct Tinstantiation263816 Tinstantiation263816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct TY263917 TY263917;
struct  Tidtable263844  {
NI counter;
Tidpairseq263842* data;
};
typedef Tidtable263844 TY496204[62];
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
typedef Ttype263832* TY308011[62];
typedef NU8 Ttypekind263244;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj193006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tcallingconvention263002;
typedef NU32 Ttypeflag263431Set;
typedef NU8 Tlockind263800;
typedef NU8 Tstorageloc263804;
typedef NU16 Tlocflag263802Set;
struct  Tloc263808  {
Tlockind263800 k;
Tstorageloc263804 s;
Tlocflag263802Set flags;
Ttype263832* t;
Ropeobj172006* r;
Ropeobj172006* heaproot;
};
struct  Ttype263832  {
  Tidobj193006 Sup;
Ttypekind263244 kind;
Tcallingconvention263002 callconv;
Ttypeflag263431Set flags;
Ttypeseq263828* sons;
Tnode263794* n;
Tsym263826* owner;
Tsym263826* sym;
Tsym263826* destructor;
Tsym263826* deepcopy;
Tsym263826* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc263808 loc;
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
typedef Smallchunk30040* TY30101[512];
typedef Trunk30010* Trunkbuckets30012[256];
struct  Intset30014  {
Trunkbuckets30012 data;
};
struct  Memregion30086  {
NI minlargeobj;
NI maxlargeobj;
TY30101 freesmallchunks;
Llchunk30080* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30042* freechunkslist;
Intset30014 chunkstarts;
Avlnode30084* root;
Avlnode30084* deleted;
Avlnode30084* last;
Avlnode30084* freeavlnodes;
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
Memregion30086 region;
Gcstat50414 stat;
Cellset47917 marked;
Cellseq47921 additionalroots;
};
struct  Tlineinfo185336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU8 Tsymkind263435;
struct  Tstrtable263798  {
NI counter;
Tsymseq263796* data;
};
typedef NU8 Tmagic263525;
typedef NU32 Tsymflag263184Set;
typedef NU32 Toption163009Set;
struct  Tsym263826  {
  Tidobj193006 Sup;
Tsymkind263435 kind;
union{
struct {Ttypeseq263828* typeinstcache;
Tscope263820* typscope;
} S1;
struct {TY263927* procinstcache;
Tsym263826* gcunsafetyreason;
} S2;
struct {TY263927* usedgenerics;
Tstrtable263798 tab;
} S3;
struct {Tsym263826* guard;
NI bitsize;
} S4;
} kindU;
Tmagic263525 magic;
Ttype263832* typ;
Tident193012* name;
Tlineinfo185336 info;
Tsym263826* owner;
Tsymflag263184Set flags;
Tnode263794* ast;
Toption163009Set options;
NI position;
NI offset;
Tloc263808 loc;
Tlib263812* annex;
Tnode263794* constraint;
};
struct  Tidpair263840  {
Tidobj193006* key;
TNimObject* val;
};
typedef NU8 Ttypeflag263431;
typedef NU16 Tspecialword247004;
typedef NU16 Tnodeflag263427Set;
typedef NU8 Tnodekind263020;
struct  Tnode263794  {
Ttype263832* typ;
Tlineinfo185336 info;
Tnodeflag263427Set flags;
Tnodekind263020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym263826* sym;
} S4;
struct {Tident193012* ident;
} S5;
struct {Tnodeseq263788* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 Tendian170475;
struct Tinfocpu170477 {
NimStringDesc* Field0;
NI Field1;
Tendian170475 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu170477 TY170511[18];
typedef NU8 Tsystemcpu170454;
struct  Ropeobj172006  {
  TNimObject Sup;
Ropeobj172006* left;
Ropeobj172006* right;
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
struct  Basechunk30038  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30040  {
  Basechunk30038 Sup;
Smallchunk30040* next;
Smallchunk30040* prev;
Freecell30030* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30080  {
NI size;
NI acc;
Llchunk30080* next;
};
struct  Bigchunk30042  {
  Basechunk30038 Sup;
Bigchunk30042* next;
Bigchunk30042* prev;
NI align;
NF data;
};
typedef NI TY30019[8];
struct  Trunk30010  {
Trunk30010* next;
NI key;
TY30019 bits;
};
typedef Avlnode30084* TY30091[2];
struct  Avlnode30084  {
TY30091 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47913  {
Pagedesc47913* next;
NI key;
TY30019 bits;
};
struct  Tscope263820  {
NI depthlevel;
Tstrtable263798 symbols;
Tscope263820* parent;
};
struct  Tident193012  {
  Tidobj193006 Sup;
NimStringDesc* s;
Tident193012* next;
NI h;
};
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
};
typedef NU8 Tlibkind263810;
struct  Tlib263812  {
  Tlistentry141010 Sup;
Tlibkind263810 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj172006* name;
Tnode263794* path;
};
struct  Freecell30030  {
Freecell30030* next;
NI zerofield;
};
struct  Tinstantiation263816  {
Tsym263826* sym;
Ttypeseq263828* concretetypes;
TY263917* usedby;
NI compilesid;
};
struct Tidpairseq263842 {
  TGenericSeq Sup;
  Tidpair263840 data[SEQ_DECL_SIZE];
};
struct Ttypeseq263828 {
  TGenericSeq Sup;
  Ttype263832* data[SEQ_DECL_SIZE];
};
struct TY263927 {
  TGenericSeq Sup;
  Tinstantiation263816* data[SEQ_DECL_SIZE];
};
struct Tsymseq263796 {
  TGenericSeq Sup;
  Tsym263826* data[SEQ_DECL_SIZE];
};
struct Tnodeseq263788 {
  TGenericSeq Sup;
  Tnode263794* data[SEQ_DECL_SIZE];
};
struct TY263917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP1289)();
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56402 markerproc0);
N_NIMCALL(void, TMP1290)();
N_NIMCALL(void, inittypetables_496212_2036603609)(void);
N_NIMCALL(void, initidtable_267033_850551059)(Tidtable263844* x0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x0, NI len0);
N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR c0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(void, internalerror_190100_155036129)(Tlineinfo185336 info0, NimStringDesc* errmsg0);
N_NIMCALL(void, internalerror_190113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(Ttype263832*, getuniquetype_496640_2036603609)(Ttype263832* key0);
N_NIMCALL(Ttype263832*, lastson_266377_850551059)(Ttype263832* n0);
N_NIMCALL(Ttype263832*, slowsearch_496601_2036603609)(Ttype263832* key0, Ttypekind263244 k0);
N_NIMCALL(NIM_BOOL, idtablehasobjectaskey_270125_2984716966)(Tidtable263844 t0, Tidobj193006* key0);
N_NIMCALL(NIM_BOOL, samebackendtype_296587_3876443242)(Ttype263832* x0, Ttype263832* y0);
N_NIMCALL(void, idtableput_270119_2984716966)(Tidtable263844* t0, Tidobj193006* key0, TNimObject* val0);
N_NIMCALL(TNimObject*, idtableget_270111_2984716966)(Tidtable263844 t0, Tidobj193006* key0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, tocchar_185633_155036129)(NIM_CHAR c0);
N_NIMCALL(Tnode263794*, getpragmastmt_496005_2036603609)(Tnode263794* n0, Tspecialword247004 w0);
static N_INLINE(NI, len_264080_850551059)(Tnode263794* n0);
static N_INLINE(Tnode263794*, HEX5BHEX5D_264238_850551059)(Tnode263794* n0, NI i0);
N_NIMCALL(Tspecialword247004, whichpragma_289525_2616423590)(Tnode263794* n0);
STRING_LITERAL(TMP3929, "N", 1);
STRING_LITERAL(TMP3930, "HEX", 3);
STRING_LITERAL(TMP3939, "metatype not eliminated", 23);
STRING_LITERAL(TMP4035, "\"", 1);
extern NIM_CONST TY170511 Cpu_170497_4151366050;
TY496204 gtypetable_496205_2036603609;
extern TNimType NTI263844; /* TIdTable */
TNimType NTI496204; /* array[TTypeKind, TIdTable] */
TY308011 gcanonicaltypes_496209_2036603609;
extern TNimType NTI308011; /* array[TTypeKind, PType] */
extern Gcheap50418 gch_50458_1689653243;
extern Tsystemcpu170454 targetcpu_170622_4151366050;
N_NIMCALL(void, TMP1289)() {
	NI LOC1;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 62; LOC1++) {
	nimGCvisit((void*)gtypetable_496205_2036603609[LOC1].data, 0);
	}
}
N_NIMCALL(void, TMP1290)() {
	NI LOC1;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 62; LOC1++) {
	nimGCvisit((void*)gcanonicaltypes_496209_2036603609[LOC1], 0);
	}
}

N_NIMCALL(void, inittypetables_496212_2036603609)(void) {
	{
		Ttypekind263244 i_496414_2036603609;
		NI res_496421_2036603609;
		i_496414_2036603609 = (Ttypekind263244)0;
		res_496421_2036603609 = ((NI) 0);
		{
			while (1) {
				if (!(res_496421_2036603609 <= ((NI) 61))) goto LA3;
				i_496414_2036603609 = ((Ttypekind263244) (res_496421_2036603609));
				initidtable_267033_850551059((&gtypetable_496205_2036603609[(i_496414_2036603609)- 0]));
				res_496421_2036603609 += ((NI) 1);
			} LA3: ;
		}
	}
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, mangle_496847_2036603609)(NimStringDesc* name0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = rawNewString(((NI) ((name0 ? name0->Sup.len : 0))));
	switch (((NU8)(name0->data[((NI) 0)]))) {
	case 65 ... 90:
	case 97 ... 122:
	{
		result0 = addChar(result0, name0->data[((NI) 0)]);
	}
	break;
	case 48 ... 57:
	{
		NimStringDesc* LOC3;
		LOC3 = (NimStringDesc*)0;
		LOC3 = rawNewString(2);
appendString(LOC3, ((NimStringDesc*) &TMP3929));
appendChar(LOC3, name0->data[((NI) 0)]);
		result0 = resizeString(result0, LOC3->Sup.len + 0);
appendString(result0, LOC3);
	}
	break;
	default:
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		LOC5 = (NimStringDesc*)0;
		LOC6 = (NimStringDesc*)0;
		LOC6 = nsuToHex(((NI64) (((NU8)(name0->data[((NI) 0)])))), ((NI) 2));
		LOC5 = rawNewString(LOC6->Sup.len + 3);
appendString(LOC5, ((NimStringDesc*) &TMP3930));
appendString(LOC5, LOC6);
		result0 = LOC5;
	}
	break;
	}
	{
		NI i_496868_2036603609;
		NI HEX3Atmp_496879_2036603609;
		NI res_496882_2036603609;
		i_496868_2036603609 = (NI)0;
		HEX3Atmp_496879_2036603609 = (NI)0;
		HEX3Atmp_496879_2036603609 = (NI)((name0 ? name0->Sup.len : 0) - ((NI) 1));
		res_496882_2036603609 = ((NI) 1);
		{
			while (1) {
				NIM_CHAR c0;
				if (!(res_496882_2036603609 <= HEX3Atmp_496879_2036603609)) goto LA9;
				i_496868_2036603609 = res_496882_2036603609;
				c0 = name0->data[i_496868_2036603609];
				switch (((NU8)(c0))) {
				case 65 ... 90:
				{
					NIM_CHAR LOC11;
					LOC11 = (NIM_CHAR)0;
					LOC11 = nsuToLowerChar(c0);
					result0 = addChar(result0, LOC11);
				}
				break;
				case 95:
				{
				}
				break;
				case 97 ... 122:
				case 48 ... 57:
				{
					result0 = addChar(result0, c0);
				}
				break;
				default:
				{
					NimStringDesc* LOC15;
					NimStringDesc* LOC16;
					LOC15 = (NimStringDesc*)0;
					LOC16 = (NimStringDesc*)0;
					LOC16 = nsuToHex(((NI64) (((NU8)(c0)))), ((NI) 2));
					LOC15 = rawNewString(LOC16->Sup.len + 3);
appendString(LOC15, ((NimStringDesc*) &TMP3930));
appendString(LOC15, LOC16);
					result0 = resizeString(result0, LOC15->Sup.len + 0);
appendString(result0, LOC15);
				}
				break;
				}
				res_496882_2036603609 += ((NI) 1);
			} LA9: ;
		}
	}
	return result0;
}

static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47905* result0;
	result0 = (Cell47905*)0;
	result0 = ((Cell47905*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47905))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0) {
	addzct_52017_1689653243((&gch_50458_1689653243.zct), c0);
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
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53201_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(Ttype263832*, slowsearch_496601_2036603609)(Ttype263832* key0, Ttypekind263244 k0) {
	Ttype263832* result0;
	Tidobj193006* LOC16;
	TNimObject* LOC17;
{	result0 = (Ttype263832*)0;
	{
		Tidobj193006* LOC3;
		NIM_BOOL LOC4;
		LOC3 = (Tidobj193006*)0;
		LOC3 = &key0->Sup;
		LOC4 = (NIM_BOOL)0;
		LOC4 = idtablehasobjectaskey_270125_2984716966(gtypetable_496205_2036603609[(k0)- 0], LOC3);
		if (!LOC4) goto LA5;
		result0 = key0;
		goto BeforeRet;
	}
	LA5: ;
	{
		NI h_496617_2036603609;
		NI HEX3Atmp_496633_2036603609;
		NI res_496636_2036603609;
		h_496617_2036603609 = (NI)0;
		HEX3Atmp_496633_2036603609 = (NI)0;
		HEX3Atmp_496633_2036603609 = (gtypetable_496205_2036603609[(k0)- 0].data ? (gtypetable_496205_2036603609[(k0)- 0].data->Sup.len-1) : -1);
		res_496636_2036603609 = ((NI) 0);
		{
			while (1) {
				Ttype263832* t0;
				if (!(res_496636_2036603609 <= HEX3Atmp_496633_2036603609)) goto LA9;
				h_496617_2036603609 = res_496636_2036603609;
				t0 = ((Ttype263832*) (gtypetable_496205_2036603609[(k0)- 0].data->data[h_496617_2036603609].key));
				{
					NIM_BOOL LOC12;
					LOC12 = (NIM_BOOL)0;
					LOC12 = !((t0 == NIM_NIL));
					if (!(LOC12)) goto LA13;
					LOC12 = samebackendtype_296587_3876443242(t0, key0);
					LA13: ;
					if (!LOC12) goto LA14;
					result0 = t0;
					goto BeforeRet;
				}
				LA14: ;
				res_496636_2036603609 += ((NI) 1);
			} LA9: ;
		}
	}
	LOC16 = (Tidobj193006*)0;
	LOC16 = &key0->Sup;
	LOC17 = (TNimObject*)0;
	LOC17 = &key0->Sup.Sup;
	idtableput_270119_2984716966((&gtypetable_496205_2036603609[(k0)- 0]), LOC16, LOC17);
	result0 = key0;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Ttype263832*, getuniquetype_496640_2036603609)(Ttype263832* key0) {
	Ttype263832* result0;
	Ttypekind263244 k0;
{	result0 = (Ttype263832*)0;
	{
		if (!(key0 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	k0 = (*key0).kind;
	switch (k0) {
	case ((Ttypekind263244) 1):
	case ((Ttypekind263244) 2):
	case ((Ttypekind263244) 31) ... ((Ttypekind263244) 44):
	{
		result0 = key0;
	}
	break;
	case ((Ttypekind263244) 3):
	case ((Ttypekind263244) 5):
	case ((Ttypekind263244) 6):
	case ((Ttypekind263244) 7):
	case ((Ttypekind263244) 26):
	case ((Ttypekind263244) 28):
	case ((Ttypekind263244) 29):
	case ((Ttypekind263244) 0):
	case ((Ttypekind263244) 45):
	{
		result0 = gcanonicaltypes_496209_2036603609[(k0)- 0];
		{
			if (!(result0 == NIM_NIL)) goto LA9;
			asgnRefNoCycle((void**) (&gcanonicaltypes_496209_2036603609[(k0)- 0]), key0);
			result0 = key0;
		}
		LA9: ;
	}
	break;
	case ((Ttypekind263244) 8):
	case ((Ttypekind263244) 51):
	case ((Ttypekind263244) 12):
	case ((Ttypekind263244) 60):
	case ((Ttypekind263244) 61):
	case ((Ttypekind263244) 54):
	case ((Ttypekind263244) 52):
	case ((Ttypekind263244) 53):
	case ((Ttypekind263244) 55):
	case ((Ttypekind263244) 56):
	case ((Ttypekind263244) 57):
	case ((Ttypekind263244) 58):
	{
		{
			if (!!(((*key0).sym == NIM_NIL))) goto LA14;
			internalerror_190100_155036129((*(*key0).sym).info, ((NimStringDesc*) &TMP3939));
		}
		goto LA12;
		LA14: ;
		{
			internalerror_190113_155036129(((NimStringDesc*) &TMP3939));
		}
		LA12: ;
	}
	break;
	case ((Ttypekind263244) 13):
	{
		{
			if (!!(((*key0).deepcopy == NIM_NIL))) goto LA20;
			result0 = key0;
		}
		goto LA18;
		LA20: ;
		{
			Ttype263832* LOC23;
			LOC23 = (Ttype263832*)0;
			LOC23 = lastson_266377_850551059(key0);
			result0 = getuniquetype_496640_2036603609(LOC23);
		}
		LA18: ;
	}
	break;
	case ((Ttypekind263244) 11):
	case ((Ttypekind263244) 15):
	case ((Ttypekind263244) 47):
	case ((Ttypekind263244) 46):
	case ((Ttypekind263244) 49):
	case ((Ttypekind263244) 59):
	{
		Ttype263832* LOC25;
		LOC25 = (Ttype263832*)0;
		LOC25 = lastson_266377_850551059(key0);
		result0 = getuniquetype_496640_2036603609(LOC25);
	}
	break;
	case ((Ttypekind263244) 21):
	case ((Ttypekind263244) 22):
	case ((Ttypekind263244) 23):
	{
		Ttype263832* elemtype0;
		elemtype0 = lastson_266377_850551059(key0);
		{
			if (!((IL64(35182224605190) &((NU64)1<<((NU)((*elemtype0).kind)&63U)))!=0)) goto LA29;
			result0 = key0;
		}
		goto LA27;
		LA29: ;
		{
			result0 = slowsearch_496601_2036603609(key0, k0);
		}
		LA27: ;
	}
	break;
	case ((Ttypekind263244) 4):
	case ((Ttypekind263244) 9):
	case ((Ttypekind263244) 10):
	case ((Ttypekind263244) 27):
	case ((Ttypekind263244) 16):
	case ((Ttypekind263244) 19):
	case ((Ttypekind263244) 20):
	case ((Ttypekind263244) 18):
	case ((Ttypekind263244) 24):
	case ((Ttypekind263244) 30):
	case ((Ttypekind263244) 48):
	case ((Ttypekind263244) 50):
	{
		result0 = slowsearch_496601_2036603609(key0, k0);
	}
	break;
	case ((Ttypekind263244) 17):
	{
		{
			Tidobj193006* LOC38;
			TNimObject* LOC39;
			if (!!((((*key0).flags &(1U<<((NU)(((Ttypeflag263431) 8))&31U)))!=0))) goto LA36;
			LOC38 = (Tidobj193006*)0;
			LOC38 = &key0->Sup;
			LOC39 = (TNimObject*)0;
			LOC39 = idtableget_270111_2984716966(gtypetable_496205_2036603609[(k0)- 0], LOC38);
			result0 = ((Ttype263832*) (LOC39));
			{
				Tidobj193006* LOC44;
				TNimObject* LOC45;
				if (!(result0 == NIM_NIL)) goto LA42;
				LOC44 = (Tidobj193006*)0;
				LOC44 = &key0->Sup;
				LOC45 = (TNimObject*)0;
				LOC45 = &key0->Sup.Sup;
				idtableput_270119_2984716966((&gtypetable_496205_2036603609[(k0)- 0]), LOC44, LOC45);
				result0 = key0;
			}
			LA42: ;
		}
		goto LA34;
		LA36: ;
		{
			Tidobj193006* LOC62;
			TNimObject* LOC63;
			{
				Tidobj193006* LOC49;
				NIM_BOOL LOC50;
				LOC49 = (Tidobj193006*)0;
				LOC49 = &key0->Sup;
				LOC50 = (NIM_BOOL)0;
				LOC50 = idtablehasobjectaskey_270125_2984716966(gtypetable_496205_2036603609[(k0)- 0], LOC49);
				if (!LOC50) goto LA51;
				result0 = key0;
				goto BeforeRet;
			}
			LA51: ;
			{
				NI h_496740_2036603609;
				NI HEX3Atmp_496778_2036603609;
				NI res_496781_2036603609;
				h_496740_2036603609 = (NI)0;
				HEX3Atmp_496778_2036603609 = (NI)0;
				HEX3Atmp_496778_2036603609 = (gtypetable_496205_2036603609[(k0)- 0].data ? (gtypetable_496205_2036603609[(k0)- 0].data->Sup.len-1) : -1);
				res_496781_2036603609 = ((NI) 0);
				{
					while (1) {
						Ttype263832* t0;
						if (!(res_496781_2036603609 <= HEX3Atmp_496778_2036603609)) goto LA55;
						h_496740_2036603609 = res_496781_2036603609;
						t0 = ((Ttype263832*) (gtypetable_496205_2036603609[(k0)- 0].data->data[h_496740_2036603609].key));
						{
							NIM_BOOL LOC58;
							LOC58 = (NIM_BOOL)0;
							LOC58 = !((t0 == NIM_NIL));
							if (!(LOC58)) goto LA59;
							LOC58 = samebackendtype_296587_3876443242(t0, key0);
							LA59: ;
							if (!LOC58) goto LA60;
							result0 = t0;
							goto BeforeRet;
						}
						LA60: ;
						res_496781_2036603609 += ((NI) 1);
					} LA55: ;
				}
			}
			LOC62 = (Tidobj193006*)0;
			LOC62 = &key0->Sup;
			LOC63 = (TNimObject*)0;
			LOC63 = &key0->Sup.Sup;
			idtableput_270119_2984716966((&gtypetable_496205_2036603609[(k0)- 0]), LOC62, LOC63);
			result0 = key0;
		}
		LA34: ;
	}
	break;
	case ((Ttypekind263244) 14):
	{
		Tidobj193006* LOC65;
		TNimObject* LOC66;
		LOC65 = (Tidobj193006*)0;
		LOC65 = &key0->Sup;
		LOC66 = (TNimObject*)0;
		LOC66 = idtableget_270111_2984716966(gtypetable_496205_2036603609[(k0)- 0], LOC65);
		result0 = ((Ttype263832*) (LOC66));
		{
			Tidobj193006* LOC71;
			TNimObject* LOC72;
			if (!(result0 == NIM_NIL)) goto LA69;
			LOC71 = (Tidobj193006*)0;
			LOC71 = &key0->Sup;
			LOC72 = (TNimObject*)0;
			LOC72 = &key0->Sup.Sup;
			idtableput_270119_2984716966((&gtypetable_496205_2036603609[(k0)- 0]), LOC71, LOC72);
			result0 = key0;
		}
		LA69: ;
	}
	break;
	case ((Ttypekind263244) 25):
	{
		{
			if (!!(((*key0).callconv == ((Tcallingconvention263002) 8)))) goto LA76;
			result0 = key0;
		}
		goto LA74;
		LA76: ;
		{
			result0 = slowsearch_496601_2036603609(key0, k0);
		}
		LA74: ;
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NimStringDesc*, makesinglelinecstring_496835_2036603609)(NimStringDesc* s0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = copyString(((NimStringDesc*) &TMP4035));
	{
		NIM_CHAR c_496840_2036603609;
		NI i_496844_2036603609;
		NI L_496846_2036603609;
		c_496840_2036603609 = (NIM_CHAR)0;
		i_496844_2036603609 = ((NI) 0);
		L_496846_2036603609 = (s0 ? s0->Sup.len : 0);
		{
			while (1) {
				NimStringDesc* LOC4;
				if (!(i_496844_2036603609 < L_496846_2036603609)) goto LA3;
				c_496840_2036603609 = s0->data[i_496844_2036603609];
				LOC4 = (NimStringDesc*)0;
				LOC4 = tocchar_185633_155036129(c_496840_2036603609);
				result0 = resizeString(result0, LOC4->Sup.len + 0);
appendString(result0, LOC4);
				i_496844_2036603609 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = addChar(result0, 34);
	return result0;
}

static N_INLINE(NI, len_264080_850551059)(Tnode263794* n0) {
	NI result0;
	result0 = (NI)0;
	{
		if (!(*n0).kindU.S6.sons == 0) goto LA3;
		result0 = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result0 = ((*n0).kindU.S6.sons ? (*n0).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result0;
}

static N_INLINE(Tnode263794*, HEX5BHEX5D_264238_850551059)(Tnode263794* n0, NI i0) {
	Tnode263794* result0;
	result0 = (Tnode263794*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
}

N_NIMCALL(Tnode263794*, getpragmastmt_496005_2036603609)(Tnode263794* n0, Tspecialword247004 w0) {
	Tnode263794* result0;
{	result0 = (Tnode263794*)0;
	switch ((*n0).kind) {
	case ((Tnodekind263020) 115):
	{
		{
			NI i_496028_2036603609;
			NI HEX3Atmp_496070_2036603609;
			NI LOC3;
			NI res_496073_2036603609;
			i_496028_2036603609 = (NI)0;
			HEX3Atmp_496070_2036603609 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = len_264080_850551059(n0);
			HEX3Atmp_496070_2036603609 = (LOC3 - 1);
			res_496073_2036603609 = ((NI) 0);
			{
				while (1) {
					Tnode263794* LOC6;
					if (!(res_496073_2036603609 <= HEX3Atmp_496070_2036603609)) goto LA5;
					i_496028_2036603609 = res_496073_2036603609;
					LOC6 = (Tnode263794*)0;
					LOC6 = HEX5BHEX5D_264238_850551059(n0, i_496028_2036603609);
					result0 = getpragmastmt_496005_2036603609(LOC6, w0);
					{
						if (!!((result0 == NIM_NIL))) goto LA9;
						goto LA2;
					}
					LA9: ;
					res_496073_2036603609 += ((NI) 1);
				} LA5: ;
			}
		} LA2: ;
	}
	break;
	case ((Tnodekind263020) 90):
	{
		{
			NI i_496059_2036603609;
			NI HEX3Atmp_496078_2036603609;
			NI LOC13;
			NI res_496081_2036603609;
			i_496059_2036603609 = (NI)0;
			HEX3Atmp_496078_2036603609 = (NI)0;
			LOC13 = (NI)0;
			LOC13 = len_264080_850551059(n0);
			HEX3Atmp_496078_2036603609 = (LOC13 - 1);
			res_496081_2036603609 = ((NI) 0);
			{
				while (1) {
					if (!(res_496081_2036603609 <= HEX3Atmp_496078_2036603609)) goto LA15;
					i_496059_2036603609 = res_496081_2036603609;
					{
						Tnode263794* LOC18;
						Tspecialword247004 LOC19;
						LOC18 = (Tnode263794*)0;
						LOC18 = HEX5BHEX5D_264238_850551059(n0, i_496059_2036603609);
						LOC19 = (Tspecialword247004)0;
						LOC19 = whichpragma_289525_2616423590(LOC18);
						if (!(LOC19 == w0)) goto LA20;
						result0 = HEX5BHEX5D_264238_850551059(n0, i_496059_2036603609);
						goto BeforeRet;
					}
					LA20: ;
					res_496081_2036603609 += ((NI) 1);
				} LA15: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, stmtscontainpragma_496085_2036603609)(Tnode263794* n0, Tspecialword247004 w0) {
	NIM_BOOL result0;
	Tnode263794* LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (Tnode263794*)0;
	LOC1 = getpragmastmt_496005_2036603609(n0, w0);
	result0 = !((LOC1 == NIM_NIL));
	return result0;
}

N_NIMCALL(NI64, hashstring_496102_2036603609)(NimStringDesc* s0) {
	NI64 result0;
	result0 = (NI64)0;
	{
		NI64 b0;
		if (!(Cpu_170497_4151366050[(targetcpu_170622_4151366050)- 1].Field4 == ((NI) 64))) goto LA3;
		b0 = IL64(0);
		{
			NI i_496118_2036603609;
			NI HEX3Atmp_496186_2036603609;
			NI res_496189_2036603609;
			i_496118_2036603609 = (NI)0;
			HEX3Atmp_496186_2036603609 = (NI)0;
			HEX3Atmp_496186_2036603609 = (NI)((s0 ? s0->Sup.len : 0) - ((NI) 1));
			res_496189_2036603609 = ((NI) 0);
			{
				while (1) {
					if (!(res_496189_2036603609 <= HEX3Atmp_496186_2036603609)) goto LA7;
					i_496118_2036603609 = res_496189_2036603609;
					b0 = (NI64)((NU64)(b0) + (NU64)(((NI64) (((NU8)(s0->data[i_496118_2036603609]))))));
					b0 = (NI64)((NU64)(b0) + (NU64)((NI64)((NU64)(b0) << (NU64)(IL64(10)))));
					b0 = (NI64)(b0 ^ (NI64)((NU64)(b0) >> (NU64)(IL64(6))));
					res_496189_2036603609 += ((NI) 1);
				} LA7: ;
			}
		}
		b0 = (NI64)((NU64)(b0) + (NU64)((NI64)((NU64)(b0) << (NU64)(IL64(3)))));
		b0 = (NI64)(b0 ^ (NI64)((NU64)(b0) >> (NU64)(IL64(11))));
		b0 = (NI64)((NU64)(b0) + (NU64)((NI64)((NU64)(b0) << (NU64)(IL64(15)))));
		result0 = b0;
	}
	goto LA1;
	LA3: ;
	{
		NI32 a0;
		a0 = ((NI32) 0);
		{
			NI i_496139_2036603609;
			NI HEX3Atmp_496195_2036603609;
			NI res_496198_2036603609;
			i_496139_2036603609 = (NI)0;
			HEX3Atmp_496195_2036603609 = (NI)0;
			HEX3Atmp_496195_2036603609 = (NI)((s0 ? s0->Sup.len : 0) - ((NI) 1));
			res_496198_2036603609 = ((NI) 0);
			{
				while (1) {
					if (!(res_496198_2036603609 <= HEX3Atmp_496195_2036603609)) goto LA11;
					i_496139_2036603609 = res_496198_2036603609;
					a0 = (NI32)((NU32)(a0) + (NU32)(((NI32) (((NU8)(s0->data[i_496139_2036603609]))))));
					a0 = (NI32)((NU32)(a0) + (NU32)((NI32)((NU32)(a0) << (NU32)(((NI32) 10)))));
					a0 = (NI32)(a0 ^ (NI32)((NU32)(a0) >> (NU32)(((NI32) 6))));
					res_496198_2036603609 += ((NI) 1);
				} LA11: ;
			}
		}
		a0 = (NI32)((NU32)(a0) + (NU32)((NI32)((NU32)(a0) << (NU32)(((NI32) 3)))));
		a0 = (NI32)(a0 ^ (NI32)((NU32)(a0) >> (NU32)(((NI32) 11))));
		a0 = (NI32)((NU32)(a0) + (NU32)((NI32)((NU32)(a0) << (NU32)(((NI32) 15)))));
		result0 = ((NI64) (a0));
	}
	LA1: ;
	return result0;
}

N_NIMCALL(void, resetcaches_496424_2036603609)(void) {
	inittypetables_496212_2036603609();
	{
		Ttypekind263244 i_496435_2036603609;
		NI res_496439_2036603609;
		i_496435_2036603609 = (Ttypekind263244)0;
		res_496439_2036603609 = ((NI) 0);
		{
			while (1) {
				if (!(res_496439_2036603609 <= ((NI) 61))) goto LA3;
				i_496435_2036603609 = ((Ttypekind263244) (res_496439_2036603609));
				asgnRefNoCycle((void**) (&gcanonicaltypes_496209_2036603609[(i_496435_2036603609)- 0]), NIM_NIL);
				res_496439_2036603609 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsInit000)(void) {
nimRegisterGlobalMarker(TMP1289);
nimRegisterGlobalMarker(TMP1290);
	inittypetables_496212_2036603609();
}

NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsDatInit000)(void) {
NTI496204.size = sizeof(TY496204);
NTI496204.kind = 16;
NTI496204.base = (&NTI263844);
}

