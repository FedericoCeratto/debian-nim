/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tsym290834 Tsym290834;
typedef struct Tnode290802 Tnode290802;
typedef struct Tpass339014 Tpass339014;
typedef struct Tpasscontext339002 Tpasscontext339002;
typedef struct Trodreader330021 Trodreader330021;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct Tllstream280204 Tllstream280204;
typedef struct Tparsers315026 Tparsers315026;
typedef struct Tparser304202 Tparser304202;
typedef struct Tlexer283174 Tlexer283174;
typedef struct Tbaselexer281015 Tbaselexer281015;
typedef struct Tlineinfo189336 Tlineinfo189336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttoken283170 Ttoken283170;
typedef struct Tident197010 Tident197010;
typedef struct Tidobj197004 Tidobj197004;
typedef struct Ttypeseq290836 Ttypeseq290836;
typedef struct TY290929 TY290929;
typedef struct Tstrtable290806 Tstrtable290806;
typedef struct Tsymseq290804 Tsymseq290804;
typedef struct Ttype290840 Ttype290840;
typedef struct Tloc290816 Tloc290816;
typedef struct Ropeobj177006 Ropeobj177006;
typedef struct Tlib290820 Tlib290820;
typedef struct TY134602 TY134602;
typedef struct Tnodeseq290796 Tnodeseq290796;
typedef struct TY290960 TY290960;
typedef struct TY392746 TY392746;
typedef struct TY330033 TY330033;
typedef struct Tindex330019 Tindex330019;
typedef struct Tiitable297142 Tiitable297142;
typedef struct Tiipairseq297140 Tiipairseq297140;
typedef struct Table330054 Table330054;
typedef struct Keyvaluepairseq330057 Keyvaluepairseq330057;
typedef struct Memfile328202 Memfile328202;
typedef struct Tinstantiation290824 Tinstantiation290824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct TY290961 TY290961;
typedef struct Tiipair297138 Tiipair297138;
typedef struct Keyvaluepair330060 Keyvaluepair330060;
typedef N_NIMCALL_PTR(Tsym290834*, TY339069) (Tsym290834* m0, NI32 fileidx0);
typedef N_NIMCALL_PTR(Tnode290802*, TY339074) (Tsym290834* m0, NI32 fileidx0);
typedef N_NIMCALL_PTR(Tpasscontext339002*, Tpassopen339006) (Tsym290834* module0);
typedef N_NIMCALL_PTR(Tpasscontext339002*, Tpassopencached339008) (Tsym290834* module0, Trodreader330021* rd0);
typedef N_NIMCALL_PTR(Tnode290802*, Tpassprocess339012) (Tpasscontext339002* p0, Tnode290802* toplevelstmt0);
typedef N_NIMCALL_PTR(Tnode290802*, Tpassclose339010) (Tpasscontext339002* p0, Tnode290802* n0);
struct Tpass339014 {
Tpassopen339006 Field0;
Tpassopencached339008 Field1;
Tpassprocess339012 Field2;
Tpassclose339010 Field3;
};
typedef Tpass339014 TY339160[10];
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
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext339002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef NU8 Tparserkind315004;
struct  Tbaselexer281015  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream280204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
typedef NU16 Tmsgkind189002;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo189336 info0, Tmsgkind189002 msg0, NimStringDesc* arg0, void* ClEnv);
void* ClEnv;
} Terrorhandler283172;
struct  Tlexer283174  {
  Tbaselexer281015 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler283172 errorhandler;
};
typedef NU8 Ttoktype283016;
typedef NU8 Tnumericalbase283168;
struct  Ttoken283170  {
Ttoktype283016 toktype;
NI indent;
Tident197010* ident;
NI64 inumber;
NF fnumber;
Tnumericalbase283168 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tparser304202  {
NI currind;
NIM_BOOL firsttok;
NIM_BOOL strongspaces;
Tlexer283174 lex;
Ttoken283170 tok;
NI inpragma;
NI insemistmtlist;
};
struct  Tparsers315026  {
Tparserkind315004 skin;
Tparser304202 parser;
};
typedef Tpasscontext339002* Tpasscontextarray339155[10];
struct  Tidobj197004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind290435;
struct  Tstrtable290806  {
NI counter;
Tsymseq290804* data;
};
typedef NU16 Tmagic290524;
struct  Tlineinfo189336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Tsymflag290184Set;
typedef NU32 Toption168009Set;
typedef NU8 Tlockind290808;
typedef NU8 Tstorageloc290812;
typedef NU16 Tlocflag290810Set;
struct  Tloc290816  {
Tlockind290808 k;
Tstorageloc290812 s;
Tlocflag290810Set flags;
Ttype290840* t;
Ropeobj177006* r;
};
struct  Tsym290834  {
  Tidobj197004 Sup;
Tsymkind290435 kind;
union{
struct {Ttypeseq290836* typeinstcache;
} S1;
struct {TY290929* procinstcache;
Tsym290834* gcunsafetyreason;
} S2;
struct {TY290929* usedgenerics;
Tstrtable290806 tab;
} S3;
struct {Tsym290834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic290524 magic;
Ttype290840* typ;
Tident197010* name;
Tlineinfo189336 info;
Tsym290834* owner;
Tsymflag290184Set flags;
Tnode290802* ast;
Toption168009Set options;
NI position;
NI offset;
Tloc290816 loc;
Tlib290820* annex;
Tnode290802* constraint;
};
typedef NU8 Filemode13009;
typedef NU8 Tsymflag290184;
typedef NU8 Tnodekind290020;
typedef NU16 Tnodeflag290427Set;
struct  Tnode290802  {
Ttype290840* typ;
Tlineinfo189336 info;
Tnodeflag290427Set flags;
Tnodekind290020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym290834* sym;
} S4;
struct {Tident197010* ident;
} S5;
struct {Tnodeseq290796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 Tllstreamkind280202;
struct  Tllstream280204  {
  TNimObject Sup;
Tllstreamkind280202 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
typedef NU8 Ttypekind290244;
typedef NU8 Tcallingconvention290002;
typedef NU32 Ttypeflag290431Set;
struct  Ttype290840  {
  Tidobj197004 Sup;
Ttypekind290244 kind;
Tcallingconvention290002 callconv;
Ttypeflag290431Set flags;
Ttypeseq290836* sons;
Tnode290802* n;
Tsym290834* owner;
Tsym290834* sym;
Tsym290834* destructor;
Tsym290834* deepcopy;
Tsym290834* assignment;
TY290960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc290816 loc;
};
struct TY392746 {
Tnode290802* Field0;
Tnode290802* Field1;
};
typedef NU8 Treasonforrecompile330002;
struct  Tiitable297142  {
NI counter;
Tiipairseq297140* data;
};
struct  Tindex330019  {
NI lastidxkey;
NI lastidxval;
Tiitable297142 tab;
NimStringDesc* r;
NI offset;
};
struct  Table330054  {
Keyvaluepairseq330057* data;
NI counter;
};
struct  Memfile328202  {
void* mem;
NI size;
NI fhandle;
NI maphandle;
NIM_BOOL wasopened;
};
struct  Trodreader330021  {
  TNimObject Sup;
NI pos;
NCSTRING s;
Toption168009Set options;
Treasonforrecompile330002 reason;
TY330033* moddeps;
TY330033* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex330019 index;
Tindex330019 imports;
NI readerindex;
NI line;
NI moduleid;
Table330054 syms;
Memfile328202 memfile;
Tsymseq290804* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tident197010  {
  Tidobj197004 Sup;
NimStringDesc* s;
Tident197010* next;
NI h;
};
struct  Ropeobj177006  {
  TNimObject Sup;
Ropeobj177006* left;
Ropeobj177006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind290818;
struct  Tlib290820  {
  Tlistentry147007 Sup;
Tlibkind290818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj177006* name;
Tnode290802* path;
};
struct TY290961 {
NI Field0;
Tsym290834* Field1;
};
struct  Tiipair297138  {
NI key;
NI val;
};
struct Keyvaluepair330060 {
NI Field0;
NI Field1;
Tsym290834* Field2;
};
struct  Tinstantiation290824  {
Tsym290834* sym;
Ttypeseq290836* concretetypes;
NI compilesid;
};
struct TY134602 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct Ttypeseq290836 {
  TGenericSeq Sup;
  Ttype290840* data[SEQ_DECL_SIZE];
};
struct TY290929 {
  TGenericSeq Sup;
  Tinstantiation290824* data[SEQ_DECL_SIZE];
};
struct Tsymseq290804 {
  TGenericSeq Sup;
  Tsym290834* data[SEQ_DECL_SIZE];
};
struct Tnodeseq290796 {
  TGenericSeq Sup;
  Tnode290802* data[SEQ_DECL_SIZE];
};
struct TY290960 {
  TGenericSeq Sup;
  TY290961 data[SEQ_DECL_SIZE];
};
struct TY330033 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Tiipairseq297140 {
  TGenericSeq Sup;
  Tiipair297138 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq330057 {
  TGenericSeq Sup;
  Keyvaluepair330060 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest0, TNimType* typ0);
N_NIMCALL(void, openpasses_339233_2355241294)(Tpasscontext339002** a0, Tsym290834* module0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_190401_155036129)(NI32 fileidx0);
N_NIMCALL(Tllstream280204*, llstreamopen_280242_597494479)(NimStringDesc* filename0, Filemode13009 mode0);
N_NIMCALL(void, rawmessage_192612_155036129)(Tmsgkind189002 msg0, NimStringDesc* arg0);
N_NIMCALL(void, openparsers_315032_4241778752)(Tparsers315026* p0, NI32 fileidx0, Tllstream280204* inputstream0);
N_NIMCALL(void, processimplicits_339465_2355241294)(TY134602* implicits0, Tnodekind290020 nodekind0, Tpasscontext339002** a0);
N_NIMCALL(Tnode290802*, newnodei_292197_850551059)(Tnodekind290020 kind0, Tlineinfo189336 info0);
N_NIMCALL(Tnode290802*, newstrnode_291678_850551059)(Tnodekind290020 kind0, NimStringDesc* strval0);
N_NIMCALL(void, addson_292807_850551059)(Tnode290802* father0, Tnode290802* son0);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_339346_2355241294)(Tnode290802* n0, Tpasscontext339002** a0);
N_NIMCALL(Tnode290802*, parsetoplevelstmt_315046_4241778752)(Tparsers315026* p0);
N_NIMCALL(void, add_291136_850551059)(Tnode290802* father0, Tnode290802* son0);
N_NIMCALL(void, closeparsers_315038_4241778752)(Tparsers315026* p0);
N_NIMCALL(void, closepasses_339312_2355241294)(Tpasscontext339002** a0);
N_NIMCALL(void, idsynchronizationpoint_289420_644355110)(NI idrange0);
N_NIMCALL(void, openpassescached_339266_2355241294)(Tpasscontext339002** a0, Tsym290834* module0, Trodreader330021* rd0);
N_NIMCALL(Tnode290802*, loadinitsection_332822_1724185294)(Trodreader330021* r0);
N_NIMCALL(NI, sonslen_293351_850551059)(Tnode290802* n0);
N_NIMCALL(void, processtoplevelstmtcached_339389_2355241294)(Tnode290802* n0, Tpasscontext339002** a0);
N_NIMCALL(void, closepassescached_339423_2355241294)(Tpasscontext339002** a0);
N_NIMCALL(void, carrypass_339179_2355241294)(Tpass339014 p0, Tsym290834* module0, TY392746 m0, TY392746* Result);
TY339069 gimportmodule_339073_2355241294;
TY339074 gincludefile_339078_2355241294;
TY339160 gpasses_339161_2355241294;
NI gpasseslen_339162_2355241294;
extern TNimType NTI3608; /* RootObj */
TNimType NTI339002; /* TPassContext */
extern TNimType NTI130; /* bool */
extern TNimType NTI315026; /* TParsers */
extern Tlineinfo189336 gcmdlineinfo_190037_155036129;
extern TY134602* implicitimports_168252_2607990831;
extern TY134602* implicitincludes_168270_2607990831;

N_NIMCALL(void, openpasses_339233_2355241294)(Tpasscontext339002** a0, Tsym290834* module0) {
	{
		NI i_339249_2355241294;
		NI HEX3Atmp_339258_2355241294;
		NI res_339261_2355241294;
		i_339249_2355241294 = (NI)0;
		HEX3Atmp_339258_2355241294 = (NI)0;
		HEX3Atmp_339258_2355241294 = (NI)(gpasseslen_339162_2355241294 - ((NI) 1));
		res_339261_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_339261_2355241294 <= HEX3Atmp_339258_2355241294)) goto LA3;
				i_339249_2355241294 = res_339261_2355241294;
				{
					if (!!(gpasses_339161_2355241294[(i_339249_2355241294)- 0].Field0 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a0[(i_339249_2355241294)- 0]), gpasses_339161_2355241294[(i_339249_2355241294)- 0].Field0(module0));
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a0[(i_339249_2355241294)- 0]), NIM_NIL);
				}
				LA4: ;
				res_339261_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_339346_2355241294)(Tnode290802* n0, Tpasscontext339002** a0) {
	NIM_BOOL result0;
	Tnode290802* m0;
{	result0 = (NIM_BOOL)0;
	m0 = n0;
	{
		NI i_339364_2355241294;
		NI HEX3Atmp_339381_2355241294;
		NI res_339384_2355241294;
		i_339364_2355241294 = (NI)0;
		HEX3Atmp_339381_2355241294 = (NI)0;
		HEX3Atmp_339381_2355241294 = (NI)(gpasseslen_339162_2355241294 - ((NI) 1));
		res_339384_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_339384_2355241294 <= HEX3Atmp_339381_2355241294)) goto LA3;
				i_339364_2355241294 = res_339384_2355241294;
				{
					if (!!(gpasses_339161_2355241294[(i_339364_2355241294)- 0].Field2 == 0)) goto LA6;
					m0 = gpasses_339161_2355241294[(i_339364_2355241294)- 0].Field2(a0[(i_339364_2355241294)- 0], m0);
					{
						if (!m0 == 0) goto LA10;
						result0 = NIM_FALSE;
						goto BeforeRet;
					}
					LA10: ;
				}
				LA6: ;
				res_339384_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = NIM_TRUE;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, processimplicits_339465_2355241294)(TY134602* implicits0, Tnodekind290020 nodekind0, Tpasscontext339002** a0) {
	{
		NimStringDesc* module_339480_2355241294;
		NI i_339487_2355241294;
		NI L_339489_2355241294;
		module_339480_2355241294 = (NimStringDesc*)0;
		i_339487_2355241294 = ((NI) 0);
		L_339489_2355241294 = (implicits0 ? implicits0->Sup.len : 0);
		{
			while (1) {
				Tnode290802* importstmt0;
				Tnode290802* str0;
				if (!(i_339487_2355241294 < L_339489_2355241294)) goto LA3;
				module_339480_2355241294 = implicits0->data[i_339487_2355241294];
				importstmt0 = newnodei_292197_850551059(nodekind0, gcmdlineinfo_190037_155036129);
				str0 = newstrnode_291678_850551059(((Tnodekind290020) 20), module_339480_2355241294);
				(*str0).info = gcmdlineinfo_190037_155036129;
				addson_292807_850551059(importstmt0, str0);
				{
					NIM_BOOL LOC6;
					LOC6 = (NIM_BOOL)0;
					LOC6 = processtoplevelstmt_339346_2355241294(importstmt0, a0);
					if (!!(LOC6)) goto LA7;
					goto LA1;
				}
				LA7: ;
				i_339487_2355241294 += ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
}

N_NIMCALL(void, closepasses_339312_2355241294)(Tpasscontext339002** a0) {
	Tnode290802* m0;
	m0 = NIM_NIL;
	{
		NI i_339328_2355241294;
		NI HEX3Atmp_339338_2355241294;
		NI res_339341_2355241294;
		i_339328_2355241294 = (NI)0;
		HEX3Atmp_339338_2355241294 = (NI)0;
		HEX3Atmp_339338_2355241294 = (NI)(gpasseslen_339162_2355241294 - ((NI) 1));
		res_339341_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_339341_2355241294 <= HEX3Atmp_339338_2355241294)) goto LA3;
				i_339328_2355241294 = res_339341_2355241294;
				{
					if (!!(gpasses_339161_2355241294[(i_339328_2355241294)- 0].Field3 == 0)) goto LA6;
					m0 = gpasses_339161_2355241294[(i_339328_2355241294)- 0].Field3(a0[(i_339328_2355241294)- 0], m0);
				}
				LA6: ;
				unsureAsgnRef((void**) (&a0[(i_339328_2355241294)- 0]), NIM_NIL);
				res_339341_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, openpassescached_339266_2355241294)(Tpasscontext339002** a0, Tsym290834* module0, Trodreader330021* rd0) {
	{
		NI i_339283_2355241294;
		NI HEX3Atmp_339304_2355241294;
		NI res_339307_2355241294;
		i_339283_2355241294 = (NI)0;
		HEX3Atmp_339304_2355241294 = (NI)0;
		HEX3Atmp_339304_2355241294 = (NI)(gpasseslen_339162_2355241294 - ((NI) 1));
		res_339307_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_339307_2355241294 <= HEX3Atmp_339304_2355241294)) goto LA3;
				i_339283_2355241294 = res_339307_2355241294;
				{
					if (!!(gpasses_339161_2355241294[(i_339283_2355241294)- 0].Field1 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a0[(i_339283_2355241294)- 0]), gpasses_339161_2355241294[(i_339283_2355241294)- 0].Field1(module0, rd0));
					{
						if (!!((a0[(i_339283_2355241294)- 0] == NIM_NIL))) goto LA10;
						(*a0[(i_339283_2355241294)- 0]).fromcache = NIM_TRUE;
					}
					LA10: ;
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a0[(i_339283_2355241294)- 0]), NIM_NIL);
				}
				LA4: ;
				res_339307_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processtoplevelstmtcached_339389_2355241294)(Tnode290802* n0, Tpasscontext339002** a0) {
	Tnode290802* m0;
	m0 = n0;
	{
		NI i_339406_2355241294;
		NI HEX3Atmp_339415_2355241294;
		NI res_339418_2355241294;
		i_339406_2355241294 = (NI)0;
		HEX3Atmp_339415_2355241294 = (NI)0;
		HEX3Atmp_339415_2355241294 = (NI)(gpasseslen_339162_2355241294 - ((NI) 1));
		res_339418_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_339418_2355241294 <= HEX3Atmp_339415_2355241294)) goto LA3;
				i_339406_2355241294 = res_339418_2355241294;
				{
					if (!!(gpasses_339161_2355241294[(i_339406_2355241294)- 0].Field1 == 0)) goto LA6;
					m0 = gpasses_339161_2355241294[(i_339406_2355241294)- 0].Field2(a0[(i_339406_2355241294)- 0], m0);
				}
				LA6: ;
				res_339418_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, closepassescached_339423_2355241294)(Tpasscontext339002** a0) {
	Tnode290802* m0;
	m0 = NIM_NIL;
	{
		NI i_339439_2355241294;
		NI HEX3Atmp_339456_2355241294;
		NI res_339459_2355241294;
		i_339439_2355241294 = (NI)0;
		HEX3Atmp_339456_2355241294 = (NI)0;
		HEX3Atmp_339456_2355241294 = (NI)(gpasseslen_339162_2355241294 - ((NI) 1));
		res_339459_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_339459_2355241294 <= HEX3Atmp_339456_2355241294)) goto LA3;
				i_339439_2355241294 = res_339459_2355241294;
				{
					NIM_BOOL LOC6;
					LOC6 = (NIM_BOOL)0;
					LOC6 = !(gpasses_339161_2355241294[(i_339439_2355241294)- 0].Field1 == 0);
					if (!(LOC6)) goto LA7;
					LOC6 = !(gpasses_339161_2355241294[(i_339439_2355241294)- 0].Field3 == 0);
					LA7: ;
					if (!LOC6) goto LA8;
					m0 = gpasses_339161_2355241294[(i_339439_2355241294)- 0].Field3(a0[(i_339439_2355241294)- 0], m0);
				}
				LA8: ;
				unsureAsgnRef((void**) (&a0[(i_339439_2355241294)- 0]), NIM_NIL);
				res_339459_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(NIM_BOOL, processmodule_339490_2355241294)(Tsym290834* module0, Tllstream280204* stream0, Trodreader330021* rd0) {
	NIM_BOOL result0;
	Tparsers315026 p0;
	Tpasscontextarray339155 a0;
	Tllstream280204* s0;
	NI32 fileidx0;
{	result0 = (NIM_BOOL)0;
	memset((void*)(&p0), 0, sizeof(p0));
	objectInit((&p0), (&NTI315026));
	memset((void*)a0, 0, sizeof(a0));
	s0 = (Tllstream280204*)0;
	fileidx0 = ((NI32) ((*module0).position));
	{
		if (!(rd0 == NIM_NIL)) goto LA3;
		openpasses_339233_2355241294(a0, module0);
		{
			NimStringDesc* filename0;
			if (!(stream0 == NIM_NIL)) goto LA7;
			filename0 = tofullpathconsiderdirty_190401_155036129(fileidx0);
			s0 = llstreamopen_280242_597494479(filename0, ((Filemode13009) 0));
			{
				if (!(s0 == NIM_NIL)) goto LA11;
				rawmessage_192612_155036129(((Tmsgkind189002) 3), filename0);
				result0 = NIM_FALSE;
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
				openparsers_315032_4241778752((&p0), fileidx0, s0);
				{
					if (!!((((*module0).flags &(1U<<((NU)(((Tsymflag290184) 13))&31U)))!=0))) goto LA18;
					processimplicits_339465_2355241294(implicitimports_168252_2607990831, ((Tnodekind290020) 116), a0);
					processimplicits_339465_2355241294(implicitincludes_168270_2607990831, ((Tnodekind290020) 121), a0);
				}
				LA18: ;
				{
					while (1) {
						Tnode290802* n_339556_2355241294;
						n_339556_2355241294 = parsetoplevelstmt_315046_4241778752((&p0));
						{
							if (!((*n_339556_2355241294).kind == ((Tnodekind290020) 1))) goto LA24;
							goto LA20;
						}
						LA24: ;
						{
							Tnode290802* sl0;
							NIM_BOOL LOC36;
							if (!(((*module0).flags &(1U<<((NU)(((Tsymflag290184) 8))&31U)))!=0)) goto LA28;
							sl0 = newnodei_292197_850551059(((Tnodekind290020) 115), (*n_339556_2355241294).info);
							add_291136_850551059(sl0, n_339556_2355241294);
							{
								while (1) {
									Tnode290802* n0;
									n0 = parsetoplevelstmt_315046_4241778752((&p0));
									{
										if (!((*n0).kind == ((Tnodekind290020) 1))) goto LA34;
										goto LA30;
									}
									LA34: ;
									add_291136_850551059(sl0, n0);
								}
							} LA30: ;
							LOC36 = (NIM_BOOL)0;
							LOC36 = processtoplevelstmt_339346_2355241294(sl0, a0);
							goto LA20;
						}
						goto LA26;
						LA28: ;
						{
							NIM_BOOL LOC38;
							LOC38 = (NIM_BOOL)0;
							LOC38 = processtoplevelstmt_339346_2355241294(n_339556_2355241294, a0);
							if (!!(LOC38)) goto LA39;
							goto LA20;
						}
						goto LA26;
						LA39: ;
						LA26: ;
					}
				} LA20: ;
				closeparsers_315038_4241778752((&p0));
				{
					if (!!(((*s0).kind == ((Tllstreamkind280202) 3)))) goto LA43;
					goto LA14;
				}
				LA43: ;
			}
		} LA14: ;
		closepasses_339312_2355241294(a0);
		idsynchronizationpoint_289420_644355110(((NI) 1000));
	}
	goto LA1;
	LA3: ;
	{
		Tnode290802* n0;
		openpassescached_339266_2355241294(a0, module0, rd0);
		n0 = loadinitsection_332822_1724185294(rd0);
		{
			NI i_339618_2355241294;
			NI HEX3Atmp_339630_2355241294;
			NI LOC47;
			NI res_339633_2355241294;
			i_339618_2355241294 = (NI)0;
			HEX3Atmp_339630_2355241294 = (NI)0;
			LOC47 = (NI)0;
			LOC47 = sonslen_293351_850551059(n0);
			HEX3Atmp_339630_2355241294 = (NI)(LOC47 - ((NI) 1));
			res_339633_2355241294 = ((NI) 0);
			{
				while (1) {
					if (!(res_339633_2355241294 <= HEX3Atmp_339630_2355241294)) goto LA49;
					i_339618_2355241294 = res_339633_2355241294;
					processtoplevelstmtcached_339389_2355241294((*n0).kindU.S6.sons->data[i_339618_2355241294], a0);
					res_339633_2355241294 += ((NI) 1);
				} LA49: ;
			}
		}
		closepassescached_339423_2355241294(a0);
	}
	LA1: ;
	result0 = NIM_TRUE;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, registerpass_339167_2355241294)(Tpass339014 p0) {
	gpasses_339161_2355241294[(gpasseslen_339162_2355241294)- 0] = p0;
	gpasseslen_339162_2355241294 += ((NI) 1);
}

N_NIMCALL(void, clearpasses_339165_2355241294)(void) {
	gpasseslen_339162_2355241294 = ((NI) 0);
}

N_NIMCALL(NIM_BOOL, astneeded_339089_2355241294)(Tsym290834* s0) {
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
		LOC4 = !(((*(*s0).typ).callconv == ((Tcallingconvention290002) 5)));
		LA7: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*(*s0).ast).kindU.S6.sons->data[((NI) 2)]).kind == ((Tnodekind290020) 1));
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

N_NIMCALL(void, carrypass_339179_2355241294)(Tpass339014 p0, Tsym290834* module0, TY392746 m0, TY392746* Result) {
	Tpasscontext339002* c0;
	c0 = p0.Field0(module0);
	unsureAsgnRef((void**) (&(*Result).Field0), p0.Field2(c0, m0.Field0));
	{
		if (!!((p0.Field3 == NIM_NIL))) goto LA3;
		unsureAsgnRef((void**) (&(*Result).Field1), p0.Field3(c0, m0.Field1));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) (&(*Result).Field1), m0.Field1);
	}
	LA1: ;
}

