/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tidtable190861 Tidtable190861;
typedef struct Tidpairseq190859 Tidpairseq190859;
typedef struct Ttype190849 Ttype190849;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tnode190813 Tnode190813;
typedef struct Tsym190843 Tsym190843;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tcell46547 Tcell46547;
typedef struct Tcellseq46563 Tcellseq46563;
typedef struct Tgcheap48416 Tgcheap48416;
typedef struct Tcellset46559 Tcellset46559;
typedef struct Tpagedesc46555 Tpagedesc46555;
typedef struct Tmemregion28410 Tmemregion28410;
typedef struct Tsmallchunk27640 Tsmallchunk27640;
typedef struct Tllchunk28404 Tllchunk28404;
typedef struct Tbigchunk27642 Tbigchunk27642;
typedef struct Tintset27617 Tintset27617;
typedef struct Ttrunk27613 Ttrunk27613;
typedef struct Tavlnode28408 Tavlnode28408;
typedef struct Tgcstat48414 Tgcstat48414;
typedef struct Tidpair190857 Tidpair190857;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tinfocpu159479 Tinfocpu159479;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tlib190831 Tlib190831;
typedef struct Tbasechunk27638 Tbasechunk27638;
typedef struct Tfreecell27630 Tfreecell27630;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY190933 TY190933;
struct  Tidtable190861  {
NI counter;
Tidpairseq190859* data;
};
typedef Tidtable190861 TY454272[62];
typedef Ttype190849* TY238060[62];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  Tcell46547  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46563  {
NI len;
NI cap;
Tcell46547** d;
};
struct  Tcellset46559  {
NI counter;
NI max;
Tpagedesc46555* head;
Tpagedesc46555** data;
};
typedef Tsmallchunk27640* TY28422[512];
typedef Ttrunk27613* Ttrunkbuckets27615[256];
struct  Tintset27617  {
Ttrunkbuckets27615 data;
};
struct  Tmemregion28410  {
NI minlargeobj;
NI maxlargeobj;
TY28422 freesmallchunks;
Tllchunk28404* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27642* freechunkslist;
Tintset27617 chunkstarts;
Tavlnode28408* root;
Tavlnode28408* deleted;
Tavlnode28408* last;
Tavlnode28408* freeavlnodes;
};
struct  Tgcstat48414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48416  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46563 zct;
Tcellseq46563 decstack;
Tcellset46559 cycleroots;
Tcellseq46563 tempstack;
NI recgclock;
Tmemregion28410 region;
Tgcstat48414 stat;
};
struct  Tidpair190857  {
Tidobj167015* key;
TNimObject* val;
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct Tinfocpu159479 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu159479 TY159497[14];
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
typedef NI TY27620[16];
struct  Tpagedesc46555  {
Tpagedesc46555* next;
NI key;
TY27620 bits;
};
struct  Tbasechunk27638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27640  {
  Tbasechunk27638 Sup;
Tsmallchunk27640* next;
Tsmallchunk27640* prev;
Tfreecell27630* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28404  {
NI size;
NI acc;
Tllchunk28404* next;
};
struct  Tbigchunk27642  {
  Tbasechunk27638 Sup;
Tbigchunk27642* next;
Tbigchunk27642* prev;
NI align;
NF data;
};
struct  Ttrunk27613  {
Ttrunk27613* next;
NI key;
TY27620 bits;
};
typedef Tavlnode28408* TY28414[2];
struct  Tavlnode28408  {
TY28414 link;
NI key;
NI upperbound;
NI level;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
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
struct  Tfreecell27630  {
Tfreecell27630* next;
NI zerofield;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct Tidpairseq190859 {
  TGenericSeq Sup;
  Tidpair190857 data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, inittypetables_454285)(void);
N_NIMCALL(void, initidtable_194057)(Tidtable190861* x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR c);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46547*, usrtocell_50046)(void* usr);
static N_INLINE(void, rtladdzct_51604)(Tcell46547* c);
N_NOINLINE(void, addzct_50017)(Tcellseq46563* s, Tcell46547* c);
N_NIMCALL(void, internalerror_165218)(NimStringDesc* errmsg);
N_NIMCALL(Ttype190849*, getuniquetype_454656)(Ttype190849* key);
N_NIMCALL(Ttype190849*, lastson_193442)(Ttype190849* n);
N_NIMCALL(Ttype190849*, slowsearch_454601)(Ttype190849* key, NU8 k);
N_NIMCALL(NIM_BOOL, idtablehasobjectaskey_198205)(Tidtable190861 t, Tidobj167015* key);
N_NIMCALL(NIM_BOOL, samebackendtype_227024)(Ttype190849* x, Ttype190849* y);
N_NIMCALL(void, idtableput_198196)(Tidtable190861* t, Tidobj167015* key, TNimObject* val);
N_NIMCALL(TNimObject*, idtableget_198182)(Tidtable190861 t, Tidobj167015* key);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, tocchar_163439)(NIM_CHAR c);
N_NIMCALL(Tnode190813*, getpragmastmt_454017)(Tnode190813* n, NU16 w);
static N_INLINE(NI, len_191097)(Tnode190813* n);
static N_INLINE(Tnode190813*, HEX5BHEX5D_191244)(Tnode190813* n, NI i);
N_NIMCALL(NU16, whichpragma_219673)(Tnode190813* n);
STRING_LITERAL(TMP3487, "N", 1);
STRING_LITERAL(TMP3488, "HEX", 3);
STRING_LITERAL(TMP3496, "getUniqueType", 13);
STRING_LITERAL(TMP3585, "\"", 1);
extern NIM_CONST TY159497 Cpu_159496;
TY454272 gtypetable_454275;
TY238060 gcanonicaltypes_454279;
extern Tgcheap48416 gch_48444;
extern NU8 targetcpu_159600;

N_NIMCALL(void, inittypetables_454285)(void) {
	{
		NU8 i_454423;
		NI res_454430;
		i_454423 = 0;
		res_454430 = ((NI) 0);
		{
			while (1) {
				if (!(res_454430 <= ((NI) 61))) goto LA3;
				i_454423 = ((NU8) (res_454430));
				initidtable_194057((&gtypetable_454275[(i_454423)- 0]));
				res_454430 += ((NI) 1);
			} LA3: ;
		}
	}
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, mangle_454896)(NimStringDesc* name) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString(((NI) ((name ? name->Sup.len : 0))));
	switch (((NU8)(name->data[((NI) 0)]))) {
	case 65 ... 90:
	case 97 ... 122:
	{
		result = addChar(result, name->data[((NI) 0)]);
	}
	break;
	case 48 ... 57:
	{
		NimStringDesc* LOC3;
		LOC3 = 0;
		LOC3 = rawNewString(2);
appendString(LOC3, ((NimStringDesc*) &TMP3487));
appendChar(LOC3, name->data[((NI) 0)]);
		result = resizeString(result, LOC3->Sup.len + 0);
appendString(result, LOC3);
	}
	break;
	default:
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		LOC5 = 0;
		LOC6 = 0;
		LOC6 = nsuToHex(((NI64) (((NU8)(name->data[((NI) 0)])))), ((NI) 2));
		LOC5 = rawNewString(LOC6->Sup.len + 3);
appendString(LOC5, ((NimStringDesc*) &TMP3488));
appendString(LOC5, LOC6);
		result = LOC5;
	}
	break;
	}
	{
		NI i_454918;
		NI HEX3Atmp_454929;
		NI res_454932;
		i_454918 = 0;
		HEX3Atmp_454929 = 0;
		HEX3Atmp_454929 = (NI)((name ? name->Sup.len : 0) - ((NI) 1));
		res_454932 = ((NI) 1);
		{
			while (1) {
				NIM_CHAR c;
				if (!(res_454932 <= HEX3Atmp_454929)) goto LA9;
				i_454918 = res_454932;
				c = name->data[i_454918];
				switch (((NU8)(c))) {
				case 65 ... 90:
				{
					NIM_CHAR LOC11;
					LOC11 = 0;
					LOC11 = nsuToLowerChar(c);
					result = addChar(result, LOC11);
				}
				break;
				case 95:
				{
				}
				break;
				case 97 ... 122:
				case 48 ... 57:
				{
					result = addChar(result, c);
				}
				break;
				default:
				{
					NimStringDesc* LOC15;
					NimStringDesc* LOC16;
					LOC15 = 0;
					LOC16 = 0;
					LOC16 = nsuToHex(((NI64) (((NU8)(c)))), ((NI) 2));
					LOC15 = rawNewString(LOC16->Sup.len + 3);
appendString(LOC15, ((NimStringDesc*) &TMP3488));
appendString(LOC15, LOC16);
					result = resizeString(result, LOC15->Sup.len + 0);
appendString(result, LOC15);
				}
				break;
				}
				res_454932 += ((NI) 1);
			} LA9: ;
		}
	}
	return result;
}

