/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct TY163351 TY163351;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning, void* ClEnv);
void* ClEnv;
} TY161023;
typedef Ropeobj161009* TY161101[4096];
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
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef Ropeobj161009* TY161572[1];
typedef N_CLOSURE_PTR(void, TMP3493) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef N_CLOSURE_PTR(void, TMP3494) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef N_CLOSURE_PTR(void, TMP3495) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef N_CLOSURE_PTR(void, TMP3496) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef N_CLOSURE_PTR(void, TMP4317) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef NIM_CHAR TY162814[1024];
typedef NI TY27420[8];
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
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct TY163351 {
  TGenericSeq Sup;
  Ropeobj161009* data[SEQ_DECL_SIZE];
};
N_NIMCALL(Ropeobj161009*, newrope_161056)(NimStringDesc* data);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP125)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(Ropeobj161009*, HEX26_161436)(Ropeobj161009* a, Ropeobj161009* b);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(Ropeobj161009*, insertincache_161280)(NimStringDesc* s);
N_NIMCALL(NI, hash_131839)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NI, len_161034)(Ropeobj161009* a);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
static N_INLINE(Ropeobj161009*, pop_161595)(TY163351** s);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(Ropeobj161009*, HEX26_161471)(Ropeobj161009* a, NimStringDesc* b);
N_NIMCALL(Ropeobj161009*, rope_161320)(NimStringDesc* s);
N_NIMCALL(void, add_161545)(Ropeobj161009** a, NimStringDesc* b);
N_NIMCALL(void, add_161534)(Ropeobj161009** a, Ropeobj161009* b);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76243, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x);
N_NIMCALL(Ropeobj161009*, HEX25_162235)(NimStringDesc* frmt, Ropeobj161009** args, NI argsLen0);
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, writerope_162070)(FILE* f, Ropeobj161009* r);
N_NIMCALL(void, write_13457)(FILE* f, NimStringDesc* s);
N_NIMCALL(NIM_BOOL, equalsfile_162916)(Ropeobj161009* r, NimStringDesc* filename);
N_NIMCALL(NIM_BOOL, equalsfile_162809)(Ropeobj161009* r, FILE* f);
N_NIMCALL(NI, readbuffer_13515)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, writerope_162105)(Ropeobj161009* head, NimStringDesc* filename, NIM_BOOL usewarning);
STRING_LITERAL(TMP3492, "$", 1);
TY161023 errorhandler_161028;
TY161101 cache_161106;
NI gcachetries_161268;
NI gcachemisses_161272;
NI gcacheinttries_161276;
Ropeobj161009* rnl_162227;
extern TNimType NTI3411; /* RootObj */
TNimType NTI161009; /* RopeObj */
extern TNimType NTI108; /* int */
extern TNimType NTI149; /* string */
TNimType NTI161007; /* Rope */
extern Tgcheap48216 gch_48244;
extern NimStringDesc* tnl_159626;
Ropeobj161009* softrnl_162228;
extern TNimType NTI163351; /* seq[Rope] */
N_NIMCALL(void, TMP125)(void* p, NI op) {
	Ropeobj161009* a;
	a = (Ropeobj161009*)p;
	nimGCvisit((void*)(*a).left, op);
	nimGCvisit((void*)(*a).right, op);
	nimGCvisit((void*)(*a).data, op);
}

static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr) {
	Tcell46347* result;
	result = 0;
	result = ((Tcell46347*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46347))))));
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
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

