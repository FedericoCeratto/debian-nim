/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tlineinfo184337 Tlineinfo184337;
typedef struct Tlinkedlist138016 Tlinkedlist138016;
typedef struct Tlistentry138010 Tlistentry138010;
typedef struct Stringtableobj143209 Stringtableobj143209;
typedef struct Win32finddata107213 Win32finddata107213;
typedef struct Filetime106255 Filetime106255;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq143207 Keyvaluepairseq143207;
typedef struct Keyvaluepair143205 Keyvaluepair143205;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo184337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tlinkedlist138016  {
Tlistentry138010* head;
Tlistentry138010* tail;
NI counter;
};
struct  Filetime106255  {
NI32 dwlowdatetime;
NI32 dwhighdatetime;
};
typedef NI16 TY107224[260];
typedef NI16 TY107227[14];
struct  Win32finddata107213  {
NI32 dwfileattributes;
Filetime106255 ftcreationtime;
Filetime106255 ftlastaccesstime;
Filetime106255 ftlastwritetime;
NI32 nfilesizehigh;
NI32 nfilesizelow;
NI32 dwreserved0;
NI32 dwreserved1;
TY107224 cfilename;
TY107227 calternatefilename;
};
typedef N_STDCALL_PTR(NI32, TY107236) (NI hfindfile, Win32finddata107213* lpfindfiledata);
typedef N_STDCALL_PTR(void, TY107402) (NI hfindfile);
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Stringtableobj143209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq143207* data;
NU8 mode;
};
struct Keyvaluepair143205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tlistentry138010  {
  TNimObject Sup;
Tlistentry138010* prev;
Tlistentry138010* next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Keyvaluepairseq143207 {
  TGenericSeq Sup;
  Keyvaluepair143205 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, contains_138213)(Tlinkedlist138016 list, NimStringDesc* data);
N_NIMCALL(void, prependstr_138413)(Tlinkedlist138016* list, NimStringDesc* data);
N_NIMCALL(void, addpathrec_199182)(NimStringDesc* dir, Tlineinfo184337 info);
N_NIMCALL(Stringtableobj143209*, nstnewStringTable)(NU8 mode);
N_NIMCALL(NI, findfirstfile_120416)(NimStringDesc* a, Win32finddata107213* b);
N_NIMCALL(NimStringDesc*, HEX2F_116874)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(NIM_BOOL, skipfinddata_120434)(Win32finddata107213* f);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, HEX24_83672)(NI16* s);
N_NIMCALL(void, addpackage_199084)(Stringtableobj143209* packages, NimStringDesc* p);
N_NIMCALL(NI, versionsplitpos_199008)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_79610, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_199034)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(NimStringDesc*, getordefault_143814)(Stringtableobj143209* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(Stringtableobj143209* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, addnimblepath_199108)(NimStringDesc* p, Tlineinfo184337 info);
N_NIMCALL(void, message_189095)(Tlineinfo184337 info, NU16 msg, NimStringDesc* arg);
STRING_LITERAL(TMP1807, "*", 1);
STRING_LITERAL(TMP1808, "head", 4);
extern Tlinkedlist138016 searchpaths_163125;
extern TY107236 Dl_107235;
extern TY107402 Dl_107401;
extern Tlinkedlist138016 lazypaths_163126;

N_NIMCALL(void, addpath_199003)(NimStringDesc* path, Tlineinfo184337 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_138213(searchpaths_163125, path);
		if (!!(LOC3)) goto LA4;
		prependstr_138413((&searchpaths_163125), path);
	}
	LA4: ;
}

