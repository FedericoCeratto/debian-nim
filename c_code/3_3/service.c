/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <sys/socket.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcell45133 tcell45133;
typedef struct TNimType TNimType;
typedef struct tcellseq45149 tcellseq45149;
typedef struct tgcheap47216 tgcheap47216;
typedef struct tcellset45145 tcellset45145;
typedef struct tpagedesc45141 tpagedesc45141;
typedef struct tmemregion27410 tmemregion27410;
typedef struct tsmallchunk26640 tsmallchunk26640;
typedef struct tllchunk27404 tllchunk27404;
typedef struct tbigchunk26642 tbigchunk26642;
typedef struct tintset26617 tintset26617;
typedef struct ttrunk26613 ttrunk26613;
typedef struct tavlnode27408 tavlnode27408;
typedef struct tgcstat47214 tgcstat47214;
typedef struct optparser207011 optparser207011;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct tsocketimpl182607 tsocketimpl182607;
typedef struct tbasechunk26638 tbasechunk26638;
typedef struct tfreecell26630 tfreecell26630;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tcell45133  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45149  {
NI Len;
NI Cap;
tcell45133** D;
};
struct  tcellset45145  {
NI Counter;
NI Max;
tpagedesc45141* Head;
tpagedesc45141** Data;
};
typedef tsmallchunk26640* TY27422[512];
typedef ttrunk26613* ttrunkbuckets26615[256];
struct  tintset26617  {
ttrunkbuckets26615 Data;
};
struct  tmemregion27410  {
NI Minlargeobj;
NI Maxlargeobj;
TY27422 Freesmallchunks;
tllchunk27404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26642* Freechunkslist;
tintset26617 Chunkstarts;
tavlnode27408* Root;
tavlnode27408* Deleted;
tavlnode27408* Last;
tavlnode27408* Freeavlnodes;
};
struct  tgcstat47214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45149 Zct;
tcellseq45149 Decstack;
tcellset45145 Cycleroots;
tcellseq45149 Tempstack;
NI Recgclock;
tmemregion27410 Region;
tgcstat47214 Stat;
};
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
struct  optparser207011  {
  TNimObject Sup;
NimStringDesc* Cmd;
NI Pos;
NIM_BOOL Inshortstate;
NU8 Kind;
NimStringDesc* Key;
NimStringDesc* Val;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NimStringDesc* TY260532[1];
typedef N_NIMCALL_PTR(void, TY610261) (void);
typedef NIM_CHAR TY182632[4001];
struct  tsocketimpl182607  {
int Fd;
NIM_BOOL Isbuffered;
union {
struct {TY182632 Buffer;
NI Currpos;
NI Buflen;
} S1;
} isbufferedU;
NIM_BOOL Nonblocking;
};
typedef NI TY26620[8];
struct  tpagedesc45141  {
tpagedesc45141* Next;
NI Key;
TY26620 Bits;
};
struct  tbasechunk26638  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26640  {
  tbasechunk26638 Sup;
tsmallchunk26640* Next;
tsmallchunk26640* Prev;
tfreecell26630* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27404  {
NI Size;
NI Acc;
tllchunk27404* Next;
};
struct  tbigchunk26642  {
  tbasechunk26638 Sup;
tbigchunk26642* Next;
tbigchunk26642* Prev;
NI Align;
NF Data;
};
struct  ttrunk26613  {
ttrunk26613* Next;
NI Key;
TY26620 Bits;
};
typedef tavlnode27408* TY27414[2];
struct  tavlnode27408  {
TY27414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26630  {
tfreecell26630* Next;
NI Zerofield;
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45133*, usrtocell_48846)(void* usr);
static N_INLINE(void, rtladdzct_50404)(tcell45133* c);
N_NOINLINE(void, addzct_48817)(tcellseq45149* s, tcell45133* c);
N_NIMCALL(void, initoptparser_207030)(NimStringDesc* cmdline, optparser207011* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, nponext)(optparser207011* p);
N_NIMCALL(void, processswitch_210148)(NU8 pass, optparser207011* p);
N_NIMCALL(NIM_BOOL, processargument_210161)(NU8 pass, optparser207011* p, NI* argscount);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, rawmessage_197643)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, getconfigvar_169350)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, readline_13086)(FILE* f);
N_NIMCALL(void, processcmdline_610209)(NU8 pass, NimStringDesc* cmd);
N_NIMCALL(tsocketimpl182607*, socket_183604)(NU8 domain, NU8 typ, NU8 protocol, NIM_BOOL buffered);
N_NIMCALL(void, raiseoserror_115009)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_115041)(void);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(void, bindaddr_184774)(tsocketimpl182607* socket, NU16 port, NimStringDesc* address);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, listen_184609)(tsocketimpl182607* socket, int backlog);
N_NIMCALL(void*, newObjRC1)(TNimType* typ, NI size);
N_NIMCALL(void, accept_186401)(tsocketimpl182607* server, tsocketimpl182607** client);
N_NIMCALL(void, readline_191447)(tsocketimpl182607* socket, NimStringDesc** line, NI timeout);
N_NIMCALL(void, send_192807)(tsocketimpl182607* socket, NimStringDesc* data);
N_NIMCALL(void, close_186478)(tsocketimpl182607* socket);
STRING_LITERAL(TMP991, "", 0);
STRING_LITERAL(TMP1885, "run", 3);
STRING_LITERAL(TMP4853, "server.type", 11);
STRING_LITERAL(TMP4854, "stdin", 5);
STRING_LITERAL(TMP4855, "tcp", 3);
STRING_LITERAL(TMP4857, "quit", 4);
STRING_LITERAL(TMP4861, "server.port", 11);
STRING_LITERAL(TMP4862, "server.address", 14);
STRING_LITERAL(TMP4870, "\015\012", 2);
STRING_LITERAL(TMP4871, "Invalid server.type:", 20);
NimStringDesc* curcaascmd_610204;
extern tgcheap47216 gch_47244;
NimStringDesc* lastcaascmd_610205;
extern TNimType NTI207011; /* OptParser */
extern NU32 gglobaloptions_169118;
extern NimStringDesc* arguments_210144;
extern NimStringDesc* command_169239;
extern NI32 gdirtybufferidx_169134;
extern NI32 gdirtyoriginalidx_169135;
extern NI gerrorcounter_196303;
extern tsocketimpl182607* invalidsocket_182696;
extern tsocketimpl182607* stdoutsocket_196315;
extern TNimType NTI182609; /* Socket */

