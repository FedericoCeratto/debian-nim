/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <setjmp.h>

#include <string.h>

#include <sys/types.h>
typedef struct Tnode190813 Tnode190813;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tsym190843 Tsym190843;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tident167021 Tident167021;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
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
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Processobj143402 Processobj143402;
typedef struct Stringtableobj134012 Stringtableobj134012;
typedef struct Streamobj138027 Streamobj138027;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Keyvaluepairseq134010 Keyvaluepairseq134010;
typedef struct TY190933 TY190933;
typedef struct Keyvaluepair134008 Keyvaluepair134008;
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
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
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY15609;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15609 raiseAction;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef Tnode190813* TY208680[1];
typedef NimStringDesc* TY218714[1];
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
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
struct  Processobj143402  {
  TNimObject Sup;
int inhandle;
int outhandle;
int errhandle;
Streamobj138027* instream;
Streamobj138027* outstream;
Streamobj138027* errstream;
pid_t id;
int exitcode;
};
struct  Stringtableobj134012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq134010* data;
NU8 mode;
};
typedef N_NIMCALL_PTR(void, TY138028) (Streamobj138027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY138032) (Streamobj138027* s);
typedef N_NIMCALL_PTR(void, TY138036) (Streamobj138027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY138041) (Streamobj138027* s);
typedef N_NIMCALL_PTR(NI, TY138045) (Streamobj138027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138051) (Streamobj138027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138057) (Streamobj138027* s);
struct  Streamobj138027  {
  TNimObject Sup;
TY138028 closeimpl;
TY138032 atendimpl;
TY138036 setpositionimpl;
TY138041 getpositionimpl;
TY138045 readdataimpl;
TY138051 writedataimpl;
TY138057 flushimpl;
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
struct Keyvaluepair134008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
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
struct Keyvaluepairseq134010 {
  TGenericSeq Sup;
  Keyvaluepair134008 data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode190813*, maptypetoast_380080)(Ttype190849* t, Tlineinfo163338 info, NIM_BOOL allowrecursion);
N_NIMCALL(Tnode190813*, atomictypex_380066)(NimStringDesc* name, Ttype190849* t, Tlineinfo163338 info);
N_NIMCALL(Tsym190843*, newsym_191656)(NU8 symkind, Tident167021* name, Tsym190843* owner, Tlineinfo163338 info);
N_NIMCALL(Tident167021*, getident_167463)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(Tnode190813*, newsymnode_192325)(Tsym190843* sym);
N_NIMCALL(Tnode190813*, newnodeit_192807)(NU8 kind, Tlineinfo163338 info, Ttype190849* typ);
N_NIMCALL(void, add_191164)(Tnode190813* father, Tnode190813* son);
N_NIMCALL(Ttype190849*, base_220039)(Ttype190849* t);
N_NIMCALL(NI, len_193377)(Ttype190849* n);
N_NIMCALL(Ttype190849*, lastson_193442)(Ttype190849* n);
N_NIMCALL(Tnode190813*, maptypetobracket_380088)(NimStringDesc* name, Ttype190849* t, Tlineinfo163338 info);
N_NIMCALL(Ttype190849*, newtype_193140)(NU8 kind, Tsym190843* owner);
N_NIMCALL(Tnode190813*, copytree_195028)(Tnode190813* src);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, findfile_155339)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, readfile_13434)(NimStringDesc* filename);
N_NIMCALL(void, appendtomodule_191911)(Tsym190843* m, Tnode190813* n);
N_NIMCALL(Tnode190813*, newnode_192607)(NU8 kind, Tlineinfo163338 info, Tnodeseq190807* sons, Ttype190849* typ);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(Tnode190813*, newstrnode_191644)(NU8 kind, NimStringDesc* strval);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(void, localerror_165155)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52222)(Tcell46347* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46347* c);
static N_INLINE(void, rtladdcycleroot_50623)(Tcell46347* c);
N_NOINLINE(void, incl_47065)(Tcellset46359* s, Tcell46347* cell);
static N_INLINE(void, decref_51804)(Tcell46347* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(Processobj143402*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, Stringtableobj134012* env, NU8 options);
N_NIMCALL(void, write_138233)(Streamobj138027* s, NimStringDesc* x);
N_NIMCALL(Streamobj138027*, nospinputStream)(Processobj143402* p);
N_NIMCALL(void, close_138085)(Streamobj138027* s);
N_NIMCALL(NimStringDesc*, readoutput_380009)(Processobj143402* p);
N_NIMCALL(Streamobj138027*, nospoutputStream)(Processobj143402* p);
N_NIMCALL(NIM_BOOL, atend_138111)(Streamobj138027* s);
N_NIMCALL(NimStringDesc*, readline_138531)(Streamobj138027* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, nospwaitForExit)(Processobj143402* p, NI timeout);
STRING_LITERAL(TMP2831, "none", 4);
STRING_LITERAL(TMP2832, "bool", 4);
STRING_LITERAL(TMP2833, "char", 4);
STRING_LITERAL(TMP2834, "nil", 3);
STRING_LITERAL(TMP2835, "expr", 4);
STRING_LITERAL(TMP2836, "stmt", 4);
STRING_LITERAL(TMP2837, "void", 4);
STRING_LITERAL(TMP2838, "array", 5);
STRING_LITERAL(TMP2839, "typeDesc", 8);
STRING_LITERAL(TMP2840, "typeDesc", 8);
STRING_LITERAL(TMP2841, "void", 4);
STRING_LITERAL(TMP2842, "distinct", 8);
STRING_LITERAL(TMP2843, "tuple", 5);
STRING_LITERAL(TMP2844, "set", 3);
STRING_LITERAL(TMP2845, "ptr", 3);
STRING_LITERAL(TMP2846, "ref", 3);
STRING_LITERAL(TMP2847, "var", 3);
STRING_LITERAL(TMP2848, "seq", 3);
STRING_LITERAL(TMP2849, "proc", 4);
STRING_LITERAL(TMP2850, "openArray", 9);
STRING_LITERAL(TMP2851, "range", 5);
STRING_LITERAL(TMP2852, "pointer", 7);
STRING_LITERAL(TMP2853, "string", 6);
STRING_LITERAL(TMP2854, "cstring", 7);
STRING_LITERAL(TMP2855, "int", 3);
STRING_LITERAL(TMP2856, "int8", 4);
STRING_LITERAL(TMP2857, "int16", 5);
STRING_LITERAL(TMP2858, "int32", 5);
STRING_LITERAL(TMP2859, "int64", 5);
STRING_LITERAL(TMP2860, "float", 5);
STRING_LITERAL(TMP2861, "float32", 7);
STRING_LITERAL(TMP2862, "float64", 7);
STRING_LITERAL(TMP2863, "float128", 8);
STRING_LITERAL(TMP2864, "uint", 4);
STRING_LITERAL(TMP2865, "uint8", 5);
STRING_LITERAL(TMP2866, "uint16", 6);
STRING_LITERAL(TMP2867, "uint32", 6);
STRING_LITERAL(TMP2868, "uint64", 6);
STRING_LITERAL(TMP2869, "bignum", 6);
STRING_LITERAL(TMP2870, "const", 5);
STRING_LITERAL(TMP2871, "mutable", 7);
STRING_LITERAL(TMP2872, "varargs", 7);
STRING_LITERAL(TMP2873, "iter", 4);
STRING_LITERAL(TMP2874, "error", 5);
STRING_LITERAL(TMP2875, "builtinTypeClass", 16);
STRING_LITERAL(TMP2876, "concept", 7);
STRING_LITERAL(TMP2877, "compositeTypeClass", 18);
STRING_LITERAL(TMP2878, "and", 3);
STRING_LITERAL(TMP2879, "or", 2);
STRING_LITERAL(TMP2880, "not", 3);
STRING_LITERAL(TMP2881, "anything", 8);
STRING_LITERAL(TMP2882, "static", 6);
STRING_LITERAL(TMP2886, "", 0);
STRING_LITERAL(TMP2898, "\012", 1);
extern Tgcheap48216 gch_48244;
extern Tnode190813* emptynode_191807;
extern TSafePoint* exchandler_17043;
extern TNimType NTI190807; /* TNodeSeq */
extern TNimType NTI3431; /* IOError */
extern Exception* currexception_17045;
extern TNimType NTI3433; /* OSError */

static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr) {
	Tcell46347* result;
	result = 0;
	result = ((Tcell46347*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46347))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46347* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46347* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46347* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49846((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Tnode190813*, atomictypex_380066)(NimStringDesc* name, Ttype190849* t, Tlineinfo163338 info) {
	Tnode190813* result;
	Tsym190843* sym;
	Tident167021* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_167463(name);
	sym = newsym_191656(((NU8) 7), LOC1, (*t).owner, info);
	asgnRefNoCycle((void**) (&(*sym).typ), t);
	result = newsymnode_192325(sym);
	asgnRefNoCycle((void**) (&(*result).typ), t);
	return result;
}

N_NIMCALL(Tnode190813*, maptypetobracket_380088)(NimStringDesc* name, Ttype190849* t, Tlineinfo163338 info) {
	Tnode190813* result;
	Tnode190813* LOC1;
	result = 0;
	result = newnodeit_192807(((NU8) 42), info, t);
	LOC1 = 0;
	LOC1 = atomictypex_380066(name, t, info);
	add_191164(result, LOC1);
	{
		NI i_380113;
		NI HEX3Atmp_380130;
		NI LOC3;
		NI res_380133;
		i_380113 = 0;
		HEX3Atmp_380130 = 0;
		LOC3 = 0;
		LOC3 = len_193377(t);
		HEX3Atmp_380130 = (LOC3 - 1);
		res_380133 = ((NI) 0);
		{
			while (1) {
				if (!(res_380133 <= HEX3Atmp_380130)) goto LA5;
				i_380113 = res_380133;
				{
					Tnode190813* void_380126;
					if (!((*t).sons->data[i_380113] == NIM_NIL)) goto LA8;
					void_380126 = atomictypex_380066(((NimStringDesc*) &TMP2841), t, info);
					asgnRefNoCycle((void**) (&(*void_380126).typ), newtype_193140(((NU8) 3), (*t).owner));
					add_191164(result, void_380126);
				}
				goto LA6;
				LA8: ;
				{
					Tnode190813* LOC11;
					LOC11 = 0;
					LOC11 = maptypetoast_380080((*t).sons->data[i_380113], info, NIM_FALSE);
					add_191164(result, LOC11);
				}
				LA6: ;
				res_380133 += ((NI) 1);
			} LA5: ;
		}
	}
	return result;
}

N_NIMCALL(Tnode190813*, maptypetoast_380080)(Ttype190849* t, Tlineinfo163338 info, NIM_BOOL allowrecursion) {
	Tnode190813* result;
	result = 0;
	switch ((*t).kind) {
	case ((NU8) 0):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2831), t, info);
	}
	break;
	case ((NU8) 1):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2832), t, info);
	}
	break;
	case ((NU8) 2):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2833), t, info);
	}
	break;
	case ((NU8) 5):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2834), t, info);
	}
	break;
	case ((NU8) 6):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2835), t, info);
	}
	break;
	case ((NU8) 7):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2836), t, info);
	}
	break;
	case ((NU8) 3):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2837), t, info);
	}
	break;
	case ((NU8) 4):
	case ((NU8) 16):
	{
		Tnode190813* LOC9;
		Tnode190813* LOC10;
		Tnode190813* LOC11;
		result = newnodeit_192807(((NU8) 42), info, t);
		LOC9 = 0;
		LOC9 = atomictypex_380066(((NimStringDesc*) &TMP2838), t, info);
		add_191164(result, LOC9);
		LOC10 = 0;
		LOC10 = maptypetoast_380080((*t).sons->data[((NI) 0)], info, NIM_FALSE);
		add_191164(result, LOC10);
		LOC11 = 0;
		LOC11 = maptypetoast_380080((*t).sons->data[((NI) 1)], info, NIM_FALSE);
		add_191164(result, LOC11);
	}
	break;
	case ((NU8) 8):
	{
		{
			Ttype190849* LOC15;
			Tnode190813* LOC18;
			Ttype190849* LOC19;
			Tnode190813* LOC20;
			LOC15 = 0;
			LOC15 = base_220039(t);
			if (!!((LOC15 == NIM_NIL))) goto LA16;
			result = newnodeit_192807(((NU8) 42), info, t);
			LOC18 = 0;
			LOC18 = atomictypex_380066(((NimStringDesc*) &TMP2839), t, info);
			add_191164(result, LOC18);
			LOC19 = 0;
			LOC19 = base_220039(t);
			LOC20 = 0;
			LOC20 = maptypetoast_380080(LOC19, info, NIM_FALSE);
			add_191164(result, LOC20);
		}
		goto LA13;
		LA16: ;
		{
			result = atomictypex_380066(((NimStringDesc*) &TMP2840), t, info);
		}
		LA13: ;
	}
	break;
	case ((NU8) 9):
	{
		result = newnodeit_192807(((NU8) 42), info, t);
		{
			NI i_380197;
			NI HEX3Atmp_380243;
			NI LOC24;
			NI res_380246;
			i_380197 = 0;
			HEX3Atmp_380243 = 0;
			LOC24 = 0;
			LOC24 = len_193377(t);
			HEX3Atmp_380243 = (LOC24 - 1);
			res_380246 = ((NI) 0);
			{
				while (1) {
					Tnode190813* LOC27;
					if (!(res_380246 <= HEX3Atmp_380243)) goto LA26;
					i_380197 = res_380246;
					LOC27 = 0;
					LOC27 = maptypetoast_380080((*t).sons->data[i_380197], info, NIM_FALSE);
					add_191164(result, LOC27);
					res_380246 += ((NI) 1);
				} LA26: ;
			}
		}
	}
	break;
	case ((NU8) 11):
	case ((NU8) 10):
	case ((NU8) 15):
	case ((NU8) 53):
	{
		Ttype190849* LOC29;
		LOC29 = 0;
		LOC29 = lastson_193442(t);
		result = maptypetoast_380080(LOC29, info, NIM_FALSE);
	}
	break;
	case ((NU8) 13):
	{
		{
			if (!allowrecursion) goto LA33;
			result = maptypetobracket_380088(((NimStringDesc*) &TMP2842), t, info);
		}
		goto LA31;
		LA33: ;
		{
			result = atomictypex_380066((*(*(*t).sym).name).s, t, info);
		}
		LA31: ;
	}
	break;
	case ((NU8) 12):
	case ((NU8) 30):
	{
		result = atomictypex_380066((*(*(*t).sym).name).s, t, info);
	}
	break;
	case ((NU8) 17):
	{
		{
			Tnode190813* LOC48;
			if (!allowrecursion) goto LA40;
			result = newnodeit_192807(((NU8) 133), info, t);
			{
				if (!((*t).sons->data[((NI) 0)] == NIM_NIL)) goto LA44;
				add_191164(result, emptynode_191807);
			}
			goto LA42;
			LA44: ;
			{
				Tnode190813* LOC47;
				LOC47 = 0;
				LOC47 = maptypetoast_380080((*t).sons->data[((NI) 0)], info, NIM_FALSE);
				add_191164(result, LOC47);
			}
			LA42: ;
			LOC48 = 0;
			LOC48 = copytree_195028((*t).n);
			add_191164(result, LOC48);
		}
		goto LA38;
		LA40: ;
		{
			result = atomictypex_380066((*(*(*t).sym).name).s, t, info);
		}
		LA38: ;
	}
	break;
	case ((NU8) 14):
	{
		Tnode190813* LOC51;
		result = newnodeit_192807(((NU8) 150), info, t);
		LOC51 = 0;
		LOC51 = copytree_195028((*t).n);
		add_191164(result, LOC51);
	}
	break;
	case ((NU8) 18):
	{
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2843), t, info);
	}
	break;
	case ((NU8) 19):
	{
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2844), t, info);
	}
	break;
	case ((NU8) 21):
	{
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2845), t, info);
	}
	break;
	case ((NU8) 22):
	{
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2846), t, info);
	}
	break;
	case ((NU8) 23):
	{
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2847), t, info);
	}
	break;
	case ((NU8) 24):
	{
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2848), t, info);
	}
	break;
	case ((NU8) 25):
	{
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2849), t, info);
	}
	break;
	case ((NU8) 27):
	{
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2850), t, info);
	}
	break;
	case ((NU8) 20):
	{
		Tnode190813* LOC61;
		Tnode190813* LOC62;
		Tnode190813* LOC63;
		result = newnodeit_192807(((NU8) 42), info, t);
		LOC61 = 0;
		LOC61 = atomictypex_380066(((NimStringDesc*) &TMP2851), t, info);
		add_191164(result, LOC61);
		LOC62 = 0;
		LOC62 = copytree_195028((*(*t).n).kindU.S6.sons->data[((NI) 0)]);
		add_191164(result, LOC62);
		LOC63 = 0;
		LOC63 = copytree_195028((*(*t).n).kindU.S6.sons->data[((NI) 1)]);
		add_191164(result, LOC63);
	}
	break;
	case ((NU8) 26):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2852), t, info);
	}
	break;
	case ((NU8) 28):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2853), t, info);
	}
	break;
	case ((NU8) 29):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2854), t, info);
	}
	break;
	case ((NU8) 31):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2855), t, info);
	}
	break;
	case ((NU8) 32):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2856), t, info);
	}
	break;
	case ((NU8) 33):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2857), t, info);
	}
	break;
	case ((NU8) 34):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2858), t, info);
	}
	break;
	case ((NU8) 35):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2859), t, info);
	}
	break;
	case ((NU8) 36):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2860), t, info);
	}
	break;
	case ((NU8) 37):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2861), t, info);
	}
	break;
	case ((NU8) 38):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2862), t, info);
	}
	break;
	case ((NU8) 39):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2863), t, info);
	}
	break;
	case ((NU8) 40):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2864), t, info);
	}
	break;
	case ((NU8) 41):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2865), t, info);
	}
	break;
	case ((NU8) 42):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2866), t, info);
	}
	break;
	case ((NU8) 43):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2867), t, info);
	}
	break;
	case ((NU8) 44):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2868), t, info);
	}
	break;
	case ((NU8) 45):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2869), t, info);
	}
	break;
	case ((NU8) 46):
	{
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2870), t, info);
	}
	break;
	case ((NU8) 47):
	{
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2871), t, info);
	}
	break;
	case ((NU8) 48):
	{
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2872), t, info);
	}
	break;
	case ((NU8) 49):
	{
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2873), t, info);
	}
	break;
	case ((NU8) 50):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2874), t, info);
	}
	break;
	case ((NU8) 51):
	{
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2875), t, info);
	}
	break;
	case ((NU8) 52):
	{
		Tnode190813* LOC89;
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2876), t, info);
		LOC89 = 0;
		LOC89 = copytree_195028((*t).n);
		add_191164(result, LOC89);
	}
	break;
	case ((NU8) 54):
	{
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2877), t, info);
	}
	break;
	case ((NU8) 55):
	{
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2878), t, info);
	}
	break;
	case ((NU8) 56):
	{
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2879), t, info);
	}
	break;
	case ((NU8) 57):
	{
		result = maptypetobracket_380088(((NimStringDesc*) &TMP2880), t, info);
	}
	break;
	case ((NU8) 58):
	{
		result = atomictypex_380066(((NimStringDesc*) &TMP2881), t, info);
	}
	break;
	case ((NU8) 59):
	case ((NU8) 60):
	case ((NU8) 61):
	{
		Tnode190813* LOC96;
		result = newnodeit_192807(((NU8) 42), info, t);
		LOC96 = 0;
		LOC96 = atomictypex_380066(((NimStringDesc*) &TMP2882), t, info);
		add_191164(result, LOC96);
		{
			Tnode190813* LOC101;
			if (!!(((*t).n == NIM_NIL))) goto LA99;
			LOC101 = 0;
			LOC101 = copytree_195028((*t).n);
			add_191164(result, LOC101);
		}
		LA99: ;
	}
	break;
	}
	return result;
}

