/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <netinet/in.h>

#include <sys/socket.h>

#include <string.h>

#include <netdb.h>

#include <errno.h>

#include <arpa/inet.h>

#include <setjmp.h>
typedef struct Socketimpl513407 Socketimpl513407;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Oserror3433 Oserror3433;
typedef struct Systemerror3429 Systemerror3429;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
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
typedef struct Timeouterror513415 Timeouterror513415;
typedef struct TY516225 TY516225;
typedef struct TSafePoint TSafePoint;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Systemerror3429  {
  Exception Sup;
};
struct  Oserror3433  {
  Systemerror3429 Sup;
NI32 errorcode;
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
struct  Timeouterror513415  {
  Exception Sup;
};
typedef int TY516214[1];
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
typedef NIM_CHAR TY107377[256];
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
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct TY516225 {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP4985)(void* p, NI op);
N_NIMCALL(int, newrawsocket_509004)(NU8 domain, NU8 typ, NU8 protocol);
N_NIMCALL(void, raiseoserror_116809)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_116833)(void);
N_NIMCALL(Socketimpl513407*, newsocket_513708)(int fd, NIM_BOOL isbuff);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(int, toint_508829)(NU8 domain);
N_NIMCALL(NI16, htons_510017)(NI16 x);
N_NIMCALL(NI32, htonl_510007)(NI32 x);
N_NIMCALL(int, bindaddr_509214)(int socket, struct sockaddr* name, socklen_t namelen);
N_NIMCALL(struct addrinfo*, getaddrinfo_509408)(NimStringDesc* address, NU16 port, NU8 af, NU8 typ, NU8 prot);
N_NIMCALL(void, dealloc_509621)(struct addrinfo* ai);
N_NIMCALL(int, listen_509227)(int socket, int backlog);
N_NIMCALL(NI, send_517716)(Socketimpl513407* socket, void* data, NI size);
N_NIMCALL(NIM_BOOL, isdisconnectionerror_513481)(NU8 flags, NI32 lasterror);
N_NIMCALL(void, socketerror_514027)(Socketimpl513407* socket, NI err, NIM_BOOL async, NI32 lasterror);
N_NIMCALL(NI32, getsocketerror_514001)(Socketimpl513407* socket);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, acceptaddr_514813)(Socketimpl513407* server, Socketimpl513407** client, NimStringDesc** address, NU8 flags);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, waitfor_516819)(Socketimpl513407* socket, NF* waited, NI timeout, NI size, NimStringDesc* funcname);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4998)(void* p, NI op);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NF, ntepochTime)(void);
N_NIMCALL(NI, select_516207)(Socketimpl513407* readfd, NI timeout);
N_NIMCALL(NIM_BOOL, hasdatabuffered_516001)(Socketimpl513407* s);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NI, select_511913)(TY516225** readfds, NI timeout);
static N_INLINE(void, HEX2BHEX3D_103688)(NF* x, NF y);
N_NIMCALL(NI, recv_516425)(Socketimpl513407* socket, void* data, NI size);
N_NIMCALL(NI, readintobuf_516235)(Socketimpl513407* socket, NI32 flags);
N_NIMCALL(NI, peekchar_517444)(Socketimpl513407* socket, NIM_CHAR* c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, close_509028)(int socket);
N_NIMCALL(void, reraiseException)(void);
TNimNode* NimDT_513407_isbuffered[3];
STRING_LITERAL(TMP4994, "No valid socket error code available", 36);
STRING_LITERAL(TMP4995, "Could not send all data.", 24);
STRING_LITERAL(TMP4997, "", 0);
STRING_LITERAL(TMP4999, "Call to \'", 9);
STRING_LITERAL(TMP5000, "\' timed out.", 12);
STRING_LITERAL(TMP5002, "readLine", 8);
STRING_LITERAL(TMP5003, "\015\012", 2);
TNimType NTI513407; /* SocketImpl */
extern TNimType NTI5811; /* cint */
extern TNimType NTI138; /* bool */
extern TNimType NTI147; /* char */
TNimType NTI513420; /* array[0..4000, char] */
extern TNimType NTI108; /* int */
extern TNimType NTI114; /* int32 */
TNimType NTI513409; /* Socket */
extern int osinvalidsocket_508651;
extern TNimType NTI116812; /* ref OSError */
extern TNimType NTI3433; /* OSError */
extern Tgcheap48216 gch_48244;
extern TNimType NTI3427; /* Exception */
TNimType NTI513415; /* TimeoutError */
TNimType NTI517014; /* ref TimeoutError */
extern TNimType NTI516225; /* seq[SocketHandle] */
extern TSafePoint* exchandler_17043;
N_NIMCALL(void, TMP4985)(void* p, NI op) {
	Socketimpl513407* a;
	NI LOC1;
	a = (Socketimpl513407*)p;
	switch ((*a).isbuffered) {
	case NIM_TRUE:
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 4001; LOC1++) {
	}
	break;
	case NIM_FALSE:
	break;
	} 
}

