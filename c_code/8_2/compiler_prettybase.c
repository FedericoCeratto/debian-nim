/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
#include <stdio.h>
typedef struct TY315012 TY315012;
typedef struct Tsourcefile315004 Tsourcefile315004;
typedef struct TY131402 TY131402;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Tsym263826 Tsym263826;
typedef struct Tident193012 Tident193012;
typedef struct TY124906 TY124906;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TSafePoint TSafePoint;
typedef struct Baselexer212009 Baselexer212009;
typedef struct Streamobj150418 Streamobj150418;
typedef struct Filestreamobj151477 Filestreamobj151477;
typedef struct Slice90251 Slice90251;
typedef struct Tidobj193006 Tidobj193006;
typedef struct Ttypeseq263828 Ttypeseq263828;
typedef struct Tscope263820 Tscope263820;
typedef struct TY263927 TY263927;
typedef struct Tstrtable263798 Tstrtable263798;
typedef struct Tsymseq263796 Tsymseq263796;
typedef struct Ttype263832 Ttype263832;
typedef struct Tnode263794 Tnode263794;
typedef struct Tloc263808 Tloc263808;
typedef struct Ropeobj172006 Ropeobj172006;
typedef struct Tlib263812 Tlib263812;
typedef struct Basechunk30038 Basechunk30038;
typedef struct Freecell30030 Freecell30030;
typedef struct Tinstantiation263816 Tinstantiation263816;
typedef struct Tnodeseq263788 Tnodeseq263788;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct TY263917 TY263917;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tsourcefile315004  {
TY131402* lines;
NIM_BOOL dirty;
NIM_BOOL isnimfixfile;
NimStringDesc* fullpath;
NimStringDesc* newline;
NI32 fileidx;
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
struct TY124906 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
typedef NU8 Filemode12409;
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e0, void* ClEnv);
void* ClEnv;
} TY18011;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY18011 raiseAction;
};
typedef NU8 char136Set[32];
struct  Baselexer212009  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj150418* input;
NI linenumber;
NI sentinel;
NI linestart;
char136Set refillchars;
};
struct  Slice90251  {
NI a;
NI b;
};
struct  Tidobj193006  {
  TNimObject Sup;
NI id;
};
struct  Tident193012  {
  Tidobj193006 Sup;
NimStringDesc* s;
Tident193012* next;
NI h;
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
typedef N_NIMCALL_PTR(void, TY150419) (Streamobj150418* s0);
typedef N_NIMCALL_PTR(NIM_BOOL, TY150423) (Streamobj150418* s0);
typedef N_NIMCALL_PTR(void, TY150427) (Streamobj150418* s0, NI pos0);
typedef N_NIMCALL_PTR(NI, TY150432) (Streamobj150418* s0);
typedef N_NIMCALL_PTR(NI, TY150436) (Streamobj150418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(NI, TY150442) (Streamobj150418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY150448) (Streamobj150418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY150454) (Streamobj150418* s0);
struct  Streamobj150418  {
  TNimObject Sup;
TY150419 closeimpl;
TY150423 atendimpl;
TY150427 setpositionimpl;
TY150432 getpositionimpl;
TY150436 readdataimpl;
TY150442 peekdataimpl;
TY150448 writedataimpl;
TY150454 flushimpl;
};
struct  Filestreamobj151477  {
  Streamobj150418 Sup;
FILE* f;
};
struct  Tscope263820  {
NI depthlevel;
Tstrtable263798 symbols;
Tscope263820* parent;
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
struct TY315012 {
  TGenericSeq Sup;
  Tsourcefile315004 data[SEQ_DECL_SIZE];
};
struct TY131402 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, TMP1025)(void* p, NI op);
N_NIMCALL(void, TMP1026)();
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56402 markerproc0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(void, replacedeprecated_315156_3901077974)(Tlineinfo185336 info0, Tident193012* oldsym0, Tident193012* newsym0);
N_NIMCALL(void, loadfile_315031_3901077974)(Tlineinfo185336 info0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
N_NIMCALL(NimStringDesc*, tofullpath_186270_155036129)(NI32 fileidx0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path0, TY124906* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(FILE*, open_15617_1689653243)(NimStringDesc* filename0, Filemode12409 mode0, NI bufsize0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, readline_15713_1689653243)(FILE* f0, NimStringDesc** line0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, open_214223_1314243012)(Baselexer212009* L0, Streamobj150418* input0, NI buflen0, char136Set refillchars0);
N_NIMCALL(Filestreamobj151477*, newfilestream_151543_1780494535)(NimStringDesc* filename0, Filemode12409 mode0);
N_NIMCALL(void, close_212022_1314243012)(Baselexer212009* L0);
N_NIMCALL(NI, identlen_315113_3901077974)(NimStringDesc* line0, NI start0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_90244_1689653243)(NimStringDesc* s0, Slice90251 x0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_79610_1689653243, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
static N_INLINE(Slice90251, HEX2EHEX2E_105260_1689653243)(NI a0, NI b0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
STRING_LITERAL(TMP2969, ".nimfix", 7);
static NIM_CONST char136Set TMP2979 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2980, "\015\012", 2);
STRING_LITERAL(TMP2981, "\012", 1);
TY315012* gsourcefiles_315029_3901077974;
TNimType NTI315004; /* TSourceFile */
extern TNimType NTI131402; /* seq[string] */
extern TNimType NTI130; /* bool */
extern TNimType NTI138; /* string */
extern TNimType NTI110; /* int32 */
TNimType NTI315012; /* seq[TSourceFile] */
extern Gcheap50418 gch_50458_1689653243;
extern TSafePoint* exchandler_19637_1689653243;
extern TNimType NTI212009; /* BaseLexer */
N_NIMCALL(void, TMP1025)(void* p, NI op) {
	TY315012* a;
	NI LOC1;
	a = (TY315012*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].lines, op);
	nimGCvisit((void*)a->data[LOC1].fullpath, op);
	nimGCvisit((void*)a->data[LOC1].newline, op);
	}
}
N_NIMCALL(void, TMP1026)() {
	nimGCvisit((void*)gsourcefiles_315029_3901077974, 0);
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47905* c0;
	c0 = usrtocell_52040_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
	int LOC13;
{	result0 = (NIM_BOOL)0;
	{
		if (!(a0 == b0)) goto LA3;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = (a0 == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b0 == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = (NIM_BOOL)0;
	LOC11 = ((*a0).Sup.len == (*b0).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = (int)0;
	LOC13 = memcmp(((NCSTRING) ((*a0).data)), ((NCSTRING) ((*b0).data)), (*a0).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_19637_1689653243;
	exchandler_19637_1689653243 = s0;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_19637_1689653243 = (*exchandler_19637_1689653243).prev;
}

N_NIMCALL(void, loadfile_315031_3901077974)(Tlineinfo185336 info0) {
	NI32 i0;
	i0 = info0.fileindex;
	{
		if (!((gsourcefiles_315029_3901077974 ? gsourcefiles_315029_3901077974->Sup.len : 0) <= ((NI) (i0)))) goto LA3;
		gsourcefiles_315029_3901077974 = (TY315012*) setLengthSeq(&(gsourcefiles_315029_3901077974)->Sup, sizeof(Tsourcefile315004), ((NI) ((NI32)(i0 + ((NI32) 1)))));
	}
	LA3: ;
	{
		NimStringDesc* path0;
		NimStringDesc* LOC9;
		TY124906 LOC10;
		Baselexer212009 lex0;
		Filestreamobj151477* LOC19;
		Streamobj150418* LOC20;
		NI pos0;
		if (!gsourcefiles_315029_3901077974->data[i0].lines == 0) goto LA7;
		gsourcefiles_315029_3901077974->data[i0].fileidx = info0.fileindex;
		if (gsourcefiles_315029_3901077974->data[i0].lines) nimGCunrefNoCycle(gsourcefiles_315029_3901077974->data[i0].lines);
		gsourcefiles_315029_3901077974->data[i0].lines = (TY131402*) newSeqRC1((&NTI131402), 0);
		path0 = tofullpath_186270_155036129(info0.fileindex);
		LOC9 = (NimStringDesc*)0;
		LOC9 = gsourcefiles_315029_3901077974->data[i0].fullpath; gsourcefiles_315029_3901077974->data[i0].fullpath = copyStringRC1(path0);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		memset((void*)(&LOC10), 0, sizeof(LOC10));
		nossplitFile(path0, (&LOC10));
		gsourcefiles_315029_3901077974->data[i0].isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &TMP2969));
		{
			NimStringDesc* line_315078_3901077974;
			FILE* f_315105_3901077974;
			TSafePoint TMP2970;
			line_315078_3901077974 = (NimStringDesc*)0;
			f_315105_3901077974 = open_15617_1689653243(path0, ((Filemode12409) 0), ((NI) 8000));
			pushSafePoint(&TMP2970);
			TMP2970.status = setjmp(TMP2970.context);
			if (TMP2970.status == 0) {
				NimStringDesc* res_315107_3901077974;
				res_315107_3901077974 = rawNewString(((NI) 80));
				{
					while (1) {
						NIM_BOOL LOC15;
						NimStringDesc* LOC16;
						LOC15 = (NIM_BOOL)0;
						LOC15 = readline_15713_1689653243(f_315105_3901077974, (&res_315107_3901077974));
						if (!LOC15) goto LA14;
						line_315078_3901077974 = res_315107_3901077974;
						gsourcefiles_315029_3901077974->data[i0].lines = (TY131402*) incrSeqV2(&(gsourcefiles_315029_3901077974->data[i0].lines)->Sup, sizeof(NimStringDesc*));
						LOC16 = (NimStringDesc*)0;
						LOC16 = gsourcefiles_315029_3901077974->data[i0].lines->data[gsourcefiles_315029_3901077974->data[i0].lines->Sup.len]; gsourcefiles_315029_3901077974->data[i0].lines->data[gsourcefiles_315029_3901077974->data[i0].lines->Sup.len] = copyStringRC1(line_315078_3901077974);
						if (LOC16) nimGCunrefNoCycle(LOC16);
						++gsourcefiles_315029_3901077974->data[i0].lines->Sup.len;
					} LA14: ;
				}
				popSafePoint();
			}
			else {
				popSafePoint();
			}
			{
				fclose(f_315105_3901077974);
			}
			if (TMP2970.status != 0) reraiseException();
		}
		memset((void*)(&lex0), 0, sizeof(lex0));
		lex0.Sup.m_type = (&NTI212009);
		LOC19 = (Filestreamobj151477*)0;
		LOC19 = newfilestream_151543_1780494535(path0, ((Filemode12409) 0));
		LOC20 = (Streamobj150418*)0;
		LOC20 = &LOC19->Sup;
		open_214223_1314243012((&lex0), LOC20, ((NI) 8192), TMP2979);
		pos0 = lex0.bufpos;
		{
			while (1) {
				switch (((NU8)(lex0.buf[pos0]))) {
				case 13:
				{
					NimStringDesc* LOC24;
					LOC24 = (NimStringDesc*)0;
					LOC24 = gsourcefiles_315029_3901077974->data[i0].newline; gsourcefiles_315029_3901077974->data[i0].newline = copyStringRC1(((NimStringDesc*) &TMP2980));
					if (LOC24) nimGCunrefNoCycle(LOC24);
					goto LA21;
				}
				break;
				case 10:
				case 0:
				{
					NimStringDesc* LOC26;
					LOC26 = (NimStringDesc*)0;
					LOC26 = gsourcefiles_315029_3901077974->data[i0].newline; gsourcefiles_315029_3901077974->data[i0].newline = copyStringRC1(((NimStringDesc*) &TMP2981));
					if (LOC26) nimGCunrefNoCycle(LOC26);
					goto LA21;
				}
				break;
				default:
				{
				}
				break;
				}
				pos0 += ((NI) 1);
			}
		} LA21: ;
		close_212022_1314243012((&lex0));
	}
	LA7: ;
}

N_NIMCALL(NI, identlen_315113_3901077974)(NimStringDesc* line0, NI start0) {
	NI result0;
	result0 = (NI)0;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = (NIM_BOOL)0;
			LOC3 = ((NI)(start0 + result0) < (line0 ? line0->Sup.len : 0));
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(line0->data[(NI)(start0 + result0)])) >= ((NU8)(97)) && ((NU8)(line0->data[(NI)(start0 + result0)])) <= ((NU8)(122)) || ((NU8)(line0->data[(NI)(start0 + result0)])) >= ((NU8)(65)) && ((NU8)(line0->data[(NI)(start0 + result0)])) <= ((NU8)(90)) || ((NU8)(line0->data[(NI)(start0 + result0)])) >= ((NU8)(48)) && ((NU8)(line0->data[(NI)(start0 + result0)])) <= ((NU8)(57)) || ((NU8)(line0->data[(NI)(start0 + result0)])) >= ((NU8)(128)) && ((NU8)(line0->data[(NI)(start0 + result0)])) <= ((NU8)(255)) || ((NU8)(line0->data[(NI)(start0 + result0)])) == ((NU8)(95)));
			LA4: ;
			if (!LOC3) goto LA2;
			result0 += ((NI) 1);
		} LA2: ;
	}
	return result0;
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_90244_1689653243)(NimStringDesc* s0, Slice90251 x0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = copyStrLast(s0, x0.a, x0.b);
	return result0;
}

static N_INLINE(Slice90251, HEX2EHEX2E_105260_1689653243)(NI a0, NI b0) {
	Slice90251 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.a = a0;
	result0.b = b0;
	return result0;
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
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

N_NIMCALL(void, replacedeprecated_315156_3901077974)(Tlineinfo185336 info0, Tident193012* oldsym0, Tident193012* newsym0) {
	NimStringDesc* line0;
	NI first0;
	NI last0;
	NI LOC17;
{	loadfile_315031_3901077974(info0);
	line0 = gsourcefiles_315029_3901077974->data[info0.fileindex].lines->data[(NI16)(info0.line - ((NI16) 1))];
	first0 = ((((NI) (info0.col)) <= (line0 ? line0->Sup.len : 0)) ? ((NI) (info0.col)) : (line0 ? line0->Sup.len : 0));
	{
		if (!(first0 < ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = (NIM_BOOL)0;
			LOC7 = (((NI) 0) < first0);
			if (!(LOC7)) goto LA8;
			LOC7 = (((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) >= ((NU8)(97)) && ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) <= ((NU8)(122)) || ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) >= ((NU8)(65)) && ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) <= ((NU8)(90)) || ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) >= ((NU8)(48)) && ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) <= ((NU8)(57)) || ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) >= ((NU8)(128)) && ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) <= ((NU8)(255)) || ((NU8)(line0->data[(NI)(first0 - ((NI) 1))])) == ((NU8)(95)));
			LA8: ;
			if (!LOC7) goto LA6;
			first0 -= ((NI) 1);
		} LA6: ;
	}
	{
		if (!(first0 < ((NI) 0))) goto LA11;
		goto BeforeRet;
	}
	LA11: ;
	{
		if (!((NU8)(line0->data[first0]) == (NU8)(96))) goto LA15;
		first0 += ((NI) 1);
	}
	LA15: ;
	LOC17 = (NI)0;
	LOC17 = identlen_315113_3901077974(line0, first0);
	last0 = (NI)((NI)(first0 + LOC17) - ((NI) 1));
	{
		Slice90251 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x0;
		NimStringDesc* LOC25;
		NimStringDesc* LOC26;
		NimStringDesc* LOC27;
		LOC20 = HEX2EHEX2E_105260_1689653243(first0, last0);
		LOC21 = (NimStringDesc*)0;
		LOC21 = HEX5BHEX5D_90244_1689653243(line0, LOC20);
		LOC22 = (NI)0;
		LOC22 = nsuCmpIgnoreStyle(LOC21, (*oldsym0).s);
		if (!(LOC22 == ((NI) 0))) goto LA23;
		LOC25 = (NimStringDesc*)0;
		LOC26 = (NimStringDesc*)0;
		LOC26 = copyStrLast(line0, ((NI) 0), (NI)(first0 - ((NI) 1)));
		LOC27 = (NimStringDesc*)0;
		LOC27 = copyStr(line0, (NI)(last0 + ((NI) 1)));
		LOC25 = rawNewString(LOC26->Sup.len + (*newsym0).s->Sup.len + LOC27->Sup.len + 0);
appendString(LOC25, LOC26);
appendString(LOC25, (*newsym0).s);
appendString(LOC25, LOC27);
		x0 = LOC25;
		asgnRefNoCycle((void**) (&gsourcefiles_315029_3901077974->data[info0.fileindex].lines->data[(NI16)(info0.line - ((NI16) 1))]), x0);
		gsourcefiles_315029_3901077974->data[info0.fileindex].dirty = NIM_TRUE;
	}
	LA23: ;
	}BeforeRet: ;
}

