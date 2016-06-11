/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tnode265794 Tnode265794;
typedef struct Tparsers290026 Tparsers290026;
typedef struct Tparser279202 Tparser279202;
typedef struct Tlexer258174 Tlexer258174;
typedef struct Tbaselexer256015 Tbaselexer256015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream255204 Tllstream255204;
typedef struct Tlineinfo187336 Tlineinfo187336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttoken258170 Ttoken258170;
typedef struct Tident195012 Tident195012;
typedef struct Ttype265832 Ttype265832;
typedef struct Tsym265826 Tsym265826;
typedef struct Tnodeseq265788 Tnodeseq265788;
typedef struct Tidobj195006 Tidobj195006;
typedef struct Ttypeseq265828 Ttypeseq265828;
typedef struct Tloc265808 Tloc265808;
typedef struct Ropeobj175006 Ropeobj175006;
typedef struct Tscope265820 Tscope265820;
typedef struct TY265927 TY265927;
typedef struct Tstrtable265798 Tstrtable265798;
typedef struct Tsymseq265796 Tsymseq265796;
typedef struct Tlib265812 Tlib265812;
typedef struct Tinstantiation265816 Tinstantiation265816;
typedef struct Tlistentry145010 Tlistentry145010;
typedef struct TY265917 TY265917;
typedef NU8 Tparserkind290004;
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
struct  Tlineinfo187336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag265427Set;
typedef NU8 Tnodekind265020;
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
typedef NU8 Trenderflag284006Set;
typedef NU8 Tfilterkind290002;
typedef NimStringDesc* TY290022[4];
typedef NimStringDesc* TY290016[4];
struct  Tidobj195006  {
  TNimObject Sup;
NI id;
};
struct  Tident195012  {
  Tidobj195006 Sup;
NimStringDesc* s;
Tident195012* next;
NI h;
};
typedef NU64 Tnotekind187330Set;
typedef NimStringDesc* TY290494[1];
typedef NU8 Msgflag188444Set;
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
typedef NU8 Tsymkind265435;
struct  Tstrtable265798  {
NI counter;
Tsymseq265796* data;
};
typedef NU8 Tmagic265525;
typedef NU32 Tsymflag265184Set;
typedef NU32 Toption166009Set;
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
struct  Ropeobj175006  {
  TNimObject Sup;
Ropeobj175006* left;
Ropeobj175006* right;
NI length;
NimStringDesc* data;
};
struct  Tscope265820  {
NI depthlevel;
Tstrtable265798 symbols;
Tscope265820* parent;
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
struct  Tinstantiation265816  {
Tsym265826* sym;
Ttypeseq265828* concretetypes;
TY265917* usedby;
NI compilesid;
};
struct Tnodeseq265788 {
  TGenericSeq Sup;
  Tnode265794* data[SEQ_DECL_SIZE];
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
struct TY265917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest0, TNimType* typ0);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_188401_155036129)(NI32 fileidx0);
N_NIMCALL(NIM_BOOL, open_15603_1689653243)(FILE** f0, NimStringDesc* filename0, Filemode12409 mode0, NI bufsize0);
N_NIMCALL(void, rawmessage_190612_155036129)(Tmsgkind187002 msg0, NimStringDesc* arg0);
N_NIMCALL(void, openparsers_290032_4241778752)(Tparsers290026* p0, NI32 fileidx0, Tllstream255204* inputstream0);
N_NIMCALL(Tnode265794*, parsepipe_290107_4241778752)(NimStringDesc* filename0, Tllstream255204* inputstream0);
N_NIMCALL(Tllstream255204*, llstreamopen_255242_597494479)(NimStringDesc* filename0, Filemode12409 mode0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, llstreamreadline_255550_597494479)(Tllstream255204* s0, NimStringDesc** line0);
N_NIMCALL(NI, utf8bom_290077_4241778752)(NimStringDesc* s0);
N_NIMCALL(NIM_BOOL, containsshebang_290081_4241778752)(NimStringDesc* s0, NI i0);
N_NIMCALL(void, openparser_279331_1574654094)(Tparser279202* p0, NimStringDesc* filename0, Tllstream255204* inputstream0, NIM_BOOL strongspaces0);
N_NIMCALL(Tllstream255204*, llstreamopen_255218_597494479)(NimStringDesc* data0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
N_NIMCALL(Tnode265794*, parseall_279210_1574654094)(Tparser279202* p0);
N_NIMCALL(void, closeparser_279214_1574654094)(Tparser279202* p0);
N_NIMCALL(void, llstreamclose_255278_597494479)(Tllstream255204* s0);
N_NIMCALL(Tllstream255204*, evalpipe_290496_4241778752)(Tparsers290026* p0, Tnode265794* n0, NimStringDesc* filename0, Tllstream255204* start0);
N_NIMCALL(NIM_BOOL, identeq_195450_791273810)(Tident195012* id0, NimStringDesc* name0);
N_NIMCALL(Tllstream255204*, applyfilter_290459_4241778752)(Tparsers290026* p0, Tnode265794* n0, NimStringDesc* filename0, Tllstream255204* stdin_290465_4241778752);
N_NIMCALL(Tident195012*, getcallee_290423_4241778752)(Tnode265794* n0);
N_NIMCALL(NimStringDesc*, rendertree_284046_382274130)(Tnode265794* n0, Trenderflag284006Set renderflags0);
N_NIMCALL(Tfilterkind290002, getfilter_290174_4241778752)(Tident195012* ident0);
N_NIMCALL(Tparserkind290004, getparser_290223_4241778752)(Tident195012* ident0);
N_NIMCALL(Tllstream255204*, filtertmpl_289003_4161173357)(Tllstream255204* stdin_289005_4161173357, NimStringDesc* filename0, Tnode265794* call0);
N_NIMCALL(Tllstream255204*, filterstrip_288006_1413030668)(Tllstream255204* stdin_288008_1413030668, NimStringDesc* filename0, Tnode265794* call0);
N_NIMCALL(Tllstream255204*, filterreplace_288001_1413030668)(Tllstream255204* stdin_288003_1413030668, NimStringDesc* filename0, Tnode265794* call0);
N_NIMCALL(void, rawmessage_189645_155036129)(Tmsgkind187002 msg0, NimStringDesc** args0, NI args0Len0);
N_NIMCALL(void, msgwriteln_188450_155036129)(NimStringDesc* s0, Msgflag188444Set flags0);
N_NIMCALL(void, openparser_279322_1574654094)(Tparser279202* p0, NI32 fileidx0, Tllstream255204* inputstream0, NIM_BOOL strongspaces0);
N_NIMCALL(Tllstream255204*, llstreamopen_255230_597494479)(FILE* f0);
N_NIMCALL(Tnode265794*, parseall_290042_4241778752)(Tparsers290026* p0);
N_NIMCALL(Tnode265794*, parseall_283003_959407361)(Tparser279202* p0);
N_NIMCALL(void, internalerror_192113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(void, closeparsers_290038_4241778752)(Tparsers290026* p0);
N_NIMCALL(Tnode265794*, parsetoplevelstmt_279218_1574654094)(Tparser279202* p0);
N_NIMCALL(Tnode265794*, parsetoplevelstmt_283008_959407361)(Tparser279202* p0);
STRING_LITERAL(TMP1565, "|", 1);
STRING_LITERAL(TMP1680, "none", 4);
STRING_LITERAL(TMP1681, "stdtmpl", 7);
STRING_LITERAL(TMP1682, "replace", 7);
STRING_LITERAL(TMP1683, "strip", 5);
NIM_CONST TY290022 filternames_290019_4241778752 = {((NimStringDesc*) &TMP1680),
((NimStringDesc*) &TMP1681),
((NimStringDesc*) &TMP1682),
((NimStringDesc*) &TMP1683)}
;
STRING_LITERAL(TMP1684, "standard", 8);
STRING_LITERAL(TMP1685, "strongspaces", 12);
STRING_LITERAL(TMP1686, "braces", 6);
STRING_LITERAL(TMP1687, "endx", 4);
NIM_CONST TY290016 parsernames_290013_4241778752 = {((NimStringDesc*) &TMP1684),
((NimStringDesc*) &TMP1685),
((NimStringDesc*) &TMP1686),
((NimStringDesc*) &TMP1687)}
;
STRING_LITERAL(TMP1719, "parser to implement", 19);
TNimType NTI290026; /* TParsers */
TNimType NTI290004; /* TParserKind */
extern TNimType NTI279202; /* TParser */
extern Tnode265794* emptynode_266801_850551059;
extern Tnotekind187330Set gnotes_188080_155036129;

N_NIMCALL(NI, utf8bom_290077_4241778752)(NimStringDesc* s0) {
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

N_NIMCALL(NIM_BOOL, containsshebang_290081_4241778752)(NimStringDesc* s0, NI i0) {
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

N_NIMCALL(Tnode265794*, parsepipe_290107_4241778752)(NimStringDesc* filename0, Tllstream255204* inputstream0) {
	Tnode265794* result0;
	Tllstream255204* s0;
	result0 = (Tnode265794*)0;
	result0 = emptynode_266801_850551059;
	s0 = llstreamopen_255242_597494479(filename0, ((Filemode12409) 0));
	{
		NimStringDesc* line0;
		NIM_BOOL LOC5;
		NI i0;
		NI linenumber0;
		if (!!((s0 == NIM_NIL))) goto LA3;
		line0 = rawNewString(((NI) 80));
		LOC5 = (NIM_BOOL)0;
		LOC5 = llstreamreadline_255550_597494479(s0, (&line0));
		i0 = utf8bom_290077_4241778752(line0);
		linenumber0 = ((NI) 1);
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			LOC8 = (NIM_BOOL)0;
			LOC8 = containsshebang_290081_4241778752(line0, i0);
			if (!LOC8) goto LA9;
			LOC11 = (NIM_BOOL)0;
			LOC11 = llstreamreadline_255550_597494479(s0, (&line0));
			i0 = ((NI) 0);
			linenumber0 += ((NI) 1);
		}
		LA9: ;
		{
			NIM_BOOL LOC14;
			Tparser279202 q0;
			NimStringDesc* LOC20;
			Tllstream255204* LOC21;
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
			objectInit((&q0), (&NTI279202));
			LOC20 = (NimStringDesc*)0;
			LOC20 = copyStr(line0, i0);
			LOC21 = (Tllstream255204*)0;
			LOC21 = llstreamopen_255218_597494479(LOC20);
			openparser_279331_1574654094((&q0), filename0, LOC21, NIM_FALSE);
			result0 = parseall_279210_1574654094((&q0));
			closeparser_279214_1574654094((&q0));
		}
		LA16: ;
		llstreamclose_255278_597494479(s0);
	}
	LA3: ;
	return result0;
}

N_NIMCALL(Tident195012*, getcallee_290423_4241778752)(Tnode265794* n0) {
	Tident195012* result0;
	result0 = (Tident195012*)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = ((*n0).kind == ((Tnodekind265020) 27) || (*n0).kind == ((Tnodekind265020) 29) || (*n0).kind == ((Tnodekind265020) 30) || (*n0).kind == ((Tnodekind265020) 31) || (*n0).kind == ((Tnodekind265020) 26) || (*n0).kind == ((Tnodekind265020) 28) || (*n0).kind == ((Tnodekind265020) 32));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind265020) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		result0 = (*(*n0).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident;
	}
	goto LA1;
	LA5: ;
	{
		if (!((*n0).kind == ((Tnodekind265020) 2))) goto LA8;
		result0 = (*n0).kindU.S5.ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		LOC11 = (NimStringDesc*)0;
		LOC11 = rendertree_284046_382274130(n0, 0);
		rawmessage_190612_155036129(((Tmsgkind187002) 167), LOC11);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Tfilterkind290002, getfilter_290174_4241778752)(Tident195012* ident0) {
	Tfilterkind290002 result0;
{	result0 = (Tfilterkind290002)0;
	{
		Tfilterkind290002 i_290214_4241778752;
		NI res_290220_4241778752;
		i_290214_4241778752 = (Tfilterkind290002)0;
		res_290220_4241778752 = ((NI) 0);
		{
			while (1) {
				if (!(res_290220_4241778752 <= ((NI) 3))) goto LA3;
				i_290214_4241778752 = ((Tfilterkind290002) (res_290220_4241778752));
				{
					NIM_BOOL LOC6;
					LOC6 = (NIM_BOOL)0;
					LOC6 = identeq_195450_791273810(ident0, filternames_290019_4241778752[(i_290214_4241778752)- 0]);
					if (!LOC6) goto LA7;
					result0 = i_290214_4241778752;
					goto BeforeRet;
				}
				LA7: ;
				res_290220_4241778752 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = ((Tfilterkind290002) 0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tparserkind290004, getparser_290223_4241778752)(Tident195012* ident0) {
	Tparserkind290004 result0;
{	result0 = (Tparserkind290004)0;
	{
		Tparserkind290004 i_290414_4241778752;
		NI res_290420_4241778752;
		i_290414_4241778752 = (Tparserkind290004)0;
		res_290420_4241778752 = ((NI) 0);
		{
			while (1) {
				if (!(res_290420_4241778752 <= ((NI) 3))) goto LA3;
				i_290414_4241778752 = ((Tparserkind290004) (res_290420_4241778752));
				{
					NIM_BOOL LOC6;
					LOC6 = (NIM_BOOL)0;
					LOC6 = identeq_195450_791273810(ident0, parsernames_290013_4241778752[(i_290414_4241778752)- 0]);
					if (!LOC6) goto LA7;
					result0 = i_290414_4241778752;
					goto BeforeRet;
				}
				LA7: ;
				res_290420_4241778752 += ((NI) 1);
			} LA3: ;
		}
	}
	rawmessage_190612_155036129(((Tmsgkind187002) 31), (*ident0).s);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tllstream255204*, applyfilter_290459_4241778752)(Tparsers290026* p0, Tnode265794* n0, NimStringDesc* filename0, Tllstream255204* stdin_290465_4241778752) {
	Tllstream255204* result0;
	Tident195012* ident0;
	Tfilterkind290002 f0;
	result0 = (Tllstream255204*)0;
	ident0 = getcallee_290423_4241778752(n0);
	f0 = getfilter_290174_4241778752(ident0);
	switch (f0) {
	case ((Tfilterkind290002) 0):
	{
		(*p0).skin = getparser_290223_4241778752(ident0);
		result0 = stdin_290465_4241778752;
	}
	break;
	case ((Tfilterkind290002) 1):
	{
		result0 = filtertmpl_289003_4161173357(stdin_290465_4241778752, filename0, n0);
	}
	break;
	case ((Tfilterkind290002) 3):
	{
		result0 = filterstrip_288006_1413030668(stdin_290465_4241778752, filename0, n0);
	}
	break;
	case ((Tfilterkind290002) 2):
	{
		result0 = filterreplace_288001_1413030668(stdin_290465_4241778752, filename0, n0);
	}
	break;
	}
	{
		if (!!((f0 == ((Tfilterkind290002) 0)))) goto LA7;
		{
			TY290494 LOC13;
			TY290494 LOC14;
			if (!((gnotes_188080_155036129 &((NU64)1<<((NU)((((Tmsgkind187002) 277)- 237))&63U)))!=0)) goto LA11;
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_189645_155036129(((Tmsgkind187002) 277), LOC13, 0);
			msgwriteln_188450_155036129((*result0).s, 0);
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_189645_155036129(((Tmsgkind187002) 278), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	return result0;
}

N_NIMCALL(Tllstream255204*, evalpipe_290496_4241778752)(Tparsers290026* p0, Tnode265794* n0, NimStringDesc* filename0, Tllstream255204* start0) {
	Tllstream255204* result0;
{	result0 = (Tllstream255204*)0;
	result0 = start0;
	{
		if (!((*n0).kind == ((Tnodekind265020) 1))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = (NIM_BOOL)0;
		LOC8 = (NIM_BOOL)0;
		LOC8 = ((*n0).kind == ((Tnodekind265020) 29));
		if (!(LOC8)) goto LA9;
		LOC8 = ((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind265020) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		LOC7 = identeq_195450_791273810((*(*n0).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident, ((NimStringDesc*) &TMP1565));
		LA10: ;
		if (!LOC7) goto LA11;
		{
			NI i_290545_4241778752;
			NI res_290571_4241778752;
			i_290545_4241778752 = (NI)0;
			res_290571_4241778752 = ((NI) 1);
			{
				while (1) {
					if (!(res_290571_4241778752 <= ((NI) 2))) goto LA15;
					i_290545_4241778752 = res_290571_4241778752;
					{
						if (!((*(*n0).kindU.S6.sons->data[i_290545_4241778752]).kind == ((Tnodekind265020) 29))) goto LA18;
						result0 = evalpipe_290496_4241778752(p0, (*n0).kindU.S6.sons->data[i_290545_4241778752], filename0, result0);
					}
					goto LA16;
					LA18: ;
					{
						result0 = applyfilter_290459_4241778752(p0, (*n0).kindU.S6.sons->data[i_290545_4241778752], filename0, result0);
					}
					LA16: ;
					res_290571_4241778752 += ((NI) 1);
				} LA15: ;
			}
		}
	}
	goto LA5;
	LA11: ;
	{
		if (!((*n0).kind == ((Tnodekind265020) 115))) goto LA22;
		result0 = evalpipe_290496_4241778752(p0, (*n0).kindU.S6.sons->data[((NI) 0)], filename0, result0);
	}
	goto LA5;
	LA22: ;
	{
		result0 = applyfilter_290459_4241778752(p0, n0, filename0, result0);
	}
	LA5: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, openparsers_290032_4241778752)(Tparsers290026* p0, NI32 fileidx0, Tllstream255204* inputstream0) {
	Tllstream255204* s0;
	NimStringDesc* filename0;
	Tnode265794* pipe0;
	s0 = (Tllstream255204*)0;
	(*p0).skin = ((Tparserkind290004) 0);
	filename0 = tofullpathconsiderdirty_188401_155036129(fileidx0);
	pipe0 = parsepipe_290107_4241778752(filename0, inputstream0);
	{
		if (!!((pipe0 == NIM_NIL))) goto LA3;
		s0 = evalpipe_290496_4241778752(p0, pipe0, filename0, inputstream0);
	}
	goto LA1;
	LA3: ;
	{
		s0 = inputstream0;
	}
	LA1: ;
	switch ((*p0).skin) {
	case ((Tparserkind290004) 0):
	case ((Tparserkind290004) 2):
	case ((Tparserkind290004) 3):
	{
		openparser_279322_1574654094((&(*p0).parser), fileidx0, s0, NIM_FALSE);
	}
	break;
	case ((Tparserkind290004) 1):
	{
		openparser_279322_1574654094((&(*p0).parser), fileidx0, s0, NIM_TRUE);
	}
	break;
	}
}

N_NIMCALL(Tnode265794*, parseall_290042_4241778752)(Tparsers290026* p0) {
	Tnode265794* result0;
	result0 = (Tnode265794*)0;
	switch ((*p0).skin) {
	case ((Tparserkind290004) 0):
	case ((Tparserkind290004) 1):
	{
		result0 = parseall_279210_1574654094((&(*p0).parser));
	}
	break;
	case ((Tparserkind290004) 2):
	{
		result0 = parseall_283003_959407361((&(*p0).parser));
	}
	break;
	case ((Tparserkind290004) 3):
	{
		internalerror_192113_155036129(((NimStringDesc*) &TMP1719));
		result0 = emptynode_266801_850551059;
	}
	break;
	}
	return result0;
}

N_NIMCALL(void, closeparsers_290038_4241778752)(Tparsers290026* p0) {
	closeparser_279214_1574654094((&(*p0).parser));
}

N_NIMCALL(Tnode265794*, parsefile_290029_4241778752)(NI32 fileidx0) {
	Tnode265794* result0;
	Tparsers290026 p0;
	FILE* f0;
	NimStringDesc* filename0;
	Tllstream255204* LOC6;
{	result0 = (Tnode265794*)0;
	memset((void*)(&p0), 0, sizeof(p0));
	objectInit((&p0), (&NTI290026));
	f0 = (FILE*)0;
	filename0 = tofullpathconsiderdirty_188401_155036129(fileidx0);
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = open_15603_1689653243(&f0, filename0, ((Filemode12409) 0), ((NI) -1));
		if (!!(LOC3)) goto LA4;
		rawmessage_190612_155036129(((Tmsgkind187002) 3), filename0);
		goto BeforeRet;
	}
	LA4: ;
	LOC6 = (Tllstream255204*)0;
	LOC6 = llstreamopen_255230_597494479(f0);
	openparsers_290032_4241778752((&p0), fileidx0, LOC6);
	result0 = parseall_290042_4241778752((&p0));
	closeparsers_290038_4241778752((&p0));
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tnode265794*, parsetoplevelstmt_290046_4241778752)(Tparsers290026* p0) {
	Tnode265794* result0;
	result0 = (Tnode265794*)0;
	switch ((*p0).skin) {
	case ((Tparserkind290004) 0):
	case ((Tparserkind290004) 1):
	{
		result0 = parsetoplevelstmt_279218_1574654094((&(*p0).parser));
	}
	break;
	case ((Tparserkind290004) 2):
	{
		result0 = parsetoplevelstmt_283008_959407361((&(*p0).parser));
	}
	break;
	case ((Tparserkind290004) 3):
	{
		internalerror_192113_155036129(((NimStringDesc*) &TMP1719));
		result0 = emptynode_266801_850551059;
	}
	break;
	}
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesDatInit000)(void) {
static TNimNode* TMP1376[2];
static TNimNode* TMP1377[4];
NI TMP1379;
static char* NIM_CONST TMP1378[4] = {
"skinStandard", 
"skinStrongSpaces", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP965[8];
NTI290026.size = sizeof(Tparsers290026);
NTI290026.kind = 18;
NTI290026.base = 0;
TMP1376[0] = &TMP965[1];
NTI290004.size = sizeof(Tparserkind290004);
NTI290004.kind = 14;
NTI290004.base = 0;
NTI290004.flags = 3;
for (TMP1379 = 0; TMP1379 < 4; TMP1379++) {
TMP965[TMP1379+2].kind = 1;
TMP965[TMP1379+2].offset = TMP1379;
TMP965[TMP1379+2].name = TMP1378[TMP1379];
TMP1377[TMP1379] = &TMP965[TMP1379+2];
}
TMP965[6].len = 4; TMP965[6].kind = 2; TMP965[6].sons = &TMP1377[0];
NTI290004.node = &TMP965[6];
TMP965[1].kind = 1;
TMP965[1].offset = offsetof(Tparsers290026, skin);
TMP965[1].typ = (&NTI290004);
TMP965[1].name = "skin";
TMP1376[1] = &TMP965[7];
TMP965[7].kind = 1;
TMP965[7].offset = offsetof(Tparsers290026, parser);
TMP965[7].typ = (&NTI279202);
TMP965[7].name = "parser";
TMP965[0].len = 2; TMP965[0].kind = 2; TMP965[0].sons = &TMP1376[0];
NTI290026.node = &TMP965[0];
}

