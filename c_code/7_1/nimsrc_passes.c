/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct Tsym190843 Tsym190843;
typedef struct Tnode190813 Tnode190813;
typedef struct Tpass241017 Tpass241017;
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct Trodreader233030 Trodreader233030;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct Tllstream178204 Tllstream178204;
typedef struct Tparsers218035 Tparsers218035;
typedef struct Tparser206205 Tparser206205;
typedef struct Tlexer181185 Tlexer181185;
typedef struct Tbaselexer179024 Tbaselexer179024;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttoken181181 Ttoken181181;
typedef struct Tident167021 Tident167021;
typedef struct Tidobj167015 Tidobj167015;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Ttype190849 Ttype190849;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib190831 Tlib190831;
typedef struct Tcell46347 Tcell46347;
typedef struct Tcellseq46363 Tcellseq46363;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46359 Tcellset46359;
typedef struct Tpagedesc46355 Tpagedesc46355;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct TY122008 TY122008;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct TY432269 TY432269;
typedef struct TY190933 TY190933;
typedef struct Tindex233028 Tindex233028;
typedef struct Tiitable198274 Tiitable198274;
typedef struct Tiipairseq198272 Tiipairseq198272;
typedef struct Tidtable190861 Tidtable190861;
typedef struct Tidpairseq190859 Tidpairseq190859;
typedef struct Memfile231208 Memfile231208;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Tiipair198270 Tiipair198270;
typedef struct Tidpair190857 Tidpair190857;
typedef N_NIMCALL_PTR(Tsym190843*, TY241064) (Tsym190843* m, NI32 fileidx);
typedef N_NIMCALL_PTR(Tnode190813*, TY241069) (Tsym190843* m, NI32 fileidx);
typedef N_NIMCALL_PTR(Tpasscontext241005*, Tpassopen241009) (Tsym190843* module);
typedef N_NIMCALL_PTR(Tpasscontext241005*, Tpassopencached241011) (Tsym190843* module, Trodreader233030* rd);
typedef N_NIMCALL_PTR(Tnode190813*, Tpassprocess241015) (Tpasscontext241005* p, Tnode190813* toplevelstmt);
typedef N_NIMCALL_PTR(Tnode190813*, Tpassclose241013) (Tpasscontext241005* p, Tnode190813* n);
struct Tpass241017 {
Tpassopen241009 Field0;
Tpassopencached241011 Field1;
Tpassprocess241015 Field2;
Tpassclose241013 Field3;
};
typedef Tpass241017 TY241173[10];
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext241005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tbaselexer179024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream178204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo163338 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} Terrorhandler181183;
struct  Tlexer181185  {
  Tbaselexer179024 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler181183 errorhandler;
};
struct  Ttoken181181  {
NU8 toktype;
NI indent;
Tident167021* ident;
NI64 inumber;
NF fnumber;
NU8 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tparser206205  {
NI currind;
NIM_BOOL firsttok;
NIM_BOOL strongspaces;
Tlexer181185 lex;
Ttoken181181 tok;
NI inpragma;
NI insemistmtlist;
};
struct  Tparsers218035  {
NU8 skin;
Tparser206205 parser;
};
typedef Tpasscontext241005* Tpasscontextarray241168[10];
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
};
struct  Tsym190843  {
  Tidobj167015 Sup;
NU8 kind;
union{
struct {Ttypeseq190845* typeinstcache;
Tscope190837* typscope;
} S1;
struct {TY190944* procinstcache;
Tsym190843* gcunsafetyreason;
} S2;
struct {TY190944* usedgenerics;
Tstrtable190817 tab;
} S3;
struct {Tsym190843* guard;
} S4;
} kindU;
NU16 magic;
Ttype190849* typ;
Tident167021* name;
Tlineinfo163338 info;
Tsym190843* owner;
NU32 flags;
Tnode190813* ast;
NU32 options;
NI position;
NI offset;
Tloc190827 loc;
Tlib190831* annex;
Tnode190813* constraint;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  Tcell46347  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46363  {
NI len;
NI cap;
Tcell46347** d;
};
struct  Tcellset46359  {
NI counter;
NI max;
Tpagedesc46355* head;
Tpagedesc46355** data;
};
typedef Tsmallchunk27440* TY28222[512];
typedef Ttrunk27413* Ttrunkbuckets27415[256];
struct  Tintset27417  {
Ttrunkbuckets27415 data;
};
struct  Tmemregion28210  {
NI minlargeobj;
NI maxlargeobj;
TY28222 freesmallchunks;
Tllchunk28204* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27442* freechunkslist;
Tintset27417 chunkstarts;
Tavlnode28208* root;
Tavlnode28208* deleted;
Tavlnode28208* last;
Tavlnode28208* freeavlnodes;
};
struct  Tgcstat48214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48216  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46363 zct;
Tcellseq46363 decstack;
Tcellset46359 cycleroots;
Tcellseq46363 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
struct  Tnode190813  {
Ttype190849* typ;
Tlineinfo163338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym190843* sym;
} S4;
struct {Tident167021* ident;
} S5;
struct {Tnodeseq190807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tllstream178204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Ttype190849  {
  Tidobj167015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq190845* sons;
Tnode190813* n;
Tsym190843* owner;
Tsym190843* sym;
Tsym190843* destructor;
Tsym190843* deepcopy;
Tsym190843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc190827 loc;
};
struct TY432269 {
Tnode190813* Field0;
Tnode190813* Field1;
};
struct  Tiitable198274  {
NI counter;
Tiipairseq198272* data;
};
struct  Tindex233028  {
NI lastidxkey;
NI lastidxval;
Tiitable198274 tab;
NimStringDesc* r;
NI offset;
};
struct  Tidtable190861  {
NI counter;
Tidpairseq190859* data;
};
struct  Memfile231208  {
void* mem;
NI size;
int handle;
};
struct  Trodreader233030  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY190933* moddeps;
TY190933* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex233028 index;
Tindex233028 imports;
NI readerindex;
NI line;
NI moduleid;
Tidtable190861 syms;
Memfile231208 memfile;
Tsymseq190815* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib190831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj161009* name;
Tnode190813* path;
};
typedef NI TY27420[16];
struct  Tpagedesc46355  {
Tpagedesc46355* next;
NI key;
TY27420 bits;
};
struct  Tbasechunk27438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27440  {
  Tbasechunk27438 Sup;
Tsmallchunk27440* next;
Tsmallchunk27440* prev;
Tfreecell27430* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28204  {
NI size;
NI acc;
Tllchunk28204* next;
};
struct  Tbigchunk27442  {
  Tbasechunk27438 Sup;
Tbigchunk27442* next;
Tbigchunk27442* prev;
NI align;
NF data;
};
struct  Ttrunk27413  {
Ttrunk27413* next;
NI key;
TY27420 bits;
};
typedef Tavlnode28208* TY28214[2];
struct  Tavlnode28208  {
TY28214 link;
NI key;
NI upperbound;
NI level;
};
struct  Tiipair198270  {
NI key;
NI val;
};
struct  Tidpair190857  {
Tidobj167015* key;
TNimObject* val;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct TY122008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Tiipairseq198272 {
  TGenericSeq Sup;
  Tiipair198270 data[SEQ_DECL_SIZE];
};
struct Tidpairseq190859 {
  TGenericSeq Sup;
  Tidpair190857 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(void, openpasses_241293)(Tpasscontext241005** a, Tsym190843* module);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_164407)(NI32 fileidx);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(Tllstream178204*, llstreamopen_178238)(FILE* f);
N_NIMCALL(Tllstream178204*, llstreamopen_178256)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, rawmessage_164960)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_218047)(Tparsers218035* p, NI32 fileidx, Tllstream178204* inputstream);
N_NIMCALL(void, processimplicits_241621)(TY122008* implicits, NU8 nodekind, Tpasscontext241005** a);
N_NIMCALL(Tnode190813*, newnodei_192351)(NU8 kind, Tlineinfo163338 info);
N_NIMCALL(Tnode190813*, newstrnode_191644)(NU8 kind, NimStringDesc* strval);
N_NIMCALL(void, addson_192819)(Tnode190813* father, Tnode190813* son);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_241454)(Tnode190813* n, Tpasscontext241005** a);
N_NIMCALL(Tnode190813*, parsetoplevelstmt_218070)(Tparsers218035* p);
N_NIMCALL(void, closeparsers_218056)(Tparsers218035* p);
N_NIMCALL(void, closepasses_241404)(Tpasscontext241005** a);
N_NIMCALL(void, idsynchronizationpoint_189453)(NI idrange);
N_NIMCALL(void, openpassescached_241342)(Tpasscontext241005** a, Tsym190843* module, Trodreader233030* rd);
N_NIMCALL(Tnode190813*, loadinitsection_233077)(Trodreader233030* r);
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
N_NIMCALL(void, processtoplevelstmtcached_241513)(Tnode190813* n, Tpasscontext241005** a);
N_NIMCALL(void, closepassescached_241563)(Tpasscontext241005** a);
N_NIMCALL(void, carrypass_241208)(Tpass241017 p, Tsym190843* module, TY432269 m, TY432269* Result);
STRING_LITERAL(TMP1506, "-", 1);
STRING_LITERAL(TMP1507, "stdinfile", 9);
TY241064 gimportmodule_241068;
TY241069 gincludefile_241073;
TY241173 gpasses_241175;
NI gpasseslen_241176;
extern TNimType NTI3411; /* RootObj */
TNimType NTI241005; /* TPassContext */
extern TNimType NTI138; /* bool */
extern TNimType NTI218035; /* TParsers */
extern Tgcheap48216 gch_48244;
extern Tlineinfo163338 gcmdlineinfo_163922;
extern TY122008* implicitimports_154276;
extern TY122008* implicitincludes_154294;

