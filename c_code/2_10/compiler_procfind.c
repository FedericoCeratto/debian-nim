/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tsym294834 Tsym294834;
typedef struct Tcontext346020 Tcontext346020;
typedef struct Tscope294828 Tscope294828;
typedef struct Tidentiter301063 Tidentiter301063;
typedef struct Tident201010 Tident201010;
typedef struct Tstrtable294806 Tstrtable294806;
typedef struct Tsymseq294804 Tsymseq294804;
typedef struct Tidobj201004 Tidobj201004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq294836 Ttypeseq294836;
typedef struct TY294929 TY294929;
typedef struct Ttype294840 Ttype294840;
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct Tnode294802 Tnode294802;
typedef struct Tloc294816 Tloc294816;
typedef struct Ropeobj180006 Ropeobj180006;
typedef struct Tlib294820 Tlib294820;
typedef struct TY294960 TY294960;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tpasscontext343002 Tpasscontext343002;
typedef struct Tproccon346008 Tproccon346008;
typedef struct Intset270030 Intset270030;
typedef struct Trunk270026 Trunk270026;
typedef struct Trunkseq270028 Trunkseq270028;
typedef struct Tlinkedlist148013 Tlinkedlist148013;
typedef struct Tlistentry148007 Tlistentry148007;
typedef struct Tidtable294850 Tidtable294850;
typedef struct Tidpairseq294848 Tidpairseq294848;
typedef struct Tctx345035 Tctx345035;
typedef struct TY346144 TY346144;
typedef struct Tinstantiation294824 Tinstantiation294824;
typedef struct Tnodeseq294796 Tnodeseq294796;
typedef struct TY294961 TY294961;
typedef struct Tidpair294846 Tidpair294846;
typedef struct TY345241 TY345241;
typedef struct TY194083 TY194083;
typedef struct PprocHEX3Aobjecttype345220 PprocHEX3Aobjecttype345220;
typedef struct TY345260 TY345260;
typedef struct Tinstantiationpair346010 Tinstantiationpair346010;
typedef struct TY345221 TY345221;
typedef struct TY345226 TY345226;
typedef struct TY345261 TY345261;
typedef struct Vmargs345029 Vmargs345029;
typedef struct Tblock345017 Tblock345017;
typedef struct TY345201 TY345201;
struct  Tidentiter301063  {
NI h;
Tident201010* name;
};
struct  Tstrtable294806  {
NI counter;
Tsymseq294804* data;
};
struct  Tscope294828  {
NI depthlevel;
Tstrtable294806 symbols;
Tscope294828* parent;
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
typedef NU8 Ttypecmpflag326429Set;
typedef NU8 Tparamsequality322060;
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
typedef NU8 Tsymflag294184;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY195153[2];
typedef NU8 Tprefereddesc322011;
typedef NU16 Tmsgkind193002;
struct  Tident201010  {
  Tidobj201004 Sup;
NimStringDesc* s;
Tident201010* next;
NI h;
};
struct  Tpasscontext343002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset270030  {
NI counter;
NI max;
Trunk270026* head;
Trunkseq270028* data;
};
struct  Tlinkedlist148013  {
Tlistentry148007* head;
Tlistentry148007* tail;
NI counter;
};
struct  Tidtable294850  {
NI counter;
Tidpairseq294848* data;
};
typedef N_NIMCALL_PTR(Tnode294802*, TY346075) (Tcontext346020* c0, Tnode294802* n0);
typedef NU16 Texprflag346012Set;
typedef N_NIMCALL_PTR(Tnode294802*, TY346080) (Tcontext346020* c0, Tnode294802* n0, Texprflag346012Set flags0);
typedef N_NIMCALL_PTR(Tnode294802*, TY346088) (Tcontext346020* c0, Tnode294802* n0, Texprflag346012Set flags0);
typedef N_NIMCALL_PTR(Tnode294802*, TY346096) (Tcontext346020* c0, Tnode294802* n0);
typedef N_NIMCALL_PTR(Tnode294802*, TY346101) (Tcontext346020* c0, Tnode294802* n0, Texprflag346012Set flags0);
typedef N_NIMCALL_PTR(Tnode294802*, TY346109) (Tcontext346020* c0, Tnode294802* n0);
typedef NU32 Tsymkind294435Set;
typedef N_NIMCALL_PTR(Tnode294802*, TY346114) (Tcontext346020* c0, Tnode294802* n0, Tnode294802* norig0, Tsymkind294435Set filter0);
typedef N_NIMCALL_PTR(Ttype294840*, TY346121) (Tcontext346020* c0, Tnode294802* n0, Ttype294840* prev0);
typedef struct {
N_NIMCALL_PTR(Tnode294802*, ClPrc) (Tcontext346020* c0, Tidtable294850 pt0, Tnode294802* n0, void* ClEnv);
void* ClEnv;
} TY346127;
typedef struct {
N_NIMCALL_PTR(Tsym294834*, ClPrc) (Tcontext346020* c0, Tsym294834* fn0, Tidtable294850 pt0, Tlineinfo193336 info0, void* ClEnv);
void* ClEnv;
} TY346133;
typedef NU8 Ttypeattachedop346016;
typedef N_NIMCALL_PTR(Tsym294834*, TY346150) (Tcontext346020* c0, Tsym294834* dc0, Ttype294840* t0, Tlineinfo193336 info0, Ttypeattachedop346016 op0, NI col0);
struct  Tcontext346020  {
  Tpasscontext343002 Sup;
Tsym294834* module;
Tscope294828* currentscope;
Tscope294828* importtable;
Tscope294828* toplevelscope;
Tproccon346008* p;
Tsymseq294804* friendmodules;
NI instcounter;
Intset270030 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq294804* converters;
Tsymseq294804* patterns;
Tlinkedlist148013 optionstack;
Tidtable294850 symmapping;
Tlinkedlist148013 libs;
TY346075 semconstexpr;
TY346080 semexpr;
TY346088 semtryexpr;
TY346096 semtryconstexpr;
TY346101 semoperand;
TY346109 semconstboolexpr;
TY346114 semoverloadedcall;
TY346121 semtypenode;
TY346127 seminferredlambda;
TY346133 semgenerateinstance;
Intset270030 includedfiles;
Tstrtable294806 userpragmas;
Tctx345035* evalcontext;
Intset270030 unknownidents;
TY346144* generics;
NI topstmts;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY346150 insttypeboundop;
Tident201010* selfname;
Tstrtable294806 signatures;
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
struct TY294961 {
NI Field0;
Tsym294834* Field1;
};
struct  Tproccon346008  {
Tsym294834* owner;
Tsym294834* resultsym;
Tsym294834* selfsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon346008* next;
NIM_BOOL wasforwarded;
Tnode294802* bracketexpr;
};
typedef NI TY29419[8];
struct  Trunk270026  {
Trunk270026* next;
NI key;
TY29419 bits;
};
struct  Tidpair294846  {
Tidobj201004* key;
TNimObject* val;
};
typedef NU8 Tevalmode345019;
typedef NU8 Tsandboxflag345021Set;
struct  Tctx345035  {
  Tpasscontext343002 Sup;
TY345241* code;
TY194083* debug;
Tnode294802* globals;
Tnode294802* constants;
Ttypeseq294836* types;
Tnode294802* currentexceptiona;
Tnode294802* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype345220* prc;
Tsym294834* module;
Tnode294802* callsite;
Tevalmode345019 mode;
Tsandboxflag345021Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo193336 comesfromheuristic;
TY345260* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair346010  {
Tsym294834* genericsym;
Tinstantiation294824* inst;
};
struct  Tinstantiation294824  {
Tsym294834* sym;
Ttypeseq294836* concretetypes;
NI compilesid;
};
typedef NU8 Tslotkind345025;
struct TY345226 {
NIM_BOOL Field0;
Tslotkind345025 Field1;
};
typedef TY345226 TY345229[256];
struct  PprocHEX3Aobjecttype345220  {
TY345221* blocks;
Tsym294834* sym;
TY345229 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs345029* args0, void* ClEnv);
void* ClEnv;
} Vmcallback345031;
struct TY345261 {
NimStringDesc* Field0;
Vmcallback345031 Field1;
};
struct  Tblock345017  {
Tsym294834* label;
TY345201* fixups;
};
struct  Vmargs345029  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode294802* currentexception;
};
struct Tsymseq294804 {
  TGenericSeq Sup;
  Tsym294834* data[SEQ_DECL_SIZE];
};
struct Ttypeseq294836 {
  TGenericSeq Sup;
  Ttype294840* data[SEQ_DECL_SIZE];
};
struct TY294929 {
  TGenericSeq Sup;
  Tinstantiation294824* data[SEQ_DECL_SIZE];
};
struct TY294960 {
  TGenericSeq Sup;
  TY294961 data[SEQ_DECL_SIZE];
};
struct Trunkseq270028 {
  TGenericSeq Sup;
  Trunk270026* data[SEQ_DECL_SIZE];
};
struct Tidpairseq294848 {
  TGenericSeq Sup;
  Tidpair294846 data[SEQ_DECL_SIZE];
};
struct TY346144 {
  TGenericSeq Sup;
  Tinstantiationpair346010 data[SEQ_DECL_SIZE];
};
struct Tnodeseq294796 {
  TGenericSeq Sup;
  Tnode294802* data[SEQ_DECL_SIZE];
};
struct TY345241 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY194083 {
  TGenericSeq Sup;
  Tlineinfo193336 data[SEQ_DECL_SIZE];
};
struct TY345260 {
  TGenericSeq Sup;
  TY345261 data[SEQ_DECL_SIZE];
};
struct TY345221 {
  TGenericSeq Sup;
  Tblock345017 data[SEQ_DECL_SIZE];
};
struct TY345201 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tsym294834*, searchforprocnew_358156_2905935102)(Tcontext346020* c0, Tscope294828* scope0, Tsym294834* fn0);
N_NIMCALL(Tsym294834*, initidentiter_301066_2984716966)(Tidentiter301063* ti0, Tstrtable294806 tab0, Tident201010* s0);
N_NIMCALL(NIM_BOOL, sametype_326633_3876443242)(Ttype294840* a0, Ttype294840* b0, Ttypecmpflag326429Set flags0);
N_NIMCALL(Tparamsequality322060, equalparams_322064_3876443242)(Tnode294802* a0, Tnode294802* b0);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr0, NimStringDesc** a0, NI a0Len0);
N_NIMCALL(NimStringDesc*, getprocheader_322335_3876443242)(Tsym294834* sym0, Tprefereddesc322011 prefer0);
N_NIMCALL(NimStringDesc*, HEX24_194431_155036129)(Tlineinfo193336 info0);
N_NIMCALL(void, localerror_198080_155036129)(Tlineinfo193336 info0, Tmsgkind193002 msg0, NimStringDesc* arg0);
N_NIMCALL(Tsym294834*, nextidentiter_301072_2984716966)(Tidentiter301063* ti0, Tstrtable294806 tab0);
STRING_LITERAL(T2905935102_2, "public implementation \'$1\' has non-public forward declaration i"
"n $2", 67);

