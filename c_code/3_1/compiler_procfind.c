/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tsym293834 Tsym293834;
typedef struct Tcontext345020 Tcontext345020;
typedef struct Tscope293828 Tscope293828;
typedef struct Tidentiter300063 Tidentiter300063;
typedef struct Tident200010 Tident200010;
typedef struct Tstrtable293806 Tstrtable293806;
typedef struct Tsymseq293804 Tsymseq293804;
typedef struct Tidobj200004 Tidobj200004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq293836 Ttypeseq293836;
typedef struct TY293929 TY293929;
typedef struct Ttype293840 Ttype293840;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct Tnode293802 Tnode293802;
typedef struct Tloc293816 Tloc293816;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct Tlib293820 Tlib293820;
typedef struct TY293960 TY293960;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tpasscontext342002 Tpasscontext342002;
typedef struct Tproccon345008 Tproccon345008;
typedef struct Intset269030 Intset269030;
typedef struct Trunk269026 Trunk269026;
typedef struct Trunkseq269028 Trunkseq269028;
typedef struct Tlinkedlist147013 Tlinkedlist147013;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Tidtable293850 Tidtable293850;
typedef struct Tidpairseq293848 Tidpairseq293848;
typedef struct Tctx344035 Tctx344035;
typedef struct TY345144 TY345144;
typedef struct Tinstantiation293824 Tinstantiation293824;
typedef struct Tnodeseq293796 Tnodeseq293796;
typedef struct TY293961 TY293961;
typedef struct Tidpair293846 Tidpair293846;
typedef struct TY344241 TY344241;
typedef struct TY193086 TY193086;
typedef struct PprocHEX3Aobjecttype344220 PprocHEX3Aobjecttype344220;
typedef struct TY344260 TY344260;
typedef struct Tinstantiationpair345010 Tinstantiationpair345010;
typedef struct TY344221 TY344221;
typedef struct TY344226 TY344226;
typedef struct TY344261 TY344261;
typedef struct Vmargs344029 Vmargs344029;
typedef struct Tblock344017 Tblock344017;
typedef struct TY344201 TY344201;
struct  Tidentiter300063  {
NI h;
Tident200010* name;
};
struct  Tstrtable293806  {
NI counter;
Tsymseq293804* data;
};
struct  Tscope293828  {
NI depthlevel;
Tstrtable293806 symbols;
Tscope293828* parent;
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
struct  Tidobj200004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind293435;
typedef NU16 Tmagic293524;
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Tsymflag293184Set;
typedef NU32 Toption170009Set;
typedef NU8 Tlockind293808;
typedef NU8 Tstorageloc293812;
typedef NU16 Tlocflag293810Set;
struct  Tloc293816  {
Tlockind293808 k;
Tstorageloc293812 s;
Tlocflag293810Set flags;
Ttype293840* t;
Ropeobj179006* r;
};
struct  Tsym293834  {
  Tidobj200004 Sup;
Tsymkind293435 kind;
union{
struct {Ttypeseq293836* typeinstcache;
} S1;
struct {TY293929* procinstcache;
Tsym293834* gcunsafetyreason;
} S2;
struct {TY293929* usedgenerics;
Tstrtable293806 tab;
} S3;
struct {Tsym293834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic293524 magic;
Ttype293840* typ;
Tident200010* name;
Tlineinfo192336 info;
Tsym293834* owner;
Tsymflag293184Set flags;
Tnode293802* ast;
Toption170009Set options;
NI position;
NI offset;
Tloc293816 loc;
Tlib293820* annex;
Tnode293802* constraint;
};
typedef NU8 Ttypecmpflag325429Set;
typedef NU8 Tparamsequality321060;
typedef NU8 Ttypekind293244;
typedef NU8 Tcallingconvention293002;
typedef NU32 Ttypeflag293431Set;
struct  Ttype293840  {
  Tidobj200004 Sup;
Ttypekind293244 kind;
Tcallingconvention293002 callconv;
Ttypeflag293431Set flags;
Ttypeseq293836* sons;
Tnode293802* n;
Tsym293834* owner;
Tsym293834* sym;
Tsym293834* destructor;
Tsym293834* deepcopy;
Tsym293834* assignment;
TY293960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc293816 loc;
};
typedef NU8 Tsymflag293184;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY194153[2];
typedef NU8 Tprefereddesc321011;
typedef NU16 Tmsgkind192002;
struct  Tident200010  {
  Tidobj200004 Sup;
NimStringDesc* s;
Tident200010* next;
NI h;
};
struct  Tpasscontext342002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset269030  {
NI counter;
NI max;
Trunk269026* head;
Trunkseq269028* data;
};
struct  Tlinkedlist147013  {
Tlistentry147007* head;
Tlistentry147007* tail;
NI counter;
};
struct  Tidtable293850  {
NI counter;
Tidpairseq293848* data;
};
typedef N_NIMCALL_PTR(Tnode293802*, TY345075) (Tcontext345020* c0, Tnode293802* n0);
typedef NU16 Texprflag345012Set;
typedef N_NIMCALL_PTR(Tnode293802*, TY345080) (Tcontext345020* c0, Tnode293802* n0, Texprflag345012Set flags0);
typedef N_NIMCALL_PTR(Tnode293802*, TY345088) (Tcontext345020* c0, Tnode293802* n0, Texprflag345012Set flags0);
typedef N_NIMCALL_PTR(Tnode293802*, TY345096) (Tcontext345020* c0, Tnode293802* n0);
typedef N_NIMCALL_PTR(Tnode293802*, TY345101) (Tcontext345020* c0, Tnode293802* n0, Texprflag345012Set flags0);
typedef N_NIMCALL_PTR(Tnode293802*, TY345109) (Tcontext345020* c0, Tnode293802* n0);
typedef NU32 Tsymkind293435Set;
typedef N_NIMCALL_PTR(Tnode293802*, TY345114) (Tcontext345020* c0, Tnode293802* n0, Tnode293802* norig0, Tsymkind293435Set filter0);
typedef N_NIMCALL_PTR(Ttype293840*, TY345121) (Tcontext345020* c0, Tnode293802* n0, Ttype293840* prev0);
typedef struct {
N_NIMCALL_PTR(Tnode293802*, ClPrc) (Tcontext345020* c0, Tidtable293850 pt0, Tnode293802* n0, void* ClEnv);
void* ClEnv;
} TY345127;
typedef struct {
N_NIMCALL_PTR(Tsym293834*, ClPrc) (Tcontext345020* c0, Tsym293834* fn0, Tidtable293850 pt0, Tlineinfo192336 info0, void* ClEnv);
void* ClEnv;
} TY345133;
typedef NU8 Ttypeattachedop345016;
typedef N_NIMCALL_PTR(Tsym293834*, TY345150) (Tcontext345020* c0, Tsym293834* dc0, Ttype293840* t0, Tlineinfo192336 info0, Ttypeattachedop345016 op0, NI col0);
struct  Tcontext345020  {
  Tpasscontext342002 Sup;
Tsym293834* module;
Tscope293828* currentscope;
Tscope293828* importtable;
Tscope293828* toplevelscope;
Tproccon345008* p;
Tsymseq293804* friendmodules;
NI instcounter;
Intset269030 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq293804* converters;
Tsymseq293804* patterns;
Tlinkedlist147013 optionstack;
Tidtable293850 symmapping;
Tlinkedlist147013 libs;
TY345075 semconstexpr;
TY345080 semexpr;
TY345088 semtryexpr;
TY345096 semtryconstexpr;
TY345101 semoperand;
TY345109 semconstboolexpr;
TY345114 semoverloadedcall;
TY345121 semtypenode;
TY345127 seminferredlambda;
TY345133 semgenerateinstance;
Intset269030 includedfiles;
Tstrtable293806 userpragmas;
Tctx344035* evalcontext;
Intset269030 unknownidents;
TY345144* generics;
NI topstmts;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY345150 insttypeboundop;
Tident200010* selfname;
Tstrtable293806 signatures;
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
typedef NU16 Tnodeflag293427Set;
typedef NU8 Tnodekind293020;
struct  Tnode293802  {
Ttype293840* typ;
Tlineinfo192336 info;
Tnodeflag293427Set flags;
Tnodekind293020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym293834* sym;
} S4;
struct {Tident200010* ident;
} S5;
struct {Tnodeseq293796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Ropeobj179006  {
  TNimObject Sup;
Ropeobj179006* left;
Ropeobj179006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind293818;
struct  Tlib293820  {
  Tlistentry147007 Sup;
Tlibkind293818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj179006* name;
Tnode293802* path;
};
struct TY293961 {
NI Field0;
Tsym293834* Field1;
};
struct  Tproccon345008  {
Tsym293834* owner;
Tsym293834* resultsym;
Tsym293834* selfsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon345008* next;
NIM_BOOL wasforwarded;
Tnode293802* bracketexpr;
};
typedef NI TY29418[16];
struct  Trunk269026  {
Trunk269026* next;
NI key;
TY29418 bits;
};
struct  Tidpair293846  {
Tidobj200004* key;
TNimObject* val;
};
typedef NU8 Tevalmode344019;
typedef NU8 Tsandboxflag344021Set;
struct  Tctx344035  {
  Tpasscontext342002 Sup;
TY344241* code;
TY193086* debug;
Tnode293802* globals;
Tnode293802* constants;
Ttypeseq293836* types;
Tnode293802* currentexceptiona;
Tnode293802* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype344220* prc;
Tsym293834* module;
Tnode293802* callsite;
Tevalmode344019 mode;
Tsandboxflag344021Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo192336 comesfromheuristic;
TY344260* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair345010  {
Tsym293834* genericsym;
Tinstantiation293824* inst;
};
struct  Tinstantiation293824  {
Tsym293834* sym;
Ttypeseq293836* concretetypes;
NI compilesid;
};
typedef NU8 Tslotkind344025;
struct TY344226 {
NIM_BOOL Field0;
Tslotkind344025 Field1;
};
typedef TY344226 TY344229[256];
struct  PprocHEX3Aobjecttype344220  {
TY344221* blocks;
Tsym293834* sym;
TY344229 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs344029* args0, void* ClEnv);
void* ClEnv;
} Vmcallback344031;
struct TY344261 {
NimStringDesc* Field0;
Vmcallback344031 Field1;
};
struct  Tblock344017  {
Tsym293834* label;
TY344201* fixups;
};
struct  Vmargs344029  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode293802* currentexception;
};
struct Tsymseq293804 {
  TGenericSeq Sup;
  Tsym293834* data[SEQ_DECL_SIZE];
};
struct Ttypeseq293836 {
  TGenericSeq Sup;
  Ttype293840* data[SEQ_DECL_SIZE];
};
struct TY293929 {
  TGenericSeq Sup;
  Tinstantiation293824* data[SEQ_DECL_SIZE];
};
struct TY293960 {
  TGenericSeq Sup;
  TY293961 data[SEQ_DECL_SIZE];
};
struct Trunkseq269028 {
  TGenericSeq Sup;
  Trunk269026* data[SEQ_DECL_SIZE];
};
struct Tidpairseq293848 {
  TGenericSeq Sup;
  Tidpair293846 data[SEQ_DECL_SIZE];
};
struct TY345144 {
  TGenericSeq Sup;
  Tinstantiationpair345010 data[SEQ_DECL_SIZE];
};
struct Tnodeseq293796 {
  TGenericSeq Sup;
  Tnode293802* data[SEQ_DECL_SIZE];
};
struct TY344241 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY193086 {
  TGenericSeq Sup;
  Tlineinfo192336 data[SEQ_DECL_SIZE];
};
struct TY344260 {
  TGenericSeq Sup;
  TY344261 data[SEQ_DECL_SIZE];
};
struct TY344221 {
  TGenericSeq Sup;
  Tblock344017 data[SEQ_DECL_SIZE];
};
struct TY344201 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tsym293834*, searchforprocnew_357156_2905935102)(Tcontext345020* c0, Tscope293828* scope0, Tsym293834* fn0);
N_NIMCALL(Tsym293834*, initidentiter_300066_2984716966)(Tidentiter300063* ti0, Tstrtable293806 tab0, Tident200010* s0);
N_NIMCALL(NIM_BOOL, sametype_325633_3876443242)(Ttype293840* a0, Ttype293840* b0, Ttypecmpflag325429Set flags0);
N_NIMCALL(Tparamsequality321060, equalparams_321064_3876443242)(Tnode293802* a0, Tnode293802* b0);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr0, NimStringDesc** a0, NI a0Len0);
N_NIMCALL(NimStringDesc*, getprocheader_321335_3876443242)(Tsym293834* sym0, Tprefereddesc321011 prefer0);
N_NIMCALL(NimStringDesc*, HEX24_193431_155036129)(Tlineinfo192336 info0);
N_NIMCALL(void, localerror_197080_155036129)(Tlineinfo192336 info0, Tmsgkind192002 msg0, NimStringDesc* arg0);
N_NIMCALL(Tsym293834*, nextidentiter_300072_2984716966)(Tidentiter300063* ti0, Tstrtable293806 tab0);
STRING_LITERAL(T2905935102_2, "public implementation \'$1\' has non-public forward declaration i"
"n $2", 67);

N_NIMCALL(Tsym293834*, searchforprocnew_357156_2905935102)(Tcontext345020* c0, Tscope293828* scope0, Tsym293834* fn0) {
	Tsym293834* result0;
	Tidentiter300063 it0;
{	result0 = (Tsym293834*)0;
	memset((void*)(&it0), 0, sizeof(it0));
	result0 = initidentiter_300066_2984716966((&it0), (*scope0).symbols, (*fn0).name);
	{
		while (1) {
			if (!!((result0 == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				Tparamsequality321060 LOC9;
				LOC5 = (NIM_BOOL)0;
				LOC5 = ((258048 &(1U<<((NU)((*result0).kind)&31U)))!=0);
				if (!(LOC5)) goto LA6;
				LOC5 = sametype_325633_3876443242((*result0).typ, (*fn0).typ, 30);
				LA6: ;
				if (!LOC5) goto LA7;
				LOC9 = (Tparamsequality321060)0;
				LOC9 = equalparams_321064_3876443242((*(*result0).typ).n, (*(*fn0).typ).n);
				switch (LOC9) {
				case ((Tparamsequality321060) 1):
				{
					{
						NIM_BOOL LOC13;
						NimStringDesc* message0;
						TY194153 LOC17;
						LOC13 = (NIM_BOOL)0;
						LOC13 = !((((*result0).flags &(1U<<((NU)(((Tsymflag293184) 1))&31U)))!=0));
						if (!(LOC13)) goto LA14;
						LOC13 = (((*fn0).flags &(1U<<((NU)(((Tsymflag293184) 1))&31U)))!=0);
						LA14: ;
						if (!LOC13) goto LA15;
						memset((void*)LOC17, 0, sizeof(LOC17));
						LOC17[0] = getprocheader_321335_3876443242(result0, ((Tprefereddesc321011) 0));
						LOC17[1] = HEX24_193431_155036129((*result0).info);
						message0 = nsuFormatOpenArray(((NimStringDesc*) &T2905935102_2), LOC17, 2);
						localerror_197080_155036129((*fn0).info, ((Tmsgkind192002) 4), message0);
					}
					LA15: ;
					goto BeforeRet;
				}
				break;
				case ((Tparamsequality321060) 2):
				{
					localerror_197080_155036129((*fn0).info, ((Tmsgkind192002) 70), (*(*fn0).name).s);
					goto BeforeRet;
				}
				break;
				case ((Tparamsequality321060) 0):
				{
				}
				break;
				}
			}
			LA7: ;
			result0 = nextidentiter_300072_2984716966((&it0), (*scope0).symbols);
		} LA2: ;
	}
	result0 = NIM_NIL;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tsym293834*, searchforproc_357225_2905935102)(Tcontext345020* c0, Tscope293828* scope0, Tsym293834* fn0) {
	Tsym293834* result0;
	result0 = (Tsym293834*)0;
	result0 = searchforprocnew_357156_2905935102(c0, scope0, fn0);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_procfindInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_procfindDatInit000)(void) {
}

