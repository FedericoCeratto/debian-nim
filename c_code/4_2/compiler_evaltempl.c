/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tnode263794 Tnode263794;
typedef struct Tsym263826 Tsym263826;
typedef struct Tlineinfo185336 Tlineinfo185336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype263832 Ttype263832;
typedef struct Tident193012 Tident193012;
typedef struct Tnodeseq263788 Tnodeseq263788;
typedef struct Tidobj193006 Tidobj193006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq263828 Ttypeseq263828;
typedef struct Tscope263820 Tscope263820;
typedef struct TY263927 TY263927;
typedef struct Tstrtable263798 Tstrtable263798;
typedef struct Tsymseq263796 Tsymseq263796;
typedef struct Tloc263808 Tloc263808;
typedef struct Ropeobj172006 Ropeobj172006;
typedef struct Tlib263812 Tlib263812;
typedef struct Templctx425004 Templctx425004;
typedef struct Tidtable263844 Tidtable263844;
typedef struct Tidpairseq263842 Tidpairseq263842;
typedef struct TY197019 TY197019;
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
typedef struct Tinstantiation263816 Tinstantiation263816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct Tidpair263840 Tidpair263840;
typedef struct Basechunk30038 Basechunk30038;
typedef struct Freecell30030 Freecell30030;
typedef struct TY263917 TY263917;
struct  Tlineinfo185336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tmsgkind185002;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct  TNimObject  {
TNimType* m_type;
};
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
typedef NU8 Tsymflag263184;
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
struct  Tidtable263844  {
NI counter;
Tidpairseq263842* data;
};
struct  Templctx425004  {
Tsym263826* owner;
Tsym263826* gensymowner;
NIM_BOOL instlines;
Tidtable263844 mapping;
};
struct TY197019 {
NimStringDesc* Field0;
NI Field1;
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
typedef NU8 Trenderflag282006Set;
struct  Tident193012  {
  Tidobj193006 Sup;
NimStringDesc* s;
Tident193012* next;
NI h;
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
struct  Tscope263820  {
NI depthlevel;
Tstrtable263798 symbols;
Tscope263820* parent;
};
struct  Ropeobj172006  {
  TNimObject Sup;
Ropeobj172006* left;
Ropeobj172006* right;
NI length;
NimStringDesc* data;
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
struct  Tidpair263840  {
Tidobj193006* key;
TNimObject* val;
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
struct  Tinstantiation263816  {
Tsym263826* sym;
Ttypeseq263828* concretetypes;
TY263917* usedby;
NI compilesid;
};
struct  Freecell30030  {
Freecell30030* next;
NI zerofield;
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
struct Tidpairseq263842 {
  TGenericSeq Sup;
  Tidpair263840 data[SEQ_DECL_SIZE];
};
struct TY263917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalerror_190071_155036129)(Tlineinfo185336 info0, Tmsgkind185002 msg0, NimStringDesc* arg0);
N_NIMCALL(Tnode263794*, evaltemplateargs_425216_885920397)(Tnode263794* n0, Tsym263826* s0, NIM_BOOL fromhlo0);
static N_INLINE(NI, len_264080_850551059)(Tnode263794* n0);
static N_INLINE(Tnode263794*, HEX5BHEX5D_264238_850551059)(Tnode263794* n0, NI i0);
N_NIMCALL(NI, len_266339_850551059)(Ttype263832* n0);
N_NIMCALL(Tnode263794*, newnodei_265248_850551059)(Tnodekind263020 kind0, Tlineinfo185336 info0);
N_NIMCALL(void, addson_265807_850551059)(Tnode263794* father0, Tnode263794* son0);
N_NIMCALL(void, localerror_190080_155036129)(Tlineinfo185336 info0, Tmsgkind185002 msg0, NimStringDesc* arg0);
N_NIMCALL(Tnode263794*, copytree_267822_850551059)(Tnode263794* src0);
N_NIMCALL(void, initidtable_267033_850551059)(Tidtable263844* x0);
N_NIMCALL(Tnode263794*, getbody_304827_1724185294)(Tsym263826* s0);
static N_INLINE(NIM_BOOL, isatom_268492_850551059)(Tnode263794* n0);
N_NIMCALL(void, evaltemplateaux_425015_885920397)(Tnode263794* templ0, Tnode263794* actual0, Templctx425004* c0, Tnode263794* result0);
N_NIMCALL(void, add_264135_850551059)(Tnode263794* father0, Tnode263794* son0);
N_NIMCALL(void, internalerror_190113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(NimStringDesc*, HEX24_190183_1689653243)(TY197019 x0);
N_NIMCALL(TNimObject*, idtableget_270111_2984716966)(Tidtable263844 t0, Tidobj193006* key0);
N_NIMCALL(Tsym263826*, copysym_266601_850551059)(Tsym263826* s0, NIM_BOOL keepid0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(void, idtableput_270119_2984716966)(Tidtable263844* t0, Tidobj193006* key0, TNimObject* val0);
N_NIMCALL(Tnode263794*, newsymnode_265241_850551059)(Tsym263826* sym0, Tlineinfo185336 info0);
N_NIMCALL(Tnode263794*, copynode_425009_885920397)(Templctx425004* ctx0, Tnode263794* a0, Tnode263794* b0);
N_NIMCALL(Tnode263794*, copynode_267542_850551059)(Tnode263794* src0);
N_NIMCALL(NI, sonslen_266351_850551059)(Tnode263794* n0);
N_NIMCALL(NimStringDesc*, rendertree_282046_382274130)(Tnode263794* n0, Trenderflag282006Set renderflags0);
static N_INLINE(NI, safelen_264102_850551059)(Tnode263794* n0);
STRING_LITERAL(TMP3136, "", 0);
STRING_LITERAL(TMP3138, "compiler/evaltempl.nim", 22);
NIM_CONST TY197019 TMP3137 = {((NimStringDesc*) &TMP3138),
((NI) 45)}
;
NI evaltemplatecounter_425329_885920397;
extern Tnode263794* emptynode_264801_850551059;
extern Gcheap50418 gch_50458_1689653243;

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

N_NIMCALL(Tnode263794*, evaltemplateargs_425216_885920397)(Tnode263794* n0, Tsym263826* s0, NIM_BOOL fromhlo0) {
	Tnode263794* result0;
	NI totalparams0;
	NI genericparams0;
	NI expectedregularparams0;
	NI LOC12;
	NI givenregularparams0;
	result0 = (Tnode263794*)0;
	switch ((*n0).kind) {
	case ((Tnodekind263020) 27):
	case ((Tnodekind263020) 29):
	case ((Tnodekind263020) 30):
	case ((Tnodekind263020) 31):
	case ((Tnodekind263020) 26):
	case ((Tnodekind263020) 28):
	{
		NI LOC2;
		LOC2 = (NI)0;
		LOC2 = len_264080_850551059(n0);
		totalparams0 = (NI)(LOC2 - ((NI) 1));
	}
	break;
	default:
	{
		totalparams0 = ((NI) 0);
	}
	break;
	}
	{
		NIM_BOOL LOC6;
		LOC6 = (NIM_BOOL)0;
		LOC6 = (((*s0).flags &(1U<<((NU)(((Tsymflag263184) 25))&31U)))!=0);
		if (LOC6) goto LA7;
		LOC6 = fromhlo0;
		LA7: ;
		if (!LOC6) goto LA8;
		genericparams0 = ((NI) 0);
	}
	goto LA4;
	LA8: ;
	{
		Tnode263794* LOC11;
		LOC11 = (Tnode263794*)0;
		LOC11 = HEX5BHEX5D_264238_850551059((*s0).ast, ((NI) 2));
		genericparams0 = len_264080_850551059(LOC11);
	}
	LA4: ;
	LOC12 = (NI)0;
	LOC12 = len_266339_850551059((*s0).typ);
	expectedregularparams0 = (LOC12 - 1);
	givenregularparams0 = (NI)(totalparams0 - genericparams0);
	{
		if (!(givenregularparams0 < ((NI) 0))) goto LA15;
		givenregularparams0 = ((NI) 0);
	}
	LA15: ;
	{
		if (!((NI)(expectedregularparams0 + genericparams0) < totalparams0)) goto LA19;
		globalerror_190071_155036129((*n0).info, ((Tmsgkind185002) 137), ((NimStringDesc*) &TMP3136));
	}
	LA19: ;
	result0 = newnodei_265248_850551059(((Tnodekind263020) 152), (*n0).info);
	{
		NI i_425258_885920397;
		NI res_425310_885920397;
		i_425258_885920397 = (NI)0;
		res_425310_885920397 = ((NI) 1);
		{
			while (1) {
				if (!(res_425310_885920397 <= givenregularparams0)) goto LA23;
				i_425258_885920397 = res_425310_885920397;
				addson_265807_850551059(result0, (*n0).kindU.S6.sons->data[i_425258_885920397]);
				res_425310_885920397 += ((NI) 1);
			} LA23: ;
		}
	}
	{
		NI i_425270_885920397;
		NI HEX3Atmp_425315_885920397;
		NI res_425318_885920397;
		i_425270_885920397 = (NI)0;
		HEX3Atmp_425315_885920397 = (NI)0;
		HEX3Atmp_425315_885920397 = (NI)(givenregularparams0 + ((NI) 1));
		res_425318_885920397 = HEX3Atmp_425315_885920397;
		{
			while (1) {
				Tnode263794* default_425275_885920397;
				if (!(res_425318_885920397 <= expectedregularparams0)) goto LA26;
				i_425270_885920397 = res_425318_885920397;
				default_425275_885920397 = (*(*(*(*(*s0).typ).n).kindU.S6.sons->data[i_425270_885920397]).kindU.S4.sym).ast;
				{
					NIM_BOOL LOC29;
					LOC29 = (NIM_BOOL)0;
					LOC29 = default_425275_885920397 == 0;
					if (LOC29) goto LA30;
					LOC29 = ((*default_425275_885920397).kind == ((Tnodekind263020) 1));
					LA30: ;
					if (!LOC29) goto LA31;
					localerror_190080_155036129((*n0).info, ((Tmsgkind185002) 137), ((NimStringDesc*) &TMP3136));
					addson_265807_850551059(result0, emptynode_264801_850551059);
				}
				goto LA27;
				LA31: ;
				{
					Tnode263794* LOC34;
					LOC34 = (Tnode263794*)0;
					LOC34 = copytree_267822_850551059(default_425275_885920397);
					addson_265807_850551059(result0, LOC34);
				}
				LA27: ;
				res_425318_885920397 += ((NI) 1);
			} LA26: ;
		}
	}
	{
		NI i_425304_885920397;
		NI res_425325_885920397;
		i_425304_885920397 = (NI)0;
		res_425325_885920397 = ((NI) 1);
		{
			while (1) {
				if (!(res_425325_885920397 <= genericparams0)) goto LA37;
				i_425304_885920397 = res_425325_885920397;
				addson_265807_850551059(result0, (*n0).kindU.S6.sons->data[(NI)(givenregularparams0 + i_425304_885920397)]);
				res_425325_885920397 += ((NI) 1);
			} LA37: ;
		}
	}
	return result0;
}

static N_INLINE(NIM_BOOL, isatom_268492_850551059)(Tnode263794* n0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = (((Tnodekind263020) 0) <= (*n0).kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n0).kind <= ((Tnodekind263020) 23));
	LA2: ;
	result0 = LOC1;
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

N_NIMCALL(Tnode263794*, copynode_425009_885920397)(Templctx425004* ctx0, Tnode263794* a0, Tnode263794* b0) {
	Tnode263794* result0;
	result0 = (Tnode263794*)0;
	result0 = copynode_267542_850551059(a0);
	{
		if (!(*ctx0).instlines) goto LA3;
		(*result0).info = (*b0).info;
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, evaltemplateaux_425015_885920397)(Tnode263794* templ0, Tnode263794* actual0, Templctx425004* c0, Tnode263794* result0) {
	switch ((*templ0).kind) {
	case ((Tnodekind263020) 3):
	{
		Tsym263826* s0;
		s0 = (*templ0).kindU.S4.sym;
		{
			if (!((*(*s0).owner).Sup.id == (*(*c0).owner).Sup.id)) goto LA4;
			{
				NIM_BOOL LOC8;
				Tnode263794* x_425059_885920397;
				LOC8 = (NIM_BOOL)0;
				LOC8 = ((*s0).kind == ((Tsymkind263435) 3));
				if (!(LOC8)) goto LA9;
				LOC8 = !((((*s0).flags &(1U<<((NU)(((Tsymflag263184) 31))&31U)))!=0));
				LA9: ;
				if (!LOC8) goto LA10;
				x_425059_885920397 = (*actual0).kindU.S6.sons->data[(*s0).position];
				{
					if (!((*x_425059_885920397).kind == ((Tnodekind263020) 152))) goto LA14;
					{
						Tnode263794* y_425061_885920397;
						y_425061_885920397 = (Tnode263794*)0;
						{
							NI i_425190_885920397;
							NI HEX3Atmp_425192_885920397;
							NI LOC18;
							NI res_425194_885920397;
							i_425190_885920397 = (NI)0;
							HEX3Atmp_425192_885920397 = (NI)0;
							LOC18 = (NI)0;
							LOC18 = len_264080_850551059(x_425059_885920397);
							HEX3Atmp_425192_885920397 = (LOC18 - 1);
							res_425194_885920397 = ((NI) 0);
							{
								while (1) {
									if (!(res_425194_885920397 <= HEX3Atmp_425192_885920397)) goto LA20;
									i_425190_885920397 = res_425194_885920397;
									y_425061_885920397 = (*x_425059_885920397).kindU.S6.sons->data[i_425190_885920397];
									add_264135_850551059(result0, y_425061_885920397);
									res_425194_885920397 += ((NI) 1);
								} LA20: ;
							}
						}
					}
				}
				goto LA12;
				LA14: ;
				{
					Tnode263794* LOC22;
					LOC22 = (Tnode263794*)0;
					LOC22 = copytree_267822_850551059(x_425059_885920397);
					add_264135_850551059(result0, LOC22);
				}
				LA12: ;
			}
			goto LA6;
			LA10: ;
			{
				NIM_BOOL LOC24;
				NIM_BOOL LOC26;
				NIM_BOOL LOC27;
				Tnode263794* x_425117_885920397;
				NI LOC32;
				LOC24 = (NIM_BOOL)0;
				LOC24 = ((*s0).kind == ((Tsymkind263435) 4));
				if (LOC24) goto LA25;
				LOC26 = (NIM_BOOL)0;
				LOC27 = (NIM_BOOL)0;
				LOC27 = ((*s0).kind == ((Tsymkind263435) 7));
				if (!(LOC27)) goto LA28;
				LOC27 = !(((*s0).typ == NIM_NIL));
				LA28: ;
				LOC26 = LOC27;
				if (!(LOC26)) goto LA29;
				LOC26 = ((*(*s0).typ).kind == ((Ttypekind263244) 12));
				LA29: ;
				LOC24 = LOC26;
				LA25: ;
				if (!LOC24) goto LA30;
				LOC32 = (NI)0;
				LOC32 = len_266339_850551059((*(*s0).owner).typ);
				x_425117_885920397 = (*actual0).kindU.S6.sons->data[(NI)((NI)(LOC32 + (*s0).position) - ((NI) 1))];
				{
					if (!((*x_425117_885920397).kind == ((Tnodekind263020) 152))) goto LA35;
					{
						Tnode263794* y_425119_885920397;
						y_425119_885920397 = (Tnode263794*)0;
						{
							NI i_425201_885920397;
							NI HEX3Atmp_425203_885920397;
							NI LOC39;
							NI res_425205_885920397;
							i_425201_885920397 = (NI)0;
							HEX3Atmp_425203_885920397 = (NI)0;
							LOC39 = (NI)0;
							LOC39 = len_264080_850551059(x_425117_885920397);
							HEX3Atmp_425203_885920397 = (LOC39 - 1);
							res_425205_885920397 = ((NI) 0);
							{
								while (1) {
									if (!(res_425205_885920397 <= HEX3Atmp_425203_885920397)) goto LA41;
									i_425201_885920397 = res_425205_885920397;
									y_425119_885920397 = (*x_425117_885920397).kindU.S6.sons->data[i_425201_885920397];
									add_264135_850551059(result0, y_425119_885920397);
									res_425205_885920397 += ((NI) 1);
								} LA41: ;
							}
						}
					}
				}
				goto LA33;
				LA35: ;
				{
					Tnode263794* LOC43;
					LOC43 = (Tnode263794*)0;
					LOC43 = copytree_267822_850551059(x_425117_885920397);
					add_264135_850551059(result0, LOC43);
				}
				LA33: ;
			}
			goto LA6;
			LA30: ;
			{
				Tsym263826* x0;
				Tidobj193006* LOC50;
				TNimObject* LOC51;
				Tlineinfo185336 LOC58;
				Tnode263794* LOC64;
				{
					NimStringDesc* LOC49;
					if (!!((((*s0).flags &(1U<<((NU)(((Tsymflag263184) 31))&31U)))!=0))) goto LA47;
					LOC49 = (NimStringDesc*)0;
					LOC49 = HEX24_190183_1689653243(TMP3137);
					internalerror_190113_155036129(LOC49);
				}
				LA47: ;
				LOC50 = (Tidobj193006*)0;
				LOC50 = &s0->Sup;
				LOC51 = (TNimObject*)0;
				LOC51 = idtableget_270111_2984716966((*c0).mapping, LOC50);
				x0 = ((Tsym263826*) (LOC51));
				{
					Tidobj193006* LOC56;
					TNimObject* LOC57;
					if (!(x0 == NIM_NIL)) goto LA54;
					x0 = copysym_266601_850551059(s0, NIM_FALSE);
					asgnRefNoCycle((void**) (&(*x0).owner), (*c0).gensymowner);
					LOC56 = (Tidobj193006*)0;
					LOC56 = &s0->Sup;
					LOC57 = (TNimObject*)0;
					LOC57 = &x0->Sup.Sup;
					idtableput_270119_2984716966((&(*c0).mapping), LOC56, LOC57);
				}
				LA54: ;
				{
					if (!(*c0).instlines) goto LA61;
					LOC58 = (*actual0).info;
				}
				goto LA59;
				LA61: ;
				{
					LOC58 = (*templ0).info;
				}
				LA59: ;
				LOC64 = (Tnode263794*)0;
				LOC64 = newsymnode_265241_850551059(x0, LOC58);
				add_264135_850551059(result0, LOC64);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			Tnode263794* LOC66;
			LOC66 = (Tnode263794*)0;
			LOC66 = copynode_425009_885920397((&(*c0)), templ0, actual0);
			add_264135_850551059(result0, LOC66);
		}
		LA2: ;
	}
	break;
	case ((Tnodekind263020) 0) ... ((Tnodekind263020) 2):
	case ((Tnodekind263020) 4) ... ((Tnodekind263020) 23):
	{
		Tnode263794* LOC68;
		LOC68 = (Tnode263794*)0;
		LOC68 = copynode_425009_885920397((&(*c0)), templ0, actual0);
		add_264135_850551059(result0, LOC68);
	}
	break;
	default:
	{
		Tnode263794* res0;
		res0 = copynode_425009_885920397((&(*c0)), templ0, actual0);
		{
			NI i_425183_885920397;
			NI HEX3Atmp_425209_885920397;
			NI LOC71;
			NI res_425212_885920397;
			i_425183_885920397 = (NI)0;
			HEX3Atmp_425209_885920397 = (NI)0;
			LOC71 = (NI)0;
			LOC71 = sonslen_266351_850551059(templ0);
			HEX3Atmp_425209_885920397 = (NI)(LOC71 - ((NI) 1));
			res_425212_885920397 = ((NI) 0);
			{
				while (1) {
					if (!(res_425212_885920397 <= HEX3Atmp_425209_885920397)) goto LA73;
					i_425183_885920397 = res_425212_885920397;
					evaltemplateaux_425015_885920397((*templ0).kindU.S6.sons->data[i_425183_885920397], actual0, c0, res0);
					res_425212_885920397 += ((NI) 1);
				} LA73: ;
			}
		}
		add_264135_850551059(result0, res0);
	}
	break;
	}
}

static N_INLINE(NI, safelen_264102_850551059)(Tnode263794* n0) {
	NI result0;
	result0 = (NI)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = ((*n0).kind >= ((Tnodekind263020) 0) && (*n0).kind <= ((Tnodekind263020) 23));
		if (LOC3) goto LA4;
		LOC3 = (*n0).kindU.S6.sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		result0 = ((NI) 0);
	}
	goto LA1;
	LA5: ;
	{
		result0 = ((*n0).kindU.S6.sons ? (*n0).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Tnode263794*, evaltemplate_425330_885920397)(Tnode263794* n0, Tsym263826* tmpl0, Tsym263826* gensymowner0, NIM_BOOL fromhlo0) {
	Tnode263794* result0;
	Tnode263794* args0;
	Templctx425004 ctx0;
	Tnode263794* body0;
	result0 = (Tnode263794*)0;
	evaltemplatecounter_425329_885920397 += ((NI) 1);
	{
		if (!(((NI) 100) < evaltemplatecounter_425329_885920397)) goto LA3;
		globalerror_190071_155036129((*n0).info, ((Tmsgkind185002) 188), ((NimStringDesc*) &TMP3136));
		result0 = n0;
	}
	LA3: ;
	args0 = evaltemplateargs_425216_885920397(n0, tmpl0, fromhlo0);
	memset((void*)(&ctx0), 0, sizeof(ctx0));
	ctx0.owner = tmpl0;
	ctx0.gensymowner = gensymowner0;
	initidtable_267033_850551059((&ctx0.mapping));
	body0 = getbody_304827_1724185294(tmpl0);
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = isatom_268492_850551059(body0);
		if (!LOC7) goto LA8;
		result0 = newnodei_265248_850551059(((Tnodekind263020) 37), (*body0).info);
		evaltemplateaux_425015_885920397(body0, args0, (&ctx0), result0);
		{
			NI LOC12;
			LOC12 = (NI)0;
			LOC12 = len_264080_850551059(result0);
			if (!(LOC12 == ((NI) 1))) goto LA13;
			result0 = (*result0).kindU.S6.sons->data[((NI) 0)];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			LOC16 = (NimStringDesc*)0;
			LOC16 = rendertree_282046_382274130(result0, 4);
			localerror_190080_155036129((*result0).info, ((Tmsgkind185002) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		result0 = copynode_267542_850551059(body0);
		{
			NI i_425367_885920397;
			NI HEX3Atmp_425381_885920397;
			NI LOC19;
			NI res_425384_885920397;
			i_425367_885920397 = (NI)0;
			HEX3Atmp_425381_885920397 = (NI)0;
			LOC19 = (NI)0;
			LOC19 = safelen_264102_850551059(body0);
			HEX3Atmp_425381_885920397 = (NI)(LOC19 - ((NI) 1));
			res_425384_885920397 = ((NI) 0);
			{
				while (1) {
					if (!(res_425384_885920397 <= HEX3Atmp_425381_885920397)) goto LA21;
					i_425367_885920397 = res_425384_885920397;
					evaltemplateaux_425015_885920397((*body0).kindU.S6.sons->data[i_425367_885920397], args0, (&ctx0), result0);
					res_425384_885920397 += ((NI) 1);
				} LA21: ;
			}
		}
	}
	LA5: ;
	evaltemplatecounter_425329_885920397 -= ((NI) 1);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplInit000)(void) {
	evaltemplatecounter_425329_885920397 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplDatInit000)(void) {
}

