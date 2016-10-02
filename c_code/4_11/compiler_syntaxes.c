/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tnode292802 Tnode292802;
typedef struct Tparsers317026 Tparsers317026;
typedef struct Tparser306202 Tparser306202;
typedef struct Tlexer285174 Tlexer285174;
typedef struct Tbaselexer283015 Tbaselexer283015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream282204 Tllstream282204;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttoken285170 Ttoken285170;
typedef struct Tident199010 Tident199010;
typedef struct Ttype292840 Ttype292840;
typedef struct Tsym292834 Tsym292834;
typedef struct Tnodeseq292796 Tnodeseq292796;
typedef struct Tidobj199004 Tidobj199004;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct TY292960 TY292960;
typedef struct Tloc292816 Tloc292816;
typedef struct Ropeobj178006 Ropeobj178006;
typedef struct TY292929 TY292929;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Tlib292820 Tlib292820;
typedef struct TY292961 TY292961;
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef NU8 Tparserkind317004;
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
struct  Tbaselexer283015  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream282204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
typedef NU16 Tmsgkind191002;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo191336 info0, Tmsgkind191002 msg0, NimStringDesc* arg0, void* ClEnv);
void* ClEnv;
} Terrorhandler285172;
struct  Tlexer285174  {
  Tbaselexer283015 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler285172 errorhandler;
};
typedef NU8 Ttoktype285016;
typedef NU8 Tnumericalbase285168;
struct  Ttoken285170  {
Ttoktype285016 toktype;
NI indent;
Tident199010* ident;
NI64 inumber;
NF fnumber;
Tnumericalbase285168 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tparser306202  {
NI currind;
NIM_BOOL firsttok;
NIM_BOOL strongspaces;
Tlexer285174 lex;
Ttoken285170 tok;
NI inpragma;
NI insemistmtlist;
};
struct  Tparsers317026  {
Tparserkind317004 skin;
Tparser306202 parser;
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
typedef NU8 Filemode13009;
struct  Tlineinfo191336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag292427Set;
typedef NU8 Tnodekind292020;
struct  Tnode292802  {
Ttype292840* typ;
Tlineinfo191336 info;
Tnodeflag292427Set flags;
Tnodekind292020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym292834* sym;
} S4;
struct {Tident199010* ident;
} S5;
struct {Tnodeseq292796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 Trenderflag311004Set;
typedef NU8 Tfilterkind317002;
typedef NimStringDesc* TY317022[4];
typedef NimStringDesc* TY317016[4];
struct  Tidobj199004  {
  TNimObject Sup;
NI id;
};
struct  Tident199010  {
  Tidobj199004 Sup;
NimStringDesc* s;
Tident199010* next;
NI h;
};
typedef NU64 Tnotekind191330Set;
typedef NimStringDesc* TY317494[1];
typedef NU8 Msgflag192444Set;
typedef NU8 Tllstreamkind282202;
struct  Tllstream282204  {
  TNimObject Sup;
Tllstreamkind282202 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
typedef NU8 Ttypekind292244;
typedef NU8 Tcallingconvention292002;
typedef NU32 Ttypeflag292431Set;
typedef NU8 Tlockind292808;
typedef NU8 Tstorageloc292812;
typedef NU16 Tlocflag292810Set;
struct  Tloc292816  {
Tlockind292808 k;
Tstorageloc292812 s;
Tlocflag292810Set flags;
Ttype292840* t;
Ropeobj178006* r;
};
struct  Ttype292840  {
  Tidobj199004 Sup;
Ttypekind292244 kind;
Tcallingconvention292002 callconv;
Ttypeflag292431Set flags;
Ttypeseq292836* sons;
Tnode292802* n;
Tsym292834* owner;
Tsym292834* sym;
Tsym292834* destructor;
Tsym292834* deepcopy;
Tsym292834* assignment;
TY292960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc292816 loc;
};
typedef NU8 Tsymkind292435;
struct  Tstrtable292806  {
NI counter;
Tsymseq292804* data;
};
typedef NU16 Tmagic292524;
typedef NU32 Tsymflag292184Set;
typedef NU32 Toption169009Set;
struct  Tsym292834  {
  Tidobj199004 Sup;
Tsymkind292435 kind;
union{
struct {Ttypeseq292836* typeinstcache;
} S1;
struct {TY292929* procinstcache;
Tsym292834* gcunsafetyreason;
} S2;
struct {TY292929* usedgenerics;
Tstrtable292806 tab;
} S3;
struct {Tsym292834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic292524 magic;
Ttype292840* typ;
Tident199010* name;
Tlineinfo191336 info;
Tsym292834* owner;
Tsymflag292184Set flags;
Tnode292802* ast;
Toption169009Set options;
NI position;
NI offset;
Tloc292816 loc;
Tlib292820* annex;
Tnode292802* constraint;
};
struct TY292961 {
NI Field0;
Tsym292834* Field1;
};
struct  Ropeobj178006  {
  TNimObject Sup;
Ropeobj178006* left;
Ropeobj178006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind292818;
struct  Tlib292820  {
  Tlistentry147007 Sup;
Tlibkind292818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj178006* name;
Tnode292802* path;
};
struct  Tinstantiation292824  {
Tsym292834* sym;
Ttypeseq292836* concretetypes;
NI compilesid;
};
struct Tnodeseq292796 {
  TGenericSeq Sup;
  Tnode292802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq292836 {
  TGenericSeq Sup;
  Ttype292840* data[SEQ_DECL_SIZE];
};
struct TY292960 {
  TGenericSeq Sup;
  TY292961 data[SEQ_DECL_SIZE];
};
struct TY292929 {
  TGenericSeq Sup;
  Tinstantiation292824* data[SEQ_DECL_SIZE];
};
struct Tsymseq292804 {
  TGenericSeq Sup;
  Tsym292834* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest0, TNimType* typ0);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_192401_155036129)(NI32 fileidx0);
N_NIMCALL(NIM_BOOL, open_14803_1689653243)(FILE** f0, NimStringDesc* filename0, Filemode13009 mode0, NI bufsize0);
N_NIMCALL(void, rawmessage_194612_155036129)(Tmsgkind191002 msg0, NimStringDesc* arg0);
N_NIMCALL(void, openparsers_317032_4241778752)(Tparsers317026* p0, NI32 fileidx0, Tllstream282204* inputstream0);
N_NIMCALL(Tnode292802*, parsepipe_317107_4241778752)(NimStringDesc* filename0, Tllstream282204* inputstream0);
N_NIMCALL(Tllstream282204*, llstreamopen_282242_597494479)(NimStringDesc* filename0, Filemode13009 mode0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, llstreamreadline_282550_597494479)(Tllstream282204* s0, NimStringDesc** line0);
N_NIMCALL(NI, utf8bom_317077_4241778752)(NimStringDesc* s0);
N_NIMCALL(NIM_BOOL, containsshebang_317081_4241778752)(NimStringDesc* s0, NI i0);
N_NIMCALL(void, openparser_306331_1574654094)(Tparser306202* p0, NimStringDesc* filename0, Tllstream282204* inputstream0, NIM_BOOL strongspaces0);
N_NIMCALL(Tllstream282204*, llstreamopen_282218_597494479)(NimStringDesc* data0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
N_NIMCALL(Tnode292802*, parseall_306210_1574654094)(Tparser306202* p0);
N_NIMCALL(void, closeparser_306214_1574654094)(Tparser306202* p0);
N_NIMCALL(void, llstreamclose_282278_597494479)(Tllstream282204* s0);
N_NIMCALL(Tllstream282204*, evalpipe_317496_4241778752)(Tparsers317026* p0, Tnode292802* n0, NimStringDesc* filename0, Tllstream282204* start0);
N_NIMCALL(NIM_BOOL, identeq_199450_791273810)(Tident199010* id0, NimStringDesc* name0);
N_NIMCALL(Tllstream282204*, applyfilter_317459_4241778752)(Tparsers317026* p0, Tnode292802* n0, NimStringDesc* filename0, Tllstream282204* stdin_317465_4241778752);
N_NIMCALL(Tident199010*, getcallee_317423_4241778752)(Tnode292802* n0);
N_NIMCALL(NimStringDesc*, rendertree_311044_382274130)(Tnode292802* n0, Trenderflag311004Set renderflags0);
N_NIMCALL(Tfilterkind317002, getfilter_317174_4241778752)(Tident199010* ident0);
N_NIMCALL(Tparserkind317004, getparser_317223_4241778752)(Tident199010* ident0);
N_NIMCALL(Tllstream282204*, filtertmpl_316002_4161173357)(Tllstream282204* stdin_316004_4161173357, NimStringDesc* filename0, Tnode292802* call0);
N_NIMCALL(Tllstream282204*, filterstrip_315006_1413030668)(Tllstream282204* stdin_315008_1413030668, NimStringDesc* filename0, Tnode292802* call0);
N_NIMCALL(Tllstream282204*, filterreplace_315001_1413030668)(Tllstream282204* stdin_315003_1413030668, NimStringDesc* filename0, Tnode292802* call0);
N_NIMCALL(void, rawmessage_193645_155036129)(Tmsgkind191002 msg0, NimStringDesc** args0, NI args0Len0);
N_NIMCALL(void, msgwriteln_192450_155036129)(NimStringDesc* s0, Msgflag192444Set flags0);
N_NIMCALL(void, openparser_306322_1574654094)(Tparser306202* p0, NI32 fileidx0, Tllstream282204* inputstream0, NIM_BOOL strongspaces0);
N_NIMCALL(Tllstream282204*, llstreamopen_282230_597494479)(FILE* f0);
N_NIMCALL(Tnode292802*, parseall_317042_4241778752)(Tparsers317026* p0);
N_NIMCALL(Tnode292802*, parseall_310002_959407361)(Tparser306202* p0);
N_NIMCALL(void, internalerror_196113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(void, closeparsers_317038_4241778752)(Tparsers317026* p0);
N_NIMCALL(Tnode292802*, parsetoplevelstmt_306218_1574654094)(Tparser306202* p0);
N_NIMCALL(Tnode292802*, parsetoplevelstmt_310007_959407361)(Tparser306202* p0);
STRING_LITERAL(T4241778752_6, "|", 1);
STRING_LITERAL(T4241778752_7, "none", 4);
STRING_LITERAL(T4241778752_8, "stdtmpl", 7);
STRING_LITERAL(T4241778752_9, "replace", 7);
STRING_LITERAL(T4241778752_10, "strip", 5);
NIM_CONST TY317022 filternames_317019_4241778752 = {((NimStringDesc*) &T4241778752_7),
((NimStringDesc*) &T4241778752_8),
((NimStringDesc*) &T4241778752_9),
((NimStringDesc*) &T4241778752_10)}
;
STRING_LITERAL(T4241778752_11, "standard", 8);
STRING_LITERAL(T4241778752_12, "strongspaces", 12);
STRING_LITERAL(T4241778752_13, "braces", 6);
STRING_LITERAL(T4241778752_14, "endx", 4);
NIM_CONST TY317016 parsernames_317013_4241778752 = {((NimStringDesc*) &T4241778752_11),
((NimStringDesc*) &T4241778752_12),
((NimStringDesc*) &T4241778752_13),
((NimStringDesc*) &T4241778752_14)}
;
STRING_LITERAL(T4241778752_15, "parser to implement", 19);
TNimType NTI317026; /* TParsers */
TNimType NTI317004; /* TParserKind */
extern TNimType NTI306202; /* TParser */
extern Tnode292802* emptynode_293801_850551059;
extern Tnotekind191330Set gnotes_192068_155036129;

N_NIMCALL(NI, utf8bom_317077_4241778752)(NimStringDesc* s0) {
	NI result0;
	result0 = (NI)0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = (NIM_BOOL)0;
		LOC4 = (NIM_BOOL)0;
		LOC4 = ((NU8)(s0->data[((NI) 0)]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)(s0->data[((NI) 1)]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)(s0->data[((NI) 2)]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		result0 = ((NI) 3);
	}
	goto LA1;
	LA7: ;
	{
		result0 = ((NI) 0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, containsshebang_317081_4241778752)(NimStringDesc* s0, NI i0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	{
		NIM_BOOL LOC3;
		NI j0;
		LOC3 = (NIM_BOOL)0;
		LOC3 = ((NU8)(s0->data[i0]) == (NU8)(35));
		if (!(LOC3)) goto LA4;
		LOC3 = ((NU8)(s0->data[(NI)(i0 + ((NI) 1))]) == (NU8)(33));
		LA4: ;
		if (!LOC3) goto LA5;
		j0 = (NI)(i0 + ((NI) 2));
		{
			while (1) {
				if (!(((NU8)(s0->data[j0])) == ((NU8)(32)) || ((NU8)(s0->data[j0])) == ((NU8)(9)) || ((NU8)(s0->data[j0])) == ((NU8)(11)) || ((NU8)(s0->data[j0])) == ((NU8)(13)) || ((NU8)(s0->data[j0])) == ((NU8)(10)) || ((NU8)(s0->data[j0])) == ((NU8)(12)))) goto LA8;
				j0 += ((NI) 1);
			} LA8: ;
		}
		result0 = ((NU8)(s0->data[j0]) == (NU8)(47));
	}
	LA5: ;
	return result0;
}

N_NIMCALL(Tnode292802*, parsepipe_317107_4241778752)(NimStringDesc* filename0, Tllstream282204* inputstream0) {
	Tnode292802* result0;
	Tllstream282204* s0;
	result0 = (Tnode292802*)0;
	result0 = emptynode_293801_850551059;
	s0 = llstreamopen_282242_597494479(filename0, ((Filemode13009) 0));
	{
		NimStringDesc* line0;
		NIM_BOOL LOC5;
		NI i0;
		NI linenumber0;
		if (!!((s0 == NIM_NIL))) goto LA3;
		line0 = rawNewString(((NI) 80));
		LOC5 = (NIM_BOOL)0;
		LOC5 = llstreamreadline_282550_597494479(s0, (&line0));
		i0 = utf8bom_317077_4241778752(line0);
		linenumber0 = ((NI) 1);
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			LOC8 = (NIM_BOOL)0;
			LOC8 = containsshebang_317081_4241778752(line0, i0);
			if (!LOC8) goto LA9;
			LOC11 = (NIM_BOOL)0;
			LOC11 = llstreamreadline_282550_597494479(s0, (&line0));
			i0 = ((NI) 0);
			linenumber0 += ((NI) 1);
		}
		LA9: ;
		{
			NIM_BOOL LOC14;
			Tparser306202 q0;
			NimStringDesc* LOC20;
			Tllstream282204* LOC21;
			LOC14 = (NIM_BOOL)0;
			LOC14 = ((NU8)(line0->data[i0]) == (NU8)(35));
			if (!(LOC14)) goto LA15;
			LOC14 = ((NU8)(line0->data[(NI)(i0 + ((NI) 1))]) == (NU8)(63));
			LA15: ;
			if (!LOC14) goto LA16;
			i0 += ((NI) 2);
			{
				while (1) {
					if (!(((NU8)(line0->data[i0])) == ((NU8)(32)) || ((NU8)(line0->data[i0])) == ((NU8)(9)) || ((NU8)(line0->data[i0])) == ((NU8)(11)) || ((NU8)(line0->data[i0])) == ((NU8)(13)) || ((NU8)(line0->data[i0])) == ((NU8)(10)) || ((NU8)(line0->data[i0])) == ((NU8)(12)))) goto LA19;
					i0 += ((NI) 1);
				} LA19: ;
			}
			memset((void*)(&q0), 0, sizeof(q0));
			objectInit((&q0), (&NTI306202));
			LOC20 = (NimStringDesc*)0;
			LOC20 = copyStr(line0, i0);
			LOC21 = (Tllstream282204*)0;
			LOC21 = llstreamopen_282218_597494479(LOC20);
			openparser_306331_1574654094((&q0), filename0, LOC21, NIM_FALSE);
			result0 = parseall_306210_1574654094((&q0));
			closeparser_306214_1574654094((&q0));
		}
		LA16: ;
		llstreamclose_282278_597494479(s0);
	}
	LA3: ;
	return result0;
}

N_NIMCALL(Tident199010*, getcallee_317423_4241778752)(Tnode292802* n0) {
	Tident199010* result0;
	result0 = (Tident199010*)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = ((*n0).kind == ((Tnodekind292020) 27) || (*n0).kind == ((Tnodekind292020) 29) || (*n0).kind == ((Tnodekind292020) 30) || (*n0).kind == ((Tnodekind292020) 31) || (*n0).kind == ((Tnodekind292020) 26) || (*n0).kind == ((Tnodekind292020) 28) || (*n0).kind == ((Tnodekind292020) 32));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind292020) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		result0 = (*(*n0).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident;
	}
	goto LA1;
	LA5: ;
	{
		if (!((*n0).kind == ((Tnodekind292020) 2))) goto LA8;
		result0 = (*n0).kindU.S5.ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		LOC11 = (NimStringDesc*)0;
		LOC11 = rendertree_311044_382274130(n0, 0);
		rawmessage_194612_155036129(((Tmsgkind191002) 167), LOC11);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Tfilterkind317002, getfilter_317174_4241778752)(Tident199010* ident0) {
	Tfilterkind317002 result0;
{	result0 = (Tfilterkind317002)0;
	{
		Tfilterkind317002 i_317214_4241778752;
		NI res_317220_4241778752;
		i_317214_4241778752 = (Tfilterkind317002)0;
		res_317220_4241778752 = ((NI) 0);
		{
			while (1) {
				if (!(res_317220_4241778752 <= ((NI) 3))) goto LA3;
				i_317214_4241778752 = ((Tfilterkind317002) (res_317220_4241778752));
				{
					NIM_BOOL LOC6;
					LOC6 = (NIM_BOOL)0;
					LOC6 = identeq_199450_791273810(ident0, filternames_317019_4241778752[(i_317214_4241778752)- 0]);
					if (!LOC6) goto LA7;
					result0 = i_317214_4241778752;
					goto BeforeRet;
				}
				LA7: ;
				res_317220_4241778752 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = ((Tfilterkind317002) 0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tparserkind317004, getparser_317223_4241778752)(Tident199010* ident0) {
	Tparserkind317004 result0;
{	result0 = (Tparserkind317004)0;
	{
		Tparserkind317004 i_317414_4241778752;
		NI res_317420_4241778752;
		i_317414_4241778752 = (Tparserkind317004)0;
		res_317420_4241778752 = ((NI) 0);
		{
			while (1) {
				if (!(res_317420_4241778752 <= ((NI) 3))) goto LA3;
				i_317414_4241778752 = ((Tparserkind317004) (res_317420_4241778752));
				{
					NIM_BOOL LOC6;
					LOC6 = (NIM_BOOL)0;
					LOC6 = identeq_199450_791273810(ident0, parsernames_317013_4241778752[(i_317414_4241778752)- 0]);
					if (!LOC6) goto LA7;
					result0 = i_317414_4241778752;
					goto BeforeRet;
				}
				LA7: ;
				res_317420_4241778752 += ((NI) 1);
			} LA3: ;
		}
	}
	rawmessage_194612_155036129(((Tmsgkind191002) 31), (*ident0).s);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tllstream282204*, applyfilter_317459_4241778752)(Tparsers317026* p0, Tnode292802* n0, NimStringDesc* filename0, Tllstream282204* stdin_317465_4241778752) {
	Tllstream282204* result0;
	Tident199010* ident0;
	Tfilterkind317002 f0;
	result0 = (Tllstream282204*)0;
	ident0 = getcallee_317423_4241778752(n0);
	f0 = getfilter_317174_4241778752(ident0);
	switch (f0) {
	case ((Tfilterkind317002) 0):
	{
		(*p0).skin = getparser_317223_4241778752(ident0);
		result0 = stdin_317465_4241778752;
	}
	break;
	case ((Tfilterkind317002) 1):
	{
		result0 = filtertmpl_316002_4161173357(stdin_317465_4241778752, filename0, n0);
	}
	break;
	case ((Tfilterkind317002) 3):
	{
		result0 = filterstrip_315006_1413030668(stdin_317465_4241778752, filename0, n0);
	}
	break;
	case ((Tfilterkind317002) 2):
	{
		result0 = filterreplace_315001_1413030668(stdin_317465_4241778752, filename0, n0);
	}
	break;
	}
	{
		if (!!((f0 == ((Tfilterkind317002) 0)))) goto LA7;
		{
			TY317494 LOC13;
			TY317494 LOC14;
			if (!((gnotes_192068_155036129 &((NU64)1<<((NU)((((Tmsgkind191002) 277)- 237))&63U)))!=0)) goto LA11;
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_193645_155036129(((Tmsgkind191002) 277), LOC13, 0);
			msgwriteln_192450_155036129((*result0).s, 0);
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_193645_155036129(((Tmsgkind191002) 278), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	return result0;
}

N_NIMCALL(Tllstream282204*, evalpipe_317496_4241778752)(Tparsers317026* p0, Tnode292802* n0, NimStringDesc* filename0, Tllstream282204* start0) {
	Tllstream282204* result0;
{	result0 = (Tllstream282204*)0;
	result0 = start0;
	{
		if (!((*n0).kind == ((Tnodekind292020) 1))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = (NIM_BOOL)0;
		LOC8 = (NIM_BOOL)0;
		LOC8 = ((*n0).kind == ((Tnodekind292020) 29));
		if (!(LOC8)) goto LA9;
		LOC8 = ((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind292020) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		LOC7 = identeq_199450_791273810((*(*n0).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident, ((NimStringDesc*) &T4241778752_6));
		LA10: ;
		if (!LOC7) goto LA11;
		{
			NI i_317545_4241778752;
			NI res_317571_4241778752;
			i_317545_4241778752 = (NI)0;
			res_317571_4241778752 = ((NI) 1);
			{
				while (1) {
					if (!(res_317571_4241778752 <= ((NI) 2))) goto LA15;
					i_317545_4241778752 = res_317571_4241778752;
					{
						if (!((*(*n0).kindU.S6.sons->data[i_317545_4241778752]).kind == ((Tnodekind292020) 29))) goto LA18;
						result0 = evalpipe_317496_4241778752(p0, (*n0).kindU.S6.sons->data[i_317545_4241778752], filename0, result0);
					}
					goto LA16;
					LA18: ;
					{
						result0 = applyfilter_317459_4241778752(p0, (*n0).kindU.S6.sons->data[i_317545_4241778752], filename0, result0);
					}
					LA16: ;
					res_317571_4241778752 += ((NI) 1);
				} LA15: ;
			}
		}
	}
	goto LA5;
	LA11: ;
	{
		if (!((*n0).kind == ((Tnodekind292020) 115))) goto LA22;
		result0 = evalpipe_317496_4241778752(p0, (*n0).kindU.S6.sons->data[((NI) 0)], filename0, result0);
	}
	goto LA5;
	LA22: ;
	{
		result0 = applyfilter_317459_4241778752(p0, n0, filename0, result0);
	}
	LA5: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, openparsers_317032_4241778752)(Tparsers317026* p0, NI32 fileidx0, Tllstream282204* inputstream0) {
	Tllstream282204* s0;
	NimStringDesc* filename0;
	Tnode292802* pipe0;
	s0 = (Tllstream282204*)0;
	(*p0).skin = ((Tparserkind317004) 0);
	filename0 = tofullpathconsiderdirty_192401_155036129(fileidx0);
	pipe0 = parsepipe_317107_4241778752(filename0, inputstream0);
	{
		if (!!((pipe0 == NIM_NIL))) goto LA3;
		s0 = evalpipe_317496_4241778752(p0, pipe0, filename0, inputstream0);
	}
	goto LA1;
	LA3: ;
	{
		s0 = inputstream0;
	}
	LA1: ;
	switch ((*p0).skin) {
	case ((Tparserkind317004) 0):
	case ((Tparserkind317004) 2):
	case ((Tparserkind317004) 3):
	{
		openparser_306322_1574654094((&(*p0).parser), fileidx0, s0, NIM_FALSE);
	}
	break;
	case ((Tparserkind317004) 1):
	{
		openparser_306322_1574654094((&(*p0).parser), fileidx0, s0, NIM_TRUE);
	}
	break;
	}
}

N_NIMCALL(Tnode292802*, parseall_317042_4241778752)(Tparsers317026* p0) {
	Tnode292802* result0;
	result0 = (Tnode292802*)0;
	switch ((*p0).skin) {
	case ((Tparserkind317004) 0):
	case ((Tparserkind317004) 1):
	{
		result0 = parseall_306210_1574654094((&(*p0).parser));
	}
	break;
	case ((Tparserkind317004) 2):
	{
		result0 = parseall_310002_959407361((&(*p0).parser));
	}
	break;
	case ((Tparserkind317004) 3):
	{
		internalerror_196113_155036129(((NimStringDesc*) &T4241778752_15));
		result0 = emptynode_293801_850551059;
	}
	break;
	}
	return result0;
}

N_NIMCALL(void, closeparsers_317038_4241778752)(Tparsers317026* p0) {
	closeparser_306214_1574654094((&(*p0).parser));
}

N_NIMCALL(Tnode292802*, parsefile_317029_4241778752)(NI32 fileidx0) {
	Tnode292802* result0;
	Tparsers317026 p0;
	FILE* f0;
	NimStringDesc* filename0;
	Tllstream282204* LOC6;
{	result0 = (Tnode292802*)0;
	memset((void*)(&p0), 0, sizeof(p0));
	objectInit((&p0), (&NTI317026));
	f0 = (FILE*)0;
	filename0 = tofullpathconsiderdirty_192401_155036129(fileidx0);
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = open_14803_1689653243(&f0, filename0, ((Filemode13009) 0), ((NI) -1));
		if (!!(LOC3)) goto LA4;
		rawmessage_194612_155036129(((Tmsgkind191002) 3), filename0);
		goto BeforeRet;
	}
	LA4: ;
	LOC6 = (Tllstream282204*)0;
	LOC6 = llstreamopen_282230_597494479(f0);
	openparsers_317032_4241778752((&p0), fileidx0, LOC6);
	result0 = parseall_317042_4241778752((&p0));
	closeparsers_317038_4241778752((&p0));
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tnode292802*, parsetoplevelstmt_317046_4241778752)(Tparsers317026* p0) {
	Tnode292802* result0;
	result0 = (Tnode292802*)0;
	switch ((*p0).skin) {
	case ((Tparserkind317004) 0):
	case ((Tparserkind317004) 1):
	{
		result0 = parsetoplevelstmt_306218_1574654094((&(*p0).parser));
	}
	break;
	case ((Tparserkind317004) 2):
	{
		result0 = parsetoplevelstmt_310007_959407361((&(*p0).parser));
	}
	break;
	case ((Tparserkind317004) 3):
	{
		internalerror_196113_155036129(((NimStringDesc*) &T4241778752_15));
		result0 = emptynode_293801_850551059;
	}
	break;
	}
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesDatInit000)(void) {
static TNimNode* T4241778752_2[2];
static TNimNode* T4241778752_3[4];
NI T4241778752_5;
static char* NIM_CONST T4241778752_4[4] = {
"skinStandard", 
"skinStrongSpaces", 
"skinBraces", 
"skinEndX"};
static TNimNode T4241778752_0[8];
NTI317026.size = sizeof(Tparsers317026);
NTI317026.kind = 18;
NTI317026.base = 0;
T4241778752_2[0] = &T4241778752_0[1];
NTI317004.size = sizeof(Tparserkind317004);
NTI317004.kind = 14;
NTI317004.base = 0;
NTI317004.flags = 3;
for (T4241778752_5 = 0; T4241778752_5 < 4; T4241778752_5++) {
T4241778752_0[T4241778752_5+2].kind = 1;
T4241778752_0[T4241778752_5+2].offset = T4241778752_5;
T4241778752_0[T4241778752_5+2].name = T4241778752_4[T4241778752_5];
T4241778752_3[T4241778752_5] = &T4241778752_0[T4241778752_5+2];
}
T4241778752_0[6].len = 4; T4241778752_0[6].kind = 2; T4241778752_0[6].sons = &T4241778752_3[0];
NTI317004.node = &T4241778752_0[6];
T4241778752_0[1].kind = 1;
T4241778752_0[1].offset = offsetof(Tparsers317026, skin);
T4241778752_0[1].typ = (&NTI317004);
T4241778752_0[1].name = "skin";
T4241778752_2[1] = &T4241778752_0[7];
T4241778752_0[7].kind = 1;
T4241778752_0[7].offset = offsetof(Tparsers317026, parser);
T4241778752_0[7].typ = (&NTI306202);
T4241778752_0[7].name = "parser";
T4241778752_0[0].len = 2; T4241778752_0[0].kind = 2; T4241778752_0[0].sons = &T4241778752_2[0];
NTI317026.node = &T4241778752_0[0];
}

