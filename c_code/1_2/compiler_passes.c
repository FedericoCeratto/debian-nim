/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tsym265826 Tsym265826;
typedef struct Tnode265794 Tnode265794;
typedef struct Tpass313014 Tpass313014;
typedef struct Tpasscontext313002 Tpasscontext313002;
typedef struct Trodreader304021 Trodreader304021;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct Tllstream255204 Tllstream255204;
typedef struct Tparsers290026 Tparsers290026;
typedef struct Tparser279202 Tparser279202;
typedef struct Tlexer258174 Tlexer258174;
typedef struct Tbaselexer256015 Tbaselexer256015;
typedef struct Tlineinfo187336 Tlineinfo187336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttoken258170 Ttoken258170;
typedef struct Tident195012 Tident195012;
typedef struct Tidobj195006 Tidobj195006;
typedef struct Ttypeseq265828 Ttypeseq265828;
typedef struct Tscope265820 Tscope265820;
typedef struct TY265927 TY265927;
typedef struct Tstrtable265798 Tstrtable265798;
typedef struct Tsymseq265796 Tsymseq265796;
typedef struct Ttype265832 Ttype265832;
typedef struct Tloc265808 Tloc265808;
typedef struct Ropeobj175006 Ropeobj175006;
typedef struct Tlib265812 Tlib265812;
typedef struct TY134602 TY134602;
typedef struct Tnodeseq265788 Tnodeseq265788;
typedef struct TY364746 TY364746;
typedef struct TY265917 TY265917;
typedef struct Tindex304019 Tindex304019;
typedef struct Tiitable272167 Tiitable272167;
typedef struct Tiipairseq272165 Tiipairseq272165;
typedef struct Table304054 Table304054;
typedef struct Keyvaluepairseq304057 Keyvaluepairseq304057;
typedef struct Memfile302202 Memfile302202;
typedef struct Tinstantiation265816 Tinstantiation265816;
typedef struct Tlistentry145010 Tlistentry145010;
typedef struct Tiipair272163 Tiipair272163;
typedef struct Keyvaluepair304060 Keyvaluepair304060;
typedef N_NIMCALL_PTR(Tsym265826*, TY313074) (Tsym265826* m0, NI32 fileidx0);
typedef N_NIMCALL_PTR(Tnode265794*, TY313079) (Tsym265826* m0, NI32 fileidx0);
typedef N_NIMCALL_PTR(Tpasscontext313002*, Tpassopen313006) (Tsym265826* module0);
typedef N_NIMCALL_PTR(Tpasscontext313002*, Tpassopencached313008) (Tsym265826* module0, Trodreader304021* rd0);
typedef N_NIMCALL_PTR(Tnode265794*, Tpassprocess313012) (Tpasscontext313002* p0, Tnode265794* toplevelstmt0);
typedef N_NIMCALL_PTR(Tnode265794*, Tpassclose313010) (Tpasscontext313002* p0, Tnode265794* n0);
struct Tpass313014 {
Tpassopen313006 Field0;
Tpassopencached313008 Field1;
Tpassprocess313012 Field2;
Tpassclose313010 Field3;
};
typedef Tpass313014 TY313165[10];
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
struct  Tpasscontext313002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef NU8 Tparserkind290004;
struct  Tbaselexer256015  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream255204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
typedef NU16 Tmsgkind187002;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo187336 info0, Tmsgkind187002 msg0, NimStringDesc* arg0, void* ClEnv);
void* ClEnv;
} Terrorhandler258172;
struct  Tlexer258174  {
  Tbaselexer256015 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler258172 errorhandler;
};
typedef NU8 Ttoktype258016;
typedef NU8 Tnumericalbase258168;
struct  Ttoken258170  {
Ttoktype258016 toktype;
NI indent;
Tident195012* ident;
NI64 inumber;
NF fnumber;
Tnumericalbase258168 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tparser279202  {
NI currind;
NIM_BOOL firsttok;
NIM_BOOL strongspaces;
Tlexer258174 lex;
Ttoken258170 tok;
NI inpragma;
NI insemistmtlist;
};
struct  Tparsers290026  {
Tparserkind290004 skin;
Tparser279202 parser;
};
typedef Tpasscontext313002* Tpasscontextarray313160[10];
struct  Tidobj195006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind265435;
struct  Tstrtable265798  {
NI counter;
Tsymseq265796* data;
};
typedef NU8 Tmagic265525;
struct  Tlineinfo187336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Tsymflag265184Set;
typedef NU32 Toption166009Set;
typedef NU8 Tlockind265800;
typedef NU8 Tstorageloc265804;
typedef NU16 Tlocflag265802Set;
struct  Tloc265808  {
Tlockind265800 k;
Tstorageloc265804 s;
Tlocflag265802Set flags;
Ttype265832* t;
Ropeobj175006* r;
Ropeobj175006* heaproot;
};
struct  Tsym265826  {
  Tidobj195006 Sup;
Tsymkind265435 kind;
union{
struct {Ttypeseq265828* typeinstcache;
Tscope265820* typscope;
} S1;
struct {TY265927* procinstcache;
Tsym265826* gcunsafetyreason;
} S2;
struct {TY265927* usedgenerics;
Tstrtable265798 tab;
} S3;
struct {Tsym265826* guard;
NI bitsize;
} S4;
} kindU;
Tmagic265525 magic;
Ttype265832* typ;
Tident195012* name;
Tlineinfo187336 info;
Tsym265826* owner;
Tsymflag265184Set flags;
Tnode265794* ast;
Toption166009Set options;
NI position;
NI offset;
Tloc265808 loc;
Tlib265812* annex;
Tnode265794* constraint;
};
typedef NU8 Filemode12409;
typedef NU8 Tsymflag265184;
typedef NU8 Tnodekind265020;
typedef NU16 Tnodeflag265427Set;
struct  Tnode265794  {
Ttype265832* typ;
Tlineinfo187336 info;
Tnodeflag265427Set flags;
Tnodekind265020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym265826* sym;
} S4;
struct {Tident195012* ident;
} S5;
struct {Tnodeseq265788* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 Tllstreamkind255202;
struct  Tllstream255204  {
  TNimObject Sup;
Tllstreamkind255202 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
typedef NU8 Ttypekind265244;
typedef NU8 Tcallingconvention265002;
typedef NU32 Ttypeflag265431Set;
struct  Ttype265832  {
  Tidobj195006 Sup;
Ttypekind265244 kind;
Tcallingconvention265002 callconv;
Ttypeflag265431Set flags;
Ttypeseq265828* sons;
Tnode265794* n;
Tsym265826* owner;
Tsym265826* sym;
Tsym265826* destructor;
Tsym265826* deepcopy;
Tsym265826* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc265808 loc;
};
struct TY364746 {
Tnode265794* Field0;
Tnode265794* Field1;
};
typedef NU8 Treasonforrecompile304002;
struct  Tiitable272167  {
NI counter;
Tiipairseq272165* data;
};
struct  Tindex304019  {
NI lastidxkey;
NI lastidxval;
Tiitable272167 tab;
NimStringDesc* r;
NI offset;
};
struct  Table304054  {
Keyvaluepairseq304057* data;
NI counter;
};
struct  Memfile302202  {
void* mem;
NI size;
NI fhandle;
NI maphandle;
NIM_BOOL wasopened;
};
struct  Trodreader304021  {
  TNimObject Sup;
NI pos;
NCSTRING s;
Toption166009Set options;
Treasonforrecompile304002 reason;
TY265917* moddeps;
TY265917* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex304019 index;
Tindex304019 imports;
NI readerindex;
NI line;
NI moduleid;
Table304054 syms;
Memfile302202 memfile;
Tsymseq265796* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tident195012  {
  Tidobj195006 Sup;
NimStringDesc* s;
Tident195012* next;
NI h;
};
struct  Tscope265820  {
NI depthlevel;
Tstrtable265798 symbols;
Tscope265820* parent;
};
struct  Ropeobj175006  {
  TNimObject Sup;
Ropeobj175006* left;
Ropeobj175006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry145010  {
  TNimObject Sup;
Tlistentry145010* prev;
Tlistentry145010* next;
};
typedef NU8 Tlibkind265810;
struct  Tlib265812  {
  Tlistentry145010 Sup;
Tlibkind265810 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj175006* name;
Tnode265794* path;
};
struct  Tiipair272163  {
NI key;
NI val;
};
struct Keyvaluepair304060 {
NI Field0;
NI Field1;
Tsym265826* Field2;
};
struct  Tinstantiation265816  {
Tsym265826* sym;
Ttypeseq265828* concretetypes;
TY265917* usedby;
NI compilesid;
};
struct TY134602 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct Ttypeseq265828 {
  TGenericSeq Sup;
  Ttype265832* data[SEQ_DECL_SIZE];
};
struct TY265927 {
  TGenericSeq Sup;
  Tinstantiation265816* data[SEQ_DECL_SIZE];
};
struct Tsymseq265796 {
  TGenericSeq Sup;
  Tsym265826* data[SEQ_DECL_SIZE];
};
struct Tnodeseq265788 {
  TGenericSeq Sup;
  Tnode265794* data[SEQ_DECL_SIZE];
};
struct TY265917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Tiipairseq272165 {
  TGenericSeq Sup;
  Tiipair272163 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq304057 {
  TGenericSeq Sup;
  Keyvaluepair304060 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest0, TNimType* typ0);
N_NIMCALL(void, openpasses_313238_2355241294)(Tpasscontext313002** a0, Tsym265826* module0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_188401_155036129)(NI32 fileidx0);
N_NIMCALL(Tllstream255204*, llstreamopen_255242_597494479)(NimStringDesc* filename0, Filemode12409 mode0);
N_NIMCALL(void, rawmessage_190612_155036129)(Tmsgkind187002 msg0, NimStringDesc* arg0);
N_NIMCALL(void, openparsers_290032_4241778752)(Tparsers290026* p0, NI32 fileidx0, Tllstream255204* inputstream0);
N_NIMCALL(void, processimplicits_313470_2355241294)(TY134602* implicits0, Tnodekind265020 nodekind0, Tpasscontext313002** a0);
N_NIMCALL(Tnode265794*, newnodei_267248_850551059)(Tnodekind265020 kind0, Tlineinfo187336 info0);
N_NIMCALL(Tnode265794*, newstrnode_266677_850551059)(Tnodekind265020 kind0, NimStringDesc* strval0);
N_NIMCALL(void, addson_267807_850551059)(Tnode265794* father0, Tnode265794* son0);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_313351_2355241294)(Tnode265794* n0, Tpasscontext313002** a0);
N_NIMCALL(Tnode265794*, parsetoplevelstmt_290046_4241778752)(Tparsers290026* p0);
N_NIMCALL(void, add_266135_850551059)(Tnode265794* father0, Tnode265794* son0);
N_NIMCALL(void, closeparsers_290038_4241778752)(Tparsers290026* p0);
N_NIMCALL(void, closepasses_313317_2355241294)(Tpasscontext313002** a0);
N_NIMCALL(void, idsynchronizationpoint_264432_644355110)(NI idrange0);
N_NIMCALL(void, openpassescached_313271_2355241294)(Tpasscontext313002** a0, Tsym265826* module0, Trodreader304021* rd0);
N_NIMCALL(Tnode265794*, loadinitsection_304083_1724185294)(Trodreader304021* r0);
N_NIMCALL(NI, sonslen_268351_850551059)(Tnode265794* n0);
N_NIMCALL(void, processtoplevelstmtcached_313394_2355241294)(Tnode265794* n0, Tpasscontext313002** a0);
N_NIMCALL(void, closepassescached_313428_2355241294)(Tpasscontext313002** a0);
N_NIMCALL(void, carrypass_313184_2355241294)(Tpass313014* p0, Tsym265826* module0, TY364746 m0, TY364746* Result);
TY313074 gimportmodule_313078_2355241294;
TY313079 gincludefile_313083_2355241294;
TY313165 gpasses_313166_2355241294;
NI gpasseslen_313167_2355241294;
extern TNimType NTI3408; /* RootObj */
TNimType NTI313002; /* TPassContext */
extern TNimType NTI130; /* bool */
extern TNimType NTI290026; /* TParsers */
extern Tlineinfo187336 gcmdlineinfo_188045_155036129;
extern TY134602* implicitimports_166248_2607990831;
extern TY134602* implicitincludes_166266_2607990831;

N_NIMCALL(void, openpasses_313238_2355241294)(Tpasscontext313002** a0, Tsym265826* module0) {
	{
		NI i_313254_2355241294;
		NI HEX3Atmp_313263_2355241294;
		NI res_313266_2355241294;
		i_313254_2355241294 = (NI)0;
		HEX3Atmp_313263_2355241294 = (NI)0;
		HEX3Atmp_313263_2355241294 = (NI)(gpasseslen_313167_2355241294 - ((NI) 1));
		res_313266_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_313266_2355241294 <= HEX3Atmp_313263_2355241294)) goto LA3;
				i_313254_2355241294 = res_313266_2355241294;
				{
					if (!!(gpasses_313166_2355241294[(i_313254_2355241294)- 0].Field0 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a0[(i_313254_2355241294)- 0]), gpasses_313166_2355241294[(i_313254_2355241294)- 0].Field0(module0));
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a0[(i_313254_2355241294)- 0]), NIM_NIL);
				}
				LA4: ;
				res_313266_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_313351_2355241294)(Tnode265794* n0, Tpasscontext313002** a0) {
	NIM_BOOL result0;
	Tnode265794* m0;
{	result0 = (NIM_BOOL)0;
	m0 = n0;
	{
		NI i_313369_2355241294;
		NI HEX3Atmp_313386_2355241294;
		NI res_313389_2355241294;
		i_313369_2355241294 = (NI)0;
		HEX3Atmp_313386_2355241294 = (NI)0;
		HEX3Atmp_313386_2355241294 = (NI)(gpasseslen_313167_2355241294 - ((NI) 1));
		res_313389_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_313389_2355241294 <= HEX3Atmp_313386_2355241294)) goto LA3;
				i_313369_2355241294 = res_313389_2355241294;
				{
					if (!!(gpasses_313166_2355241294[(i_313369_2355241294)- 0].Field2 == 0)) goto LA6;
					m0 = gpasses_313166_2355241294[(i_313369_2355241294)- 0].Field2(a0[(i_313369_2355241294)- 0], m0);
					{
						if (!m0 == 0) goto LA10;
						result0 = NIM_FALSE;
						goto BeforeRet;
					}
					LA10: ;
				}
				LA6: ;
				res_313389_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = NIM_TRUE;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, processimplicits_313470_2355241294)(TY134602* implicits0, Tnodekind265020 nodekind0, Tpasscontext313002** a0) {
	{
		NimStringDesc* module_313485_2355241294;
		NI i_313492_2355241294;
		NI L_313494_2355241294;
		module_313485_2355241294 = (NimStringDesc*)0;
		i_313492_2355241294 = ((NI) 0);
		L_313494_2355241294 = (implicits0 ? implicits0->Sup.len : 0);
		{
			while (1) {
				Tnode265794* importstmt0;
				Tnode265794* str0;
				if (!(i_313492_2355241294 < L_313494_2355241294)) goto LA3;
				module_313485_2355241294 = implicits0->data[i_313492_2355241294];
				importstmt0 = newnodei_267248_850551059(nodekind0, gcmdlineinfo_188045_155036129);
				str0 = newstrnode_266677_850551059(((Tnodekind265020) 20), module_313485_2355241294);
				(*str0).info = gcmdlineinfo_188045_155036129;
				addson_267807_850551059(importstmt0, str0);
				{
					NIM_BOOL LOC6;
					LOC6 = (NIM_BOOL)0;
					LOC6 = processtoplevelstmt_313351_2355241294(importstmt0, a0);
					if (!!(LOC6)) goto LA7;
					goto LA1;
				}
				LA7: ;
				i_313492_2355241294 += ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
}

N_NIMCALL(void, closepasses_313317_2355241294)(Tpasscontext313002** a0) {
	Tnode265794* m0;
	m0 = NIM_NIL;
	{
		NI i_313333_2355241294;
		NI HEX3Atmp_313343_2355241294;
		NI res_313346_2355241294;
		i_313333_2355241294 = (NI)0;
		HEX3Atmp_313343_2355241294 = (NI)0;
		HEX3Atmp_313343_2355241294 = (NI)(gpasseslen_313167_2355241294 - ((NI) 1));
		res_313346_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_313346_2355241294 <= HEX3Atmp_313343_2355241294)) goto LA3;
				i_313333_2355241294 = res_313346_2355241294;
				{
					if (!!(gpasses_313166_2355241294[(i_313333_2355241294)- 0].Field3 == 0)) goto LA6;
					m0 = gpasses_313166_2355241294[(i_313333_2355241294)- 0].Field3(a0[(i_313333_2355241294)- 0], m0);
				}
				LA6: ;
				unsureAsgnRef((void**) (&a0[(i_313333_2355241294)- 0]), NIM_NIL);
				res_313346_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, openpassescached_313271_2355241294)(Tpasscontext313002** a0, Tsym265826* module0, Trodreader304021* rd0) {
	{
		NI i_313288_2355241294;
		NI HEX3Atmp_313309_2355241294;
		NI res_313312_2355241294;
		i_313288_2355241294 = (NI)0;
		HEX3Atmp_313309_2355241294 = (NI)0;
		HEX3Atmp_313309_2355241294 = (NI)(gpasseslen_313167_2355241294 - ((NI) 1));
		res_313312_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_313312_2355241294 <= HEX3Atmp_313309_2355241294)) goto LA3;
				i_313288_2355241294 = res_313312_2355241294;
				{
					if (!!(gpasses_313166_2355241294[(i_313288_2355241294)- 0].Field1 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a0[(i_313288_2355241294)- 0]), gpasses_313166_2355241294[(i_313288_2355241294)- 0].Field1(module0, rd0));
					{
						if (!!((a0[(i_313288_2355241294)- 0] == NIM_NIL))) goto LA10;
						(*a0[(i_313288_2355241294)- 0]).fromcache = NIM_TRUE;
					}
					LA10: ;
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a0[(i_313288_2355241294)- 0]), NIM_NIL);
				}
				LA4: ;
				res_313312_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processtoplevelstmtcached_313394_2355241294)(Tnode265794* n0, Tpasscontext313002** a0) {
	Tnode265794* m0;
	m0 = n0;
	{
		NI i_313411_2355241294;
		NI HEX3Atmp_313420_2355241294;
		NI res_313423_2355241294;
		i_313411_2355241294 = (NI)0;
		HEX3Atmp_313420_2355241294 = (NI)0;
		HEX3Atmp_313420_2355241294 = (NI)(gpasseslen_313167_2355241294 - ((NI) 1));
		res_313423_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_313423_2355241294 <= HEX3Atmp_313420_2355241294)) goto LA3;
				i_313411_2355241294 = res_313423_2355241294;
				{
					if (!!(gpasses_313166_2355241294[(i_313411_2355241294)- 0].Field1 == 0)) goto LA6;
					m0 = gpasses_313166_2355241294[(i_313411_2355241294)- 0].Field2(a0[(i_313411_2355241294)- 0], m0);
				}
				LA6: ;
				res_313423_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, closepassescached_313428_2355241294)(Tpasscontext313002** a0) {
	Tnode265794* m0;
	m0 = NIM_NIL;
	{
		NI i_313444_2355241294;
		NI HEX3Atmp_313461_2355241294;
		NI res_313464_2355241294;
		i_313444_2355241294 = (NI)0;
		HEX3Atmp_313461_2355241294 = (NI)0;
		HEX3Atmp_313461_2355241294 = (NI)(gpasseslen_313167_2355241294 - ((NI) 1));
		res_313464_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_313464_2355241294 <= HEX3Atmp_313461_2355241294)) goto LA3;
				i_313444_2355241294 = res_313464_2355241294;
				{
					NIM_BOOL LOC6;
					LOC6 = (NIM_BOOL)0;
					LOC6 = !(gpasses_313166_2355241294[(i_313444_2355241294)- 0].Field1 == 0);
					if (!(LOC6)) goto LA7;
					LOC6 = !(gpasses_313166_2355241294[(i_313444_2355241294)- 0].Field3 == 0);
					LA7: ;
					if (!LOC6) goto LA8;
					m0 = gpasses_313166_2355241294[(i_313444_2355241294)- 0].Field3(a0[(i_313444_2355241294)- 0], m0);
				}
				LA8: ;
				unsureAsgnRef((void**) (&a0[(i_313444_2355241294)- 0]), NIM_NIL);
				res_313464_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processmodule_313069_2355241294)(Tsym265826* module0, Tllstream255204* stream0, Trodreader304021* rd0) {
	Tparsers290026 p0;
	Tpasscontextarray313160 a0;
	Tllstream255204* s0;
	NI32 fileidx0;
{	memset((void*)(&p0), 0, sizeof(p0));
	objectInit((&p0), (&NTI290026));
	memset((void*)a0, 0, sizeof(a0));
	s0 = (Tllstream255204*)0;
	fileidx0 = ((NI32) ((*module0).position));
	{
		if (!(rd0 == NIM_NIL)) goto LA3;
		openpasses_313238_2355241294(a0, module0);
		{
			NimStringDesc* filename0;
			if (!(stream0 == NIM_NIL)) goto LA7;
			filename0 = tofullpathconsiderdirty_188401_155036129(fileidx0);
			s0 = llstreamopen_255242_597494479(filename0, ((Filemode12409) 0));
			{
				if (!(s0 == NIM_NIL)) goto LA11;
				rawmessage_190612_155036129(((Tmsgkind187002) 3), filename0);
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
				openparsers_290032_4241778752((&p0), fileidx0, s0);
				{
					if (!!((((*module0).flags &(1U<<((NU)(((Tsymflag265184) 13))&31U)))!=0))) goto LA18;
					processimplicits_313470_2355241294(implicitimports_166248_2607990831, ((Tnodekind265020) 116), a0);
					processimplicits_313470_2355241294(implicitincludes_166266_2607990831, ((Tnodekind265020) 121), a0);
				}
				LA18: ;
				{
					while (1) {
						Tnode265794* n_313560_2355241294;
						n_313560_2355241294 = parsetoplevelstmt_290046_4241778752((&p0));
						{
							if (!((*n_313560_2355241294).kind == ((Tnodekind265020) 1))) goto LA24;
							goto LA20;
						}
						LA24: ;
						{
							Tnode265794* sl0;
							NIM_BOOL LOC36;
							if (!(((*module0).flags &(1U<<((NU)(((Tsymflag265184) 8))&31U)))!=0)) goto LA28;
							sl0 = newnodei_267248_850551059(((Tnodekind265020) 115), (*n_313560_2355241294).info);
							add_266135_850551059(sl0, n_313560_2355241294);
							{
								while (1) {
									Tnode265794* n0;
									n0 = parsetoplevelstmt_290046_4241778752((&p0));
									{
										if (!((*n0).kind == ((Tnodekind265020) 1))) goto LA34;
										goto LA30;
									}
									LA34: ;
									add_266135_850551059(sl0, n0);
								}
							} LA30: ;
							LOC36 = (NIM_BOOL)0;
							LOC36 = processtoplevelstmt_313351_2355241294(sl0, a0);
							goto LA20;
						}
						goto LA26;
						LA28: ;
						{
							NIM_BOOL LOC38;
							LOC38 = (NIM_BOOL)0;
							LOC38 = processtoplevelstmt_313351_2355241294(n_313560_2355241294, a0);
							if (!!(LOC38)) goto LA39;
							goto LA20;
						}
						goto LA26;
						LA39: ;
						LA26: ;
					}
				} LA20: ;
				closeparsers_290038_4241778752((&p0));
				{
					if (!!(((*s0).kind == ((Tllstreamkind255202) 3)))) goto LA43;
					goto LA14;
				}
				LA43: ;
			}
		} LA14: ;
		closepasses_313317_2355241294(a0);
		idsynchronizationpoint_264432_644355110(((NI) 1000));
	}
	goto LA1;
	LA3: ;
	{
		Tnode265794* n0;
		openpassescached_313271_2355241294(a0, module0, rd0);
		n0 = loadinitsection_304083_1724185294(rd0);
		{
			NI i_313622_2355241294;
			NI HEX3Atmp_313633_2355241294;
			NI LOC47;
			NI res_313636_2355241294;
			i_313622_2355241294 = (NI)0;
			HEX3Atmp_313633_2355241294 = (NI)0;
			LOC47 = (NI)0;
			LOC47 = sonslen_268351_850551059(n0);
			HEX3Atmp_313633_2355241294 = (NI)(LOC47 - ((NI) 1));
			res_313636_2355241294 = ((NI) 0);
			{
				while (1) {
					if (!(res_313636_2355241294 <= HEX3Atmp_313633_2355241294)) goto LA49;
					i_313622_2355241294 = res_313636_2355241294;
					processtoplevelstmtcached_313394_2355241294((*n0).kindU.S6.sons->data[i_313622_2355241294], a0);
					res_313636_2355241294 += ((NI) 1);
				} LA49: ;
			}
		}
		closepassescached_313428_2355241294(a0);
	}
	LA1: ;
	}BeforeRet: ;
}

