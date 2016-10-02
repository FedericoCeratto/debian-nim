/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Baselexer220007 Baselexer220007;
typedef struct TNimObject TNimObject;
typedef struct Streamobj157818 Streamobj157818;
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
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 char136Set[32];
struct  Baselexer220007  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj157818* input;
NI linenumber;
NI sentinel;
NI linestart;
char136Set refillchars;
};
typedef N_NIMCALL_PTR(void, TY157819) (Streamobj157818* s0);
typedef N_NIMCALL_PTR(NIM_BOOL, TY157823) (Streamobj157818* s0);
typedef N_NIMCALL_PTR(void, TY157827) (Streamobj157818* s0, NI pos0);
typedef N_NIMCALL_PTR(NI, TY157832) (Streamobj157818* s0);
typedef N_NIMCALL_PTR(NI, TY157836) (Streamobj157818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(NI, TY157842) (Streamobj157818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY157848) (Streamobj157818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY157854) (Streamobj157818* s0);
struct  Streamobj157818  {
  TNimObject Sup;
TY157819 closeimpl;
TY157823 atendimpl;
TY157827 setpositionimpl;
TY157832 getpositionimpl;
TY157836 readdataimpl;
TY157842 peekdataimpl;
TY157848 writedataimpl;
TY157854 flushimpl;
};
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NOCONV(void*, alloc_7801_1689653243)(NI size0);
N_NIMCALL(void, fillbuffer_220201_1314243012)(Baselexer220007* L0);
static N_INLINE(void, movemem_7490_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NI, readdata_157914_1780494535)(Streamobj157818* s0, void* buffer0, NI buflen0);
N_NOCONV(void*, realloc_7833_1689653243)(void* p0, NI newsize0);
N_NIMCALL(void, skiputf8bom_222201_1314243012)(Baselexer220007* L0);
N_NOCONV(void, dealloc_7848_1689653243)(void* p0);
N_NIMCALL(void, close_157873_1780494535)(Streamobj157818* s0);
N_NIMCALL(NI, fillbaselexer_221409_1314243012)(Baselexer220007* L0, NI pos0);
extern TNimType NTI3608; /* RootObj */
TNimType NTI220007; /* BaseLexer */
extern TNimType NTI104; /* int */
extern TNimType NTI140; /* cstring */
extern TNimType NTI157816; /* Stream */
extern TNimType NTI284404; /* set[char] */

static N_INLINE(void, movemem_7490_1689653243)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memmove(dest0, source0, ((size_t) (size0)));
}