N_NIMCALL(Ropeobj161009*, newrope_161056)(NimStringDesc* data) {
	Ropeobj161009* result;
	result = 0;
	result = (Ropeobj161009*) newObj((&NTI161007), sizeof(Ropeobj161009));
	(*result).Sup.m_type = (&NTI161009);
	{
		NimStringDesc* LOC5;
		if (!!((data == NIM_NIL))) goto LA3;
		(*result).length = (data ? data->Sup.len : 0);
		LOC5 = 0;
		LOC5 = (*result).data; (*result).data = copyStringRC1(data);
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	LA3: ;
	return result;
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
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Ropeobj161009*, HEX26_161436)(Ropeobj161009* a, Ropeobj161009* b) {
	Ropeobj161009* result;
	result = 0;
	{
		if (!(a == NIM_NIL)) goto LA3;
		result = b;
	}
	goto LA1;
	LA3: ;
	{
		if (!(b == NIM_NIL)) goto LA6;
		result = a;
	}
	goto LA1;
	LA6: ;
	{
		result = newrope_161056(NIM_NIL);
		(*result).length = (NI)((*a).length + (*b).length);
		asgnRefNoCycle((void**) (&(*result).left), a);
		asgnRefNoCycle((void**) (&(*result).right), b);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, add_161534)(Ropeobj161009** a, Ropeobj161009* b) {
	unsureAsgnRef((void**) (&(*a)), HEX26_161436((*a), b));
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

N_NIMCALL(Ropeobj161009*, insertincache_161280)(NimStringDesc* s) {
	Ropeobj161009* result;
	NI h;
	NI LOC1;
	result = 0;
	gcachetries_161268 += ((NI) 1);
	LOC1 = 0;
	LOC1 = hash_131839(s);
	h = (NI)(LOC1 & ((NI) 4095));
	result = cache_161106[(h)- 0];
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = result == 0;
		if (LOC4) goto LA5;
		LOC4 = !(eqStrings((*result).data, s));
		LA5: ;
		if (!LOC4) goto LA6;
		gcachemisses_161272 += ((NI) 1);
		result = newrope_161056(s);
		asgnRefNoCycle((void**) (&cache_161106[(h)- 0]), result);
	}
	LA6: ;
	return result;
}

N_NIMCALL(Ropeobj161009*, rope_161320)(NimStringDesc* s) {
	Ropeobj161009* result;
	result = 0;
	{
		if (!((s ? s->Sup.len : 0) == ((NI) 0))) goto LA3;
		result = NIM_NIL;
	}
	goto LA1;
	LA3: ;
	{
		result = insertincache_161280(s);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, len_161034)(Ropeobj161009* a) {
	NI result;
	result = 0;
	{
		if (!(a == NIM_NIL)) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = (*a).length;
	}
	LA1: ;
	return result;
}

static N_INLINE(Ropeobj161009*, pop_161595)(TY163351** s) {
	Ropeobj161009* result;
	NI L;
	result = 0;
	L = (NI)(((*s) ? (*s)->Sup.len : 0) - ((NI) 1));
	result = (*s)->data[L];
	(*s) = (TY163351*) setLengthSeq(&((*s))->Sup, sizeof(Ropeobj161009*), ((NI) (L)));
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, HEX24_162131)(Ropeobj161009* r) {
	NimStringDesc* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = len_161034(r);
	result = mnewString(((NI) (LOC1)));
	result = setLengthStr(result, ((NI) 0));
	{
		NimStringDesc* s_162135;
		s_162135 = 0;
		{
			TY163351* stack_162140;
			TY161572 LOC7;
			if (!!((r == NIM_NIL))) goto LA5;
			stack_162140 = (TY163351*) newSeq((&NTI163351), 1);
			memset((void*)LOC7, 0, sizeof(LOC7));
			LOC7[0] = r;
			asgnRefNoCycle((void**) (&stack_162140->data[0]), LOC7[0]);
			{
				while (1) {
					Ropeobj161009* it_162142;
					if (!(((NI) 0) < (stack_162140 ? stack_162140->Sup.len : 0))) goto LA9;
					it_162142 = pop_161595((&stack_162140));
					{
						while (1) {
							if (!(*it_162142).data == 0) goto LA11;
							stack_162140 = (TY163351*) incrSeq(&(stack_162140)->Sup, sizeof(Ropeobj161009*));
							asgnRefNoCycle((void**) (&stack_162140->data[stack_162140->Sup.len-1]), (*it_162142).right);
							it_162142 = (*it_162142).left;
						} LA11: ;
					}
					s_162135 = (*it_162142).data;
					result = resizeString(result, s_162135->Sup.len + 0);
appendString(result, s_162135);
				} LA9: ;
			}
		}
		LA5: ;
	}
	return result;
}

N_NIMCALL(Ropeobj161009*, HEX26_161471)(Ropeobj161009* a, NimStringDesc* b) {
	Ropeobj161009* result;
	Ropeobj161009* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rope_161320(b);
	result = HEX26_161436(a, LOC1);
	return result;
}

N_NIMCALL(void, add_161545)(Ropeobj161009** a, NimStringDesc* b) {
	unsureAsgnRef((void**) (&(*a)), HEX26_161471((*a), b));
}

N_NIMCALL(Ropeobj161009*, HEX25_162235)(NimStringDesc* frmt, Ropeobj161009** args, NI argsLen0) {
	Ropeobj161009* result;
	NI i;
	NI length;
	NI num;
	result = 0;
	i = ((NI) 0);
	length = (frmt ? frmt->Sup.len : 0);
	result = NIM_NIL;
	num = ((NI) 0);
	{
		while (1) {
			NI start;
			if (!(i < length)) goto LA2;
			{
				if (!((NU8)(frmt->data[i]) == (NU8)(36))) goto LA5;
				i += ((NI) 1);
				switch (((NU8)(frmt->data[i]))) {
				case 36:
				{
					add_161545(&result, ((NimStringDesc*) &TMP3492));
					i += ((NI) 1);
				}
				break;
				case 35:
				{
					i += ((NI) 1);
					add_161534(&result, args[num]);
					num += ((NI) 1);
				}
				break;
				case 48 ... 57:
				{
					NI j;
					j = ((NI) 0);
					{
						while (1) {
							j = (NI)((NI)((NI)(j * ((NI) 10)) + ((NI) (((NU8)(frmt->data[i]))))) - ((NI) 48));
							i += ((NI) 1);
							{
								if (!!((((NU8)(frmt->data[i])) >= ((NU8)(48)) && ((NU8)(frmt->data[i])) <= ((NU8)(57))))) goto LA14;
								goto LA10;
							}
							LA14: ;
						}
					} LA10: ;
					num = j;
					{
						NimStringDesc* LOC20;
						if (!((NI)((argsLen0-1) + ((NI) 1)) < j)) goto LA18;
						LOC20 = 0;
						LOC20 = nimIntToStr(j);
						errorhandler_161028.ClEnv? errorhandler_161028.ClPrc(((NU8) 1), LOC20, NIM_FALSE, errorhandler_161028.ClEnv):((TMP3493)(errorhandler_161028.ClPrc))(((NU8) 1), LOC20, NIM_FALSE);
					}
					goto LA16;
					LA18: ;
					{
						add_161534(&result, args[(NI)(j - ((NI) 1))]);
					}
					LA16: ;
				}
				break;
				case 123:
				{
					NI j;
					i += ((NI) 1);
					j = ((NI) 0);
					{
						while (1) {
							if (!(((NU8)(frmt->data[i])) >= ((NU8)(48)) && ((NU8)(frmt->data[i])) <= ((NU8)(57)))) goto LA24;
							j = (NI)((NI)((NI)(j * ((NI) 10)) + ((NI) (((NU8)(frmt->data[i]))))) - ((NI) 48));
							i += ((NI) 1);
						} LA24: ;
					}
					num = j;
					{
						if (!((NU8)(frmt->data[i]) == (NU8)(125))) goto LA27;
						i += ((NI) 1);
					}
					goto LA25;
					LA27: ;
					{
						NimStringDesc* LOC30;
						LOC30 = 0;
						LOC30 = nimCharToStr(frmt->data[i]);
						errorhandler_161028.ClEnv? errorhandler_161028.ClPrc(((NU8) 1), LOC30, NIM_FALSE, errorhandler_161028.ClEnv):((TMP3494)(errorhandler_161028.ClPrc))(((NU8) 1), LOC30, NIM_FALSE);
					}
					LA25: ;
					{
						NimStringDesc* LOC35;
						if (!((NI)((argsLen0-1) + ((NI) 1)) < j)) goto LA33;
						LOC35 = 0;
						LOC35 = nimIntToStr(j);
						errorhandler_161028.ClEnv? errorhandler_161028.ClPrc(((NU8) 1), LOC35, NIM_FALSE, errorhandler_161028.ClEnv):((TMP3495)(errorhandler_161028.ClPrc))(((NU8) 1), LOC35, NIM_FALSE);
					}
					goto LA31;
					LA33: ;
					{
						add_161534(&result, args[(NI)(j - ((NI) 1))]);
					}
					LA31: ;
				}
				break;
				case 110:
				{
					add_161534(&result, softrnl_162228);
					i += ((NI) 1);
				}
				break;
				case 78:
				{
					add_161534(&result, rnl_162227);
					i += ((NI) 1);
				}
				break;
				default:
				{
					NimStringDesc* LOC40;
					LOC40 = 0;
					LOC40 = nimCharToStr(frmt->data[i]);
					errorhandler_161028.ClEnv? errorhandler_161028.ClPrc(((NU8) 1), LOC40, NIM_FALSE, errorhandler_161028.ClEnv):((TMP3496)(errorhandler_161028.ClPrc))(((NU8) 1), LOC40, NIM_FALSE);
				}
				break;
				}
			}
			LA5: ;
			start = i;
			{
				while (1) {
					if (!(i < length)) goto LA42;
					{
						if (!!(((NU8)(frmt->data[i]) == (NU8)(36)))) goto LA45;
						i += ((NI) 1);
					}
					goto LA43;
					LA45: ;
					{
						goto LA41;
					}
					LA43: ;
				} LA42: ;
			} LA41: ;
			{
				NimStringDesc* LOC52;
				if (!(start <= (NI)(i - ((NI) 1)))) goto LA50;
				LOC52 = 0;
				LOC52 = copyStrLast(frmt, start, (NI)(i - ((NI) 1)));
				add_161545(&result, LOC52);
			}
			LA50: ;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(Ropeobj161009*, rope_161407)(NI64 i) {
	Ropeobj161009* result;
	NimStringDesc* LOC1;
	result = 0;
	gcacheinttries_161276 += ((NI) 1);
	LOC1 = 0;
	LOC1 = nimInt64ToStr(i);
	result = rope_161320(LOC1);
	return result;
}

N_NIMCALL(void, addf_162635)(Ropeobj161009** c, NimStringDesc* frmt, Ropeobj161009** args, NI argsLen0) {
	Ropeobj161009* LOC1;
	LOC1 = 0;
	LOC1 = HEX25_162235(frmt, args, argsLen0);
	add_161534(c, LOC1);
}

N_NIMCALL(Ropeobj161009*, HEX26_161482)(NimStringDesc* a, Ropeobj161009* b) {
	Ropeobj161009* result;
	Ropeobj161009* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rope_161320(a);
	result = HEX26_161436(LOC1, b);
	return result;
}

N_NIMCALL(void, prepend_162205)(Ropeobj161009** a, Ropeobj161009* b) {
	unsureAsgnRef((void**) (&(*a)), HEX26_161436(b, (*a)));
}

N_NIMCALL(void, writerope_162070)(FILE* f, Ropeobj161009* r) {
	{
		NimStringDesc* s_162074;
		s_162074 = 0;
		{
			TY163351* stack_162081;
			TY161572 LOC6;
			if (!!((r == NIM_NIL))) goto LA4;
			stack_162081 = (TY163351*) newSeq((&NTI163351), 1);
			memset((void*)LOC6, 0, sizeof(LOC6));
			LOC6[0] = r;
			asgnRefNoCycle((void**) (&stack_162081->data[0]), LOC6[0]);
			{
				while (1) {
					Ropeobj161009* it_162083;
					if (!(((NI) 0) < (stack_162081 ? stack_162081->Sup.len : 0))) goto LA8;
					it_162083 = pop_161595((&stack_162081));
					{
						while (1) {
							if (!(*it_162083).data == 0) goto LA10;
							stack_162081 = (TY163351*) incrSeq(&(stack_162081)->Sup, sizeof(Ropeobj161009*));
							asgnRefNoCycle((void**) (&stack_162081->data[stack_162081->Sup.len-1]), (*it_162083).right);
							it_162083 = (*it_162083).left;
						} LA10: ;
					}
					s_162074 = (*it_162083).data;
					write_13457(f, s_162074);
				} LA8: ;
			}
		}
		LA4: ;
	}
}

N_NIMCALL(void, writerope_162105)(Ropeobj161009* head, NimStringDesc* filename, NIM_BOOL usewarning) {
	FILE* f;
	f = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13203(&f, filename, ((NU8) 1), ((NI) -1));
		if (!LOC3) goto LA4;
		{
			if (!!((head == NIM_NIL))) goto LA8;
			writerope_162070(f, head);
		}
		LA8: ;
		fclose(f);
	}
	goto LA1;
	LA4: ;
	{
		errorhandler_161028.ClEnv? errorhandler_161028.ClPrc(((NU8) 0), filename, usewarning, errorhandler_161028.ClEnv):((TMP4317)(errorhandler_161028.ClPrc))(((NU8) 0), filename, usewarning);
	}
	LA1: ;
}

N_NIMCALL(NIM_BOOL, equalsfile_162809)(Ropeobj161009* r, FILE* f) {
	NIM_BOOL result;
	TY162814 buf;
	NI bpos;
	NI blen;
	NI LOC26;
{	result = 0;
	memset((void*)buf, 0, sizeof(buf));
	bpos = ((NI) 1024);
	blen = ((NI) 1024);
	{
		NimStringDesc* s_162837;
		s_162837 = 0;
		{
			TY163351* stack_162886;
			TY161572 LOC6;
			if (!!((r == NIM_NIL))) goto LA4;
			stack_162886 = (TY163351*) newSeq((&NTI163351), 1);
			memset((void*)LOC6, 0, sizeof(LOC6));
			LOC6[0] = r;
			asgnRefNoCycle((void**) (&stack_162886->data[0]), LOC6[0]);
			{
				while (1) {
					Ropeobj161009* it_162888;
					NI spos;
					NI slen;
					if (!(((NI) 0) < (stack_162886 ? stack_162886->Sup.len : 0))) goto LA8;
					it_162888 = pop_161595((&stack_162886));
					{
						while (1) {
							if (!(*it_162888).data == 0) goto LA10;
							stack_162886 = (TY163351*) incrSeq(&(stack_162886)->Sup, sizeof(Ropeobj161009*));
							asgnRefNoCycle((void**) (&stack_162886->data[stack_162886->Sup.len-1]), (*it_162888).right);
							it_162888 = (*it_162888).left;
						} LA10: ;
					}
					s_162837 = (*it_162888).data;
					spos = ((NI) 0);
					slen = (s_162837 ? s_162837->Sup.len : 0);
					{
						while (1) {
							NI n;
							if (!(spos < slen)) goto LA12;
							{
								if (!(bpos == blen)) goto LA15;
								bpos = ((NI) 0);
								blen = readbuffer_13515(f, ((void*) ((&buf[(((NI) 0))- 0]))), ((NI) 1024));
								{
									if (!(blen == ((NI) 0))) goto LA19;
									result = NIM_FALSE;
									goto BeforeRet;
								}
								LA19: ;
							}
							LA15: ;
							n = (((NI)(blen - bpos) <= (NI)(slen - spos)) ? (NI)(blen - bpos) : (NI)(slen - spos));
							{
								NIM_BOOL LOC23;
								LOC23 = 0;
								LOC23 = equalMem(((void*) ((&buf[(bpos)- 0]))), ((void*) ((NI)(((NI) (s_162837->data)) + spos))), ((NI) (n)));
								if (!!(LOC23)) goto LA24;
								result = NIM_FALSE;
								goto BeforeRet;
							}
							LA24: ;
							spos += n;
							bpos += n;
						} LA12: ;
					}
				} LA8: ;
			}
		}
		LA4: ;
	}
	LOC26 = 0;
	LOC26 = readbuffer_13515(f, ((void*) ((&buf[(((NI) 0))- 0]))), ((NI) 1));
	result = (LOC26 == ((NI) 0));
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, equalsfile_162916)(Ropeobj161009* r, NimStringDesc* filename) {
	NIM_BOOL result;
	FILE* f;
	result = 0;
	f = 0;
	result = open_13203(&f, filename, ((NU8) 0), ((NI) -1));
	{
		if (!result) goto LA3;
		result = equalsfile_162809(r, f);
		fclose(f);
	}
	LA3: ;
	return result;
}

N_NIMCALL(NIM_BOOL, writeropeifnotequal_162930)(Ropeobj161009* r, NimStringDesc* filename) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = equalsfile_162916(r, filename);
		if (!!(LOC3)) goto LA4;
		writerope_162105(r, filename, NIM_FALSE);
		result = NIM_TRUE;
	}
	goto LA1;
	LA4: ;
	{
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, resetropecache_161111)(void) {
	{
		NI i_161223;
		NI res_161228;
		i_161223 = 0;
		res_161228 = ((NI) 0);
		{
			while (1) {
				if (!(res_161228 <= ((NI) 4095))) goto LA3;
				i_161223 = ((NI) (res_161228));
				asgnRefNoCycle((void**) (&cache_161106[(i_161223)- 0]), NIM_NIL);
				res_161228 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_ropesInit)(void) {
	gcachetries_161268 = ((NI) 0);
	gcachemisses_161272 = ((NI) 0);
	gcacheinttries_161276 = ((NI) 0);
	asgnRefNoCycle((void**) (&rnl_162227), newrope_161056(tnl_159626));
	asgnRefNoCycle((void**) (&softrnl_162228), newrope_161056(tnl_159626));
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_ropesDatInit)(void) {
static TNimNode* TMP124[4];
static TNimNode TMP55[5];
NTI161009.size = sizeof(Ropeobj161009);
NTI161009.kind = 17;
NTI161009.base = (&NTI3411);
NTI161009.flags = 2;
TMP124[0] = &TMP55[1];
TMP55[1].kind = 1;
TMP55[1].offset = offsetof(Ropeobj161009, left);
TMP55[1].typ = (&NTI161007);
TMP55[1].name = "left";
TMP124[1] = &TMP55[2];
TMP55[2].kind = 1;
TMP55[2].offset = offsetof(Ropeobj161009, right);
TMP55[2].typ = (&NTI161007);
TMP55[2].name = "right";
TMP124[2] = &TMP55[3];
TMP55[3].kind = 1;
TMP55[3].offset = offsetof(Ropeobj161009, length);
TMP55[3].typ = (&NTI108);
TMP55[3].name = "length";
TMP124[3] = &TMP55[4];
TMP55[4].kind = 1;
TMP55[4].offset = offsetof(Ropeobj161009, data);
TMP55[4].typ = (&NTI149);
TMP55[4].name = "data";
TMP55[0].len = 4; TMP55[0].kind = 2; TMP55[0].sons = &TMP124[0];
NTI161009.node = &TMP55[0];
NTI161007.size = sizeof(Ropeobj161009*);
NTI161007.kind = 22;
NTI161007.base = (&NTI161009);
NTI161007.flags = 2;
NTI161007.marker = TMP125;
}

