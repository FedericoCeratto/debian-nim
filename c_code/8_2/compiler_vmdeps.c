/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <setjmp.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
typedef struct Tnode214790 Tnode214790;
typedef struct Ttype214828 Ttype214828;
typedef struct Tlineinfo182337 Tlineinfo182337;
typedef struct Tidobj189006 Tidobj189006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq214824 Ttypeseq214824;
typedef struct Tsym214822 Tsym214822;
typedef struct Tloc214804 Tloc214804;
typedef struct Ropeobj169006 Ropeobj169006;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tident189012 Tident189012;
typedef struct Tscope214816 Tscope214816;
typedef struct TY214925 TY214925;
typedef struct Tstrtable214794 Tstrtable214794;
typedef struct Tsymseq214792 Tsymseq214792;
typedef struct Tlib214808 Tlib214808;
typedef struct Cell47505 Cell47505;
typedef struct Cellseq47521 Cellseq47521;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47517 Cellset47517;
typedef struct Pagedesc47513 Pagedesc47513;
typedef struct Memregion29688 Memregion29688;
typedef struct Smallchunk29640 Smallchunk29640;
typedef struct Llchunk29682 Llchunk29682;
typedef struct Bigchunk29642 Bigchunk29642;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29686 Avlnode29686;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Tnodeseq214784 Tnodeseq214784;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Processobj149404 Processobj149404;
typedef struct Stringtableobj140209 Stringtableobj140209;
typedef struct Streamobj144418 Streamobj144418;
typedef struct Tinstantiation214812 Tinstantiation214812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Basechunk29638 Basechunk29638;
typedef struct Freecell29630 Freecell29630;
typedef struct Keyvaluepairseq140207 Keyvaluepairseq140207;
typedef struct TY214913 TY214913;
typedef struct Keyvaluepair140205 Keyvaluepair140205;
struct  Tlineinfo182337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj189006  {
  TNimObject Sup;
NI id;
};
struct  Tloc214804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype214828* t;
Ropeobj169006* r;
Ropeobj169006* heaproot;
};
struct  Ttype214828  {
  Tidobj189006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq214824* sons;
Tnode214790* n;
Tsym214822* owner;
Tsym214822* sym;
Tsym214822* destructor;
Tsym214822* deepcopy;
Tsym214822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc214804 loc;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tstrtable214794  {
NI counter;
Tsymseq214792* data;
};
struct  Tsym214822  {
  Tidobj189006 Sup;
NU8 kind;
union{
struct {Ttypeseq214824* typeinstcache;
Tscope214816* typscope;
} S1;
struct {TY214925* procinstcache;
Tsym214822* gcunsafetyreason;
} S2;
struct {TY214925* usedgenerics;
Tstrtable214794 tab;
} S3;
struct {Tsym214822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype214828* typ;
Tident189012* name;
Tlineinfo182337 info;
Tsym214822* owner;
NU32 flags;
Tnode214790* ast;
NU32 options;
NI position;
NI offset;
Tloc214804 loc;
Tlib214808* annex;
Tnode214790* constraint;
};
struct  Cell47505  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47521  {
NI len;
NI cap;
Cell47505** d;
};
struct  Cellset47517  {
NI counter;
NI max;
Pagedesc47513* head;
Pagedesc47513** data;
};
typedef Smallchunk29640* TY29703[512];
typedef Trunk29610* Trunkbuckets29612[256];
struct  Intset29614  {
Trunkbuckets29612 data;
};
struct  Memregion29688  {
NI minlargeobj;
NI maxlargeobj;
TY29703 freesmallchunks;
Llchunk29682* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29642* freechunkslist;
Intset29614 chunkstarts;
Avlnode29686* root;
Avlnode29686* deleted;
Avlnode29686* last;
Avlnode29686* freeavlnodes;
};
struct  Gcstat49814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47521 zct;
Cellseq47521 decstack;
Cellset47517 cycleroots;
Cellseq47521 tempstack;
NI recgclock;
Memregion29688 region;
Gcstat49814 stat;
};
struct  Tnode214790  {
Ttype214828* typ;
Tlineinfo182337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym214822* sym;
} S4;
struct {Tident189012* ident;
} S5;
struct {Tnodeseq214784* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tident189012  {
  Tidobj189006 Sup;
NimStringDesc* s;
Tident189012* next;
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
} TY17811;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY17811 raiseAction;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef Tnode214790* TY230280[1];
typedef NU8 Sha1digest192003[20];
typedef NimStringDesc* TY238694[1];
struct  Ropeobj169006  {
  TNimObject Sup;
Ropeobj169006* left;
Ropeobj169006* right;
NI length;
NimStringDesc* data;
};
struct  Tscope214816  {
NI depthlevel;
Tstrtable214794 symbols;
Tnodeseq214784* usingsyms;
Tscope214816* parent;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlib214808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj169006* name;
Tnode214790* path;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29619[8];
struct  Pagedesc47513  {
Pagedesc47513* next;
NI key;
TY29619 bits;
};
struct  Basechunk29638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29640  {
  Basechunk29638 Sup;
Smallchunk29640* next;
Smallchunk29640* prev;
Freecell29630* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29682  {
NI size;
NI acc;
Llchunk29682* next;
};
struct  Bigchunk29642  {
  Basechunk29638 Sup;
Bigchunk29642* next;
Bigchunk29642* prev;
NI align;
NF data;
};
struct  Trunk29610  {
Trunk29610* next;
NI key;
TY29619 bits;
};
typedef Avlnode29686* TY29693[2];
struct  Avlnode29686  {
TY29693 link;
NI key;
NI upperbound;
NI level;
};
struct  Processobj149404  {
  TNimObject Sup;
int inhandle;
int outhandle;
int errhandle;
Streamobj144418* instream;
Streamobj144418* outstream;
Streamobj144418* errstream;
pid_t id;
int exitcode;
NU8 options;
};
struct  Stringtableobj140209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq140207* data;
NU8 mode;
};
typedef N_NIMCALL_PTR(void, TY144419) (Streamobj144418* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY144423) (Streamobj144418* s);
typedef N_NIMCALL_PTR(void, TY144427) (Streamobj144418* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY144432) (Streamobj144418* s);
typedef N_NIMCALL_PTR(NI, TY144436) (Streamobj144418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(NI, TY144442) (Streamobj144418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY144448) (Streamobj144418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY144454) (Streamobj144418* s);
struct  Streamobj144418  {
  TNimObject Sup;
TY144419 closeimpl;
TY144423 atendimpl;
TY144427 setpositionimpl;
TY144432 getpositionimpl;
TY144436 readdataimpl;
TY144442 peekdataimpl;
TY144448 writedataimpl;
TY144454 flushimpl;
};
struct  Tinstantiation214812  {
Tsym214822* sym;
Ttypeseq214824* concretetypes;
TY214913* usedby;
NI compilesid;
};
struct  Freecell29630  {
Freecell29630* next;
NI zerofield;
};
struct Keyvaluepair140205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct Tnodeseq214784 {
  TGenericSeq Sup;
  Tnode214790* data[SEQ_DECL_SIZE];
};
struct Ttypeseq214824 {
  TGenericSeq Sup;
  Ttype214828* data[SEQ_DECL_SIZE];
};
struct TY214925 {
  TGenericSeq Sup;
  Tinstantiation214812* data[SEQ_DECL_SIZE];
};
struct Tsymseq214792 {
  TGenericSeq Sup;
  Tsym214822* data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq140207 {
  TGenericSeq Sup;
  Keyvaluepair140205 data[SEQ_DECL_SIZE];
};
struct TY214913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode214790*, maptypetoast_397053)(Ttype214828* t, Tlineinfo182337 info, NIM_BOOL allowrecursion);
N_NIMCALL(Tnode214790*, atomictypex_397045)(NimStringDesc* name, Ttype214828* t, Tlineinfo182337 info);
N_NIMCALL(Tsym214822*, newsym_215683)(NU8 symkind, Tident189012* name, Tsym214822* owner, Tlineinfo182337 info);
N_NIMCALL(Tident189012*, getident_189441)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(Tnode214790*, newsymnode_216234)(Tsym214822* sym);
N_NIMCALL(Tnode214790*, newnodeit_216801)(NU8 kind, Tlineinfo182337 info, Ttype214828* typ);
N_NIMCALL(void, add_215114)(Tnode214790* father, Tnode214790* son);
N_NIMCALL(Ttype214828*, base_240021)(Ttype214828* t);
N_NIMCALL(NI, len_217339)(Ttype214828* n);
N_NIMCALL(Ttype214828*, lastson_217377)(Ttype214828* n);
N_NIMCALL(Tnode214790*, maptypetobracket_397058)(NimStringDesc* name, Ttype214828* t, Tlineinfo182337 info);
N_NIMCALL(Ttype214828*, newtype_217107)(NU8 kind, Tsym214822* owner);
N_NIMCALL(Tnode214790*, copytree_218822)(Tnode214790* src);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, findfile_161480)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, readfile_15466)(NimStringDesc* filename);
N_NIMCALL(void, appendtomodule_215869)(Tsym214822* m, Tnode214790* n);
N_NIMCALL(Tnode214790*, newnode_216601)(NU8 kind, Tlineinfo182337 info, Tnodeseq214784* sons, Ttype214828* typ);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(Tnode214790*, newstrnode_215677)(NU8 kind, NimStringDesc* strval);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(void, localerror_187080)(Tlineinfo182337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_53819)(Cell47505* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47505* c);
static N_INLINE(void, rtladdcycleroot_52220)(Cell47505* c);
N_NOINLINE(void, incl_48247)(Cellset47517* s, Cell47505* cell);
static N_INLINE(void, decref_53401)(Cell47505* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, securehash_192011)(NimStringDesc* str, Sha1digest192003* Result);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NimStringDesc*, togeneratedfile_161082)(NimStringDesc* path, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, HEX24_192020)(Sha1digest192003 self);
N_NIMCALL(NIM_BOOL, open_15403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, readall_15463)(FILE* file);
N_NIMCALL(Processobj149404*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, Stringtableobj140209* env, NU8 options);
N_NIMCALL(void, write_144569)(Streamobj144418* s, NimStringDesc* x);
N_NIMCALL(Streamobj144418*, nospinputStream)(Processobj149404* p);
N_NIMCALL(void, close_144470)(Streamobj144418* s);
N_NIMCALL(NimStringDesc*, readoutput_397003)(Processobj149404* p);
N_NIMCALL(Streamobj144418*, nospoutputStream)(Processobj149404* p);
N_NIMCALL(NIM_BOOL, atend_144484)(Streamobj144418* s);
N_NIMCALL(NimStringDesc*, readline_145133)(Streamobj144418* s);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, nospwaitForExit)(Processobj149404* p, NI timeout);
N_NIMCALL(void, writefile_15469)(NimStringDesc* filename, NimStringDesc* content);
STRING_LITERAL(TMP2985, "none", 4);
STRING_LITERAL(TMP2986, "bool", 4);
STRING_LITERAL(TMP2987, "char", 4);
STRING_LITERAL(TMP2988, "nil", 3);
STRING_LITERAL(TMP2989, "expr", 4);
STRING_LITERAL(TMP2990, "stmt", 4);
STRING_LITERAL(TMP2991, "void", 4);
STRING_LITERAL(TMP2992, "array", 5);
STRING_LITERAL(TMP2993, "typeDesc", 8);
STRING_LITERAL(TMP2994, "typeDesc", 8);
STRING_LITERAL(TMP2995, "void", 4);
STRING_LITERAL(TMP2996, "distinct", 8);
STRING_LITERAL(TMP2997, "tuple", 5);
STRING_LITERAL(TMP2998, "set", 3);
STRING_LITERAL(TMP2999, "ptr", 3);
STRING_LITERAL(TMP3000, "ref", 3);
STRING_LITERAL(TMP3001, "var", 3);
STRING_LITERAL(TMP3002, "seq", 3);
STRING_LITERAL(TMP3003, "proc", 4);
STRING_LITERAL(TMP3004, "openArray", 9);
STRING_LITERAL(TMP3005, "range", 5);
STRING_LITERAL(TMP3006, "pointer", 7);
STRING_LITERAL(TMP3007, "string", 6);
STRING_LITERAL(TMP3008, "cstring", 7);
STRING_LITERAL(TMP3009, "int", 3);
STRING_LITERAL(TMP3010, "int8", 4);
STRING_LITERAL(TMP3011, "int16", 5);
STRING_LITERAL(TMP3012, "int32", 5);
STRING_LITERAL(TMP3013, "int64", 5);
STRING_LITERAL(TMP3014, "float", 5);
STRING_LITERAL(TMP3015, "float32", 7);
STRING_LITERAL(TMP3016, "float64", 7);
STRING_LITERAL(TMP3017, "float128", 8);
STRING_LITERAL(TMP3018, "uint", 4);
STRING_LITERAL(TMP3019, "uint8", 5);
STRING_LITERAL(TMP3020, "uint16", 6);
STRING_LITERAL(TMP3021, "uint32", 6);
STRING_LITERAL(TMP3022, "uint64", 6);
STRING_LITERAL(TMP3023, "bignum", 6);
STRING_LITERAL(TMP3024, "const", 5);
STRING_LITERAL(TMP3025, "mutable", 7);
STRING_LITERAL(TMP3026, "varargs", 7);
STRING_LITERAL(TMP3027, "iter", 4);
STRING_LITERAL(TMP3028, "error", 5);
STRING_LITERAL(TMP3029, "builtinTypeClass", 16);
STRING_LITERAL(TMP3030, "concept", 7);
STRING_LITERAL(TMP3031, "compositeTypeClass", 18);
STRING_LITERAL(TMP3032, "and", 3);
STRING_LITERAL(TMP3033, "or", 2);
STRING_LITERAL(TMP3034, "not", 3);
STRING_LITERAL(TMP3035, "anything", 8);
STRING_LITERAL(TMP3036, "static", 6);
STRING_LITERAL(TMP3040, "", 0);
STRING_LITERAL(TMP3041, "\011", 1);
STRING_LITERAL(TMP3042, "gorge_", 6);
STRING_LITERAL(TMP3043, "txt", 3);
STRING_LITERAL(TMP3060, "\012", 1);
extern Gcheap49818 gch_49859;
extern Tnode214790* emptynode_215801;
extern TSafePoint* exchandler_19437;
extern TNimType NTI214784; /* TNodeSeq */
extern TNimType NTI3628; /* IOError */
extern Exception* currexception_19439;
extern TNimType NTI3630; /* OSError */

static N_INLINE(Cell47505*, usrtocell_51440)(void* usr) {
	Cell47505* result;
	result = 0;
	result = ((Cell47505*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47505))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47505* c) {
	addzct_51417((&gch_49859.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47505* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47505* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51440((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53001(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Tnode214790*, atomictypex_397045)(NimStringDesc* name, Ttype214828* t, Tlineinfo182337 info) {
	Tnode214790* result;
	Tsym214822* sym;
	Tident189012* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_189441(name);
	sym = newsym_215683(((NU8) 7), LOC1, (*t).owner, info);
	asgnRefNoCycle((void**) (&(*sym).typ), t);
	result = newsymnode_216234(sym);
	asgnRefNoCycle((void**) (&(*result).typ), t);
	return result;
}

N_NIMCALL(Tnode214790*, maptypetobracket_397058)(NimStringDesc* name, Ttype214828* t, Tlineinfo182337 info) {
	Tnode214790* result;
	Tlineinfo182337 LOC1;
	Tnode214790* LOC7;
	result = 0;
	{
		if (!(*t).n == 0) goto LA4;
		LOC1 = info;
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = (*(*t).n).info;
	}
	LA2: ;
	result = newnodeit_216801(((NU8) 42), LOC1, t);
	LOC7 = 0;
	LOC7 = atomictypex_397045(name, t, info);
	add_215114(result, LOC7);
	{
		NI i_397091;
		NI HEX3Atmp_397108;
		NI LOC9;
		NI res_397111;
		i_397091 = 0;
		HEX3Atmp_397108 = 0;
		LOC9 = 0;
		LOC9 = len_217339(t);
		HEX3Atmp_397108 = (LOC9 - 1);
		res_397111 = ((NI) 0);
		{
			while (1) {
				if (!(res_397111 <= HEX3Atmp_397108)) goto LA11;
				i_397091 = res_397111;
				{
					Tnode214790* void_397104;
					if (!((*t).sons->data[i_397091] == NIM_NIL)) goto LA14;
					void_397104 = atomictypex_397045(((NimStringDesc*) &TMP2995), t, info);
					asgnRefNoCycle((void**) (&(*void_397104).typ), newtype_217107(((NU8) 3), (*t).owner));
					add_215114(result, void_397104);
				}
				goto LA12;
				LA14: ;
				{
					Tnode214790* LOC17;
					LOC17 = 0;
					LOC17 = maptypetoast_397053((*t).sons->data[i_397091], info, NIM_FALSE);
					add_215114(result, LOC17);
				}
				LA12: ;
				res_397111 += ((NI) 1);
			} LA11: ;
		}
	}
	return result;
}

N_NIMCALL(Tnode214790*, maptypetoast_397053)(Ttype214828* t, Tlineinfo182337 info, NIM_BOOL allowrecursion) {
	Tnode214790* result;
	result = 0;
	switch ((*t).kind) {
	case ((NU8) 0):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP2985), t, info);
	}
	break;
	case ((NU8) 1):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP2986), t, info);
	}
	break;
	case ((NU8) 2):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP2987), t, info);
	}
	break;
	case ((NU8) 5):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP2988), t, info);
	}
	break;
	case ((NU8) 6):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP2989), t, info);
	}
	break;
	case ((NU8) 7):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP2990), t, info);
	}
	break;
	case ((NU8) 3):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP2991), t, info);
	}
	break;
	case ((NU8) 4):
	case ((NU8) 16):
	{
		Tlineinfo182337 LOC9;
		Tnode214790* LOC15;
		Tnode214790* LOC16;
		Tnode214790* LOC17;
		{
			if (!(*t).n == 0) goto LA12;
			LOC9 = info;
		}
		goto LA10;
		LA12: ;
		{
			LOC9 = (*(*t).n).info;
		}
		LA10: ;
		result = newnodeit_216801(((NU8) 42), LOC9, t);
		LOC15 = 0;
		LOC15 = atomictypex_397045(((NimStringDesc*) &TMP2992), t, info);
		add_215114(result, LOC15);
		LOC16 = 0;
		LOC16 = maptypetoast_397053((*t).sons->data[((NI) 0)], info, NIM_FALSE);
		add_215114(result, LOC16);
		LOC17 = 0;
		LOC17 = maptypetoast_397053((*t).sons->data[((NI) 1)], info, NIM_FALSE);
		add_215114(result, LOC17);
	}
	break;
	case ((NU8) 8):
	{
		{
			Ttype214828* LOC21;
			Tlineinfo182337 LOC24;
			Tnode214790* LOC30;
			Ttype214828* LOC31;
			Tnode214790* LOC32;
			LOC21 = 0;
			LOC21 = base_240021(t);
			if (!!((LOC21 == NIM_NIL))) goto LA22;
			{
				if (!(*t).n == 0) goto LA27;
				LOC24 = info;
			}
			goto LA25;
			LA27: ;
			{
				LOC24 = (*(*t).n).info;
			}
			LA25: ;
			result = newnodeit_216801(((NU8) 42), LOC24, t);
			LOC30 = 0;
			LOC30 = atomictypex_397045(((NimStringDesc*) &TMP2993), t, info);
			add_215114(result, LOC30);
			LOC31 = 0;
			LOC31 = base_240021(t);
			LOC32 = 0;
			LOC32 = maptypetoast_397053(LOC31, info, NIM_FALSE);
			add_215114(result, LOC32);
		}
		goto LA19;
		LA22: ;
		{
			result = atomictypex_397045(((NimStringDesc*) &TMP2994), t, info);
		}
		LA19: ;
	}
	break;
	case ((NU8) 9):
	{
		Tlineinfo182337 LOC35;
		{
			if (!(*t).n == 0) goto LA38;
			LOC35 = info;
		}
		goto LA36;
		LA38: ;
		{
			LOC35 = (*(*t).n).info;
		}
		LA36: ;
		result = newnodeit_216801(((NU8) 42), LOC35, t);
		{
			NI i_397186;
			NI HEX3Atmp_397268;
			NI LOC42;
			NI res_397271;
			i_397186 = 0;
			HEX3Atmp_397268 = 0;
			LOC42 = 0;
			LOC42 = len_217339(t);
			HEX3Atmp_397268 = (LOC42 - 1);
			res_397271 = ((NI) 0);
			{
				while (1) {
					Tnode214790* LOC45;
					if (!(res_397271 <= HEX3Atmp_397268)) goto LA44;
					i_397186 = res_397271;
					LOC45 = 0;
					LOC45 = maptypetoast_397053((*t).sons->data[i_397186], info, NIM_FALSE);
					add_215114(result, LOC45);
					res_397271 += ((NI) 1);
				} LA44: ;
			}
		}
	}
	break;
	case ((NU8) 11):
	case ((NU8) 10):
	case ((NU8) 15):
	case ((NU8) 53):
	{
		Ttype214828* LOC47;
		LOC47 = 0;
		LOC47 = lastson_217377(t);
		result = maptypetoast_397053(LOC47, info, NIM_FALSE);
	}
	break;
	case ((NU8) 13):
	{
		{
			if (!allowrecursion) goto LA51;
			result = maptypetobracket_397058(((NimStringDesc*) &TMP2996), t, info);
		}
		goto LA49;
		LA51: ;
		{
			result = atomictypex_397045((*(*(*t).sym).name).s, t, info);
		}
		LA49: ;
	}
	break;
	case ((NU8) 12):
	case ((NU8) 30):
	{
		result = atomictypex_397045((*(*(*t).sym).name).s, t, info);
	}
	break;
	case ((NU8) 17):
	{
		{
			Tlineinfo182337 LOC60;
			Tnode214790* LOC72;
			if (!allowrecursion) goto LA58;
			{
				if (!(*t).n == 0) goto LA63;
				LOC60 = info;
			}
			goto LA61;
			LA63: ;
			{
				LOC60 = (*(*t).n).info;
			}
			LA61: ;
			result = newnodeit_216801(((NU8) 133), LOC60, t);
			{
				if (!((*t).sons->data[((NI) 0)] == NIM_NIL)) goto LA68;
				add_215114(result, emptynode_215801);
			}
			goto LA66;
			LA68: ;
			{
				Tnode214790* LOC71;
				LOC71 = 0;
				LOC71 = maptypetoast_397053((*t).sons->data[((NI) 0)], info, NIM_FALSE);
				add_215114(result, LOC71);
			}
			LA66: ;
			LOC72 = 0;
			LOC72 = copytree_218822((*t).n);
			add_215114(result, LOC72);
		}
		goto LA56;
		LA58: ;
		{
			result = atomictypex_397045((*(*(*t).sym).name).s, t, info);
		}
		LA56: ;
	}
	break;
	case ((NU8) 14):
	{
		Tlineinfo182337 LOC75;
		Tnode214790* LOC81;
		{
			if (!(*t).n == 0) goto LA78;
			LOC75 = info;
		}
		goto LA76;
		LA78: ;
		{
			LOC75 = (*(*t).n).info;
		}
		LA76: ;
		result = newnodeit_216801(((NU8) 150), LOC75, t);
		LOC81 = 0;
		LOC81 = copytree_218822((*t).n);
		add_215114(result, LOC81);
	}
	break;
	case ((NU8) 18):
	{
		result = maptypetobracket_397058(((NimStringDesc*) &TMP2997), t, info);
	}
	break;
	case ((NU8) 19):
	{
		result = maptypetobracket_397058(((NimStringDesc*) &TMP2998), t, info);
	}
	break;
	case ((NU8) 21):
	{
		result = maptypetobracket_397058(((NimStringDesc*) &TMP2999), t, info);
	}
	break;
	case ((NU8) 22):
	{
		result = maptypetobracket_397058(((NimStringDesc*) &TMP3000), t, info);
	}
	break;
	case ((NU8) 23):
	{
		result = maptypetobracket_397058(((NimStringDesc*) &TMP3001), t, info);
	}
	break;
	case ((NU8) 24):
	{
		result = maptypetobracket_397058(((NimStringDesc*) &TMP3002), t, info);
	}
	break;
	case ((NU8) 25):
	{
		result = maptypetobracket_397058(((NimStringDesc*) &TMP3003), t, info);
	}
	break;
	case ((NU8) 27):
	{
		result = maptypetobracket_397058(((NimStringDesc*) &TMP3004), t, info);
	}
	break;
	case ((NU8) 20):
	{
		Tlineinfo182337 LOC91;
		Tnode214790* LOC97;
		Tnode214790* LOC98;
		Tnode214790* LOC99;
		{
			if (!(*t).n == 0) goto LA94;
			LOC91 = info;
		}
		goto LA92;
		LA94: ;
		{
			LOC91 = (*(*t).n).info;
		}
		LA92: ;
		result = newnodeit_216801(((NU8) 42), LOC91, t);
		LOC97 = 0;
		LOC97 = atomictypex_397045(((NimStringDesc*) &TMP3005), t, info);
		add_215114(result, LOC97);
		LOC98 = 0;
		LOC98 = copytree_218822((*(*t).n).kindU.S6.sons->data[((NI) 0)]);
		add_215114(result, LOC98);
		LOC99 = 0;
		LOC99 = copytree_218822((*(*t).n).kindU.S6.sons->data[((NI) 1)]);
		add_215114(result, LOC99);
	}
	break;
	case ((NU8) 26):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3006), t, info);
	}
	break;
	case ((NU8) 28):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3007), t, info);
	}
	break;
	case ((NU8) 29):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3008), t, info);
	}
	break;
	case ((NU8) 31):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3009), t, info);
	}
	break;
	case ((NU8) 32):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3010), t, info);
	}
	break;
	case ((NU8) 33):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3011), t, info);
	}
	break;
	case ((NU8) 34):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3012), t, info);
	}
	break;
	case ((NU8) 35):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3013), t, info);
	}
	break;
	case ((NU8) 36):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3014), t, info);
	}
	break;
	case ((NU8) 37):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3015), t, info);
	}
	break;
	case ((NU8) 38):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3016), t, info);
	}
	break;
	case ((NU8) 39):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3017), t, info);
	}
	break;
	case ((NU8) 40):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3018), t, info);
	}
	break;
	case ((NU8) 41):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3019), t, info);
	}
	break;
	case ((NU8) 42):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3020), t, info);
	}
	break;
	case ((NU8) 43):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3021), t, info);
	}
	break;
	case ((NU8) 44):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3022), t, info);
	}
	break;
	case ((NU8) 45):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3023), t, info);
	}
	break;
	case ((NU8) 46):
	{
		result = maptypetobracket_397058(((NimStringDesc*) &TMP3024), t, info);
	}
	break;
	case ((NU8) 47):
	{
		result = maptypetobracket_397058(((NimStringDesc*) &TMP3025), t, info);
	}
	break;
	case ((NU8) 48):
	{
		result = maptypetobracket_397058(((NimStringDesc*) &TMP3026), t, info);
	}
	break;
	case ((NU8) 49):
	{
		result = maptypetobracket_397058(((NimStringDesc*) &TMP3027), t, info);
	}
	break;
	case ((NU8) 50):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3028), t, info);
	}
	break;
	case ((NU8) 51):
	{
		result = maptypetobracket_397058(((NimStringDesc*) &TMP3029), t, info);
	}
	break;
	case ((NU8) 52):
	{
		Tnode214790* LOC125;
		result = maptypetobracket_397058(((NimStringDesc*) &TMP3030), t, info);
		LOC125 = 0;
		LOC125 = copytree_218822((*t).n);
		add_215114(result, LOC125);
	}
	break;
	case ((NU8) 54):
	{
		result = maptypetobracket_397058(((NimStringDesc*) &TMP3031), t, info);
	}
	break;
	case ((NU8) 55):
	{
		result = maptypetobracket_397058(((NimStringDesc*) &TMP3032), t, info);
	}
	break;
	case ((NU8) 56):
	{
		result = maptypetobracket_397058(((NimStringDesc*) &TMP3033), t, info);
	}
	break;
	case ((NU8) 57):
	{
		result = maptypetobracket_397058(((NimStringDesc*) &TMP3034), t, info);
	}
	break;
	case ((NU8) 58):
	{
		result = atomictypex_397045(((NimStringDesc*) &TMP3035), t, info);
	}
	break;
	case ((NU8) 59):
	case ((NU8) 60):
	case ((NU8) 61):
	{
		Tlineinfo182337 LOC132;
		Tnode214790* LOC138;
		{
			if (!(*t).n == 0) goto LA135;
			LOC132 = info;
		}
		goto LA133;
		LA135: ;
		{
			LOC132 = (*(*t).n).info;
		}
		LA133: ;
		result = newnodeit_216801(((NU8) 42), LOC132, t);
		LOC138 = 0;
		LOC138 = atomictypex_397045(((NimStringDesc*) &TMP3036), t, info);
		add_215114(result, LOC138);
		{
			Tnode214790* LOC143;
			if (!!(((*t).n == NIM_NIL))) goto LA141;
			LOC143 = 0;
			LOC143 = copytree_218822((*t).n);
			add_215114(result, LOC143);
		}
		LA141: ;
	}
	break;
	}
	return result;
}

