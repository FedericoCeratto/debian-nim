/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode264794 Tnode264794;
typedef struct Tsym264826 Tsym264826;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype264832 Ttype264832;
typedef struct Tident194012 Tident194012;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct Tidobj194006 Tidobj194006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct Tscope264820 Tscope264820;
typedef struct TY264927 TY264927;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct Tloc264808 Tloc264808;
typedef struct Ropeobj173006 Ropeobj173006;
typedef struct Tlib264812 Tlib264812;
typedef struct Templctx426004 Templctx426004;
typedef struct Tidtable264844 Tidtable264844;
typedef struct Tidpairseq264842 Tidpairseq264842;
typedef struct TY198019 TY198019;
typedef struct Cell48105 Cell48105;
typedef struct Cellseq48121 Cellseq48121;
typedef struct Gcheap50618 Gcheap50618;
typedef struct Gcstack50616 Gcstack50616;
typedef struct Memregion30285 Memregion30285;
typedef struct Smallchunk30239 Smallchunk30239;
typedef struct Llchunk30279 Llchunk30279;
typedef struct Bigchunk30241 Bigchunk30241;
typedef struct Intset30214 Intset30214;
typedef struct Trunk30210 Trunk30210;
typedef struct Avlnode30283 Avlnode30283;
typedef struct Gcstat50614 Gcstat50614;
typedef struct Cellset48117 Cellset48117;
typedef struct Pagedesc48113 Pagedesc48113;
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct Tidpair264840 Tidpair264840;
typedef struct Basechunk30237 Basechunk30237;
typedef struct Freecell30229 Freecell30229;
typedef struct TY264917 TY264917;
struct  Tlineinfo186336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tmsgkind186002;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  Tidobj194006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind264435;
struct  Tstrtable264798  {
NI counter;
Tsymseq264796* data;
};
typedef NU8 Tmagic264525;
typedef NU32 Tsymflag264184Set;
typedef NU32 Toption164009Set;
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
typedef NU8 Tsymflag264184;
typedef NU8 Ttypekind264244;
typedef NU8 Tcallingconvention264002;
typedef NU32 Ttypeflag264431Set;
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
struct  Tidtable264844  {
NI counter;
Tidpairseq264842* data;
};
struct  Templctx426004  {
Tsym264826* owner;
Tsym264826* gensymowner;
NIM_BOOL instlines;
Tidtable264844 mapping;
};
struct TY198019 {
NimStringDesc* Field0;
NI Field1;
};
struct  Cell48105  {
NI refcount;
TNimType* typ;
};
struct  Cellseq48121  {
NI len;
NI cap;
Cell48105** d;
};
typedef Smallchunk30239* TY30300[512];
typedef Trunk30210* Trunkbuckets30212[256];
struct  Intset30214  {
Trunkbuckets30212 data;
};
struct  Memregion30285  {
NI minlargeobj;
NI maxlargeobj;
TY30300 freesmallchunks;
Llchunk30279* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30241* freechunkslist;
Intset30214 chunkstarts;
Avlnode30283* root;
Avlnode30283* deleted;
Avlnode30283* last;
Avlnode30283* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50614  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset48117  {
NI counter;
NI max;
Pagedesc48113* head;
Pagedesc48113** data;
};
struct  Gcheap50618  {
Gcstack50616* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq48121 zct;
Cellseq48121 decstack;
Cellseq48121 tempstack;
NI recgclock;
Memregion30285 region;
Gcstat50614 stat;
Cellset48117 marked;
Cellseq48121 additionalroots;
};
typedef NU8 Trenderflag283006Set;
struct  Tident194012  {
  Tidobj194006 Sup;
NimStringDesc* s;
Tident194012* next;
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
struct  Tscope264820  {
NI depthlevel;
Tstrtable264798 symbols;
Tscope264820* parent;
};
struct  Ropeobj173006  {
  TNimObject Sup;
Ropeobj173006* left;
Ropeobj173006* right;
NI length;
NimStringDesc* data;
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
struct  Tidpair264840  {
Tidobj194006* key;
TNimObject* val;
};
struct  Gcstack50616  {
Gcstack50616* prev;
Gcstack50616* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30237  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30239  {
  Basechunk30237 Sup;
Smallchunk30239* next;
Smallchunk30239* prev;
Freecell30229* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30279  {
NI size;
NI acc;
Llchunk30279* next;
};
struct  Bigchunk30241  {
  Basechunk30237 Sup;
Bigchunk30241* next;
Bigchunk30241* prev;
NI align;
NF data;
};
typedef NI TY30218[16];
struct  Trunk30210  {
Trunk30210* next;
NI key;
TY30218 bits;
};
typedef Avlnode30283* TY30290[2];
struct  Avlnode30283  {
TY30290 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc48113  {
Pagedesc48113* next;
NI key;
TY30218 bits;
};
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
};
struct  Freecell30229  {
Freecell30229* next;
NI zerofield;
};
struct Tnodeseq264788 {
  TGenericSeq Sup;
  Tnode264794* data[SEQ_DECL_SIZE];
};
struct Ttypeseq264828 {
  TGenericSeq Sup;
  Ttype264832* data[SEQ_DECL_SIZE];
};
struct TY264927 {
  TGenericSeq Sup;
  Tinstantiation264816* data[SEQ_DECL_SIZE];
};
struct Tsymseq264796 {
  TGenericSeq Sup;
  Tsym264826* data[SEQ_DECL_SIZE];
};
struct Tidpairseq264842 {
  TGenericSeq Sup;
  Tidpair264840 data[SEQ_DECL_SIZE];
};
struct TY264917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalerror_191071_155036129)(Tlineinfo186336 info0, Tmsgkind186002 msg0, NimStringDesc* arg0);
N_NIMCALL(Tnode264794*, evaltemplateargs_426216_885920397)(Tnode264794* n0, Tsym264826* s0, NIM_BOOL fromhlo0);
static N_INLINE(NI, len_265080_850551059)(Tnode264794* n0);
static N_INLINE(Tnode264794*, HEX5BHEX5D_265238_850551059)(Tnode264794* n0, NI i0);
N_NIMCALL(NI, len_267339_850551059)(Ttype264832* n0);
N_NIMCALL(Tnode264794*, newnodei_266248_850551059)(Tnodekind264020 kind0, Tlineinfo186336 info0);
N_NIMCALL(void, addson_266807_850551059)(Tnode264794* father0, Tnode264794* son0);
N_NIMCALL(void, localerror_191080_155036129)(Tlineinfo186336 info0, Tmsgkind186002 msg0, NimStringDesc* arg0);
N_NIMCALL(Tnode264794*, copytree_268822_850551059)(Tnode264794* src0);
N_NIMCALL(void, initidtable_268033_850551059)(Tidtable264844* x0);
N_NIMCALL(Tnode264794*, getbody_305828_1724185294)(Tsym264826* s0);
static N_INLINE(NIM_BOOL, isatom_269491_850551059)(Tnode264794* n0);
N_NIMCALL(void, evaltemplateaux_426015_885920397)(Tnode264794* templ0, Tnode264794* actual0, Templctx426004* c0, Tnode264794* result0);
N_NIMCALL(void, add_265135_850551059)(Tnode264794* father0, Tnode264794* son0);
N_NIMCALL(void, internalerror_191113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(NimStringDesc*, HEX24_191183_1689653243)(TY198019 x0);
N_NIMCALL(TNimObject*, idtableget_271111_2984716966)(Tidtable264844 t0, Tidobj194006* key0);
N_NIMCALL(Tsym264826*, copysym_267601_850551059)(Tsym264826* s0, NIM_BOOL keepid0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell48105*, usrtocell_52240_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53401_1689653243)(Cell48105* c0);
N_NOINLINE(void, addzct_52217_1689653243)(Cellseq48121* s0, Cell48105* c0);
N_NIMCALL(void, idtableput_271119_2984716966)(Tidtable264844* t0, Tidobj194006* key0, TNimObject* val0);
N_NIMCALL(Tnode264794*, newsymnode_266241_850551059)(Tsym264826* sym0, Tlineinfo186336 info0);
N_NIMCALL(Tnode264794*, copynode_426009_885920397)(Templctx426004* ctx0, Tnode264794* a0, Tnode264794* b0);
N_NIMCALL(Tnode264794*, copynode_268542_850551059)(Tnode264794* src0);
N_NIMCALL(NI, sonslen_267351_850551059)(Tnode264794* n0);
N_NIMCALL(NimStringDesc*, rendertree_283046_382274130)(Tnode264794* n0, Trenderflag283006Set renderflags0);
static N_INLINE(NI, safelen_265102_850551059)(Tnode264794* n0);
STRING_LITERAL(TMP3136, "", 0);
STRING_LITERAL(TMP3138, "compiler/evaltempl.nim", 22);
NIM_CONST TY198019 TMP3137 = {((NimStringDesc*) &TMP3138),
((NI) 45)}
;
NI evaltemplatecounter_426329_885920397;
extern Tnode264794* emptynode_265801_850551059;
extern Gcheap50618 gch_50658_1689653243;

static N_INLINE(NI, len_265080_850551059)(Tnode264794* n0) {
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

static N_INLINE(Tnode264794*, HEX5BHEX5D_265238_850551059)(Tnode264794* n0, NI i0) {
	Tnode264794* result0;
	result0 = (Tnode264794*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
}

N_NIMCALL(Tnode264794*, evaltemplateargs_426216_885920397)(Tnode264794* n0, Tsym264826* s0, NIM_BOOL fromhlo0) {
	Tnode264794* result0;
	NI totalparams0;
	NI genericparams0;
	NI expectedregularparams0;
	NI LOC12;
	NI givenregularparams0;
	result0 = (Tnode264794*)0;
	switch ((*n0).kind) {
	case ((Tnodekind264020) 27):
	case ((Tnodekind264020) 29):
	case ((Tnodekind264020) 30):
	case ((Tnodekind264020) 31):
	case ((Tnodekind264020) 26):
	case ((Tnodekind264020) 28):
	{
		NI LOC2;
		LOC2 = (NI)0;
		LOC2 = len_265080_850551059(n0);
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
		LOC6 = (((*s0).flags &(1U<<((NU)(((Tsymflag264184) 25))&31U)))!=0);
		if (LOC6) goto LA7;
		LOC6 = fromhlo0;
		LA7: ;
		if (!LOC6) goto LA8;
		genericparams0 = ((NI) 0);
	}
	goto LA4;
	LA8: ;
	{
		Tnode264794* LOC11;
		LOC11 = (Tnode264794*)0;
		LOC11 = HEX5BHEX5D_265238_850551059((*s0).ast, ((NI) 2));
		genericparams0 = len_265080_850551059(LOC11);
	}
	LA4: ;
	LOC12 = (NI)0;
	LOC12 = len_267339_850551059((*s0).typ);
	expectedregularparams0 = (LOC12 - 1);
	givenregularparams0 = (NI)(totalparams0 - genericparams0);
	{
		if (!(givenregularparams0 < ((NI) 0))) goto LA15;
		givenregularparams0 = ((NI) 0);
	}
	LA15: ;
	{
		if (!((NI)(expectedregularparams0 + genericparams0) < totalparams0)) goto LA19;
		globalerror_191071_155036129((*n0).info, ((Tmsgkind186002) 137), ((NimStringDesc*) &TMP3136));
	}
	LA19: ;
	result0 = newnodei_266248_850551059(((Tnodekind264020) 152), (*n0).info);
	{
		NI i_426258_885920397;
		NI res_426310_885920397;
		i_426258_885920397 = (NI)0;
		res_426310_885920397 = ((NI) 1);
		{
			while (1) {
				if (!(res_426310_885920397 <= givenregularparams0)) goto LA23;
				i_426258_885920397 = res_426310_885920397;
				addson_266807_850551059(result0, (*n0).kindU.S6.sons->data[i_426258_885920397]);
				res_426310_885920397 += ((NI) 1);
			} LA23: ;
		}
	}
	{
		NI i_426270_885920397;
		NI HEX3Atmp_426315_885920397;
		NI res_426318_885920397;
		i_426270_885920397 = (NI)0;
		HEX3Atmp_426315_885920397 = (NI)0;
		HEX3Atmp_426315_885920397 = (NI)(givenregularparams0 + ((NI) 1));
		res_426318_885920397 = HEX3Atmp_426315_885920397;
		{
			while (1) {
				Tnode264794* default_426275_885920397;
				if (!(res_426318_885920397 <= expectedregularparams0)) goto LA26;
				i_426270_885920397 = res_426318_885920397;
				default_426275_885920397 = (*(*(*(*(*s0).typ).n).kindU.S6.sons->data[i_426270_885920397]).kindU.S4.sym).ast;
				{
					NIM_BOOL LOC29;
					LOC29 = (NIM_BOOL)0;
					LOC29 = default_426275_885920397 == 0;
					if (LOC29) goto LA30;
					LOC29 = ((*default_426275_885920397).kind == ((Tnodekind264020) 1));
					LA30: ;
					if (!LOC29) goto LA31;
					localerror_191080_155036129((*n0).info, ((Tmsgkind186002) 137), ((NimStringDesc*) &TMP3136));
					addson_266807_850551059(result0, emptynode_265801_850551059);
				}
				goto LA27;
				LA31: ;
				{
					Tnode264794* LOC34;
					LOC34 = (Tnode264794*)0;
					LOC34 = copytree_268822_850551059(default_426275_885920397);
					addson_266807_850551059(result0, LOC34);
				}
				LA27: ;
				res_426318_885920397 += ((NI) 1);
			} LA26: ;
		}
	}
	{
		NI i_426304_885920397;
		NI res_426325_885920397;
		i_426304_885920397 = (NI)0;
		res_426325_885920397 = ((NI) 1);
		{
			while (1) {
				if (!(res_426325_885920397 <= genericparams0)) goto LA37;
				i_426304_885920397 = res_426325_885920397;
				addson_266807_850551059(result0, (*n0).kindU.S6.sons->data[(NI)(givenregularparams0 + i_426304_885920397)]);
				res_426325_885920397 += ((NI) 1);
			} LA37: ;
		}
	}
	return result0;
}

static N_INLINE(NIM_BOOL, isatom_269491_850551059)(Tnode264794* n0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = (((Tnodekind264020) 0) <= (*n0).kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n0).kind <= ((Tnodekind264020) 23));
	LA2: ;
	result0 = LOC1;
	return result0;
}

static N_INLINE(Cell48105*, usrtocell_52240_1689653243)(void* usr0) {
	Cell48105* result0;
	result0 = (Cell48105*)0;
	result0 = ((Cell48105*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell48105))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53401_1689653243)(Cell48105* c0) {
	addzct_52217_1689653243((&gch_50658_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell48105* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_52240_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell48105* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_52240_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53401_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(Tnode264794*, copynode_426009_885920397)(Templctx426004* ctx0, Tnode264794* a0, Tnode264794* b0) {
	Tnode264794* result0;
	result0 = (Tnode264794*)0;
	result0 = copynode_268542_850551059(a0);
	{
		if (!(*ctx0).instlines) goto LA3;
		(*result0).info = (*b0).info;
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, evaltemplateaux_426015_885920397)(Tnode264794* templ0, Tnode264794* actual0, Templctx426004* c0, Tnode264794* result0) {
	switch ((*templ0).kind) {
	case ((Tnodekind264020) 3):
	{
		Tsym264826* s0;
		s0 = (*templ0).kindU.S4.sym;
		{
			if (!((*(*s0).owner).Sup.id == (*(*c0).owner).Sup.id)) goto LA4;
			{
				NIM_BOOL LOC8;
				Tnode264794* x_426059_885920397;
				LOC8 = (NIM_BOOL)0;
				LOC8 = ((*s0).kind == ((Tsymkind264435) 3));
				if (!(LOC8)) goto LA9;
				LOC8 = !((((*s0).flags &(1U<<((NU)(((Tsymflag264184) 31))&31U)))!=0));
				LA9: ;
				if (!LOC8) goto LA10;
				x_426059_885920397 = (*actual0).kindU.S6.sons->data[(*s0).position];
				{
					if (!((*x_426059_885920397).kind == ((Tnodekind264020) 152))) goto LA14;
					{
						Tnode264794* y_426061_885920397;
						y_426061_885920397 = (Tnode264794*)0;
						{
							NI i_426190_885920397;
							NI HEX3Atmp_426192_885920397;
							NI LOC18;
							NI res_426194_885920397;
							i_426190_885920397 = (NI)0;
							HEX3Atmp_426192_885920397 = (NI)0;
							LOC18 = (NI)0;
							LOC18 = len_265080_850551059(x_426059_885920397);
							HEX3Atmp_426192_885920397 = (LOC18 - 1);
							res_426194_885920397 = ((NI) 0);
							{
								while (1) {
									if (!(res_426194_885920397 <= HEX3Atmp_426192_885920397)) goto LA20;
									i_426190_885920397 = res_426194_885920397;
									y_426061_885920397 = (*x_426059_885920397).kindU.S6.sons->data[i_426190_885920397];
									add_265135_850551059(result0, y_426061_885920397);
									res_426194_885920397 += ((NI) 1);
								} LA20: ;
							}
						}
					}
				}
				goto LA12;
				LA14: ;
				{
					Tnode264794* LOC22;
					LOC22 = (Tnode264794*)0;
					LOC22 = copytree_268822_850551059(x_426059_885920397);
					add_265135_850551059(result0, LOC22);
				}
				LA12: ;
			}
			goto LA6;
			LA10: ;
			{
				NIM_BOOL LOC24;
				NIM_BOOL LOC26;
				NIM_BOOL LOC27;
				Tnode264794* x_426117_885920397;
				NI LOC32;
				LOC24 = (NIM_BOOL)0;
				LOC24 = ((*s0).kind == ((Tsymkind264435) 4));
				if (LOC24) goto LA25;
				LOC26 = (NIM_BOOL)0;
				LOC27 = (NIM_BOOL)0;
				LOC27 = ((*s0).kind == ((Tsymkind264435) 7));
				if (!(LOC27)) goto LA28;
				LOC27 = !(((*s0).typ == NIM_NIL));
				LA28: ;
				LOC26 = LOC27;
				if (!(LOC26)) goto LA29;
				LOC26 = ((*(*s0).typ).kind == ((Ttypekind264244) 12));
				LA29: ;
				LOC24 = LOC26;
				LA25: ;
				if (!LOC24) goto LA30;
				LOC32 = (NI)0;
				LOC32 = len_267339_850551059((*(*s0).owner).typ);
				x_426117_885920397 = (*actual0).kindU.S6.sons->data[(NI)((NI)(LOC32 + (*s0).position) - ((NI) 1))];
				{
					if (!((*x_426117_885920397).kind == ((Tnodekind264020) 152))) goto LA35;
					{
						Tnode264794* y_426119_885920397;
						y_426119_885920397 = (Tnode264794*)0;
						{
							NI i_426201_885920397;
							NI HEX3Atmp_426203_885920397;
							NI LOC39;
							NI res_426205_885920397;
							i_426201_885920397 = (NI)0;
							HEX3Atmp_426203_885920397 = (NI)0;
							LOC39 = (NI)0;
							LOC39 = len_265080_850551059(x_426117_885920397);
							HEX3Atmp_426203_885920397 = (LOC39 - 1);
							res_426205_885920397 = ((NI) 0);
							{
								while (1) {
									if (!(res_426205_885920397 <= HEX3Atmp_426203_885920397)) goto LA41;
									i_426201_885920397 = res_426205_885920397;
									y_426119_885920397 = (*x_426117_885920397).kindU.S6.sons->data[i_426201_885920397];
									add_265135_850551059(result0, y_426119_885920397);
									res_426205_885920397 += ((NI) 1);
								} LA41: ;
							}
						}
					}
				}
				goto LA33;
				LA35: ;
				{
					Tnode264794* LOC43;
					LOC43 = (Tnode264794*)0;
					LOC43 = copytree_268822_850551059(x_426117_885920397);
					add_265135_850551059(result0, LOC43);
				}
				LA33: ;
			}
			goto LA6;
			LA30: ;
			{
				Tsym264826* x0;
				Tidobj194006* LOC50;
				TNimObject* LOC51;
				Tlineinfo186336 LOC58;
				Tnode264794* LOC64;
				{
					NimStringDesc* LOC49;
					if (!!((((*s0).flags &(1U<<((NU)(((Tsymflag264184) 31))&31U)))!=0))) goto LA47;
					LOC49 = (NimStringDesc*)0;
					LOC49 = HEX24_191183_1689653243(TMP3137);
					internalerror_191113_155036129(LOC49);
				}
				LA47: ;
				LOC50 = (Tidobj194006*)0;
				LOC50 = &s0->Sup;
				LOC51 = (TNimObject*)0;
				LOC51 = idtableget_271111_2984716966((*c0).mapping, LOC50);
				x0 = ((Tsym264826*) (LOC51));
				{
					Tidobj194006* LOC56;
					TNimObject* LOC57;
					if (!(x0 == NIM_NIL)) goto LA54;
					x0 = copysym_267601_850551059(s0, NIM_FALSE);
					asgnRefNoCycle((void**) (&(*x0).owner), (*c0).gensymowner);
					LOC56 = (Tidobj194006*)0;
					LOC56 = &s0->Sup;
					LOC57 = (TNimObject*)0;
					LOC57 = &x0->Sup.Sup;
					idtableput_271119_2984716966((&(*c0).mapping), LOC56, LOC57);
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
				LOC64 = (Tnode264794*)0;
				LOC64 = newsymnode_266241_850551059(x0, LOC58);
				add_265135_850551059(result0, LOC64);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			Tnode264794* LOC66;
			LOC66 = (Tnode264794*)0;
			LOC66 = copynode_426009_885920397((&(*c0)), templ0, actual0);
			add_265135_850551059(result0, LOC66);
		}
		LA2: ;
	}
	break;
	case ((Tnodekind264020) 0) ... ((Tnodekind264020) 2):
	case ((Tnodekind264020) 4) ... ((Tnodekind264020) 23):
	{
		Tnode264794* LOC68;
		LOC68 = (Tnode264794*)0;
		LOC68 = copynode_426009_885920397((&(*c0)), templ0, actual0);
		add_265135_850551059(result0, LOC68);
	}
	break;
	default:
	{
		Tnode264794* res0;
		res0 = copynode_426009_885920397((&(*c0)), templ0, actual0);
		{
			NI i_426183_885920397;
			NI HEX3Atmp_426209_885920397;
			NI LOC71;
			NI res_426212_885920397;
			i_426183_885920397 = (NI)0;
			HEX3Atmp_426209_885920397 = (NI)0;
			LOC71 = (NI)0;
			LOC71 = sonslen_267351_850551059(templ0);
			HEX3Atmp_426209_885920397 = (NI)(LOC71 - ((NI) 1));
			res_426212_885920397 = ((NI) 0);
			{
				while (1) {
					if (!(res_426212_885920397 <= HEX3Atmp_426209_885920397)) goto LA73;
					i_426183_885920397 = res_426212_885920397;
					evaltemplateaux_426015_885920397((*templ0).kindU.S6.sons->data[i_426183_885920397], actual0, c0, res0);
					res_426212_885920397 += ((NI) 1);
				} LA73: ;
			}
		}
		add_265135_850551059(result0, res0);
	}
	break;
	}
}

static N_INLINE(NI, safelen_265102_850551059)(Tnode264794* n0) {
	NI result0;
	result0 = (NI)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = ((*n0).kind >= ((Tnodekind264020) 0) && (*n0).kind <= ((Tnodekind264020) 23));
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

N_NIMCALL(Tnode264794*, evaltemplate_426330_885920397)(Tnode264794* n0, Tsym264826* tmpl0, Tsym264826* gensymowner0, NIM_BOOL fromhlo0) {
	Tnode264794* result0;
	Tnode264794* args0;
	Templctx426004 ctx0;
	Tnode264794* body0;
	result0 = (Tnode264794*)0;
	evaltemplatecounter_426329_885920397 += ((NI) 1);
	{
		if (!(((NI) 100) < evaltemplatecounter_426329_885920397)) goto LA3;
		globalerror_191071_155036129((*n0).info, ((Tmsgkind186002) 188), ((NimStringDesc*) &TMP3136));
		result0 = n0;
	}
	LA3: ;
	args0 = evaltemplateargs_426216_885920397(n0, tmpl0, fromhlo0);
	memset((void*)(&ctx0), 0, sizeof(ctx0));
	ctx0.owner = tmpl0;
	ctx0.gensymowner = gensymowner0;
	initidtable_268033_850551059((&ctx0.mapping));
	body0 = getbody_305828_1724185294(tmpl0);
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = isatom_269491_850551059(body0);
		if (!LOC7) goto LA8;
		result0 = newnodei_266248_850551059(((Tnodekind264020) 37), (*body0).info);
		evaltemplateaux_426015_885920397(body0, args0, (&ctx0), result0);
		{
			NI LOC12;
			LOC12 = (NI)0;
			LOC12 = len_265080_850551059(result0);
			if (!(LOC12 == ((NI) 1))) goto LA13;
			result0 = (*result0).kindU.S6.sons->data[((NI) 0)];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			LOC16 = (NimStringDesc*)0;
			LOC16 = rendertree_283046_382274130(result0, 4);
			localerror_191080_155036129((*result0).info, ((Tmsgkind186002) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		result0 = copynode_268542_850551059(body0);
		{
			NI i_426367_885920397;
			NI HEX3Atmp_426381_885920397;
			NI LOC19;
			NI res_426384_885920397;
			i_426367_885920397 = (NI)0;
			HEX3Atmp_426381_885920397 = (NI)0;
			LOC19 = (NI)0;
			LOC19 = safelen_265102_850551059(body0);
			HEX3Atmp_426381_885920397 = (NI)(LOC19 - ((NI) 1));
			res_426384_885920397 = ((NI) 0);
			{
				while (1) {
					if (!(res_426384_885920397 <= HEX3Atmp_426381_885920397)) goto LA21;
					i_426367_885920397 = res_426384_885920397;
					evaltemplateaux_426015_885920397((*body0).kindU.S6.sons->data[i_426367_885920397], args0, (&ctx0), result0);
					res_426384_885920397 += ((NI) 1);
				} LA21: ;
			}
		}
	}
	LA5: ;
	evaltemplatecounter_426329_885920397 -= ((NI) 1);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplInit000)(void) {
	evaltemplatecounter_426329_885920397 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplDatInit000)(void) {
}

