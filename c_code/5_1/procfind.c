/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tsym225846 tsym225846;
typedef struct tcontext290021 tcontext290021;
typedef struct tscope225840 tscope225840;
typedef struct tidentiter235141 tidentiter235141;
typedef struct tident200021 tident200021;
typedef struct tstrtable225820 tstrtable225820;
typedef struct tsymseq225818 tsymseq225818;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnodeseq225810 tnodeseq225810;
typedef struct tnode225816 tnode225816;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq225848 ttypeseq225848;
typedef struct ttype225852 ttype225852;
typedef struct TY225947 TY225947;
typedef struct tinstantiation225836 tinstantiation225836;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tloc225830 tloc225830;
typedef struct trope177009 trope177009;
typedef struct tlib225834 tlib225834;
typedef struct NimStringDesc NimStringDesc;
typedef struct tpasscontext286005 tpasscontext286005;
typedef struct tproccon290011 tproccon290011;
typedef struct intset222056 intset222056;
typedef struct ttrunk222052 ttrunk222052;
typedef struct ttrunkseq222054 ttrunkseq222054;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tidtable225864 tidtable225864;
typedef struct tidpairseq225862 tidpairseq225862;
typedef struct tidpair225860 tidpair225860;
typedef struct tctx289048 tctx289048;
typedef struct TY290133 TY290133;
typedef struct tinstantiationpair290013 tinstantiationpair290013;
typedef struct TY225936 TY225936;
typedef struct TY289250 TY289250;
typedef struct TY196414 TY196414;
typedef struct pprocHEX3Aobjecttype289230 pprocHEX3Aobjecttype289230;
typedef struct TY289269 TY289269;
typedef struct TY289270 TY289270;
typedef struct vmargs289042 vmargs289042;
typedef struct TY289231 TY289231;
typedef struct tblock289030 tblock289030;
typedef struct TY289211 TY289211;
typedef struct TY289237 TY289237;
struct  tidentiter235141  {
NI H;
tident200021* Name;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tstrtable225820  {
NI Counter;
tsymseq225818* Data;
};
struct  tscope225840  {
NI Depthlevel;
tstrtable225820 Symbols;
tnodeseq225810* Usingsyms;
tscope225840* Parent;
};
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc225830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype225852* T;
trope177009* R;
trope177009* Heaproot;
};
struct  tsym225846  {
  tidobj200015 Sup;
NU8 Kind;
union {
struct {ttypeseq225848* Typeinstcache;
tscope225840* Typscope;
} S1;
struct {TY225947* Procinstcache;
tscope225840* Scope;
} S2;
struct {TY225947* Usedgenerics;
tstrtable225820 Tab;
} S3;
struct {tsym225846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype225852* Typ;
tident200021* Name;
tlineinfo195539 Info;
tsym225846* Owner;
NU32 Flags;
tnode225816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc225830 Loc;
tlib225834* Annex;
tnode225816* Constraint;
};
struct  ttype225852  {
  tidobj200015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq225848* Sons;
tnode225816* N;
tsym225846* Owner;
tsym225846* Sym;
tsym225846* Destructor;
tsym225846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc225830 Loc;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY169969[2];
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
struct  tpasscontext286005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  intset222056  {
NI Counter;
NI Max;
ttrunk222052* Head;
ttrunkseq222054* Data;
};
struct  tlinkedlist127028  {
tlistentry127022* Head;
tlistentry127022* Tail;
NI Counter;
};
struct  tidpair225860  {
tidobj200015* Key;
TNimObject* Val;
};
struct  tidtable225864  {
NI Counter;
tidpairseq225862* Data;
};
typedef N_NIMCALL_PTR(tnode225816*, TY290064) (tcontext290021* c, tnode225816* n);
typedef N_NIMCALL_PTR(tnode225816*, TY290069) (tcontext290021* c, tnode225816* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode225816*, TY290077) (tcontext290021* c, tnode225816* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode225816*, TY290085) (tcontext290021* c, tnode225816* n);
typedef N_NIMCALL_PTR(tnode225816*, TY290090) (tcontext290021* c, tnode225816* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode225816*, TY290098) (tcontext290021* c, tnode225816* n);
typedef N_NIMCALL_PTR(tnode225816*, TY290103) (tcontext290021* c, tnode225816* n, tnode225816* norig, NU32 filter);
typedef N_NIMCALL_PTR(ttype225852*, TY290110) (tcontext290021* c, tnode225816* n, ttype225852* prev);
typedef struct {
N_NIMCALL_PTR(tnode225816*, ClPrc) (tcontext290021* c, tidtable225864 pt, tnode225816* n, void* ClEnv);
void* ClEnv;
} TY290116;
typedef struct {
N_NIMCALL_PTR(tsym225846*, ClPrc) (tcontext290021* c, tsym225846* fn, tidtable225864 pt, tlineinfo195539 info, void* ClEnv);
void* ClEnv;
} TY290122;
struct  tinstantiationpair290013  {
tsym225846* Genericsym;
tinstantiation225836* Inst;
};
typedef N_NIMCALL_PTR(tsym225846*, TY290138) (tcontext290021* c, tsym225846* dc, ttype225852* t, tlineinfo195539 info);
struct  tcontext290021  {
  tpasscontext286005 Sup;
tsym225846* Module;
tscope225840* Currentscope;
tscope225840* Importtable;
tscope225840* Toplevelscope;
tproccon290011* P;
tsymseq225818* Friendmodules;
NI Instcounter;
intset222056 Ambiguoussymbols;
NI Intypeclass;
NI Ingenericcontext;
NI Inunrolledcontext;
NI Incompilescontext;
NI Ingenericinst;
tsymseq225818* Converters;
tsymseq225818* Patterns;
tlinkedlist127028 Optionstack;
tidtable225864 Symmapping;
tlinkedlist127028 Libs;
TY290064 Semconstexpr;
TY290069 Semexpr;
TY290077 Semtryexpr;
TY290085 Semtryconstexpr;
TY290090 Semoperand;
TY290098 Semconstboolexpr;
TY290103 Semoverloadedcall;
TY290110 Semtypenode;
TY290116 Seminferredlambda;
TY290122 Semgenerateinstance;
intset222056 Includedfiles;
tstrtable225820 Userpragmas;
tctx289048* Evalcontext;
intset222056 Unknownidents;
TY290133* Generics;
NI Lastgenericidx;
NI Hloloopdetector;
NI Inparallelstmt;
TY290138 Instdeepcopy;
};
struct  tnode225816  {
ttype225852* Typ;
tlineinfo195539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym225846* Sym;
} S4;
struct {tident200021* Ident;
} S5;
struct {tnodeseq225810* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tinstantiation225836  {
tsym225846* Sym;
ttypeseq225848* Concretetypes;
TY225936* Usedby;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib225834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode225816* Path;
};
struct  tproccon290011  {
tsym225846* Owner;
tsym225846* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
NI Intrystmt;
tproccon290011* Next;
};
typedef NI TY26420[16];
struct  ttrunk222052  {
ttrunk222052* Next;
NI Key;
TY26420 Bits;
};
struct  vmargs289042  {
NI Ra;
NI Rb;
NI Rc;
void* Slots;
tnode225816* Currentexception;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (vmargs289042* args, void* ClEnv);
void* ClEnv;
} vmcallback289044;
struct TY289270 {
NimStringDesc* Field0;
vmcallback289044 Field1;
};
struct  tctx289048  {
  tpasscontext286005 Sup;
TY289250* Code;
TY196414* Debug;
tnode225816* Globals;
tnode225816* Constants;
ttypeseq225848* Types;
tnode225816* Currentexceptiona;
tnode225816* Currentexceptionb;
NI Exceptioninstr;
pprocHEX3Aobjecttype289230* Prc;
tsym225846* Module;
tnode225816* Callsite;
NU8 Mode;
NU8 Features;
NIM_BOOL Traceactive;
NI Loopiterations;
tlineinfo195539 Comesfromheuristic;
TY289269* Callbacks;
NimStringDesc* Errorflag;
};
struct  tblock289030  {
tsym225846* Label;
TY289211* Fixups;
};
struct TY289237 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY289237 TY289234[256];
struct  pprocHEX3Aobjecttype289230  {
TY289231* Blocks;
tsym225846* Sym;
TY289234 Slots;
NI Maxslots;
};
struct tsymseq225818 {
  TGenericSeq Sup;
  tsym225846* data[SEQ_DECL_SIZE];
};
struct tnodeseq225810 {
  TGenericSeq Sup;
  tnode225816* data[SEQ_DECL_SIZE];
};
struct ttypeseq225848 {
  TGenericSeq Sup;
  ttype225852* data[SEQ_DECL_SIZE];
};
struct TY225947 {
  TGenericSeq Sup;
  tinstantiation225836* data[SEQ_DECL_SIZE];
};
struct ttrunkseq222054 {
  TGenericSeq Sup;
  ttrunk222052* data[SEQ_DECL_SIZE];
};
struct tidpairseq225862 {
  TGenericSeq Sup;
  tidpair225860 data[SEQ_DECL_SIZE];
};
struct TY290133 {
  TGenericSeq Sup;
  tinstantiationpair290013 data[SEQ_DECL_SIZE];
};
struct TY225936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY289250 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY196414 {
  TGenericSeq Sup;
  tlineinfo195539 data[SEQ_DECL_SIZE];
};
struct TY289269 {
  TGenericSeq Sup;
  TY289270 data[SEQ_DECL_SIZE];
};
struct TY289211 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY289231 {
  TGenericSeq Sup;
  tblock289030 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tsym225846*, searchforprocnew_309328)(tcontext290021* c, tscope225840* scope, tsym225846* fn);
N_NIMCALL(tsym225846*, initidentiter_235147)(tidentiter235141* ti, tstrtable225820 tab, tident200021* s);
N_NIMCALL(NIM_BOOL, sametype_268351)(ttype225852* a, ttype225852* b, NU8 flags);
N_NIMCALL(NU8, equalparams_263085)(tnode225816* a, tnode225816* b);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, getprocheader_263519)(tsym225846* sym, NU8 prefer);
static N_INLINE(NimStringDesc*, tofilelinecol_197103)(tlineinfo195539 info);
N_NIMCALL(NimStringDesc*, tofilename_197025)(NI32 fileidx);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, localerror_197955)(tlineinfo195539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tsym225846*, nextidentiter_235156)(tidentiter235141* ti, tstrtable225820 tab);
STRING_LITERAL(TMP3043, "public implementation \'$1\' has non-public forward declaration i"
"n $2", 67);
STRING_LITERAL(TMP3044, "(", 1);
STRING_LITERAL(TMP3045, ",", 1);
STRING_LITERAL(TMP3046, ")", 1);

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(NimStringDesc*, tofilelinecol_197103)(tlineinfo195539 info) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = tofilename_197025(info.Fileindex);
	LOC3 = 0;
	LOC3 = nimIntToStr(((NI) (info.Line)));
	LOC4 = 0;
	LOC4 = nimIntToStr(((NI) (info.Col)));
	LOC1 = rawNewString(LOC2->Sup.len + LOC3->Sup.len + LOC4->Sup.len + 3);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP3044));
