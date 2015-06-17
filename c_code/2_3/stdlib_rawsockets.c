/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <sys/socket.h>

#include <netinet/in.h>

#include <netdb.h>

#include <string.h>

#include <sys/select.h>

#include <unistd.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Oserror3433 Oserror3433;
typedef struct Systemerror3429 Systemerror3429;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tcell46346 Tcell46346;
typedef struct Tcellseq46362 Tcellseq46362;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46358 Tcellset46358;
typedef struct Tpagedesc46354 Tpagedesc46354;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct TY517225 TY517225;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tcell46346  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46362  {
NI len;
NI cap;
Tcell46346** d;
};
struct  Tcellset46358  {
NI counter;
NI max;
Tpagedesc46354* head;
Tpagedesc46354** data;
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
Tcellseq46362 zct;
Tcellseq46362 decstack;
Tcellset46358 cycleroots;
Tcellseq46362 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
typedef NIM_CHAR TY107380[256];
typedef NI TY27420[8];
struct  Tpagedesc46354  {
Tpagedesc46354* next;
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
struct TY517225 {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};
N_NIMCALL(int, toint_509829)(NU8 domain);
N_NIMCALL(int, toint_509835)(NU8 typ);
N_NIMCALL(int, toint_509841)(NU8 p);
N_NIMCALL(NI16, ntohs_510807)(NI16 x);
N_NIMCALL(NI32, ntohl_510631)(NI32 x);
N_NIMCALL(NimStringDesc*, HEX24_6401)(NU64 x);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(struct timeval, timevalfrommilliseconds_512628)(NI timeout);
N_NIMCALL(void, createfdset_512643)(fd_set* fd, TY517225* s, NI* m);
N_NIMCALL(void, prunesocketset_512846)(TY517225** s, fd_set* fd);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
int osinvalidsocket_509651;
extern TNimType NTI116812; /* ref OSError */
extern TNimType NTI3433; /* OSError */
extern Tgcheap48216 gch_48244;

N_NIMCALL(int, toint_509829)(NU8 domain) {
	int result;
	result = 0;
	switch (domain) {
	case ((NU8) 0):
	{
		result = AF_UNIX;
	}
	break;
	case ((NU8) 2):
	{
		result = AF_INET;
	}
	break;
	case ((NU8) 23):
	{
		result = AF_INET6;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(int, toint_509835)(NU8 typ) {
	int result;
	result = 0;
	switch (typ) {
	case ((NU8) 1):
	{
		result = SOCK_STREAM;
	}
	break;
	case ((NU8) 2):
	{
		result = SOCK_DGRAM;
	}
	break;
	case ((NU8) 5):
	{
		result = SOCK_SEQPACKET;
	}
	break;
	case ((NU8) 3):
	{
		result = SOCK_RAW;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(int, toint_509841)(NU8 p) {
	int result;
	result = 0;
	switch (p) {
	case ((NU8) 6):
	{
		result = IPPROTO_TCP;
	}
	break;
	case ((NU8) 17):
	{
		result = IPPROTO_UDP;
	}
	break;
	case ((NU8) 18):
	{
		result = IPPROTO_IP;
	}
	break;
	case ((NU8) 19):
	{
		result = IPPROTO_IPV6;
	}
	break;
	case ((NU8) 20):
	{
		result = IPPROTO_RAW;
	}
	break;
	case ((NU8) 21):
	{
		result = IPPROTO_ICMP;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(int, newrawsocket_510004)(NU8 domain, NU8 typ, NU8 protocol) {
	int result;
	int LOC1;
	int LOC2;
	int LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = toint_509829(domain);
	LOC2 = 0;
	LOC2 = toint_509835(typ);
	LOC3 = 0;
	LOC3 = toint_509841(protocol);
	result = socket(LOC1, LOC2, LOC3);
	return result;
}

N_NIMCALL(NI16, ntohs_510807)(NI16 x) {
	NI16 result;
	result = 0;
	result = x;
	return result;
}

N_NIMCALL(NI16, htons_511017)(NI16 x) {
	NI16 result;
	result = 0;
	result = ntohs_510807(x);
	return result;
}

N_NIMCALL(NI32, ntohl_510631)(NI32 x) {
	NI32 result;
	result = 0;
	result = x;
	return result;
}

N_NIMCALL(NI32, htonl_511007)(NI32 x) {
	NI32 result;
	result = 0;
	result = ntohl_510631(x);
	return result;
}

N_NIMCALL(int, bindaddr_510214)(int socket, struct sockaddr* name, socklen_t namelen) {
	int result;
	result = 0;
	result = bind(socket, name, namelen);
	return result;
}

static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr) {
	Tcell46346* result;
	result = 0;
	result = ((Tcell46346*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46346))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46346* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46346* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46346* c;
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

N_NIMCALL(struct addrinfo*, getaddrinfo_510408)(NimStringDesc* address, NU16 port, NU8 af, NU8 typ, NU8 prot) {
	struct addrinfo* result;
	struct addrinfo hints;
	int gairesult;
	NimStringDesc* LOC1;
	result = 0;
	memset((void*)(&hints), 0, sizeof(hints));
	result = NIM_NIL;
	hints.ai_family = toint_509829(af);
	hints.ai_socktype = toint_509835(typ);
	hints.ai_protocol = toint_509841(prot);
	LOC1 = 0;
	LOC1 = HEX24_6401(port);
	gairesult = getaddrinfo(address->data, LOC1->data, (&hints), &result);
	{
		Oserror3433* e_510603;
		NCSTRING LOC6;
		if (!!((gairesult == ((NI32) 0)))) goto LA4;
		e_510603 = 0;
		e_510603 = (Oserror3433*) newObj((&NTI116812), sizeof(Oserror3433));
		(*e_510603).Sup.Sup.Sup.m_type = (&NTI3433);
		LOC6 = 0;
		LOC6 = gai_strerror(gairesult);
		asgnRefNoCycle((void**) (&(*e_510603).Sup.Sup.message), cstrToNimstr(LOC6));
		raiseException((Exception*)e_510603, "OSError");
	}
	LA4: ;
	return result;
}

N_NIMCALL(void, dealloc_510621)(struct addrinfo* ai) {
	freeaddrinfo(ai);
}

N_NIMCALL(int, listen_510227)(int socket, int backlog) {
	int result;
	result = 0;
	result = listen(socket, backlog);
	return result;
}

N_NIMCALL(struct timeval, timevalfrommilliseconds_512628)(NI timeout) {
	struct timeval result;
	memset((void*)(&result), 0, sizeof(result));
	{
		NI seconds;
		if (!!((timeout == ((NI) -1)))) goto LA3;
		seconds = (NI)(timeout / ((NI) 1000));
		result.tv_sec = ((NI) (((NI32) (seconds))));
		result.tv_usec = ((NI) (((NI32) ((NI)((NI)(timeout - (NI)(seconds * ((NI) 1000))) * ((NI) 1000))))));
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, createfdset_512643)(fd_set* fd, TY517225* s, NI* m) {
	FD_ZERO(fd);
	{
		int i_512811;
		NI i_512828;
		NI L_512830;
		i_512811 = 0;
		i_512828 = ((NI) 0);
		L_512830 = (s ? s->Sup.len : 0);
		{
			while (1) {
				if (!(i_512828 < L_512830)) goto LA3;
				i_512811 = s->data[i_512828];
				(*m) = (((*m) >= ((NI) (i_512811))) ? (*m) : ((NI) (i_512811)));
				FD_SET(i_512811, fd);
				i_512828 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, prunesocketset_512846)(TY517225** s, fd_set* fd) {
	NI i;
	NI L;
	i = ((NI) 0);
	L = ((*s) ? (*s)->Sup.len : 0);
	{
		while (1) {
			if (!(i < L)) goto LA2;
			{
				int LOC5;
				LOC5 = 0;
				LOC5 = FD_ISSET((*s)->data[i], fd);
				if (!(LOC5 == ((NI32) 0))) goto LA6;
				(*s)->data[i] = (*s)->data[(NI)(L - ((NI) 1))];
				L -= ((NI) 1);
			}
			goto LA3;
			LA6: ;
			{
				i += ((NI) 1);
			}
			LA3: ;
		} LA2: ;
	}
	(*s) = (TY517225*) setLengthSeq(&((*s))->Sup, sizeof(int), ((NI) (L)));
}

N_NIMCALL(NI, select_512913)(TY517225** readfds, NI timeout) {
	NI result;
	struct timeval tv;
	fd_set rd;
	NI m;
	result = 0;
	tv = timevalfrommilliseconds_512628(timeout);
	memset((void*)(&rd), 0, sizeof(rd));
	m = ((NI) 0);
	createfdset_512643((&rd), (*readfds), (&m));
	{
		int LOC5;
		if (!!((timeout == ((NI) -1)))) goto LA3;
		LOC5 = 0;
		LOC5 = select(((int) ((NI)(m + ((NI) 1)))), (&rd), NIM_NIL, NIM_NIL, (&tv));
		result = ((NI) (LOC5));
	}
	goto LA1;
	LA3: ;
	{
		int LOC7;
		LOC7 = 0;
		LOC7 = select(((int) ((NI)(m + ((NI) 1)))), (&rd), NIM_NIL, NIM_NIL, NIM_NIL);
		result = ((NI) (LOC7));
	}
	LA1: ;
	prunesocketset_512846(readfds, (&rd));
	return result;
}

N_NIMCALL(void, close_510028)(int socket) {
	int LOC1;
	LOC1 = 0;
	LOC1 = close(socket);
}
NIM_EXTERNC N_NOINLINE(void, stdlib_rawsocketsInit)(void) {
	osinvalidsocket_509651 = ((int) -1);
}

NIM_EXTERNC N_NOINLINE(void, stdlib_rawsocketsDatInit)(void) {
}

