/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tnode223809 Tnode223809;
typedef struct Tsym223841 Tsym223841;
typedef struct Tlineinfo188352 Tlineinfo188352;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype223847 Ttype223847;
typedef struct Tident196021 Tident196021;
typedef struct Tnodeseq223803 Tnodeseq223803;
typedef struct Tidobj196015 Tidobj196015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq223843 Ttypeseq223843;
typedef struct Tscope223835 Tscope223835;
typedef struct TY223944 TY223944;
typedef struct Tstrtable223813 Tstrtable223813;
typedef struct Tsymseq223811 Tsymseq223811;
typedef struct Tloc223823 Tloc223823;
typedef struct Ropeobj174009 Ropeobj174009;
typedef struct Tlib223827 Tlib223827;
typedef struct Templctx429019 Templctx429019;
typedef struct Tidtable223859 Tidtable223859;
typedef struct Tidpairseq223857 Tidpairseq223857;
typedef struct TY90959 TY90959;
typedef struct Cell48947 Cell48947;
typedef struct Cellseq48963 Cellseq48963;
typedef struct Gcheap51018 Gcheap51018;
typedef struct Gcstack51016 Gcstack51016;
typedef struct Cellset48959 Cellset48959;
typedef struct Pagedesc48955 Pagedesc48955;
typedef struct Memregion30891 Memregion30891;
typedef struct Smallchunk30843 Smallchunk30843;
typedef struct Llchunk30885 Llchunk30885;
typedef struct Bigchunk30845 Bigchunk30845;
typedef struct Intset30817 Intset30817;
typedef struct Trunk30813 Trunk30813;
typedef struct Avlnode30889 Avlnode30889;
typedef struct Gcstat51014 Gcstat51014;
typedef struct Tinstantiation223831 Tinstantiation223831;
typedef struct Tlistentry139022 Tlistentry139022;
typedef struct Tidpair223855 Tidpair223855;
typedef struct Basechunk30841 Basechunk30841;
typedef struct Freecell30833 Freecell30833;
typedef struct TY223932 TY223932;
struct  Tlineinfo188352  {
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
struct  Tnode223809  {
Ttype223847* typ;
Tlineinfo188352 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym223841* sym;
} S4;
struct {Tident196021* ident;
} S5;
struct {Tnodeseq223803* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef N_NIMCALL_PTR(void, TY3889) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3894) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3889 marker;
TY3894 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj196015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable223813  {
NI counter;
Tsymseq223811* data;
};
struct  Tloc223823  {
NU8 k;
NU8 s;
NU16 flags;
Ttype223847* t;
Ropeobj174009* r;
Ropeobj174009* heaproot;
};
struct  Tsym223841  {
  Tidobj196015 Sup;
NU8 kind;
union{
struct {Ttypeseq223843* typeinstcache;
Tscope223835* typscope;
} S1;
struct {TY223944* procinstcache;
Tsym223841* gcunsafetyreason;
} S2;
struct {TY223944* usedgenerics;
Tstrtable223813 tab;
} S3;
struct {Tsym223841* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype223847* typ;
Tident196021* name;
Tlineinfo188352 info;
Tsym223841* owner;
NU32 flags;
Tnode223809* ast;
NU32 options;
NI position;
NI offset;
Tloc223823 loc;
Tlib223827* annex;
Tnode223809* constraint;
};
struct  Ttype223847  {
  Tidobj196015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq223843* sons;
Tnode223809* n;
Tsym223841* owner;
Tsym223841* sym;
Tsym223841* destructor;
Tsym223841* deepcopy;
Tsym223841* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc223823 loc;
};
struct  Tidtable223859  {
NI counter;
Tidpairseq223857* data;
};
struct  Templctx429019  {
Tsym223841* owner;
Tsym223841* gensymowner;
NIM_BOOL instlines;
Tidtable223859 mapping;
};
struct TY90959 {
NimStringDesc* Field0;
NI Field1;
};
struct  Cell48947  {
NI refcount;
TNimType* typ;
};
struct  Cellseq48963  {
NI len;
NI cap;
Cell48947** d;
};
struct  Cellset48959  {
NI counter;
NI max;
Pagedesc48955* head;
Pagedesc48955** data;
};
typedef Smallchunk30843* TY30906[512];
typedef Trunk30813* Trunkbuckets30815[256];
struct  Intset30817  {
Trunkbuckets30815 data;
};
struct  Memregion30891  {
NI minlargeobj;
NI maxlargeobj;
TY30906 freesmallchunks;
Llchunk30885* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30845* freechunkslist;
Intset30817 chunkstarts;
Avlnode30889* root;
Avlnode30889* deleted;
Avlnode30889* last;
Avlnode30889* freeavlnodes;
};
struct  Gcstat51014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap51018  {
Gcstack51016* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq48963 zct;
Cellseq48963 decstack;
Cellset48959 cycleroots;
Cellseq48963 tempstack;
NI recgclock;
Memregion30891 region;
Gcstat51014 stat;
};
struct  Tident196021  {
  Tidobj196015 Sup;
NimStringDesc* s;
Tident196021* next;
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tscope223835  {
NI depthlevel;
Tstrtable223813 symbols;
Tnodeseq223803* usingsyms;
Tscope223835* parent;
};
struct  Ropeobj174009  {
  TNimObject Sup;
Ropeobj174009* left;
Ropeobj174009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry139022  {
  TNimObject Sup;
Tlistentry139022* prev;
Tlistentry139022* next;
};
struct  Tlib223827  {
  Tlistentry139022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj174009* name;
Tnode223809* path;
};
struct  Tidpair223855  {
Tidobj196015* key;
TNimObject* val;
};
struct  Gcstack51016  {
Gcstack51016* prev;
Gcstack51016* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY30822[8];
struct  Pagedesc48955  {
Pagedesc48955* next;
NI key;
TY30822 bits;
};
struct  Basechunk30841  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30843  {
  Basechunk30841 Sup;
Smallchunk30843* next;
Smallchunk30843* prev;
Freecell30833* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30885  {
NI size;
NI acc;
Llchunk30885* next;
};
struct  Bigchunk30845  {
  Basechunk30841 Sup;
Bigchunk30845* next;
Bigchunk30845* prev;
NI align;
NF data;
};
struct  Trunk30813  {
Trunk30813* next;
NI key;
TY30822 bits;
};
typedef Avlnode30889* TY30896[2];
struct  Avlnode30889  {
TY30896 link;
NI key;
NI upperbound;
NI level;
};
struct  Tinstantiation223831  {
Tsym223841* sym;
Ttypeseq223843* concretetypes;
TY223932* usedby;
NI compilesid;
};
struct  Freecell30833  {
Freecell30833* next;
NI zerofield;
};
struct Tnodeseq223803 {
  TGenericSeq Sup;
  Tnode223809* data[SEQ_DECL_SIZE];
};
struct Ttypeseq223843 {
  TGenericSeq Sup;
  Ttype223847* data[SEQ_DECL_SIZE];
};
struct TY223944 {
  TGenericSeq Sup;
  Tinstantiation223831* data[SEQ_DECL_SIZE];
};
struct Tsymseq223811 {
  TGenericSeq Sup;
  Tsym223841* data[SEQ_DECL_SIZE];
};
struct Tidpairseq223857 {
  TGenericSeq Sup;
  Tidpair223855 data[SEQ_DECL_SIZE];
};
struct TY223932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalerror_194107)(Tlineinfo188352 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tnode223809*, evaltemplateargs_429248)(Tnode223809* n, Tsym223841* s);
static N_INLINE(NI, len_224098)(Tnode223809* n);
static N_INLINE(Tnode223809*, HEX5BHEX5D_224244)(Tnode223809* n, NI i);
N_NIMCALL(NI, len_226369)(Ttype223847* n);
N_NIMCALL(Tnode223809*, newnodei_225351)(NU8 kind, Tlineinfo188352 info);
N_NIMCALL(void, addson_225819)(Tnode223809* father, Tnode223809* son);
N_NIMCALL(void, localerror_194128)(Tlineinfo188352 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tnode223809*, copytree_228028)(Tnode223809* src);
N_NIMCALL(void, initidtable_227057)(Tidtable223859* x);
N_NIMCALL(Tnode223809*, getbody_269061)(Tsym223841* s);
static N_INLINE(NIM_BOOL, isatom_228905)(Tnode223809* n);
N_NIMCALL(void, evaltemplateaux_429039)(Tnode223809* templ, Tnode223809* actual, Templctx429019* c, Tnode223809* result);
N_NIMCALL(void, add_224165)(Tnode223809* father, Tnode223809* son);
N_NIMCALL(void, internalerror_194191)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_194279)(TY90959 x);
N_NIMCALL(TNimObject*, idtableget_231182)(Tidtable223859 t, Tidobj196015* key);
N_NIMCALL(Tsym223841*, copysym_226607)(Tsym223841* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell48947*, usrtocell_52646)(void* usr);
static N_INLINE(void, rtladdzct_54204)(Cell48947* c);
N_NOINLINE(void, addzct_52617)(Cellseq48963* s, Cell48947* c);
N_NIMCALL(void, idtableput_231196)(Tidtable223859* t, Tidobj196015* key, TNimObject* val);
N_NIMCALL(Tnode223809*, newsymnode_225338)(Tsym223841* sym, Tlineinfo188352 info);
N_NIMCALL(Tnode223809*, copynode_429027)(Templctx429019* ctx, Tnode223809* a, Tnode223809* b);
N_NIMCALL(Tnode223809*, copynode_227660)(Tnode223809* src);
N_NIMCALL(NI, sonslen_226387)(Tnode223809* n);
N_NIMCALL(NimStringDesc*, rendertree_245059)(Tnode223809* n, NU8 renderflags);
static N_INLINE(NI, safelen_224126)(Tnode223809* n);
STRING_LITERAL(TMP2934, "", 0);
STRING_LITERAL(TMP2936, "compiler/evaltempl.nim", 22);
NIM_CONST TY90959 TMP2935 = {((NimStringDesc*) &TMP2936),
((NI) 44)}
;
NI evaltemplatecounter_429396;
extern Tnode223809* emptynode_224807;
extern Gcheap51018 gch_51059;

static N_INLINE(NI, len_224098)(Tnode223809* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

static N_INLINE(Tnode223809*, HEX5BHEX5D_224244)(Tnode223809* n, NI i) {
	Tnode223809* result;
	result = 0;
	result = (*n).kindU.S6.sons->data[i];
	return result;
}

N_NIMCALL(Tnode223809*, evaltemplateargs_429248)(Tnode223809* n, Tsym223841* s) {
	Tnode223809* result;
	NI totalparams;
	NI genericparams;
	NI expectedregularparams;
	NI LOC10;
	NI givenregularparams;
	result = 0;
	switch ((*n).kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	{
		NI LOC2;
		LOC2 = 0;
		LOC2 = len_224098(n);
		totalparams = (NI)(LOC2 - ((NI) 1));
	}
	break;
	default:
	{
		totalparams = ((NI) 0);
	}
	break;
	}
	{
		if (!(((*s).flags &(1<<((((NU8) 25))&31)))!=0)) goto LA6;
		genericparams = ((NI) 0);
	}
	goto LA4;
	LA6: ;
	{
		Tnode223809* LOC9;
		LOC9 = 0;
		LOC9 = HEX5BHEX5D_224244((*s).ast, ((NI) 2));
		genericparams = len_224098(LOC9);
	}
	LA4: ;
	LOC10 = 0;
	LOC10 = len_226369((*s).typ);
	expectedregularparams = (LOC10 - 1);
	givenregularparams = (NI)(totalparams - genericparams);
	{
		if (!((NI)(expectedregularparams + genericparams) < totalparams)) goto LA13;
		globalerror_194107((*n).info, ((NU16) 137), ((NimStringDesc*) &TMP2934));
	}
	LA13: ;
	result = newnodei_225351(((NU8) 152), (*n).info);
	{
		NI i_429290;
		NI res_429344;
		i_429290 = 0;
		res_429344 = ((NI) 1);
		{
			while (1) {
				if (!(res_429344 <= givenregularparams)) goto LA17;
				i_429290 = res_429344;
				addson_225819(result, (*n).kindU.S6.sons->data[i_429290]);
				res_429344 += ((NI) 1);
			} LA17: ;
		}
	}
	{
		NI i_429303;
		NI HEX3Atmp_429349;
		NI res_429352;
		i_429303 = 0;
		HEX3Atmp_429349 = 0;
		HEX3Atmp_429349 = (NI)(givenregularparams + ((NI) 1));
		res_429352 = HEX3Atmp_429349;
		{
			while (1) {
				Tnode223809* default_429308;
				if (!(res_429352 <= expectedregularparams)) goto LA20;
				i_429303 = res_429352;
				default_429308 = (*(*(*(*(*s).typ).n).kindU.S6.sons->data[i_429303]).kindU.S4.sym).ast;
				{
					NIM_BOOL LOC23;
					LOC23 = 0;
					LOC23 = default_429308 == 0;
					if (LOC23) goto LA24;
					LOC23 = ((*default_429308).kind == ((NU8) 1));
					LA24: ;
					if (!LOC23) goto LA25;
					localerror_194128((*n).info, ((NU16) 137), ((NimStringDesc*) &TMP2934));
					addson_225819(result, emptynode_224807);
				}
				goto LA21;
				LA25: ;
				{
					Tnode223809* LOC28;
					LOC28 = 0;
					LOC28 = copytree_228028(default_429308);
					addson_225819(result, LOC28);
				}
				LA21: ;
				res_429352 += ((NI) 1);
			} LA20: ;
		}
	}
	{
		NI i_429338;
		NI res_429359;
		i_429338 = 0;
		res_429359 = ((NI) 1);
		{
			while (1) {
				if (!(res_429359 <= genericparams)) goto LA31;
				i_429338 = res_429359;
				addson_225819(result, (*n).kindU.S6.sons->data[(NI)(givenregularparams + i_429338)]);
				res_429359 += ((NI) 1);
			} LA31: ;
		}
	}
	return result;
}

static N_INLINE(NIM_BOOL, isatom_228905)(Tnode223809* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = (((NU8) 0) <= (*n).kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n).kind <= ((NU8) 23));
	LA2: ;
	result = LOC1;
	return result;
}

static N_INLINE(Cell48947*, usrtocell_52646)(void* usr) {
	Cell48947* result;
	result = 0;
	result = ((Cell48947*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell48947))))));
	return result;
}

static N_INLINE(void, rtladdzct_54204)(Cell48947* c) {
	addzct_52617((&gch_51059.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell48947* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_52646(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell48947* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_52646((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_54204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Tnode223809*, copynode_429027)(Templctx429019* ctx, Tnode223809* a, Tnode223809* b) {
	Tnode223809* result;
	result = 0;
	result = copynode_227660(a);
	{
		if (!(*ctx).instlines) goto LA3;
		(*result).info = (*b).info;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, evaltemplateaux_429039)(Tnode223809* templ, Tnode223809* actual, Templctx429019* c, Tnode223809* result) {
	switch ((*templ).kind) {
	case ((NU8) 3):
	{
		Tsym223841* s;
		s = (*templ).kindU.S4.sym;
		{
			if (!((*(*s).owner).Sup.id == (*(*c).owner).Sup.id)) goto LA4;
			{
				NIM_BOOL LOC8;
				Tnode223809* x_429083;
				LOC8 = 0;
				LOC8 = ((*s).kind == ((NU8) 3));
				if (!(LOC8)) goto LA9;
				LOC8 = !((((*s).flags &(1<<((((NU8) 31))&31)))!=0));
				LA9: ;
				if (!LOC8) goto LA10;
				x_429083 = (*actual).kindU.S6.sons->data[(*s).position];
				{
					if (!((*x_429083).kind == ((NU8) 152))) goto LA14;
					{
						Tnode223809* y_429085;
						y_429085 = 0;
						{
							NI i_429183;
							NI HEX3Atmp_429185;
							NI LOC18;
							NI res_429187;
							i_429183 = 0;
							HEX3Atmp_429185 = 0;
							LOC18 = 0;
							LOC18 = len_224098(x_429083);
							HEX3Atmp_429185 = (LOC18 - 1);
							res_429187 = ((NI) 0);
							{
								while (1) {
									if (!(res_429187 <= HEX3Atmp_429185)) goto LA20;
									i_429183 = res_429187;
									y_429085 = (*x_429083).kindU.S6.sons->data[i_429183];
									add_224165(result, y_429085);
									res_429187 += ((NI) 1);
								} LA20: ;
							}
						}
					}
				}
				goto LA12;
				LA14: ;
				{
					Tnode223809* LOC22;
					LOC22 = 0;
					LOC22 = copytree_228028(x_429083);
					add_224165(result, LOC22);
				}
				LA12: ;
			}
			goto LA6;
			LA10: ;
			{
				Tnode223809* x_429109;
				NI LOC26;
				if (!((*s).kind == ((NU8) 4))) goto LA24;
				LOC26 = 0;
				LOC26 = len_226369((*(*s).owner).typ);
				x_429109 = (*actual).kindU.S6.sons->data[(NI)((NI)(LOC26 + (*s).position) - ((NI) 1))];
				{
					if (!((*x_429109).kind == ((NU8) 152))) goto LA29;
					{
						Tnode223809* y_429111;
						y_429111 = 0;
						{
							NI i_429194;
							NI HEX3Atmp_429196;
							NI LOC33;
							NI res_429198;
							i_429194 = 0;
							HEX3Atmp_429196 = 0;
							LOC33 = 0;
							LOC33 = len_224098(x_429109);
							HEX3Atmp_429196 = (LOC33 - 1);
							res_429198 = ((NI) 0);
							{
								while (1) {
									if (!(res_429198 <= HEX3Atmp_429196)) goto LA35;
									i_429194 = res_429198;
									y_429111 = (*x_429109).kindU.S6.sons->data[i_429194];
									add_224165(result, y_429111);
									res_429198 += ((NI) 1);
								} LA35: ;
							}
						}
					}
				}
				goto LA27;
				LA29: ;
				{
					Tnode223809* LOC37;
					LOC37 = 0;
					LOC37 = copytree_228028(x_429109);
					add_224165(result, LOC37);
				}
				LA27: ;
			}
			goto LA6;
			LA24: ;
			{
				Tsym223841* x;
				Tidobj196015* LOC44;
				TNimObject* LOC45;
				Tlineinfo188352 LOC52;
				Tnode223809* LOC58;
				{
					NimStringDesc* LOC43;
					if (!!((((*s).flags &(1<<((((NU8) 31))&31)))!=0))) goto LA41;
					LOC43 = 0;
					LOC43 = HEX24_194279(TMP2935);
					internalerror_194191(LOC43);
				}
				LA41: ;
				LOC44 = 0;
				LOC44 = &s->Sup;
				LOC45 = 0;
				LOC45 = idtableget_231182((*c).mapping, LOC44);
				x = ((Tsym223841*) (LOC45));
				{
					Tidobj196015* LOC50;
					TNimObject* LOC51;
					if (!(x == NIM_NIL)) goto LA48;
					x = copysym_226607(s, NIM_FALSE);
					asgnRefNoCycle((void**) (&(*x).owner), (*c).gensymowner);
					LOC50 = 0;
					LOC50 = &s->Sup;
					LOC51 = 0;
					LOC51 = &x->Sup.Sup;
					idtableput_231196((&(*c).mapping), LOC50, LOC51);
				}
				LA48: ;
				{
					if (!(*c).instlines) goto LA55;
					LOC52 = (*actual).info;
				}
				goto LA53;
				LA55: ;
				{
					LOC52 = (*templ).info;
				}
				LA53: ;
				LOC58 = 0;
				LOC58 = newsymnode_225338(x, LOC52);
				add_224165(result, LOC58);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			Tnode223809* LOC60;
			LOC60 = 0;
			LOC60 = copynode_429027((&(*c)), templ, actual);
			add_224165(result, LOC60);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		Tnode223809* LOC62;
		LOC62 = 0;
		LOC62 = copynode_429027((&(*c)), templ, actual);
		add_224165(result, LOC62);
	}
	break;
	default:
	{
		Tnode223809* res;
		res = copynode_429027((&(*c)), templ, actual);
		{
			NI i_429176;
			NI HEX3Atmp_429202;
			NI LOC65;
			NI res_429205;
			i_429176 = 0;
			HEX3Atmp_429202 = 0;
			LOC65 = 0;
			LOC65 = sonslen_226387(templ);
			HEX3Atmp_429202 = (NI)(LOC65 - ((NI) 1));
			res_429205 = ((NI) 0);
			{
				while (1) {
					if (!(res_429205 <= HEX3Atmp_429202)) goto LA67;
					i_429176 = res_429205;
					evaltemplateaux_429039((*templ).kindU.S6.sons->data[i_429176], actual, c, res);
					res_429205 += ((NI) 1);
				} LA67: ;
			}
		}
		add_224165(result, res);
	}
	break;
	}
}

static N_INLINE(NI, safelen_224126)(Tnode223809* n) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).kind >= ((NU8) 0) && (*n).kind <= ((NU8) 23));
		if (LOC3) goto LA4;
		LOC3 = (*n).kindU.S6.sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		result = ((NI) 0);
	}
	goto LA1;
	LA5: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tnode223809*, evaltemplate_429400)(Tnode223809* n, Tsym223841* tmpl, Tsym223841* gensymowner) {
	Tnode223809* result;
	Tnode223809* args;
	Templctx429019 ctx;
	Tnode223809* body;
	result = 0;
	evaltemplatecounter_429396 += ((NI) 1);
	{
		if (!(((NI) 100) < evaltemplatecounter_429396)) goto LA3;
		globalerror_194107((*n).info, ((NU16) 188), ((NimStringDesc*) &TMP2934));
		result = n;
	}
	LA3: ;
	args = evaltemplateargs_429248(n, tmpl);
	memset((void*)(&ctx), 0, sizeof(ctx));
	ctx.owner = tmpl;
	ctx.gensymowner = gensymowner;
	initidtable_227057((&ctx.mapping));
	body = getbody_269061(tmpl);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = isatom_228905(body);
		if (!LOC7) goto LA8;
		result = newnodei_225351(((NU8) 37), (*body).info);
		evaltemplateaux_429039(body, args, (&ctx), result);
		{
			NI LOC12;
			LOC12 = 0;
			LOC12 = len_224098(result);
			if (!(LOC12 == ((NI) 1))) goto LA13;
			result = (*result).kindU.S6.sons->data[((NI) 0)];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			LOC16 = 0;
			LOC16 = rendertree_245059(result, 4);
			localerror_194128((*result).info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		result = copynode_227660(body);
		ctx.instlines = !(((*body).kind == ((NU8) 115) || (*body).kind == ((NU8) 126) || (*body).kind == ((NU8) 112) || (*body).kind == ((NU8) 127)));
		{
			if (!ctx.instlines) goto LA20;
			(*result).info = (*n).info;
		}
		LA20: ;
		{
			NI i_429448;
			NI HEX3Atmp_429462;
			NI LOC23;
			NI res_429465;
			i_429448 = 0;
			HEX3Atmp_429462 = 0;
			LOC23 = 0;
			LOC23 = safelen_224126(body);
			HEX3Atmp_429462 = (NI)(LOC23 - ((NI) 1));
			res_429465 = ((NI) 0);
			{
				while (1) {
					if (!(res_429465 <= HEX3Atmp_429462)) goto LA25;
					i_429448 = res_429465;
					evaltemplateaux_429039((*body).kindU.S6.sons->data[i_429448], args, (&ctx), result);
					res_429465 += ((NI) 1);
				} LA25: ;
			}
		}
	}
	LA5: ;
	evaltemplatecounter_429396 -= ((NI) 1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplInit000)(void) {
	evaltemplatecounter_429396 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplDatInit000)(void) {
}
