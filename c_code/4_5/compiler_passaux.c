/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Tpasscontext341002 Tpasscontext341002;
typedef struct Tsym292834 Tsym292834;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj199004 Tidobj199004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct TY292929 TY292929;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Ttype292840 Ttype292840;
typedef struct Tident199010 Tident199010;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct Tnode292802 Tnode292802;
typedef struct Tloc292816 Tloc292816;
typedef struct Ropeobj178006 Ropeobj178006;
typedef struct Tlib292820 Tlib292820;
typedef struct Tnodeseq292796 Tnodeseq292796;
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
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct TY292960 TY292960;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct TY292961 TY292961;
typedef NU16 Tmsgkind191002;
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
struct  Tidobj199004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind292435;
struct  Tstrtable292806  {
NI counter;
Tsymseq292804* data;
};
typedef NU16 Tmagic292524;
struct  Tlineinfo191336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Tsymflag292184Set;
typedef NU32 Toption169009Set;
typedef NU8 Tlockind292808;
typedef NU8 Tstorageloc292812;
typedef NU16 Tlocflag292810Set;
struct  Tloc292816  {
Tlockind292808 k;
Tstorageloc292812 s;
Tlocflag292810Set flags;
Ttype292840* t;
Ropeobj178006* r;
};
struct  Tsym292834  {
  Tidobj199004 Sup;
Tsymkind292435 kind;
union{
struct {Ttypeseq292836* typeinstcache;
} S1;
struct {TY292929* procinstcache;
Tsym292834* gcunsafetyreason;
} S2;
struct {TY292929* usedgenerics;
Tstrtable292806 tab;
} S3;
struct {Tsym292834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic292524 magic;
Ttype292840* typ;
Tident199010* name;
Tlineinfo191336 info;
Tsym292834* owner;
Tsymflag292184Set flags;
Tnode292802* ast;
Toption169009Set options;
NI position;
NI offset;
Tloc292816 loc;
Tlib292820* annex;
Tnode292802* constraint;
};
struct  Tident199010  {
  Tidobj199004 Sup;
NimStringDesc* s;
Tident199010* next;
NI h;
};
typedef NU64 Tnotekind191330Set;
typedef NU16 Tnodeflag292427Set;
typedef NU8 Tnodekind292020;
struct  Tnode292802  {
Ttype292840* typ;
Tlineinfo191336 info;
Tnodeflag292427Set flags;
Tnodekind292020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym292834* sym;
} S4;
struct {Tident199010* ident;
} S5;
struct {Tnodeseq292796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU64 Tglobaloption169013Set;
typedef NU8 Tglobaloption169013;
typedef NU8 Tsymflag292184;
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
struct  Tpasscontext341002  {
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
typedef NU8 Ttypekind292244;
typedef NU8 Tcallingconvention292002;
typedef NU32 Ttypeflag292431Set;
struct  Ttype292840  {
  Tidobj199004 Sup;
Ttypekind292244 kind;
Tcallingconvention292002 callconv;
Ttypeflag292431Set flags;
Ttypeseq292836* sons;
Tnode292802* n;
Tsym292834* owner;
Tsym292834* sym;
Tsym292834* destructor;
Tsym292834* deepcopy;
Tsym292834* assignment;
TY292960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc292816 loc;
};
struct  Ropeobj178006  {
  TNimObject Sup;
Ropeobj178006* left;
Ropeobj178006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind292818;
struct  Tlib292820  {
  Tlistentry147007 Sup;
Tlibkind292818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj178006* name;
Tnode292802* path;
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
struct  Tinstantiation292824  {
Tsym292834* sym;
Ttypeseq292836* concretetypes;
NI compilesid;
};
struct TY292961 {
NI Field0;
Tsym292834* Field1;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct Ttypeseq292836 {
  TGenericSeq Sup;
  Ttype292840* data[SEQ_DECL_SIZE];
};
struct TY292929 {
  TGenericSeq Sup;
  Tinstantiation292824* data[SEQ_DECL_SIZE];
};
struct Tsymseq292804 {
  TGenericSeq Sup;
  Tsym292834* data[SEQ_DECL_SIZE];
};
struct Tnodeseq292796 {
  TGenericSeq Sup;
  Tnode292802* data[SEQ_DECL_SIZE];
};
struct TY292960 {
  TGenericSeq Sup;
  TY292961 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, rawmessage_194612_155036129)(Tmsgkind191002 msg0, NimStringDesc* arg0);
N_NIMCALL(void, internalerror_196113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(void, message_196095_155036129)(Tlineinfo191336 info0, Tmsgkind191002 msg0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NI, sonslen_295351_850551059)(Tnode292802* n0);
N_NIMCALL(Tnode292802*, cleanup_574035_2877158692)(Tpasscontext341002* c0, Tnode292802* n0);
N_NIMCALL(Tsym292834*, getmodule_299123_2984716966)(Tsym292834* s0);
N_NIMCALL(NIM_BOOL, astneeded_341089_2355241294)(Tsym292834* s0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
STRING_LITERAL(T2877158692_2, "logpass: context is not nil", 27);
extern NI gverbosity_169139_2607990831;
extern Tnotekind191330Set gnotes_192071_155036129;
extern NI gfrontendid_291004_644355110;
extern Tglobaloption169013Set gglobaloptions_169130_2607990831;
extern Tnode292802* emptynode_293801_850551059;
extern Gcheap49818 gch_49858_1689653243;

N_NIMCALL(Tpasscontext341002*, verboseopen_574002_2877158692)(Tsym292834* s0) {
	Tpasscontext341002* result0;
	result0 = (Tpasscontext341002*)0;
	result0 = NIM_NIL;
	rawmessage_194612_155036129(((Tmsgkind191002) 276), (*(*s0).name).s);
	return result0;
}

N_NIMCALL(Tnode292802*, verboseprocess_574007_2877158692)(Tpasscontext341002* context0, Tnode292802* n0) {
	Tnode292802* result0;
	result0 = (Tnode292802*)0;
	result0 = n0;
	{
		if (!!((context0 == NIM_NIL))) goto LA3;
		internalerror_196113_155036129(((NimStringDesc*) &T2877158692_2));
	}
	LA3: ;
	{
		NimStringDesc* LOC9;
		if (!(gverbosity_169139_2607990831 == ((NI) 3))) goto LA7;
		gnotes_192071_155036129 |= ((NU64)1)<<(((((Tmsgkind191002) 276)- 237))%(sizeof(NU64)*8));
		LOC9 = (NimStringDesc*)0;
		LOC9 = nimIntToStr(gfrontendid_291004_644355110);
		message_196095_155036129((*n0).info, ((Tmsgkind191002) 276), LOC9);
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

N_NIMCALL(Tnode292802*, cleanup_574035_2877158692)(Tpasscontext341002* c0, Tnode292802* n0) {
	Tnode292802* result0;
{	result0 = (Tnode292802*)0;
	result0 = n0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = ((gglobaloptions_169130_2607990831 &((NU64)1<<((NU)(((Tglobaloption169013) 2))&63U)))!=0);
		if (LOC3) goto LA4;
		LOC3 = (n0 == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	switch ((*n0).kind) {
	case ((Tnodekind292020) 115):
	{
		{
			NI i_574073_2877158692;
			NI HEX3Atmp_574102_2877158692;
			NI LOC9;
			NI res_574105_2877158692;
			i_574073_2877158692 = (NI)0;
			HEX3Atmp_574102_2877158692 = (NI)0;
			LOC9 = (NI)0;
			LOC9 = sonslen_295351_850551059(n0);
			HEX3Atmp_574102_2877158692 = (NI)(LOC9 - ((NI) 1));
			res_574105_2877158692 = ((NI) 0);
			{
				while (1) {
					Tnode292802* LOC12;
					if (!(res_574105_2877158692 <= HEX3Atmp_574102_2877158692)) goto LA11;
					i_574073_2877158692 = res_574105_2877158692;
					LOC12 = (Tnode292802*)0;
					LOC12 = cleanup_574035_2877158692(c0, (*n0).kindU.S6.sons->data[i_574073_2877158692]);
					res_574105_2877158692 += ((NI) 1);
				} LA11: ;
			}
		}
	}
	break;
	case ((Tnodekind292020) 79):
	case ((Tnodekind292020) 80):
	{
		{
			Tsym292834* s0;
			if (!((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind292020) 3))) goto LA16;
			s0 = (*(*n0).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym;
			{
				NIM_BOOL LOC20;
				Tsym292834* LOC21;
				NIM_BOOL LOC23;
				LOC20 = (NIM_BOOL)0;
				LOC21 = (Tsym292834*)0;
				LOC21 = getmodule_299123_2984716966(s0);
				LOC20 = !((((*LOC21).flags &(1U<<((NU)(((Tsymflag292184) 25))&31U)))!=0));
				if (!(LOC20)) goto LA22;
				LOC23 = (NIM_BOOL)0;
				LOC23 = astneeded_341089_2355241294(s0);
				LOC20 = !(LOC23);
				LA22: ;
				if (!LOC20) goto LA24;
				asgnRefNoCycle((void**) (&(*(*s0).ast).kindU.S6.sons->data[((NI) 6)]), emptynode_293801_850551059);
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