N_NIMCALL(void, openpasses_241293)(Tpasscontext241005** a, Tsym190843* module) {
	{
		NI i_241310;
		NI HEX3Atmp_241319;
		NI res_241322;
		i_241310 = 0;
		HEX3Atmp_241319 = 0;
		HEX3Atmp_241319 = (NI)(gpasseslen_241176 - ((NI) 1));
		res_241322 = ((NI) 0);
		{
			while (1) {
				if (!(res_241322 <= HEX3Atmp_241319)) goto LA3;
				i_241310 = res_241322;
				{
					if (!!(gpasses_241175[(i_241310)- 0].Field0 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a[(i_241310)- 0]), gpasses_241175[(i_241310)- 0].Field0(module));
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a[(i_241310)- 0]), NIM_NIL);
				}
				LA4: ;
				res_241322 += ((NI) 1);
			} LA3: ;
		}
	}
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr) {
	Tcell46347* result;
	result = 0;
	result = ((Tcell46347*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46347))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46347* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46347* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_241454)(Tnode190813* n, Tpasscontext241005** a) {
	NIM_BOOL result;
	Tnode190813* m;
{	result = 0;
	m = n;
	{
		NI i_241473;
		NI HEX3Atmp_241490;
		NI res_241493;
		i_241473 = 0;
		HEX3Atmp_241490 = 0;
		HEX3Atmp_241490 = (NI)(gpasseslen_241176 - ((NI) 1));
		res_241493 = ((NI) 0);
		{
			while (1) {
				if (!(res_241493 <= HEX3Atmp_241490)) goto LA3;
				i_241473 = res_241493;
				{
					if (!!(gpasses_241175[(i_241473)- 0].Field2 == 0)) goto LA6;
					m = gpasses_241175[(i_241473)- 0].Field2(a[(i_241473)- 0], m);
					{
						if (!m == 0) goto LA10;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA10: ;
				}
				LA6: ;
				res_241493 += ((NI) 1);
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, processimplicits_241621)(TY122008* implicits, NU8 nodekind, Tpasscontext241005** a) {
	{
		NimStringDesc* module_241637;
		NI i_241644;
		NI L_241646;
		module_241637 = 0;
		i_241644 = ((NI) 0);
		L_241646 = (implicits ? implicits->Sup.len : 0);
		{
			while (1) {
				Tnode190813* importstmt;
				Tnode190813* str;
				if (!(i_241644 < L_241646)) goto LA3;
				module_241637 = implicits->data[i_241644];
				importstmt = newnodei_192351(nodekind, gcmdlineinfo_163922);
				str = newstrnode_191644(((NU8) 20), module_241637);
				(*str).info = gcmdlineinfo_163922;
				addson_192819(importstmt, str);
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = processtoplevelstmt_241454(importstmt, a);
					if (!!(LOC6)) goto LA7;
					goto LA1;
				}
				LA7: ;
				i_241644 += ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
}

N_NIMCALL(void, closepasses_241404)(Tpasscontext241005** a) {
	Tnode190813* m;
	m = NIM_NIL;
	{
		NI i_241421;
		NI HEX3Atmp_241431;
		NI res_241434;
		i_241421 = 0;
		HEX3Atmp_241431 = 0;
		HEX3Atmp_241431 = (NI)(gpasseslen_241176 - ((NI) 1));
		res_241434 = ((NI) 0);
		{
			while (1) {
				if (!(res_241434 <= HEX3Atmp_241431)) goto LA3;
				i_241421 = res_241434;
				{
					if (!!(gpasses_241175[(i_241421)- 0].Field3 == 0)) goto LA6;
					m = gpasses_241175[(i_241421)- 0].Field3(a[(i_241421)- 0], m);
				}
				LA6: ;
				unsureAsgnRef((void**) (&a[(i_241421)- 0]), NIM_NIL);
				res_241434 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, openpassescached_241342)(Tpasscontext241005** a, Tsym190843* module, Trodreader233030* rd) {
	{
		NI i_241360;
		NI HEX3Atmp_241381;
		NI res_241384;
		i_241360 = 0;
		HEX3Atmp_241381 = 0;
		HEX3Atmp_241381 = (NI)(gpasseslen_241176 - ((NI) 1));
		res_241384 = ((NI) 0);
		{
			while (1) {
				if (!(res_241384 <= HEX3Atmp_241381)) goto LA3;
				i_241360 = res_241384;
				{
					if (!!(gpasses_241175[(i_241360)- 0].Field1 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a[(i_241360)- 0]), gpasses_241175[(i_241360)- 0].Field1(module, rd));
					{
						if (!!((a[(i_241360)- 0] == NIM_NIL))) goto LA10;
						(*a[(i_241360)- 0]).fromcache = NIM_TRUE;
					}
					LA10: ;
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a[(i_241360)- 0]), NIM_NIL);
				}
				LA4: ;
				res_241384 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processtoplevelstmtcached_241513)(Tnode190813* n, Tpasscontext241005** a) {
	Tnode190813* m;
	m = n;
	{
		NI i_241531;
		NI HEX3Atmp_241540;
		NI res_241543;
		i_241531 = 0;
		HEX3Atmp_241540 = 0;
		HEX3Atmp_241540 = (NI)(gpasseslen_241176 - ((NI) 1));
		res_241543 = ((NI) 0);
		{
			while (1) {
				if (!(res_241543 <= HEX3Atmp_241540)) goto LA3;
				i_241531 = res_241543;
				{
					if (!!(gpasses_241175[(i_241531)- 0].Field1 == 0)) goto LA6;
					m = gpasses_241175[(i_241531)- 0].Field2(a[(i_241531)- 0], m);
				}
				LA6: ;
				res_241543 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, closepassescached_241563)(Tpasscontext241005** a) {
	Tnode190813* m;
	m = NIM_NIL;
	{
		NI i_241580;
		NI HEX3Atmp_241597;
		NI res_241600;
		i_241580 = 0;
		HEX3Atmp_241597 = 0;
		HEX3Atmp_241597 = (NI)(gpasseslen_241176 - ((NI) 1));
		res_241600 = ((NI) 0);
		{
			while (1) {
				if (!(res_241600 <= HEX3Atmp_241597)) goto LA3;
				i_241580 = res_241600;
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = !(gpasses_241175[(i_241580)- 0].Field1 == 0);
					if (!(LOC6)) goto LA7;
					LOC6 = !(gpasses_241175[(i_241580)- 0].Field3 == 0);
					LA7: ;
					if (!LOC6) goto LA8;
					m = gpasses_241175[(i_241580)- 0].Field3(a[(i_241580)- 0], m);
				}
				LA8: ;
				unsureAsgnRef((void**) (&a[(i_241580)- 0]), NIM_NIL);
				res_241600 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processmodule_241056)(Tsym190843* module, Tllstream178204* stream, Trodreader233030* rd) {
	Tparsers218035 p;
	Tpasscontextarray241168 a;
	Tllstream178204* s;
	NI32 fileidx;
{	memset((void*)(&p), 0, sizeof(p));
	objectInit((&p), (&NTI218035));
	memset((void*)a, 0, sizeof(a));
	s = 0;
	fileidx = ((NI32) ((*module).position));
	{
		if (!(rd == NIM_NIL)) goto LA3;
		openpasses_241293(a, module);
		{
			NimStringDesc* filename;
			if (!(stream == NIM_NIL)) goto LA7;
			filename = tofullpathconsiderdirty_164407(fileidx);
			{
				NimStringDesc* LOC13;
				if (!eqStrings((*(*module).name).s, ((NimStringDesc*) &TMP1506))) goto LA11;
				LOC13 = 0;
				LOC13 = (*(*module).name).s; (*(*module).name).s = copyStringRC1(((NimStringDesc*) &TMP1507));
				if (LOC13) nimGCunrefNoCycle(LOC13);
				s = llstreamopen_178238(stdin);
			}
			goto LA9;
			LA11: ;
			{
				s = llstreamopen_178256(filename, ((NU8) 0));
			}
			LA9: ;
			{
				if (!(s == NIM_NIL)) goto LA17;
				rawmessage_164960(((NU16) 3), filename);
				goto BeforeRet;
			}
			LA17: ;
		}
		goto LA5;
		LA7: ;
		{
			s = stream;
		}
		LA5: ;
		{
			while (1) {
				openparsers_218047((&p), fileidx, s);
				{
					if (!!((((*module).flags &(1<<((((NU8) 13))&31)))!=0))) goto LA24;
					processimplicits_241621(implicitimports_154276, ((NU8) 116), a);
					processimplicits_241621(implicitincludes_154294, ((NU8) 121), a);
				}
				LA24: ;
				{
					while (1) {
						Tnode190813* n;
						n = parsetoplevelstmt_218070((&p));
						{
							if (!((*n).kind == ((NU8) 1))) goto LA30;
							goto LA26;
						}
						LA30: ;
						{
							NIM_BOOL LOC34;
							LOC34 = 0;
							LOC34 = processtoplevelstmt_241454(n, a);
							if (!!(LOC34)) goto LA35;
							goto LA26;
						}
						LA35: ;
					}
				} LA26: ;
				closeparsers_218056((&p));
				{
					if (!!(((*s).kind == ((NU8) 3)))) goto LA39;
					goto LA20;
				}
				LA39: ;
			}
		} LA20: ;
		closepasses_241404(a);
		idsynchronizationpoint_189453(((NI) 1000));
	}
	goto LA1;
	LA3: ;
	{
		Tnode190813* n;
		openpassescached_241342(a, module, rd);
		n = loadinitsection_233077(rd);
		{
			NI i_241766;
			NI HEX3Atmp_241777;
			NI LOC43;
			NI res_241780;
			i_241766 = 0;
			HEX3Atmp_241777 = 0;
			LOC43 = 0;
			LOC43 = sonslen_193403(n);
			HEX3Atmp_241777 = (NI)(LOC43 - ((NI) 1));
			res_241780 = ((NI) 0);
			{
				while (1) {
					if (!(res_241780 <= HEX3Atmp_241777)) goto LA45;
					i_241766 = res_241780;
					processtoplevelstmtcached_241513((*n).kindU.S6.sons->data[i_241766], a);
					res_241780 += ((NI) 1);
				} LA45: ;
			}
		}
		closepassescached_241563(a);
	}
	LA1: ;
	}BeforeRet: ;
}

N_NIMCALL(void, clearpasses_241182)(void) {
	gpasseslen_241176 = ((NI) 0);
}

N_NIMCALL(void, registerpass_241190)(Tpass241017 p) {
	gpasses_241175[(gpasseslen_241176)- 0] = p;
	gpasseslen_241176 += ((NI) 1);
}

N_NIMCALL(NIM_BOOL, astneeded_241093)(Tsym190843* s) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC5;
		LOC3 = 0;
		LOC4 = 0;
		LOC5 = 0;
		LOC5 = ((12288 &(1<<(((*s).kind)&31)))!=0);
		if (!(LOC5)) goto LA6;
		LOC5 = ((8454144 & (*s).flags) == 0);
		LA6: ;
		LOC4 = LOC5;
		if (!(LOC4)) goto LA7;
		LOC4 = !(((*(*s).typ).callconv == ((NU8) 5)));
		LA7: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*(*s).ast).kindU.S6.sons->data[((NI) 2)]).kind == ((NU8) 1));
		LA8: ;
		if (!LOC3) goto LA9;
		result = NIM_FALSE;
	}
	goto LA1;
	LA9: ;
	{
		result = NIM_TRUE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, carrypass_241208)(Tpass241017 p, Tsym190843* module, TY432269 m, TY432269* Result) {
	Tpasscontext241005* c;
	c = p.Field0(module);
	unsureAsgnRef((void**) (&(*Result).Field0), p.Field2(c, m.Field0));
	{
		if (!!((p.Field3 == NIM_NIL))) goto LA3;
		unsureAsgnRef((void**) (&(*Result).Field1), p.Field3(c, m.Field1));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) (&(*Result).Field1), m.Field1);
	}
	LA1: ;
}

N_NIMCALL(void, carrypasses_241231)(Tnode190813* nodes, Tsym190843* module, Tpass241017* passes, NI passesLen0) {
	TY432269 passdata;
	memset((void*)(&passdata), 0, sizeof(passdata));
	passdata.Field0 = nodes;
	{
		Tpass241017 pass_241272;
		NI i_241277;
		memset((void*)(&pass_241272), 0, sizeof(pass_241272));
		i_241277 = ((NI) 0);
		{
			while (1) {
				TY432269 LOC4;
				if (!(i_241277 < passesLen0)) goto LA3;
				pass_241272 = passes[i_241277];
				memset((void*)(&LOC4), 0, sizeof(LOC4));
				carrypass_241208(pass_241272, module, passdata, (&LOC4));
				passdata.Field0 = LOC4.Field0;
				passdata.Field1 = LOC4.Field1;
				i_241277 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_passesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_passesDatInit)(void) {
static TNimNode TMP836[1];
NTI241005.size = sizeof(Tpasscontext241005);
NTI241005.kind = 17;
NTI241005.base = (&NTI3411);
NTI241005.flags = 1;
TMP836[0].kind = 1;
TMP836[0].offset = offsetof(Tpasscontext241005, fromcache);
TMP836[0].typ = (&NTI138);
TMP836[0].name = "fromCache";
NTI241005.node = &TMP836[0];
}