N_NIMCALL(void, carrypasses_339196_2355241294)(Tnode290802* nodes0, Tsym290834* module0, Tpass339014* passes0, NI passes0Len0) {
	TY392746 passdata0;
	memset((void*)(&passdata0), 0, sizeof(passdata0));
	passdata0.Field0 = nodes0;
	{
		Tpass339014 pass_339227_2355241294;
		NI i_339232_2355241294;
		memset((void*)(&pass_339227_2355241294), 0, sizeof(pass_339227_2355241294));
		i_339232_2355241294 = ((NI) 0);
		{
			while (1) {
				TY392746 LOC4;
				if (!(i_339232_2355241294 < passes0Len0)) goto LA3;
				pass_339227_2355241294 = passes0[i_339232_2355241294];
				memset((void*)(&LOC4), 0, sizeof(LOC4));
				carrypass_339179_2355241294(pass_339227_2355241294, module0, passdata0, (&LOC4));
				passdata0.Field0 = LOC4.Field0;
				passdata0.Field1 = LOC4.Field1;
				i_339232_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_passesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_passesDatInit000)(void) {
static TNimNode T2355241294_0[1];
NTI339002.size = sizeof(Tpasscontext339002);
NTI339002.kind = 17;
NTI339002.base = (&NTI3608);
NTI339002.flags = 1;
T2355241294_0[0].kind = 1;
T2355241294_0[0].offset = offsetof(Tpasscontext339002, fromcache);
T2355241294_0[0].typ = (&NTI130);
T2355241294_0[0].name = "fromCache";
NTI339002.node = &T2355241294_0[0];
}