N_NIMCALL(Socketimpl513407*, newsocket_513708)(int fd, NIM_BOOL isbuff) {
	Socketimpl513407* result;
	result = 0;
	result = (Socketimpl513407*) newObj((&NTI513409), sizeof(Socketimpl513407));
	(*result).fd = fd;
	(*result).isbuffered = isbuff;
	{
		if (!isbuff) goto LA3;
		(*result).isbufferedU.S1.currpos = ((NI) 0);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Socketimpl513407*, newsocket_513830)(NU8 domain, NU8 typ, NU8 protocol, NIM_BOOL buffered) {
	Socketimpl513407* result;
	int fd;
	result = 0;
	fd = newrawsocket_509004(domain, typ, protocol);
	{
		NI32 LOC5;
		if (!(fd == osinvalidsocket_508651)) goto LA3;
		LOC5 = 0;
		LOC5 = oslasterror_116833();
		raiseoserror_116809(LOC5);
	}
	LA3: ;
	result = newsocket_513708(fd, buffered);
	return result;
}

N_NIMCALL(void, bindaddr_514620)(Socketimpl513407* socket, NU16 port, NimStringDesc* address) {
	{
		struct sockaddr_in name;
		if (!((address) && (address)->Sup.len == 0)) goto LA3;
		memset((void*)(&name), 0, sizeof(name));
		name.sin_family = toint_508829(((NU8) 2));
		name.sin_port = htons_510017(((NI16) (port)));
		name.sin_addr.s_addr = htonl_510007(INADDR_ANY);
		{
			int LOC7;
			NI32 LOC10;
			LOC7 = 0;
			LOC7 = bindaddr_509214((*socket).fd, ((struct sockaddr*) ((&name))), ((socklen_t) (((NI)sizeof(struct sockaddr_in)))));
			if (!(LOC7 < ((NI32) 0))) goto LA8;
			LOC10 = 0;
			LOC10 = oslasterror_116833();
			raiseoserror_116809(LOC10);
		}
		LA8: ;
	}
	goto LA1;
	LA3: ;
	{
		struct addrinfo* ailist;
		ailist = getaddrinfo_509408(address, port, ((NU8) 2), ((NU8) 1), ((NU8) 6));
		{
			int LOC14;
			NI32 LOC17;
			LOC14 = 0;
			LOC14 = bindaddr_509214((*socket).fd, (*ailist).ai_addr, (*ailist).ai_addrlen);
			if (!(LOC14 < ((NI32) 0))) goto LA15;
			dealloc_509621(ailist);
			LOC17 = 0;
			LOC17 = oslasterror_116833();
			raiseoserror_116809(LOC17);
		}
		LA15: ;
		dealloc_509621(ailist);
	}
	LA1: ;
}

N_NIMCALL(void, listen_514610)(Socketimpl513407* socket, int backlog) {
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = listen_509227((*socket).fd, backlog);
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_116833();
		raiseoserror_116809(LOC6);
	}
	LA4: ;
}

N_NIMCALL(NI, send_517716)(Socketimpl513407* socket, void* data, NI size) {
	NI result;
	result = 0;
	result = send((*socket).fd, data, size, ((NI32) 0));
	return result;
}

N_NIMCALL(NIM_BOOL, isdisconnectionerror_513481)(NU8 flags, NI32 lasterror) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((flags &(1<<((((NU8) 1))&7)))!=0);
	if (!(LOC1)) goto LA2;
	LOC1 = (lasterror == ((NI) (ECONNRESET)) || lasterror == ((NI) (EPIPE)) || lasterror == ((NI) (ENETRESET)));
	LA2: ;
	result = LOC1;
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

