/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tsym263826 Tsym263826;
typedef struct Tnode263794 Tnode263794;
typedef struct Tpass311014 Tpass311014;
typedef struct Tpasscontext311002 Tpasscontext311002;
typedef struct Trodreader302021 Trodreader302021;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct Tllstream253204 Tllstream253204;
typedef struct Tparsers288026 Tparsers288026;
typedef struct Tparser277202 Tparser277202;
typedef struct Tlexer256174 Tlexer256174;
typedef struct Tbaselexer254015 Tbaselexer254015;
typedef struct Tlineinfo185336 Tlineinfo185336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttoken256170 Ttoken256170;
typedef struct Tident193012 Tident193012;
typedef struct Tidobj193006 Tidobj193006;
typedef struct Ttypeseq263828 Ttypeseq263828;
typedef struct Tscope263820 Tscope263820;
typedef struct TY263927 TY263927;
typedef struct Tstrtable263798 Tstrtable263798;
typedef struct Tsymseq263796 Tsymseq263796;
typedef struct Ttype263832 Ttype263832;
typedef struct Tloc263808 Tloc263808;
typedef struct Ropeobj172006 Ropeobj172006;
typedef struct Tlib263812 Tlib263812;
typedef struct TY131402 TY131402;
typedef struct Tnodeseq263788 Tnodeseq263788;
typedef struct TY362746 TY362746;
typedef struct TY263917 TY263917;
typedef struct Tindex302019 Tindex302019;
typedef struct Tiitable270167 Tiitable270167;
typedef struct Tiipairseq270165 Tiipairseq270165;
typedef struct Table302054 Table302054;
typedef struct Keyvaluepairseq302057 Keyvaluepairseq302057;
typedef struct Memfile300202 Memfile300202;
typedef struct Tinstantiation263816 Tinstantiation263816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct Tiipair270163 Tiipair270163;
typedef struct Keyvaluepair302060 Keyvaluepair302060;
typedef N_NIMCALL_PTR(Tsym263826*, TY311074) (Tsym263826* m0, NI32 fileidx0);
typedef N_NIMCALL_PTR(Tnode263794*, TY311079) (Tsym263826* m0, NI32 fileidx0);
typedef N_NIMCALL_PTR(Tpasscontext311002*, Tpassopen311006) (Tsym263826* module0);
typedef N_NIMCALL_PTR(Tpasscontext311002*, Tpassopencached311008) (Tsym263826* module0, Trodreader302021* rd0);
typedef N_NIMCALL_PTR(Tnode263794*, Tpassprocess311012) (Tpasscontext311002* p0, Tnode263794* toplevelstmt0);
typedef N_NIMCALL_PTR(Tnode263794*, Tpassclose311010) (Tpasscontext311002* p0, Tnode263794* n0);
struct Tpass311014 {
Tpassopen311006 Field0;
Tpassopencached311008 Field1;
Tpassprocess311012 Field2;
Tpassclose311010 Field3;
};
typedef Tpass311014 TY311165[10];
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
struct  Tpasscontext311002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef NU8 Tparserkind288004;
struct  Tbaselexer254015  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream253204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
typedef NU16 Tmsgkind185002;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo185336 info0, Tmsgkind185002 msg0, NimStringDesc* arg0, void* ClEnv);
void* ClEnv;
} Terrorhandler256172;
struct  Tlexer256174  {
  Tbaselexer254015 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler256172 errorhandler;
};
typedef NU8 Ttoktype256016;
typedef NU8 Tnumericalbase256168;
struct  Ttoken256170  {
Ttoktype256016 toktype;
NI indent;
Tident193012* ident;
NI64 inumber;
NF fnumber;
Tnumericalbase256168 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tparser277202  {
NI currind;
NIM_BOOL firsttok;
NIM_BOOL strongspaces;
Tlexer256174 lex;
Ttoken256170 tok;
NI inpragma;
NI insemistmtlist;
};
struct  Tparsers288026  {
Tparserkind288004 skin;
Tparser277202 parser;
};
typedef Tpasscontext311002* Tpasscontextarray311160[10];
struct  Tidobj193006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind263435;
struct  Tstrtable263798  {
NI counter;
Tsymseq263796* data;
};
typedef NU8 Tmagic263525;
struct  Tlineinfo185336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Tsymflag263184Set;
typedef NU32 Toption163009Set;
typedef NU8 Tlockind263800;
typedef NU8 Tstorageloc263804;
typedef NU16 Tlocflag263802Set;
struct  Tloc263808  {
Tlockind263800 k;
Tstorageloc263804 s;
Tlocflag263802Set flags;
Ttype263832* t;
Ropeobj172006* r;
Ropeobj172006* heaproot;
};
struct  Tsym263826  {
  Tidobj193006 Sup;
Tsymkind263435 kind;
union{
struct {Ttypeseq263828* typeinstcache;
Tscope263820* typscope;
} S1;
struct {TY263927* procinstcache;
Tsym263826* gcunsafetyreason;
} S2;
struct {TY263927* usedgenerics;
Tstrtable263798 tab;
} S3;
struct {Tsym263826* guard;
NI bitsize;
} S4;
} kindU;
Tmagic263525 magic;
Ttype263832* typ;
Tident193012* name;
Tlineinfo185336 info;
Tsym263826* owner;
Tsymflag263184Set flags;
Tnode263794* ast;
Toption163009Set options;
NI position;
NI offset;
Tloc263808 loc;
Tlib263812* annex;
Tnode263794* constraint;
};
typedef NU8 Filemode12409;
typedef NU8 Tsymflag263184;
typedef NU8 Tnodekind263020;
typedef NU16 Tnodeflag263427Set;
struct  Tnode263794  {
Ttype263832* typ;
Tlineinfo185336 info;
Tnodeflag263427Set flags;
Tnodekind263020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym263826* sym;
} S4;
struct {Tident193012* ident;
} S5;
struct {Tnodeseq263788* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 Tllstreamkind253202;
struct  Tllstream253204  {
  TNimObject Sup;
Tllstreamkind253202 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
typedef NU8 Ttypekind263244;
typedef NU8 Tcallingconvention263002;
typedef NU32 Ttypeflag263431Set;
struct  Ttype263832  {
  Tidobj193006 Sup;
Ttypekind263244 kind;
Tcallingconvention263002 callconv;
Ttypeflag263431Set flags;
Ttypeseq263828* sons;
Tnode263794* n;
Tsym263826* owner;
Tsym263826* sym;
Tsym263826* destructor;
Tsym263826* deepcopy;
Tsym263826* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc263808 loc;
};
struct TY362746 {
Tnode263794* Field0;
Tnode263794* Field1;
};
typedef NU8 Treasonforrecompile302002;
struct  Tiitable270167  {
NI counter;
Tiipairseq270165* data;
};
struct  Tindex302019  {
NI lastidxkey;
NI lastidxval;
Tiitable270167 tab;
NimStringDesc* r;
NI offset;
};
struct  Table302054  {
Keyvaluepairseq302057* data;
NI counter;
};
struct  Memfile300202  {
void* mem;
NI size;
int handle;
};
struct  Trodreader302021  {
  TNimObject Sup;
NI pos;
NCSTRING s;
Toption163009Set options;
Treasonforrecompile302002 reason;
TY263917* moddeps;
TY263917* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex302019 index;
Tindex302019 imports;
NI readerindex;
NI line;
NI moduleid;
Table302054 syms;
Memfile300202 memfile;
Tsymseq263796* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tident193012  {
  Tidobj193006 Sup;
NimStringDesc* s;
Tident193012* next;
NI h;
};
struct  Tscope263820  {
NI depthlevel;
Tstrtable263798 symbols;
Tscope263820* parent;
};
struct  Ropeobj172006  {
  TNimObject Sup;
Ropeobj172006* left;
Ropeobj172006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
};
typedef NU8 Tlibkind263810;
struct  Tlib263812  {
  Tlistentry141010 Sup;
Tlibkind263810 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj172006* name;
Tnode263794* path;
};
struct  Tiipair270163  {
NI key;
NI val;
};
struct Keyvaluepair302060 {
NI Field0;
NI Field1;
Tsym263826* Field2;
};
struct  Tinstantiation263816  {
Tsym263826* sym;
Ttypeseq263828* concretetypes;
TY263917* usedby;
NI compilesid;
};
struct TY131402 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct Ttypeseq263828 {
  TGenericSeq Sup;
  Ttype263832* data[SEQ_DECL_SIZE];
};
struct TY263927 {
  TGenericSeq Sup;
  Tinstantiation263816* data[SEQ_DECL_SIZE];
};
struct Tsymseq263796 {
  TGenericSeq Sup;
  Tsym263826* data[SEQ_DECL_SIZE];
};
struct Tnodeseq263788 {
  TGenericSeq Sup;
  Tnode263794* data[SEQ_DECL_SIZE];
};
struct TY263917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Tiipairseq270165 {
  TGenericSeq Sup;
  Tiipair270163 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq302057 {
  TGenericSeq Sup;
  Keyvaluepair302060 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest0, TNimType* typ0);
N_NIMCALL(void, openpasses_311238_2355241294)(Tpasscontext311002** a0, Tsym263826* module0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_186401_155036129)(NI32 fileidx0);
N_NIMCALL(Tllstream253204*, llstreamopen_253242_597494479)(NimStringDesc* filename0, Filemode12409 mode0);
N_NIMCALL(void, rawmessage_188612_155036129)(Tmsgkind185002 msg0, NimStringDesc* arg0);
N_NIMCALL(void, openparsers_288032_4241778752)(Tparsers288026* p0, NI32 fileidx0, Tllstream253204* inputstream0);
N_NIMCALL(void, processimplicits_311470_2355241294)(TY131402* implicits0, Tnodekind263020 nodekind0, Tpasscontext311002** a0);
N_NIMCALL(Tnode263794*, newnodei_265248_850551059)(Tnodekind263020 kind0, Tlineinfo185336 info0);
N_NIMCALL(Tnode263794*, newstrnode_264677_850551059)(Tnodekind263020 kind0, NimStringDesc* strval0);
N_NIMCALL(void, addson_265807_850551059)(Tnode263794* father0, Tnode263794* son0);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_311351_2355241294)(Tnode263794* n0, Tpasscontext311002** a0);
N_NIMCALL(Tnode263794*, parsetoplevelstmt_288046_4241778752)(Tparsers288026* p0);
N_NIMCALL(void, add_264135_850551059)(Tnode263794* father0, Tnode263794* son0);
N_NIMCALL(void, closeparsers_288038_4241778752)(Tparsers288026* p0);
N_NIMCALL(void, closepasses_311317_2355241294)(Tpasscontext311002** a0);
N_NIMCALL(void, idsynchronizationpoint_262432_644355110)(NI idrange0);
N_NIMCALL(void, openpassescached_311271_2355241294)(Tpasscontext311002** a0, Tsym263826* module0, Trodreader302021* rd0);
N_NIMCALL(Tnode263794*, loadinitsection_302083_1724185294)(Trodreader302021* r0);
N_NIMCALL(NI, sonslen_266351_850551059)(Tnode263794* n0);
N_NIMCALL(void, processtoplevelstmtcached_311394_2355241294)(Tnode263794* n0, Tpasscontext311002** a0);
N_NIMCALL(void, closepassescached_311428_2355241294)(Tpasscontext311002** a0);
N_NIMCALL(void, carrypass_311184_2355241294)(Tpass311014* p0, Tsym263826* module0, TY362746 m0, TY362746* Result);
TY311074 gimportmodule_311078_2355241294;
TY311079 gincludefile_311083_2355241294;
TY311165 gpasses_311166_2355241294;
NI gpasseslen_311167_2355241294;
extern TNimType NTI3408; /* RootObj */
TNimType NTI311002; /* TPassContext */
extern TNimType NTI130; /* bool */
extern TNimType NTI288026; /* TParsers */
extern Tlineinfo185336 gcmdlineinfo_186045_155036129;
extern TY131402* implicitimports_163248_2607990831;
extern TY131402* implicitincludes_163266_2607990831;

N_NIMCALL(void, openpasses_311238_2355241294)(Tpasscontext311002** a0, Tsym263826* module0) {
	{
		NI i_311254_2355241294;
		NI HEX3Atmp_311263_2355241294;
		NI res_311266_2355241294;
		i_311254_2355241294 = (NI)0;
		HEX3Atmp_311263_2355241294 = (NI)0;
		HEX3Atmp_311263_2355241294 = (NI)(gpasseslen_311167_2355241294 - ((NI) 1));
		res_311266_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_311266_2355241294 <= HEX3Atmp_311263_2355241294)) goto LA3;
				i_311254_2355241294 = res_311266_2355241294;
				{
					if (!!(gpasses_311166_2355241294[(i_311254_2355241294)- 0].Field0 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a0[(i_311254_2355241294)- 0]), gpasses_311166_2355241294[(i_311254_2355241294)- 0].Field0(module0));
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a0[(i_311254_2355241294)- 0]), NIM_NIL);
				}
				LA4: ;
				res_311266_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_311351_2355241294)(Tnode263794* n0, Tpasscontext311002** a0) {
	NIM_BOOL result0;
	Tnode263794* m0;
{	result0 = (NIM_BOOL)0;
	m0 = n0;
	{
		NI i_311369_2355241294;
		NI HEX3Atmp_311386_2355241294;
		NI res_311389_2355241294;
		i_311369_2355241294 = (NI)0;
		HEX3Atmp_311386_2355241294 = (NI)0;
		HEX3Atmp_311386_2355241294 = (NI)(gpasseslen_311167_2355241294 - ((NI) 1));
		res_311389_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_311389_2355241294 <= HEX3Atmp_311386_2355241294)) goto LA3;
				i_311369_2355241294 = res_311389_2355241294;
				{
					if (!!(gpasses_311166_2355241294[(i_311369_2355241294)- 0].Field2 == 0)) goto LA6;
					m0 = gpasses_311166_2355241294[(i_311369_2355241294)- 0].Field2(a0[(i_311369_2355241294)- 0], m0);
					{
						if (!m0 == 0) goto LA10;
						result0 = NIM_FALSE;
						goto BeforeRet;
					}
					LA10: ;
				}
				LA6: ;
				res_311389_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = NIM_TRUE;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, processimplicits_311470_2355241294)(TY131402* implicits0, Tnodekind263020 nodekind0, Tpasscontext311002** a0) {
	{
		NimStringDesc* module_311485_2355241294;
		NI i_311492_2355241294;
		NI L_311494_2355241294;
		module_311485_2355241294 = (NimStringDesc*)0;
		i_311492_2355241294 = ((NI) 0);
		L_311494_2355241294 = (implicits0 ? implicits0->Sup.len : 0);
		{
			while (1) {
				Tnode263794* importstmt0;
				Tnode263794* str0;
				if (!(i_311492_2355241294 < L_311494_2355241294)) goto LA3;
				module_311485_2355241294 = implicits0->data[i_311492_2355241294];
				importstmt0 = newnodei_265248_850551059(nodekind0, gcmdlineinfo_186045_155036129);
				str0 = newstrnode_264677_850551059(((Tnodekind263020) 20), module_311485_2355241294);
				(*str0).info = gcmdlineinfo_186045_155036129;
				addson_265807_850551059(importstmt0, str0);
				{
					NIM_BOOL LOC6;
					LOC6 = (NIM_BOOL)0;
					LOC6 = processtoplevelstmt_311351_2355241294(importstmt0, a0);
					if (!!(LOC6)) goto LA7;
					goto LA1;
				}
				LA7: ;
				i_311492_2355241294 += ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
}

N_NIMCALL(void, closepasses_311317_2355241294)(Tpasscontext311002** a0) {
	Tnode263794* m0;
	m0 = NIM_NIL;
	{
		NI i_311333_2355241294;
		NI HEX3Atmp_311343_2355241294;
		NI res_311346_2355241294;
		i_311333_2355241294 = (NI)0;
		HEX3Atmp_311343_2355241294 = (NI)0;
		HEX3Atmp_311343_2355241294 = (NI)(gpasseslen_311167_2355241294 - ((NI) 1));
		res_311346_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_311346_2355241294 <= HEX3Atmp_311343_2355241294)) goto LA3;
				i_311333_2355241294 = res_311346_2355241294;
				{
					if (!!(gpasses_311166_2355241294[(i_311333_2355241294)- 0].Field3 == 0)) goto LA6;
					m0 = gpasses_311166_2355241294[(i_311333_2355241294)- 0].Field3(a0[(i_311333_2355241294)- 0], m0);
				}
				LA6: ;
				unsureAsgnRef((void**) (&a0[(i_311333_2355241294)- 0]), NIM_NIL);
				res_311346_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, openpassescached_311271_2355241294)(Tpasscontext311002** a0, Tsym263826* module0, Trodreader302021* rd0) {
	{
		NI i_311288_2355241294;
		NI HEX3Atmp_311309_2355241294;
		NI res_311312_2355241294;
		i_311288_2355241294 = (NI)0;
		HEX3Atmp_311309_2355241294 = (NI)0;
		HEX3Atmp_311309_2355241294 = (NI)(gpasseslen_311167_2355241294 - ((NI) 1));
		res_311312_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_311312_2355241294 <= HEX3Atmp_311309_2355241294)) goto LA3;
				i_311288_2355241294 = res_311312_2355241294;
				{
					if (!!(gpasses_311166_2355241294[(i_311288_2355241294)- 0].Field1 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a0[(i_311288_2355241294)- 0]), gpasses_311166_2355241294[(i_311288_2355241294)- 0].Field1(module0, rd0));
					{
						if (!!((a0[(i_311288_2355241294)- 0] == NIM_NIL))) goto LA10;
						(*a0[(i_311288_2355241294)- 0]).fromcache = NIM_TRUE;
					}
					LA10: ;
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a0[(i_311288_2355241294)- 0]), NIM_NIL);
				}
				LA4: ;
				res_311312_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processtoplevelstmtcached_311394_2355241294)(Tnode263794* n0, Tpasscontext311002** a0) {
	Tnode263794* m0;
	m0 = n0;
	{
		NI i_311411_2355241294;
		NI HEX3Atmp_311420_2355241294;
		NI res_311423_2355241294;
		i_311411_2355241294 = (NI)0;
		HEX3Atmp_311420_2355241294 = (NI)0;
		HEX3Atmp_311420_2355241294 = (NI)(gpasseslen_311167_2355241294 - ((NI) 1));
		res_311423_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_311423_2355241294 <= HEX3Atmp_311420_2355241294)) goto LA3;
				i_311411_2355241294 = res_311423_2355241294;
				{
					if (!!(gpasses_311166_2355241294[(i_311411_2355241294)- 0].Field1 == 0)) goto LA6;
					m0 = gpasses_311166_2355241294[(i_311411_2355241294)- 0].Field2(a0[(i_311411_2355241294)- 0], m0);
				}
				LA6: ;
				res_311423_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, closepassescached_311428_2355241294)(Tpasscontext311002** a0) {
	Tnode263794* m0;
	m0 = NIM_NIL;
	{
		NI i_311444_2355241294;
		NI HEX3Atmp_311461_2355241294;
		NI res_311464_2355241294;
		i_311444_2355241294 = (NI)0;
		HEX3Atmp_311461_2355241294 = (NI)0;
		HEX3Atmp_311461_2355241294 = (NI)(gpasseslen_311167_2355241294 - ((NI) 1));
		res_311464_2355241294 = ((NI) 0);
		{
			while (1) {
				if (!(res_311464_2355241294 <= HEX3Atmp_311461_2355241294)) goto LA3;
				i_311444_2355241294 = res_311464_2355241294;
				{
					NIM_BOOL LOC6;
					LOC6 = (NIM_BOOL)0;
					LOC6 = !(gpasses_311166_2355241294[(i_311444_2355241294)- 0].Field1 == 0);
					if (!(LOC6)) goto LA7;
					LOC6 = !(gpasses_311166_2355241294[(i_311444_2355241294)- 0].Field3 == 0);
					LA7: ;
					if (!LOC6) goto LA8;
					m0 = gpasses_311166_2355241294[(i_311444_2355241294)- 0].Field3(a0[(i_311444_2355241294)- 0], m0);
				}
				LA8: ;
				unsureAsgnRef((void**) (&a0[(i_311444_2355241294)- 0]), NIM_NIL);
				res_311464_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processmodule_311069_2355241294)(Tsym263826* module0, Tllstream253204* stream0, Trodreader302021* rd0) {
	Tparsers288026 p0;
	Tpasscontextarray311160 a0;
	Tllstream253204* s0;
	NI32 fileidx0;
{	memset((void*)(&p0), 0, sizeof(p0));
	objectInit((&p0), (&NTI288026));
	memset((void*)a0, 0, sizeof(a0));
	s0 = (Tllstream253204*)0;
	fileidx0 = ((NI32) ((*module0).position));
	{
		if (!(rd0 == NIM_NIL)) goto LA3;
		openpasses_311238_2355241294(a0, module0);
		{
			NimStringDesc* filename0;
			if (!(stream0 == NIM_NIL)) goto LA7;
			filename0 = tofullpathconsiderdirty_186401_155036129(fileidx0);
			s0 = llstreamopen_253242_597494479(filename0, ((Filemode12409) 0));
			{
				if (!(s0 == NIM_NIL)) goto LA11;
				rawmessage_188612_155036129(((Tmsgkind185002) 3), filename0);
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
				openparsers_288032_4241778752((&p0), fileidx0, s0);
				{
					if (!!((((*module0).flags &(1U<<((NU)(((Tsymflag263184) 13))&31U)))!=0))) goto LA18;
					processimplicits_311470_2355241294(implicitimports_163248_2607990831, ((Tnodekind263020) 116), a0);
					processimplicits_311470_2355241294(implicitincludes_163266_2607990831, ((Tnodekind263020) 121), a0);
				}
				LA18: ;
				{
					while (1) {
						Tnode263794* n_311560_2355241294;
						n_311560_2355241294 = parsetoplevelstmt_288046_4241778752((&p0));
						{
							if (!((*n_311560_2355241294).kind == ((Tnodekind263020) 1))) goto LA24;
							goto LA20;
						}
						LA24: ;
						{
							Tnode263794* sl0;
							NIM_BOOL LOC36;
							if (!(((*module0).flags &(1U<<((NU)(((Tsymflag263184) 8))&31U)))!=0)) goto LA28;
							sl0 = newnodei_265248_850551059(((Tnodekind263020) 115), (*n_311560_2355241294).info);
							add_264135_850551059(sl0, n_311560_2355241294);
							{
								while (1) {
									Tnode263794* n0;
									n0 = parsetoplevelstmt_288046_4241778752((&p0));
									{
										if (!((*n0).kind == ((Tnodekind263020) 1))) goto LA34;
										goto LA30;
									}
									LA34: ;
									add_264135_850551059(sl0, n0);
								}
							} LA30: ;
							LOC36 = (NIM_BOOL)0;
							LOC36 = processtoplevelstmt_311351_2355241294(sl0, a0);
							goto LA20;
						}
						goto LA26;
						LA28: ;
						{
							NIM_BOOL LOC38;
							LOC38 = (NIM_BOOL)0;
							LOC38 = processtoplevelstmt_311351_2355241294(n_311560_2355241294, a0);
							if (!!(LOC38)) goto LA39;
							goto LA20;
						}
						goto LA26;
						LA39: ;
						LA26: ;
					}
				} LA20: ;
				closeparsers_288038_4241778752((&p0));
				{
					if (!!(((*s0).kind == ((Tllstreamkind253202) 3)))) goto LA43;
					goto LA14;
				}
				LA43: ;
			}
		} LA14: ;
		closepasses_311317_2355241294(a0);
		idsynchronizationpoint_262432_644355110(((NI) 1000));
	}
	goto LA1;
	LA3: ;
	{
		Tnode263794* n0;
		openpassescached_311271_2355241294(a0, module0, rd0);
		n0 = loadinitsection_302083_1724185294(rd0);
		{
			NI i_311622_2355241294;
			NI HEX3Atmp_311633_2355241294;
			NI LOC47;
			NI res_311636_2355241294;
			i_311622_2355241294 = (NI)0;
			HEX3Atmp_311633_2355241294 = (NI)0;
			LOC47 = (NI)0;
			LOC47 = sonslen_266351_850551059(n0);
			HEX3Atmp_311633_2355241294 = (NI)(LOC47 - ((NI) 1));
			res_311636_2355241294 = ((NI) 0);
			{
				while (1) {
					if (!(res_311636_2355241294 <= HEX3Atmp_311633_2355241294)) goto LA49;
					i_311622_2355241294 = res_311636_2355241294;
					processtoplevelstmtcached_311394_2355241294((*n0).kindU.S6.sons->data[i_311622_2355241294], a0);
					res_311636_2355241294 += ((NI) 1);
				} LA49: ;
			}
		}
		closepassescached_311428_2355241294(a0);
	}
	LA1: ;
	}BeforeRet: ;
}

N_NIMCALL(void, registerpass_311172_2355241294)(Tpass311014* p0) {
	gpasses_311166_2355241294[(gpasseslen_311167_2355241294)- 0] = (*p0);
	gpasseslen_311167_2355241294 += ((NI) 1);
}

N_NIMCALL(void, clearpasses_311170_2355241294)(void) {
	gpasseslen_311167_2355241294 = ((NI) 0);
}

N_NIMCALL(NIM_BOOL, astneeded_311094_2355241294)(Tsym263826* s0) {
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
		LOC4 = !(((*(*s0).typ).callconv == ((Tcallingconvention263002) 5)));
		LA7: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*(*s0).ast).kindU.S6.sons->data[((NI) 2)]).kind == ((Tnodekind263020) 1));
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

N_NIMCALL(void, carrypass_311184_2355241294)(Tpass311014* p0, Tsym263826* module0, TY362746 m0, TY362746* Result) {
	Tpasscontext311002* c0;
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

N_NIMCALL(void, carrypasses_311201_2355241294)(Tnode263794* nodes0, Tsym263826* module0, Tpass311014* passes0, NI passes0Len0) {
	TY362746 passdata0;
	memset((void*)(&passdata0), 0, sizeof(passdata0));
	passdata0.Field0 = nodes0;
	{
		Tpass311014 pass_311232_2355241294;
		NI i_311237_2355241294;
		memset((void*)(&pass_311232_2355241294), 0, sizeof(pass_311232_2355241294));
		i_311237_2355241294 = ((NI) 0);
		{
			while (1) {
				TY362746 LOC4;
				if (!(i_311237_2355241294 < passes0Len0)) goto LA3;
				pass_311232_2355241294 = passes0[i_311237_2355241294];
				memset((void*)(&LOC4), 0, sizeof(LOC4));
				carrypass_311184_2355241294((&pass_311232_2355241294), module0, passdata0, (&LOC4));
				passdata0.Field0 = LOC4.Field0;
				passdata0.Field1 = LOC4.Field1;
				i_311237_2355241294 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_passesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_passesDatInit000)(void) {
static TNimNode TMP998[1];
NTI311002.size = sizeof(Tpasscontext311002);
NTI311002.kind = 17;
NTI311002.base = (&NTI3408);
NTI311002.flags = 1;
TMP998[0].kind = 1;
TMP998[0].offset = offsetof(Tpasscontext311002, fromcache);
TMP998[0].typ = (&NTI130);
TMP998[0].name = "fromCache";
NTI311002.node = &TMP998[0];
}

