/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tidtable225864 tidtable225864;
typedef struct tidpairseq225862 tidpairseq225862;
typedef struct tidpair225860 tidpair225860;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype225852 ttype225852;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq225848 ttypeseq225848;
typedef struct tnode225816 tnode225816;
typedef struct tsym225846 tsym225846;
typedef struct tloc225830 tloc225830;
typedef struct trope177009 trope177009;
typedef struct tcell44935 tcell44935;
typedef struct tcellseq44951 tcellseq44951;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44947 tcellset44947;
typedef struct tpagedesc44943 tpagedesc44943;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct NimStringDesc NimStringDesc;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tident200021 tident200021;
typedef struct tnodeseq225810 tnodeseq225810;
typedef struct tinfocpu174463 tinfocpu174463;
typedef struct tscope225840 tscope225840;
typedef struct TY225947 TY225947;
typedef struct tinstantiation225836 tinstantiation225836;
typedef struct tstrtable225820 tstrtable225820;
typedef struct tsymseq225818 tsymseq225818;
typedef struct tlib225834 tlib225834;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef struct TY225936 TY225936;
typedef struct tlistentry127022 tlistentry127022;
struct  tidpair225860  {
tidobj200015* Key;
TNimObject* Val;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tidtable225864  {
NI Counter;
tidpairseq225862* Data;
};
typedef tidtable225864 TY548278[62];
typedef ttype225852* TY282060[62];
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tloc225830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype225852* T;
trope177009* R;
trope177009* Heaproot;
};
struct  ttype225852  {
  tidobj200015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq225848* Sons;
tnode225816* N;
tsym225846* Owner;
tsym225846* Sym;
tsym225846* Destructor;
tsym225846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc225830 Loc;
};
struct  tcell44935  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44951  {
NI Len;
NI Cap;
tcell44935** D;
};
struct  tcellset44947  {
NI Counter;
NI Max;
tpagedesc44943* Head;
tpagedesc44943** Data;
};
typedef tsmallchunk26440* TY27222[512];
typedef ttrunk26413* ttrunkbuckets26415[256];
struct  tintset26417  {
ttrunkbuckets26415 Data;
};
struct  tmemregion27210  {
NI Minlargeobj;
NI Maxlargeobj;
TY27222 Freesmallchunks;
tllchunk27204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26442* Freechunkslist;
tintset26417 Chunkstarts;
tavlnode27208* Root;
tavlnode27208* Deleted;
tavlnode27208* Last;
tavlnode27208* Freeavlnodes;
};
struct  tgcstat47014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44951 Zct;
tcellseq44951 Decstack;
tcellset44947 Cycleroots;
tcellseq44951 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tnode225816  {
ttype225852* Typ;
tlineinfo195539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym225846* Sym;
} S4;
struct {tident200021* Ident;
} S5;
struct {tnodeseq225810* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct tinfocpu174463 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu174463 TY174481[14];
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tstrtable225820  {
NI Counter;
tsymseq225818* Data;
};
struct  tsym225846  {
  tidobj200015 Sup;
NU8 Kind;
union {
struct {ttypeseq225848* Typeinstcache;
tscope225840* Typscope;
} S1;
struct {TY225947* Procinstcache;
tscope225840* Scope;
} S2;
struct {TY225947* Usedgenerics;
tstrtable225820 Tab;
} S3;
struct {tsym225846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype225852* Typ;
tident200021* Name;
tlineinfo195539 Info;
tsym225846* Owner;
NU32 Flags;
tnode225816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc225830 Loc;
tlib225834* Annex;
tnode225816* Constraint;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY26420[16];
struct  tpagedesc44943  {
tpagedesc44943* Next;
NI Key;
TY26420 Bits;
};
struct  tbasechunk26438  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26440  {
  tbasechunk26438 Sup;
tsmallchunk26440* Next;
tsmallchunk26440* Prev;
tfreecell26430* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27204  {
NI Size;
NI Acc;
tllchunk27204* Next;
};
struct  tbigchunk26442  {
  tbasechunk26438 Sup;
tbigchunk26442* Next;
tbigchunk26442* Prev;
NI Align;
NF Data;
};
struct  ttrunk26413  {
ttrunk26413* Next;
NI Key;
TY26420 Bits;
};
typedef tavlnode27208* TY27214[2];
struct  tavlnode27208  {
TY27214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
struct  tscope225840  {
NI Depthlevel;
tstrtable225820 Symbols;
tnodeseq225810* Usingsyms;
tscope225840* Parent;
};
struct  tinstantiation225836  {
tsym225846* Sym;
ttypeseq225848* Concretetypes;
TY225936* Usedby;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib225834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode225816* Path;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct tidpairseq225862 {
  TGenericSeq Sup;
  tidpair225860 data[SEQ_DECL_SIZE];
};
struct ttypeseq225848 {
  TGenericSeq Sup;
  ttype225852* data[SEQ_DECL_SIZE];
};
struct tnodeseq225810 {
  TGenericSeq Sup;
  tnode225816* data[SEQ_DECL_SIZE];
};
struct TY225947 {
  TGenericSeq Sup;
  tinstantiation225836* data[SEQ_DECL_SIZE];
};
struct tsymseq225818 {
  TGenericSeq Sup;
  tsym225846* data[SEQ_DECL_SIZE];
};
struct TY225936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, inittypetables_548291)(void);
N_NIMCALL(void, initidtable_226167)(tidtable225864* x);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(void, internalerror_198006)(NimStringDesc* errmsg);
N_NIMCALL(ttype225852*, getuniquetype_548401)(ttype225852* key);
static N_INLINE(ttype225852*, lastson_226267)(ttype225852* n);
static N_INLINE(NI, sonslen_226255)(ttype225852* n);
N_NIMCALL(NIM_BOOL, idtablehasobjectaskey_235205)(tidtable225864 t, tidobj200015* key);
N_NIMCALL(NIM_BOOL, samebackendtype_270542)(ttype225852* x, ttype225852* y);
N_NIMCALL(void, idtableput_235196)(tidtable225864* t, tidobj200015* key, TNimObject* val);
N_NIMCALL(TNimObject*, idtableget_235182)(tidtable225864 t, tidobj200015* key);
N_NIMCALL(NIM_BOOL, sametype_268351)(ttype225852* a, ttype225852* b, NU8 flags);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR c);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, tocchar_195649)(NIM_CHAR c);
N_NIMCALL(tnode225816*, getpragmastmt_548017)(tnode225816* n, NU8 w);
static N_INLINE(NI, len_226364)(tnode225816* n);
static N_INLINE(tnode225816*, HEX5BHEX5D_226698)(tnode225816* n, NI i);
N_NIMCALL(NU8, whichpragma_262304)(tnode225816* n);
N_NIMCALL(void, app_177052)(trope177009** a, trope177009* b);
N_NIMCALL(trope177009*, torope_177076)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
STRING_LITERAL(TMP3355, "GetUniqueType", 13);
STRING_LITERAL(TMP3362, "N", 1);
STRING_LITERAL(TMP3363, "HEX", 3);
STRING_LITERAL(TMP3454, "\"", 1);
STRING_LITERAL(TMP3965, "c\"", 2);
STRING_LITERAL(TMP3966, "\\00\"", 4);
extern NIM_CONST TY174481 cpu_174480;
TY548278 gtypetable_548281;
TY282060 gcanonicaltypes_548285;
extern tgcheap47016 gch_47044;
extern NU8 targetcpu_174587;

N_NIMCALL(void, inittypetables_548291)(void) {
	{
		NU8 i_548341;
		NU8 res_548348;
		i_548341 = 0;
		res_548348 = ((NU8) 0);
		{
			while (1) {
				if (!(res_548348 <= ((NU8) 61))) goto LA3;
				i_548341 = res_548348;
				initidtable_226167((&gtypetable_548281[(i_548341)- 0]));
				res_548348 += 1;
			} LA3: ;
		}
	}
}

static N_INLINE(tcell44935*, usrtocell_48646)(void* usr) {
	tcell44935* result;
	result = 0;
	result = ((tcell44935*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44935))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44935* c) {
	addzct_48617((&gch_47044.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44935* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48646(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44935* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48646((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NI, sonslen_226255)(ttype225852* n) {
	NI result;
	result = 0;
	{
		if (!(*n).Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).Sons->Sup.len;
	}
	LA1: ;
	return result;
}

static N_INLINE(ttype225852*, lastson_226267)(ttype225852* n) {
	ttype225852* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sonslen_226255(n);
	result = (*n).Sons->data[(NI32)(LOC1 - 1)];
	return result;
}

N_NIMCALL(ttype225852*, getuniquetype_548401)(ttype225852* key) {
	ttype225852* result;
	NU8 k;
	result = 0;
	{
		if (!(key == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	k = (*key).Kind;
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
		result = gcanonicaltypes_548285[(k)- 0];
		{
			if (!(result == NIM_NIL)) goto LA9;
			asgnRefNoCycle((void**) (&gcanonicaltypes_548285[(k)- 0]), key);
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
		internalerror_198006(((NimStringDesc*) &TMP3355));
	}
	break;
	case ((NU8) 13):
	{
		{
			if (!!(((*key).Deepcopy == NIM_NIL))) goto LA15;
			result = key;
		}
		goto LA13;
		LA15: ;
		{
			ttype225852* LOC18;
			LOC18 = 0;
			LOC18 = lastson_226267(key);
			result = getuniquetype_548401(LOC18);
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
		ttype225852* LOC20;
		LOC20 = 0;
		LOC20 = lastson_226267(key);
		result = getuniquetype_548401(LOC20);
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
	case ((NU8) 21):
	case ((NU8) 22):
	case ((NU8) 24):
	case ((NU8) 30):
	case ((NU8) 48):
	case ((NU8) 50):
	case ((NU8) 23):
	{
		tidobj200015* LOC37;
		TNimObject* LOC38;
		{
			tidobj200015* LOC24;
			NIM_BOOL LOC25;
			LOC24 = 0;
			LOC24 = &key->Sup;
			LOC25 = 0;
			LOC25 = idtablehasobjectaskey_235205(gtypetable_548281[(k)- 0], LOC24);
			if (!LOC25) goto LA26;
			result = key;
			goto BeforeRet;
		}
		LA26: ;
		{
			NI h_548469;
			NI HEX3Atmp_548612;
			NI res_548615;
			h_548469 = 0;
			HEX3Atmp_548612 = 0;
			HEX3Atmp_548612 = (gtypetable_548281[(k)- 0].Data->Sup.len-1);
			res_548615 = 0;
			{
				while (1) {
					ttype225852* t;
					if (!(res_548615 <= HEX3Atmp_548612)) goto LA30;
					h_548469 = res_548615;
					t = ((ttype225852*) (gtypetable_548281[(k)- 0].Data->data[h_548469].Key));
					{
						NIM_BOOL LOC33;
						LOC33 = 0;
						LOC33 = !((t == NIM_NIL));
						if (!(LOC33)) goto LA34;
						LOC33 = samebackendtype_270542(t, key);
						LA34: ;
						if (!LOC33) goto LA35;
						result = t;
						goto BeforeRet;
					}
					LA35: ;
					res_548615 += 1;
				} LA30: ;
			}
		}
		LOC37 = 0;
		LOC37 = &key->Sup;
		LOC38 = 0;
		LOC38 = &key->Sup.Sup;
		idtableput_235196((&gtypetable_548281[(k)- 0]), LOC37, LOC38);
		result = key;
	}
	break;
	case ((NU8) 17):
	{
		{
			tidobj200015* LOC44;
			TNimObject* LOC45;
			if (!!((((*key).Flags &(1<<((((NU8) 8))&31)))!=0))) goto LA42;
			LOC44 = 0;
			LOC44 = &key->Sup;
			LOC45 = 0;
			LOC45 = idtableget_235182(gtypetable_548281[(k)- 0], LOC44);
			result = ((ttype225852*) (LOC45));
			{
				tidobj200015* LOC50;
				TNimObject* LOC51;
				if (!(result == NIM_NIL)) goto LA48;
				LOC50 = 0;
				LOC50 = &key->Sup;
				LOC51 = 0;
				LOC51 = &key->Sup.Sup;
				idtableput_235196((&gtypetable_548281[(k)- 0]), LOC50, LOC51);
				result = key;
			}
			LA48: ;
		}
		goto LA40;
		LA42: ;
		{
			tidobj200015* LOC68;
			TNimObject* LOC69;
			{
				tidobj200015* LOC55;
				NIM_BOOL LOC56;
				LOC55 = 0;
				LOC55 = &key->Sup;
				LOC56 = 0;
				LOC56 = idtablehasobjectaskey_235205(gtypetable_548281[(k)- 0], LOC55);
				if (!LOC56) goto LA57;
				result = key;
				goto BeforeRet;
			}
			LA57: ;
			{
				NI h_548532;
				NI HEX3Atmp_548618;
				NI res_548621;
				h_548532 = 0;
				HEX3Atmp_548618 = 0;
				HEX3Atmp_548618 = (gtypetable_548281[(k)- 0].Data->Sup.len-1);
				res_548621 = 0;
				{
					while (1) {
						ttype225852* t;
						if (!(res_548621 <= HEX3Atmp_548618)) goto LA61;
						h_548532 = res_548621;
						t = ((ttype225852*) (gtypetable_548281[(k)- 0].Data->data[h_548532].Key));
						{
							NIM_BOOL LOC64;
							LOC64 = 0;
							LOC64 = !((t == NIM_NIL));
							if (!(LOC64)) goto LA65;
							LOC64 = sametype_268351(t, key, 0);
							LA65: ;
							if (!LOC64) goto LA66;
							result = t;
							goto BeforeRet;
						}
						LA66: ;
						res_548621 += 1;
					} LA61: ;
				}
			}
			LOC68 = 0;
			LOC68 = &key->Sup;
			LOC69 = 0;
			LOC69 = &key->Sup.Sup;
			idtableput_235196((&gtypetable_548281[(k)- 0]), LOC68, LOC69);
			result = key;
		}
		LA40: ;
	}
	break;
	case ((NU8) 14):
	{
		tidobj200015* LOC71;
		TNimObject* LOC72;
		LOC71 = 0;
		LOC71 = &key->Sup;
		LOC72 = 0;
		LOC72 = idtableget_235182(gtypetable_548281[(k)- 0], LOC71);
		result = ((ttype225852*) (LOC72));
		{
			tidobj200015* LOC77;
			TNimObject* LOC78;
			if (!(result == NIM_NIL)) goto LA75;
			LOC77 = 0;
			LOC77 = &key->Sup;
			LOC78 = 0;
			LOC78 = &key->Sup.Sup;
			idtableput_235196((&gtypetable_548281[(k)- 0]), LOC77, LOC78);
			result = key;
		}
		LA75: ;
	}
	break;
	case ((NU8) 25):
	{
		{
			if (!!(((*key).Callconv == ((NU8) 8)))) goto LA82;
			result = key;
		}
		goto LA80;
		LA82: ;
		{
			tidobj200015* LOC100;
			TNimObject* LOC101;
			{
				tidobj200015* LOC87;
				NIM_BOOL LOC88;
				LOC87 = 0;
				LOC87 = &key->Sup;
				LOC88 = 0;
				LOC88 = idtablehasobjectaskey_235205(gtypetable_548281[(k)- 0], LOC87);
				if (!LOC88) goto LA89;
				result = key;
				goto BeforeRet;
			}
			LA89: ;
			{
				NI h_548591;
				NI HEX3Atmp_548624;
				NI res_548627;
				h_548591 = 0;
				HEX3Atmp_548624 = 0;
				HEX3Atmp_548624 = (gtypetable_548281[(k)- 0].Data->Sup.len-1);
				res_548627 = 0;
				{
					while (1) {
						ttype225852* t;
						if (!(res_548627 <= HEX3Atmp_548624)) goto LA93;
						h_548591 = res_548627;
						t = ((ttype225852*) (gtypetable_548281[(k)- 0].Data->data[h_548591].Key));
						{
							NIM_BOOL LOC96;
							LOC96 = 0;
							LOC96 = !((t == NIM_NIL));
							if (!(LOC96)) goto LA97;
							LOC96 = samebackendtype_270542(t, key);
							LA97: ;
							if (!LOC96) goto LA98;
							result = t;
							goto BeforeRet;
						}
						LA98: ;
						res_548627 += 1;
					} LA93: ;
				}
			}
			LOC100 = 0;
			LOC100 = &key->Sup;
			LOC101 = 0;
			LOC101 = &key->Sup.Sup;
			idtableput_235196((&gtypetable_548281[(k)- 0]), LOC100, LOC101);
			result = key;
		}
		LA80: ;
	}
	break;
	}
	BeforeRet: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(NimStringDesc*, mangle_548763)(NimStringDesc* name) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString(name->Sup.len);
	switch (((NU8)(name->data[0]))) {
	case 65 ... 90:
	case 97 ... 122:
	{
		NIM_CHAR LOC2;
		LOC2 = 0;
		LOC2 = nsuToLowerChar(name->data[0]);
		result = addChar(result, LOC2);
	}
	break;
	case 48 ... 57:
	{
		NimStringDesc* LOC4;
		LOC4 = 0;
		LOC4 = rawNewString(2);
appendString(LOC4, ((NimStringDesc*) &TMP3362));
appendChar(LOC4, name->data[0]);
		result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
	}
	break;
	default:
	{
		NimStringDesc* LOC6;
		NimStringDesc* LOC7;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = nsuToHex(((NI64) (((NU8)(name->data[0])))), 2);
		LOC6 = rawNewString(LOC7->Sup.len + 3);
appendString(LOC6, ((NimStringDesc*) &TMP3363));
appendString(LOC6, LOC7);
		result = LOC6;
	}
	break;
	}
	{
		NI i_548785;
		NI HEX3Atmp_548796;
		NI res_548799;
		i_548785 = 0;
		HEX3Atmp_548796 = 0;
		HEX3Atmp_548796 = (NI32)(name->Sup.len - 1);
		res_548799 = 1;
		{
			while (1) {
				NIM_CHAR c;
				if (!(res_548799 <= HEX3Atmp_548796)) goto LA10;
				i_548785 = res_548799;
				c = name->data[i_548785];
				switch (((NU8)(c))) {
				case 65 ... 90:
				{
					NIM_CHAR LOC12;
					LOC12 = 0;
					LOC12 = nsuToLowerChar(c);
					result = addChar(result, LOC12);
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
					NimStringDesc* LOC16;
					NimStringDesc* LOC17;
					LOC16 = 0;
					LOC17 = 0;
					LOC17 = nsuToHex(((NI64) (((NU8)(c)))), 2);
					LOC16 = rawNewString(LOC17->Sup.len + 3);
appendString(LOC16, ((NimStringDesc*) &TMP3363));
appendString(LOC16, LOC17);
					result = resizeString(result, LOC16->Sup.len + 0);
appendString(result, LOC16);
				}
				break;
				}
				res_548799 += 1;
			} LA10: ;
		}
	}
	return result;
}

N_NIMCALL(NimStringDesc*, makesinglelinecstring_548737)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP3454));
	{
		NIM_CHAR c_548741;
		NI i_548745;
		NI l_548747;
		c_548741 = 0;
		i_548745 = 0;
		l_548747 = s->Sup.len;
		{
			while (1) {
				NimStringDesc* LOC4;
				if (!(i_548745 < l_548747)) goto LA3;
				c_548741 = s->data[i_548745];
				LOC4 = 0;
				LOC4 = tocchar_195649(c_548741);
				result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
				i_548745 += 1;
			} LA3: ;
		}
	}
	result = addChar(result, 34);
	return result;
}

static N_INLINE(NI, len_226364)(tnode225816* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

static N_INLINE(tnode225816*, HEX5BHEX5D_226698)(tnode225816* n, NI i) {
	tnode225816* result;
	result = 0;
	result = (*n).kindU.S6.Sons->data[i];
	return result;
}

N_NIMCALL(tnode225816*, getpragmastmt_548017)(tnode225816* n, NU8 w) {
	tnode225816* result;
	result = 0;
	switch ((*n).Kind) {
	case ((NU8) 115):
	{
		{
			NI i_548043;
			NI HEX3Atmp_548093;
			NI LOC3;
			NI res_548096;
			i_548043 = 0;
			HEX3Atmp_548093 = 0;
			LOC3 = 0;
			LOC3 = len_226364(n);
			HEX3Atmp_548093 = (LOC3 - 1);
			res_548096 = 0;
			{
				while (1) {
					tnode225816* LOC6;
					if (!(res_548096 <= HEX3Atmp_548093)) goto LA5;
					i_548043 = res_548096;
					LOC6 = 0;
					LOC6 = HEX5BHEX5D_226698(n, i_548043);
					result = getpragmastmt_548017(LOC6, w);
					{
						if (!!((result == NIM_NIL))) goto LA9;
						goto LA2;
					}
					LA9: ;
					res_548096 += 1;
				} LA5: ;
			}
		} LA2: ;
	}
	break;
	case ((NU8) 90):
	{
		{
			NI i_548082;
			NI HEX3Atmp_548099;
			NI LOC13;
			NI res_548102;
			i_548082 = 0;
			HEX3Atmp_548099 = 0;
			LOC13 = 0;
			LOC13 = len_226364(n);
			HEX3Atmp_548099 = (LOC13 - 1);
			res_548102 = 0;
			{
				while (1) {
					if (!(res_548102 <= HEX3Atmp_548099)) goto LA15;
					i_548082 = res_548102;
					{
						tnode225816* LOC18;
						NU8 LOC19;
						LOC18 = 0;
						LOC18 = HEX5BHEX5D_226698(n, i_548082);
						LOC19 = 0;
						LOC19 = whichpragma_262304(LOC18);
						if (!(LOC19 == w)) goto LA20;
						result = HEX5BHEX5D_226698(n, i_548082);
						goto BeforeRet;
					}
					LA20: ;
					res_548102 += 1;
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
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, stmtscontainpragma_548128)(tnode225816* n, NU8 w) {
	NIM_BOOL result;
	tnode225816* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getpragmastmt_548017(n, w);
	result = !((LOC1 == NIM_NIL));
	return result;
}

N_NIMCALL(trope177009*, makellvmstring_548816)(NimStringDesc* s) {
	trope177009* result;
	NimStringDesc* res;
	trope177009* LOC12;
	result = 0;
	result = NIM_NIL;
	res = copyString(((NimStringDesc*) &TMP3965));
	{
		NI i_548834;
		NI HEX3Atmp_548847;
		NI res_548850;
		i_548834 = 0;
		HEX3Atmp_548847 = 0;
		HEX3Atmp_548847 = (NI32)(s->Sup.len - 1);
		res_548850 = 0;
		{
			while (1) {
				if (!(res_548850 <= HEX3Atmp_548847)) goto LA3;
				i_548834 = res_548850;
				{
					trope177009* LOC8;
					if (!(((NI) ((NI32)((NI32)(i_548834 + 1) % 64))) == 0)) goto LA6;
					LOC8 = 0;
					LOC8 = torope_177076(res);
					app_177052(&result, LOC8);
					res = setLengthStr(res, 0);
				}
				LA6: ;
				switch (((NU8)(s->data[i_548834]))) {
				case 0 ... 31:
				case 128 ... 255:
				case 34:
				case 92:
				{
					NimStringDesc* LOC10;
					res = addChar(res, 92);
					LOC10 = 0;
					LOC10 = nsuToHex(((NI64) (((NU8)(s->data[i_548834])))), 2);
					res = resizeString(res, LOC10->Sup.len + 0);
appendString(res, LOC10);
				}
				break;
				default:
				{
					res = addChar(res, s->data[i_548834]);
				}
				break;
				}
				res_548850 += 1;
			} LA3: ;
		}
	}
	res = resizeString(res, 4);
appendString(res, ((NimStringDesc*) &TMP3966));
	LOC12 = 0;
	LOC12 = torope_177076(res);
	app_177052(&result, LOC12);
	return result;
}

N_NIMCALL(NI64, hashstring_548156)(NimStringDesc* s) {
	NI64 result;
	result = 0;
	{
		NI64 b;
		if (!(cpu_174480[(targetcpu_174587)- 1].Field4 == 64)) goto LA3;
		b = IL64(0);
		{
			NI i_548173;
			NI HEX3Atmp_548242;
			NI res_548245;
			i_548173 = 0;
			HEX3Atmp_548242 = 0;
			HEX3Atmp_548242 = (NI32)(s->Sup.len - 1);
			res_548245 = 0;
			{
				while (1) {
					if (!(res_548245 <= HEX3Atmp_548242)) goto LA7;
					i_548173 = res_548245;
					b = (NI64)((NU64)(b) + (NU64)(((NI64) (((NU8)(s->data[i_548173]))))));
					b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(IL64(10)))));
					b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(IL64(6))));
					res_548245 += 1;
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
			NI i_548195;
			NI HEX3Atmp_548249;
			NI res_548252;
			i_548195 = 0;
			HEX3Atmp_548249 = 0;
			HEX3Atmp_548249 = (NI32)(s->Sup.len - 1);
			res_548252 = 0;
			{
				while (1) {
					if (!(res_548252 <= HEX3Atmp_548249)) goto LA11;
					i_548195 = res_548252;
					a = (NI32)((NU32)(a) + (NU32)(((NI32) (((NU8)(s->data[i_548195]))))));
					a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 10)))));
					a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 6))));
					res_548252 += 1;
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

N_NIMCALL(void, resetcaches_548365)(void) {
	inittypetables_548291();
	{
		NU8 i_548377;
		NU8 res_548381;
		i_548377 = 0;
		res_548381 = ((NU8) 0);
		{
			while (1) {
				if (!(res_548381 <= ((NU8) 61))) goto LA3;
				i_548377 = res_548381;
				asgnRefNoCycle((void**) (&gcanonicaltypes_548285[(i_548377)- 0]), NIM_NIL);
				res_548381 += 1;
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, HEX00_ccgutilsInit)(void) {
	inittypetables_548291();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_ccgutilsDatInit)(void) {
}

