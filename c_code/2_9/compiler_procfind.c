/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tsym264826 Tsym264826;
typedef struct Tcontext315020 Tcontext315020;
typedef struct Tscope264820 Tscope264820;
typedef struct Tidentiter271088 Tidentiter271088;
typedef struct Tident194012 Tident194012;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct Tidobj194006 Tidobj194006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct TY264927 TY264927;
typedef struct Ttype264832 Ttype264832;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct Tnode264794 Tnode264794;
typedef struct Tloc264808 Tloc264808;
typedef struct Ropeobj173006 Ropeobj173006;
typedef struct Tlib264812 Tlib264812;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tpasscontext312002 Tpasscontext312002;
typedef struct Tproccon315008 Tproccon315008;
typedef struct Intset241031 Intset241031;
typedef struct Trunk241027 Trunk241027;
typedef struct Trunkseq241029 Trunkseq241029;
typedef struct Tlinkedlist141016 Tlinkedlist141016;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct Tidtable264844 Tidtable264844;
typedef struct Tidpairseq264842 Tidpairseq264842;
typedef struct Tctx314036 Tctx314036;
typedef struct TY315144 TY315144;
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct Tidpair264840 Tidpair264840;
typedef struct TY314242 TY314242;
typedef struct TY187090 TY187090;
typedef struct PprocHEX3Aobjecttype314221 PprocHEX3Aobjecttype314221;
typedef struct TY314261 TY314261;
typedef struct Tinstantiationpair315010 Tinstantiationpair315010;
typedef struct TY264917 TY264917;
typedef struct TY314222 TY314222;
typedef struct TY314227 TY314227;
typedef struct TY314262 TY314262;
typedef struct Vmargs314030 Vmargs314030;
typedef struct Tblock314018 Tblock314018;
typedef struct TY314202 TY314202;
struct  Tidentiter271088  {
NI h;
Tident194012* name;
};
struct  Tstrtable264798  {
NI counter;
Tsymseq264796* data;
};
struct  Tscope264820  {
NI depthlevel;
Tstrtable264798 symbols;
Tscope264820* parent;
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
struct  Tidobj194006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind264435;
typedef NU8 Tmagic264525;
struct  Tlineinfo186336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Tsymflag264184Set;
typedef NU32 Toption164009Set;
typedef NU8 Tlockind264800;
typedef NU8 Tstorageloc264804;
typedef NU16 Tlocflag264802Set;
struct  Tloc264808  {
Tlockind264800 k;
Tstorageloc264804 s;
Tlocflag264802Set flags;
Ttype264832* t;
Ropeobj173006* r;
Ropeobj173006* heaproot;
};
struct  Tsym264826  {
  Tidobj194006 Sup;
Tsymkind264435 kind;
union{
struct {Ttypeseq264828* typeinstcache;
Tscope264820* typscope;
} S1;
struct {TY264927* procinstcache;
Tsym264826* gcunsafetyreason;
} S2;
struct {TY264927* usedgenerics;
Tstrtable264798 tab;
} S3;
struct {Tsym264826* guard;
NI bitsize;
} S4;
} kindU;
Tmagic264525 magic;
Ttype264832* typ;
Tident194012* name;
Tlineinfo186336 info;
Tsym264826* owner;
Tsymflag264184Set flags;
Tnode264794* ast;
Toption164009Set options;
NI position;
NI offset;
Tloc264808 loc;
Tlib264812* annex;
Tnode264794* constraint;
};
typedef NU8 Ttypecmpflag295625Set;
typedef NU8 Tparamsequality291060;
typedef NU8 Ttypekind264244;
typedef NU8 Tcallingconvention264002;
typedef NU32 Ttypeflag264431Set;
struct  Ttype264832  {
  Tidobj194006 Sup;
Ttypekind264244 kind;
Tcallingconvention264002 callconv;
Ttypeflag264431Set flags;
Ttypeseq264828* sons;
Tnode264794* n;
Tsym264826* owner;
Tsym264826* sym;
Tsym264826* destructor;
Tsym264826* deepcopy;
Tsym264826* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc264808 loc;
};
typedef NU8 Tsymflag264184;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY188153[2];
typedef NU8 Tprefereddesc291011;
typedef NU16 Tmsgkind186002;
struct  Tident194012  {
  Tidobj194006 Sup;
NimStringDesc* s;
Tident194012* next;
NI h;
};
struct  Tpasscontext312002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset241031  {
NI counter;
NI max;
Trunk241027* head;
Trunkseq241029* data;
};
struct  Tlinkedlist141016  {
Tlistentry141010* head;
Tlistentry141010* tail;
NI counter;
};
struct  Tidtable264844  {
NI counter;
Tidpairseq264842* data;
};
typedef N_NIMCALL_PTR(Tnode264794*, TY315075) (Tcontext315020* c0, Tnode264794* n0);
typedef NU16 Texprflag315012Set;
typedef N_NIMCALL_PTR(Tnode264794*, TY315080) (Tcontext315020* c0, Tnode264794* n0, Texprflag315012Set flags0);
typedef N_NIMCALL_PTR(Tnode264794*, TY315088) (Tcontext315020* c0, Tnode264794* n0, Texprflag315012Set flags0);
typedef N_NIMCALL_PTR(Tnode264794*, TY315096) (Tcontext315020* c0, Tnode264794* n0);
typedef N_NIMCALL_PTR(Tnode264794*, TY315101) (Tcontext315020* c0, Tnode264794* n0, Texprflag315012Set flags0);
typedef N_NIMCALL_PTR(Tnode264794*, TY315109) (Tcontext315020* c0, Tnode264794* n0);
typedef NU32 Tsymkind264435Set;
typedef N_NIMCALL_PTR(Tnode264794*, TY315114) (Tcontext315020* c0, Tnode264794* n0, Tnode264794* norig0, Tsymkind264435Set filter0);
typedef N_NIMCALL_PTR(Ttype264832*, TY315121) (Tcontext315020* c0, Tnode264794* n0, Ttype264832* prev0);
typedef struct {
N_NIMCALL_PTR(Tnode264794*, ClPrc) (Tcontext315020* c0, Tidtable264844 pt0, Tnode264794* n0, void* ClEnv);
void* ClEnv;
} TY315127;
typedef struct {
N_NIMCALL_PTR(Tsym264826*, ClPrc) (Tcontext315020* c0, Tsym264826* fn0, Tidtable264844 pt0, Tlineinfo186336 info0, void* ClEnv);
void* ClEnv;
} TY315133;
typedef NU8 Ttypeattachedop315016;
typedef N_NIMCALL_PTR(Tsym264826*, TY315149) (Tcontext315020* c0, Tsym264826* dc0, Ttype264832* t0, Tlineinfo186336 info0, Ttypeattachedop315016 op0);
struct  Tcontext315020  {
  Tpasscontext312002 Sup;
Tsym264826* module;
Tscope264820* currentscope;
Tscope264820* importtable;
Tscope264820* toplevelscope;
Tproccon315008* p;
Tsymseq264796* friendmodules;
NI instcounter;
Intset241031 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq264796* converters;
Tsymseq264796* patterns;
Tlinkedlist141016 optionstack;
Tidtable264844 symmapping;
Tlinkedlist141016 libs;
TY315075 semconstexpr;
TY315080 semexpr;
TY315088 semtryexpr;
TY315096 semtryconstexpr;
TY315101 semoperand;
TY315109 semconstboolexpr;
TY315114 semoverloadedcall;
TY315121 semtypenode;
TY315127 seminferredlambda;
TY315133 semgenerateinstance;
Intset241031 includedfiles;
Tstrtable264798 userpragmas;
Tctx314036* evalcontext;
Intset241031 unknownidents;
TY315144* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY315149 insttypeboundop;
Tident194012* selfname;
Tstrtable264798 signatures;
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
typedef NU16 Tnodeflag264427Set;
typedef NU8 Tnodekind264020;
struct  Tnode264794  {
Ttype264832* typ;
Tlineinfo186336 info;
Tnodeflag264427Set flags;
Tnodekind264020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym264826* sym;
} S4;
struct {Tident194012* ident;
} S5;
struct {Tnodeseq264788* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Ropeobj173006  {
  TNimObject Sup;
Ropeobj173006* left;
Ropeobj173006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
};
typedef NU8 Tlibkind264810;
struct  Tlib264812  {
  Tlistentry141010 Sup;
Tlibkind264810 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj173006* name;
Tnode264794* path;
};
struct  Tproccon315008  {
Tsym264826* owner;
Tsym264826* resultsym;
Tsym264826* selfsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon315008* next;
NIM_BOOL wasforwarded;
Tnode264794* bracketexpr;
};
typedef NI TY30019[8];
struct  Trunk241027  {
Trunk241027* next;
NI key;
TY30019 bits;
};
struct  Tidpair264840  {
Tidobj194006* key;
TNimObject* val;
};
typedef NU8 Tevalmode314020;
typedef NU8 Tsandboxflag314022Set;
struct  Tctx314036  {
  Tpasscontext312002 Sup;
TY314242* code;
TY187090* debug;
Tnode264794* globals;
Tnode264794* constants;
Ttypeseq264828* types;
Tnode264794* currentexceptiona;
Tnode264794* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype314221* prc;
Tsym264826* module;
Tnode264794* callsite;
Tevalmode314020 mode;
Tsandboxflag314022Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo186336 comesfromheuristic;
TY314261* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair315010  {
Tsym264826* genericsym;
Tinstantiation264816* inst;
};
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
};
typedef NU8 Tslotkind314026;
struct TY314227 {
NIM_BOOL Field0;
Tslotkind314026 Field1;
};
typedef TY314227 TY314230[256];
struct  PprocHEX3Aobjecttype314221  {
TY314222* blocks;
Tsym264826* sym;
TY314230 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs314030* args0, void* ClEnv);
void* ClEnv;
} Vmcallback314032;
struct TY314262 {
NimStringDesc* Field0;
Vmcallback314032 Field1;
};
struct  Tblock314018  {
Tsym264826* label;
TY314202* fixups;
};
struct  Vmargs314030  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode264794* currentexception;
};
struct Tsymseq264796 {
  TGenericSeq Sup;
  Tsym264826* data[SEQ_DECL_SIZE];
};
struct Ttypeseq264828 {
  TGenericSeq Sup;
  Ttype264832* data[SEQ_DECL_SIZE];
};
struct TY264927 {
  TGenericSeq Sup;
  Tinstantiation264816* data[SEQ_DECL_SIZE];
};
struct Trunkseq241029 {
  TGenericSeq Sup;
  Trunk241027* data[SEQ_DECL_SIZE];
};
struct Tidpairseq264842 {
  TGenericSeq Sup;
  Tidpair264840 data[SEQ_DECL_SIZE];
};
struct TY315144 {
  TGenericSeq Sup;
  Tinstantiationpair315010 data[SEQ_DECL_SIZE];
};
struct Tnodeseq264788 {
  TGenericSeq Sup;
  Tnode264794* data[SEQ_DECL_SIZE];
};
struct TY314242 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY187090 {
  TGenericSeq Sup;
  Tlineinfo186336 data[SEQ_DECL_SIZE];
};
struct TY314261 {
  TGenericSeq Sup;
  TY314262 data[SEQ_DECL_SIZE];
};
struct TY264917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY314222 {
  TGenericSeq Sup;
  Tblock314018 data[SEQ_DECL_SIZE];
};
struct TY314202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tsym264826*, searchforprocnew_326157_2905935102)(Tcontext315020* c0, Tscope264820* scope0, Tsym264826* fn0);
N_NIMCALL(Tsym264826*, initidentiter_271091_2984716966)(Tidentiter271088* ti0, Tstrtable264798 tab0, Tident194012* s0);
N_NIMCALL(NIM_BOOL, sametype_295829_3876443242)(Ttype264832* a0, Ttype264832* b0, Ttypecmpflag295625Set flags0);
N_NIMCALL(Tparamsequality291060, equalparams_291064_3876443242)(Tnode264794* a0, Tnode264794* b0);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr0, NimStringDesc** a0, NI a0Len0);
N_NIMCALL(NimStringDesc*, getprocheader_291335_3876443242)(Tsym264826* sym0, Tprefereddesc291011 prefer0);
N_NIMCALL(NimStringDesc*, HEX24_187431_155036129)(Tlineinfo186336 info0);
N_NIMCALL(void, localerror_191080_155036129)(Tlineinfo186336 info0, Tmsgkind186002 msg0, NimStringDesc* arg0);
N_NIMCALL(Tsym264826*, nextidentiter_271097_2984716966)(Tidentiter271088* ti0, Tstrtable264798 tab0);
STRING_LITERAL(TMP3493, "public implementation \'$1\' has non-public forward declaration i"
"n $2", 67);