N_NIMCALL(NI32, getsocketerror_514001)(Socketimpl513407* socket) {
	NI32 result;
	result = 0;
	result = oslasterror_116833();
	{
		if (!(result == ((NI32) 0))) goto LA3;
		result = (*socket).lasterror;
	}
	LA3: ;
	{
		Oserror3433* e_514008;
		NimStringDesc* LOC9;
		if (!(result == ((NI32) 0))) goto LA7;
		e_514008 = 0;
		e_514008 = (Oserror3433*) newObj((&NTI116812), sizeof(Oserror3433));
		(*e_514008).Sup.Sup.Sup.m_type = (&NTI3433);
		LOC9 = 0;
		LOC9 = (*e_514008).Sup.Sup.message; (*e_514008).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP4994));
		if (LOC9) nimGCunrefNoCycle(LOC9);
		raiseException((Exception*)e_514008, "OSError");
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, socketerror_514027)(Socketimpl513407* socket, NI err, NIM_BOOL async, NI32 lasterror) {
{	{
		NIM_BOOL LOC3;
		NI32 laste;
		LOC3 = 0;
		LOC3 = (err == ((NI) -1));
		if (!(LOC3)) goto LA4;
		LOC3 = NIM_TRUE;
		LA4: ;
		if (!LOC3) goto LA5;
		{
			if (!(((NI) (lasterror)) == ((NI) -1))) goto LA9;
			laste = getsocketerror_514001(socket);
		}
		goto LA7;
		LA9: ;
		{
			laste = lasterror;
		}
		LA7: ;
		{
			if (!async) goto LA14;
			{
				NIM_BOOL LOC18;
				LOC18 = 0;
				LOC18 = (laste == EAGAIN);
				if (LOC18) goto LA19;
				LOC18 = (laste == EWOULDBLOCK);
				LA19: ;
				if (!LOC18) goto LA20;
				goto BeforeRet;
			}
			goto LA16;
			LA20: ;
			{
				raiseoserror_116809(laste);
			}
			LA16: ;
		}
		goto LA12;
		LA14: ;
		{
			raiseoserror_116809(laste);
		}
		LA12: ;
	}
	LA5: ;
	}BeforeRet: ;
}

N_NIMCALL(void, send_518209)(Socketimpl513407* socket, NimStringDesc* data, NU8 flags) {
	NI sent;
{	sent = send_517716(socket, ((void*) (data->data)), (data ? data->Sup.len : 0));
	{
		NI32 lasterror;
		if (!(sent < ((NI) 0))) goto LA3;
		lasterror = oslasterror_116833();
		{
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isdisconnectionerror_513481(flags, lasterror);
			if (!LOC7) goto LA8;
			goto BeforeRet;
		}
		LA8: ;
		socketerror_514027(socket, ((NI) -1), NIM_FALSE, lasterror);
	}
	LA3: ;
	{
		Oserror3433* e_518220;
		NimStringDesc* LOC14;
		if (!!((sent == (data ? data->Sup.len : 0)))) goto LA12;
		e_518220 = 0;
		e_518220 = (Oserror3433*) newObj((&NTI116812), sizeof(Oserror3433));
		(*e_518220).Sup.Sup.Sup.m_type = (&NTI3433);
		LOC14 = 0;
		LOC14 = (*e_518220).Sup.Sup.message; (*e_518220).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP4995));
		if (LOC14) nimGCunrefNoCycle(LOC14);
		raiseException((Exception*)e_518220, "OSError");
	}
	LA12: ;
	}BeforeRet: ;
}

N_NIMCALL(void, acceptaddr_514813)(Socketimpl513407* server, Socketimpl513407** client, NimStringDesc** address, NU8 flags) {
	struct sockaddr_in sockaddress;
	socklen_t addrlen;
	int sock;
	memset((void*)(&sockaddress), 0, sizeof(sockaddress));
	addrlen = ((socklen_t) (((NI)sizeof(struct sockaddr_in))));
	sock = accept((*server).fd, ((struct sockaddr*) ((&sockaddress))), (&addrlen));
	{
		NI32 err;
		if (!(sock == osinvalidsocket_508651)) goto LA3;
		err = oslasterror_116833();
		{
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isdisconnectionerror_513481(flags, err);
			if (!LOC7) goto LA8;
			acceptaddr_514813(server, client, address, flags);
		}
		LA8: ;
		raiseoserror_116809(err);
	}
	goto LA1;
	LA3: ;
	{
		NCSTRING LOC11;
		(*(*client)).fd = sock;
		(*(*client)).isbuffered = (*server).isbuffered;
		LOC11 = 0;
		LOC11 = inet_ntoa(sockaddress.sin_addr);
		unsureAsgnRef((void**) (&(*address)), cstrToNimstr(LOC11));
	}
	LA1: ;
}

