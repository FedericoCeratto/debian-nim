/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tsym225841 Tsym225841;
typedef struct Tcontext280023 Tcontext280023;
typedef struct Tscope225835 Tscope225835;
typedef struct Tidentiter233141 Tidentiter233141;
typedef struct Tident198021 Tident198021;
typedef struct Tstrtable225813 Tstrtable225813;
typedef struct Tsymseq225811 Tsymseq225811;
typedef struct Tnodeseq225803 Tnodeseq225803;
typedef struct Tidobj198015 Tidobj198015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq225843 Ttypeseq225843;
typedef struct TY225944 TY225944;
typedef struct Ttype225847 Ttype225847;
typedef struct Tlineinfo190352 Tlineinfo190352;
typedef struct Tnode225809 Tnode225809;
typedef struct Tloc225823 Tloc225823;
typedef struct Ropeobj176009 Ropeobj176009;
typedef struct Tlib225827 Tlib225827;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tpasscontext277005 Tpasscontext277005;
typedef struct Tproccon280011 Tproccon280011;
typedef struct Intset222056 Intset222056;
typedef struct Trunk222052 Trunk222052;
typedef struct Trunkseq222054 Trunkseq222054;
typedef struct Tlinkedlist141028 Tlinkedlist141028;
typedef struct Tlistentry141022 Tlistentry141022;
typedef struct Tidtable225859 Tidtable225859;
typedef struct Tidpairseq225857 Tidpairseq225857;
typedef struct Tctx279048 Tctx279048;
typedef struct TY280143 TY280143;
typedef struct Tinstantiation225831 Tinstantiation225831;
typedef struct Tidpair225855 Tidpair225855;
typedef struct TY279254 TY279254;
typedef struct TY191420 TY191420;
typedef struct PprocHEX3Aobjecttype279233 PprocHEX3Aobjecttype279233;
typedef struct TY279273 TY279273;
typedef struct Tinstantiationpair280013 Tinstantiationpair280013;
typedef struct TY225932 TY225932;
typedef struct TY279234 TY279234;
typedef struct TY279239 TY279239;
typedef struct TY279274 TY279274;
typedef struct Vmargs279042 Vmargs279042;
typedef struct Tblock279030 Tblock279030;
typedef struct TY279214 TY279214;
struct  Tidentiter233141  {
NI h;
Tident198021* name;
};
struct  Tstrtable225813  {
NI counter;
Tsymseq225811* data;
};
struct  Tscope225835  {
NI depthlevel;
Tstrtable225813 symbols;
Tnodeseq225803* usingsyms;
Tscope225835* parent;
};
typedef N_NIMCALL_PTR(void, TY3889) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3894) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3889 marker;
TY3894 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj198015  {
  TNimObject Sup;
NI id;
};
struct  Tlineinfo190352  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc225823  {
NU8 k;
NU8 s;
NU16 flags;
Ttype225847* t;
Ropeobj176009* r;
Ropeobj176009* heaproot;
};
struct  Tsym225841  {
  Tidobj198015 Sup;
NU8 kind;
union{
struct {Ttypeseq225843* typeinstcache;
Tscope225835* typscope;
} S1;
struct {TY225944* procinstcache;
Tsym225841* gcunsafetyreason;
} S2;
struct {TY225944* usedgenerics;
Tstrtable225813 tab;
} S3;
struct {Tsym225841* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype225847* typ;
Tident198021* name;
Tlineinfo190352 info;
Tsym225841* owner;
NU32 flags;
Tnode225809* ast;
NU32 options;
NI position;
NI offset;
Tloc225823 loc;
Tlib225827* annex;
Tnode225809* constraint;
};
struct  Ttype225847  {
  Tidobj198015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq225843* sons;
Tnode225809* n;
Tsym225841* owner;
Tsym225841* sym;
Tsym225841* destructor;
Tsym225841* deepcopy;
Tsym225841* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc225823 loc;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY193306[2];
struct  Tident198021  {
  Tidobj198015 Sup;
NimStringDesc* s;
Tident198021* next;
NI h;
};
struct  Tpasscontext277005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset222056  {
NI counter;
NI max;
Trunk222052* head;
Trunkseq222054* data;
};
struct  Tlinkedlist141028  {
Tlistentry141022* head;
Tlistentry141022* tail;
NI counter;
};
struct  Tidtable225859  {
NI counter;
Tidpairseq225857* data;
};
typedef N_NIMCALL_PTR(Tnode225809*, TY280074) (Tcontext280023* c, Tnode225809* n);
typedef N_NIMCALL_PTR(Tnode225809*, TY280079) (Tcontext280023* c, Tnode225809* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode225809*, TY280087) (Tcontext280023* c, Tnode225809* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode225809*, TY280095) (Tcontext280023* c, Tnode225809* n);
typedef N_NIMCALL_PTR(Tnode225809*, TY280100) (Tcontext280023* c, Tnode225809* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode225809*, TY280108) (Tcontext280023* c, Tnode225809* n);
typedef N_NIMCALL_PTR(Tnode225809*, TY280113) (Tcontext280023* c, Tnode225809* n, Tnode225809* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype225847*, TY280120) (Tcontext280023* c, Tnode225809* n, Ttype225847* prev);
typedef struct {
N_NIMCALL_PTR(Tnode225809*, ClPrc) (Tcontext280023* c, Tidtable225859 pt, Tnode225809* n, void* ClEnv);
void* ClEnv;
} TY280126;
typedef struct {
N_NIMCALL_PTR(Tsym225841*, ClPrc) (Tcontext280023* c, Tsym225841* fn, Tidtable225859 pt, Tlineinfo190352 info, void* ClEnv);
void* ClEnv;
} TY280132;
typedef N_NIMCALL_PTR(Tsym225841*, TY280148) (Tcontext280023* c, Tsym225841* dc, Ttype225847* t, Tlineinfo190352 info, NU8 op);
struct  Tcontext280023  {
  Tpasscontext277005 Sup;
Tsym225841* module;
Tscope225835* currentscope;
Tscope225835* importtable;
Tscope225835* toplevelscope;
Tproccon280011* p;
Tsymseq225811* friendmodules;
NI instcounter;
Intset222056 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq225811* converters;
Tsymseq225811* patterns;
Tlinkedlist141028 optionstack;
Tidtable225859 symmapping;
Tlinkedlist141028 libs;
TY280074 semconstexpr;
TY280079 semexpr;
TY280087 semtryexpr;
TY280095 semtryconstexpr;
TY280100 semoperand;
TY280108 semconstboolexpr;
TY280113 semoverloadedcall;
TY280120 semtypenode;
TY280126 seminferredlambda;
TY280132 semgenerateinstance;
Intset222056 includedfiles;
Tstrtable225813 userpragmas;
Tctx279048* evalcontext;
Intset222056 unknownidents;
TY280143* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY280148 insttypeboundop;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tnode225809  {
Ttype225847* typ;
Tlineinfo190352 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym225841* sym;
} S4;
struct {Tident198021* ident;
} S5;
struct {Tnodeseq225803* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Ropeobj176009  {
  TNimObject Sup;
Ropeobj176009* left;
Ropeobj176009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry141022  {
  TNimObject Sup;
Tlistentry141022* prev;
Tlistentry141022* next;
};
struct  Tlib225827  {
  Tlistentry141022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj176009* name;
Tnode225809* path;
};
struct  Tproccon280011  {
Tsym225841* owner;
Tsym225841* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon280011* next;
NIM_BOOL wasforwarded;
Tnode225809* bracketexpr;
};
typedef NI TY31021[16];
struct  Trunk222052  {
Trunk222052* next;
NI key;
TY31021 bits;
};
struct  Tidpair225855  {
Tidobj198015* key;
TNimObject* val;
};
struct  Tctx279048  {
  Tpasscontext277005 Sup;
TY279254* code;
TY191420* debug;
Tnode225809* globals;
Tnode225809* constants;
Ttypeseq225843* types;
Tnode225809* currentexceptiona;
Tnode225809* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype279233* prc;
Tsym225841* module;
Tnode225809* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo190352 comesfromheuristic;
TY279273* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair280013  {
Tsym225841* genericsym;
Tinstantiation225831* inst;
};
struct  Tinstantiation225831  {
Tsym225841* sym;
Ttypeseq225843* concretetypes;
TY225932* usedby;
NI compilesid;
};
struct TY279239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY279239 TY279242[256];
struct  PprocHEX3Aobjecttype279233  {
TY279234* blocks;
Tsym225841* sym;
TY279242 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs279042* args, void* ClEnv);
void* ClEnv;
} Vmcallback279044;
struct TY279274 {
NimStringDesc* Field0;
Vmcallback279044 Field1;
};
struct  Tblock279030  {
Tsym225841* label;
TY279214* fixups;
};
struct  Vmargs279042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode225809* currentexception;
};
struct Tsymseq225811 {
  TGenericSeq Sup;
  Tsym225841* data[SEQ_DECL_SIZE];
};
struct Tnodeseq225803 {
  TGenericSeq Sup;
  Tnode225809* data[SEQ_DECL_SIZE];
};
struct Ttypeseq225843 {
  TGenericSeq Sup;
  Ttype225847* data[SEQ_DECL_SIZE];
};
struct TY225944 {
  TGenericSeq Sup;
  Tinstantiation225831* data[SEQ_DECL_SIZE];
};
struct Trunkseq222054 {
  TGenericSeq Sup;
  Trunk222052* data[SEQ_DECL_SIZE];
};
struct Tidpairseq225857 {
  TGenericSeq Sup;
  Tidpair225855 data[SEQ_DECL_SIZE];
};
struct TY280143 {
  TGenericSeq Sup;
  Tinstantiationpair280013 data[SEQ_DECL_SIZE];
};
struct TY279254 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY191420 {
  TGenericSeq Sup;
  Tlineinfo190352 data[SEQ_DECL_SIZE];
};
struct TY279273 {
  TGenericSeq Sup;
  TY279274 data[SEQ_DECL_SIZE];
};
struct TY225932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY279234 {
  TGenericSeq Sup;
  Tblock279030 data[SEQ_DECL_SIZE];
};
struct TY279214 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tsym225841*, searchforprocnew_296197)(Tcontext280023* c, Tscope225835* scope, Tsym225841* fn);
N_NIMCALL(Tsym225841*, initidentiter_233147)(Tidentiter233141* ti, Tstrtable225813 tab, Tident198021* s);
N_NIMCALL(NIM_BOOL, sametype_260092)(Ttype225847* a, Ttype225847* b, NU8 flags);
N_NIMCALL(NU8, equalparams_255086)(Tnode225809* a, Tnode225809* b);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, getprocheader_255447)(Tsym225841* sym, NU8 prefer);
N_NIMCALL(NimStringDesc*, HEX24_191879)(Tlineinfo190352 info);
N_NIMCALL(void, localerror_196128)(Tlineinfo190352 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tsym225841*, nextidentiter_233156)(Tidentiter233141* ti, Tstrtable225813 tab);
STRING_LITERAL(TMP3287, "public implementation \'$1\' has non-public forward declaration i"
"n $2", 67);

N_NIMCALL(Tsym225841*, searchforprocnew_296197)(Tcontext280023* c, Tscope225835* scope, Tsym225841* fn) {
	Tsym225841* result;
	Tidentiter233141 it;
{	result = 0;
	memset((void*)(&it), 0, sizeof(it));
	result = initidentiter_233147((&it), (*scope).symbols, (*fn).name);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				NU8 LOC9;
				LOC5 = 0;
				LOC5 = ((520192 &(1<<(((*result).kind)&31)))!=0);
				if (!(LOC5)) goto LA6;
				LOC5 = sametype_260092((*result).typ, (*fn).typ, 30);
				LA6: ;
				if (!LOC5) goto LA7;
				LOC9 = 0;
				LOC9 = equalparams_255086((*(*result).typ).n, (*(*fn).typ).n);
				switch (LOC9) {
				case ((NU8) 1):
				{
					{
						NIM_BOOL LOC13;
						NimStringDesc* message;
						TY193306 LOC17;
						LOC13 = 0;
						LOC13 = !((((*result).flags &(1<<((((NU8) 1))&31)))!=0));
						if (!(LOC13)) goto LA14;
						LOC13 = (((*fn).flags &(1<<((((NU8) 1))&31)))!=0);
						LA14: ;
						if (!LOC13) goto LA15;
						memset((void*)LOC17, 0, sizeof(LOC17));
						LOC17[0] = getprocheader_255447(result, ((NU8) 0));
						LOC17[1] = HEX24_191879((*result).info);
						message = nsuFormatOpenArray(((NimStringDesc*) &TMP3287), LOC17, 2);
						localerror_196128((*fn).info, ((NU16) 4), message);
					}
					LA15: ;
					goto BeforeRet;
				}
				break;
				case ((NU8) 2):
				{
					localerror_196128((*fn).info, ((NU16) 70), (*(*fn).name).s);
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
			result = nextidentiter_233156((&it), (*scope).symbols);
		} LA2: ;
	}
	result = NIM_NIL;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym225841*, searchforproc_296278)(Tcontext280023* c, Tscope225835* scope, Tsym225841* fn) {
	Tsym225841* result;
	result = 0;
	result = searchforprocnew_296197(c, scope, fn);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_procfindInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_procfindDatInit000)(void) {
}