N_NIMCALL(Tnode190813*, opmaptypetoast_380265)(Ttype190849* t, Tlineinfo163338 info) {
	Tnode190813* result;
	result = 0;
	result = maptypetoast_380080(t, info, NIM_TRUE);
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17043;
	exchandler_17043 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17043 = (*exchandler_17043).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_17045;
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46347* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50623)(Tcell46347* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_47065((&gch_48244.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_52222)(Tcell46347* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49867(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50623(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_51804)(Tcell46347* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_49867(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50623(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Tcell46347* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49846(src);
		incref_52222(LOC5);
	}
	LA3: ;
	{
		Tcell46347* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49846((*dest));
		decref_51804(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17045), (*currexception_17045).parent);
}

N_NIMCALL(NimStringDesc*, opslurp_380040)(NimStringDesc* file, Tlineinfo163338 info, Tsym190843* module) {
	NimStringDesc* volatile result;
	TSafePoint TMP2885;
	result = 0;
	pushSafePoint(&TMP2885);
	TMP2885.status = _setjmp(TMP2885.context);
	if (TMP2885.status == 0) {
		NimStringDesc* filename;
		Tnodeseq190807* LOC2;
		TY208680 LOC3;
		Tnode190813* LOC4;
		filename = findfile_155339(file);
		result = readfile_13434(filename);
		LOC2 = 0;
		LOC2 = (Tnodeseq190807*) newSeq((&NTI190807), 1);
		memset((void*)LOC3, 0, sizeof(LOC3));
		LOC3[0] = newstrnode_191644(((NU8) 20), filename);
		asgnRefNoCycle((void**) (&LOC2->data[0]), LOC3[0]);
		LOC4 = 0;
		LOC4 = newnode_192607(((NU8) 121), info, LOC2, NIM_NIL);
		appendtomodule_191911(module, LOC4);
		popSafePoint();
	}
	else {
		popSafePoint();
		if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))) {
			TMP2885.status = 0;
			localerror_165155(info, ((NU16) 3), file);
			result = copyString(((NimStringDesc*) &TMP2886));
			popCurrentException();
		}
	}
	if (TMP2885.status != 0) reraiseException();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, readoutput_380009)(Processobj143402* p) {
	NimStringDesc* result;
	Streamobj138027* output;
	NI LOC5;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP2886));
	output = nospoutputStream(p);
	{
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* LOC4;
			LOC3 = 0;
			LOC3 = atend_138111(output);
			if (!!(LOC3)) goto LA2;
			LOC4 = 0;
			LOC4 = readline_138531(output);
			result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
			result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP2898));
		} LA2: ;
	}
	result = setLengthStr(result, ((NI) ((NI)((result ? result->Sup.len : 0) - ((NI) 1)))));
	LOC5 = 0;
	LOC5 = nospwaitForExit(p, ((NI) -1));
	return result;
}