static N_INLINE(Tcell46547*, usrtocell_50046)(void* usr) {
	Tcell46547* result;
	result = 0;
	result = ((Tcell46547*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46547))))));
	return result;
}

static N_INLINE(void, rtladdzct_51604)(Tcell46547* c) {
	addzct_50017((&gch_48444.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46547* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_50046(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46547* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_50046((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51604(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Ttype190849*, slowsearch_454601)(Ttype190849* key, NU8 k) {
	Ttype190849* result;
	Tidobj167015* LOC16;
	TNimObject* LOC17;
{	result = 0;
	{
		Tidobj167015* LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC3 = &key->Sup;
		LOC4 = 0;
		LOC4 = idtablehasobjectaskey_198205(gtypetable_454275[(k)- 0], LOC3);
		if (!LOC4) goto LA5;
		result = key;
		goto BeforeRet;
	}
	LA5: ;
	{
		NI h_454618;
		NI HEX3Atmp_454634;
		NI res_454637;
		h_454618 = 0;
		HEX3Atmp_454634 = 0;
		HEX3Atmp_454634 = (gtypetable_454275[(k)- 0].data ? (gtypetable_454275[(k)- 0].data->Sup.len-1) : -1);
		res_454637 = ((NI) 0);
		{
			while (1) {
				Ttype190849* t;
				if (!(res_454637 <= HEX3Atmp_454634)) goto LA9;
				h_454618 = res_454637;
				t = ((Ttype190849*) (gtypetable_454275[(k)- 0].data->data[h_454618].key));
				{
					NIM_BOOL LOC12;
					LOC12 = 0;
					LOC12 = !((t == NIM_NIL));
					if (!(LOC12)) goto LA13;
					LOC12 = samebackendtype_227024(t, key);
					LA13: ;
					if (!LOC12) goto LA14;
					result = t;
					goto BeforeRet;
				}
				LA14: ;
				res_454637 += ((NI) 1);
			} LA9: ;
		}
	}
	LOC16 = 0;
	LOC16 = &key->Sup;
	LOC17 = 0;
	LOC17 = &key->Sup.Sup;
	idtableput_198196((&gtypetable_454275[(k)- 0]), LOC16, LOC17);
	result = key;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Ttype190849*, getuniquetype_454656)(Ttype190849* key) {
	Ttype190849* result;
	NU8 k;
{	result = 0;
	{
		if (!(key == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	k = (*key).kind;
	switch (k) {
	case ((NU8) 1):
	case ((NU8) 2):
	case ((NU8) 31) ... ((NU8) 44):
	{
		result = key;
	}
	break;
	case ((NU8) 3):
	case ((NU8) 5):
	case ((NU8) 6):
	case ((NU8) 7):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 29):
	case ((NU8) 0):
	case ((NU8) 45):
	{
		result = gcanonicaltypes_454279[(k)- 0];
		{
			if (!(result == NIM_NIL)) goto LA9;
			asgnRefNoCycle((void**) (&gcanonicaltypes_454279[(k)- 0]), key);
			result = key;
		}
		LA9: ;
	}
	break;
	case ((NU8) 8):
	case ((NU8) 51):
	case ((NU8) 12):
	case ((NU8) 60):
	case ((NU8) 61):
	case ((NU8) 54):
	case ((NU8) 52):
	case ((NU8) 53):
	case ((NU8) 55):
	case ((NU8) 56):
	case ((NU8) 57):
	case ((NU8) 58):
	{
		internalerror_165218(((NimStringDesc*) &TMP3496));
	}
	break;
	case ((NU8) 13):
	{
		{
			if (!!(((*key).deepcopy == NIM_NIL))) goto LA15;
			result = key;
		}
		goto LA13;
		LA15: ;
		{
			Ttype190849* LOC18;
			LOC18 = 0;
			LOC18 = lastson_193442(key);
			result = getuniquetype_454656(LOC18);
		}
		LA13: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 15):
	case ((NU8) 47):
	case ((NU8) 46):
	case ((NU8) 49):
	case ((NU8) 59):
	{
		Ttype190849* LOC20;
		LOC20 = 0;
		LOC20 = lastson_193442(key);
		result = getuniquetype_454656(LOC20);
	}
	break;
	case ((NU8) 21):
	case ((NU8) 22):
	case ((NU8) 23):
	{
		Ttype190849* elemtype;
		elemtype = lastson_193442(key);
		{
			if (!((*elemtype).kind == ((NU8) 1) || (*elemtype).kind == ((NU8) 2) || (*elemtype).kind >= ((NU8) 31) && (*elemtype).kind <= ((NU8) 44))) goto LA24;
			result = key;
		}
		goto LA22;
		LA24: ;
		{
			result = slowsearch_454601(key, k);
		}
		LA22: ;
	}
	break;
	case ((NU8) 4):
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 27):
	case ((NU8) 16):
	case ((NU8) 19):
	case ((NU8) 20):
	case ((NU8) 18):
	case ((NU8) 24):
	case ((NU8) 30):
	case ((NU8) 48):
	case ((NU8) 50):
	{
		result = slowsearch_454601(key, k);
	}
	break;
	case ((NU8) 17):
	{
		{
			Tidobj167015* LOC33;
			TNimObject* LOC34;
			if (!!((((*key).flags &(1<<((((NU8) 8))&31)))!=0))) goto LA31;
			LOC33 = 0;
			LOC33 = &key->Sup;
			LOC34 = 0;
			LOC34 = idtableget_198182(gtypetable_454275[(k)- 0], LOC33);
			result = ((Ttype190849*) (LOC34));
			{
				Tidobj167015* LOC39;
				TNimObject* LOC40;
				if (!(result == NIM_NIL)) goto LA37;
				LOC39 = 0;
				LOC39 = &key->Sup;
				LOC40 = 0;
				LOC40 = &key->Sup.Sup;
				idtableput_198196((&gtypetable_454275[(k)- 0]), LOC39, LOC40);
				result = key;
			}
			LA37: ;
		}
		goto LA29;
		LA31: ;
		{
			Tidobj167015* LOC57;
			TNimObject* LOC58;
			{
				Tidobj167015* LOC44;
				NIM_BOOL LOC45;
				LOC44 = 0;
				LOC44 = &key->Sup;
				LOC45 = 0;
				LOC45 = idtablehasobjectaskey_198205(gtypetable_454275[(k)- 0], LOC44);
				if (!LOC45) goto LA46;
				result = key;
				goto BeforeRet;
			}
			LA46: ;
			{
				NI h_454744;
				NI HEX3Atmp_454782;
				NI res_454785;
				h_454744 = 0;
				HEX3Atmp_454782 = 0;
				HEX3Atmp_454782 = (gtypetable_454275[(k)- 0].data ? (gtypetable_454275[(k)- 0].data->Sup.len-1) : -1);
				res_454785 = ((NI) 0);
				{
					while (1) {
						Ttype190849* t;
						if (!(res_454785 <= HEX3Atmp_454782)) goto LA50;
						h_454744 = res_454785;
						t = ((Ttype190849*) (gtypetable_454275[(k)- 0].data->data[h_454744].key));
						{
							NIM_BOOL LOC53;
							LOC53 = 0;
							LOC53 = !((t == NIM_NIL));
							if (!(LOC53)) goto LA54;
							LOC53 = samebackendtype_227024(t, key);
							LA54: ;
							if (!LOC53) goto LA55;
							result = t;
							goto BeforeRet;
						}
						LA55: ;
						res_454785 += ((NI) 1);
					} LA50: ;
				}
			}
			LOC57 = 0;
			LOC57 = &key->Sup;
			LOC58 = 0;
			LOC58 = &key->Sup.Sup;
			idtableput_198196((&gtypetable_454275[(k)- 0]), LOC57, LOC58);
			result = key;
		}
		LA29: ;
	}
	break;
	case ((NU8) 14):
	{
		Tidobj167015* LOC60;
		TNimObject* LOC61;
		LOC60 = 0;
		LOC60 = &key->Sup;
		LOC61 = 0;
		LOC61 = idtableget_198182(gtypetable_454275[(k)- 0], LOC60);
		result = ((Ttype190849*) (LOC61));
		{
			Tidobj167015* LOC66;
			TNimObject* LOC67;
			if (!(result == NIM_NIL)) goto LA64;
			LOC66 = 0;
			LOC66 = &key->Sup;
			LOC67 = 0;
			LOC67 = &key->Sup.Sup;
			idtableput_198196((&gtypetable_454275[(k)- 0]), LOC66, LOC67);
			result = key;
		}
		LA64: ;
	}
	break;
	case ((NU8) 25):
	{
		{
			if (!!(((*key).callconv == ((NU8) 8)))) goto LA71;
			result = key;
		}
		goto LA69;
		LA71: ;
		{
			result = slowsearch_454601(key, k);
		}
		LA69: ;
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, makesinglelinecstring_454870)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP3585));
	{
		NIM_CHAR c_454874;
		NI i_454878;
		NI L_454880;
		c_454874 = 0;
		i_454878 = ((NI) 0);
		L_454880 = (s ? s->Sup.len : 0);
		{
			while (1) {
				NimStringDesc* LOC4;
				if (!(i_454878 < L_454880)) goto LA3;
				c_454874 = s->data[i_454878];
				LOC4 = 0;
				LOC4 = tocchar_163439(c_454874);
				result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
				i_454878 += ((NI) 1);
			} LA3: ;
		}
	}
	result = addChar(result, 34);
	return result;
}

static N_INLINE(NI, len_191097)(Tnode190813* n) {
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

static N_INLINE(Tnode190813*, HEX5BHEX5D_191244)(Tnode190813* n, NI i) {
	Tnode190813* result;
	result = 0;
	result = (*n).kindU.S6.sons->data[i];
	return result;
}

N_NIMCALL(Tnode190813*, getpragmastmt_454017)(Tnode190813* n, NU16 w) {
	Tnode190813* result;
{	result = 0;
	switch ((*n).kind) {
	case ((NU8) 115):
	{
		{
			NI i_454041;
			NI HEX3Atmp_454084;
			NI LOC3;
			NI res_454087;
			i_454041 = 0;
			HEX3Atmp_454084 = 0;
			LOC3 = 0;
			LOC3 = len_191097(n);
			HEX3Atmp_454084 = (LOC3 - 1);
			res_454087 = ((NI) 0);
			{
				while (1) {
					Tnode190813* LOC6;
					if (!(res_454087 <= HEX3Atmp_454084)) goto LA5;
					i_454041 = res_454087;
					LOC6 = 0;
					LOC6 = HEX5BHEX5D_191244(n, i_454041);
					result = getpragmastmt_454017(LOC6, w);
					{
						if (!!((result == NIM_NIL))) goto LA9;
						goto LA2;
					}
					LA9: ;
					res_454087 += ((NI) 1);
				} LA5: ;
			}
		} LA2: ;
	}
	break;
	case ((NU8) 90):
	{
		{
			NI i_454073;
			NI HEX3Atmp_454092;
			NI LOC13;
			NI res_454095;
			i_454073 = 0;
			HEX3Atmp_454092 = 0;
			LOC13 = 0;
			LOC13 = len_191097(n);
			HEX3Atmp_454092 = (LOC13 - 1);
			res_454095 = ((NI) 0);
			{
				while (1) {
					if (!(res_454095 <= HEX3Atmp_454092)) goto LA15;
					i_454073 = res_454095;
					{
						Tnode190813* LOC18;
						NU16 LOC19;
						LOC18 = 0;
						LOC18 = HEX5BHEX5D_191244(n, i_454073);
						LOC19 = 0;
						LOC19 = whichpragma_219673(LOC18);
						if (!(LOC19 == w)) goto LA20;
						result = HEX5BHEX5D_191244(n, i_454073);
						goto BeforeRet;
					}
					LA20: ;
					res_454095 += ((NI) 1);
				} LA15: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, stmtscontainpragma_454123)(Tnode190813* n, NU16 w) {
	NIM_BOOL result;
	Tnode190813* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getpragmastmt_454017(n, w);
	result = !((LOC1 == NIM_NIL));
	return result;
}

N_NIMCALL(NI64, hashstring_454146)(NimStringDesc* s) {
	NI64 result;
	result = 0;
	{
		NI64 b;
		if (!(Cpu_159496[(targetcpu_159600)- 1].Field4 == ((NI) 64))) goto LA3;
		b = IL64(0);
		{
			NI i_454163;
			NI HEX3Atmp_454232;
			NI res_454235;
			i_454163 = 0;
			HEX3Atmp_454232 = 0;
			HEX3Atmp_454232 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
			res_454235 = ((NI) 0);
			{
				while (1) {
					if (!(res_454235 <= HEX3Atmp_454232)) goto LA7;
					i_454163 = res_454235;
					b = (NI64)((NU64)(b) + (NU64)(((NI64) (((NU8)(s->data[i_454163]))))));
					b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(IL64(10)))));
					b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(IL64(6))));
					res_454235 += ((NI) 1);
				} LA7: ;
			}
		}
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(IL64(3)))));
		b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(IL64(11))));
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(IL64(15)))));
		result = b;
	}
	goto LA1;
	LA3: ;
	{
		NI32 a;
		a = ((NI32) 0);
		{
			NI i_454185;
			NI HEX3Atmp_454241;
			NI res_454244;
			i_454185 = 0;
			HEX3Atmp_454241 = 0;
			HEX3Atmp_454241 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
			res_454244 = ((NI) 0);
			{
				while (1) {
					if (!(res_454244 <= HEX3Atmp_454241)) goto LA11;
					i_454185 = res_454244;
					a = (NI32)((NU32)(a) + (NU32)(((NI32) (((NU8)(s->data[i_454185]))))));
					a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 10)))));
					a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 6))));
					res_454244 += ((NI) 1);
				} LA11: ;
			}
		}
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 3)))));
		a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 11))));
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 15)))));
		result = ((NI64) (a));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, resetcaches_454448)(void) {
	inittypetables_454285();
	{
		NU8 i_454460;
		NI res_454464;
		i_454460 = 0;
		res_454464 = ((NI) 0);
		{
			while (1) {
				if (!(res_454464 <= ((NI) 61))) goto LA3;
				i_454460 = ((NU8) (res_454464));
				asgnRefNoCycle((void**) (&gcanonicaltypes_454279[(i_454460)- 0]), NIM_NIL);
				res_454464 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_ccgutilsInit)(void) {
	inittypetables_454285();
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_ccgutilsDatInit)(void) {
}