N_NIMCALL(void, replacedeprecated_315209_3901077974)(Tlineinfo185336 info0, Tsym263826* oldsym0, Tsym263826* newsym0) {
	replacedeprecated_315156_3901077974(info0, (*oldsym0).name, (*newsym0).name);
}
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseInit000)(void) {
nimRegisterGlobalMarker(TMP1026);
	if (gsourcefiles_315029_3901077974) nimGCunrefNoCycle(gsourcefiles_315029_3901077974);
	gsourcefiles_315029_3901077974 = (TY315012*) newSeqRC1((&NTI315012), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseDatInit000)(void) {
static TNimNode* TMP1024[6];
static TNimNode TMP1022[7];
NTI315004.size = sizeof(Tsourcefile315004);
NTI315004.kind = 18;
NTI315004.base = 0;
NTI315004.flags = 2;
TMP1024[0] = &TMP1022[1];
TMP1022[1].kind = 1;
TMP1022[1].offset = offsetof(Tsourcefile315004, lines);
TMP1022[1].typ = (&NTI131402);
TMP1022[1].name = "lines";
TMP1024[1] = &TMP1022[2];
TMP1022[2].kind = 1;
TMP1022[2].offset = offsetof(Tsourcefile315004, dirty);
TMP1022[2].typ = (&NTI130);
TMP1022[2].name = "dirty";
TMP1024[2] = &TMP1022[3];
TMP1022[3].kind = 1;
TMP1022[3].offset = offsetof(Tsourcefile315004, isnimfixfile);
TMP1022[3].typ = (&NTI130);
TMP1022[3].name = "isNimfixFile";
TMP1024[3] = &TMP1022[4];
TMP1022[4].kind = 1;
TMP1022[4].offset = offsetof(Tsourcefile315004, fullpath);
TMP1022[4].typ = (&NTI138);
TMP1022[4].name = "fullpath";
TMP1024[4] = &TMP1022[5];
TMP1022[5].kind = 1;
TMP1022[5].offset = offsetof(Tsourcefile315004, newline);
TMP1022[5].typ = (&NTI138);
TMP1022[5].name = "newline";
TMP1024[5] = &TMP1022[6];
TMP1022[6].kind = 1;
TMP1022[6].offset = offsetof(Tsourcefile315004, fileidx);
TMP1022[6].typ = (&NTI110);
TMP1022[6].name = "fileIdx";
TMP1022[0].len = 6; TMP1022[0].kind = 2; TMP1022[0].sons = &TMP1024[0];
NTI315004.node = &TMP1022[0];
NTI315012.size = sizeof(TY315012*);
NTI315012.kind = 24;
NTI315012.base = (&NTI315004);
NTI315012.flags = 2;
NTI315012.marker = TMP1025;
}