static N_INLINE(NIM_BOOL, skipfinddata_120434)(Win32finddata107213* f) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC3;
	NIM_BOOL LOC5;
	result = 0;
	LOC1 = 0;
	LOC1 = (((NI) ((*f).cfilename[(((NI) 0))- 0])) == ((NI) 46));
	if (!(LOC1)) goto LA2;
	LOC3 = 0;
	LOC3 = (((NI) ((*f).cfilename[(((NI) 1))- 0])) == ((NI) 0));
	if (LOC3) goto LA4;
	LOC5 = 0;
	LOC5 = (((NI) ((*f).cfilename[(((NI) 1))- 0])) == ((NI) 46));
	if (!(LOC5)) goto LA6;
	LOC5 = (((NI) ((*f).cfilename[(((NI) 2))- 0])) == ((NI) 0));
	LA6: ;
	LOC3 = LOC5;
	LA4: ;
	LOC1 = LOC3;
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NI, versionsplitpos_199008)(NimStringDesc* s) {
	NI result;
	result = 0;
	result = (NI)((s ? s->Sup.len : 0) - ((NI) 2));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (((NI) 1) < result);
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(s->data[result])) >= ((NU8)(48)) && ((NU8)(s->data[result])) <= ((NU8)(57)) || ((NU8)(s->data[result])) == ((NU8)(46)));
			LA4: ;
			if (!LOC3) goto LA2;
			result -= ((NI) 1);
		} LA2: ;
	}
	{
		if (!!(((NU8)(s->data[result]) == (NU8)(45)))) goto LA7;
		result = (s ? s->Sup.len : 0);
	}
	LA7: ;
	return result;
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

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_199034)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
{	result = 0;
	{
		if (!eqStrings(a, ((NimStringDesc*) &TMP1808))) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	i = ((NI) 0);
	j = ((NI) 0);
	vera = ((NI) 0);
	verb = ((NI) 0);
	{
		while (1) {
			NI ii;
			NI jj;
			ii = npuParseInt(a, (&vera), i);
			jj = npuParseInt(b, (&verb), j);
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = (ii <= ((NI) 0));
				if (LOC9) goto LA10;
				LOC9 = (jj <= ((NI) 0));
				LA10: ;
				if (!LOC9) goto LA11;
				result = (((NI) 0) < jj);
				goto BeforeRet;
			}
			LA11: ;
			{
				if (!(vera < verb)) goto LA15;
				result = NIM_TRUE;
				goto BeforeRet;
			}
			goto LA13;
			LA15: ;
			{
				if (!(verb < vera)) goto LA18;
				result = NIM_FALSE;
				goto BeforeRet;
			}
			goto LA13;
			LA18: ;
			LA13: ;
			i += ii;
			j += jj;
			{
				if (!((NU8)(a->data[i]) == (NU8)(46))) goto LA22;
				i += ((NI) 1);
			}
			LA22: ;
			{
				if (!((NU8)(b->data[j]) == (NU8)(46))) goto LA26;
				j += ((NI) 1);
			}
			LA26: ;
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, addpackage_199084)(Stringtableobj143209* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	x = versionsplitpos_199008(p);
	name = copyStrLast(p, ((NI) 0), (NI)(x - ((NI) 1)));
	{
		NimStringDesc* version;
		if (!(x < (p ? p->Sup.len : 0))) goto LA3;
		version = copyStr(p, (NI)(x + ((NI) 1)));
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = 0;
			LOC7 = getordefault_143814(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_199034(LOC7, version);
			if (!LOC8) goto LA9;
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages, name, ((NimStringDesc*) &TMP1808));
	}
	LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(void, addnimblepath_199108)(NimStringDesc* p, Tlineinfo184337 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_138213(searchpaths_163125, p);
		if (!!(LOC3)) goto LA4;
		message_189095(info, ((NU16) 280), p);
		prependstr_138413((&lazypaths_163126), p);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_199182)(NimStringDesc* dir, Tlineinfo184337 info) {
	Stringtableobj143209* packages;
	NI pos;
	packages = nstnewStringTable(((NU8) 2));
	pos = (NI)((dir ? dir->Sup.len : 0) - ((NI) 1));
	{
		if (!(((NU8)(dir->data[pos])) == ((NU8)(92)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		pos += ((NI) 1);
	}
	LA3: ;
	{
		NU8 k_199208;
		NimStringDesc* p_199209;
		Win32finddata107213 f_199235;
		NI h_199237;
		NimStringDesc* LOC6;
		k_199208 = 0;
		p_199209 = 0;
		memset((void*)(&f_199235), 0, sizeof(f_199235));
		LOC6 = 0;
		LOC6 = HEX2F_116874(dir, ((NimStringDesc*) &TMP1807));
		h_199237 = findfirstfile_120416(LOC6, (&f_199235));
		{
			if (!!((h_199237 == ((NI) -1)))) goto LA9;
			{
				while (1) {
					NU8 k_199239;
					k_199239 = ((NU8) 0);
					{
						NIM_BOOL LOC15;
						NimStringDesc* xx_199241;
						LOC15 = 0;
						LOC15 = skipfinddata_120434((&f_199235));
						if (!!(LOC15)) goto LA16;
						{
							if (!!(((NI32)(f_199235.dwfileattributes & ((NI32) 16)) == ((NI32) 0)))) goto LA20;
							k_199239 = ((NU8) 2);
						}
						LA20: ;
						{
							if (!!(((NI32)(f_199235.dwfileattributes & ((NI32) 1024)) == ((NI32) 0)))) goto LA24;
							k_199239 = (NU8)(k_199239 + ((NI) 1));
						}
						LA24: ;
						{
							NimStringDesc* LOC30;
							if (!NIM_FALSE) goto LA28;
							LOC30 = 0;
							LOC30 = HEX24_83672(((NI16*) ((&f_199235.cfilename[(((NI) 0))- 0]))));
							xx_199241 = nosextractFilename(LOC30);
						}
						goto LA26;
						LA28: ;
						{
							NimStringDesc* LOC32;
							NimStringDesc* LOC33;
							LOC32 = 0;
							LOC32 = HEX24_83672(((NI16*) ((&f_199235.cfilename[(((NI) 0))- 0]))));
							LOC33 = 0;
							LOC33 = nosextractFilename(LOC32);
							xx_199241 = HEX2F_116874(dir, LOC33);
						}
						LA26: ;
						k_199208 = k_199239;
						p_199209 = xx_199241;
						{
							NIM_BOOL LOC36;
							LOC36 = 0;
							LOC36 = (k_199208 == ((NU8) 2));
							if (!(LOC36)) goto LA37;
							LOC36 = !(((NU8)(p_199209->data[pos]) == (NU8)(46)));
							LA37: ;
							if (!LOC36) goto LA38;
							addpackage_199084(packages, p_199209);
						}
						LA38: ;
					}
					LA16: ;
					{
						NI32 LOC42;
						LOC42 = 0;
						LOC42 = Dl_107235(h_199237, (&f_199235));
						if (!(LOC42 == ((NI32) 0))) goto LA43;
						goto LA11;
					}
					LA43: ;
				}
			} LA11: ;
			Dl_107401(h_199237);
		}
		LA9: ;
	}
	{
		NimStringDesc* p_199219;
		p_199219 = 0;
		{
			NimStringDesc* key_199249;
			NimStringDesc* val_199251;
			key_199249 = 0;
			val_199251 = 0;
			{
				NI h_199253;
				NI HEX3Atmp_199255;
				NI res_199257;
				h_199253 = 0;
				HEX3Atmp_199255 = 0;
				HEX3Atmp_199255 = ((*packages).data ? ((*packages).data->Sup.len-1) : -1);
				res_199257 = ((NI) 0);
				{
					while (1) {
						if (!(res_199257 <= HEX3Atmp_199255)) goto LA49;
						h_199253 = res_199257;
						{
							NimStringDesc* res_199261;
							if (!!((*packages).data->data[h_199253].Field0 == 0)) goto LA52;
							key_199249 = (*packages).data->data[h_199253].Field0;
							val_199251 = (*packages).data->data[h_199253].Field1;
							{
								if (!eqStrings(val_199251, ((NimStringDesc*) &TMP1808))) goto LA56;
								res_199261 = key_199249;
							}
							goto LA54;
							LA56: ;
							{
								NimStringDesc* LOC59;
								LOC59 = 0;
								LOC59 = rawNewString(key_199249->Sup.len + val_199251->Sup.len + 1);
appendString(LOC59, key_199249);
appendChar(LOC59, 45);
appendString(LOC59, val_199251);
								res_199261 = LOC59;
							}
							LA54: ;
							p_199219 = res_199261;
							addnimblepath_199108(p_199219, info);
						}
						LA52: ;
						res_199257 += ((NI) 1);
					} LA49: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_199262)(NimStringDesc* path, Tlineinfo184337 info) {
	addpathrec_199182(path, info);
	addnimblepath_199108(path, info);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit000)(void) {
}

