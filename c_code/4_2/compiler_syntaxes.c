/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tnode263794 Tnode263794;
typedef struct Tparsers288026 Tparsers288026;
typedef struct Tparser277202 Tparser277202;
typedef struct Tlexer256174 Tlexer256174;
typedef struct Tbaselexer254015 Tbaselexer254015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream253204 Tllstream253204;
typedef struct Tlineinfo185336 Tlineinfo185336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttoken256170 Ttoken256170;
typedef struct Tident193012 Tident193012;
typedef struct Ttype263832 Ttype263832;
typedef struct Tsym263826 Tsym263826;
typedef struct Tnodeseq263788 Tnodeseq263788;
typedef struct Tidobj193006 Tidobj193006;
typedef struct Ttypeseq263828 Ttypeseq263828;
typedef struct Tloc263808 Tloc263808;
typedef struct Ropeobj172006 Ropeobj172006;
typedef struct Tscope263820 Tscope263820;
typedef struct TY263927 TY263927;
typedef struct Tstrtable263798 Tstrtable263798;
typedef struct Tsymseq263796 Tsymseq263796;
typedef struct Tlib263812 Tlib263812;
typedef struct Tinstantiation263816 Tinstantiation263816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct TY263917 TY263917;
typedef NU8 Tparserkind288004;
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
struct  Tlineinfo185336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag263427Set;
typedef NU8 Tnodekind263020;
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
typedef NU8 Trenderflag282006Set;
typedef NU8 Tfilterkind288002;
typedef NimStringDesc* TY288022[4];
typedef NimStringDesc* TY288016[4];
struct  Tidobj193006  {
  TNimObject Sup;
NI id;
};
struct  Tident193012  {
  Tidobj193006 Sup;
NimStringDesc* s;
Tident193012* next;
NI h;
};
typedef NU64 Tnotekind185330Set;
typedef NimStringDesc* TY288494[1];
typedef NU8 Msgflag186444Set;
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
typedef NU8 Tsymkind263435;
struct  Tstrtable263798  {
NI counter;
Tsymseq263796* data;
};
typedef NU8 Tmagic263525;
typedef NU32 Tsymflag263184Set;
typedef NU32 Toption163009Set;
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
struct  Ropeobj172006  {
  TNimObject Sup;
Ropeobj172006* left;
Ropeobj172006* right;
NI length;
NimStringDesc* data;
};
struct  Tscope263820  {
NI depthlevel;
Tstrtable263798 symbols;
Tscope263820* parent;
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
struct  Tinstantiation263816  {
Tsym263826* sym;
Ttypeseq263828* concretetypes;
TY263917* usedby;
NI compilesid;
};
struct Tnodeseq263788 {
  TGenericSeq Sup;
  Tnode263794* data[SEQ_DECL_SIZE];
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
struct TY263917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest0, TNimType* typ0);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_186401_155036129)(NI32 fileidx0);
N_NIMCALL(NIM_BOOL, open_15603_1689653243)(FILE** f0, NimStringDesc* filename0, Filemode12409 mode0, NI bufsize0);
N_NIMCALL(void, rawmessage_188612_155036129)(Tmsgkind185002 msg0, NimStringDesc* arg0);
N_NIMCALL(void, openparsers_288032_4241778752)(Tparsers288026* p0, NI32 fileidx0, Tllstream253204* inputstream0);
N_NIMCALL(Tnode263794*, parsepipe_288107_4241778752)(NimStringDesc* filename0, Tllstream253204* inputstream0);
N_NIMCALL(Tllstream253204*, llstreamopen_253242_597494479)(NimStringDesc* filename0, Filemode12409 mode0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, llstreamreadline_253550_597494479)(Tllstream253204* s0, NimStringDesc** line0);
N_NIMCALL(NI, utf8bom_288077_4241778752)(NimStringDesc* s0);
N_NIMCALL(NIM_BOOL, containsshebang_288081_4241778752)(NimStringDesc* s0, NI i0);
N_NIMCALL(void, openparser_277331_1574654094)(Tparser277202* p0, NimStringDesc* filename0, Tllstream253204* inputstream0, NIM_BOOL strongspaces0);
N_NIMCALL(Tllstream253204*, llstreamopen_253218_597494479)(NimStringDesc* data0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
N_NIMCALL(Tnode263794*, parseall_277210_1574654094)(Tparser277202* p0);
N_NIMCALL(void, closeparser_277214_1574654094)(Tparser277202* p0);
N_NIMCALL(void, llstreamclose_253278_597494479)(Tllstream253204* s0);
N_NIMCALL(Tllstream253204*, evalpipe_288496_4241778752)(Tparsers288026* p0, Tnode263794* n0, NimStringDesc* filename0, Tllstream253204* start0);
N_NIMCALL(NIM_BOOL, identeq_193450_791273810)(Tident193012* id0, NimStringDesc* name0);
N_NIMCALL(Tllstream253204*, applyfilter_288459_4241778752)(Tparsers288026* p0, Tnode263794* n0, NimStringDesc* filename0, Tllstream253204* stdin_288465_4241778752);
N_NIMCALL(Tident193012*, getcallee_288423_4241778752)(Tnode263794* n0);
N_NIMCALL(NimStringDesc*, rendertree_282046_382274130)(Tnode263794* n0, Trenderflag282006Set renderflags0);
N_NIMCALL(Tfilterkind288002, getfilter_288174_4241778752)(Tident193012* ident0);
N_NIMCALL(Tparserkind288004, getparser_288223_4241778752)(Tident193012* ident0);
N_NIMCALL(Tllstream253204*, filtertmpl_287003_4161173357)(Tllstream253204* stdin_287005_4161173357, NimStringDesc* filename0, Tnode263794* call0);
N_NIMCALL(Tllstream253204*, filterstrip_286006_1413030668)(Tllstream253204* stdin_286008_1413030668, NimStringDesc* filename0, Tnode263794* call0);
N_NIMCALL(Tllstream253204*, filterreplace_286001_1413030668)(Tllstream253204* stdin_286003_1413030668, NimStringDesc* filename0, Tnode263794* call0);
N_NIMCALL(void, rawmessage_187645_155036129)(Tmsgkind185002 msg0, NimStringDesc** args0, NI args0Len0);
N_NIMCALL(void, msgwriteln_186450_155036129)(NimStringDesc* s0, Msgflag186444Set flags0);
N_NIMCALL(void, openparser_277322_1574654094)(Tparser277202* p0, NI32 fileidx0, Tllstream253204* inputstream0, NIM_BOOL strongspaces0);
N_NIMCALL(Tllstream253204*, llstreamopen_253230_597494479)(FILE* f0);
N_NIMCALL(Tnode263794*, parseall_288042_4241778752)(Tparsers288026* p0);
N_NIMCALL(Tnode263794*, parseall_281003_959407361)(Tparser277202* p0);
N_NIMCALL(void, internalerror_190113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(void, closeparsers_288038_4241778752)(Tparsers288026* p0);
N_NIMCALL(Tnode263794*, parsetoplevelstmt_277218_1574654094)(Tparser277202* p0);
N_NIMCALL(Tnode263794*, parsetoplevelstmt_281008_959407361)(Tparser277202* p0);
STRING_LITERAL(TMP1554, "|", 1);
STRING_LITERAL(TMP1669, "none", 4);
STRING_LITERAL(TMP1670, "stdtmpl", 7);
STRING_LITERAL(TMP1671, "replace", 7);
STRING_LITERAL(TMP1672, "strip", 5);
NIM_CONST TY288022 filternames_288019_4241778752 = {((NimStringDesc*) &TMP1669),
((NimStringDesc*) &TMP1670),
((NimStringDesc*) &TMP1671),
((NimStringDesc*) &TMP1672)}
;
STRING_LITERAL(TMP1673, "standard", 8);
STRING_LITERAL(TMP1674, "strongspaces", 12);
STRING_LITERAL(TMP1675, "braces", 6);
STRING_LITERAL(TMP1676, "endx", 4);
NIM_CONST TY288016 parsernames_288013_4241778752 = {((NimStringDesc*) &TMP1673),
((NimStringDesc*) &TMP1674),
((NimStringDesc*) &TMP1675),
((NimStringDesc*) &TMP1676)}
;
STRING_LITERAL(TMP1708, "parser to implement", 19);
TNimType NTI288026; /* TParsers */
TNimType NTI288004; /* TParserKind */
extern TNimType NTI277202; /* TParser */
extern Tnode263794* emptynode_264801_850551059;
extern Tnotekind185330Set gnotes_186077_155036129;

N_NIMCALL(NI, utf8bom_288077_4241778752)(NimStringDesc* s0) {
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

N_NIMCALL(NIM_BOOL, containsshebang_288081_4241778752)(NimStringDesc* s0, NI i0) {
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

N_NIMCALL(Tnode263794*, parsepipe_288107_4241778752)(NimStringDesc* filename0, Tllstream253204* inputstream0) {
	Tnode263794* result0;
	Tllstream253204* s0;
	result0 = (Tnode263794*)0;
	result0 = emptynode_264801_850551059;
	s0 = llstreamopen_253242_597494479(filename0, ((Filemode12409) 0));
	{
		NimStringDesc* line0;
		NIM_BOOL LOC5;
		NI i0;
		NI linenumber0;
		if (!!((s0 == NIM_NIL))) goto LA3;
		line0 = rawNewString(((NI) 80));
		LOC5 = (NIM_BOOL)0;
		LOC5 = llstreamreadline_253550_597494479(s0, (&line0));
		i0 = utf8bom_288077_4241778752(line0);
		linenumber0 = ((NI) 1);
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			LOC8 = (NIM_BOOL)0;
			LOC8 = containsshebang_288081_4241778752(line0, i0);
			if (!LOC8) goto LA9;
			LOC11 = (NIM_BOOL)0;
			LOC11 = llstreamreadline_253550_597494479(s0, (&line0));
			i0 = ((NI) 0);
			linenumber0 += ((NI) 1);
		}
		LA9: ;
		{
			NIM_BOOL LOC14;
			Tparser277202 q0;
			NimStringDesc* LOC20;
			Tllstream253204* LOC21;
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
			objectInit((&q0), (&NTI277202));
			LOC20 = (NimStringDesc*)0;
			LOC20 = copyStr(line0, i0);
			LOC21 = (Tllstream253204*)0;
			LOC21 = llstreamopen_253218_597494479(LOC20);
			openparser_277331_1574654094((&q0), filename0, LOC21, NIM_FALSE);
			result0 = parseall_277210_1574654094((&q0));
			closeparser_277214_1574654094((&q0));
		}
		LA16: ;
		llstreamclose_253278_597494479(s0);
	}
	LA3: ;
	return result0;
}

N_NIMCALL(Tident193012*, getcallee_288423_4241778752)(Tnode263794* n0) {
	Tident193012* result0;
	result0 = (Tident193012*)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = ((*n0).kind == ((Tnodekind263020) 27) || (*n0).kind == ((Tnodekind263020) 29) || (*n0).kind == ((Tnodekind263020) 30) || (*n0).kind == ((Tnodekind263020) 31) || (*n0).kind == ((Tnodekind263020) 26) || (*n0).kind == ((Tnodekind263020) 28) || (*n0).kind == ((Tnodekind263020) 32));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind263020) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		result0 = (*(*n0).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident;
	}
	goto LA1;
	LA5: ;
	{
		if (!((*n0).kind == ((Tnodekind263020) 2))) goto LA8;
		result0 = (*n0).kindU.S5.ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		LOC11 = (NimStringDesc*)0;
		LOC11 = rendertree_282046_382274130(n0, 0);
		rawmessage_188612_155036129(((Tmsgkind185002) 167), LOC11);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Tfilterkind288002, getfilter_288174_4241778752)(Tident193012* ident0) {
	Tfilterkind288002 result0;
{	result0 = (Tfilterkind288002)0;
	{
		Tfilterkind288002 i_288214_4241778752;
		NI res_288220_4241778752;
		i_288214_4241778752 = (Tfilterkind288002)0;
		res_288220_4241778752 = ((NI) 0);
		{
			while (1) {
				if (!(res_288220_4241778752 <= ((NI) 3))) goto LA3;
				i_288214_4241778752 = ((Tfilterkind288002) (res_288220_4241778752));
				{
					NIM_BOOL LOC6;
					LOC6 = (NIM_BOOL)0;
					LOC6 = identeq_193450_791273810(ident0, filternames_288019_4241778752[(i_288214_4241778752)- 0]);
					if (!LOC6) goto LA7;
					result0 = i_288214_4241778752;
					goto BeforeRet;
				}
				LA7: ;
				res_288220_4241778752 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = ((Tfilterkind288002) 0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tparserkind288004, getparser_288223_4241778752)(Tident193012* ident0) {
	Tparserkind288004 result0;
{	result0 = (Tparserkind288004)0;
	{
		Tparserkind288004 i_288414_4241778752;
		NI res_288420_4241778752;
		i_288414_4241778752 = (Tparserkind288004)0;
		res_288420_4241778752 = ((NI) 0);
		{
			while (1) {
				if (!(res_288420_4241778752 <= ((NI) 3))) goto LA3;
				i_288414_4241778752 = ((Tparserkind288004) (res_288420_4241778752));
				{
					NIM_BOOL LOC6;
					LOC6 = (NIM_BOOL)0;
					LOC6 = identeq_193450_791273810(ident0, parsernames_288013_4241778752[(i_288414_4241778752)- 0]);
					if (!LOC6) goto LA7;
					result0 = i_288414_4241778752;
					goto BeforeRet;
				}
				LA7: ;
				res_288420_4241778752 += ((NI) 1);
			} LA3: ;
		}
	}
	rawmessage_188612_155036129(((Tmsgkind185002) 31), (*ident0).s);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tllstream253204*, applyfilter_288459_4241778752)(Tparsers288026* p0, Tnode263794* n0, NimStringDesc* filename0, Tllstream253204* stdin_288465_4241778752) {
	Tllstream253204* result0;
	Tident193012* ident0;
	Tfilterkind288002 f0;
	result0 = (Tllstream253204*)0;
	ident0 = getcallee_288423_4241778752(n0);
	f0 = getfilter_288174_4241778752(ident0);
	switch (f0) {
	case ((Tfilterkind288002) 0):
	{
		(*p0).skin = getparser_288223_4241778752(ident0);
		result0 = stdin_288465_4241778752;
	}
	break;
	case ((Tfilterkind288002) 1):
	{
		result0 = filtertmpl_287003_4161173357(stdin_288465_4241778752, filename0, n0);
	}
	break;
	case ((Tfilterkind288002) 3):
	{
		result0 = filterstrip_286006_1413030668(stdin_288465_4241778752, filename0, n0);
	}
	break;
	case ((Tfilterkind288002) 2):
	{
		result0 = filterreplace_286001_1413030668(stdin_288465_4241778752, filename0, n0);
	}
	break;
	}
	{
		if (!!((f0 == ((Tfilterkind288002) 0)))) goto LA7;
		{
			TY288494 LOC13;
			TY288494 LOC14;
			if (!((gnotes_186077_155036129 &((NU64)1<<((NU)((((Tmsgkind185002) 277)- 237))&63U)))!=0)) goto LA11;
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_187645_155036129(((Tmsgkind185002) 277), LOC13, 0);
			msgwriteln_186450_155036129((*result0).s, 0);
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_187645_155036129(((Tmsgkind185002) 278), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	return result0;
}

N_NIMCALL(Tllstream253204*, evalpipe_288496_4241778752)(Tparsers288026* p0, Tnode263794* n0, NimStringDesc* filename0, Tllstream253204* start0) {
	Tllstream253204* result0;
{	result0 = (Tllstream253204*)0;
	result0 = start0;
	{
		if (!((*n0).kind == ((Tnodekind263020) 1))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = (NIM_BOOL)0;
		LOC8 = (NIM_BOOL)0;
		LOC8 = ((*n0).kind == ((Tnodekind263020) 29));
		if (!(LOC8)) goto LA9;
		LOC8 = ((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind263020) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		LOC7 = identeq_193450_791273810((*(*n0).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident, ((NimStringDesc*) &TMP1554));
		LA10: ;
		if (!LOC7) goto LA11;
		{
			NI i_288545_4241778752;
			NI res_288571_4241778752;
			i_288545_4241778752 = (NI)0;
			res_288571_4241778752 = ((NI) 1);
			{
				while (1) {
					if (!(res_288571_4241778752 <= ((NI) 2))) goto LA15;
					i_288545_4241778752 = res_288571_4241778752;
					{
						if (!((*(*n0).kindU.S6.sons->data[i_288545_4241778752]).kind == ((Tnodekind263020) 29))) goto LA18;
						result0 = evalpipe_288496_4241778752(p0, (*n0).kindU.S6.sons->data[i_288545_4241778752], filename0, result0);
					}
					goto LA16;
					LA18: ;
					{
						result0 = applyfilter_288459_4241778752(p0, (*n0).kindU.S6.sons->data[i_288545_4241778752], filename0, result0);
					}
					LA16: ;
					res_288571_4241778752 += ((NI) 1);
				} LA15: ;
			}
		}
	}
	goto LA5;
	LA11: ;
	{
		if (!((*n0).kind == ((Tnodekind263020) 115))) goto LA22;
		result0 = evalpipe_288496_4241778752(p0, (*n0).kindU.S6.sons->data[((NI) 0)], filename0, result0);
	}
	goto LA5;
	LA22: ;
	{
		result0 = applyfilter_288459_4241778752(p0, n0, filename0, result0);
	}
	LA5: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, openparsers_288032_4241778752)(Tparsers288026* p0, NI32 fileidx0, Tllstream253204* inputstream0) {
	Tllstream253204* s0;
	NimStringDesc* filename0;
	Tnode263794* pipe0;
	s0 = (Tllstream253204*)0;
	(*p0).skin = ((Tparserkind288004) 0);
	filename0 = tofullpathconsiderdirty_186401_155036129(fileidx0);
	pipe0 = parsepipe_288107_4241778752(filename0, inputstream0);
	{
		if (!!((pipe0 == NIM_NIL))) goto LA3;
		s0 = evalpipe_288496_4241778752(p0, pipe0, filename0, inputstream0);
	}
	goto LA1;
	LA3: ;
	{
		s0 = inputstream0;
	}
	LA1: ;
	switch ((*p0).skin) {
	case ((Tparserkind288004) 0):
	case ((Tparserkind288004) 2):
	case ((Tparserkind288004) 3):
	{
		openparser_277322_1574654094((&(*p0).parser), fileidx0, s0, NIM_FALSE);
	}
	break;
	case ((Tparserkind288004) 1):
	{
		openparser_277322_1574654094((&(*p0).parser), fileidx0, s0, NIM_TRUE);
	}
	break;
	}
}

N_NIMCALL(Tnode263794*, parseall_288042_4241778752)(Tparsers288026* p0) {
	Tnode263794* result0;
	result0 = (Tnode263794*)0;
	switch ((*p0).skin) {
	case ((Tparserkind288004) 0):
	case ((Tparserkind288004) 1):
	{
		result0 = parseall_277210_1574654094((&(*p0).parser));
	}
	break;
	case ((Tparserkind288004) 2):
	{
		result0 = parseall_281003_959407361((&(*p0).parser));
	}
	break;
	case ((Tparserkind288004) 3):
	{
		internalerror_190113_155036129(((NimStringDesc*) &TMP1708));
		result0 = emptynode_264801_850551059;
	}
	break;
	}
	return result0;
}

N_NIMCALL(void, closeparsers_288038_4241778752)(Tparsers288026* p0) {
	closeparser_277214_1574654094((&(*p0).parser));
}

N_NIMCALL(Tnode263794*, parsefile_288029_4241778752)(NI32 fileidx0) {
	Tnode263794* result0;
	Tparsers288026 p0;
	FILE* f0;
	NimStringDesc* filename0;
	Tllstream253204* LOC6;
{	result0 = (Tnode263794*)0;
	memset((void*)(&p0), 0, sizeof(p0));
	objectInit((&p0), (&NTI288026));
	f0 = (FILE*)0;
	filename0 = tofullpathconsiderdirty_186401_155036129(fileidx0);
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = open_15603_1689653243(&f0, filename0, ((Filemode12409) 0), ((NI) -1));
		if (!!(LOC3)) goto LA4;
		rawmessage_188612_155036129(((Tmsgkind185002) 3), filename0);
		goto BeforeRet;
	}
	LA4: ;
	LOC6 = (Tllstream253204*)0;
	LOC6 = llstreamopen_253230_597494479(f0);
	openparsers_288032_4241778752((&p0), fileidx0, LOC6);
	result0 = parseall_288042_4241778752((&p0));
	closeparsers_288038_4241778752((&p0));
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tnode263794*, parsetoplevelstmt_288046_4241778752)(Tparsers288026* p0) {
	Tnode263794* result0;
	result0 = (Tnode263794*)0;
	switch ((*p0).skin) {
	case ((Tparserkind288004) 0):
	case ((Tparserkind288004) 1):
	{
		result0 = parsetoplevelstmt_277218_1574654094((&(*p0).parser));
	}
	break;
	case ((Tparserkind288004) 2):
	{
		result0 = parsetoplevelstmt_281008_959407361((&(*p0).parser));
	}
	break;
	case ((Tparserkind288004) 3):
	{
		internalerror_190113_155036129(((NimStringDesc*) &TMP1708));
		result0 = emptynode_264801_850551059;
	}
	break;
	}
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesDatInit000)(void) {
static TNimNode* TMP1357[2];
static TNimNode* TMP1358[4];
NI TMP1360;
static char* NIM_CONST TMP1359[4] = {
"skinStandard", 
"skinStrongSpaces", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP953[8];
NTI288026.size = sizeof(Tparsers288026);
NTI288026.kind = 18;
NTI288026.base = 0;
TMP1357[0] = &TMP953[1];
NTI288004.size = sizeof(Tparserkind288004);
NTI288004.kind = 14;
NTI288004.base = 0;
NTI288004.flags = 3;
for (TMP1360 = 0; TMP1360 < 4; TMP1360++) {
TMP953[TMP1360+2].kind = 1;
TMP953[TMP1360+2].offset = TMP1360;
TMP953[TMP1360+2].name = TMP1359[TMP1360];
TMP1358[TMP1360] = &TMP953[TMP1360+2];
}
TMP953[6].len = 4; TMP953[6].kind = 2; TMP953[6].sons = &TMP1358[0];
NTI288004.node = &TMP953[6];
TMP953[1].kind = 1;
TMP953[1].offset = offsetof(Tparsers288026, skin);
TMP953[1].typ = (&NTI288004);
TMP953[1].name = "skin";
TMP1357[1] = &TMP953[7];
TMP953[7].kind = 1;
TMP953[7].offset = offsetof(Tparsers288026, parser);
TMP953[7].typ = (&NTI277202);
TMP953[7].name = "parser";
TMP953[0].len = 2; TMP953[0].kind = 2; TMP953[0].sons = &TMP1357[0];
NTI288026.node = &TMP953[0];
}