N_NIMCALL(void, fillbuffer_220201_1314243012)(Baselexer220007* L0) {
	NI charsread0;
	NI tocopy0;
	NI s0;
	NI oldbuflen0;
	NI LOC5;
	charsread0 = (NI)0;
	tocopy0 = (NI)0;
	s0 = (NI)0;
	oldbuflen0 = (NI)0;
	tocopy0 = (NI)((NI)((*L0).buflen - (*L0).sentinel) - ((NI) 1));
	{
		if (!(((NI) 0) < tocopy0)) goto LA3;
		movemem_7490_1689653243(((void*) ((*L0).buf)), ((void*) ((&(*L0).buf[(NI)((*L0).sentinel + ((NI) 1))]))), ((NI) ((NI)(tocopy0 * ((NI) 1)))));
	}
	LA3: ;
	LOC5 = (NI)0;
	LOC5 = readdata_157914_1780494535((*L0).input, ((void*) ((&(*L0).buf[tocopy0]))), (NI)((NI)((*L0).sentinel + ((NI) 1)) * ((NI) 1)));
	charsread0 = (NI)(LOC5 / ((NI) 1));
	s0 = (NI)(tocopy0 + charsread0);
	{
		if (!(charsread0 < (NI)((*L0).sentinel + ((NI) 1)))) goto LA8;
		(*L0).buf[s0] = 0;
		(*L0).sentinel = s0;
	}
	goto LA6;
	LA8: ;
	{
		s0 -= ((NI) 1);
		{
			while (1) {
				{
					while (1) {
						NIM_BOOL LOC15;
						LOC15 = (NIM_BOOL)0;
						LOC15 = (((NI) 0) <= s0);
						if (!(LOC15)) goto LA16;
						LOC15 = !((((*L0).refillchars[(NU)(((NU8)((*L0).buf[s0])))>>3] &(1U<<((NU)(((NU8)((*L0).buf[s0])))&7U)))!=0));
						LA16: ;
						if (!LOC15) goto LA14;
						s0 -= ((NI) 1);
					} LA14: ;
				}
				{
					if (!(((NI) 0) <= s0)) goto LA19;
					(*L0).sentinel = s0;
					goto LA11;
				}
				goto LA17;
				LA19: ;
				{
					void* LOC22;
					NI LOC23;
					oldbuflen0 = (*L0).buflen;
					(*L0).buflen = (NI)((*L0).buflen * ((NI) 2));
					LOC22 = (void*)0;
					LOC22 = realloc_7833_1689653243(((void*) ((*L0).buf)), ((NI) ((NI)((*L0).buflen * ((NI) 1)))));
					(*L0).buf = ((NCSTRING) (LOC22));
					LOC23 = (NI)0;
					LOC23 = readdata_157914_1780494535((*L0).input, ((void*) ((&(*L0).buf[oldbuflen0]))), (NI)(oldbuflen0 * ((NI) 1)));
					charsread0 = (NI)(LOC23 / ((NI) 1));
					{
						if (!(charsread0 < oldbuflen0)) goto LA26;
						(*L0).buf[(NI)(oldbuflen0 + charsread0)] = 0;
						(*L0).sentinel = (NI)(oldbuflen0 + charsread0);
						goto LA11;
					}
					LA26: ;
					s0 = (NI)((*L0).buflen - ((NI) 1));
				}
				LA17: ;
			}
		} LA11: ;
	}
	LA6: ;
}

N_NIMCALL(void, skiputf8bom_222201_1314243012)(Baselexer220007* L0) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = (NIM_BOOL)0;
		LOC4 = (NIM_BOOL)0;
		LOC4 = ((NU8)((*L0).buf[((NI) 0)]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)((*L0).buf[((NI) 1)]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)((*L0).buf[((NI) 2)]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		(*L0).bufpos += ((NI) 3);
		(*L0).linestart += ((NI) 3);
	}
	LA7: ;
}

N_NIMCALL(void, open_222223_1314243012)(Baselexer220007* L0, Streamobj157818* input0, NI buflen0, char136Set refillchars0) {
	void* LOC1;
	unsureAsgnRef((void**) (&(*L0).input), input0);
	(*L0).bufpos = ((NI) 0);
	(*L0).buflen = buflen0;
	memcpy((void*)(*L0).refillchars, (NIM_CONST void*)refillchars0, 32);
	LOC1 = (void*)0;
	LOC1 = alloc_7801_1689653243(((NI) ((NI)(buflen0 * ((NI) 1)))));
	(*L0).buf = ((NCSTRING) (LOC1));
	(*L0).sentinel = (NI)(buflen0 - ((NI) 1));
	(*L0).linestart = ((NI) 0);
	(*L0).linenumber = ((NI) 1);
	fillbuffer_220201_1314243012(L0);
	skiputf8bom_222201_1314243012(L0);
}

N_NIMCALL(void, close_220021_1314243012)(Baselexer220007* L0) {
	dealloc_7848_1689653243(((void*) ((*L0).buf)));
	close_157873_1780494535((*L0).input);
}

