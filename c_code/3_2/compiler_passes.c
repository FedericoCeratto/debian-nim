/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tsym264826 Tsym264826;
typedef struct Tnode264794 Tnode264794;
typedef struct Tpass312014 Tpass312014;
typedef struct Tpasscontext312002 Tpasscontext312002;
typedef struct Trodreader303021 Trodreader303021;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct Tllstream254204 Tllstream254204;
typedef struct Tparsers289026 Tparsers289026;
typedef struct Tparser278202 Tparser278202;
typedef struct Tlexer257174 Tlexer257174;
typedef struct Tbaselexer255015 Tbaselexer255015;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttoken257170 Ttoken257170;
typedef struct Tident194012 Tident194012;
typedef struct Tidobj194006 Tidobj194006;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct Tscope264820 Tscope264820;
typedef struct TY264927 TY264927;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct Ttype264832 Ttype264832;
typedef struct Tloc264808 Tloc264808;
typedef struct Ropeobj173006 Ropeobj173006;
typedef struct Tlib264812 Tlib264812;
typedef struct TY131602 TY131602;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct TY363746 TY363746;
typedef struct TY264917 TY264917;
typedef struct Tindex303019 Tindex303019;
typedef struct Tiitable271167 Tiitable271167;
typedef struct Tiipairseq271165 Tiipairseq271165;
typedef struct Table303054 Table303054;
typedef struct Keyvaluepairseq303057 Keyvaluepairseq303057;
typedef struct Memfile301202 Memfile301202;
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct Tiipair271163 Tiipair271163;
typedef struct Keyvaluepair303060 Keyvaluepair303060;
typedef N_NIMCALL_PTR(Tsym264826*, TY312074) (Tsym264826* m0, NI32 fileidx0);
typedef N_NIMCALL_PTR(Tnode264794*, TY312079) (Tsym264826* m0, NI32 fileidx0);
typedef N_NIMCALL_PTR(Tpasscontext312002*, Tpassopen312006) (Tsym264826* module0);
typedef N_NIMCALL_PTR(Tpasscontext312002*, Tpassopencached312008) (Tsym264826* module0, Trodreader303021* rd0);
typedef N_NIMCALL_PTR(Tnode264794*, Tpassprocess312012) (Tpasscontext312002* p0, Tnode264794* toplevelstmt0);
typedef N_NIMCALL_PTR(Tnode264794*, Tpassclose312010) (Tpasscontext312002* p0, Tnode264794* n0);
struct Tpass312014 {
Tpassopen312006 Field0;
Tpassopencached312008 Field1;
Tpassprocess312012 Field2;
Tpassclose312010 Field3;
};
typedef Tpass312014 TY312165[10];
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext312002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef NU8 Tparserkind289004;
struct  Tbaselexer255015  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream254204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
typedef NU16 Tmsgkind186002;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo186336 info0, Tmsgkind186002 msg0, NimStringDesc* arg0, void* ClEnv);
void* ClEnv;
} Terrorhandler257172;
struct  Tlexer257174  {
  Tbaselexer255015 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler257172 errorhandler;
};
typedef NU8 Ttoktype257016;
typedef NU8 Tnumericalbase257168;
struct  Ttoken257170  {
Ttoktype257016 toktype;
NI indent;
Tident194012* ident;
NI64 inumber;
NF fnumber;
Tnumericalbase257168 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tparser278202  {
NI currind;
NIM_BOOL firsttok;
NIM_BOOL strongspaces;
Tlexer257174 lex;
Ttoken257170 tok;
NI inpragma;
NI insemistmtlist;
};
struct  Tparsers289026  {
Tparserkind289004 skin;
Tparser278202 parser;
};
typedef Tpasscontext312002* Tpasscontextarray312160[10];
struct  Tidobj194006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind264435;
struct  Tstrtable264798  {
NI counter;
Tsymseq264796* data;
};
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
typedef NU8 Filemode12409;
typedef NU8 Tsymflag264184;
typedef NU8 Tnodekind264020;
typedef NU16 Tnodeflag264427Set;
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
typedef NU8 Tllstreamkind254202;
struct  Tllstream254204  {
  TNimObject Sup;
Tllstreamkind254202 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
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
struct TY363746 {
Tnode264794* Field0;
Tnode264794* Field1;
};
typedef NU8 Treasonforrecompile303002;
struct  Tiitable271167  {
NI counter;
Tiipairseq271165* data;
};
struct  Tindex303019  {
NI lastidxkey;
NI lastidxval;
Tiitable271167 tab;
NimStringDesc* r;
NI offset;
};
struct  Table303054  {
Keyvaluepairseq303057* data;
NI counter;
};
struct  Memfile301202  {
void* mem;
NI size;
int handle;
};
struct  Trodreader303021  {
  TNimObject Sup;
NI pos;
NCSTRING s;
Toption164009Set options;
Treasonforrecompile303002 reason;
TY264917* moddeps;
TY264917* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex303019 index;
Tindex303019 imports;
NI readerindex;
NI line;
NI moduleid;
Table303054 syms;
Memfile301202 memfile;
Tsymseq264796* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tident194012  {
  Tidobj194006 Sup;
NimStringDesc* s;
Tident194012* next;
NI h;
};
struct  Tscope264820  {
NI depthlevel;
Tstrtable264798 symbols;
Tscope264820* parent;
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
struct  Tiipair271163  {
NI key;
NI val;
};
struct Keyvaluepair303060 {
NI Field0;
NI Field1;
Tsym264826* Field2;
};
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
};
struct TY131602 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct Ttypeseq264828 {
  TGenericSeq Sup;
  Ttype264832* data[SEQ_DECL_SIZE];
};
struct TY264927 {
  TGenericSeq Sup;
  Tinstantiation264816* data[SEQ_DECL_SIZE];
};
struct Tsymseq264796 {
  TGenericSeq Sup;
  Tsym264826* data[SEQ_DECL_SIZE];
};
struct Tnodeseq264788 {
  TGenericSeq Sup;
  Tnode264794* data[SEQ_DECL_SIZE];
};
struct TY264917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Tiipairseq271165 {
  TGenericSeq Sup;
  Tiipair271163 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq303057 {
  TGenericSeq Sup;
  Keyvaluepair303060 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest0, TNimType* typ0);
N_NIMCALL(void, openpasses_312238_2355241294)(Tpasscontext312002** a0, Tsym264826* module0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_187401_155036129)(NI32 fileidx0);
N_NIMCALL(Tllstream254204*, llstreamopen_254242_597494479)(NimStringDesc* filename0, Filemode12409 mode0);
N_NIMCALL(void, rawmessage_189612_155036129)(Tmsgkind186002 msg0, NimStringDesc* arg0);
N_NIMCALL(void, openparsers_289032_4241778752)(Tparsers289026* p0, NI32 fileidx0, Tllstream254204* inputstream0);
N_NIMCALL(void, processimplicits_312470_2355241294)(TY131602* implicits0, Tnodekind264020 nodekind0, Tpasscontext312002** a0);
N_NIMCALL(Tnode264794*, newnodei_266248_850551059)(Tnodekind264020 kind0, Tlineinfo186336 info0);
N_NIMCALL(Tnode264794*, newstrnode_265677_850551059)(Tnodekind264020 kind0, NimStringDesc* strval0);
N_NIMCALL(void, addson_266807_850551059)(Tnode264794* father0, Tnode264794* son0);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_312351_2355241294)(Tnode264794* n0, Tpasscontext312002** a0);
N_NIMCALL(Tnode264794*, parsetoplevelstmt_289046_4241778752)(Tparsers289026* p0);
N_NIMCALL(void, add_265135_850551059)(Tnode264794* father0, Tnode264794* son0);
N_NIMCALL(void, closeparsers_289038_4241778752)(Tparsers289026* p0);
N_NIMCALL(void, closepasses_312317_2355241294)(Tpasscontext312002** a0);
N_NIMCALL(void, idsynchronizationpoint_263432_644355110)(NI idrange0);
N_NIMCALL(void, openpassescached_312271_2355241294)(Tpasscontext312002** a0, Tsym264826* module0, Trodreader303021* rd0);
N_NIMCALL(Tnode264794*, loadinitsection_303083_1724185294)(Trodreader303021* r0);
N_NIMCALL(NI, sonslen_267351_850551059)(Tnode264794* n0);
N_NIMCALL(void, processtoplevelstmtcached_312394_2355241294)(Tnode264794* n0, Tpasscontext312002** a0);
N_NIMCALL(void, closepassescached_312428_2355241294)(Tpasscontext312002** a0);
N_NIMCALL(void, carrypass_312184_2355241294)(Tpass312014* p0, Tsym264826* module0, TY363746 m0, TY363746* Result);
TY312074 gimportmodule_312078_2355241294;
TY312079 gincludefile_312083_2355241294;
TY312165 gpasses_312166_2355241294;
NI gpasseslen_312167_2355241294;
extern TNimType NTI3408; /* RootObj */
TNimType NTI312002; /* TPassContext */
extern TNimType NTI130; /* bool */
extern TNimType NTI289026; /* TParsers */
extern Tlineinfo186336 gcmdlineinfo_187045_155036129;
extern TY131602* implicitimports_164248_2607990831;
extern TY131602* implicitincludes_164266_2607990831;

N_NIMCALL(void, openpasses_312238_2355241294)(Tpasscontext312002** a0, Tsym264826* module0) {
	{
		NI i_312254_2355241294;
		NI HEX3Atmp_312263_2355241294;
		NI res_312266_2355241294;
		i_312254_2355241294 = (NI)0;
		HEX3Atmp_312263_2355241294 = (NI)0;
		HEX3Atmp_312263_2355241294 = (NI)(gpasseslen_312167_2355241294 - ((NI) 1));
		res_312266_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_312266_2355241294 <= HEX3Atmp_312263_2355241294)) goto LA3;
				i_312254_2355241294 = res_312266_2355241294;
				{
					if (!!(gpasses_312166_2355241294[(i_312254_2355241294)- 0].Field0 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a0[(i_312254_2355241294)- 0]), gpasses_312166_2355241294[(i_312254_2355241294)- 0].Field0(module0));
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a0[(i_312254_2355241294)- 0]), NIM_NIL);
				}
				LA4: ;
				res_312266_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_312351_2355241294)(Tnode264794* n0, Tpasscontext312002** a0) {
	NIM_BOOL result0;
	Tnode264794* m0;
{	result0 = (NIM_BOOL)0;
	m0 = n0;
	{
		NI i_312369_2355241294;
		NI HEX3Atmp_312386_2355241294;
		NI res_312389_2355241294;
		i_312369_2355241294 = (NI)0;
		HEX3Atmp_312386_2355241294 = (NI)0;
		HEX3Atmp_312386_2355241294 = (NI)(gpasseslen_312167_2355241294 - ((NI) 1));
		res_312389_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_312389_2355241294 <= HEX3Atmp_312386_2355241294)) goto LA3;
				i_312369_2355241294 = res_312389_2355241294;
				{
					if (!!(gpasses_312166_2355241294[(i_312369_2355241294)- 0].Field2 == 0)) goto LA6;
					m0 = gpasses_312166_2355241294[(i_312369_2355241294)- 0].Field2(a0[(i_312369_2355241294)- 0], m0);
					{
						if (!m0 == 0) goto LA10;
						result0 = NIM_FALSE;
						goto BeforeRet;
					}
					LA10: ;
				}
				LA6: ;
				res_312389_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = NIM_TRUE;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, processimplicits_312470_2355241294)(TY131602* implicits0, Tnodekind264020 nodekind0, Tpasscontext312002** a0) {
	{
		NimStringDesc* module_312485_2355241294;
		NI i_312492_2355241294;
		NI L_312494_2355241294;
		module_312485_2355241294 = (NimStringDesc*)0;
		i_312492_2355241294 = ((NI) 0);
		L_312494_2355241294 = (implicits0 ? implicits0->Sup.len : 0);
		{
			while (1) {
				Tnode264794* importstmt0;
				Tnode264794* str0;
				if (!(i_312492_2355241294 < L_312494_2355241294)) goto LA3;
				module_312485_2355241294 = implicits0->data[i_312492_2355241294];
				importstmt0 = newnodei_266248_850551059(nodekind0, gcmdlineinfo_187045_155036129);
				str0 = newstrnode_265677_850551059(((Tnodekind264020) 20), module_312485_2355241294);
				(*str0).info = gcmdlineinfo_187045_155036129;
				addson_266807_850551059(importstmt0, str0);
				{
					NIM_BOOL LOC6;
					LOC6 = (NIM_BOOL)0;
					LOC6 = processtoplevelstmt_312351_2355241294(importstmt0, a0);
					if (!!(LOC6)) goto LA7;
					goto LA1;
				}
				LA7: ;
				i_312492_2355241294 += ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
}

N_NIMCALL(void, closepasses_312317_2355241294)(Tpasscontext312002** a0) {
	Tnode264794* m0;
	m0 = NIM_NIL;
	{
		NI i_312333_2355241294;
		NI HEX3Atmp_312343_2355241294;
		NI res_312346_2355241294;
		i_312333_2355241294 = (NI)0;
		HEX3Atmp_312343_2355241294 = (NI)0;
		HEX3Atmp_312343_2355241294 = (NI)(gpasseslen_312167_2355241294 - ((NI) 1));
		res_312346_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_312346_2355241294 <= HEX3Atmp_312343_2355241294)) goto LA3;
				i_312333_2355241294 = res_312346_2355241294;
				{
					if (!!(gpasses_312166_2355241294[(i_312333_2355241294)- 0].Field3 == 0)) goto LA6;
					m0 = gpasses_312166_2355241294[(i_312333_2355241294)- 0].Field3(a0[(i_312333_2355241294)- 0], m0);
				}
				LA6: ;
				unsureAsgnRef((void**) (&a0[(i_312333_2355241294)- 0]), NIM_NIL);
				res_312346_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, openpassescached_312271_2355241294)(Tpasscontext312002** a0, Tsym264826* module0, Trodreader303021* rd0) {
	{
		NI i_312288_2355241294;
		NI HEX3Atmp_312309_2355241294;
		NI res_312312_2355241294;
		i_312288_2355241294 = (NI)0;
		HEX3Atmp_312309_2355241294 = (NI)0;
		HEX3Atmp_312309_2355241294 = (NI)(gpasseslen_312167_2355241294 - ((NI) 1));
		res_312312_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_312312_2355241294 <= HEX3Atmp_312309_2355241294)) goto LA3;
				i_312288_2355241294 = res_312312_2355241294;
				{
					if (!!(gpasses_312166_2355241294[(i_312288_2355241294)- 0].Field1 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a0[(i_312288_2355241294)- 0]), gpasses_312166_2355241294[(i_312288_2355241294)- 0].Field1(module0, rd0));
					{
						if (!!((a0[(i_312288_2355241294)- 0] == NIM_NIL))) goto LA10;
						(*a0[(i_312288_2355241294)- 0]).fromcache = NIM_TRUE;
					}
					LA10: ;
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a0[(i_312288_2355241294)- 0]), NIM_NIL);
				}
				LA4: ;
				res_312312_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processtoplevelstmtcached_312394_2355241294)(Tnode264794* n0, Tpasscontext312002** a0) {
	Tnode264794* m0;
	m0 = n0;
	{
		NI i_312411_2355241294;
		NI HEX3Atmp_312420_2355241294;
		NI res_312423_2355241294;
		i_312411_2355241294 = (NI)0;
		HEX3Atmp_312420_2355241294 = (NI)0;
		HEX3Atmp_312420_2355241294 = (NI)(gpasseslen_312167_2355241294 - ((NI) 1));
		res_312423_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_312423_2355241294 <= HEX3Atmp_312420_2355241294)) goto LA3;
				i_312411_2355241294 = res_312423_2355241294;
				{
					if (!!(gpasses_312166_2355241294[(i_312411_2355241294)- 0].Field1 == 0)) goto LA6;
					m0 = gpasses_312166_2355241294[(i_312411_2355241294)- 0].Field2(a0[(i_312411_2355241294)- 0], m0);
				}
				LA6: ;
				res_312423_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, closepassescached_312428_2355241294)(Tpasscontext312002** a0) {
	Tnode264794* m0;
	m0 = NIM_NIL;
	{
		NI i_312444_2355241294;
		NI HEX3Atmp_312461_2355241294;
		NI res_312464_2355241294;
		i_312444_2355241294 = (NI)0;
		HEX3Atmp_312461_2355241294 = (NI)0;
		HEX3Atmp_312461_2355241294 = (NI)(gpasseslen_312167_2355241294 - ((NI) 1));
		res_312464_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_312464_2355241294 <= HEX3Atmp_312461_2355241294)) goto LA3;
				i_312444_2355241294 = res_312464_2355241294;
				{
					NIM_BOOL LOC6;
					LOC6 = (NIM_BOOL)0;
					LOC6 = !(gpasses_312166_2355241294[(i_312444_2355241294)- 0].Field1 == 0);
					if (!(LOC6)) goto LA7;
					LOC6 = !(gpasses_312166_2355241294[(i_312444_2355241294)- 0].Field3 == 0);
					LA7: ;
					if (!LOC6) goto LA8;
					m0 = gpasses_312166_2355241294[(i_312444_2355241294)- 0].Field3(a0[(i_312444_2355241294)- 0], m0);
				}
				LA8: ;
				unsureAsgnRef((void**) (&a0[(i_312444_2355241294)- 0]), NIM_NIL);
				res_312464_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processmodule_312069_2355241294)(Tsym264826* module0, Tllstream254204* stream0, Trodreader303021* rd0) {
	Tparsers289026 p0;
	Tpasscontextarray312160 a0;
	Tllstream254204* s0;
	NI32 fileidx0;
{	memset((void*)(&p0), 0, sizeof(p0));
	objectInit((&p0), (&NTI289026));
	memset((void*)a0, 0, sizeof(a0));
	s0 = (Tllstream254204*)0;
	fileidx0 = ((NI32) ((*module0).position));
	{
		if (!(rd0 == NIM_NIL)) goto LA3;
		openpasses_312238_2355241294(a0, module0);
		{
			NimStringDesc* filename0;
			if (!(stream0 == NIM_NIL)) goto LA7;
			filename0 = tofullpathconsiderdirty_187401_155036129(fileidx0);
			s0 = llstreamopen_254242_597494479(filename0, ((Filemode12409) 0));
			{
				if (!(s0 == NIM_NIL)) goto LA11;
				rawmessage_189612_155036129(((Tmsgkind186002) 3), filename0);
				goto BeforeRet;
			}
			LA11: ;
		}
		goto LA5;
		LA7: ;
		{
			s0 = stream0;
		}
		LA5: ;
		{
			while (1) {
				openparsers_289032_4241778752((&p0), fileidx0, s0);
				{
					if (!!((((*module0).flags &(1U<<((NU)(((Tsymflag264184) 13))&31U)))!=0))) goto LA18;
					processimplicits_312470_2355241294(implicitimports_164248_2607990831, ((Tnodekind264020) 116), a0);
					processimplicits_312470_2355241294(implicitincludes_164266_2607990831, ((Tnodekind264020) 121), a0);
				}
				LA18: ;
				{
					while (1) {
						Tnode264794* n_312560_2355241294;
						n_312560_2355241294 = parsetoplevelstmt_289046_4241778752((&p0));
						{
							if (!((*n_312560_2355241294).kind == ((Tnodekind264020) 1))) goto LA24;
							goto LA20;
						}
						LA24: ;
						{
							Tnode264794* sl0;
							NIM_BOOL LOC36;
							if (!(((*module0).flags &(1U<<((NU)(((Tsymflag264184) 8))&31U)))!=0)) goto LA28;
							sl0 = newnodei_266248_850551059(((Tnodekind264020) 115), (*n_312560_2355241294).info);
							add_265135_850551059(sl0, n_312560_2355241294);
							{
								while (1) {
									Tnode264794* n0;
									n0 = parsetoplevelstmt_289046_4241778752((&p0));
									{
										if (!((*n0).kind == ((Tnodekind264020) 1))) goto LA34;
										goto LA30;
									}
									LA34: ;
									add_265135_850551059(sl0, n0);
								}
							} LA30: ;
							LOC36 = (NIM_BOOL)0;
							LOC36 = processtoplevelstmt_312351_2355241294(sl0, a0);
							goto LA20;
						}
						goto LA26;
						LA28: ;
						{
							NIM_BOOL LOC38;
							LOC38 = (NIM_BOOL)0;
							LOC38 = processtoplevelstmt_312351_2355241294(n_312560_2355241294, a0);
							if (!!(LOC38)) goto LA39;
							goto LA20;
						}
						goto LA26;
						LA39: ;
						LA26: ;
					}
				} LA20: ;
				closeparsers_289038_4241778752((&p0));
				{
					if (!!(((*s0).kind == ((Tllstreamkind254202) 3)))) goto LA43;
					goto LA14;
				}
				LA43: ;
			}
		} LA14: ;
		closepasses_312317_2355241294(a0);
		idsynchronizationpoint_263432_644355110(((NI) 1000));
	}
	goto LA1;
	LA3: ;
	{
		Tnode264794* n0;
		openpassescached_312271_2355241294(a0, module0, rd0);
		n0 = loadinitsection_303083_1724185294(rd0);
		{
			NI i_312622_2355241294;
			NI HEX3Atmp_312633_2355241294;
			NI LOC47;
			NI res_312636_2355241294;
			i_312622_2355241294 = (NI)0;
			HEX3Atmp_312633_2355241294 = (NI)0;
			LOC47 = (NI)0;
			LOC47 = sonslen_267351_850551059(n0);
			HEX3Atmp_312633_2355241294 = (NI)(LOC47 - ((NI) 1));
			res_312636_2355241294 = ((NI) 0);
			{
				while (1) {
					if (!(res_312636_2355241294 <= HEX3Atmp_312633_2355241294)) goto LA49;
					i_312622_2355241294 = res_312636_2355241294;
					processtoplevelstmtcached_312394_2355241294((*n0).kindU.S6.sons->data[i_312622_2355241294], a0);
					res_312636_2355241294 += ((NI) 1);
				} LA49: ;
			}
		}
		closepassescached_312428_2355241294(a0);
	}
	LA1: ;
	}BeforeRet: ;
}

