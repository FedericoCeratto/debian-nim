/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
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
typedef struct TY587019 TY587019;
typedef NU8 Domain577604;
typedef NU8 Tnimkind3403;
typedef NU8 Tnimtypeflag3409Set;
typedef N_NIMCALL_PTR(void, TY3489) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3403 kind;
Tnimtypeflag3409Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
typedef NU8 Socktype577606;
typedef NU8 Protocol577608;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NIM_CHAR TY120770[256];
struct TY587019 {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};
N_NIMCALL(int, toint_577820_466562973)(Domain577604 domain0);
N_NIMCALL(int, toint_577823_466562973)(Socktype577606 typ0);
N_NIMCALL(int, toint_577826_466562973)(Protocol577608 p0);
N_NIMCALL(NimStringDesc*, HEX24_8401_1689653243)(NU64 x0);
N_NOINLINE(void, raiseoserror_130603_2125978480)(NI32 errorcode0, NimStringDesc* additionalinfo0);
N_NIMCALL(NI32, oslasterror_130619_2125978480)(void);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
N_NIMCALL(struct timeval, timevalfrommilliseconds_582022_466562973)(NI timeout0);
N_NIMCALL(void, createfdset_582031_466562973)(fd_set* fd0, TY587019* s0, NI* m0);
N_NIMCALL(void, prunesocketset_582222_466562973)(TY587019** s0, fd_set* fd0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
int osinvalidsocket_577650_466562973;
int nativeafinet_577651_466562973;
int nativeafinet6_577652_466562973;
TNimType NTI577604; /* Domain */
TNimType NTI577606; /* SockType */
TNimType NTI577608; /* Protocol */

N_NIMCALL(int, toint_577820_466562973)(Domain577604 domain0) {
	int result0;
	result0 = (int)0;
	switch (domain0) {
	case ((Domain577604) 0):
	{
		result0 = AF_UNIX;
	}
	break;
	case ((Domain577604) 2):
	{
		result0 = AF_INET;
	}
	break;
	case ((Domain577604) 23):
	{
		result0 = AF_INET6;
	}
	break;
	default:
	{
	}
	break;
	}
	return result0;
}

N_NIMCALL(int, toint_577823_466562973)(Socktype577606 typ0) {
	int result0;
	result0 = (int)0;
	switch (typ0) {
	case ((Socktype577606) 1):
	{
		result0 = SOCK_STREAM;
	}
	break;
	case ((Socktype577606) 2):
	{
		result0 = SOCK_DGRAM;
	}
	break;
	case ((Socktype577606) 5):
	{
		result0 = SOCK_SEQPACKET;
	}
	break;
	case ((Socktype577606) 3):
	{
		result0 = SOCK_RAW;
	}
	break;
	default:
	{
	}
	break;
	}
	return result0;
}

N_NIMCALL(int, toint_577826_466562973)(Protocol577608 p0) {
	int result0;
	result0 = (int)0;
	switch (p0) {
	case ((Protocol577608) 6):
	{
		result0 = IPPROTO_TCP;
	}
	break;
	case ((Protocol577608) 17):
	{
		result0 = IPPROTO_UDP;
	}
	break;
	case ((Protocol577608) 18):
	{
		result0 = IPPROTO_IP;
	}
	break;
	case ((Protocol577608) 19):
	{
		result0 = IPPROTO_IPV6;
	}
	break;
	case ((Protocol577608) 20):
	{
		result0 = IPPROTO_RAW;
	}
	break;
	case ((Protocol577608) 21):
	{
		result0 = IPPROTO_ICMP;
	}
	break;
	default:
	{
	}
	break;
	}
	return result0;
}

N_NIMCALL(int, newnativesocket_578001_466562973)(Domain577604 domain0, Socktype577606 socktype0, Protocol577608 protocol0) {
	int result0;
	int LOC1;
	int LOC2;
	int LOC3;
	result0 = (int)0;
	LOC1 = (int)0;
	LOC1 = toint_577820_466562973(domain0);
	LOC2 = (int)0;
	LOC2 = toint_577823_466562973(socktype0);
	LOC3 = (int)0;
	LOC3 = toint_577826_466562973(protocol0);
	result0 = socket(LOC1, LOC2, LOC3);
	return result0;
}

N_NIMCALL(NU16, ntohs_579007_466562973)(NU16 x0) {
	NU16 result0;
	result0 = (NU16)0;
	result0 = x0;
	return result0;
}

N_NIMCALL(NU32, ntohl_578806_466562973)(NU32 x0) {
	NU32 result0;
	result0 = (NU32)0;
	result0 = x0;
	return result0;
}

N_NIMCALL(int, bindaddr_578208_466562973)(int socket0, struct sockaddr* name0, socklen_t namelen0) {
	int result0;
	result0 = (int)0;
	result0 = bind(socket0, name0, namelen0);
	return result0;
}

N_NIMCALL(struct addrinfo*, getaddrinfo_578402_466562973)(NimStringDesc* address0, NU16 port0, Domain577604 domain0, Socktype577606 socktype0, Protocol577608 protocol0) {
	struct addrinfo* result0;
	struct addrinfo hints0;
	int gairesult0;
	NimStringDesc* LOC5;
	result0 = (struct addrinfo*)0;
	memset((void*)(&hints0), 0, sizeof(hints0));
	result0 = NIM_NIL;
	hints0.ai_family = toint_577820_466562973(domain0);
	hints0.ai_socktype = toint_577823_466562973(socktype0);
	hints0.ai_protocol = toint_577826_466562973(protocol0);
	{
		if (!(domain0 == ((Domain577604) 23))) goto LA3;
		hints0.ai_flags = AI_V4MAPPED;
	}
	LA3: ;
	LOC5 = (NimStringDesc*)0;
	LOC5 = HEX24_8401_1689653243(port0);
	gairesult0 = getaddrinfo(address0->data, LOC5->data, (&hints0), &result0);
	{
		NI32 LOC10;
		NCSTRING LOC11;
		NimStringDesc* LOC12;
		if (!!((gairesult0 == ((NI32) 0)))) goto LA8;
		LOC10 = (NI32)0;
		LOC10 = oslasterror_130619_2125978480();
		LOC11 = (NCSTRING)0;
		LOC11 = (char *)gai_strerror(gairesult0);
		LOC12 = (NimStringDesc*)0;
		LOC12 = cstrToNimstr(LOC11);
		raiseoserror_130603_2125978480(LOC10, LOC12);
	}
	LA8: ;
	return result0;
}

N_NIMCALL(void, dealloc_578802_466562973)(struct addrinfo* ai0) {
	freeaddrinfo(ai0);
}

N_NIMCALL(int, listen_578215_466562973)(int socket0, int backlog0) {
	int result0;
	result0 = (int)0;
	result0 = listen(socket0, backlog0);
	return result0;
}

N_NIMCALL(struct timeval, timevalfrommilliseconds_582022_466562973)(NI timeout0) {
	struct timeval result0;
	memset((void*)(&result0), 0, sizeof(result0));
	{
		NI seconds0;
		if (!!((timeout0 == ((NI) -1)))) goto LA3;
		seconds0 = (NI)(timeout0 / ((NI) 1000));
		result0.tv_sec = ((NI) (((NI32) (seconds0))));
		result0.tv_usec = ((NI) (((NI32) ((NI)((NI)(timeout0 - (NI)(seconds0 * ((NI) 1000))) * ((NI) 1000))))));
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, createfdset_582031_466562973)(fd_set* fd0, TY587019* s0, NI* m0) {
	FD_ZERO(fd0);
	{
		int i_582202_466562973;
		NI i_582219_466562973;
		NI L_582221_466562973;
		i_582202_466562973 = (int)0;
		i_582219_466562973 = ((NI) 0);
		L_582221_466562973 = (s0 ? s0->Sup.len : 0);
		{
			while (1) {
				if (!(i_582219_466562973 < L_582221_466562973)) goto LA3;
				i_582202_466562973 = s0->data[i_582219_466562973];
				(*m0) = (((*m0) >= ((NI) (i_582202_466562973))) ? (*m0) : ((NI) (i_582202_466562973)));
				FD_SET(i_582202_466562973, fd0);
				i_582219_466562973 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, prunesocketset_582222_466562973)(TY587019** s0, fd_set* fd0) {
	NI i0;
	NI L0;
	i0 = ((NI) 0);
	L0 = ((*s0) ? (*s0)->Sup.len : 0);
	{
		while (1) {
			if (!(i0 < L0)) goto LA2;
			{
				int LOC5;
				LOC5 = (int)0;
				LOC5 = FD_ISSET((*s0)->data[i0], fd0);
				if (!(LOC5 == ((NI32) 0))) goto LA6;
				(*s0)->data[i0] = (*s0)->data[(NI)(L0 - ((NI) 1))];
				L0 -= ((NI) 1);
			}
			goto LA3;
			LA6: ;
			{
				i0 += ((NI) 1);
			}
			LA3: ;
		} LA2: ;
	}
	(*s0) = (TY587019*) setLengthSeq(&((*s0))->Sup, sizeof(int), ((NI) (L0)));
}

N_NIMCALL(NI, select_582277_466562973)(TY587019** readfds0, NI timeout0) {
	NI result0;
	struct timeval tv0;
	fd_set rd0;
	NI m0;
	result0 = (NI)0;
	tv0 = timevalfrommilliseconds_582022_466562973(timeout0);
	memset((void*)(&rd0), 0, sizeof(rd0));
	m0 = ((NI) 0);
	createfdset_582031_466562973((&rd0), (*readfds0), (&m0));
	{
		int LOC5;
		if (!!((timeout0 == ((NI) -1)))) goto LA3;
		LOC5 = (int)0;
		LOC5 = select(((int) ((NI)(m0 + ((NI) 1)))), (&rd0), NIM_NIL, NIM_NIL, (&tv0));
		result0 = ((NI) (LOC5));
	}
	goto LA1;
	LA3: ;
	{
		int LOC7;
		LOC7 = (int)0;
		LOC7 = select(((int) ((NI)(m0 + ((NI) 1)))), (&rd0), NIM_NIL, NIM_NIL, NIM_NIL);
		result0 = ((NI) (LOC7));
	}
	LA1: ;
	prunesocketset_582222_466562973(readfds0, (&rd0));
	return result0;
}

N_NIMCALL(void, close_578013_466562973)(int socket0) {
	int LOC1;
	LOC1 = (int)0;
	LOC1 = close(socket0);
}
NIM_EXTERNC N_NOINLINE(void, stdlib_nativesocketsInit000)(void) {
	osinvalidsocket_577650_466562973 = ((int) -1);
	nativeafinet_577651_466562973 = AF_INET;
	nativeafinet6_577652_466562973 = AF_INET6;
}

NIM_EXTERNC N_NOINLINE(void, stdlib_nativesocketsDatInit000)(void) {
static TNimNode* T466562973_2[3];
NI T466562973_4;
static char* NIM_CONST T466562973_3[3] = {
"AF_UNIX", 
"AF_INET", 
"AF_INET6"};
static TNimNode* T466562973_5[4];
NI T466562973_7;
static char* NIM_CONST T466562973_6[4] = {
"SOCK_STREAM", 
"SOCK_DGRAM", 
"SOCK_RAW", 
"SOCK_SEQPACKET"};
static TNimNode* T466562973_8[6];
NI T466562973_10;
static char* NIM_CONST T466562973_9[6] = {
"IPPROTO_TCP", 
"IPPROTO_UDP", 
"IPPROTO_IP", 
"IPPROTO_IPV6", 
"IPPROTO_RAW", 
"IPPROTO_ICMP"};
static TNimNode T466562973_0[16];
NTI577604.size = sizeof(Domain577604);
NTI577604.kind = 14;
NTI577604.base = 0;
NTI577604.flags = 3;
for (T466562973_4 = 0; T466562973_4 < 3; T466562973_4++) {
T466562973_0[T466562973_4+0].kind = 1;
T466562973_0[T466562973_4+0].offset = T466562973_4;
T466562973_0[T466562973_4+0].name = T466562973_3[T466562973_4];
T466562973_2[T466562973_4] = &T466562973_0[T466562973_4+0];
}
T466562973_0[0].offset = 0;
T466562973_0[1].offset = 2;
T466562973_0[2].offset = 23;
T466562973_0[3].len = 3; T466562973_0[3].kind = 2; T466562973_0[3].sons = &T466562973_2[0];
NTI577604.node = &T466562973_0[3];
NTI577604.flags = 1<<2;
NTI577606.size = sizeof(Socktype577606);
NTI577606.kind = 14;
NTI577606.base = 0;
NTI577606.flags = 3;
for (T466562973_7 = 0; T466562973_7 < 4; T466562973_7++) {
T466562973_0[T466562973_7+4].kind = 1;
T466562973_0[T466562973_7+4].offset = T466562973_7;
T466562973_0[T466562973_7+4].name = T466562973_6[T466562973_7];
T466562973_5[T466562973_7] = &T466562973_0[T466562973_7+4];
}
T466562973_0[4].offset = 1;
T466562973_0[5].offset = 2;
T466562973_0[6].offset = 3;
T466562973_0[7].offset = 5;
T466562973_0[8].len = 4; T466562973_0[8].kind = 2; T466562973_0[8].sons = &T466562973_5[0];
NTI577606.node = &T466562973_0[8];
NTI577606.flags = 1<<2;
NTI577608.size = sizeof(Protocol577608);
NTI577608.kind = 14;
NTI577608.base = 0;
NTI577608.flags = 3;
for (T466562973_10 = 0; T466562973_10 < 6; T466562973_10++) {
T466562973_0[T466562973_10+9].kind = 1;
T466562973_0[T466562973_10+9].offset = T466562973_10;
T466562973_0[T466562973_10+9].name = T466562973_9[T466562973_10];
T466562973_8[T466562973_10] = &T466562973_0[T466562973_10+9];
}
T466562973_0[9].offset = 6;
T466562973_0[10].offset = 17;
T466562973_0[11].offset = 18;
T466562973_0[12].offset = 19;
T466562973_0[13].offset = 20;
T466562973_0[14].offset = 21;
T466562973_0[15].len = 6; T466562973_0[15].kind = 2; T466562973_0[15].sons = &T466562973_8[0];
NTI577608.node = &T466562973_0[15];
NTI577608.flags = 1<<2;
}

