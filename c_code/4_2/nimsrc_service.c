/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <sys/socket.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tcell46347 Tcell46347;
typedef struct TNimType TNimType;
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
typedef struct Optparser175011 Optparser175011;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct TY521426 TY521426;
typedef struct Socketimpl513407 Socketimpl513407;
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
struct  Optparser175011  {
  TNimObject Sup;
NimStringDesc* cmd;
NI pos;
NIM_BOOL inshortstate;
NU8 kind;
NimStringDesc* key;
NimStringDesc* val;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NimStringDesc* TY218714[1];
typedef N_NIMCALL_PTR(void, TY521256) (void);
struct  TY521426  {
NI HEX3Astate;
Socketimpl513407* stdoutsocket521408;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NimStringDesc* output, void* ClEnv);
void* ClEnv;
} TY164054;
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
typedef NIM_CHAR TY513420[4001];
struct  Socketimpl513407  {
int fd;
NIM_BOOL isbuffered;
union{
struct {TY513420 buffer;
NI currpos;
NI buflen;
} S1;
} isbufferedU;
NI32 lasterror;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(void, initoptparser_175030)(NimStringDesc* cmdline, Optparser175011* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, nponext)(Optparser175011* p);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, processargument_177738)(NU8 pass, Optparser175011* p, NI* argscount);
N_NIMCALL(void, processswitch_177725)(NU8 pass, Optparser175011* p);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_164888)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4986)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, getconfigvar_154334)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, readline_13478)(FILE* f);
N_NIMCALL(void, processcmdline_521209)(NU8 pass, NimStringDesc* cmd);
N_NIMCALL(Socketimpl513407*, newsocket_513830)(NU8 domain, NU8 typ, NU8 protocol, NIM_BOOL buffered);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(void, bindaddr_514620)(Socketimpl513407* socket, NU16 port, NimStringDesc* address);
N_NIMCALL(void, listen_514610)(Socketimpl513407* socket, int backlog);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_CLOSURE(void, HEX3Aanonymous_521409)(NimStringDesc* line, void* ClEnv);
N_NIMCALL(void, send_518208)(Socketimpl513407* socket, NimStringDesc* data, NU8 flags);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52222)(Tcell46347* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46347* c);
static N_INLINE(void, rtladdcycleroot_50623)(Tcell46347* c);
N_NOINLINE(void, incl_47065)(Tcellset46359* s, Tcell46347* cell);
static N_INLINE(void, decref_51804)(Tcell46347* c);
N_NIMCALL(void, accept_515401)(Socketimpl513407* server, Socketimpl513407** client, NU8 flags);
N_NIMCALL(void, readline_517608)(Socketimpl513407* socket, NimStringDesc** line, NI timeout, NU8 flags);
N_NIMCALL(void, close_515417)(Socketimpl513407* socket);
N_NIMCALL(void, msgquit_164104)(NI8 x);
STRING_LITERAL(TMP1075, "", 0);
STRING_LITERAL(TMP1541, " ", 1);
STRING_LITERAL(TMP1542, "-", 1);
STRING_LITERAL(TMP1869, "run", 3);
STRING_LITERAL(TMP4987, "server.type", 11);
STRING_LITERAL(TMP4988, "stdin", 5);
STRING_LITERAL(TMP4989, "tcp", 3);
STRING_LITERAL(TMP4991, "quit", 4);
STRING_LITERAL(TMP4992, "server.port", 11);
STRING_LITERAL(TMP4993, "server.address", 14);
STRING_LITERAL(TMP4996, "\015\012", 2);
STRING_LITERAL(TMP5005, "Invalid server.type:", 20);
NimStringDesc* curcaascmd_521204;
extern Tgcheap48216 gch_48244;
NimStringDesc* lastcaascmd_521205;
extern TNimType NTI175011; /* OptParser */
extern NU32 gglobaloptions_154128;
extern NimStringDesc* arguments_177721;
extern NimStringDesc* command_154239;
TNimType NTI521426; /* object */
extern TNimType NTI310033; /* range -1..0(int) */
extern TNimType NTI513409; /* Socket */
TNimType NTI521448; /* ref object */
extern NI gerrorcounter_164012;
extern TY164054 writelnhook_164057;

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

