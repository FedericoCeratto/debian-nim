/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tnode290802 Tnode290802;
typedef struct Tsym290834 Tsym290834;
typedef struct Tlineinfo189336 Tlineinfo189336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype290840 Ttype290840;
typedef struct Tident197010 Tident197010;
typedef struct Tnodeseq290796 Tnodeseq290796;
typedef struct Tidobj197004 Tidobj197004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq290836 Ttypeseq290836;
typedef struct TY290929 TY290929;
typedef struct Tstrtable290806 Tstrtable290806;
typedef struct Tsymseq290804 Tsymseq290804;
typedef struct Tloc290816 Tloc290816;
typedef struct Ropeobj177006 Ropeobj177006;
typedef struct Tlib290820 Tlib290820;
typedef struct TY290960 TY290960;
typedef struct Templctx455003 Templctx455003;
typedef struct Tidtable290850 Tidtable290850;
typedef struct Tidpairseq290848 Tidpairseq290848;
typedef struct TY201018 TY201018;
typedef struct Cell46904 Cell46904;
typedef struct Cellseq46920 Cellseq46920;
typedef struct Gcheap49418 Gcheap49418;
typedef struct Gcstack49416 Gcstack49416;
typedef struct Memregion29086 Memregion29086;
typedef struct Smallchunk29040 Smallchunk29040;
typedef struct Llchunk29080 Llchunk29080;
typedef struct Bigchunk29042 Bigchunk29042;
typedef struct Intset29014 Intset29014;
typedef struct Trunk29010 Trunk29010;
typedef struct Avlnode29084 Avlnode29084;
typedef struct Gcstat49414 Gcstat49414;
typedef struct Cellset46916 Cellset46916;
typedef struct Pagedesc46912 Pagedesc46912;
typedef struct Tinstantiation290824 Tinstantiation290824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct TY290961 TY290961;
typedef struct Tidpair290846 Tidpair290846;
typedef struct Basechunk29038 Basechunk29038;
typedef struct Freecell29030 Freecell29030;
struct  Tlineinfo189336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tmsgkind189002;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU16 Tnodeflag290427Set;
typedef NU8 Tnodekind290020;
struct  Tnode290802  {
Ttype290840* typ;
Tlineinfo189336 info;
Tnodeflag290427Set flags;
Tnodekind290020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym290834* sym;
} S4;
struct {Tident197010* ident;
} S5;
struct {Tnodeseq290796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 Tnimkind3403;
typedef NU8 Tnimtypeflag3409Set;
typedef N_NIMCALL_PTR(void, TY3489) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3403 kind;
Tnimtypeflag3409Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj197004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind290435;
struct  Tstrtable290806  {
NI counter;
Tsymseq290804* data;
};
typedef NU16 Tmagic290524;
typedef NU32 Tsymflag290184Set;
typedef NU32 Toption168009Set;
typedef NU8 Tlockind290808;
typedef NU8 Tstorageloc290812;
typedef NU16 Tlocflag290810Set;
struct  Tloc290816  {
Tlockind290808 k;
Tstorageloc290812 s;
Tlocflag290810Set flags;
Ttype290840* t;
Ropeobj177006* r;
};
struct  Tsym290834  {
  Tidobj197004 Sup;
Tsymkind290435 kind;
union{
struct {Ttypeseq290836* typeinstcache;
} S1;
struct {TY290929* procinstcache;
Tsym290834* gcunsafetyreason;
} S2;
struct {TY290929* usedgenerics;
Tstrtable290806 tab;
} S3;
struct {Tsym290834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic290524 magic;
Ttype290840* typ;
Tident197010* name;
Tlineinfo189336 info;
Tsym290834* owner;
Tsymflag290184Set flags;
Tnode290802* ast;
Toption168009Set options;
NI position;
NI offset;
Tloc290816 loc;
Tlib290820* annex;
Tnode290802* constraint;
};
typedef NU8 Tsymflag290184;
typedef NU8 Ttypekind290244;
typedef NU8 Tcallingconvention290002;
typedef NU32 Ttypeflag290431Set;
struct  Ttype290840  {
  Tidobj197004 Sup;
Ttypekind290244 kind;
Tcallingconvention290002 callconv;
Ttypeflag290431Set flags;
Ttypeseq290836* sons;
Tnode290802* n;
Tsym290834* owner;
Tsym290834* sym;
Tsym290834* destructor;
Tsym290834* deepcopy;
Tsym290834* assignment;
TY290960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc290816 loc;
};
struct  Tidtable290850  {
NI counter;
Tidpairseq290848* data;
};
struct  Templctx455003  {
Tsym290834* owner;
Tsym290834* gensymowner;
NIM_BOOL instlines;
Tidtable290850 mapping;
};
struct TY201018 {
NimStringDesc* Field0;
NI Field1;
};
struct  Cell46904  {
NI refcount;
TNimType* typ;
};
struct  Cellseq46920  {
NI len;
NI cap;
Cell46904** d;
};
typedef Smallchunk29040* TY29101[512];
typedef Trunk29010* Trunkbuckets29012[256];
struct  Intset29014  {
Trunkbuckets29012 data;
};
struct  Memregion29086  {
NI minlargeobj;
NI maxlargeobj;
TY29101 freesmallchunks;
Llchunk29080* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29042* freechunkslist;
Intset29014 chunkstarts;
Avlnode29084* root;
Avlnode29084* deleted;
Avlnode29084* last;
Avlnode29084* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat49414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset46916  {
NI counter;
NI max;
Pagedesc46912* head;
Pagedesc46912** data;
};
struct  Gcheap49418  {
Gcstack49416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq46920 zct;
Cellseq46920 decstack;
Cellseq46920 tempstack;
NI recgclock;
Memregion29086 region;
Gcstat49414 stat;
Cellset46916 marked;
Cellseq46920 additionalroots;
};
typedef NU8 Trenderflag309004Set;
struct  Tident197010  {
  Tidobj197004 Sup;
NimStringDesc* s;
Tident197010* next;
NI h;
};
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj177006  {
  TNimObject Sup;
Ropeobj177006* left;
Ropeobj177006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind290818;
struct  Tlib290820  {
  Tlistentry147007 Sup;
Tlibkind290818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj177006* name;
Tnode290802* path;
};
struct TY290961 {
NI Field0;
Tsym290834* Field1;
};
struct  Tidpair290846  {
Tidobj197004* key;
TNimObject* val;
};
struct  Gcstack49416  {
Gcstack49416* prev;
Gcstack49416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29038  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29040  {
  Basechunk29038 Sup;
Smallchunk29040* next;
Smallchunk29040* prev;
Freecell29030* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29080  {
NI size;
NI acc;
Llchunk29080* next;
};
struct  Bigchunk29042  {
  Basechunk29038 Sup;
Bigchunk29042* next;
Bigchunk29042* prev;
NI align;
NF data;
};
typedef NI TY29019[8];
struct  Trunk29010  {
Trunk29010* next;
NI key;
TY29019 bits;
};
typedef Avlnode29084* TY29091[2];
struct  Avlnode29084  {
TY29091 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc46912  {
Pagedesc46912* next;
NI key;
TY29019 bits;
};
struct  Tinstantiation290824  {
Tsym290834* sym;
Ttypeseq290836* concretetypes;
NI compilesid;
};
struct  Freecell29030  {
Freecell29030* next;
NI zerofield;
};
struct Tnodeseq290796 {
  TGenericSeq Sup;
  Tnode290802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq290836 {
  TGenericSeq Sup;
  Ttype290840* data[SEQ_DECL_SIZE];
};
struct TY290929 {
  TGenericSeq Sup;
  Tinstantiation290824* data[SEQ_DECL_SIZE];
};
struct Tsymseq290804 {
  TGenericSeq Sup;
  Tsym290834* data[SEQ_DECL_SIZE];
};
struct TY290960 {
  TGenericSeq Sup;
  TY290961 data[SEQ_DECL_SIZE];
};
struct Tidpairseq290848 {
  TGenericSeq Sup;
  Tidpair290846 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalerror_194071_155036129)(Tlineinfo189336 info0, Tmsgkind189002 msg0, NimStringDesc* arg0);
N_NIMCALL(Tnode290802*, evaltemplateargs_455215_885920397)(Tnode290802* n0, Tsym290834* s0, NIM_BOOL fromhlo0);
static N_INLINE(NI, len_291081_850551059)(Tnode290802* n0);
static N_INLINE(Tnode290802*, HEX5BHEX5D_291238_850551059)(Tnode290802* n0, NI i0);
N_NIMCALL(NI, len_293339_850551059)(Ttype290840* n0);
N_NIMCALL(Tnode290802*, newnodei_292197_850551059)(Tnodekind290020 kind0, Tlineinfo189336 info0);
N_NIMCALL(void, addson_292807_850551059)(Tnode290802* father0, Tnode290802* son0);
N_NIMCALL(void, localerror_194080_155036129)(Tlineinfo189336 info0, Tmsgkind189002 msg0, NimStringDesc* arg0);
N_NIMCALL(Tnode290802*, copytree_294822_850551059)(Tnode290802* src0);
N_NIMCALL(void, initidtable_294019_850551059)(Tidtable290850* x0);
N_NIMCALL(Tnode290802*, getbody_333226_1724185294)(Tsym290834* s0);
static N_INLINE(NIM_BOOL, isatom_295419_850551059)(Tnode290802* n0);
N_NIMCALL(void, evaltemplateaux_455014_885920397)(Tnode290802* templ0, Tnode290802* actual0, Templctx455003* c0, Tnode290802* result0);
N_NIMCALL(void, add_291136_850551059)(Tnode290802* father0, Tnode290802* son0);
N_NIMCALL(void, internalerror_194113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(NimStringDesc*, HEX24_194185_1689653243)(TY201018 x0);
N_NIMCALL(TNimObject*, idtableget_297086_2984716966)(Tidtable290850 t0, Tidobj197004* key0);
N_NIMCALL(Tsym290834*, copysym_293601_850551059)(Tsym290834* s0, NIM_BOOL keepid0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell46904*, usrtocell_51040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52201_1689653243)(Cell46904* c0);
N_NOINLINE(void, addzct_51017_1689653243)(Cellseq46920* s0, Cell46904* c0);
N_NIMCALL(void, idtableput_297094_2984716966)(Tidtable290850* t0, Tidobj197004* key0, TNimObject* val0);
N_NIMCALL(Tnode290802*, newsymnode_292190_850551059)(Tsym290834* sym0, Tlineinfo189336 info0);
N_NIMCALL(Tnode290802*, copynode_455008_885920397)(Templctx455003* ctx0, Tnode290802* a0, Tnode290802* b0);
N_NIMCALL(Tnode290802*, copynode_294528_850551059)(Tnode290802* src0);
N_NIMCALL(NI, sonslen_293351_850551059)(Tnode290802* n0);
N_NIMCALL(NimStringDesc*, rendertree_309044_382274130)(Tnode290802* n0, Trenderflag309004Set renderflags0);
static N_INLINE(NI, safelen_291103_850551059)(Tnode290802* n0);
STRING_LITERAL(T885920397_2, "", 0);
STRING_LITERAL(T885920397_4, "compiler/evaltempl.nim", 22);
NIM_CONST TY201018 T885920397_3 = {((NimStringDesc*) &T885920397_4),
((NI) 45)}
;
NI evaltemplatecounter_455328_885920397;
extern Tnode290802* emptynode_291801_850551059;
extern Gcheap49418 gch_49458_1689653243;

static N_INLINE(NI, len_291081_850551059)(Tnode290802* n0) {
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

static N_INLINE(Tnode290802*, HEX5BHEX5D_291238_850551059)(Tnode290802* n0, NI i0) {
	Tnode290802* result0;
	result0 = (Tnode290802*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
}

N_NIMCALL(Tnode290802*, evaltemplateargs_455215_885920397)(Tnode290802* n0, Tsym290834* s0, NIM_BOOL fromhlo0) {
	Tnode290802* result0;
	NI totalparams0;
	NI genericparams0;
	NI expectedregularparams0;
	NI LOC12;
	NI givenregularparams0;
	result0 = (Tnode290802*)0;
	switch ((*n0).kind) {
	case ((Tnodekind290020) 27):
	case ((Tnodekind290020) 29):
	case ((Tnodekind290020) 30):
	case ((Tnodekind290020) 31):
	case ((Tnodekind290020) 26):
	case ((Tnodekind290020) 28):
	{
		NI LOC2;
		LOC2 = (NI)0;
		LOC2 = len_291081_850551059(n0);
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
		LOC6 = (((*s0).flags &(1U<<((NU)(((Tsymflag290184) 25))&31U)))!=0);
		if (LOC6) goto LA7;
		LOC6 = fromhlo0;
		LA7: ;
		if (!LOC6) goto LA8;
		genericparams0 = ((NI) 0);
	}
	goto LA4;
	LA8: ;
	{
		Tnode290802* LOC11;
		LOC11 = (Tnode290802*)0;
		LOC11 = HEX5BHEX5D_291238_850551059((*s0).ast, ((NI) 2));
		genericparams0 = len_291081_850551059(LOC11);
	}
	LA4: ;
	LOC12 = (NI)0;
	LOC12 = len_293339_850551059((*s0).typ);
	expectedregularparams0 = (LOC12 - 1);
	givenregularparams0 = (NI)(totalparams0 - genericparams0);
	{
		if (!(givenregularparams0 < ((NI) 0))) goto LA15;
		givenregularparams0 = ((NI) 0);
	}
	LA15: ;
	{
		if (!((NI)(expectedregularparams0 + genericparams0) < totalparams0)) goto LA19;
		globalerror_194071_155036129((*n0).info, ((Tmsgkind189002) 137), ((NimStringDesc*) &T885920397_2));
	}
	LA19: ;
	result0 = newnodei_292197_850551059(((Tnodekind290020) 152), (*n0).info);
	{
		NI i_455257_885920397;
		NI res_455309_885920397;
		i_455257_885920397 = (NI)0;
		res_455309_885920397 = ((NI) 1);
		{
			while (1) {
				if (!(res_455309_885920397 <= givenregularparams0)) goto LA23;
				i_455257_885920397 = res_455309_885920397;
				addson_292807_850551059(result0, (*n0).kindU.S6.sons->data[i_455257_885920397]);
				res_455309_885920397 += ((NI) 1);
			} LA23: ;
		}
	}
	{
		NI i_455269_885920397;
		NI HEX3Atmp_455314_885920397;
		NI res_455317_885920397;
		i_455269_885920397 = (NI)0;
		HEX3Atmp_455314_885920397 = (NI)0;
		HEX3Atmp_455314_885920397 = (NI)(givenregularparams0 + ((NI) 1));
		res_455317_885920397 = HEX3Atmp_455314_885920397;
		{
			while (1) {
				Tnode290802* default_455274_885920397;
				if (!(res_455317_885920397 <= expectedregularparams0)) goto LA26;
				i_455269_885920397 = res_455317_885920397;
				default_455274_885920397 = (*(*(*(*(*s0).typ).n).kindU.S6.sons->data[i_455269_885920397]).kindU.S4.sym).ast;
				{
					NIM_BOOL LOC29;
					LOC29 = (NIM_BOOL)0;
					LOC29 = default_455274_885920397 == 0;
					if (LOC29) goto LA30;
					LOC29 = ((*default_455274_885920397).kind == ((Tnodekind290020) 1));
					LA30: ;
					if (!LOC29) goto LA31;
					localerror_194080_155036129((*n0).info, ((Tmsgkind189002) 137), ((NimStringDesc*) &T885920397_2));
					addson_292807_850551059(result0, emptynode_291801_850551059);
				}
				goto LA27;
				LA31: ;
				{
					Tnode290802* LOC34;
					LOC34 = (Tnode290802*)0;
					LOC34 = copytree_294822_850551059(default_455274_885920397);
					addson_292807_850551059(result0, LOC34);
				}
				LA27: ;
				res_455317_885920397 += ((NI) 1);
			} LA26: ;
		}
	}
	{
		NI i_455303_885920397;
		NI res_455324_885920397;
		i_455303_885920397 = (NI)0;
		res_455324_885920397 = ((NI) 1);
		{
			while (1) {
				if (!(res_455324_885920397 <= genericparams0)) goto LA37;
				i_455303_885920397 = res_455324_885920397;
				addson_292807_850551059(result0, (*n0).kindU.S6.sons->data[(NI)(givenregularparams0 + i_455303_885920397)]);
				res_455324_885920397 += ((NI) 1);
			} LA37: ;
		}
	}
	return result0;
}

static N_INLINE(NIM_BOOL, isatom_295419_850551059)(Tnode290802* n0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = (((Tnodekind290020) 0) <= (*n0).kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n0).kind <= ((Tnodekind290020) 23));
	LA2: ;
	result0 = LOC1;
	return result0;
}

static N_INLINE(Cell46904*, usrtocell_51040_1689653243)(void* usr0) {
	Cell46904* result0;
	result0 = (Cell46904*)0;
	result0 = ((Cell46904*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell46904))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52201_1689653243)(Cell46904* c0) {
	addzct_51017_1689653243((&gch_49458_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell46904* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51040_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell46904* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51040_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_52201_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(Tnode290802*, copynode_455008_885920397)(Templctx455003* ctx0, Tnode290802* a0, Tnode290802* b0) {
	Tnode290802* result0;
	result0 = (Tnode290802*)0;
	result0 = copynode_294528_850551059(a0);
	{
		if (!(*ctx0).instlines) goto LA3;
		(*result0).info = (*b0).info;
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, evaltemplateaux_455014_885920397)(Tnode290802* templ0, Tnode290802* actual0, Templctx455003* c0, Tnode290802* result0) {
	switch ((*templ0).kind) {
	case ((Tnodekind290020) 3):
	{
		Tsym290834* s0;
		s0 = (*templ0).kindU.S4.sym;
		{
			if (!((*(*s0).owner).Sup.id == (*(*c0).owner).Sup.id)) goto LA4;
			{
				NIM_BOOL LOC8;
				Tnode290802* x_455058_885920397;
				LOC8 = (NIM_BOOL)0;
				LOC8 = ((*s0).kind == ((Tsymkind290435) 3));
				if (!(LOC8)) goto LA9;
				LOC8 = !((((*s0).flags &(1U<<((NU)(((Tsymflag290184) 31))&31U)))!=0));
				LA9: ;
				if (!LOC8) goto LA10;
				x_455058_885920397 = (*actual0).kindU.S6.sons->data[(*s0).position];
				{
					if (!((*x_455058_885920397).kind == ((Tnodekind290020) 152))) goto LA14;
					{
						Tnode290802* y_455060_885920397;
						y_455060_885920397 = (Tnode290802*)0;
						{
							NI i_455189_885920397;
							NI HEX3Atmp_455191_885920397;
							NI LOC18;
							NI res_455193_885920397;
							i_455189_885920397 = (NI)0;
							HEX3Atmp_455191_885920397 = (NI)0;
							LOC18 = (NI)0;
							LOC18 = len_291081_850551059(x_455058_885920397);
							HEX3Atmp_455191_885920397 = (LOC18 - 1);
							res_455193_885920397 = ((NI) 0);
							{
								while (1) {
									if (!(res_455193_885920397 <= HEX3Atmp_455191_885920397)) goto LA20;
									i_455189_885920397 = res_455193_885920397;
									y_455060_885920397 = (*x_455058_885920397).kindU.S6.sons->data[i_455189_885920397];
									add_291136_850551059(result0, y_455060_885920397);
									res_455193_885920397 += ((NI) 1);
								} LA20: ;
							}
						}
					}
				}
				goto LA12;
				LA14: ;
				{
					Tnode290802* LOC22;
					LOC22 = (Tnode290802*)0;
					LOC22 = copytree_294822_850551059(x_455058_885920397);
					add_291136_850551059(result0, LOC22);
				}
				LA12: ;
			}
			goto LA6;
			LA10: ;
			{
				NIM_BOOL LOC24;
				NIM_BOOL LOC26;
				NIM_BOOL LOC27;
				Tnode290802* x_455116_885920397;
				NI LOC32;
				LOC24 = (NIM_BOOL)0;
				LOC24 = ((*s0).kind == ((Tsymkind290435) 4));
				if (LOC24) goto LA25;
				LOC26 = (NIM_BOOL)0;
				LOC27 = (NIM_BOOL)0;
				LOC27 = ((*s0).kind == ((Tsymkind290435) 7));
				if (!(LOC27)) goto LA28;
				LOC27 = !(((*s0).typ == NIM_NIL));
				LA28: ;
				LOC26 = LOC27;
				if (!(LOC26)) goto LA29;
				LOC26 = ((*(*s0).typ).kind == ((Ttypekind290244) 12));
				LA29: ;
				LOC24 = LOC26;
				LA25: ;
				if (!LOC24) goto LA30;
				LOC32 = (NI)0;
				LOC32 = len_293339_850551059((*(*s0).owner).typ);
				x_455116_885920397 = (*actual0).kindU.S6.sons->data[(NI)((NI)(LOC32 + (*s0).position) - ((NI) 1))];
				{
					if (!((*x_455116_885920397).kind == ((Tnodekind290020) 152))) goto LA35;
					{
						Tnode290802* y_455118_885920397;
						y_455118_885920397 = (Tnode290802*)0;
						{
							NI i_455200_885920397;
							NI HEX3Atmp_455202_885920397;
							NI LOC39;
							NI res_455204_885920397;
							i_455200_885920397 = (NI)0;
							HEX3Atmp_455202_885920397 = (NI)0;
							LOC39 = (NI)0;
							LOC39 = len_291081_850551059(x_455116_885920397);
							HEX3Atmp_455202_885920397 = (LOC39 - 1);
							res_455204_885920397 = ((NI) 0);
							{
								while (1) {
									if (!(res_455204_885920397 <= HEX3Atmp_455202_885920397)) goto LA41;
									i_455200_885920397 = res_455204_885920397;
									y_455118_885920397 = (*x_455116_885920397).kindU.S6.sons->data[i_455200_885920397];
									add_291136_850551059(result0, y_455118_885920397);
									res_455204_885920397 += ((NI) 1);
								} LA41: ;
							}
						}
					}
				}
				goto LA33;
				LA35: ;
				{
					Tnode290802* LOC43;
					LOC43 = (Tnode290802*)0;
					LOC43 = copytree_294822_850551059(x_455116_885920397);
					add_291136_850551059(result0, LOC43);
				}
				LA33: ;
			}
			goto LA6;
			LA30: ;
			{
				Tsym290834* x0;
				Tidobj197004* LOC50;
				TNimObject* LOC51;
				Tlineinfo189336 LOC58;
				Tnode290802* LOC64;
				{
					NimStringDesc* LOC49;
					if (!!((((*s0).flags &(1U<<((NU)(((Tsymflag290184) 31))&31U)))!=0))) goto LA47;
					LOC49 = (NimStringDesc*)0;
					LOC49 = HEX24_194185_1689653243(T885920397_3);
					internalerror_194113_155036129(LOC49);
				}
				LA47: ;
				LOC50 = (Tidobj197004*)0;
				LOC50 = &s0->Sup;
				LOC51 = (TNimObject*)0;
				LOC51 = idtableget_297086_2984716966((*c0).mapping, LOC50);
				x0 = ((Tsym290834*) (LOC51));
				{
					Tidobj197004* LOC56;
					TNimObject* LOC57;
					if (!(x0 == NIM_NIL)) goto LA54;
					x0 = copysym_293601_850551059(s0, NIM_FALSE);
					asgnRefNoCycle((void**) (&(*x0).owner), (*c0).gensymowner);
					LOC56 = (Tidobj197004*)0;
					LOC56 = &s0->Sup;
					LOC57 = (TNimObject*)0;
					LOC57 = &x0->Sup.Sup;
					idtableput_297094_2984716966((&(*c0).mapping), LOC56, LOC57);
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
				LOC64 = (Tnode290802*)0;
				LOC64 = newsymnode_292190_850551059(x0, LOC58);
				add_291136_850551059(result0, LOC64);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			Tnode290802* LOC66;
			LOC66 = (Tnode290802*)0;
			LOC66 = copynode_455008_885920397((&(*c0)), templ0, actual0);
			add_291136_850551059(result0, LOC66);
		}
		LA2: ;
	}
	break;
	case ((Tnodekind290020) 0) ... ((Tnodekind290020) 2):
	case ((Tnodekind290020) 4) ... ((Tnodekind290020) 23):
	{
		Tnode290802* LOC68;
		LOC68 = (Tnode290802*)0;
		LOC68 = copynode_455008_885920397((&(*c0)), templ0, actual0);
		add_291136_850551059(result0, LOC68);
	}
	break;
	default:
	{
		Tnode290802* res0;
		res0 = copynode_455008_885920397((&(*c0)), templ0, actual0);
		{
			NI i_455182_885920397;
			NI HEX3Atmp_455208_885920397;
			NI LOC71;
			NI res_455211_885920397;
			i_455182_885920397 = (NI)0;
			HEX3Atmp_455208_885920397 = (NI)0;
			LOC71 = (NI)0;
			LOC71 = sonslen_293351_850551059(templ0);
			HEX3Atmp_455208_885920397 = (NI)(LOC71 - ((NI) 1));
			res_455211_885920397 = ((NI) 0);
			{
				while (1) {
					if (!(res_455211_885920397 <= HEX3Atmp_455208_885920397)) goto LA73;
					i_455182_885920397 = res_455211_885920397;
					evaltemplateaux_455014_885920397((*templ0).kindU.S6.sons->data[i_455182_885920397], actual0, c0, res0);
					res_455211_885920397 += ((NI) 1);
				} LA73: ;
			}
		}
		add_291136_850551059(result0, res0);
	}
	break;
	}
}

static N_INLINE(NI, safelen_291103_850551059)(Tnode290802* n0) {
	NI result0;
	result0 = (NI)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = ((*n0).kind >= ((Tnodekind290020) 0) && (*n0).kind <= ((Tnodekind290020) 23));
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

N_NIMCALL(Tnode290802*, evaltemplate_455329_885920397)(Tnode290802* n0, Tsym290834* tmpl0, Tsym290834* gensymowner0, NIM_BOOL fromhlo0) {
	Tnode290802* result0;
	Tnode290802* args0;
	Templctx455003 ctx0;
	Tnode290802* body0;
	result0 = (Tnode290802*)0;
	evaltemplatecounter_455328_885920397 += ((NI) 1);
	{
		if (!(((NI) 100) < evaltemplatecounter_455328_885920397)) goto LA3;
		globalerror_194071_155036129((*n0).info, ((Tmsgkind189002) 188), ((NimStringDesc*) &T885920397_2));
		result0 = n0;
	}
	LA3: ;
	args0 = evaltemplateargs_455215_885920397(n0, tmpl0, fromhlo0);
	memset((void*)(&ctx0), 0, sizeof(ctx0));
	ctx0.owner = tmpl0;
	ctx0.gensymowner = gensymowner0;
	initidtable_294019_850551059((&ctx0.mapping));
	body0 = getbody_333226_1724185294(tmpl0);
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = isatom_295419_850551059(body0);
		if (!LOC7) goto LA8;
		result0 = newnodei_292197_850551059(((Tnodekind290020) 37), (*body0).info);
		evaltemplateaux_455014_885920397(body0, args0, (&ctx0), result0);
		{
			NI LOC12;
			LOC12 = (NI)0;
			LOC12 = len_291081_850551059(result0);
			if (!(LOC12 == ((NI) 1))) goto LA13;
			result0 = (*result0).kindU.S6.sons->data[((NI) 0)];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			LOC16 = (NimStringDesc*)0;
			LOC16 = rendertree_309044_382274130(result0, 4);
			localerror_194080_155036129((*result0).info, ((Tmsgkind189002) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		result0 = copynode_294528_850551059(body0);
		{
			NI i_455366_885920397;
			NI HEX3Atmp_455380_885920397;
			NI LOC19;
			NI res_455383_885920397;
			i_455366_885920397 = (NI)0;
			HEX3Atmp_455380_885920397 = (NI)0;
			LOC19 = (NI)0;
			LOC19 = safelen_291103_850551059(body0);
			HEX3Atmp_455380_885920397 = (NI)(LOC19 - ((NI) 1));
			res_455383_885920397 = ((NI) 0);
			{
				while (1) {
					if (!(res_455383_885920397 <= HEX3Atmp_455380_885920397)) goto LA21;
					i_455366_885920397 = res_455383_885920397;
					evaltemplateaux_455014_885920397((*body0).kindU.S6.sons->data[i_455366_885920397], args0, (&ctx0), result0);
					res_455383_885920397 += ((NI) 1);
				} LA21: ;
			}
		}
	}
	LA5: ;
	evaltemplatecounter_455328_885920397 -= ((NI) 1);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplInit000)(void) {
	evaltemplatecounter_455328_885920397 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplDatInit000)(void) {
}