N_NIMCALL(void, accept_515401)(Socketimpl513407* server, Socketimpl513407** client, NU8 flags) {
	NimStringDesc* addrdummy;
	addrdummy = copyString(((NimStringDesc*) &TMP4997));
	acceptaddr_514813(server, client, (&addrdummy), flags);
}
N_NIMCALL(void, TMP4998)(void* p, NI op) {
	Timeouterror513415* a;
	a = (Timeouterror513415*)p;
	nimGCvisit((void*)(*a).Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.message, op);
	nimGCvisit((void*)(*a).Sup.trace, op);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(NIM_BOOL, hasdatabuffered_516001)(Socketimpl513407* s) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	{
		NIM_BOOL LOC5;
		if (!(*s).isbuffered) goto LA3;
		LOC5 = 0;
		LOC5 = (((NI) 0) < (*s).isbufferedU.S1.buflen);
		if (!(LOC5)) goto LA6;
		LOC5 = !(((*s).isbufferedU.S1.currpos == (*s).isbufferedU.S1.buflen));
		LA6: ;
		result = LOC5;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NI, select_516207)(Socketimpl513407* readfd, NI timeout) {
	NI result;
	TY516225* fds;
	TY516214 LOC6;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = hasdatabuffered_516001(readfd);
		if (!LOC3) goto LA4;
		result = ((NI) 1);
		goto BeforeRet;
	}
	LA4: ;
	fds = (TY516225*) newSeq((&NTI516225), 1);
	LOC6[0] = (*readfd).fd;
	fds->data[0] = LOC6[0];
	result = select_511913((&fds), timeout);
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, HEX2BHEX3D_103688)(NF* x, NF y) {
	(*x) = ((NF)((*x)) + (NF)(y));
}

