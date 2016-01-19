/* Generated by Nim Compiler v0.13.0 */
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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY524219 TY524219;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NIM_CHAR TY110370[256];
struct TY524219 {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};
N_NIMCALL(int, toint_515820)(NU8 domain);
N_NIMCALL(int, toint_515823)(NU8 typ);
N_NIMCALL(int, toint_515826)(NU8 p);
N_NIMCALL(NimStringDesc*, HEX24_7801)(NU64 x);
N_NOINLINE(void, raiseoserror_121003)(NI32 errorcode, NimStringDesc* additionalinfo);
N_NIMCALL(NI32, oslasterror_121019)(void);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(struct timeval, timevalfrommilliseconds_519822)(NI timeout);
N_NIMCALL(void, createfdset_519831)(fd_set* fd, TY524219* s, NI* m);
N_NIMCALL(void, prunesocketset_520022)(TY524219** s, fd_set* fd);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
int osinvalidsocket_515644;
int nativeafinet_515645;
int nativeafinet6_515646;
TNimType NTI515604; /* Domain */
TNimType NTI515606; /* SockType */
TNimType NTI515608; /* Protocol */

N_NIMCALL(int, toint_515820)(NU8 domain) {
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

N_NIMCALL(int, toint_515823)(NU8 typ) {
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

N_NIMCALL(int, toint_515826)(NU8 p) {
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

N_NIMCALL(int, newnativesocket_516001)(NU8 domain, NU8 socktype, NU8 protocol) {
	int result;
	int LOC1;
	int LOC2;
	int LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = toint_515820(domain);
	LOC2 = 0;
	LOC2 = toint_515823(socktype);
	LOC3 = 0;
	LOC3 = toint_515826(protocol);
	result = socket(LOC1, LOC2, LOC3);
	return result;
}

N_NIMCALL(NI16, ntohs_517001)(NI16 x) {
	NI16 result;
	result = 0;
	result = x;
	return result;
}

N_NIMCALL(NI32, ntohl_516806)(NI32 x) {
	NI32 result;
	result = 0;
	result = x;
	return result;
}

N_NIMCALL(int, bindaddr_516208)(int socket, struct sockaddr* name, socklen_t namelen) {
	int result;
	result = 0;
	result = bind(socket, name, namelen);
	return result;
}

N_NIMCALL(struct addrinfo*, getaddrinfo_516402)(NimStringDesc* address, NU16 port, NU8 domain, NU8 socktype, NU8 protocol) {
	struct addrinfo* result;
	struct addrinfo hints;
	int gairesult;
	NimStringDesc* LOC5;
	result = 0;
	memset((void*)(&hints), 0, sizeof(hints));
	result = NIM_NIL;
	hints.ai_family = toint_515820(domain);
	hints.ai_socktype = toint_515823(socktype);
	hints.ai_protocol = toint_515826(protocol);
	{
		if (!(domain == ((NU8) 23))) goto LA3;
		hints.ai_flags = AI_V4MAPPED;
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = HEX24_7801(port);
	gairesult = getaddrinfo(address->data, LOC5->data, (&hints), &result);
	{
		NI32 LOC10;
		NCSTRING LOC11;
		NimStringDesc* LOC12;
		if (!!((gairesult == ((NI32) 0)))) goto LA8;
		LOC10 = 0;
		LOC10 = oslasterror_121019();
		LOC11 = 0;
		LOC11 = (char *)gai_strerror(gairesult);
		LOC12 = 0;
		LOC12 = cstrToNimstr(LOC11);
		raiseoserror_121003(LOC10, LOC12);
	}
	LA8: ;
	return result;
}

N_NIMCALL(void, dealloc_516802)(struct addrinfo* ai) {
	freeaddrinfo(ai);
}

N_NIMCALL(int, listen_516215)(int socket, int backlog) {
	int result;
	result = 0;
	result = listen(socket, backlog);
	return result;
}

N_NIMCALL(struct timeval, timevalfrommilliseconds_519822)(NI timeout) {
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

N_NIMCALL(void, createfdset_519831)(fd_set* fd, TY524219* s, NI* m) {
	FD_ZERO(fd);
	{
		int i_520002;
		NI i_520019;
		NI L_520021;
		i_520002 = 0;
		i_520019 = ((NI) 0);
		L_520021 = (s ? s->Sup.len : 0);
		{
			while (1) {
				if (!(i_520019 < L_520021)) goto LA3;
				i_520002 = s->data[i_520019];
				(*m) = (((*m) >= ((NI) (i_520002))) ? (*m) : ((NI) (i_520002)));
				FD_SET(i_520002, fd);
				i_520019 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, prunesocketset_520022)(TY524219** s, fd_set* fd) {
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
	(*s) = (TY524219*) setLengthSeq(&((*s))->Sup, sizeof(int), ((NI) (L)));
}

N_NIMCALL(NI, select_520077)(TY524219** readfds, NI timeout) {
	NI result;
	struct timeval tv;
	fd_set rd;
	NI m;
	result = 0;
	tv = timevalfrommilliseconds_519822(timeout);
	memset((void*)(&rd), 0, sizeof(rd));
	m = ((NI) 0);
	createfdset_519831((&rd), (*readfds), (&m));
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
	prunesocketset_520022(readfds, (&rd));
	return result;
}

N_NIMCALL(void, close_516013)(int socket) {
	int LOC1;
	LOC1 = 0;
	LOC1 = close(socket);
}
NIM_EXTERNC N_NOINLINE(void, stdlib_nativesocketsInit000)(void) {
	osinvalidsocket_515644 = ((int) -1);
	nativeafinet_515645 = AF_INET;
	nativeafinet6_515646 = AF_INET6;
}

NIM_EXTERNC N_NOINLINE(void, stdlib_nativesocketsDatInit000)(void) {
static TNimNode* TMP5259[3];
NI TMP5261;
static char* NIM_CONST TMP5260[3] = {
"AF_UNIX", 
"AF_INET", 
"AF_INET6"};
static TNimNode* TMP5262[4];
NI TMP5264;
static char* NIM_CONST TMP5263[4] = {
"SOCK_STREAM", 
"SOCK_DGRAM", 
"SOCK_RAW", 
"SOCK_SEQPACKET"};
static TNimNode* TMP5265[6];
NI TMP5267;
static char* NIM_CONST TMP5266[6] = {
"IPPROTO_TCP", 
"IPPROTO_UDP", 
"IPPROTO_IP", 
"IPPROTO_IPV6", 
"IPPROTO_RAW", 
"IPPROTO_ICMP"};
static TNimNode TMP1191[16];
NTI515604.size = sizeof(NU8);
NTI515604.kind = 14;
NTI515604.base = 0;
NTI515604.flags = 3;
for (TMP5261 = 0; TMP5261 < 3; TMP5261++) {
TMP1191[TMP5261+0].kind = 1;
TMP1191[TMP5261+0].offset = TMP5261;
TMP1191[TMP5261+0].name = TMP5260[TMP5261];
TMP5259[TMP5261] = &TMP1191[TMP5261+0];
}
TMP1191[0].offset = 0;
TMP1191[1].offset = 2;
TMP1191[2].offset = 23;
TMP1191[3].len = 3; TMP1191[3].kind = 2; TMP1191[3].sons = &TMP5259[0];
NTI515604.node = &TMP1191[3];
NTI515604.flags = 1<<2;
NTI515606.size = sizeof(NU8);
NTI515606.kind = 14;
NTI515606.base = 0;
NTI515606.flags = 3;
for (TMP5264 = 0; TMP5264 < 4; TMP5264++) {
TMP1191[TMP5264+4].kind = 1;
TMP1191[TMP5264+4].offset = TMP5264;
TMP1191[TMP5264+4].name = TMP5263[TMP5264];
TMP5262[TMP5264] = &TMP1191[TMP5264+4];
}
TMP1191[4].offset = 1;
TMP1191[5].offset = 2;
TMP1191[6].offset = 3;
TMP1191[7].offset = 5;
TMP1191[8].len = 4; TMP1191[8].kind = 2; TMP1191[8].sons = &TMP5262[0];
NTI515606.node = &TMP1191[8];
NTI515606.flags = 1<<2;
NTI515608.size = sizeof(NU8);
NTI515608.kind = 14;
NTI515608.base = 0;
NTI515608.flags = 3;
for (TMP5267 = 0; TMP5267 < 6; TMP5267++) {
TMP1191[TMP5267+9].kind = 1;
TMP1191[TMP5267+9].offset = TMP5267;
TMP1191[TMP5267+9].name = TMP5266[TMP5267];
TMP5265[TMP5267] = &TMP1191[TMP5267+9];
}
TMP1191[9].offset = 6;
TMP1191[10].offset = 17;
TMP1191[11].offset = 18;
TMP1191[12].offset = 19;
TMP1191[13].offset = 20;
TMP1191[14].offset = 21;
TMP1191[15].len = 6; TMP1191[15].kind = 2; TMP1191[15].sons = &TMP5265[0];
NTI515608.node = &TMP1191[15];
NTI515608.flags = 1<<2;
}

