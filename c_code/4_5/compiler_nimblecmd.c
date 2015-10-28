/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <dirent.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tlineinfo189352 Tlineinfo189352;
typedef struct Tlinkedlist140028 Tlinkedlist140028;
typedef struct Tlistentry140022 Tlistentry140022;
typedef struct Stringtableobj145212 Stringtableobj145212;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq145210 Keyvaluepairseq145210;
typedef struct Keyvaluepair145208 Keyvaluepair145208;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo189352  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tlinkedlist140028  {
Tlistentry140022* head;
Tlistentry140022* tail;
NI counter;
};
typedef NIM_CHAR TY113383[256];
typedef N_NIMCALL_PTR(void, TY3889) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3894) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3889 marker;
TY3894 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Stringtableobj145212  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq145210* data;
NU8 mode;
};
struct Keyvaluepair145208 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tlistentry140022  {
  TNimObject Sup;
Tlistentry140022* prev;
Tlistentry140022* next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Keyvaluepairseq145210 {
  TGenericSeq Sup;
  Keyvaluepair145208 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, contains_140219)(Tlinkedlist140028 list, NimStringDesc* data);
N_NIMCALL(void, prependstr_140419)(Tlinkedlist140028* list, NimStringDesc* data);
N_NIMCALL(void, addpathrec_206258)(NimStringDesc* dir, Tlineinfo189352 info);
N_NIMCALL(Stringtableobj145212*, nstnewStringTable)(NU8 mode);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, HEX2F_123481)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, addpackage_206126)(Stringtableobj145212* packages, NimStringDesc* p);
N_NIMCALL(NI, versionsplitpos_206023)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_81016, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_206064)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(NimStringDesc*, getordefault_146020)(Stringtableobj145212* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(Stringtableobj145212* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, addnimblepath_206175)(NimStringDesc* p, Tlineinfo189352 info);
N_NIMCALL(void, message_195161)(Tlineinfo189352 info, NU16 msg, NimStringDesc* arg);
STRING_LITERAL(TMP1761, ".", 1);
STRING_LITERAL(TMP1762, "..", 2);
STRING_LITERAL(TMP1763, "head", 4);
extern Tlinkedlist140028 searchpaths_166136;
extern Tlinkedlist140028 lazypaths_166137;

N_NIMCALL(void, addpath_206012)(NimStringDesc* path, Tlineinfo189352 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_140219(searchpaths_166136, path);
		if (!!(LOC3)) goto LA4;
		prependstr_140419((&searchpaths_166136), path);
	}
	LA4: ;
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

N_NIMCALL(NI, versionsplitpos_206023)(NimStringDesc* s) {
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

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_206064)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
{	result = 0;
	{
		if (!eqStrings(a, ((NimStringDesc*) &TMP1763))) goto LA3;
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

N_NIMCALL(void, addpackage_206126)(Stringtableobj145212* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	x = versionsplitpos_206023(p);
	name = copyStrLast(p, ((NI) 0), (NI)(x - ((NI) 1)));
	{
		NimStringDesc* version;
		if (!(x < (p ? p->Sup.len : 0))) goto LA3;
		version = copyStr(p, (NI)(x + ((NI) 1)));
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = 0;
			LOC7 = getordefault_146020(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_206064(LOC7, version);
			if (!LOC8) goto LA9;
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages, name, ((NimStringDesc*) &TMP1763));
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

N_NIMCALL(void, addnimblepath_206175)(NimStringDesc* p, Tlineinfo189352 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_140219(searchpaths_166136, p);
		if (!!(LOC3)) goto LA4;
		message_195161(info, ((NU16) 280), p);
		prependstr_140419((&lazypaths_166137), p);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_206258)(NimStringDesc* dir, Tlineinfo189352 info) {
	Stringtableobj145212* packages;
	NI pos;
	packages = nstnewStringTable(((NU8) 2));
	pos = (NI)((dir ? dir->Sup.len : 0) - ((NI) 1));
	{
		if (!(((NU8)(dir->data[pos])) == ((NU8)(47)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		pos += ((NI) 1);
	}
	LA3: ;
	{
		NU8 k_206284;
		NimStringDesc* p_206285;
		DIR* d_206299;
		k_206284 = 0;
		p_206285 = 0;
		d_206299 = opendir(dir->data);
		{
			int LOC47;
			if (!!((d_206299 == NIM_NIL))) goto LA8;
			{
				while (1) {
					struct dirent* x_206301;
					NimStringDesc* y_206303;
					x_206301 = readdir(d_206299);
					{
						if (!(x_206301 == NIM_NIL)) goto LA14;
						goto LA10;
					}
					LA14: ;
					y_206303 = cstrToNimstr(((NCSTRING) ((*x_206301).d_name)));
					{
						NIM_BOOL LOC18;
						struct stat s_206305;
						NU8 k_206307;
						LOC18 = 0;
						LOC18 = !(eqStrings(y_206303, ((NimStringDesc*) &TMP1761)));
						if (!(LOC18)) goto LA19;
						LOC18 = !(eqStrings(y_206303, ((NimStringDesc*) &TMP1762)));
						LA19: ;
						if (!LOC18) goto LA20;
						memset((void*)(&s_206305), 0, sizeof(s_206305));
						{
							if (!NIM_TRUE) goto LA24;
							y_206303 = HEX2F_123481(dir, y_206303);
						}
						LA24: ;
						k_206307 = ((NU8) 0);
						{
							int LOC28;
							LOC28 = 0;
							LOC28 = lstat(y_206303->data, (&s_206305));
							if (!(LOC28 < ((NI32) 0))) goto LA29;
							goto LA10;
						}
						LA29: ;
						{
							NIM_BOOL LOC33;
							LOC33 = 0;
							LOC33 = S_ISDIR(s_206305.st_mode);
							if (!LOC33) goto LA34;
							k_206307 = ((NU8) 2);
						}
						LA34: ;
						{
							NIM_BOOL LOC38;
							LOC38 = 0;
							LOC38 = S_ISLNK(s_206305.st_mode);
							if (!LOC38) goto LA39;
							k_206307 = (NU8)(k_206307 + ((NI) 1));
						}
						LA39: ;
						k_206284 = k_206307;
						p_206285 = y_206303;
						{
							NIM_BOOL LOC43;
							LOC43 = 0;
							LOC43 = (k_206284 == ((NU8) 2));
							if (!(LOC43)) goto LA44;
							LOC43 = !(((NU8)(p_206285->data[pos]) == (NU8)(46)));
							LA44: ;
							if (!LOC43) goto LA45;
							addpackage_206126(packages, p_206285);
						}
						LA45: ;
					}
					LA20: ;
				}
			} LA10: ;
			LOC47 = 0;
			LOC47 = closedir(d_206299);
		}
		LA8: ;
	}
	{
		NimStringDesc* p_206295;
		p_206295 = 0;
		{
			NimStringDesc* key_206313;
			NimStringDesc* val_206315;
			key_206313 = 0;
			val_206315 = 0;
			{
				NI h_206317;
				NI HEX3Atmp_206319;
				NI res_206321;
				h_206317 = 0;
				HEX3Atmp_206319 = 0;
				HEX3Atmp_206319 = ((*packages).data ? ((*packages).data->Sup.len-1) : -1);
				res_206321 = ((NI) 0);
				{
					while (1) {
						if (!(res_206321 <= HEX3Atmp_206319)) goto LA52;
						h_206317 = res_206321;
						{
							NimStringDesc* res_206325;
							if (!!((*packages).data->data[h_206317].Field0 == 0)) goto LA55;
							key_206313 = (*packages).data->data[h_206317].Field0;
							val_206315 = (*packages).data->data[h_206317].Field1;
							{
								if (!eqStrings(val_206315, ((NimStringDesc*) &TMP1763))) goto LA59;
								res_206325 = key_206313;
							}
							goto LA57;
							LA59: ;
							{
								NimStringDesc* LOC62;
								LOC62 = 0;
								LOC62 = rawNewString(key_206313->Sup.len + val_206315->Sup.len + 1);
appendString(LOC62, key_206313);
appendChar(LOC62, 45);
appendString(LOC62, val_206315);
								res_206325 = LOC62;
							}
							LA57: ;
							p_206295 = res_206325;
							addnimblepath_206175(p_206295, info);
						}
						LA55: ;
						res_206321 += ((NI) 1);
					} LA52: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_206356)(NimStringDesc* path, Tlineinfo189352 info) {
	addpathrec_206258(path, info);
	addnimblepath_206175(path, info);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit000)(void) {
}
