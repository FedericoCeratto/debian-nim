/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Tpasscontext343002 Tpasscontext343002;
typedef struct Tsym294834 Tsym294834;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj201004 Tidobj201004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq294836 Ttypeseq294836;
typedef struct TY294929 TY294929;
typedef struct Tstrtable294806 Tstrtable294806;
typedef struct Tsymseq294804 Tsymseq294804;
typedef struct Ttype294840 Ttype294840;
typedef struct Tident201010 Tident201010;
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct Tnode294802 Tnode294802;
typedef struct Tloc294816 Tloc294816;
typedef struct Ropeobj180006 Ropeobj180006;
typedef struct Tlib294820 Tlib294820;
typedef struct Tnodeseq294796 Tnodeseq294796;
typedef struct Cell47304 Cell47304;
typedef struct Cellseq47320 Cellseq47320;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29485 Memregion29485;
typedef struct Smallchunk29439 Smallchunk29439;
typedef struct Llchunk29479 Llchunk29479;
typedef struct Bigchunk29441 Bigchunk29441;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29483 Avlnode29483;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47316 Cellset47316;
typedef struct Pagedesc47312 Pagedesc47312;
typedef struct Tinstantiation294824 Tinstantiation294824;
typedef struct TY294960 TY294960;
typedef struct Tlistentry148007 Tlistentry148007;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct TY294961 TY294961;
typedef NU16 Tmsgkind193002;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  Tidobj201004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind294435;
struct  Tstrtable294806  {
NI counter;
Tsymseq294804* data;
};
typedef NU16 Tmagic294524;
struct  Tlineinfo193336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Tsymflag294184Set;
typedef NU32 Toption171009Set;
typedef NU8 Tlockind294808;
typedef NU8 Tstorageloc294812;
typedef NU16 Tlocflag294810Set;
struct  Tloc294816  {
Tlockind294808 k;
Tstorageloc294812 s;
Tlocflag294810Set flags;
Ttype294840* t;
Ropeobj180006* r;
};
struct  Tsym294834  {
  Tidobj201004 Sup;
Tsymkind294435 kind;
union{
struct {Ttypeseq294836* typeinstcache;
} S1;
struct {TY294929* procinstcache;
Tsym294834* gcunsafetyreason;
} S2;
struct {TY294929* usedgenerics;
Tstrtable294806 tab;
} S3;
struct {Tsym294834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic294524 magic;
Ttype294840* typ;
Tident201010* name;
Tlineinfo193336 info;
Tsym294834* owner;
Tsymflag294184Set flags;
Tnode294802* ast;
Toption171009Set options;
NI position;
NI offset;
Tloc294816 loc;
Tlib294820* annex;
Tnode294802* constraint;
};
struct  Tident201010  {
  Tidobj201004 Sup;
NimStringDesc* s;
Tident201010* next;
NI h;
};
typedef NU64 Tnotekind193330Set;
typedef NU16 Tnodeflag294427Set;
typedef NU8 Tnodekind294020;
struct  Tnode294802  {
Ttype294840* typ;
Tlineinfo193336 info;
Tnodeflag294427Set flags;
Tnodekind294020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym294834* sym;
} S4;
struct {Tident201010* ident;
} S5;
struct {Tnodeseq294796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU64 Tglobaloption171013Set;
typedef NU8 Tglobaloption171013;
typedef NU8 Tsymflag294184;
struct  Cell47304  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47320  {
NI len;
NI cap;
Cell47304** d;
};
typedef Smallchunk29439* TY29500[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29485  {
NI minlargeobj;
NI maxlargeobj;
TY29500 freesmallchunks;
Llchunk29479* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29441* freechunkslist;
Intset29414 chunkstarts;
Avlnode29483* root;
Avlnode29483* deleted;
Avlnode29483* last;
Avlnode29483* freeavlnodes;
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
struct  Cellset47316  {
NI counter;
NI max;
Pagedesc47312* head;
Pagedesc47312** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47320 zct;
Cellseq47320 decstack;
Cellseq47320 tempstack;
NI recgclock;
Memregion29485 region;
Gcstat49814 stat;
Cellset47316 marked;
Cellseq47320 additionalroots;
};
struct  Tpasscontext343002  {
  TNimObject Sup;
NIM_BOOL fromcache;
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
typedef NU8 Ttypekind294244;
typedef NU8 Tcallingconvention294002;
typedef NU32 Ttypeflag294431Set;
struct  Ttype294840  {
  Tidobj201004 Sup;
Ttypekind294244 kind;
Tcallingconvention294002 callconv;
Ttypeflag294431Set flags;
Ttypeseq294836* sons;
Tnode294802* n;
Tsym294834* owner;
Tsym294834* sym;
Tsym294834* destructor;
Tsym294834* deepcopy;
Tsym294834* assignment;
TY294960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc294816 loc;
};
struct  Ropeobj180006  {
  TNimObject Sup;
Ropeobj180006* left;
Ropeobj180006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry148007  {
  TNimObject Sup;
Tlistentry148007* prev;
Tlistentry148007* next;
};
typedef NU8 Tlibkind294818;
struct  Tlib294820  {
  Tlistentry148007 Sup;
Tlibkind294818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj180006* name;
Tnode294802* path;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29437  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29439  {
  Basechunk29437 Sup;
Smallchunk29439* next;
Smallchunk29439* prev;
Freecell29429* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29479  {
NI size;
NI acc;
Llchunk29479* next;
};
struct  Bigchunk29441  {
  Basechunk29437 Sup;
Bigchunk29441* next;
Bigchunk29441* prev;
NI align;
NF data;
};
typedef NI TY29418[16];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29418 bits;
};
typedef Avlnode29483* TY29490[2];
struct  Avlnode29483  {
TY29490 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47312  {
Pagedesc47312* next;
NI key;
TY29418 bits;
};
struct  Tinstantiation294824  {
Tsym294834* sym;
Ttypeseq294836* concretetypes;
NI compilesid;
};
struct TY294961 {
NI Field0;
Tsym294834* Field1;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct Ttypeseq294836 {
  TGenericSeq Sup;
  Ttype294840* data[SEQ_DECL_SIZE];
};
struct TY294929 {
  TGenericSeq Sup;
  Tinstantiation294824* data[SEQ_DECL_SIZE];
};
struct Tsymseq294804 {
  TGenericSeq Sup;
  Tsym294834* data[SEQ_DECL_SIZE];
};
struct Tnodeseq294796 {
  TGenericSeq Sup;
  Tnode294802* data[SEQ_DECL_SIZE];
};
struct TY294960 {
  TGenericSeq Sup;
  TY294961 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, rawmessage_196612_155036129)(Tmsgkind193002 msg0, NimStringDesc* arg0);
N_NIMCALL(void, internalerror_198113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(void, message_198095_155036129)(Tlineinfo193336 info0, Tmsgkind193002 msg0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NI, sonslen_297351_850551059)(Tnode294802* n0);
N_NIMCALL(Tnode294802*, cleanup_576035_2877158692)(Tpasscontext343002* c0, Tnode294802* n0);
N_NIMCALL(Tsym294834*, getmodule_301123_2984716966)(Tsym294834* s0);
N_NIMCALL(NIM_BOOL, astneeded_343089_2355241294)(Tsym294834* s0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
STRING_LITERAL(T2877158692_2, "logpass: context is not nil", 27);
extern NI gverbosity_171139_2607990831;
extern Tnotekind193330Set gnotes_194071_155036129;
extern NI gfrontendid_293004_644355110;
extern Tglobaloption171013Set gglobaloptions_171130_2607990831;
extern Tnode294802* emptynode_295801_850551059;
extern Gcheap49818 gch_49858_1689653243;

N_NIMCALL(Tpasscontext343002*, verboseopen_576002_2877158692)(Tsym294834* s0) {
	Tpasscontext343002* result0;
	result0 = (Tpasscontext343002*)0;
	result0 = NIM_NIL;
	rawmessage_196612_155036129(((Tmsgkind193002) 276), (*(*s0).name).s);
	return result0;
}

N_NIMCALL(Tnode294802*, verboseprocess_576007_2877158692)(Tpasscontext343002* context0, Tnode294802* n0) {
	Tnode294802* result0;
	result0 = (Tnode294802*)0;
	result0 = n0;
	{
		if (!!((context0 == NIM_NIL))) goto LA3;
		internalerror_198113_155036129(((NimStringDesc*) &T2877158692_2));
	}
	LA3: ;
	{
		NimStringDesc* LOC9;
		if (!(gverbosity_171139_2607990831 == ((NI) 3))) goto LA7;
		gnotes_194071_155036129 |= ((NU64)1)<<(((((Tmsgkind193002) 276)- 237))%(sizeof(NU64)*8));
		LOC9 = (NimStringDesc*)0;
		LOC9 = nimIntToStr(gfrontendid_293004_644355110);
		message_198095_155036129((*n0).info, ((Tmsgkind193002) 276), LOC9);
	}
	LA7: ;
	return result0;
}

static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47304* result0;
	result0 = (Cell47304*)0;
	result0 = ((Cell47304*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47304))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47304* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51440_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47304* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51440_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(Tnode294802*, cleanup_576035_2877158692)(Tpasscontext343002* c0, Tnode294802* n0) {
	Tnode294802* result0;
{	result0 = (Tnode294802*)0;
	result0 = n0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = ((gglobaloptions_171130_2607990831 &((NU64)1<<((NU)(((Tglobaloption171013) 2))&63U)))!=0);
		if (LOC3) goto LA4;
		LOC3 = (n0 == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	switch ((*n0).kind) {
	case ((Tnodekind294020) 115):
	{
		{
			NI i_576073_2877158692;
			NI HEX3Atmp_576102_2877158692;
			NI LOC9;
			NI res_576105_2877158692;
			i_576073_2877158692 = (NI)0;
			HEX3Atmp_576102_2877158692 = (NI)0;
			LOC9 = (NI)0;
			LOC9 = sonslen_297351_850551059(n0);
			HEX3Atmp_576102_2877158692 = (NI)(LOC9 - ((NI) 1));
			res_576105_2877158692 = ((NI) 0);
			{
				while (1) {
					Tnode294802* LOC12;
					if (!(res_576105_2877158692 <= HEX3Atmp_576102_2877158692)) goto LA11;
					i_576073_2877158692 = res_576105_2877158692;
					LOC12 = (Tnode294802*)0;
					LOC12 = cleanup_576035_2877158692(c0, (*n0).kindU.S6.sons->data[i_576073_2877158692]);
					res_576105_2877158692 += ((NI) 1);
				} LA11: ;
			}
		}
	}
	break;
	case ((Tnodekind294020) 79):
	case ((Tnodekind294020) 80):
	{
		{
			Tsym294834* s0;
			if (!((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind294020) 3))) goto LA16;
			s0 = (*(*n0).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym;
			{
				NIM_BOOL LOC20;
				Tsym294834* LOC21;
				NIM_BOOL LOC23;
				LOC20 = (NIM_BOOL)0;
				LOC21 = (Tsym294834*)0;
				LOC21 = getmodule_301123_2984716966(s0);
				LOC20 = !((((*LOC21).flags &(1U<<((NU)(((Tsymflag294184) 25))&31U)))!=0));
				if (!(LOC20)) goto LA22;
				LOC23 = (NIM_BOOL)0;
				LOC23 = astneeded_343089_2355241294(s0);
				LOC20 = !(LOC23);
				LA22: ;
				if (!LOC20) goto LA24;
				asgnRefNoCycle((void**) (&(*(*s0).ast).kindU.S6.sons->data[((NI) 6)]), emptynode_295801_850551059);
			}
			LA24: ;
		}
		LA16: ;
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
NIM_EXTERNC N_NOINLINE(void, compiler_passauxInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_passauxDatInit000)(void) {
}

