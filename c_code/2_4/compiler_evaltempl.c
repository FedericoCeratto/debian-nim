/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode225809 Tnode225809;
typedef struct Tsym225841 Tsym225841;
typedef struct Tlineinfo190352 Tlineinfo190352;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype225847 Ttype225847;
typedef struct Tident198021 Tident198021;
typedef struct Tnodeseq225803 Tnodeseq225803;
typedef struct Tidobj198015 Tidobj198015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq225843 Ttypeseq225843;
typedef struct Tscope225835 Tscope225835;
typedef struct TY225944 TY225944;
typedef struct Tstrtable225813 Tstrtable225813;
typedef struct Tsymseq225811 Tsymseq225811;
typedef struct Tloc225823 Tloc225823;
typedef struct Ropeobj176009 Ropeobj176009;
typedef struct Tlib225827 Tlib225827;
typedef struct Templctx431019 Templctx431019;
typedef struct Tidtable225859 Tidtable225859;
typedef struct Tidpairseq225857 Tidpairseq225857;
typedef struct TY90959 TY90959;
typedef struct Cell48946 Cell48946;
typedef struct Cellseq48962 Cellseq48962;
typedef struct Gcheap51018 Gcheap51018;
typedef struct Gcstack51016 Gcstack51016;
typedef struct Cellset48958 Cellset48958;
typedef struct Pagedesc48954 Pagedesc48954;
typedef struct Memregion30890 Memregion30890;
typedef struct Smallchunk30842 Smallchunk30842;
typedef struct Llchunk30884 Llchunk30884;
typedef struct Bigchunk30844 Bigchunk30844;
typedef struct Intset30817 Intset30817;
typedef struct Trunk30813 Trunk30813;
typedef struct Avlnode30888 Avlnode30888;
typedef struct Gcstat51014 Gcstat51014;
typedef struct Tinstantiation225831 Tinstantiation225831;
typedef struct Tlistentry140022 Tlistentry140022;
typedef struct Tidpair225855 Tidpair225855;
typedef struct Basechunk30840 Basechunk30840;
typedef struct Freecell30832 Freecell30832;
typedef struct TY225932 TY225932;
struct  Tlineinfo190352  {
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
struct  Tnode225809  {
Ttype225847* typ;
Tlineinfo190352 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym225841* sym;
} S4;
struct {Tident198021* ident;
} S5;
struct {Tnodeseq225803* sons;
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
struct  Tidobj198015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable225813  {
NI counter;
Tsymseq225811* data;
};
struct  Tloc225823  {
NU8 k;
NU8 s;
NU16 flags;
Ttype225847* t;
Ropeobj176009* r;
Ropeobj176009* heaproot;
};
struct  Tsym225841  {
  Tidobj198015 Sup;
NU8 kind;
union{
struct {Ttypeseq225843* typeinstcache;
Tscope225835* typscope;
} S1;
struct {TY225944* procinstcache;
Tsym225841* gcunsafetyreason;
} S2;
struct {TY225944* usedgenerics;
Tstrtable225813 tab;
} S3;
struct {Tsym225841* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype225847* typ;
Tident198021* name;
Tlineinfo190352 info;
Tsym225841* owner;
NU32 flags;
Tnode225809* ast;
NU32 options;
NI position;
NI offset;
Tloc225823 loc;
Tlib225827* annex;
Tnode225809* constraint;
};
struct  Ttype225847  {
  Tidobj198015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq225843* sons;
Tnode225809* n;
Tsym225841* owner;
Tsym225841* sym;
Tsym225841* destructor;
Tsym225841* deepcopy;
Tsym225841* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc225823 loc;
};
struct  Tidtable225859  {
NI counter;
Tidpairseq225857* data;
};
struct  Templctx431019  {
Tsym225841* owner;
Tsym225841* gensymowner;
NIM_BOOL instlines;
Tidtable225859 mapping;
};
struct TY90959 {
NimStringDesc* Field0;
NI Field1;
};
struct  Cell48946  {
NI refcount;
TNimType* typ;
};
struct  Cellseq48962  {
NI len;
NI cap;
Cell48946** d;
};
struct  Cellset48958  {
NI counter;
NI max;
Pagedesc48954* head;
Pagedesc48954** data;
};
typedef Smallchunk30842* TY30905[512];
typedef Trunk30813* Trunkbuckets30815[256];
struct  Intset30817  {
Trunkbuckets30815 data;
};
struct  Memregion30890  {
NI minlargeobj;
NI maxlargeobj;
TY30905 freesmallchunks;
Llchunk30884* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30844* freechunkslist;
Intset30817 chunkstarts;
Avlnode30888* root;
Avlnode30888* deleted;
Avlnode30888* last;
Avlnode30888* freeavlnodes;
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
Cellseq48962 zct;
Cellseq48962 decstack;
Cellset48958 cycleroots;
Cellseq48962 tempstack;
NI recgclock;
Memregion30890 region;
Gcstat51014 stat;
};
struct  Tident198021  {
  Tidobj198015 Sup;
NimStringDesc* s;
Tident198021* next;
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
struct  Tscope225835  {
NI depthlevel;
Tstrtable225813 symbols;
Tnodeseq225803* usingsyms;
Tscope225835* parent;
};
struct  Ropeobj176009  {
  TNimObject Sup;
Ropeobj176009* left;
Ropeobj176009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry140022  {
  TNimObject Sup;
Tlistentry140022* prev;
Tlistentry140022* next;
};
struct  Tlib225827  {
  Tlistentry140022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj176009* name;
Tnode225809* path;
};
struct  Tidpair225855  {
Tidobj198015* key;
TNimObject* val;
};
struct  Gcstack51016  {
Gcstack51016* prev;
Gcstack51016* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY30821[16];
struct  Pagedesc48954  {
Pagedesc48954* next;
NI key;
TY30821 bits;
};
struct  Basechunk30840  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30842  {
  Basechunk30840 Sup;
Smallchunk30842* next;
Smallchunk30842* prev;
Freecell30832* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30884  {
NI size;
NI acc;
Llchunk30884* next;
};
struct  Bigchunk30844  {
  Basechunk30840 Sup;
Bigchunk30844* next;
Bigchunk30844* prev;
NI align;
NF data;
};
struct  Trunk30813  {
Trunk30813* next;
NI key;
TY30821 bits;
};
typedef Avlnode30888* TY30895[2];
struct  Avlnode30888  {
TY30895 link;
NI key;
NI upperbound;
NI level;
};
struct  Tinstantiation225831  {
Tsym225841* sym;
Ttypeseq225843* concretetypes;
TY225932* usedby;
NI compilesid;
};
struct  Freecell30832  {
Freecell30832* next;
NI zerofield;
};
struct Tnodeseq225803 {
  TGenericSeq Sup;
  Tnode225809* data[SEQ_DECL_SIZE];
};
struct Ttypeseq225843 {
  TGenericSeq Sup;
  Ttype225847* data[SEQ_DECL_SIZE];
};
struct TY225944 {
  TGenericSeq Sup;
  Tinstantiation225831* data[SEQ_DECL_SIZE];
};
struct Tsymseq225811 {
  TGenericSeq Sup;
  Tsym225841* data[SEQ_DECL_SIZE];
};
struct Tidpairseq225857 {
  TGenericSeq Sup;
  Tidpair225855 data[SEQ_DECL_SIZE];
};
struct TY225932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalerror_196107)(Tlineinfo190352 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tnode225809*, evaltemplateargs_431248)(Tnode225809* n, Tsym225841* s);
static N_INLINE(NI, len_226098)(Tnode225809* n);
static N_INLINE(Tnode225809*, HEX5BHEX5D_226244)(Tnode225809* n, NI i);
N_NIMCALL(NI, len_228369)(Ttype225847* n);
N_NIMCALL(Tnode225809*, newnodei_227351)(NU8 kind, Tlineinfo190352 info);
N_NIMCALL(void, addson_227819)(Tnode225809* father, Tnode225809* son);
N_NIMCALL(void, localerror_196128)(Tlineinfo190352 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tnode225809*, copytree_230028)(Tnode225809* src);
N_NIMCALL(void, initidtable_229057)(Tidtable225859* x);
N_NIMCALL(Tnode225809*, getbody_271062)(Tsym225841* s);
static N_INLINE(NIM_BOOL, isatom_230904)(Tnode225809* n);
N_NIMCALL(void, evaltemplateaux_431039)(Tnode225809* templ, Tnode225809* actual, Templctx431019* c, Tnode225809* result);
N_NIMCALL(void, add_226165)(Tnode225809* father, Tnode225809* son);
N_NIMCALL(void, internalerror_196191)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_196279)(TY90959 x);
N_NIMCALL(TNimObject*, idtableget_233182)(Tidtable225859 t, Tidobj198015* key);
N_NIMCALL(Tsym225841*, copysym_228607)(Tsym225841* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell48946*, usrtocell_52646)(void* usr);
static N_INLINE(void, rtladdzct_54204)(Cell48946* c);
N_NOINLINE(void, addzct_52617)(Cellseq48962* s, Cell48946* c);
N_NIMCALL(void, idtableput_233196)(Tidtable225859* t, Tidobj198015* key, TNimObject* val);
N_NIMCALL(Tnode225809*, newsymnode_227338)(Tsym225841* sym, Tlineinfo190352 info);
N_NIMCALL(Tnode225809*, copynode_431027)(Templctx431019* ctx, Tnode225809* a, Tnode225809* b);
N_NIMCALL(Tnode225809*, copynode_229660)(Tnode225809* src);
N_NIMCALL(NI, sonslen_228387)(Tnode225809* n);
N_NIMCALL(NimStringDesc*, rendertree_247059)(Tnode225809* n, NU8 renderflags);
static N_INLINE(NI, safelen_226126)(Tnode225809* n);
STRING_LITERAL(TMP2936, "", 0);
STRING_LITERAL(TMP2938, "compiler/evaltempl.nim", 22);
NIM_CONST TY90959 TMP2937 = {((NimStringDesc*) &TMP2938),
((NI) 44)}
;
NI evaltemplatecounter_431396;
extern Tnode225809* emptynode_226807;
extern Gcheap51018 gch_51059;

static N_INLINE(NI, len_226098)(Tnode225809* n) {
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

static N_INLINE(Tnode225809*, HEX5BHEX5D_226244)(Tnode225809* n, NI i) {
	Tnode225809* result;
	result = 0;
	result = (*n).kindU.S6.sons->data[i];
	return result;
}

N_NIMCALL(Tnode225809*, evaltemplateargs_431248)(Tnode225809* n, Tsym225841* s) {
	Tnode225809* result;
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
		LOC2 = len_226098(n);
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
		Tnode225809* LOC9;
		LOC9 = 0;
		LOC9 = HEX5BHEX5D_226244((*s).ast, ((NI) 2));
		genericparams = len_226098(LOC9);
	}
	LA4: ;
	LOC10 = 0;
	LOC10 = len_228369((*s).typ);
	expectedregularparams = (LOC10 - 1);
	givenregularparams = (NI)(totalparams - genericparams);
	{
		if (!((NI)(expectedregularparams + genericparams) < totalparams)) goto LA13;
		globalerror_196107((*n).info, ((NU16) 137), ((NimStringDesc*) &TMP2936));
	}
	LA13: ;
	result = newnodei_227351(((NU8) 152), (*n).info);
	{
		NI i_431290;
		NI res_431344;
		i_431290 = 0;
		res_431344 = ((NI) 1);
		{
			while (1) {
				if (!(res_431344 <= givenregularparams)) goto LA17;
				i_431290 = res_431344;
				addson_227819(result, (*n).kindU.S6.sons->data[i_431290]);
				res_431344 += ((NI) 1);
			} LA17: ;
		}
	}
	{
		NI i_431303;
		NI HEX3Atmp_431349;
		NI res_431352;
		i_431303 = 0;
		HEX3Atmp_431349 = 0;
		HEX3Atmp_431349 = (NI)(givenregularparams + ((NI) 1));
		res_431352 = HEX3Atmp_431349;
		{
			while (1) {
				Tnode225809* default_431308;
				if (!(res_431352 <= expectedregularparams)) goto LA20;
				i_431303 = res_431352;
				default_431308 = (*(*(*(*(*s).typ).n).kindU.S6.sons->data[i_431303]).kindU.S4.sym).ast;
				{
					NIM_BOOL LOC23;
					LOC23 = 0;
					LOC23 = default_431308 == 0;
					if (LOC23) goto LA24;
					LOC23 = ((*default_431308).kind == ((NU8) 1));
					LA24: ;
					if (!LOC23) goto LA25;
					localerror_196128((*n).info, ((NU16) 137), ((NimStringDesc*) &TMP2936));
					addson_227819(result, emptynode_226807);
				}
				goto LA21;
				LA25: ;
				{
					Tnode225809* LOC28;
					LOC28 = 0;
					LOC28 = copytree_230028(default_431308);
					addson_227819(result, LOC28);
				}
				LA21: ;
				res_431352 += ((NI) 1);
			} LA20: ;
		}
	}
	{
		NI i_431338;
		NI res_431359;
		i_431338 = 0;
		res_431359 = ((NI) 1);
		{
			while (1) {
				if (!(res_431359 <= genericparams)) goto LA31;
				i_431338 = res_431359;
				addson_227819(result, (*n).kindU.S6.sons->data[(NI)(givenregularparams + i_431338)]);
				res_431359 += ((NI) 1);
			} LA31: ;
		}
	}
	return result;
}

static N_INLINE(NIM_BOOL, isatom_230904)(Tnode225809* n) {
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

static N_INLINE(Cell48946*, usrtocell_52646)(void* usr) {
	Cell48946* result;
	result = 0;
	result = ((Cell48946*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell48946))))));
	return result;
}

static N_INLINE(void, rtladdzct_54204)(Cell48946* c) {
	addzct_52617((&gch_51059.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell48946* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_52646(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell48946* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_52646((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_54204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Tnode225809*, copynode_431027)(Templctx431019* ctx, Tnode225809* a, Tnode225809* b) {
	Tnode225809* result;
	result = 0;
	result = copynode_229660(a);
	{
		if (!(*ctx).instlines) goto LA3;
		(*result).info = (*b).info;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, evaltemplateaux_431039)(Tnode225809* templ, Tnode225809* actual, Templctx431019* c, Tnode225809* result) {
	switch ((*templ).kind) {
	case ((NU8) 3):
	{
		Tsym225841* s;
		s = (*templ).kindU.S4.sym;
		{
			if (!((*(*s).owner).Sup.id == (*(*c).owner).Sup.id)) goto LA4;
			{
				NIM_BOOL LOC8;
				Tnode225809* x_431083;
				LOC8 = 0;
				LOC8 = ((*s).kind == ((NU8) 3));
				if (!(LOC8)) goto LA9;
				LOC8 = !((((*s).flags &(1<<((((NU8) 31))&31)))!=0));
				LA9: ;
				if (!LOC8) goto LA10;
				x_431083 = (*actual).kindU.S6.sons->data[(*s).position];
				{
					if (!((*x_431083).kind == ((NU8) 152))) goto LA14;
					{
						Tnode225809* y_431085;
						y_431085 = 0;
						{
							NI i_431183;
							NI HEX3Atmp_431185;
							NI LOC18;
							NI res_431187;
							i_431183 = 0;
							HEX3Atmp_431185 = 0;
							LOC18 = 0;
							LOC18 = len_226098(x_431083);
							HEX3Atmp_431185 = (LOC18 - 1);
							res_431187 = ((NI) 0);
							{
								while (1) {
									if (!(res_431187 <= HEX3Atmp_431185)) goto LA20;
									i_431183 = res_431187;
									y_431085 = (*x_431083).kindU.S6.sons->data[i_431183];
									add_226165(result, y_431085);
									res_431187 += ((NI) 1);
								} LA20: ;
							}
						}
					}
				}
				goto LA12;
				LA14: ;
				{
					Tnode225809* LOC22;
					LOC22 = 0;
					LOC22 = copytree_230028(x_431083);
					add_226165(result, LOC22);
				}
				LA12: ;
			}
			goto LA6;
			LA10: ;
			{
				Tnode225809* x_431109;
				NI LOC26;
				if (!((*s).kind == ((NU8) 4))) goto LA24;
				LOC26 = 0;
				LOC26 = len_228369((*(*s).owner).typ);
				x_431109 = (*actual).kindU.S6.sons->data[(NI)((NI)(LOC26 + (*s).position) - ((NI) 1))];
				{
					if (!((*x_431109).kind == ((NU8) 152))) goto LA29;
					{
						Tnode225809* y_431111;
						y_431111 = 0;
						{
							NI i_431194;
							NI HEX3Atmp_431196;
							NI LOC33;
							NI res_431198;
							i_431194 = 0;
							HEX3Atmp_431196 = 0;
							LOC33 = 0;
							LOC33 = len_226098(x_431109);
							HEX3Atmp_431196 = (LOC33 - 1);
							res_431198 = ((NI) 0);
							{
								while (1) {
									if (!(res_431198 <= HEX3Atmp_431196)) goto LA35;
									i_431194 = res_431198;
									y_431111 = (*x_431109).kindU.S6.sons->data[i_431194];
									add_226165(result, y_431111);
									res_431198 += ((NI) 1);
								} LA35: ;
							}
						}
					}
				}
				goto LA27;
				LA29: ;
				{
					Tnode225809* LOC37;
					LOC37 = 0;
					LOC37 = copytree_230028(x_431109);
					add_226165(result, LOC37);
				}
				LA27: ;
			}
			goto LA6;
			LA24: ;
			{
				Tsym225841* x;
				Tidobj198015* LOC44;
				TNimObject* LOC45;
				Tlineinfo190352 LOC52;
				Tnode225809* LOC58;
				{
					NimStringDesc* LOC43;
					if (!!((((*s).flags &(1<<((((NU8) 31))&31)))!=0))) goto LA41;
					LOC43 = 0;
					LOC43 = HEX24_196279(TMP2937);
					internalerror_196191(LOC43);
				}
				LA41: ;
				LOC44 = 0;
				LOC44 = &s->Sup;
				LOC45 = 0;
				LOC45 = idtableget_233182((*c).mapping, LOC44);
				x = ((Tsym225841*) (LOC45));
				{
					Tidobj198015* LOC50;
					TNimObject* LOC51;
					if (!(x == NIM_NIL)) goto LA48;
					x = copysym_228607(s, NIM_FALSE);
					asgnRefNoCycle((void**) (&(*x).owner), (*c).gensymowner);
					LOC50 = 0;
					LOC50 = &s->Sup;
					LOC51 = 0;
					LOC51 = &x->Sup.Sup;
					idtableput_233196((&(*c).mapping), LOC50, LOC51);
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
				LOC58 = newsymnode_227338(x, LOC52);
				add_226165(result, LOC58);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			Tnode225809* LOC60;
			LOC60 = 0;
			LOC60 = copynode_431027((&(*c)), templ, actual);
			add_226165(result, LOC60);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		Tnode225809* LOC62;
		LOC62 = 0;
		LOC62 = copynode_431027((&(*c)), templ, actual);
		add_226165(result, LOC62);
	}
	break;
	default:
	{
		Tnode225809* res;
		res = copynode_431027((&(*c)), templ, actual);
		{
			NI i_431176;
			NI HEX3Atmp_431202;
			NI LOC65;
			NI res_431205;
			i_431176 = 0;
			HEX3Atmp_431202 = 0;
			LOC65 = 0;
			LOC65 = sonslen_228387(templ);
			HEX3Atmp_431202 = (NI)(LOC65 - ((NI) 1));
			res_431205 = ((NI) 0);
			{
				while (1) {
					if (!(res_431205 <= HEX3Atmp_431202)) goto LA67;
					i_431176 = res_431205;
					evaltemplateaux_431039((*templ).kindU.S6.sons->data[i_431176], actual, c, res);
					res_431205 += ((NI) 1);
				} LA67: ;
			}
		}
		add_226165(result, res);
	}
	break;
	}
}

static N_INLINE(NI, safelen_226126)(Tnode225809* n) {
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

N_NIMCALL(Tnode225809*, evaltemplate_431400)(Tnode225809* n, Tsym225841* tmpl, Tsym225841* gensymowner) {
	Tnode225809* result;
	Tnode225809* args;
	Templctx431019 ctx;
	Tnode225809* body;
	result = 0;
	evaltemplatecounter_431396 += ((NI) 1);
	{
		if (!(((NI) 100) < evaltemplatecounter_431396)) goto LA3;
		globalerror_196107((*n).info, ((NU16) 188), ((NimStringDesc*) &TMP2936));
		result = n;
	}
	LA3: ;
	args = evaltemplateargs_431248(n, tmpl);
	memset((void*)(&ctx), 0, sizeof(ctx));
	ctx.owner = tmpl;
	ctx.gensymowner = gensymowner;
	initidtable_229057((&ctx.mapping));
	body = getbody_271062(tmpl);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = isatom_230904(body);
		if (!LOC7) goto LA8;
		result = newnodei_227351(((NU8) 37), (*body).info);
		evaltemplateaux_431039(body, args, (&ctx), result);
		{
			NI LOC12;
			LOC12 = 0;
			LOC12 = len_226098(result);
			if (!(LOC12 == ((NI) 1))) goto LA13;
			result = (*result).kindU.S6.sons->data[((NI) 0)];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			LOC16 = 0;
			LOC16 = rendertree_247059(result, 4);
			localerror_196128((*result).info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		result = copynode_229660(body);
		ctx.instlines = !(((*body).kind == ((NU8) 115) || (*body).kind == ((NU8) 126) || (*body).kind == ((NU8) 112) || (*body).kind == ((NU8) 127)));
		{
			if (!ctx.instlines) goto LA20;
			(*result).info = (*n).info;
		}
		LA20: ;
		{
			NI i_431448;
			NI HEX3Atmp_431462;
			NI LOC23;
			NI res_431465;
			i_431448 = 0;
			HEX3Atmp_431462 = 0;
			LOC23 = 0;
			LOC23 = safelen_226126(body);
			HEX3Atmp_431462 = (NI)(LOC23 - ((NI) 1));
			res_431465 = ((NI) 0);
			{
				while (1) {
					if (!(res_431465 <= HEX3Atmp_431462)) goto LA25;
					i_431448 = res_431465;
					evaltemplateaux_431039((*body).kindU.S6.sons->data[i_431448], args, (&ctx), result);
					res_431465 += ((NI) 1);
				} LA25: ;
			}
		}
	}
	LA5: ;
	evaltemplatecounter_431396 -= ((NI) 1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplInit000)(void) {
	evaltemplatecounter_431396 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplDatInit000)(void) {
}
