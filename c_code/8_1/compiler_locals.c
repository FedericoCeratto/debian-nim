/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode263794 Tnode263794;
typedef struct Tcontext314020 Tcontext314020;
typedef struct Ttype263832 Ttype263832;
typedef struct Tlineinfo185336 Tlineinfo185336;
typedef struct Tsym263826 Tsym263826;
typedef struct Tident193012 Tident193012;
typedef struct Tnodeseq263788 Tnodeseq263788;
typedef struct Tidobj193006 Tidobj193006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq263828 Ttypeseq263828;
typedef struct Tloc263808 Tloc263808;
typedef struct Ropeobj172006 Ropeobj172006;
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
typedef struct Tscope263820 Tscope263820;
typedef struct Tpasscontext311002 Tpasscontext311002;
typedef struct Tproccon314008 Tproccon314008;
typedef struct Tsymseq263796 Tsymseq263796;
typedef struct Intset240031 Intset240031;
typedef struct Trunk240027 Trunk240027;
typedef struct Trunkseq240029 Trunkseq240029;
typedef struct Tlinkedlist141016 Tlinkedlist141016;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct Tidtable263844 Tidtable263844;
typedef struct Tidpairseq263842 Tidpairseq263842;
typedef struct Tstrtable263798 Tstrtable263798;
typedef struct Tctx313036 Tctx313036;
typedef struct TY314144 TY314144;
typedef struct Ttabiter270075 Ttabiter270075;
typedef struct TY263927 TY263927;
typedef struct Tlib263812 Tlib263812;
typedef struct Basechunk30037 Basechunk30037;
typedef struct Freecell30029 Freecell30029;
typedef struct Tidpair263840 Tidpair263840;
typedef struct TY313242 TY313242;
typedef struct TY186093 TY186093;
typedef struct PprocHEX3Aobjecttype313221 PprocHEX3Aobjecttype313221;
typedef struct TY313261 TY313261;
typedef struct Tinstantiationpair314010 Tinstantiationpair314010;
typedef struct Tinstantiation263816 Tinstantiation263816;
typedef struct TY313222 TY313222;
typedef struct TY313227 TY313227;
typedef struct TY313262 TY313262;
typedef struct Vmargs313030 Vmargs313030;
typedef struct TY263917 TY263917;
typedef struct Tblock313018 Tblock313018;
typedef struct TY313202 TY313202;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tnode263794*, Transformation447004) (Tcontext314020* c0, Tnode263794* n0);
typedef NU8 Ttypekind263244;
typedef NU8 Tnodekind263020;
struct  Tlineinfo185336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag263427Set;
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
struct  Tpasscontext311002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset240031  {
NI counter;
NI max;
Trunk240027* head;
Trunkseq240029* data;
};
struct  Tlinkedlist141016  {
Tlistentry141010* head;
Tlistentry141010* tail;
NI counter;
};
struct  Tidtable263844  {
NI counter;
Tidpairseq263842* data;
};
typedef N_NIMCALL_PTR(Tnode263794*, TY314075) (Tcontext314020* c0, Tnode263794* n0);
typedef NU16 Texprflag314012Set;
typedef N_NIMCALL_PTR(Tnode263794*, TY314080) (Tcontext314020* c0, Tnode263794* n0, Texprflag314012Set flags0);
typedef N_NIMCALL_PTR(Tnode263794*, TY314088) (Tcontext314020* c0, Tnode263794* n0, Texprflag314012Set flags0);
typedef N_NIMCALL_PTR(Tnode263794*, TY314096) (Tcontext314020* c0, Tnode263794* n0);
typedef N_NIMCALL_PTR(Tnode263794*, TY314101) (Tcontext314020* c0, Tnode263794* n0, Texprflag314012Set flags0);
typedef N_NIMCALL_PTR(Tnode263794*, TY314109) (Tcontext314020* c0, Tnode263794* n0);
typedef NU32 Tsymkind263435Set;
typedef N_NIMCALL_PTR(Tnode263794*, TY314114) (Tcontext314020* c0, Tnode263794* n0, Tnode263794* norig0, Tsymkind263435Set filter0);
typedef N_NIMCALL_PTR(Ttype263832*, TY314121) (Tcontext314020* c0, Tnode263794* n0, Ttype263832* prev0);
typedef struct {
N_NIMCALL_PTR(Tnode263794*, ClPrc) (Tcontext314020* c0, Tidtable263844 pt0, Tnode263794* n0, void* ClEnv);
void* ClEnv;
} TY314127;
typedef struct {
N_NIMCALL_PTR(Tsym263826*, ClPrc) (Tcontext314020* c0, Tsym263826* fn0, Tidtable263844 pt0, Tlineinfo185336 info0, void* ClEnv);
void* ClEnv;
} TY314133;
struct  Tstrtable263798  {
NI counter;
Tsymseq263796* data;
};
typedef NU8 Ttypeattachedop314016;
typedef N_NIMCALL_PTR(Tsym263826*, TY314149) (Tcontext314020* c0, Tsym263826* dc0, Ttype263832* t0, Tlineinfo185336 info0, Ttypeattachedop314016 op0);
struct  Tcontext314020  {
  Tpasscontext311002 Sup;
Tsym263826* module;
Tscope263820* currentscope;
Tscope263820* importtable;
Tscope263820* toplevelscope;
Tproccon314008* p;
Tsymseq263796* friendmodules;
NI instcounter;
Intset240031 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq263796* converters;
Tsymseq263796* patterns;
Tlinkedlist141016 optionstack;
Tidtable263844 symmapping;
Tlinkedlist141016 libs;
TY314075 semconstexpr;
TY314080 semexpr;
TY314088 semtryexpr;
TY314096 semtryconstexpr;
TY314101 semoperand;
TY314109 semconstboolexpr;
TY314114 semoverloadedcall;
TY314121 semtypenode;
TY314127 seminferredlambda;
TY314133 semgenerateinstance;
Intset240031 includedfiles;
Tstrtable263798 userpragmas;
Tctx313036* evalcontext;
Intset240031 unknownidents;
TY314144* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY314149 insttypeboundop;
Tident193012* selfname;
Tstrtable263798 signatures;
};
struct  Tscope263820  {
NI depthlevel;
Tstrtable263798 symbols;
Tscope263820* parent;
};
struct  Ttabiter270075  {
NI h;
};
typedef NU8 Tsymkind263435;
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
typedef NU64 Ttypekind263244Set;
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
struct  Tproccon314008  {
Tsym263826* owner;
Tsym263826* resultsym;
Tsym263826* selfsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon314008* next;
NIM_BOOL wasforwarded;
Tnode263794* bracketexpr;
};
struct  Trunk240027  {
Trunk240027* next;
NI key;
TY30018 bits;
};
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
};
struct  Tidpair263840  {
Tidobj193006* key;
TNimObject* val;
};
typedef NU8 Tevalmode313020;
typedef NU8 Tsandboxflag313022Set;
struct  Tctx313036  {
  Tpasscontext311002 Sup;
TY313242* code;
TY186093* debug;
Tnode263794* globals;
Tnode263794* constants;
Ttypeseq263828* types;
Tnode263794* currentexceptiona;
Tnode263794* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype313221* prc;
Tsym263826* module;
Tnode263794* callsite;
Tevalmode313020 mode;
Tsandboxflag313022Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo185336 comesfromheuristic;
TY313261* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair314010  {
Tsym263826* genericsym;
Tinstantiation263816* inst;
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
typedef NU8 Tslotkind313026;
struct TY313227 {
NIM_BOOL Field0;
Tslotkind313026 Field1;
};
typedef TY313227 TY313230[256];
struct  PprocHEX3Aobjecttype313221  {
TY313222* blocks;
Tsym263826* sym;
TY313230 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs313030* args0, void* ClEnv);
void* ClEnv;
} Vmcallback313032;
struct TY313262 {
NimStringDesc* Field0;
Vmcallback313032 Field1;
};
struct  Tinstantiation263816  {
Tsym263826* sym;
Ttypeseq263828* concretetypes;
TY263917* usedby;
NI compilesid;
};
struct  Tblock313018  {
Tsym263826* label;
TY313202* fixups;
};
struct  Vmargs313030  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode263794* currentexception;
};
struct Tnodeseq263788 {
  TGenericSeq Sup;
  Tnode263794* data[SEQ_DECL_SIZE];
};
struct Ttypeseq263828 {
  TGenericSeq Sup;
  Ttype263832* data[SEQ_DECL_SIZE];
};
struct Tsymseq263796 {
  TGenericSeq Sup;
  Tsym263826* data[SEQ_DECL_SIZE];
};
struct Trunkseq240029 {
  TGenericSeq Sup;
  Trunk240027* data[SEQ_DECL_SIZE];
};
struct Tidpairseq263842 {
  TGenericSeq Sup;
  Tidpair263840 data[SEQ_DECL_SIZE];
};
struct TY314144 {
  TGenericSeq Sup;
  Tinstantiationpair314010 data[SEQ_DECL_SIZE];
};
struct TY263927 {
  TGenericSeq Sup;
  Tinstantiation263816* data[SEQ_DECL_SIZE];
};
struct TY313242 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY186093 {
  TGenericSeq Sup;
  Tlineinfo185336 data[SEQ_DECL_SIZE];
};
struct TY313261 {
  TGenericSeq Sup;
  TY313262 data[SEQ_DECL_SIZE];
};
struct TY313222 {
  TGenericSeq Sup;
  Tblock313018 data[SEQ_DECL_SIZE];
};
struct TY263917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY313202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, registerplugin_447102_1104897005)(NimStringDesc* package0, NimStringDesc* module0, NimStringDesc* fn0, Transformation447004 t0);
N_NIMCALL(Tnode263794*, semlocals_448005_4183469335)(Tcontext314020* c0, Tnode263794* n0);
N_NIMCALL(Ttype263832*, newtypes_314195_893308950)(Ttypekind263244 kind0, Tcontext314020* c0);
N_NIMCALL(Tnode263794*, newnodeit_265801_850551059)(Tnodekind263020 kind0, Tlineinfo185336 info0, Ttype263832* typ0);
N_NIMCALL(Tnode263794*, newnodei_265248_850551059)(Tnodekind263020 kind0, Tlineinfo185336 info0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(Tsym263826*, inittabiter_270077_2984716966)(Ttabiter270075* ti0, Tstrtable263798 tab0);
N_NIMCALL(Ttype263832*, skiptypes_267113_850551059)(Ttype263832* t0, Ttypekind263244Set kinds0);
N_NIMCALL(Tsym263826*, newsym_264684_850551059)(Tsymkind263435 symkind0, Tident193012* name0, Tsym263826* owner0, Tlineinfo185336 info0);
N_NIMCALL(Tsym263826*, getcurrowner_314220_893308950)(void);
N_NIMCALL(void, addson_265807_850551059)(Tnode263794* father0, Tnode263794* son0);
N_NIMCALL(Tnode263794*, newsymnode_265234_850551059)(Tsym263826* sym0);
N_NIMCALL(void, addsonskipintlit_308678_3937434831)(Ttype263832* father0, Ttype263832* son0);
N_NIMCALL(Tnode263794*, newsymnode_265241_850551059)(Tsym263826* sym0, Tlineinfo185336 info0);
static N_INLINE(Tnode263794*, newderef_401006_2218250499)(Tnode263794* n0);
N_NIMCALL(void, add_264135_850551059)(Tnode263794* father0, Tnode263794* son0);
N_NIMCALL(Tsym263826*, nextiter_270082_2984716966)(Ttabiter270075* ti0, Tstrtable263798 tab0);
STRING_LITERAL(TMP1163, "stdlib", 6);
STRING_LITERAL(TMP1164, "system", 6);
STRING_LITERAL(TMP1165, "locals", 6);
extern Gcheap50418 gch_50458_1689653243;

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

static N_INLINE(Tnode263794*, newderef_401006_2218250499)(Tnode263794* n0) {
	Tnode263794* result0;
	result0 = (Tnode263794*)0;
	result0 = newnodeit_265801_850551059(((Tnodekind263020) 65), (*n0).info, (*(*n0).typ).sons->data[((NI) 0)]);
	addson_265807_850551059(result0, n0);
	return result0;
}

N_NIMCALL(Tnode263794*, semlocals_448005_4183469335)(Tcontext314020* c0, Tnode263794* n0) {
	Tnode263794* result0;
	NI counter0;
	Ttype263832* tupletype0;
	result0 = (Tnode263794*)0;
	counter0 = ((NI) 0);
	tupletype0 = newtypes_314195_893308950(((Ttypekind263244) 18), c0);
	result0 = newnodeit_265801_850551059(((Tnodekind263020) 37), (*n0).info, tupletype0);
	asgnRefNoCycle((void**) (&(*tupletype0).n), newnodei_265248_850551059(((Tnodekind263020) 138), (*n0).info));
	{
		Tscope263820* scope_448012_4183469335;
		Tscope263820* HEX3Atmp_448085_4183469335;
		Tscope263820* current_448088_4183469335;
		scope_448012_4183469335 = (Tscope263820*)0;
		HEX3Atmp_448085_4183469335 = (Tscope263820*)0;
		HEX3Atmp_448085_4183469335 = (*c0).currentscope;
		current_448088_4183469335 = HEX3Atmp_448085_4183469335;
		{
			while (1) {
				if (!!((current_448088_4183469335 == NIM_NIL))) goto LA3;
				scope_448012_4183469335 = current_448088_4183469335;
				{
					if (!(scope_448012_4183469335 == (*c0).toplevelscope)) goto LA6;
					goto LA1;
				}
				LA6: ;
				{
					Tsym263826* it_448024_4183469335;
					Tstrtable263798 HEX3Atmp_448079_4183469335;
					Ttabiter270075 it_448082_4183469335;
					Tsym263826* s_448084_4183469335;
					it_448024_4183469335 = (Tsym263826*)0;
					memset((void*)(&HEX3Atmp_448079_4183469335), 0, sizeof(HEX3Atmp_448079_4183469335));
					HEX3Atmp_448079_4183469335.counter = (*scope_448012_4183469335).symbols.counter;
					HEX3Atmp_448079_4183469335.data = (*scope_448012_4183469335).symbols.data;
					memset((void*)(&it_448082_4183469335), 0, sizeof(it_448082_4183469335));
					s_448084_4183469335 = inittabiter_270077_2984716966((&it_448082_4183469335), HEX3Atmp_448079_4183469335);
					{
						while (1) {
							if (!!((s_448084_4183469335 == NIM_NIL))) goto LA10;
							it_448024_4183469335 = s_448084_4183469335;
							{
								NIM_BOOL LOC13;
								Ttype263832* LOC15;
								Tsym263826* field0;
								Tsym263826* LOC18;
								Tnode263794* LOC19;
								Tnode263794* a0;
								LOC13 = (NIM_BOOL)0;
								LOC13 = ((1051400 &(1U<<((NU)((*it_448024_4183469335).kind)&31U)))!=0);
								if (!(LOC13)) goto LA14;
								LOC15 = (Ttype263832*)0;
								LOC15 = skiptypes_267113_850551059((*it_448024_4183469335).typ, 8390656);
								LOC13 = !(((*LOC15).kind == ((Ttypekind263244) 48) || (*LOC15).kind == ((Ttypekind263244) 27) || (*LOC15).kind == ((Ttypekind263244) 8) || (*LOC15).kind == ((Ttypekind263244) 59) || (*LOC15).kind == ((Ttypekind263244) 6) || (*LOC15).kind == ((Ttypekind263244) 7) || (*LOC15).kind == ((Ttypekind263244) 3)));
								LA14: ;
								if (!LOC13) goto LA16;
								LOC18 = (Tsym263826*)0;
								LOC18 = getcurrowner_314220_893308950();
								field0 = newsym_264684_850551059(((Tsymkind263435) 18), (*it_448024_4183469335).name, LOC18, (*n0).info);
								asgnRefNoCycle((void**) (&(*field0).typ), skiptypes_267113_850551059((*it_448024_4183469335).typ, 8390656));
								(*field0).position = counter0;
								counter0 += ((NI) 1);
								LOC19 = (Tnode263794*)0;
								LOC19 = newsymnode_265234_850551059(field0);
								addson_265807_850551059((*tupletype0).n, LOC19);
								addsonskipintlit_308678_3937434831(tupletype0, (*field0).typ);
								a0 = newsymnode_265241_850551059(it_448024_4183469335, (*result0).info);
								{
									Ttype263832* LOC22;
									LOC22 = (Ttype263832*)0;
									LOC22 = skiptypes_267113_850551059((*it_448024_4183469335).typ, 2048);
									if (!((*LOC22).kind == ((Ttypekind263244) 23))) goto LA23;
									a0 = newderef_401006_2218250499(a0);
								}
								LA23: ;
								add_264135_850551059(result0, a0);
							}
							LA16: ;
							s_448084_4183469335 = nextiter_270082_2984716966((&it_448082_4183469335), HEX3Atmp_448079_4183469335);
						} LA10: ;
					}
				}
				current_448088_4183469335 = (*current_448088_4183469335).parent;
			} LA3: ;
		}
	} LA1: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_localsInit000)(void) {
	registerplugin_447102_1104897005(((NimStringDesc*) &TMP1163), ((NimStringDesc*) &TMP1164), ((NimStringDesc*) &TMP1165), semlocals_448005_4183469335);
}

NIM_EXTERNC N_NOINLINE(void, compiler_localsDatInit000)(void) {
}