N_NIMCALL(Tnode214790*, opmaptypetoast_397275)(Ttype214828* t, Tlineinfo182337 info) {
	Tnode214790* result;
	result = 0;
	result = maptypetoast_397053(t, info, NIM_TRUE);
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_19437;
	exchandler_19437 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_19437 = (*exchandler_19437).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_19439;
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47505* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1U<<((NU)(((NU8) 1))&7U)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_52220)(Cell47505* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_48247((&gch_49859.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_53819)(Cell47505* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_51458(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_52220(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_53401)(Cell47505* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53001(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_51458(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_52220(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell47505* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_51440(src);
		incref_53819(LOC5);
	}
	LA3: ;
	{
		Cell47505* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_51440((*dest));
		decref_53401(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_19439), NIM_NIL);
}

N_NIMCALL(NimStringDesc*, opslurp_397025)(NimStringDesc* file, Tlineinfo182337 info, Tsym214822* module) {
	NimStringDesc* volatile result;
	TSafePoint TMP3039;
	result = 0;
	pushSafePoint(&TMP3039);
	TMP3039.status = setjmp(TMP3039.context);
	if (TMP3039.status == 0) {
		NimStringDesc* filename;
		Tnodeseq214784* LOC2;
		TY230280 LOC3;
		Tnode214790* LOC4;
		filename = findfile_161480(file);
		result = readfile_15466(filename);
		LOC2 = 0;
		LOC2 = (Tnodeseq214784*) newSeq((&NTI214784), 1);
		memset((void*)LOC3, 0, sizeof(LOC3));
		LOC3[0] = newstrnode_215677(((NU8) 20), filename);
		asgnRefNoCycle((void**) (&LOC2->data[0]), LOC3[0]);
		LOC4 = 0;
		LOC4 = newnode_216601(((NU8) 121), info, LOC2, NIM_NIL);
		appendtomodule_215869(module, LOC4);
		popSafePoint();
	}
	else {
		popSafePoint();
		if (isObj(getCurrentException()->Sup.m_type, (&NTI3628))) {
			TMP3039.status = 0;
			localerror_187080(info, ((NU16) 3), file);
			result = copyString(((NimStringDesc*) &TMP3040));
			popCurrentException();
		}
	}
	if (TMP3039.status != 0) reraiseException();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, readoutput_397003)(Processobj149404* p) {
	NimStringDesc* result;
	Streamobj144418* output;
	NI LOC9;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP3040));
	output = nospoutputStream(p);
	{
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* LOC4;
			LOC3 = 0;
			LOC3 = atend_144484(output);
			if (!!(LOC3)) goto LA2;
			LOC4 = 0;
			LOC4 = readline_145133(output);
			result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
			result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP3060));
		} LA2: ;
	}
	{
		if (!(((NI) 0) < (result ? result->Sup.len : 0))) goto LA7;
		result = setLengthStr(result, ((NI) ((NI)((result ? result->Sup.len : 0) - ((NI) 1)))));
	}
	LA7: ;
	LOC9 = 0;
	LOC9 = nospwaitForExit(p, ((NI) -1));
	return result;
}

N_NIMCALL(NimStringDesc*, opgorge_397009)(NimStringDesc* cmd, NimStringDesc* input, NimStringDesc* cache) {
	NimStringDesc* volatile result;
{	result = 0;
	{
		Sha1digest192003 h;
		NimStringDesc* LOC5;
		NimStringDesc* filename;
		NimStringDesc* LOC6;
		NimStringDesc* LOC7;
		FILE* f;
		NIM_BOOL volatile readsuccessful;
		TSafePoint TMP3044;
		if (!(((NI) 0) < (cache ? cache->Sup.len : 0))) goto LA3;
		memset((void*)h, 0, sizeof(h));
		LOC5 = 0;
		LOC5 = rawNewString(cmd->Sup.len + input->Sup.len + cache->Sup.len + 2);
appendString(LOC5, cmd);
appendString(LOC5, ((NimStringDesc*) &TMP3041));
appendString(LOC5, input);
appendString(LOC5, ((NimStringDesc*) &TMP3041));
appendString(LOC5, cache);
		chckNil((void*)h);
		memset((void*)h, 0, sizeof(h));
		securehash_192011(LOC5, h);
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = HEX24_192020(h);
		LOC6 = rawNewString(LOC7->Sup.len + 6);
appendString(LOC6, ((NimStringDesc*) &TMP3042));
appendString(LOC6, LOC7);
		filename = togeneratedfile_161082(LOC6, ((NimStringDesc*) &TMP3043));
		f = 0;
		{
			NIM_BOOL LOC10;
			LOC10 = 0;
			LOC10 = open_15403(&f, filename, ((NU8) 0), ((NI) -1));
			if (!LOC10) goto LA11;
			result = readall_15463(f);
			fclose(f);
			goto BeforeRet;
		}
		LA11: ;
		readsuccessful = NIM_FALSE;
		pushSafePoint(&TMP3044);
		TMP3044.status = setjmp(TMP3044.context);
		if (TMP3044.status == 0) {
			Processobj149404* p;
			TY238694 LOC14;
			memset((void*)LOC14, 0, sizeof(LOC14));
			p = nospstartProcess(cmd, ((NimStringDesc*) &TMP3040), LOC14, 0, NIM_NIL, 12);
			{
				Streamobj144418* LOC19;
				Streamobj144418* LOC20;
				if (!!(((input ? input->Sup.len : 0) == ((NI) 0)))) goto LA17;
				LOC19 = 0;
				LOC19 = nospinputStream(p);
				write_144569(LOC19, input);
				LOC20 = 0;
				LOC20 = nospinputStream(p);
				close_144470(LOC20);
			}
			LA17: ;
			result = readoutput_397003(p);
			readsuccessful = NIM_TRUE;
			writefile_15469(filename, result);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3628))||isObj(getCurrentException()->Sup.m_type, (&NTI3630))) {
				TMP3044.status = 0;
				{
					if (!!(readsuccessful)) goto LA25;
					result = copyString(((NimStringDesc*) &TMP3040));
				}
				LA25: ;
				popCurrentException();
			}
		}
		if (TMP3044.status != 0) reraiseException();
	}
	goto LA1;
	LA3: ;
	{
		TSafePoint TMP3061;
		pushSafePoint(&TMP3061);
		TMP3061.status = setjmp(TMP3061.context);
		if (TMP3061.status == 0) {
			Processobj149404* p;
			TY238694 LOC29;
			memset((void*)LOC29, 0, sizeof(LOC29));
			p = nospstartProcess(cmd, ((NimStringDesc*) &TMP3040), LOC29, 0, NIM_NIL, 12);
			{
				Streamobj144418* LOC34;
				Streamobj144418* LOC35;
				if (!!(((input ? input->Sup.len : 0) == ((NI) 0)))) goto LA32;
				LOC34 = 0;
				LOC34 = nospinputStream(p);
				write_144569(LOC34, input);
				LOC35 = 0;
				LOC35 = nospinputStream(p);
				close_144470(LOC35);
			}
			LA32: ;
			result = readoutput_397003(p);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3628))||isObj(getCurrentException()->Sup.m_type, (&NTI3630))) {
				TMP3061.status = 0;
				result = copyString(((NimStringDesc*) &TMP3040));
				popCurrentException();
			}
		}
		if (TMP3061.status != 0) reraiseException();
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsDatInit000)(void) {
}