N_NIMCALL(NI, fillbaselexer_221409_1314243012)(Baselexer220007* L0, NI pos0) {
	NI result0;
	result0 = (NI)0;
	{
		if (!(pos0 < (*L0).sentinel)) goto LA3;
		result0 = (NI)(pos0 + ((NI) 1));
	}
	goto LA1;
	LA3: ;
	{
		fillbuffer_220201_1314243012(L0);
		(*L0).bufpos = ((NI) 0);
		result0 = ((NI) 0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NI, handlecr_221601_1314243012)(Baselexer220007* L0, NI pos0) {
	NI result0;
	result0 = (NI)0;
	(*L0).linenumber += ((NI) 1);
	result0 = fillbaselexer_221409_1314243012(L0, pos0);
	{
		if (!((NU8)((*L0).buf[result0]) == (NU8)(10))) goto LA3;
		result0 = fillbaselexer_221409_1314243012(L0, result0);
	}
	LA3: ;
	(*L0).linestart = result0;
	return result0;
}

N_NIMCALL(NI, handlelf_221810_1314243012)(Baselexer220007* L0, NI pos0) {
	NI result0;
	result0 = (NI)0;
	(*L0).linenumber += ((NI) 1);
	result0 = fillbaselexer_221409_1314243012(L0, pos0);
	(*L0).linestart = result0;
	return result0;
}

N_NIMCALL(NI, getcolnumber_222802_1314243012)(Baselexer220007* L0, NI pos0) {
	NI result0;
	result0 = (NI)0;
	result0 = ((NI)(pos0 - (*L0).linestart) > 0? ((NI)(pos0 - (*L0).linestart)) : -((NI)(pos0 - (*L0).linestart)));
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit000)(void) {
static TNimNode* T1314243012_2[8];
static TNimNode T1314243012_0[9];
NTI220007.size = sizeof(Baselexer220007);
NTI220007.kind = 17;
NTI220007.base = (&NTI3608);
T1314243012_2[0] = &T1314243012_0[1];
T1314243012_0[1].kind = 1;
T1314243012_0[1].offset = offsetof(Baselexer220007, bufpos);
T1314243012_0[1].typ = (&NTI104);
T1314243012_0[1].name = "bufpos";
T1314243012_2[1] = &T1314243012_0[2];
T1314243012_0[2].kind = 1;
T1314243012_0[2].offset = offsetof(Baselexer220007, buf);
T1314243012_0[2].typ = (&NTI140);
T1314243012_0[2].name = "buf";
T1314243012_2[2] = &T1314243012_0[3];
T1314243012_0[3].kind = 1;
T1314243012_0[3].offset = offsetof(Baselexer220007, buflen);
T1314243012_0[3].typ = (&NTI104);
T1314243012_0[3].name = "bufLen";
T1314243012_2[3] = &T1314243012_0[4];
T1314243012_0[4].kind = 1;
T1314243012_0[4].offset = offsetof(Baselexer220007, input);
T1314243012_0[4].typ = (&NTI157816);
T1314243012_0[4].name = "input";
T1314243012_2[4] = &T1314243012_0[5];
T1314243012_0[5].kind = 1;
T1314243012_0[5].offset = offsetof(Baselexer220007, linenumber);
T1314243012_0[5].typ = (&NTI104);
T1314243012_0[5].name = "lineNumber";
T1314243012_2[5] = &T1314243012_0[6];
T1314243012_0[6].kind = 1;
T1314243012_0[6].offset = offsetof(Baselexer220007, sentinel);
T1314243012_0[6].typ = (&NTI104);
T1314243012_0[6].name = "sentinel";
T1314243012_2[6] = &T1314243012_0[7];
T1314243012_0[7].kind = 1;
T1314243012_0[7].offset = offsetof(Baselexer220007, linestart);
T1314243012_0[7].typ = (&NTI104);
T1314243012_0[7].name = "lineStart";
T1314243012_2[7] = &T1314243012_0[8];
T1314243012_0[8].kind = 1;
T1314243012_0[8].offset = offsetof(Baselexer220007, refillchars);
T1314243012_0[8].typ = (&NTI284404);
T1314243012_0[8].name = "refillChars";
T1314243012_0[0].len = 8; T1314243012_0[0].kind = 2; T1314243012_0[0].sons = &T1314243012_2[0];
NTI220007.node = &T1314243012_0[0];
}