N_NIMCALL(void, processcmdline_521209)(NU8 pass, NimStringDesc* cmd) {
	Optparser175011 p;
	NI argscount;
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.m_type = (&NTI175011);
	chckNil((void*)(&p));
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.m_type = (&NTI175011);
	initoptparser_175030(cmd, (&p));
	argscount = ((NI) 0);
	{
		while (1) {
			nponext((&p));
			switch (p.kind) {
			case ((NU8) 0):
			{
				goto LA1;
			}
			break;
			case ((NU8) 2):
			case ((NU8) 3):
			{
				{
					if (!eqStrings(p.key, ((NimStringDesc*) &TMP1541))) goto LA7;
					p.key = copyString(((NimStringDesc*) &TMP1542));
					{
						NIM_BOOL LOC11;
						LOC11 = 0;
						LOC11 = processargument_177738(pass, (&p), (&argscount));
						if (!LOC11) goto LA12;
						goto LA1;
					}
					LA12: ;
				}
				goto LA5;
				LA7: ;
				{
					processswitch_177725(pass, (&p));
				}
				LA5: ;
			}
			break;
			case ((NU8) 1):
			{
				{
					NIM_BOOL LOC18;
					LOC18 = 0;
					LOC18 = processargument_177738(pass, (&p), (&argscount));
					if (!LOC18) goto LA19;
					goto LA1;
				}
				LA19: ;
			}
			break;
			}
		}
	} LA1: ;
	{
		if (!(pass == ((NU8) 1))) goto LA23;
		{
			NIM_BOOL LOC27;
			NIM_BOOL LOC28;
			NimStringDesc* LOC31;
			TY218714 LOC34;
			LOC27 = 0;
			LOC28 = 0;
			LOC28 = !(((gglobaloptions_154128 &(1<<((((NU8) 13))&31)))!=0));
			if (!(LOC28)) goto LA29;
			LOC28 = !(((arguments_177721) && (arguments_177721)->Sup.len == 0));
			LA29: ;
			LOC27 = LOC28;
			if (!(LOC27)) goto LA30;
			LOC31 = 0;
			LOC31 = nsuNormalize(command_154239);
			LOC27 = !(eqStrings(LOC31, ((NimStringDesc*) &TMP1869)));
			LA30: ;
			if (!LOC27) goto LA32;
			memset((void*)LOC34, 0, sizeof(LOC34));
			rawmessage_164888(((NU16) 57), LOC34, 0);
		}
		LA32: ;
	}
	LA23: ;
}
N_NIMCALL(void, TMP4986)(void* p, NI op) {
	TY521426* a;
	a = (TY521426*)p;
	nimGCvisit((void*)(*a).stdoutsocket521408, op);
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

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_CLOSURE(void, HEX3Aanonymous_521409)(NimStringDesc* line, void* ClEnv) {
	TY521426* HEX3Aenvp_521438;
	NimStringDesc* LOC1;
	HEX3Aenvp_521438 = (TY521426*) ClEnv;
	LOC1 = 0;
	LOC1 = rawNewString(line->Sup.len + 2);
appendString(LOC1, line);
appendString(LOC1, ((NimStringDesc*) &TMP4996));
	send_518208((*HEX3Aenvp_521438).stdoutsocket521408, LOC1, 2);
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
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
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
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
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

N_NIMCALL(void, serve_521254)(TY521256 action) {
	TY521426* HEX3Aenv_521447;
	NimStringDesc* typ;
	HEX3Aenv_521447 = 0;
	HEX3Aenv_521447 = (TY521426*) newObj((&NTI521448), sizeof(TY521426));
	typ = getconfigvar_154334(((NimStringDesc*) &TMP4987));
	if (eqStrings(typ, ((NimStringDesc*) &TMP4988))) goto LA1;
	if (eqStrings(typ, ((NimStringDesc*) &TMP4989))) goto LA2;
	if (eqStrings(typ, ((NimStringDesc*) &TMP1075))) goto LA2;
	goto LA3;
	LA1: ;
	{
		{
			while (1) {
				NimStringDesc* line;
				NimStringDesc* LOC12;
				line = readline_13478(stdin);
				{
					if (!eqStrings(line, ((NimStringDesc*) &TMP4991))) goto LA10;
					exit(((NI) 0));
				}
				LA10: ;
				LOC12 = 0;
				LOC12 = curcaascmd_521204; curcaascmd_521204 = copyStringRC1(line);
				if (LOC12) nimGCunrefNoCycle(LOC12);
				processcmdline_521209(((NU8) 1), line);
				action();
				gerrorcounter_164012 = ((NI) 0);
				printf("%s\012", ((NimStringDesc*) &TMP1075)? (((NimStringDesc*) &TMP1075))->data:"nil");
				fflush(stdout);
			}
		}
	}
	goto LA4;
	LA2: ;
	{
		Socketimpl513407* server;
		NimStringDesc* p;
		NU16 port;
		NimStringDesc* LOC20;
		NimStringDesc* inp;
		TY164054 LOC21;
		server = newsocket_513830(((NU8) 2), ((NU8) 1), ((NU8) 6), NIM_TRUE);
		p = getconfigvar_154334(((NimStringDesc*) &TMP4992));
		{
			NI LOC18;
			if (!(((NI) 0) < (p ? p->Sup.len : 0))) goto LA16;
			LOC18 = 0;
			LOC18 = nsuParseInt(p);
			port = ((NU16) (LOC18));
		}
		goto LA14;
		LA16: ;
		{
			port = ((NU16) 6000);
		}
		LA14: ;
		LOC20 = 0;
		LOC20 = getconfigvar_154334(((NimStringDesc*) &TMP4993));
		bindaddr_514620(server, port, LOC20);
		inp = copyString(((NimStringDesc*) &TMP1075));
		listen_514610(server, SOMAXCONN);
		asgnRefNoCycle((void**) (&(*HEX3Aenv_521447).stdoutsocket521408), newsocket_513830(((NU8) 2), ((NU8) 1), ((NU8) 6), NIM_TRUE));
		memset((void*)(&LOC21), 0, sizeof(LOC21));
		LOC21.ClPrc = HEX3Aanonymous_521409; LOC21.ClEnv = HEX3Aenv_521447;
		asgnRef((void**) (&writelnhook_164057.ClEnv), LOC21.ClEnv);
		writelnhook_164057.ClPrc = LOC21.ClPrc;
		{
			while (1) {
				NimStringDesc* LOC24;
				accept_515401(server, &(*HEX3Aenv_521447).stdoutsocket521408, 2);
				readline_517608((*HEX3Aenv_521447).stdoutsocket521408, (&inp), ((NI) -1), 2);
				LOC24 = 0;
				LOC24 = curcaascmd_521204; curcaascmd_521204 = copyStringRC1(inp);
				if (LOC24) nimGCunrefNoCycle(LOC24);
				processcmdline_521209(((NU8) 1), inp);
				action();
				gerrorcounter_164012 = ((NI) 0);
				send_518208((*HEX3Aenv_521447).stdoutsocket521408, ((NimStringDesc*) &TMP4996), 2);
				close_515417((*HEX3Aenv_521447).stdoutsocket521408);
			}
		}
	}
	goto LA4;
	LA3: ;
	{
		printf("%s%s\012", ((NimStringDesc*) &TMP5005)? (((NimStringDesc*) &TMP5005))->data:"nil", typ? (typ)->data:"nil");
		msgquit_164104(((NI8) 1));
	}
	LA4: ;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_serviceInit)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	LOC1 = 0;
	LOC1 = curcaascmd_521204; curcaascmd_521204 = copyStringRC1(((NimStringDesc*) &TMP1075));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = lastcaascmd_521205; lastcaascmd_521205 = copyStringRC1(((NimStringDesc*) &TMP1075));
	if (LOC2) nimGCunrefNoCycle(LOC2);
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_serviceDatInit)(void) {
static TNimNode* TMP4982[2];
static TNimNode TMP1069[3];
NTI521426.size = sizeof(TY521426);
NTI521426.kind = 18;
NTI521426.base = 0;
NTI521426.flags = 2;
TMP4982[0] = &TMP1069[1];
TMP1069[1].kind = 1;
TMP1069[1].offset = offsetof(TY521426, HEX3Astate);
TMP1069[1].typ = (&NTI310033);
TMP1069[1].name = ":state";
TMP4982[1] = &TMP1069[2];
TMP1069[2].kind = 1;
TMP1069[2].offset = offsetof(TY521426, stdoutsocket521408);
TMP1069[2].typ = (&NTI513409);
TMP1069[2].name = "stdoutSocket521408";
TMP1069[0].len = 2; TMP1069[0].kind = 2; TMP1069[0].sons = &TMP4982[0];
NTI521426.node = &TMP1069[0];
NTI521448.size = sizeof(TY521426*);
NTI521448.kind = 22;
NTI521448.base = (&NTI521426);
NTI521448.flags = 2;
NTI521448.marker = TMP4986;
}

