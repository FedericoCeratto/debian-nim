/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Baselexer213009 Baselexer213009;
typedef struct TNimObject TNimObject;
typedef struct Streamobj150418 Streamobj150418;
typedef NU8 Tnimkind3203;
typedef NU8 Tnimtypeflag3209Set;
typedef N_NIMCALL_PTR(void, TY3289) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3203 kind;
Tnimtypeflag3209Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
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
struct  Baselexer213009  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj150418* input;
NI linenumber;
NI sentinel;
NI linestart;
char136Set refillchars;
};
typedef N_NIMCALL_PTR(void, TY150419) (Streamobj150418* s0);
typedef N_NIMCALL_PTR(NIM_BOOL, TY150423) (Streamobj150418* s0);
typedef N_NIMCALL_PTR(void, TY150427) (Streamobj150418* s0, NI pos0);
typedef N_NIMCALL_PTR(NI, TY150432) (Streamobj150418* s0);
typedef N_NIMCALL_PTR(NI, TY150436) (Streamobj150418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(NI, TY150442) (Streamobj150418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY150448) (Streamobj150418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY150454) (Streamobj150418* s0);
struct  Streamobj150418  {
  TNimObject Sup;
TY150419 closeimpl;
TY150423 atendimpl;
TY150427 setpositionimpl;
TY150432 getpositionimpl;
TY150436 readdataimpl;
TY150442 peekdataimpl;
TY150448 writedataimpl;
TY150454 flushimpl;
};
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NOCONV(void*, alloc_7401_1689653243)(NI size0);
N_NIMCALL(void, fillbuffer_213201_1314243012)(Baselexer213009* L0);
N_NIMCALL(NI, readdata_150512_1780494535)(Streamobj150418* s0, void* buffer0, NI buflen0);
N_NOCONV(void*, realloc_7433_1689653243)(void* p0, NI newsize0);
N_NIMCALL(void, skiputf8bom_215201_1314243012)(Baselexer213009* L0);
N_NOCONV(void, dealloc_7448_1689653243)(void* p0);
N_NIMCALL(void, close_150471_1780494535)(Streamobj150418* s0);
N_NIMCALL(NI, fillbaselexer_214409_1314243012)(Baselexer213009* L0, NI pos0);
extern TNimType NTI3408; /* RootObj */
TNimType NTI213009; /* BaseLexer */
extern TNimType NTI104; /* int */
extern TNimType NTI140; /* cstring */
extern TNimType NTI150416; /* Stream */
extern TNimType NTI254404; /* set[char] */

N_NIMCALL(void, fillbuffer_213201_1314243012)(Baselexer213009* L0) {
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
		memmove(((void*) ((*L0).buf)), ((void*) ((&(*L0).buf[(NI)((*L0).sentinel + ((NI) 1))]))), ((NI) ((NI)(tocopy0 * ((NI) 1)))));
	}
	LA3: ;
	LOC5 = (NI)0;
	LOC5 = readdata_150512_1780494535((*L0).input, ((void*) ((&(*L0).buf[tocopy0]))), (NI)((NI)((*L0).sentinel + ((NI) 1)) * ((NI) 1)));
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
					LOC22 = realloc_7433_1689653243(((void*) ((*L0).buf)), ((NI) ((NI)((*L0).buflen * ((NI) 1)))));
					(*L0).buf = ((NCSTRING) (LOC22));
					LOC23 = (NI)0;
					LOC23 = readdata_150512_1780494535((*L0).input, ((void*) ((&(*L0).buf[oldbuflen0]))), (NI)(oldbuflen0 * ((NI) 1)));
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

N_NIMCALL(void, skiputf8bom_215201_1314243012)(Baselexer213009* L0) {
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

N_NIMCALL(void, open_215223_1314243012)(Baselexer213009* L0, Streamobj150418* input0, NI buflen0, char136Set refillchars0) {
	void* LOC1;
	unsureAsgnRef((void**) (&(*L0).input), input0);
	(*L0).bufpos = ((NI) 0);
	(*L0).buflen = buflen0;
	memcpy((void*)(*L0).refillchars, (NIM_CONST void*)refillchars0, 32);
	LOC1 = (void*)0;
	LOC1 = alloc_7401_1689653243(((NI) ((NI)(buflen0 * ((NI) 1)))));
	(*L0).buf = ((NCSTRING) (LOC1));
	(*L0).sentinel = (NI)(buflen0 - ((NI) 1));
	(*L0).linestart = ((NI) 0);
	(*L0).linenumber = ((NI) 1);
	fillbuffer_213201_1314243012(L0);
	skiputf8bom_215201_1314243012(L0);
}

N_NIMCALL(void, close_213022_1314243012)(Baselexer213009* L0) {
	dealloc_7448_1689653243(((void*) ((*L0).buf)));
	close_150471_1780494535((*L0).input);
}

N_NIMCALL(NI, fillbaselexer_214409_1314243012)(Baselexer213009* L0, NI pos0) {
	NI result0;
	result0 = (NI)0;
	{
		if (!(pos0 < (*L0).sentinel)) goto LA3;
		result0 = (NI)(pos0 + ((NI) 1));
	}
	goto LA1;
	LA3: ;
	{
		fillbuffer_213201_1314243012(L0);
		(*L0).bufpos = ((NI) 0);
		result0 = ((NI) 0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NI, handlecr_214601_1314243012)(Baselexer213009* L0, NI pos0) {
	NI result0;
	result0 = (NI)0;
	(*L0).linenumber += ((NI) 1);
	result0 = fillbaselexer_214409_1314243012(L0, pos0);
	{
		if (!((NU8)((*L0).buf[result0]) == (NU8)(10))) goto LA3;
		result0 = fillbaselexer_214409_1314243012(L0, result0);
	}
	LA3: ;
	(*L0).linestart = result0;
	return result0;
}

N_NIMCALL(NI, handlelf_214810_1314243012)(Baselexer213009* L0, NI pos0) {
	NI result0;
	result0 = (NI)0;
	(*L0).linenumber += ((NI) 1);
	result0 = fillbaselexer_214409_1314243012(L0, pos0);
	(*L0).linestart = result0;
	return result0;
}

N_NIMCALL(NI, getcolnumber_215802_1314243012)(Baselexer213009* L0, NI pos0) {
	NI result0;
	result0 = (NI)0;
	result0 = ((NI)(pos0 - (*L0).linestart) > 0? ((NI)(pos0 - (*L0).linestart)) : -((NI)(pos0 - (*L0).linestart)));
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit000)(void) {
static TNimNode* TMP2973[8];
static TNimNode TMP577[9];
NTI213009.size = sizeof(Baselexer213009);
NTI213009.kind = 17;
NTI213009.base = (&NTI3408);
TMP2973[0] = &TMP577[1];
TMP577[1].kind = 1;
TMP577[1].offset = offsetof(Baselexer213009, bufpos);
TMP577[1].typ = (&NTI104);
TMP577[1].name = "bufpos";
TMP2973[1] = &TMP577[2];
TMP577[2].kind = 1;
TMP577[2].offset = offsetof(Baselexer213009, buf);
TMP577[2].typ = (&NTI140);
TMP577[2].name = "buf";
TMP2973[2] = &TMP577[3];
TMP577[3].kind = 1;
TMP577[3].offset = offsetof(Baselexer213009, buflen);
TMP577[3].typ = (&NTI104);
TMP577[3].name = "bufLen";
TMP2973[3] = &TMP577[4];
TMP577[4].kind = 1;
TMP577[4].offset = offsetof(Baselexer213009, input);
TMP577[4].typ = (&NTI150416);
TMP577[4].name = "input";
TMP2973[4] = &TMP577[5];
TMP577[5].kind = 1;
TMP577[5].offset = offsetof(Baselexer213009, linenumber);
TMP577[5].typ = (&NTI104);
TMP577[5].name = "lineNumber";
TMP2973[5] = &TMP577[6];
TMP577[6].kind = 1;
TMP577[6].offset = offsetof(Baselexer213009, sentinel);
TMP577[6].typ = (&NTI104);
TMP577[6].name = "sentinel";
TMP2973[6] = &TMP577[7];
TMP577[7].kind = 1;
TMP577[7].offset = offsetof(Baselexer213009, linestart);
TMP577[7].typ = (&NTI104);
TMP577[7].name = "lineStart";
TMP2973[7] = &TMP577[8];
TMP577[8].kind = 1;
TMP577[8].offset = offsetof(Baselexer213009, refillchars);
TMP577[8].typ = (&NTI254404);
TMP577[8].name = "refillChars";
TMP577[0].len = 8; TMP577[0].kind = 2; TMP577[0].sons = &TMP2973[0];
NTI213009.node = &TMP577[0];
}