appendString(LOC1, LOC3);
appendString(LOC1, ((NimStringDesc*) &TMP3045));
appendString(LOC1, LOC4);
appendString(LOC1, ((NimStringDesc*) &TMP3046));
	result = LOC1;
	return result;
}

N_NIMCALL(tsym225846*, searchforprocnew_309328)(tcontext290021* c, tscope225840* scope, tsym225846* fn) {
	tsym225846* result;
	tidentiter235141 it;
	result = 0;
	memset((void*)(&it), 0, sizeof(it));
	result = initidentiter_235147((&it), (*scope).Symbols, (*fn).Name);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				NU8 LOC9;
				LOC5 = 0;
				LOC5 = ((520192 &(1<<(((*result).Kind)&31)))!=0);
				if (!(LOC5)) goto LA6;
				LOC5 = sametype_268351((*result).Typ, (*fn).Typ, 30);
				LA6: ;
				if (!LOC5) goto LA7;
				LOC9 = 0;
				LOC9 = equalparams_263085((*(*result).Typ).N, (*(*fn).Typ).N);
				switch (LOC9) {
				case ((NU8) 1):
				{
					{
						NIM_BOOL LOC13;
						NimStringDesc* message;
						TY169969 LOC17;
						LOC13 = 0;
						LOC13 = !((((*result).Flags &(1<<((((NU8) 1))&31)))!=0));
						if (!(LOC13)) goto LA14;
						LOC13 = (((*fn).Flags &(1<<((((NU8) 1))&31)))!=0);
						LA14: ;
						if (!LOC13) goto LA15;
						memset((void*)LOC17, 0, sizeof(LOC17));
						LOC17[0] = getprocheader_263519(result, ((NU8) 0));
						LOC17[1] = tofilelinecol_197103((*result).Info);
						message = nsuFormatOpenArray(((NimStringDesc*) &TMP3043), LOC17, 2);
						localerror_197955((*fn).Info, ((NU16) 4), message);
					}
					LA15: ;
					goto BeforeRet;
				}
				break;
				case ((NU8) 2):
				{
					localerror_197955((*fn).Info, ((NU16) 66), (*(*fn).Name).S);
					goto BeforeRet;
				}
				break;
				case ((NU8) 0):
				{
				}
				break;
				}
			}
			LA7: ;
			result = nextidentiter_235156((&it), (*scope).Symbols);
		} LA2: ;
	}
	result = NIM_NIL;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(tsym225846*, searchforproc_309414)(tcontext290021* c, tscope225840* scope, tsym225846* fn) {
	tsym225846* result;
	result = 0;
	result = searchforprocnew_309328(c, scope, fn);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_procfindInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_procfindDatInit)(void) {
}