N_NIMCALL(void, registerpass_312172_2355241294)(Tpass312014* p0) {
	gpasses_312166_2355241294[(gpasseslen_312167_2355241294)- 0] = (*p0);
	gpasseslen_312167_2355241294 += ((NI) 1);
}

N_NIMCALL(void, clearpasses_312170_2355241294)(void) {
	gpasseslen_312167_2355241294 = ((NI) 0);
}

N_NIMCALL(NIM_BOOL, astneeded_312094_2355241294)(Tsym264826* s0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC5;
		LOC3 = (NIM_BOOL)0;
		LOC4 = (NIM_BOOL)0;
		LOC5 = (NIM_BOOL)0;
		LOC5 = ((12288 &(1U<<((NU)((*s0).kind)&31U)))!=0);
		if (!(LOC5)) goto LA6;
		LOC5 = ((8454144 & (*s0).flags) == 0);
		LA6: ;
		LOC4 = LOC5;
		if (!(LOC4)) goto LA7;
		LOC4 = !(((*(*s0).typ).callconv == ((Tcallingconvention264002) 5)));
		LA7: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*(*s0).ast).kindU.S6.sons->data[((NI) 2)]).kind == ((Tnodekind264020) 1));
		LA8: ;
		if (!LOC3) goto LA9;
		result0 = NIM_FALSE;
	}
	goto LA1;
	LA9: ;
	{
		result0 = NIM_TRUE;
	}
	LA1: ;
	return result0;
}

