/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tsym224846 tsym224846;
typedef struct tcontext289021 tcontext289021;
typedef struct tscope224840 tscope224840;
typedef struct tidentiter234141 tidentiter234141;
typedef struct tident199021 tident199021;
typedef struct tstrtable224820 tstrtable224820;
typedef struct tsymseq224818 tsymseq224818;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnodeseq224810 tnodeseq224810;
typedef struct tnode224816 tnode224816;
typedef struct tidobj199015 tidobj199015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq224848 ttypeseq224848;
typedef struct ttype224852 ttype224852;
typedef struct TY224947 TY224947;
typedef struct tinstantiation224836 tinstantiation224836;
typedef struct tlineinfo194539 tlineinfo194539;
typedef struct tloc224830 tloc224830;
typedef struct trope176009 trope176009;
typedef struct tlib224834 tlib224834;
typedef struct NimStringDesc NimStringDesc;
typedef struct tpasscontext285005 tpasscontext285005;
typedef struct tproccon289011 tproccon289011;
typedef struct intset221056 intset221056;
typedef struct ttrunk221052 ttrunk221052;
typedef struct ttrunkseq221054 ttrunkseq221054;
typedef struct tlinkedlist126028 tlinkedlist126028;
typedef struct tlistentry126022 tlistentry126022;
typedef struct tidtable224864 tidtable224864;
typedef struct tidpairseq224862 tidpairseq224862;
typedef struct tidpair224860 tidpair224860;
typedef struct tctx288048 tctx288048;
typedef struct TY289133 TY289133;
typedef struct tinstantiationpair289013 tinstantiationpair289013;
typedef struct TY224936 TY224936;
typedef struct TY288250 TY288250;
typedef struct TY195414 TY195414;
typedef struct pprocHEX3Aobjecttype288230 pprocHEX3Aobjecttype288230;
typedef struct TY288269 TY288269;
typedef struct TY288270 TY288270;
typedef struct vmargs288042 vmargs288042;
typedef struct TY288231 TY288231;
typedef struct tblock288030 tblock288030;
typedef struct TY288211 TY288211;
typedef struct TY288237 TY288237;
struct  tidentiter234141  {
NI H;
tident199021* Name;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tstrtable224820  {
NI Counter;
tsymseq224818* Data;
};
struct  tscope224840  {
NI Depthlevel;
tstrtable224820 Symbols;
tnodeseq224810* Usingsyms;
tscope224840* Parent;
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
struct  tidobj199015  {
  TNimObject Sup;
NI Id;
};
struct  tlineinfo194539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc224830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype224852* T;
trope176009* R;
trope176009* Heaproot;
};
struct  tsym224846  {
  tidobj199015 Sup;
NU8 Kind;
union {
struct {ttypeseq224848* Typeinstcache;
tscope224840* Typscope;
} S1;
struct {TY224947* Procinstcache;
tscope224840* Scope;
} S2;
struct {TY224947* Usedgenerics;
tstrtable224820 Tab;
} S3;
struct {tsym224846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype224852* Typ;
tident199021* Name;
tlineinfo194539 Info;
tsym224846* Owner;
NU32 Flags;
tnode224816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc224830 Loc;
tlib224834* Annex;
tnode224816* Constraint;
};
struct  ttype224852  {
  tidobj199015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq224848* Sons;
tnode224816* N;
tsym224846* Owner;
tsym224846* Sym;
tsym224846* Destructor;
tsym224846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc224830 Loc;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY168969[2];
struct  tident199021  {
  tidobj199015 Sup;
NimStringDesc* S;
tident199021* Next;
NI H;
};
struct  tpasscontext285005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  intset221056  {
NI Counter;
NI Max;
ttrunk221052* Head;
ttrunkseq221054* Data;
};
struct  tlinkedlist126028  {
tlistentry126022* Head;
tlistentry126022* Tail;
NI Counter;
};
struct  tidpair224860  {
tidobj199015* Key;
TNimObject* Val;
};
struct  tidtable224864  {
NI Counter;
tidpairseq224862* Data;
};
typedef N_NIMCALL_PTR(tnode224816*, TY289064) (tcontext289021* c, tnode224816* n);
typedef N_NIMCALL_PTR(tnode224816*, TY289069) (tcontext289021* c, tnode224816* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode224816*, TY289077) (tcontext289021* c, tnode224816* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode224816*, TY289085) (tcontext289021* c, tnode224816* n);
typedef N_NIMCALL_PTR(tnode224816*, TY289090) (tcontext289021* c, tnode224816* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode224816*, TY289098) (tcontext289021* c, tnode224816* n);
typedef N_NIMCALL_PTR(tnode224816*, TY289103) (tcontext289021* c, tnode224816* n, tnode224816* norig, NU32 filter);
typedef N_NIMCALL_PTR(ttype224852*, TY289110) (tcontext289021* c, tnode224816* n, ttype224852* prev);
typedef struct {
N_NIMCALL_PTR(tnode224816*, ClPrc) (tcontext289021* c, tidtable224864 pt, tnode224816* n, void* ClEnv);
void* ClEnv;
} TY289116;
typedef struct {
N_NIMCALL_PTR(tsym224846*, ClPrc) (tcontext289021* c, tsym224846* fn, tidtable224864 pt, tlineinfo194539 info, void* ClEnv);
void* ClEnv;
} TY289122;
struct  tinstantiationpair289013  {
tsym224846* Genericsym;
tinstantiation224836* Inst;
};
typedef N_NIMCALL_PTR(tsym224846*, TY289138) (tcontext289021* c, tsym224846* dc, ttype224852* t, tlineinfo194539 info);
struct  tcontext289021  {
  tpasscontext285005 Sup;
tsym224846* Module;
tscope224840* Currentscope;
tscope224840* Importtable;
tscope224840* Toplevelscope;
tproccon289011* P;
tsymseq224818* Friendmodules;
NI Instcounter;
intset221056 Ambiguoussymbols;
NI Intypeclass;
NI Ingenericcontext;
NI Inunrolledcontext;
NI Incompilescontext;
NI Ingenericinst;
tsymseq224818* Converters;
tsymseq224818* Patterns;
tlinkedlist126028 Optionstack;
tidtable224864 Symmapping;
tlinkedlist126028 Libs;
TY289064 Semconstexpr;
TY289069 Semexpr;
TY289077 Semtryexpr;
TY289085 Semtryconstexpr;
TY289090 Semoperand;
TY289098 Semconstboolexpr;
TY289103 Semoverloadedcall;
TY289110 Semtypenode;
TY289116 Seminferredlambda;
TY289122 Semgenerateinstance;
intset221056 Includedfiles;
tstrtable224820 Userpragmas;
tctx288048* Evalcontext;
intset221056 Unknownidents;
TY289133* Generics;
NI Lastgenericidx;
NI Hloloopdetector;
NI Inparallelstmt;
TY289138 Instdeepcopy;
};
struct  tnode224816  {
ttype224852* Typ;
tlineinfo194539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym224846* Sym;
} S4;
struct {tident199021* Ident;
} S5;
struct {tnodeseq224810* Sons;
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
struct  tinstantiation224836  {
tsym224846* Sym;
ttypeseq224848* Concretetypes;
TY224936* Usedby;
};
struct  trope176009  {
  TNimObject Sup;
trope176009* Left;
trope176009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry126022  {
  TNimObject Sup;
tlistentry126022* Prev;
tlistentry126022* Next;
};
struct  tlib224834  {
  tlistentry126022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope176009* Name;
tnode224816* Path;
};
struct  tproccon289011  {
tsym224846* Owner;
tsym224846* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
NI Intrystmt;
tproccon289011* Next;
};
typedef NI TY26420[16];
struct  ttrunk221052  {
ttrunk221052* Next;
NI Key;
TY26420 Bits;
};
struct  vmargs288042  {
NI Ra;
NI Rb;
NI Rc;
void* Slots;
tnode224816* Currentexception;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (vmargs288042* args, void* ClEnv);
void* ClEnv;
} vmcallback288044;
struct TY288270 {
NimStringDesc* Field0;
vmcallback288044 Field1;
};
struct  tctx288048  {
  tpasscontext285005 Sup;
TY288250* Code;
TY195414* Debug;
tnode224816* Globals;
tnode224816* Constants;
ttypeseq224848* Types;
tnode224816* Currentexceptiona;
tnode224816* Currentexceptionb;
NI Exceptioninstr;
pprocHEX3Aobjecttype288230* Prc;
tsym224846* Module;
tnode224816* Callsite;
NU8 Mode;
NU8 Features;
NIM_BOOL Traceactive;
NI Loopiterations;
tlineinfo194539 Comesfromheuristic;
TY288269* Callbacks;
NimStringDesc* Errorflag;
};
struct  tblock288030  {
tsym224846* Label;
TY288211* Fixups;
};
struct TY288237 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY288237 TY288234[256];
struct  pprocHEX3Aobjecttype288230  {
TY288231* Blocks;
tsym224846* Sym;
TY288234 Slots;
NI Maxslots;
};
struct tsymseq224818 {
  TGenericSeq Sup;
  tsym224846* data[SEQ_DECL_SIZE];
};
struct tnodeseq224810 {
  TGenericSeq Sup;
  tnode224816* data[SEQ_DECL_SIZE];
};
struct ttypeseq224848 {
  TGenericSeq Sup;
  ttype224852* data[SEQ_DECL_SIZE];
};
struct TY224947 {
  TGenericSeq Sup;
  tinstantiation224836* data[SEQ_DECL_SIZE];
};
struct ttrunkseq221054 {
  TGenericSeq Sup;
  ttrunk221052* data[SEQ_DECL_SIZE];
};
struct tidpairseq224862 {
  TGenericSeq Sup;
  tidpair224860 data[SEQ_DECL_SIZE];
};
struct TY289133 {
  TGenericSeq Sup;
  tinstantiationpair289013 data[SEQ_DECL_SIZE];
};
struct TY224936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY288250 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY195414 {
  TGenericSeq Sup;
  tlineinfo194539 data[SEQ_DECL_SIZE];
};
struct TY288269 {
  TGenericSeq Sup;
  TY288270 data[SEQ_DECL_SIZE];
};
struct TY288211 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY288231 {
  TGenericSeq Sup;
  tblock288030 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tsym224846*, searchforprocnew_308328)(tcontext289021* c, tscope224840* scope, tsym224846* fn);
N_NIMCALL(tsym224846*, initidentiter_234147)(tidentiter234141* ti, tstrtable224820 tab, tident199021* s);
N_NIMCALL(NIM_BOOL, sametype_267351)(ttype224852* a, ttype224852* b, NU8 flags);
N_NIMCALL(NU8, equalparams_262085)(tnode224816* a, tnode224816* b);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, getprocheader_262519)(tsym224846* sym, NU8 prefer);
static N_INLINE(NimStringDesc*, tofilelinecol_196103)(tlineinfo194539 info);
N_NIMCALL(NimStringDesc*, tofilename_196025)(NI32 fileidx);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, localerror_196955)(tlineinfo194539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tsym224846*, nextidentiter_234156)(tidentiter234141* ti, tstrtable224820 tab);
STRING_LITERAL(TMP3042, "public implementation \'$1\' has non-public forward declaration i"
"n $2", 67);
STRING_LITERAL(TMP3043, "(", 1);
STRING_LITERAL(TMP3044, ",", 1);
STRING_LITERAL(TMP3045, ")", 1);

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(NimStringDesc*, tofilelinecol_196103)(tlineinfo194539 info) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = tofilename_196025(info.Fileindex);
	LOC3 = 0;
	LOC3 = nimIntToStr(((NI) (info.Line)));
	LOC4 = 0;
	LOC4 = nimIntToStr(((NI) (info.Col)));
	LOC1 = rawNewString(LOC2->Sup.len + LOC3->Sup.len + LOC4->Sup.len + 3);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP3043));
appendString(LOC1, LOC3);
appendString(LOC1, ((NimStringDesc*) &TMP3044));
appendString(LOC1, LOC4);
appendString(LOC1, ((NimStringDesc*) &TMP3045));
	result = LOC1;
	return result;
}

N_NIMCALL(tsym224846*, searchforprocnew_308328)(tcontext289021* c, tscope224840* scope, tsym224846* fn) {
	tsym224846* result;
	tidentiter234141 it;
	result = 0;
	memset((void*)(&it), 0, sizeof(it));
	result = initidentiter_234147((&it), (*scope).Symbols, (*fn).Name);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				NU8 LOC9;
				LOC5 = 0;
				LOC5 = ((520192 &(1<<(((*result).Kind)&31)))!=0);
				if (!(LOC5)) goto LA6;
				LOC5 = sametype_267351((*result).Typ, (*fn).Typ, 30);
				LA6: ;
				if (!LOC5) goto LA7;
				LOC9 = 0;
				LOC9 = equalparams_262085((*(*result).Typ).N, (*(*fn).Typ).N);
				switch (LOC9) {
				case ((NU8) 1):
				{
					{
						NIM_BOOL LOC13;
						NimStringDesc* message;
						TY168969 LOC17;
						LOC13 = 0;
						LOC13 = !((((*result).Flags &(1<<((((NU8) 1))&31)))!=0));
						if (!(LOC13)) goto LA14;
						LOC13 = (((*fn).Flags &(1<<((((NU8) 1))&31)))!=0);
						LA14: ;
						if (!LOC13) goto LA15;
						memset((void*)LOC17, 0, sizeof(LOC17));
						LOC17[0] = getprocheader_262519(result, ((NU8) 0));
						LOC17[1] = tofilelinecol_196103((*result).Info);
						message = nsuFormatOpenArray(((NimStringDesc*) &TMP3042), LOC17, 2);
						localerror_196955((*fn).Info, ((NU16) 4), message);
					}
					LA15: ;
					goto BeforeRet;
				}
				break;
				case ((NU8) 2):
				{
					localerror_196955((*fn).Info, ((NU16) 66), (*(*fn).Name).S);
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
			result = nextidentiter_234156((&it), (*scope).Symbols);
		} LA2: ;
	}
	result = NIM_NIL;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(tsym224846*, searchforproc_308414)(tcontext289021* c, tscope224840* scope, tsym224846* fn) {
	tsym224846* result;
	result = 0;
	result = searchforprocnew_308328(c, scope, fn);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_procfindInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_procfindDatInit)(void) {
}