N_NIMCALL(Tsym294834*, searchforprocnew_358156_2905935102)(Tcontext346020* c0, Tscope294828* scope0, Tsym294834* fn0) {
	Tsym294834* result0;
	Tidentiter301063 it0;
{	result0 = (Tsym294834*)0;
	memset((void*)(&it0), 0, sizeof(it0));
	result0 = initidentiter_301066_2984716966((&it0), (*scope0).symbols, (*fn0).name);
	{
		while (1) {
			if (!!((result0 == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				Tparamsequality322060 LOC9;
				LOC5 = (NIM_BOOL)0;
				LOC5 = ((258048 &(1U<<((NU)((*result0).kind)&31U)))!=0);
				if (!(LOC5)) goto LA6;
				LOC5 = sametype_326633_3876443242((*result0).typ, (*fn0).typ, 30);
				LA6: ;
				if (!LOC5) goto LA7;
				LOC9 = (Tparamsequality322060)0;
				LOC9 = equalparams_322064_3876443242((*(*result0).typ).n, (*(*fn0).typ).n);
				switch (LOC9) {
				case ((Tparamsequality322060) 1):
				{
					{
						NIM_BOOL LOC13;
						NimStringDesc* message0;
						TY195153 LOC17;
						LOC13 = (NIM_BOOL)0;
						LOC13 = !((((*result0).flags &(1U<<((NU)(((Tsymflag294184) 1))&31U)))!=0));
						if (!(LOC13)) goto LA14;
						LOC13 = (((*fn0).flags &(1U<<((NU)(((Tsymflag294184) 1))&31U)))!=0);
						LA14: ;
						if (!LOC13) goto LA15;
						memset((void*)LOC17, 0, sizeof(LOC17));
						LOC17[0] = getprocheader_322335_3876443242(result0, ((Tprefereddesc322011) 0));
						LOC17[1] = HEX24_194431_155036129((*result0).info);
						message0 = nsuFormatOpenArray(((NimStringDesc*) &T2905935102_2), LOC17, 2);
						localerror_198080_155036129((*fn0).info, ((Tmsgkind193002) 4), message0);
					}
					LA15: ;
					goto BeforeRet;
				}
				break;
				case ((Tparamsequality322060) 2):
				{
					localerror_198080_155036129((*fn0).info, ((Tmsgkind193002) 70), (*(*fn0).name).s);
					goto BeforeRet;
				}
				break;
				case ((Tparamsequality322060) 0):
				{
				}
				break;
				}
			}
			LA7: ;
			result0 = nextidentiter_301072_2984716966((&it0), (*scope0).symbols);
		} LA2: ;
	}
	result0 = NIM_NIL;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tsym294834*, searchforproc_358225_2905935102)(Tcontext346020* c0, Tscope294828* scope0, Tsym294834* fn0) {
	Tsym294834* result0;
	result0 = (Tsym294834*)0;
	result0 = searchforprocnew_358156_2905935102(c0, scope0, fn0);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_procfindInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_procfindDatInit000)(void) {
}

