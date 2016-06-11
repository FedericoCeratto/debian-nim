/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tnode264794 Tnode264794;
typedef struct Tparsers289026 Tparsers289026;
typedef struct Tparser278202 Tparser278202;
typedef struct Tlexer257174 Tlexer257174;
typedef struct Tbaselexer255015 Tbaselexer255015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream254204 Tllstream254204;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttoken257170 Ttoken257170;
typedef struct Tident194012 Tident194012;
typedef struct Ttype264832 Ttype264832;
typedef struct Tsym264826 Tsym264826;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct Tidobj194006 Tidobj194006;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct Tloc264808 Tloc264808;
typedef struct Ropeobj173006 Ropeobj173006;
typedef struct Tscope264820 Tscope264820;
typedef struct TY264927 TY264927;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct Tlib264812 Tlib264812;
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct TY264917 TY264917;
typedef NU8 Tparserkind289004;
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
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 Filemode12409;
struct  Tlineinfo186336  {
NI16 line;
NI16 col;
NI32 fileindex;
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
typedef NU8 Trenderflag283006Set;
typedef NU8 Tfilterkind289002;
typedef NimStringDesc* TY289022[4];
typedef NimStringDesc* TY289016[4];
struct  Tidobj194006  {
  TNimObject Sup;
NI id;
};
struct  Tident194012  {
  Tidobj194006 Sup;
NimStringDesc* s;
Tident194012* next;
NI h;
};
typedef NU64 Tnotekind186330Set;
typedef NimStringDesc* TY289494[1];
typedef NU8 Msgflag187444Set;
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
typedef NU8 Tsymkind264435;
struct  Tstrtable264798  {
NI counter;
Tsymseq264796* data;
};
typedef NU8 Tmagic264525;
typedef NU32 Tsymflag264184Set;
typedef NU32 Toption164009Set;
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
struct  Ropeobj173006  {
  TNimObject Sup;
Ropeobj173006* left;
Ropeobj173006* right;
NI length;
NimStringDesc* data;
};
struct  Tscope264820  {
NI depthlevel;
Tstrtable264798 symbols;
Tscope264820* parent;
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
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
};
struct Tnodeseq264788 {
  TGenericSeq Sup;
  Tnode264794* data[SEQ_DECL_SIZE];
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
struct TY264917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest0, TNimType* typ0);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_187401_155036129)(NI32 fileidx0);
N_NIMCALL(NIM_BOOL, open_15603_1689653243)(FILE** f0, NimStringDesc* filename0, Filemode12409 mode0, NI bufsize0);
N_NIMCALL(void, rawmessage_189612_155036129)(Tmsgkind186002 msg0, NimStringDesc* arg0);
N_NIMCALL(void, openparsers_289032_4241778752)(Tparsers289026* p0, NI32 fileidx0, Tllstream254204* inputstream0);
N_NIMCALL(Tnode264794*, parsepipe_289107_4241778752)(NimStringDesc* filename0, Tllstream254204* inputstream0);
N_NIMCALL(Tllstream254204*, llstreamopen_254242_597494479)(NimStringDesc* filename0, Filemode12409 mode0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, llstreamreadline_254550_597494479)(Tllstream254204* s0, NimStringDesc** line0);
N_NIMCALL(NI, utf8bom_289077_4241778752)(NimStringDesc* s0);
N_NIMCALL(NIM_BOOL, containsshebang_289081_4241778752)(NimStringDesc* s0, NI i0);
N_NIMCALL(void, openparser_278331_1574654094)(Tparser278202* p0, NimStringDesc* filename0, Tllstream254204* inputstream0, NIM_BOOL strongspaces0);
N_NIMCALL(Tllstream254204*, llstreamopen_254218_597494479)(NimStringDesc* data0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
N_NIMCALL(Tnode264794*, parseall_278210_1574654094)(Tparser278202* p0);
N_NIMCALL(void, closeparser_278214_1574654094)(Tparser278202* p0);
N_NIMCALL(void, llstreamclose_254278_597494479)(Tllstream254204* s0);
N_NIMCALL(Tllstream254204*, evalpipe_289496_4241778752)(Tparsers289026* p0, Tnode264794* n0, NimStringDesc* filename0, Tllstream254204* start0);
N_NIMCALL(NIM_BOOL, identeq_194450_791273810)(Tident194012* id0, NimStringDesc* name0);
N_NIMCALL(Tllstream254204*, applyfilter_289459_4241778752)(Tparsers289026* p0, Tnode264794* n0, NimStringDesc* filename0, Tllstream254204* stdin_289465_4241778752);
N_NIMCALL(Tident194012*, getcallee_289423_4241778752)(Tnode264794* n0);
N_NIMCALL(NimStringDesc*, rendertree_283046_382274130)(Tnode264794* n0, Trenderflag283006Set renderflags0);
N_NIMCALL(Tfilterkind289002, getfilter_289174_4241778752)(Tident194012* ident0);
N_NIMCALL(Tparserkind289004, getparser_289223_4241778752)(Tident194012* ident0);
N_NIMCALL(Tllstream254204*, filtertmpl_288003_4161173357)(Tllstream254204* stdin_288005_4161173357, NimStringDesc* filename0, Tnode264794* call0);
N_NIMCALL(Tllstream254204*, filterstrip_287006_1413030668)(Tllstream254204* stdin_287008_1413030668, NimStringDesc* filename0, Tnode264794* call0);
N_NIMCALL(Tllstream254204*, filterreplace_287001_1413030668)(Tllstream254204* stdin_287003_1413030668, NimStringDesc* filename0, Tnode264794* call0);
N_NIMCALL(void, rawmessage_188645_155036129)(Tmsgkind186002 msg0, NimStringDesc** args0, NI args0Len0);
N_NIMCALL(void, msgwriteln_187450_155036129)(NimStringDesc* s0, Msgflag187444Set flags0);
N_NIMCALL(void, openparser_278322_1574654094)(Tparser278202* p0, NI32 fileidx0, Tllstream254204* inputstream0, NIM_BOOL strongspaces0);
N_NIMCALL(Tllstream254204*, llstreamopen_254230_597494479)(FILE* f0);
N_NIMCALL(Tnode264794*, parseall_289042_4241778752)(Tparsers289026* p0);
N_NIMCALL(Tnode264794*, parseall_282003_959407361)(Tparser278202* p0);
N_NIMCALL(void, internalerror_191113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(void, closeparsers_289038_4241778752)(Tparsers289026* p0);
N_NIMCALL(Tnode264794*, parsetoplevelstmt_278218_1574654094)(Tparser278202* p0);
N_NIMCALL(Tnode264794*, parsetoplevelstmt_282008_959407361)(Tparser278202* p0);
STRING_LITERAL(TMP1556, "|", 1);
STRING_LITERAL(TMP1671, "none", 4);
STRING_LITERAL(TMP1672, "stdtmpl", 7);
STRING_LITERAL(TMP1673, "replace", 7);
STRING_LITERAL(TMP1674, "strip", 5);
NIM_CONST TY289022 filternames_289019_4241778752 = {((NimStringDesc*) &TMP1671),
((NimStringDesc*) &TMP1672),
((NimStringDesc*) &TMP1673),
((NimStringDesc*) &TMP1674)}
;
STRING_LITERAL(TMP1675, "standard", 8);
STRING_LITERAL(TMP1676, "strongspaces", 12);
STRING_LITERAL(TMP1677, "braces", 6);
STRING_LITERAL(TMP1678, "endx", 4);
NIM_CONST TY289016 parsernames_289013_4241778752 = {((NimStringDesc*) &TMP1675),
((NimStringDesc*) &TMP1676),
((NimStringDesc*) &TMP1677),
((NimStringDesc*) &TMP1678)}
;
STRING_LITERAL(TMP1710, "parser to implement", 19);
TNimType NTI289026; /* TParsers */
TNimType NTI289004; /* TParserKind */
extern TNimType NTI278202; /* TParser */
extern Tnode264794* emptynode_265801_850551059;
extern Tnotekind186330Set gnotes_187080_155036129;

N_NIMCALL(NI, utf8bom_289077_4241778752)(NimStringDesc* s0) {
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

N_NIMCALL(NIM_BOOL, containsshebang_289081_4241778752)(NimStringDesc* s0, NI i0) {
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

N_NIMCALL(Tnode264794*, parsepipe_289107_4241778752)(NimStringDesc* filename0, Tllstream254204* inputstream0) {
	Tnode264794* result0;
	Tllstream254204* s0;
	result0 = (Tnode264794*)0;
	result0 = emptynode_265801_850551059;
	s0 = llstreamopen_254242_597494479(filename0, ((Filemode12409) 0));
	{
		NimStringDesc* line0;
		NIM_BOOL LOC5;
		NI i0;
		NI linenumber0;
		if (!!((s0 == NIM_NIL))) goto LA3;
		line0 = rawNewString(((NI) 80));
		LOC5 = (NIM_BOOL)0;
		LOC5 = llstreamreadline_254550_597494479(s0, (&line0));
		i0 = utf8bom_289077_4241778752(line0);
		linenumber0 = ((NI) 1);
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			LOC8 = (NIM_BOOL)0;
			LOC8 = containsshebang_289081_4241778752(line0, i0);
			if (!LOC8) goto LA9;
			LOC11 = (NIM_BOOL)0;
			LOC11 = llstreamreadline_254550_597494479(s0, (&line0));
			i0 = ((NI) 0);
			linenumber0 += ((NI) 1);
		}
		LA9: ;
		{
			NIM_BOOL LOC14;
			Tparser278202 q0;
			NimStringDesc* LOC20;
			Tllstream254204* LOC21;
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
			objectInit((&q0), (&NTI278202));
			LOC20 = (NimStringDesc*)0;
			LOC20 = copyStr(line0, i0);
			LOC21 = (Tllstream254204*)0;
			LOC21 = llstreamopen_254218_597494479(LOC20);
			openparser_278331_1574654094((&q0), filename0, LOC21, NIM_FALSE);
			result0 = parseall_278210_1574654094((&q0));
			closeparser_278214_1574654094((&q0));
		}
		LA16: ;
		llstreamclose_254278_597494479(s0);
	}
	LA3: ;
	return result0;
}

N_NIMCALL(Tident194012*, getcallee_289423_4241778752)(Tnode264794* n0) {
	Tident194012* result0;
	result0 = (Tident194012*)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = ((*n0).kind == ((Tnodekind264020) 27) || (*n0).kind == ((Tnodekind264020) 29) || (*n0).kind == ((Tnodekind264020) 30) || (*n0).kind == ((Tnodekind264020) 31) || (*n0).kind == ((Tnodekind264020) 26) || (*n0).kind == ((Tnodekind264020) 28) || (*n0).kind == ((Tnodekind264020) 32));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind264020) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		result0 = (*(*n0).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident;
	}
	goto LA1;
	LA5: ;
	{
		if (!((*n0).kind == ((Tnodekind264020) 2))) goto LA8;
		result0 = (*n0).kindU.S5.ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		LOC11 = (NimStringDesc*)0;
		LOC11 = rendertree_283046_382274130(n0, 0);
		rawmessage_189612_155036129(((Tmsgkind186002) 167), LOC11);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Tfilterkind289002, getfilter_289174_4241778752)(Tident194012* ident0) {
	Tfilterkind289002 result0;
{	result0 = (Tfilterkind289002)0;
	{
		Tfilterkind289002 i_289214_4241778752;
		NI res_289220_4241778752;
		i_289214_4241778752 = (Tfilterkind289002)0;
		res_289220_4241778752 = ((NI) 0);
		{
			while (1) {
				if (!(res_289220_4241778752 <= ((NI) 3))) goto LA3;
				i_289214_4241778752 = ((Tfilterkind289002) (res_289220_4241778752));
				{
					NIM_BOOL LOC6;
					LOC6 = (NIM_BOOL)0;
					LOC6 = identeq_194450_791273810(ident0, filternames_289019_4241778752[(i_289214_4241778752)- 0]);
					if (!LOC6) goto LA7;
					result0 = i_289214_4241778752;
					goto BeforeRet;
				}
				LA7: ;
				res_289220_4241778752 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = ((Tfilterkind289002) 0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tparserkind289004, getparser_289223_4241778752)(Tident194012* ident0) {
	Tparserkind289004 result0;
{	result0 = (Tparserkind289004)0;
	{
		Tparserkind289004 i_289414_4241778752;
		NI res_289420_4241778752;
		i_289414_4241778752 = (Tparserkind289004)0;
		res_289420_4241778752 = ((NI) 0);
		{
			while (1) {
				if (!(res_289420_4241778752 <= ((NI) 3))) goto LA3;
				i_289414_4241778752 = ((Tparserkind289004) (res_289420_4241778752));
				{
					NIM_BOOL LOC6;
					LOC6 = (NIM_BOOL)0;
					LOC6 = identeq_194450_791273810(ident0, parsernames_289013_4241778752[(i_289414_4241778752)- 0]);
					if (!LOC6) goto LA7;
					result0 = i_289414_4241778752;
					goto BeforeRet;
				}
				LA7: ;
				res_289420_4241778752 += ((NI) 1);
			} LA3: ;
		}
	}
	rawmessage_189612_155036129(((Tmsgkind186002) 31), (*ident0).s);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tllstream254204*, applyfilter_289459_4241778752)(Tparsers289026* p0, Tnode264794* n0, NimStringDesc* filename0, Tllstream254204* stdin_289465_4241778752) {
	Tllstream254204* result0;
	Tident194012* ident0;
	Tfilterkind289002 f0;
	result0 = (Tllstream254204*)0;
	ident0 = getcallee_289423_4241778752(n0);
	f0 = getfilter_289174_4241778752(ident0);
	switch (f0) {
	case ((Tfilterkind289002) 0):
	{
		(*p0).skin = getparser_289223_4241778752(ident0);
		result0 = stdin_289465_4241778752;
	}
	break;
	case ((Tfilterkind289002) 1):
	{
		result0 = filtertmpl_288003_4161173357(stdin_289465_4241778752, filename0, n0);
	}
	break;
	case ((Tfilterkind289002) 3):
	{
		result0 = filterstrip_287006_1413030668(stdin_289465_4241778752, filename0, n0);
	}
	break;
	case ((Tfilterkind289002) 2):
	{
		result0 = filterreplace_287001_1413030668(stdin_289465_4241778752, filename0, n0);
	}
	break;
	}
	{
		if (!!((f0 == ((Tfilterkind289002) 0)))) goto LA7;
		{
			TY289494 LOC13;
			TY289494 LOC14;
			if (!((gnotes_187080_155036129 &((NU64)1<<((NU)((((Tmsgkind186002) 277)- 237))&63U)))!=0)) goto LA11;
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_188645_155036129(((Tmsgkind186002) 277), LOC13, 0);
			msgwriteln_187450_155036129((*result0).s, 0);
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_188645_155036129(((Tmsgkind186002) 278), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	return result0;
}

N_NIMCALL(Tllstream254204*, evalpipe_289496_4241778752)(Tparsers289026* p0, Tnode264794* n0, NimStringDesc* filename0, Tllstream254204* start0) {
	Tllstream254204* result0;
{	result0 = (Tllstream254204*)0;
	result0 = start0;
	{
		if (!((*n0).kind == ((Tnodekind264020) 1))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = (NIM_BOOL)0;
		LOC8 = (NIM_BOOL)0;
		LOC8 = ((*n0).kind == ((Tnodekind264020) 29));
		if (!(LOC8)) goto LA9;
		LOC8 = ((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind264020) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		LOC7 = identeq_194450_791273810((*(*n0).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident, ((NimStringDesc*) &TMP1556));
		LA10: ;
		if (!LOC7) goto LA11;
		{
			NI i_289545_4241778752;
			NI res_289571_4241778752;
			i_289545_4241778752 = (NI)0;
			res_289571_4241778752 = ((NI) 1);
			{
				while (1) {
					if (!(res_289571_4241778752 <= ((NI) 2))) goto LA15;
					i_289545_4241778752 = res_289571_4241778752;
					{
						if (!((*(*n0).kindU.S6.sons->data[i_289545_4241778752]).kind == ((Tnodekind264020) 29))) goto LA18;
						result0 = evalpipe_289496_4241778752(p0, (*n0).kindU.S6.sons->data[i_289545_4241778752], filename0, result0);
					}
					goto LA16;
					LA18: ;
					{
						result0 = applyfilter_289459_4241778752(p0, (*n0).kindU.S6.sons->data[i_289545_4241778752], filename0, result0);
					}
					LA16: ;
					res_289571_4241778752 += ((NI) 1);
				} LA15: ;
			}
		}
	}
	goto LA5;
	LA11: ;
	{
		if (!((*n0).kind == ((Tnodekind264020) 115))) goto LA22;
		result0 = evalpipe_289496_4241778752(p0, (*n0).kindU.S6.sons->data[((NI) 0)], filename0, result0);
	}
	goto LA5;
	LA22: ;
	{
		result0 = applyfilter_289459_4241778752(p0, n0, filename0, result0);
	}
	LA5: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, openparsers_289032_4241778752)(Tparsers289026* p0, NI32 fileidx0, Tllstream254204* inputstream0) {
	Tllstream254204* s0;
	NimStringDesc* filename0;
	Tnode264794* pipe0;
	s0 = (Tllstream254204*)0;
	(*p0).skin = ((Tparserkind289004) 0);
	filename0 = tofullpathconsiderdirty_187401_155036129(fileidx0);
	pipe0 = parsepipe_289107_4241778752(filename0, inputstream0);
	{
		if (!!((pipe0 == NIM_NIL))) goto LA3;
		s0 = evalpipe_289496_4241778752(p0, pipe0, filename0, inputstream0);
	}
	goto LA1;
	LA3: ;
	{
		s0 = inputstream0;
	}
	LA1: ;
	switch ((*p0).skin) {
	case ((Tparserkind289004) 0):
	case ((Tparserkind289004) 2):
	case ((Tparserkind289004) 3):
	{
		openparser_278322_1574654094((&(*p0).parser), fileidx0, s0, NIM_FALSE);
	}
	break;
	case ((Tparserkind289004) 1):
	{
		openparser_278322_1574654094((&(*p0).parser), fileidx0, s0, NIM_TRUE);
	}
	break;
	}
}

N_NIMCALL(Tnode264794*, parseall_289042_4241778752)(Tparsers289026* p0) {
	Tnode264794* result0;
	result0 = (Tnode264794*)0;
	switch ((*p0).skin) {
	case ((Tparserkind289004) 0):
	case ((Tparserkind289004) 1):
	{
		result0 = parseall_278210_1574654094((&(*p0).parser));
	}
	break;
	case ((Tparserkind289004) 2):
	{
		result0 = parseall_282003_959407361((&(*p0).parser));
	}
	break;
	case ((Tparserkind289004) 3):
	{
		internalerror_191113_155036129(((NimStringDesc*) &TMP1710));
		result0 = emptynode_265801_850551059;
	}
	break;
	}
	return result0;
}

N_NIMCALL(void, closeparsers_289038_4241778752)(Tparsers289026* p0) {
	closeparser_278214_1574654094((&(*p0).parser));
}

N_NIMCALL(Tnode264794*, parsefile_289029_4241778752)(NI32 fileidx0) {
	Tnode264794* result0;
	Tparsers289026 p0;
	FILE* f0;
	NimStringDesc* filename0;
	Tllstream254204* LOC6;
{	result0 = (Tnode264794*)0;
	memset((void*)(&p0), 0, sizeof(p0));
	objectInit((&p0), (&NTI289026));
	f0 = (FILE*)0;
	filename0 = tofullpathconsiderdirty_187401_155036129(fileidx0);
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = open_15603_1689653243(&f0, filename0, ((Filemode12409) 0), ((NI) -1));
		if (!!(LOC3)) goto LA4;
		rawmessage_189612_155036129(((Tmsgkind186002) 3), filename0);
		goto BeforeRet;
	}
	LA4: ;
	LOC6 = (Tllstream254204*)0;
	LOC6 = llstreamopen_254230_597494479(f0);
	openparsers_289032_4241778752((&p0), fileidx0, LOC6);
	result0 = parseall_289042_4241778752((&p0));
	closeparsers_289038_4241778752((&p0));
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tnode264794*, parsetoplevelstmt_289046_4241778752)(Tparsers289026* p0) {
	Tnode264794* result0;
	result0 = (Tnode264794*)0;
	switch ((*p0).skin) {
	case ((Tparserkind289004) 0):
	case ((Tparserkind289004) 1):
	{
		result0 = parsetoplevelstmt_278218_1574654094((&(*p0).parser));
	}
	break;
	case ((Tparserkind289004) 2):
	{
		result0 = parsetoplevelstmt_282008_959407361((&(*p0).parser));
	}
	break;
	case ((Tparserkind289004) 3):
	{
		internalerror_191113_155036129(((NimStringDesc*) &TMP1710));
		result0 = emptynode_265801_850551059;
	}
	break;
	}
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesDatInit000)(void) {
static TNimNode* TMP1359[2];
static TNimNode* TMP1360[4];
NI TMP1362;
static char* NIM_CONST TMP1361[4] = {
"skinStandard", 
"skinStrongSpaces", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP955[8];
NTI289026.size = sizeof(Tparsers289026);
NTI289026.kind = 18;
NTI289026.base = 0;
TMP1359[0] = &TMP955[1];
NTI289004.size = sizeof(Tparserkind289004);
NTI289004.kind = 14;
NTI289004.base = 0;
NTI289004.flags = 3;
for (TMP1362 = 0; TMP1362 < 4; TMP1362++) {
TMP955[TMP1362+2].kind = 1;
TMP955[TMP1362+2].offset = TMP1362;
TMP955[TMP1362+2].name = TMP1361[TMP1362];
TMP1360[TMP1362] = &TMP955[TMP1362+2];
}
TMP955[6].len = 4; TMP955[6].kind = 2; TMP955[6].sons = &TMP1360[0];
NTI289004.node = &TMP955[6];
TMP955[1].kind = 1;
TMP955[1].offset = offsetof(Tparsers289026, skin);
TMP955[1].typ = (&NTI289004);
TMP955[1].name = "skin";
TMP1359[1] = &TMP955[7];
TMP955[7].kind = 1;
TMP955[7].offset = offsetof(Tparsers289026, parser);
TMP955[7].typ = (&NTI278202);
TMP955[7].name = "parser";
TMP955[0].len = 2; TMP955[0].kind = 2; TMP955[0].sons = &TMP1359[0];
NTI289026.node = &TMP955[0];
}