N_NIMCALL(NI, waitfor_516819)(Socketimpl513407* socket, NF* waited, NI timeout, NI size, NimStringDesc* funcname) {
	NI result;
{	result = 0;
	result = ((NI) 1);
	{
		if (!(size <= ((NI) 0))) goto LA3;
	}
	LA3: ;
	{
		if (!(timeout == ((NI) -1))) goto LA7;
		result = size;
		goto BeforeRet;
	}
	LA7: ;
	{
		NIM_BOOL LOC11;
		NIM_BOOL LOC12;
		LOC11 = 0;
		LOC12 = 0;
		LOC12 = (*socket).isbuffered;
		if (!(LOC12)) goto LA13;
		LOC12 = !(((*socket).isbufferedU.S1.buflen == ((NI) 0)));
		LA13: ;
		LOC11 = LOC12;
		if (!(LOC11)) goto LA14;
		LOC11 = !(((*socket).isbufferedU.S1.buflen == (*socket).isbufferedU.S1.currpos));
		LA14: ;
		if (!LOC11) goto LA15;
		result = (NI)((*socket).isbufferedU.S1.buflen - (*socket).isbufferedU.S1.currpos);
		result = ((result <= size) ? result : size);
	}
	goto LA9;
	LA15: ;
	{
		NF starttime;
		NI selret;
		NF LOC33;
		{
			Timeouterror513415* e_517013;
			NimStringDesc* LOC22;
			if (!((NI)(timeout - ((NI) (((NF)((*waited)) * (NF)(1.0000000000000000e+003))))) < ((NI) 1))) goto LA20;
			e_517013 = 0;
			e_517013 = (Timeouterror513415*) newObj((&NTI517014), sizeof(Timeouterror513415));
			(*e_517013).Sup.Sup.m_type = (&NTI513415);
			LOC22 = 0;
			LOC22 = rawNewString(funcname->Sup.len + 21);
appendString(LOC22, ((NimStringDesc*) &TMP4999));
appendString(LOC22, funcname);
appendString(LOC22, ((NimStringDesc*) &TMP5000));
			asgnRefNoCycle((void**) (&(*e_517013).Sup.message), LOC22);
			raiseException((Exception*)e_517013, "TimeoutError");
		}
		LA20: ;
		starttime = ntepochTime();
		selret = select_516207(socket, (NI)(timeout - ((NI) (((NF)((*waited)) * (NF)(1.0000000000000000e+003))))));
		{
			NI32 LOC27;
			if (!(selret < ((NI) 0))) goto LA25;
			LOC27 = 0;
			LOC27 = oslasterror_116833();
			raiseoserror_116809(LOC27);
		}
		LA25: ;
		{
			Timeouterror513415* e_517206;
			NimStringDesc* LOC32;
			if (!!((selret == ((NI) 1)))) goto LA30;
			e_517206 = 0;
			e_517206 = (Timeouterror513415*) newObj((&NTI517014), sizeof(Timeouterror513415));
			(*e_517206).Sup.Sup.m_type = (&NTI513415);
			LOC32 = 0;
			LOC32 = rawNewString(funcname->Sup.len + 21);
appendString(LOC32, ((NimStringDesc*) &TMP4999));
appendString(LOC32, funcname);
appendString(LOC32, ((NimStringDesc*) &TMP5000));
			asgnRefNoCycle((void**) (&(*e_517206).Sup.message), LOC32);
			raiseException((Exception*)e_517206, "TimeoutError");
		}
		LA30: ;
		LOC33 = 0;
		LOC33 = ntepochTime();
		HEX2BHEX3D_103688(waited, ((NF)(LOC33) - (NF)(starttime)));
	}
	LA9: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, readintobuf_516235)(Socketimpl513407* socket, NI32 flags) {
	NI result;
{	result = 0;
	result = ((NI) 0);
	result = recv((*socket).fd, ((void*) ((*socket).isbufferedU.S1.buffer)), ((NI) 4000), flags);
	{
		if (!(result < ((NI) 0))) goto LA3;
		(*socket).lasterror = oslasterror_116833();
	}
	LA3: ;
	{
		if (!(result <= ((NI) 0))) goto LA7;
		(*socket).isbufferedU.S1.buflen = ((NI) 0);
		(*socket).isbufferedU.S1.currpos = ((NI) 0);
		goto BeforeRet;
	}
	LA7: ;
	(*socket).isbufferedU.S1.buflen = result;
	(*socket).isbufferedU.S1.currpos = ((NI) 0);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, recv_516425)(Socketimpl513407* socket, void* data, NI size) {
	NI result;
{	result = 0;
	{
		if (!(size == ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI read;
		if (!(*socket).isbuffered) goto LA7;
		{
			NI res;
			if (!((*socket).isbufferedU.S1.buflen == ((NI) 0))) goto LA11;
			res = readintobuf_516235(socket, ((NI32) 0));
			{
				if (!(res <= ((NI) 0))) goto LA15;
				{
					if (!NIM_FALSE) goto LA19;
					result = ((NI) 0);
					goto BeforeRet;
				}
				goto LA17;
				LA19: ;
				{
					result = res;
					goto BeforeRet;
				}
				LA17: ;
			}
			LA15: ;
		}
		LA11: ;
		read = ((NI) 0);
		{
			while (1) {
				NI chunk;
				NCSTRING d;
				if (!(read < size)) goto LA23;
				{
					NI res;
					if (!((*socket).isbufferedU.S1.buflen <= (*socket).isbufferedU.S1.currpos)) goto LA26;
					res = readintobuf_516235(socket, ((NI32) 0));
					{
						if (!(res <= ((NI) 0))) goto LA30;
						{
							if (!(((NI) 0) < read)) goto LA34;
							result = read;
							goto BeforeRet;
						}
						goto LA32;
						LA34: ;
						{
							result = res;
							goto BeforeRet;
						}
						LA32: ;
					}
					LA30: ;
				}
				LA26: ;
				chunk = (((NI)((*socket).isbufferedU.S1.buflen - (*socket).isbufferedU.S1.currpos) <= (NI)(size - read)) ? (NI)((*socket).isbufferedU.S1.buflen - (*socket).isbufferedU.S1.currpos) : (NI)(size - read));
				d = ((NCSTRING) (data));
				memcpy(((void*) ((&d[read]))), ((void*) ((&(*socket).isbufferedU.S1.buffer[((*socket).isbufferedU.S1.currpos)- 0]))), ((NI) (chunk)));
				read += chunk;
				(*socket).isbufferedU.S1.currpos += chunk;
			} LA23: ;
		}
		result = read;
	}
	goto LA5;
	LA7: ;
	{
		result = recv((*socket).fd, data, ((NI) (((int) (size)))), ((NI32) 0));
		{
			if (!(result < ((NI) 0))) goto LA40;
			(*socket).lasterror = oslasterror_116833();
		}
		LA40: ;
	}
	LA5: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, peekchar_517444)(Socketimpl513407* socket, NIM_CHAR* c) {
	NI result;
	result = 0;
	{
		if (!(*socket).isbuffered) goto LA3;
		result = ((NI) 1);
		{
			NIM_BOOL LOC7;
			NI res;
			LOC7 = 0;
			LOC7 = ((*socket).isbufferedU.S1.buflen == ((NI) 0));
			if (LOC7) goto LA8;
			LOC7 = ((NI)((*socket).isbufferedU.S1.buflen - ((NI) 1)) < (*socket).isbufferedU.S1.currpos);
			LA8: ;
			if (!LOC7) goto LA9;
			res = readintobuf_516235(socket, ((NI32) 0));
			{
				if (!(res <= ((NI) 0))) goto LA13;
				result = res;
			}
			LA13: ;
		}
		LA9: ;
		(*c) = (*socket).isbufferedU.S1.buffer[((*socket).isbufferedU.S1.currpos)- 0];
	}
	goto LA1;
	LA3: ;
	{
		result = recv((*socket).fd, ((void*) (c)), ((NI) 1), MSG_PEEK);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, readline_517608)(Socketimpl513407* socket, NimStringDesc** line, NI timeout, NU8 flags) {
	NF waited;
{	waited = 0.0;
	(*line) = setLengthStr((*line), ((NI) 0));
	{
		while (1) {
			NIM_CHAR c;
			NI LOC3;
			NI n;
			c = 0;
			LOC3 = 0;
			LOC3 = waitfor_516819(socket, (&waited), timeout, ((NI) 1), ((NimStringDesc*) &TMP5002));
			n = recv_516425(socket, ((void*) ((&c))), ((NI) 1));
			{
				NI32 lasterror;
				if (!(n < ((NI) 0))) goto LA6;
				lasterror = getsocketerror_514001(socket);
				{
					NIM_BOOL LOC10;
					LOC10 = 0;
					LOC10 = isdisconnectionerror_513481(flags, lasterror);
					if (!LOC10) goto LA11;
					(*line) = setLengthStr((*line), ((NI) 0));
					goto BeforeRet;
				}
				LA11: ;
				socketerror_514027(socket, n, NIM_FALSE, lasterror);
			}
			goto LA4;
			LA6: ;
			{
				if (!(n == ((NI) 0))) goto LA14;
				(*line) = setLengthStr((*line), ((NI) 0));
				goto BeforeRet;
			}
			goto LA4;
			LA14: ;
			LA4: ;
			{
				NI LOC20;
				if (!((NU8)(c) == (NU8)(13))) goto LA18;
				LOC20 = 0;
				LOC20 = waitfor_516819(socket, (&waited), timeout, ((NI) 1), ((NimStringDesc*) &TMP5002));
				n = peekchar_517444(socket, (&c));
				{
					NIM_BOOL LOC23;
					NI LOC27;
					LOC23 = 0;
					LOC23 = (((NI) 0) < n);
					if (!(LOC23)) goto LA24;
					LOC23 = ((NU8)(c) == (NU8)(10));
					LA24: ;
					if (!LOC23) goto LA25;
					LOC27 = 0;
					LOC27 = recv_516425(socket, ((void*) ((&c))), ((NI) 1));
				}
				goto LA21;
				LA25: ;
				{
					NI32 lasterror;
					if (!(n <= ((NI) 0))) goto LA29;
					lasterror = getsocketerror_514001(socket);
					{
						NIM_BOOL LOC33;
						LOC33 = 0;
						LOC33 = isdisconnectionerror_513481(flags, lasterror);
						if (!LOC33) goto LA34;
						(*line) = setLengthStr((*line), ((NI) 0));
						goto BeforeRet;
					}
					LA34: ;
					socketerror_514027(socket, n, NIM_FALSE, lasterror);
				}
				goto LA21;
				LA29: ;
				LA21: ;
				{
					if (!(((*line) ? (*line)->Sup.len : 0) == ((NI) 0))) goto LA38;
					(*line) = resizeString((*line), 2);
appendString((*line), ((NimStringDesc*) &TMP5003));
				}
				LA38: ;
				goto BeforeRet;
			}
			goto LA16;
			LA18: ;
			{
				if (!((NU8)(c) == (NU8)(10))) goto LA41;
				{
					if (!(((*line) ? (*line)->Sup.len : 0) == ((NI) 0))) goto LA45;
					(*line) = resizeString((*line), 2);
appendString((*line), ((NimStringDesc*) &TMP5003));
				}
				LA45: ;
				goto BeforeRet;
			}
			goto LA16;
			LA41: ;
			LA16: ;
			(*line) = addChar((*line), c);
		}
	}
	}BeforeRet: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17043;
	exchandler_17043 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17043 = (*exchandler_17043).prev;
}

N_NIMCALL(void, close_515417)(Socketimpl513407* socket) {
	TSafePoint TMP5004;
	pushSafePoint(&TMP5004);
	TMP5004.status = _setjmp(TMP5004.context);
	if (TMP5004.status == 0) {
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		close_509028((*socket).fd);
	}
	if (TMP5004.status != 0) reraiseException();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_netInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_netDatInit)(void) {
static TNimNode* TMP4983[3];
static TNimNode* TMP4984[3];
static TNimNode TMP1071[10];
NTI513407.size = sizeof(Socketimpl513407);
NTI513407.kind = 18;
NTI513407.base = 0;
NTI513407.flags = 3;
TMP4983[0] = &TMP1071[1];
TMP1071[1].kind = 1;
TMP1071[1].offset = offsetof(Socketimpl513407, fd);
TMP1071[1].typ = (&NTI5811);
TMP1071[1].name = "fd";
TMP4983[1] = &TMP1071[2];
TMP1071[2].kind = 3;
TMP1071[2].offset = offsetof(Socketimpl513407, isbuffered);
TMP1071[2].typ = (&NTI138);
TMP1071[2].name = "isBuffered";
TMP1071[2].sons = &NimDT_513407_isbuffered[0];
TMP1071[2].len = 2;
TMP4984[0] = &TMP1071[4];
NTI513420.size = sizeof(TY513420);
NTI513420.kind = 16;
NTI513420.base = (&NTI147);
NTI513420.flags = 3;
TMP1071[4].kind = 1;
TMP1071[4].offset = offsetof(Socketimpl513407, isbufferedU.S1.buffer);
TMP1071[4].typ = (&NTI513420);
TMP1071[4].name = "buffer";
TMP4984[1] = &TMP1071[5];
TMP1071[5].kind = 1;
TMP1071[5].offset = offsetof(Socketimpl513407, isbufferedU.S1.currpos);
TMP1071[5].typ = (&NTI108);
TMP1071[5].name = "currPos";
TMP4984[2] = &TMP1071[6];
TMP1071[6].kind = 1;
TMP1071[6].offset = offsetof(Socketimpl513407, isbufferedU.S1.buflen);
TMP1071[6].typ = (&NTI108);
TMP1071[6].name = "bufLen";
TMP1071[3].len = 3; TMP1071[3].kind = 2; TMP1071[3].sons = &TMP4984[0];
NimDT_513407_isbuffered[1] = &TMP1071[3];
TMP1071[7].len = 0; TMP1071[7].kind = 2;
NimDT_513407_isbuffered[0] = &TMP1071[7];
TMP4983[2] = &TMP1071[8];
TMP1071[8].kind = 1;
TMP1071[8].offset = offsetof(Socketimpl513407, lasterror);
TMP1071[8].typ = (&NTI114);
TMP1071[8].name = "lastError";
TMP1071[0].len = 3; TMP1071[0].kind = 2; TMP1071[0].sons = &TMP4983[0];
NTI513407.node = &TMP1071[0];
NTI513409.size = sizeof(Socketimpl513407*);
NTI513409.kind = 22;
NTI513409.base = (&NTI513407);
NTI513409.flags = 2;
NTI513409.marker = TMP4985;
NTI513415.size = sizeof(Timeouterror513415);
NTI513415.kind = 17;
NTI513415.base = (&NTI3427);
TMP1071[9].len = 0; TMP1071[9].kind = 2;
NTI513415.node = &TMP1071[9];
NTI517014.size = sizeof(Timeouterror513415*);
NTI517014.kind = 22;
NTI517014.base = (&NTI513415);
NTI517014.marker = TMP4998;
}

