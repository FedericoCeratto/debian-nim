/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Ropeobj172006 Ropeobj172006;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tpasscontext311002 Tpasscontext311002;
typedef struct Tsym263826 Tsym263826;
typedef struct Tgen545007 Tgen545007;
typedef struct TNimObject TNimObject;
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
typedef struct Tnode263794 Tnode263794;
typedef struct Ttype263832 Ttype263832;
typedef struct Tlineinfo185336 Tlineinfo185336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tident193012 Tident193012;
typedef struct Tnodeseq263788 Tnodeseq263788;
typedef struct Tidobj193006 Tidobj193006;
typedef struct Ttypeseq263828 Ttypeseq263828;
typedef struct Tscope263820 Tscope263820;
typedef struct TY263927 TY263927;
typedef struct Tstrtable263798 Tstrtable263798;
typedef struct Tsymseq263796 Tsymseq263796;
typedef struct Tloc263808 Tloc263808;
typedef struct Tlib263812 Tlib263812;
typedef struct Basechunk30037 Basechunk30037;
typedef struct Freecell30029 Freecell30029;
typedef struct Tinstantiation263816 Tinstantiation263816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct TY263917 TY263917;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext311002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tgen545007  {
  Tpasscontext311002 Sup;
Tsym263826* module;
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
struct  Tlineinfo185336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag263427Set;
typedef NU8 Tnodekind263020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
typedef Ropeobj172006* TY530021[2];
struct  Tidobj193006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind263435;
struct  Tstrtable263798  {
NI counter;
Tsymseq263796* data;
};
typedef NU8 Tmagic263525;
typedef NU32 Tsymflag263184Set;
typedef NU32 Toption163009Set;
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
struct  Tident193012  {
  Tidobj193006 Sup;
NimStringDesc* s;
Tident193012* next;
NI h;
};
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
typedef NU8 Ttypekind263244;
typedef NU8 Tcallingconvention263002;
typedef NU32 Ttypeflag263431Set;
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
struct  Tscope263820  {
NI depthlevel;
Tstrtable263798 symbols;
Tscope263820* parent;
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
struct  Freecell30029  {
Freecell30029* next;
NI zerofield;
};
struct  Tinstantiation263816  {
Tsym263826* sym;
Ttypeseq263828* concretetypes;
TY263917* usedby;
NI compilesid;
};
struct Tnodeseq263788 {
  TGenericSeq Sup;
  Tnode263794* data[SEQ_DECL_SIZE];
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
struct TY263917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP1333)();
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56402 markerproc0);
N_NIMCALL(void, TMP5478)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(NI, sonslen_266351_850551059)(Tnode263794* n0);
N_NIMCALL(NimStringDesc*, getmodulename_318009_2178338529)(Tnode263794* n0);
N_NIMCALL(void, adddependencyaux_545014_2841479672)(NimStringDesc* importing0, NimStringDesc* imported0);
N_NIMCALL(void, addf_173205_2381377266)(Ropeobj172006** c0, NimStringDesc* frmt0, Ropeobj172006** args0, NI args0Len0);
N_NIMCALL(Ropeobj172006*, rope_172277_2381377266)(NimStringDesc* s0);
N_NIMCALL(Tnode263794*, adddotdependency_545021_2841479672)(Tpasscontext311002* c0, Tnode263794* n0);
N_NIMCALL(void, writerope_172836_2381377266)(Ropeobj172006* head0, NimStringDesc* filename0, NIM_BOOL usewarning0);
N_NIMCALL(Ropeobj172006*, HEX25_172905_2381377266)(NimStringDesc* frmt0, Ropeobj172006** args0, NI args0Len0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename0, NimStringDesc* ext0);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path0);
STRING_LITERAL(TMP5479, "$1 -> $2;$n", 11);
STRING_LITERAL(TMP5480, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP5481, "", 0);
STRING_LITERAL(TMP5482, "dot", 3);
Ropeobj172006* gdotgraph_545012_2841479672;
extern TNimType NTI172004; /* Rope */
extern TNimType NTI311002; /* TPassContext */
TNimType NTI545007; /* TGen */
extern TNimType NTI263792; /* PSym */
TNimType NTI545009; /* PGen */
extern Gcheap50418 gch_50458_1689653243;
N_NIMCALL(void, TMP1333)() {
	nimGCvisit((void*)gdotgraph_545012_2841479672, 0);
}
N_NIMCALL(void, TMP5478)(void* p, NI op) {
	Tgen545007* a;
	a = (Tgen545007*)p;
	nimGCvisit((void*)(*a).module, op);
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

N_NIMCALL(Tpasscontext311002*, myopen_545079_2841479672)(Tsym263826* module0) {
	Tpasscontext311002* result0;
	Tgen545007* g0;
	result0 = (Tpasscontext311002*)0;
	g0 = (Tgen545007*)0;
	g0 = (Tgen545007*) newObj((&NTI545009), sizeof(Tgen545007));
	(*g0).Sup.Sup.m_type = (&NTI545007);
	asgnRefNoCycle((void**) (&(*g0).module), module0);
	result0 = &g0->Sup;
	return result0;
}

N_NIMCALL(void, adddependencyaux_545014_2841479672)(NimStringDesc* importing0, NimStringDesc* imported0) {
	TY530021 LOC1;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = rope_172277_2381377266(importing0);
	LOC1[1] = rope_172277_2381377266(imported0);
	addf_173205_2381377266(&gdotgraph_545012_2841479672, ((NimStringDesc*) &TMP5479), LOC1, 2);
}

N_NIMCALL(Tnode263794*, adddotdependency_545021_2841479672)(Tpasscontext311002* c0, Tnode263794* n0) {
	Tnode263794* result0;
	Tgen545007* g0;
	result0 = (Tnode263794*)0;
	result0 = n0;
	g0 = ((Tgen545007*) (c0));
	switch ((*n0).kind) {
	case ((Tnodekind263020) 116):
	{
		{
			NI i_545038_2841479672;
			NI HEX3Atmp_545059_2841479672;
			NI LOC3;
			NI res_545062_2841479672;
			i_545038_2841479672 = (NI)0;
			HEX3Atmp_545059_2841479672 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = sonslen_266351_850551059(n0);
			HEX3Atmp_545059_2841479672 = (NI)(LOC3 - ((NI) 1));
			res_545062_2841479672 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* imported0;
					if (!(res_545062_2841479672 <= HEX3Atmp_545059_2841479672)) goto LA5;
					i_545038_2841479672 = res_545062_2841479672;
					imported0 = getmodulename_318009_2178338529((*n0).kindU.S6.sons->data[i_545038_2841479672]);
					adddependencyaux_545014_2841479672((*(*(*g0).module).name).s, imported0);
					res_545062_2841479672 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind263020) 120):
	case ((Tnodekind263020) 117):
	{
		NimStringDesc* imported0;
		imported0 = getmodulename_318009_2178338529((*n0).kindU.S6.sons->data[((NI) 0)]);
		adddependencyaux_545014_2841479672((*(*(*g0).module).name).s, imported0);
	}
	break;
	case ((Tnodekind263020) 115):
	case ((Tnodekind263020) 112):
	case ((Tnodekind263020) 126):
	case ((Tnodekind263020) 127):
	{
		{
			NI i_545056_2841479672;
			NI HEX3Atmp_545067_2841479672;
			NI LOC9;
			NI res_545070_2841479672;
			i_545056_2841479672 = (NI)0;
			HEX3Atmp_545067_2841479672 = (NI)0;
			LOC9 = (NI)0;
			LOC9 = sonslen_266351_850551059(n0);
			HEX3Atmp_545067_2841479672 = (NI)(LOC9 - ((NI) 1));
			res_545070_2841479672 = ((NI) 0);
			{
				while (1) {
					Tnode263794* LOC12;
					if (!(res_545070_2841479672 <= HEX3Atmp_545067_2841479672)) goto LA11;
					i_545056_2841479672 = res_545070_2841479672;
					LOC12 = (Tnode263794*)0;
					LOC12 = adddotdependency_545021_2841479672(c0, (*n0).kindU.S6.sons->data[i_545056_2841479672]);
					res_545070_2841479672 += ((NI) 1);
				} LA11: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	return result0;
}

N_NIMCALL(void, generatedot_545003_2841479672)(NimStringDesc* project0) {
	TY530021 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	Ropeobj172006* LOC4;
	NimStringDesc* LOC5;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC2 = (NimStringDesc*)0;
	LOC2 = nosextractFilename(project0);
	LOC3 = (NimStringDesc*)0;
	LOC3 = noschangeFileExt(LOC2, ((NimStringDesc*) &TMP5481));
	LOC1[0] = rope_172277_2381377266(LOC3);
	LOC1[1] = gdotgraph_545012_2841479672;
	LOC4 = (Ropeobj172006*)0;
	LOC4 = HEX25_172905_2381377266(((NimStringDesc*) &TMP5480), LOC1, 2);
	LOC5 = (NimStringDesc*)0;
	LOC5 = noschangeFileExt(project0, ((NimStringDesc*) &TMP5482));
	writerope_172836_2381377266(LOC4, LOC5, NIM_FALSE);
}
NIM_EXTERNC N_NOINLINE(void, compiler_dependsInit000)(void) {
nimRegisterGlobalMarker(TMP1333);
}

NIM_EXTERNC N_NOINLINE(void, compiler_dependsDatInit000)(void) {
static TNimNode TMP1331[1];
NTI545007.size = sizeof(Tgen545007);
NTI545007.kind = 17;
NTI545007.base = (&NTI311002);
TMP1331[0].kind = 1;
TMP1331[0].offset = offsetof(Tgen545007, module);
TMP1331[0].typ = (&NTI263792);
TMP1331[0].name = "module";
NTI545007.node = &TMP1331[0];
NTI545009.size = sizeof(Tgen545007*);
NTI545009.kind = 22;
NTI545009.base = (&NTI545007);
NTI545009.marker = TMP5478;
}

