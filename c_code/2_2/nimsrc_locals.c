/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode191813 Tnode191813;
typedef struct Tcontext245023 Tcontext245023;
typedef struct Ttype191849 Ttype191849;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct Tsym191843 Tsym191843;
typedef struct Tident168021 Tident168021;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tcell46347 Tcell46347;
typedef struct Tcellseq46363 Tcellseq46363;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46359 Tcellset46359;
typedef struct Tpagedesc46355 Tpagedesc46355;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct Tscope191837 Tscope191837;
typedef struct Tpasscontext242005 Tpasscontext242005;
typedef struct Tproccon245011 Tproccon245011;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Intset188056 Intset188056;
typedef struct Ttrunk188052 Ttrunk188052;
typedef struct Ttrunkseq188054 Ttrunkseq188054;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tidtable191861 Tidtable191861;
typedef struct Tidpairseq191859 Tidpairseq191859;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tctx244048 Tctx244048;
typedef struct TY245141 TY245141;
typedef struct Ttabiter199119 Ttabiter199119;
typedef struct TY191944 TY191944;
typedef struct Tlib191831 Tlib191831;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Tidpair191857 Tidpair191857;
typedef struct TY244253 TY244253;
typedef struct TY165033 TY165033;
typedef struct PprocHEX3Aobjecttype244232 PprocHEX3Aobjecttype244232;
typedef struct TY244272 TY244272;
typedef struct Tinstantiationpair245013 Tinstantiationpair245013;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct TY244233 TY244233;
typedef struct TY244239 TY244239;
typedef struct TY244273 TY244273;
typedef struct Vmargs244042 Vmargs244042;
typedef struct TY191933 TY191933;
typedef struct Tblock244030 Tblock244030;
typedef struct TY244213 TY244213;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tnode191813*, Transformation407013) (Tcontext245023* c, Tnode191813* n);
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tnode191813  {
Ttype191849* typ;
Tlineinfo164338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym191843* sym;
} S4;
struct {Tident168021* ident;
} S5;
struct {Tnodeseq191807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
};
struct  Ttype191849  {
  Tidobj168015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq191845* sons;
Tnode191813* n;
Tsym191843* owner;
Tsym191843* sym;
Tsym191843* destructor;
Tsym191843* deepcopy;
Tsym191843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc191827 loc;
};
struct  Tcell46347  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46363  {
NI len;
NI cap;
Tcell46347** d;
};
struct  Tcellset46359  {
NI counter;
NI max;
Tpagedesc46355* head;
Tpagedesc46355** data;
};
typedef Tsmallchunk27440* TY28222[512];
typedef Ttrunk27413* Ttrunkbuckets27415[256];
struct  Tintset27417  {
Ttrunkbuckets27415 data;
};
struct  Tmemregion28210  {
NI minlargeobj;
NI maxlargeobj;
TY28222 freesmallchunks;
Tllchunk28204* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27442* freechunkslist;
Tintset27417 chunkstarts;
Tavlnode28208* root;
Tavlnode28208* deleted;
Tavlnode28208* last;
Tavlnode28208* freeavlnodes;
};
struct  Tgcstat48214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48216  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46363 zct;
Tcellseq46363 decstack;
Tcellset46359 cycleroots;
Tcellseq46363 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
struct  Tpasscontext242005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset188056  {
NI counter;
NI max;
Ttrunk188052* head;
Ttrunkseq188054* data;
};
struct  Tlinkedlist130028  {
Tlistentry130022* head;
Tlistentry130022* tail;
NI counter;
};
struct  Tidtable191861  {
NI counter;
Tidpairseq191859* data;
};
typedef N_NIMCALL_PTR(Tnode191813*, TY245072) (Tcontext245023* c, Tnode191813* n);
typedef N_NIMCALL_PTR(Tnode191813*, TY245077) (Tcontext245023* c, Tnode191813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode191813*, TY245085) (Tcontext245023* c, Tnode191813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode191813*, TY245093) (Tcontext245023* c, Tnode191813* n);
typedef N_NIMCALL_PTR(Tnode191813*, TY245098) (Tcontext245023* c, Tnode191813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode191813*, TY245106) (Tcontext245023* c, Tnode191813* n);
typedef N_NIMCALL_PTR(Tnode191813*, TY245111) (Tcontext245023* c, Tnode191813* n, Tnode191813* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype191849*, TY245118) (Tcontext245023* c, Tnode191813* n, Ttype191849* prev);
typedef struct {
N_NIMCALL_PTR(Tnode191813*, ClPrc) (Tcontext245023* c, Tidtable191861 pt, Tnode191813* n, void* ClEnv);
void* ClEnv;
} TY245124;
typedef struct {
N_NIMCALL_PTR(Tsym191843*, ClPrc) (Tcontext245023* c, Tsym191843* fn, Tidtable191861 pt, Tlineinfo164338 info, void* ClEnv);
void* ClEnv;
} TY245130;
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
typedef N_NIMCALL_PTR(Tsym191843*, TY245146) (Tcontext245023* c, Tsym191843* dc, Ttype191849* t, Tlineinfo164338 info, NU8 op);
struct  Tcontext245023  {
  Tpasscontext242005 Sup;
Tsym191843* module;
Tscope191837* currentscope;
Tscope191837* importtable;
Tscope191837* toplevelscope;
Tproccon245011* p;
Tsymseq191815* friendmodules;
NI instcounter;
Intset188056 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI incompilescontext;
NI ingenericinst;
Tsymseq191815* converters;
Tsymseq191815* patterns;
Tlinkedlist130028 optionstack;
Tidtable191861 symmapping;
Tlinkedlist130028 libs;
TY245072 semconstexpr;
TY245077 semexpr;
TY245085 semtryexpr;
TY245093 semtryconstexpr;
TY245098 semoperand;
TY245106 semconstboolexpr;
TY245111 semoverloadedcall;
TY245118 semtypenode;
TY245124 seminferredlambda;
TY245130 semgenerateinstance;
Intset188056 includedfiles;
Tstrtable191817 userpragmas;
Tctx244048* evalcontext;
Intset188056 unknownidents;
TY245141* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY245146 insttypeboundop;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Ttabiter199119  {
NI h;
};
struct  Tsym191843  {
  Tidobj168015 Sup;
NU8 kind;
union{
struct {Ttypeseq191845* typeinstcache;
Tscope191837* typscope;
} S1;
struct {TY191944* procinstcache;
Tsym191843* gcunsafetyreason;
} S2;
struct {TY191944* usedgenerics;
Tstrtable191817 tab;
} S3;
struct {Tsym191843* guard;
} S4;
} kindU;
NU16 magic;
Ttype191849* typ;
Tident168021* name;
Tlineinfo164338 info;
Tsym191843* owner;
NU32 flags;
Tnode191813* ast;
NU32 options;
NI position;
NI offset;
Tloc191827 loc;
Tlib191831* annex;
Tnode191813* constraint;
};
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
};
typedef NI TY27420[8];
struct  Tpagedesc46355  {
Tpagedesc46355* next;
NI key;
TY27420 bits;
};
struct  Tbasechunk27438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27440  {
  Tbasechunk27438 Sup;
Tsmallchunk27440* next;
Tsmallchunk27440* prev;
Tfreecell27430* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28204  {
NI size;
NI acc;
Tllchunk28204* next;
};
struct  Tbigchunk27442  {
  Tbasechunk27438 Sup;
Tbigchunk27442* next;
Tbigchunk27442* prev;
NI align;
NF data;
};
struct  Ttrunk27413  {
Ttrunk27413* next;
NI key;
TY27420 bits;
};
typedef Tavlnode28208* TY28214[2];
struct  Tavlnode28208  {
TY28214 link;
NI key;
NI upperbound;
NI level;
};
struct  Tproccon245011  {
Tsym191843* owner;
Tsym191843* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon245011* next;
NIM_BOOL wasforwarded;
Tnode191813* bracketexpr;
};
struct  Ttrunk188052  {
Ttrunk188052* next;
NI key;
TY27420 bits;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tidpair191857  {
Tidobj168015* key;
TNimObject* val;
};
struct  Tctx244048  {
  Tpasscontext242005 Sup;
TY244253* code;
TY165033* debug;
Tnode191813* globals;
Tnode191813* constants;
Ttypeseq191845* types;
Tnode191813* currentexceptiona;
Tnode191813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype244232* prc;
Tsym191843* module;
Tnode191813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo164338 comesfromheuristic;
TY244272* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair245013  {
Tsym191843* genericsym;
Tinstantiation191833* inst;
};
struct  Tlib191831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode191813* path;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct TY244239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY244239 TY244236[256];
struct  PprocHEX3Aobjecttype244232  {
TY244233* blocks;
Tsym191843* sym;
TY244236 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs244042* args, void* ClEnv);
void* ClEnv;
} Vmcallback244044;
struct TY244273 {
NimStringDesc* Field0;
Vmcallback244044 Field1;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct  Tblock244030  {
Tsym191843* label;
TY244213* fixups;
};
struct  Vmargs244042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode191813* currentexception;
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct Ttrunkseq188054 {
  TGenericSeq Sup;
  Ttrunk188052* data[SEQ_DECL_SIZE];
};
struct Tidpairseq191859 {
  TGenericSeq Sup;
  Tidpair191857 data[SEQ_DECL_SIZE];
};
struct TY245141 {
  TGenericSeq Sup;
  Tinstantiationpair245013 data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct TY244253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY165033 {
  TGenericSeq Sup;
  Tlineinfo164338 data[SEQ_DECL_SIZE];
};
struct TY244272 {
  TGenericSeq Sup;
  TY244273 data[SEQ_DECL_SIZE];
};
struct TY244233 {
  TGenericSeq Sup;
  Tblock244030 data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY244213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, registerplugin_407124)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation407013 t);
N_NIMCALL(Tnode191813*, semlocals_408020)(Tcontext245023* c, Tnode191813* n);
N_NIMCALL(Ttype191849*, newtypes_245218)(NU8 kind, Tcontext245023* c);
N_NIMCALL(Tnode191813*, newnodeit_193807)(NU8 kind, Tlineinfo164338 info, Ttype191849* typ);
N_NIMCALL(Tnode191813*, newnodei_193351)(NU8 kind, Tlineinfo164338 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(Tsym191843*, inittabiter_199124)(Ttabiter199119* ti, Tstrtable191817 tab);
N_NIMCALL(Ttype191849*, skiptypes_195167)(Ttype191849* t, NU64 kinds);
N_NIMCALL(Tsym191843*, newsym_192655)(NU8 symkind, Tident168021* name, Tsym191843* owner, Tlineinfo164338 info);
N_NIMCALL(Tsym191843*, getcurrowner_245255)(void);
N_NIMCALL(void, addson_193819)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(Tnode191813*, newsymnode_193325)(Tsym191843* sym);
N_NIMCALL(void, addsonskipintlit_239731)(Ttype191849* father, Ttype191849* son);
N_NIMCALL(Tnode191813*, newsymnode_193338)(Tsym191843* sym, Tlineinfo164338 info);
static N_INLINE(Tnode191813*, newderef_358024)(Tnode191813* n);
N_NIMCALL(void, add_192164)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(Tsym191843*, nextiter_199132)(Ttabiter199119* ti, Tstrtable191817 tab);
STRING_LITERAL(TMP963, "stdlib", 6);
STRING_LITERAL(TMP964, "system", 6);
STRING_LITERAL(TMP965, "locals", 6);
extern Tgcheap48216 gch_48244;

static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr) {
	Tcell46347* result;
	result = 0;
	result = ((Tcell46347*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46347))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46347* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46347* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46347* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49846((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(Tnode191813*, newderef_358024)(Tnode191813* n) {
	Tnode191813* result;
	result = 0;
	result = newnodeit_193807(((NU8) 65), (*n).info, (*(*n).typ).sons->data[((NI) 0)]);
	addson_193819(result, n);
	return result;
}

N_NIMCALL(Tnode191813*, semlocals_408020)(Tcontext245023* c, Tnode191813* n) {
	Tnode191813* result;
	NI counter;
	Ttype191849* tupletype;
	result = 0;
	counter = ((NI) 0);
	tupletype = newtypes_245218(((NU8) 18), c);
	result = newnodeit_193807(((NU8) 37), (*n).info, tupletype);
	asgnRefNoCycle((void**) (&(*tupletype).n), newnodei_193351(((NU8) 138), (*n).info));
	{
		Tscope191837* scope_408027;
		Tscope191837* HEX3Atmp_408100;
		Tscope191837* current_408103;
		scope_408027 = 0;
		HEX3Atmp_408100 = 0;
		HEX3Atmp_408100 = (*c).currentscope;
		current_408103 = HEX3Atmp_408100;
		{
			while (1) {
				if (!!((current_408103 == NIM_NIL))) goto LA3;
				scope_408027 = current_408103;
				{
					if (!(scope_408027 == (*c).toplevelscope)) goto LA6;
					goto LA1;
				}
				LA6: ;
				{
					Tsym191843* it_408039;
					Tstrtable191817 HEX3Atmp_408094;
					Ttabiter199119 it_408097;
					Tsym191843* s_408099;
					it_408039 = 0;
					memset((void*)(&HEX3Atmp_408094), 0, sizeof(HEX3Atmp_408094));
					HEX3Atmp_408094.counter = (*scope_408027).symbols.counter;
					HEX3Atmp_408094.data = (*scope_408027).symbols.data;
					memset((void*)(&it_408097), 0, sizeof(it_408097));
					s_408099 = inittabiter_199124((&it_408097), HEX3Atmp_408094);
					{
						while (1) {
							if (!!((s_408099 == NIM_NIL))) goto LA10;
							it_408039 = s_408099;
							{
								NIM_BOOL LOC13;
								Ttype191849* LOC15;
								Tsym191843* field;
								Tsym191843* LOC18;
								Tnode191813* LOC19;
								Tnode191813* a;
								LOC13 = 0;
								LOC13 = ((2099976 &(1<<(((*it_408039).kind)&31)))!=0);
								if (!(LOC13)) goto LA14;
								LOC15 = 0;
								LOC15 = skiptypes_195167((*it_408039).typ, 8390656);
								LOC13 = !(((IL64(576742227414352328) &(IL64(1)<<(((*LOC15).kind)&IL64(63))))!=0));
								LA14: ;
								if (!LOC13) goto LA16;
								LOC18 = 0;
								LOC18 = getcurrowner_245255();
								field = newsym_192655(((NU8) 19), (*it_408039).name, LOC18, (*n).info);
								asgnRefNoCycle((void**) (&(*field).typ), skiptypes_195167((*it_408039).typ, 8390656));
								(*field).position = counter;
								counter += ((NI) 1);
								LOC19 = 0;
								LOC19 = newsymnode_193325(field);
								addson_193819((*tupletype).n, LOC19);
								addsonskipintlit_239731(tupletype, (*field).typ);
								a = newsymnode_193338(it_408039, (*result).info);
								{
									Ttype191849* LOC22;
									LOC22 = 0;
									LOC22 = skiptypes_195167((*it_408039).typ, 2048);
									if (!((*LOC22).kind == ((NU8) 23))) goto LA23;
									a = newderef_358024(a);
								}
								LA23: ;
								add_192164(result, a);
							}
							LA16: ;
							s_408099 = nextiter_199132((&it_408097), HEX3Atmp_408094);
						} LA10: ;
					}
				}
				current_408103 = (*current_408103).parent;
			} LA3: ;
		}
	} LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_localsInit)(void) {
	registerplugin_407124(((NimStringDesc*) &TMP963), ((NimStringDesc*) &TMP964), ((NimStringDesc*) &TMP965), semlocals_408020);
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_localsDatInit)(void) {
}