N_NIMCALL(NimStringDesc*, opgorge_380027)(NimStringDesc* cmd, NimStringDesc* input) {
	NimStringDesc* volatile result;
	TSafePoint TMP2887;
	result = 0;
	pushSafePoint(&TMP2887);
	TMP2887.status = _setjmp(TMP2887.context);
	if (TMP2887.status == 0) {
		Processobj143402* p;
		TY218714 LOC2;
		memset((void*)LOC2, 0, sizeof(LOC2));
		p = nospstartProcess(cmd, ((NimStringDesc*) &TMP2886), LOC2, 0, NIM_NIL, 4);
		{
			Streamobj138027* LOC7;
			Streamobj138027* LOC8;
			if (!!(((input ? input->Sup.len : 0) == ((NI) 0)))) goto LA5;
			LOC7 = 0;
			LOC7 = nospinputStream(p);
			write_138233(LOC7, input);
			LOC8 = 0;
			LOC8 = nospinputStream(p);
			close_138085(LOC8);
		}
		LA5: ;
		result = readoutput_380009(p);
		popSafePoint();
	}
	else {
		popSafePoint();
		if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))||isObj(getCurrentException()->Sup.m_type, (&NTI3433))) {
			TMP2887.status = 0;
			result = copyString(((NimStringDesc*) &TMP2886));
			popCurrentException();
		}
	}
	if (TMP2887.status != 0) reraiseException();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_vmdepsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_vmdepsDatInit)(void) {
}