N_NIMCALL(void, carrypass_312184_2355241294)(Tpass312014* p0, Tsym264826* module0, TY363746 m0, TY363746* Result) {
	Tpasscontext312002* c0;
	c0 = (*p0).Field0(module0);
	unsureAsgnRef((void**) (&(*Result).Field0), (*p0).Field2(c0, m0.Field0));
	{
		if (!!(((*p0).Field3 == NIM_NIL))) goto LA3;
		unsureAsgnRef((void**) (&(*Result).Field1), (*p0).Field3(c0, m0.Field1));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) (&(*Result).Field1), m0.Field1);
	}
	LA1: ;
}

N_NIMCALL(void, carrypasses_312201_2355241294)(Tnode264794* nodes0, Tsym264826* module0, Tpass312014* passes0, NI passes0Len0) {
	TY363746 passdata0;
	memset((void*)(&passdata0), 0, sizeof(passdata0));
	passdata0.Field0 = nodes0;
	{
		Tpass312014 pass_312232_2355241294;
		NI i_312237_2355241294;
		memset((void*)(&pass_312232_2355241294), 0, sizeof(pass_312232_2355241294));
		i_312237_2355241294 = ((NI) 0);
		{
			while (1) {
				TY363746 LOC4;
				if (!(i_312237_2355241294 < passes0Len0)) goto LA3;
				pass_312232_2355241294 = passes0[i_312237_2355241294];
				memset((void*)(&LOC4), 0, sizeof(LOC4));
				carrypass_312184_2355241294((&pass_312232_2355241294), module0, passdata0, (&LOC4));
				passdata0.Field0 = LOC4.Field0;
				passdata0.Field1 = LOC4.Field1;
				i_312237_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_passesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_passesDatInit000)(void) {
static TNimNode TMP1000[1];
NTI312002.size = sizeof(Tpasscontext312002);
NTI312002.kind = 17;
NTI312002.base = (&NTI3408);
NTI312002.flags = 1;
TMP1000[0].kind = 1;
TMP1000[0].offset = offsetof(Tpasscontext312002, fromcache);
TMP1000[0].typ = (&NTI130);
TMP1000[0].name = "fromCache";
NTI312002.node = &TMP1000[0];
}