N_NIMCALL(void, registerpass_313172_2355241294)(Tpass313014* p0) {
	gpasses_313166_2355241294[(gpasseslen_313167_2355241294)- 0] = (*p0);
	gpasseslen_313167_2355241294 += ((NI) 1);
}

N_NIMCALL(void, clearpasses_313170_2355241294)(void) {
	gpasseslen_313167_2355241294 = ((NI) 0);
}

N_NIMCALL(NIM_BOOL, astneeded_313094_2355241294)(Tsym265826* s0) {
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
		LOC4 = !(((*(*s0).typ).callconv == ((Tcallingconvention265002) 5)));
		LA7: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*(*s0).ast).kindU.S6.sons->data[((NI) 2)]).kind == ((Tnodekind265020) 1));
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

N_NIMCALL(void, carrypass_313184_2355241294)(Tpass313014* p0, Tsym265826* module0, TY364746 m0, TY364746* Result) {
	Tpasscontext313002* c0;
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

N_NIMCALL(void, carrypasses_313201_2355241294)(Tnode265794* nodes0, Tsym265826* module0, Tpass313014* passes0, NI passes0Len0) {
	TY364746 passdata0;
	memset((void*)(&passdata0), 0, sizeof(passdata0));
	passdata0.Field0 = nodes0;
	{
		Tpass313014 pass_313232_2355241294;
		NI i_313237_2355241294;
		memset((void*)(&pass_313232_2355241294), 0, sizeof(pass_313232_2355241294));
		i_313237_2355241294 = ((NI) 0);
		{
			while (1) {
				TY364746 LOC4;
				if (!(i_313237_2355241294 < passes0Len0)) goto LA3;
				pass_313232_2355241294 = passes0[i_313237_2355241294];
				memset((void*)(&LOC4), 0, sizeof(LOC4));
				carrypass_313184_2355241294((&pass_313232_2355241294), module0, passdata0, (&LOC4));
				passdata0.Field0 = LOC4.Field0;
				passdata0.Field1 = LOC4.Field1;
				i_313237_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_passesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_passesDatInit000)(void) {
static TNimNode TMP1010[1];
NTI313002.size = sizeof(Tpasscontext313002);
NTI313002.kind = 17;
NTI313002.base = (&NTI3408);
NTI313002.flags = 1;
TMP1010[0].kind = 1;
TMP1010[0].offset = offsetof(Tpasscontext313002, fromcache);
TMP1010[0].typ = (&NTI130);
TMP1010[0].name = "fromCache";
NTI313002.node = &TMP1010[0];
}