static N_INLINE(tcell45133*, usrtocell_48846)(void* usr) {
	tcell45133* result;
	result = 0;
	result = ((tcell45133*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45133))))));
	return result;
}

static N_INLINE(void, rtladdzct_50404)(tcell45133* c) {
	addzct_48817((&gch_47244.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45133* c;
	c = usrtocell_48846(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50404(c);
	}
	LA3: ;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, processcmdline_610209)(NU8 pass, NimStringDesc* cmd) {
	optparser207011 p;
	NI argscount;
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.m_type = (&NTI207011);
	chckNil((void*)(&p));
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.m_type = (&NTI207011);
	initoptparser_207030(cmd, (&p));
	argscount = 0;
	{
		while (1) {
			nponext((&p));
			switch (p.Kind) {
			case ((NU8) 0):
			{
				goto LA1;
			}
			break;
			case ((NU8) 2):
			case ((NU8) 3):
			{
				processswitch_210148(pass, (&p));
			}
			break;
			case ((NU8) 1):
			{
				{
					NIM_BOOL LOC8;
					LOC8 = 0;
					LOC8 = processargument_210161(pass, (&p), (&argscount));
					if (!LOC8) goto LA9;
					goto LA1;
				}
				LA9: ;
			}
			break;
			}
		}
	} LA1: ;
	{
		if (!(pass == ((NU8) 1))) goto LA13;
		{
			NIM_BOOL LOC17;
			NIM_BOOL LOC18;
			NimStringDesc* LOC21;
			TY260532 LOC24;
			LOC17 = 0;
			LOC18 = 0;
			LOC18 = !(((gglobaloptions_169118 &(1<<((((NU8) 13))&31)))!=0));
			if (!(LOC18)) goto LA19;
			LOC18 = !(((arguments_210144) && (arguments_210144)->Sup.len == 0));
			LA19: ;
			LOC17 = LOC18;
			if (!(LOC17)) goto LA20;
			LOC21 = 0;
			LOC21 = nsuNormalize(command_169239);
			LOC17 = !(eqStrings(LOC21, ((NimStringDesc*) &TMP1885)));
			LA20: ;
			if (!LOC17) goto LA22;
			memset((void*)LOC24, 0, sizeof(LOC24));
			rawmessage_197643(((NU16) 57), LOC24, 0);
		}
		LA22: ;
	}
	LA13: ;
}

N_NIMCALL(void, serve_610259)(TY610261 action) {
	NimStringDesc* typ;
	typ = getconfigvar_169350(((NimStringDesc*) &TMP4853));
	if (eqStrings(typ, ((NimStringDesc*) &TMP4854))) goto LA1;
	if (eqStrings(typ, ((NimStringDesc*) &TMP4855))) goto LA2;
	if (eqStrings(typ, ((NimStringDesc*) &TMP991))) goto LA2;
	goto LA3;
	LA1: ;
	{
		{
			while (1) {
				NimStringDesc* line;
				NimStringDesc* LOC12;
				line = readline_13086(stdin);
				{
					if (!eqStrings(line, ((NimStringDesc*) &TMP4857))) goto LA10;
					exit(0);
				}
				LA10: ;
				LOC12 = 0;
				LOC12 = curcaascmd_610204; curcaascmd_610204 = copyStringRC1(line);
				if (LOC12) nimGCunrefNoCycle(LOC12);
				processcmdline_610209(((NU8) 1), line);
				action();
				gdirtybufferidx_169134 = ((NI32) 0);
				gdirtyoriginalidx_169135 = ((NI32) 0);
				gerrorcounter_196303 = 0;
				printf("%s\012", (((NimStringDesc*) &TMP991))->data);
				fflush(stdout);
			}
		}
	}
	goto LA4;
	LA2: ;
	{
		tsocketimpl182607* server;
		NimStringDesc* p;
		NU16 port;
		NimStringDesc* LOC25;
		NimStringDesc* inp;
		server = socket_183604(((NU8) 2), ((NU8) 1), ((NU8) 6), NIM_TRUE);
		{
			NI32 LOC18;
			if (!(server == invalidsocket_182696)) goto LA16;
			LOC18 = 0;
			LOC18 = oslasterror_115041();
			raiseoserror_115009(LOC18);
		}
		LA16: ;
		p = getconfigvar_169350(((NimStringDesc*) &TMP4861));
		{
			NI LOC23;
			if (!(0 < p->Sup.len)) goto LA21;
			LOC23 = 0;
			LOC23 = nsuParseInt(p);
			port = ((NU16) (LOC23));
		}
		goto LA19;
		LA21: ;
		{
			port = ((NU16) 6000);
		}
		LA19: ;
		LOC25 = 0;
		LOC25 = getconfigvar_169350(((NimStringDesc*) &TMP4862));
		bindaddr_184774(server, port, LOC25);
		inp = copyString(((NimStringDesc*) &TMP991));
		listen_184609(server, SOMAXCONN);
		if (stdoutsocket_196315) nimGCunrefNoCycle(stdoutsocket_196315);
		stdoutsocket_196315 = (tsocketimpl182607*) newObjRC1((&NTI182609), sizeof(tsocketimpl182607));
		{
			while (1) {
				NimStringDesc* LOC28;
				accept_186401(server, &stdoutsocket_196315);
				readline_191447(stdoutsocket_196315, (&inp), -1);
				LOC28 = 0;
				LOC28 = curcaascmd_610204; curcaascmd_610204 = copyStringRC1(inp);
				if (LOC28) nimGCunrefNoCycle(LOC28);
				processcmdline_610209(((NU8) 1), inp);
				action();
				gdirtybufferidx_169134 = ((NI32) 0);
				gdirtyoriginalidx_169135 = ((NI32) 0);
				gerrorcounter_196303 = 0;
				send_192807(stdoutsocket_196315, ((NimStringDesc*) &TMP4870));
				close_186478(stdoutsocket_196315);
			}
		}
	}
	goto LA4;
	LA3: ;
	{
		printf("%s%s\012", (((NimStringDesc*) &TMP4871))->data, (typ)->data);
		exit(1);
	}
	LA4: ;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_serviceInit)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	LOC1 = 0;
	LOC1 = curcaascmd_610204; curcaascmd_610204 = copyStringRC1(((NimStringDesc*) &TMP991));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = lastcaascmd_610205; lastcaascmd_610205 = copyStringRC1(((NimStringDesc*) &TMP991));
	if (LOC2) nimGCunrefNoCycle(LOC2);
}

NIM_EXTERNC N_NOINLINE(void, HEX00_serviceDatInit)(void) {
}