N_NIMCALL(Tsym264826*, searchforprocnew_326157_2905935102)(Tcontext315020* c0, Tscope264820* scope0, Tsym264826* fn0) {
	Tsym264826* result0;
	Tidentiter271088 it0;
{	result0 = (Tsym264826*)0;
	memset((void*)(&it0), 0, sizeof(it0));
	result0 = initidentiter_271091_2984716966((&it0), (*scope0).symbols, (*fn0).name);
	{
		while (1) {
			if (!!((result0 == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				Tparamsequality291060 LOC9;
				LOC5 = (NIM_BOOL)0;
				LOC5 = ((258048 &(1U<<((NU)((*result0).kind)&31U)))!=0);
				if (!(LOC5)) goto LA6;
				LOC5 = sametype_295829_3876443242((*result0).typ, (*fn0).typ, 30);
				LA6: ;
				if (!LOC5) goto LA7;
				LOC9 = (Tparamsequality291060)0;
				LOC9 = equalparams_291064_3876443242((*(*result0).typ).n, (*(*fn0).typ).n);
				switch (LOC9) {
				case ((Tparamsequality291060) 1):
				{
					{
						NIM_BOOL LOC13;
						NimStringDesc* message0;
						TY188153 LOC17;
						LOC13 = (NIM_BOOL)0;
						LOC13 = !((((*result0).flags &(1U<<((NU)(((Tsymflag264184) 1))&31U)))!=0));
						if (!(LOC13)) goto LA14;
						LOC13 = (((*fn0).flags &(1U<<((NU)(((Tsymflag264184) 1))&31U)))!=0);
						LA14: ;
						if (!LOC13) goto LA15;
						memset((void*)LOC17, 0, sizeof(LOC17));
						LOC17[0] = getprocheader_291335_3876443242(result0, ((Tprefereddesc291011) 0));
						LOC17[1] = HEX24_187431_155036129((*result0).info);
						message0 = nsuFormatOpenArray(((NimStringDesc*) &TMP3493), LOC17, 2);
						localerror_191080_155036129((*fn0).info, ((Tmsgkind186002) 4), message0);
					}
					LA15: ;
					goto BeforeRet;
				}
				break;
				case ((Tparamsequality291060) 2):
				{
					localerror_191080_155036129((*fn0).info, ((Tmsgkind186002) 70), (*(*fn0).name).s);
					goto BeforeRet;
				}
				break;
				case ((Tparamsequality291060) 0):
				{
				}
				break;
				}
			}
			LA7: ;
			result0 = nextidentiter_271097_2984716966((&it0), (*scope0).symbols);
		} LA2: ;
	}
	result0 = NIM_NIL;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tsym264826*, searchforproc_326226_2905935102)(Tcontext315020* c0, Tscope264820* scope0, Tsym264826* fn0) {
	Tsym264826* result0;
	result0 = (Tsym264826*)0;
	result0 = searchforprocnew_326157_2905935102(c0, scope0, fn0);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_procfindInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_procfindDatInit000)(void) {
}

