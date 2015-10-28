/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tlineinfo192352 Tlineinfo192352;
typedef struct Tlinkedlist143028 Tlinkedlist143028;
typedef struct Tlistentry143022 Tlistentry143022;
typedef struct Stringtableobj148212 Stringtableobj148212;
typedef struct Win32finddata112219 Win32finddata112219;
typedef struct Filetime111273 Filetime111273;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq148210 Keyvaluepairseq148210;
typedef struct Keyvaluepair148208 Keyvaluepair148208;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo192352  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tlinkedlist143028  {
Tlistentry143022* head;
Tlistentry143022* tail;
NI counter;
};
struct  Filetime111273  {
NI32 dwlowdatetime;
NI32 dwhighdatetime;
};
typedef NI16 TY112230[260];
typedef NI16 TY112234[14];
struct  Win32finddata112219  {
NI32 dwfileattributes;
Filetime111273 ftcreationtime;
Filetime111273 ftlastaccesstime;
Filetime111273 ftlastwritetime;
NI32 nfilesizehigh;
NI32 nfilesizelow;
NI32 dwreserved0;
NI32 dwreserved1;
TY112230 cfilename;
TY112234 calternatefilename;
};
typedef N_STDCALL_PTR(NI32, TY112249) (NI hfindfile, Win32finddata112219* lpfindfiledata);
typedef N_STDCALL_PTR(void, TY112405) (NI hfindfile);
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
struct  Stringtableobj148212  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq148210* data;
NU8 mode;
};
struct Keyvaluepair148208 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tlistentry143022  {
  TNimObject Sup;
Tlistentry143022* prev;
Tlistentry143022* next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Keyvaluepairseq148210 {
  TGenericSeq Sup;
  Keyvaluepair148208 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, contains_143219)(Tlinkedlist143028* list, NimStringDesc* data);
N_NIMCALL(void, prependstr_143419)(Tlinkedlist143028* list, NimStringDesc* data);
N_NIMCALL(void, addpathrec_209258)(NimStringDesc* dir, Tlineinfo192352 info);
N_NIMCALL(Stringtableobj148212*, nstnewStringTable)(NU8 mode);
N_NIMCALL(NI, findfirstfile_125416)(NimStringDesc* a, Win32finddata112219* b);
N_NIMCALL(NimStringDesc*, HEX2F_121890)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(NIM_BOOL, skipfinddata_125437)(Win32finddata112219* f);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, HEX24_85487)(NI16* s);
N_NIMCALL(void, addpackage_209126)(Stringtableobj148212* packages, NimStringDesc* p);
N_NIMCALL(NI, versionsplitpos_209023)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_81016, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_209064)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(NimStringDesc*, getordefault_149020)(Stringtableobj148212* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(Stringtableobj148212* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, addnimblepath_209175)(NimStringDesc* p, Tlineinfo192352 info);
N_NIMCALL(void, message_198161)(Tlineinfo192352 info, NU16 msg, NimStringDesc* arg);
STRING_LITERAL(TMP1771, "*", 1);
STRING_LITERAL(TMP1772, "head", 4);
extern Tlinkedlist143028 searchpaths_169136;
extern TY112249 Dl_112248;
extern TY112405 Dl_112404;
extern Tlinkedlist143028 lazypaths_169137;

N_NIMCALL(void, addpath_209012)(NimStringDesc* path, Tlineinfo192352 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_143219((&searchpaths_169136), path);
		if (!!(LOC3)) goto LA4;
		prependstr_143419((&searchpaths_169136), path);
	}
	LA4: ;
}

static N_INLINE(NIM_BOOL, skipfinddata_125437)(Win32finddata112219* f) {
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

N_NIMCALL(NI, versionsplitpos_209023)(NimStringDesc* s) {
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

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_209064)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
{	result = 0;
	{
		if (!eqStrings(a, ((NimStringDesc*) &TMP1772))) goto LA3;
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

N_NIMCALL(void, addpackage_209126)(Stringtableobj148212* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	x = versionsplitpos_209023(p);
	name = copyStrLast(p, ((NI) 0), (NI)(x - ((NI) 1)));
	{
		NimStringDesc* version;
		if (!(x < (p ? p->Sup.len : 0))) goto LA3;
		version = copyStr(p, (NI)(x + ((NI) 1)));
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = 0;
			LOC7 = getordefault_149020(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_209064(LOC7, version);
			if (!LOC8) goto LA9;
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages, name, ((NimStringDesc*) &TMP1772));
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

N_NIMCALL(void, addnimblepath_209175)(NimStringDesc* p, Tlineinfo192352 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_143219((&searchpaths_169136), p);
		if (!!(LOC3)) goto LA4;
		message_198161(info, ((NU16) 280), p);
		prependstr_143419((&lazypaths_169137), p);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_209258)(NimStringDesc* dir, Tlineinfo192352 info) {
	Stringtableobj148212* packages;
	NI pos;
	packages = nstnewStringTable(((NU8) 2));
	pos = (NI)((dir ? dir->Sup.len : 0) - ((NI) 1));
	{
		if (!(((NU8)(dir->data[pos])) == ((NU8)(92)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		pos += ((NI) 1);
	}
	LA3: ;
	{
		NU8 k_209284;
		NimStringDesc* p_209285;
		Win32finddata112219 f_209299;
		NI h_209301;
		NimStringDesc* LOC6;
		k_209284 = 0;
		p_209285 = 0;
		memset((void*)(&f_209299), 0, sizeof(f_209299));
		LOC6 = 0;
		LOC6 = HEX2F_121890(dir, ((NimStringDesc*) &TMP1771));
		h_209301 = findfirstfile_125416(LOC6, (&f_209299));
		{
			if (!!((h_209301 == ((NI) -1)))) goto LA9;
			{
				while (1) {
					NU8 k_209303;
					k_209303 = ((NU8) 0);
					{
						NIM_BOOL LOC15;
						NimStringDesc* xx_209305;
						LOC15 = 0;
						LOC15 = skipfinddata_125437((&f_209299));
						if (!!(LOC15)) goto LA16;
						{
							if (!!(((NI32)(f_209299.dwfileattributes & ((NI32) 16)) == ((NI32) 0)))) goto LA20;
							k_209303 = ((NU8) 2);
						}
						LA20: ;
						{
							if (!!(((NI32)(f_209299.dwfileattributes & ((NI32) 1024)) == ((NI32) 0)))) goto LA24;
							k_209303 = (NU8)(k_209303 + ((NI) 1));
						}
						LA24: ;
						{
							NimStringDesc* LOC30;
							if (!NIM_FALSE) goto LA28;
							LOC30 = 0;
							LOC30 = HEX24_85487(((NI16*) ((&f_209299.cfilename[(((NI) 0))- 0]))));
							xx_209305 = nosextractFilename(LOC30);
						}
						goto LA26;
						LA28: ;
						{
							NimStringDesc* LOC32;
							NimStringDesc* LOC33;
							LOC32 = 0;
							LOC32 = HEX24_85487(((NI16*) ((&f_209299.cfilename[(((NI) 0))- 0]))));
							LOC33 = 0;
							LOC33 = nosextractFilename(LOC32);
							xx_209305 = HEX2F_121890(dir, LOC33);
						}
						LA26: ;
						k_209284 = k_209303;
						p_209285 = xx_209305;
						{
							NIM_BOOL LOC36;
							LOC36 = 0;
							LOC36 = (k_209284 == ((NU8) 2));
							if (!(LOC36)) goto LA37;
							LOC36 = !(((NU8)(p_209285->data[pos]) == (NU8)(46)));
							LA37: ;
							if (!LOC36) goto LA38;
							addpackage_209126(packages, p_209285);
						}
						LA38: ;
					}
					LA16: ;
					{
						NI32 LOC42;
						LOC42 = 0;
						LOC42 = Dl_112248(h_209301, (&f_209299));
						if (!(LOC42 == ((NI32) 0))) goto LA43;
						goto LA11;
					}
					LA43: ;
				}
			} LA11: ;
			Dl_112404(h_209301);
		}
		LA9: ;
	}
	{
		NimStringDesc* p_209295;
		p_209295 = 0;
		{
			NimStringDesc* key_209313;
			NimStringDesc* val_209315;
			key_209313 = 0;
			val_209315 = 0;
			{
				NI h_209317;
				NI HEX3Atmp_209319;
				NI res_209321;
				h_209317 = 0;
				HEX3Atmp_209319 = 0;
				HEX3Atmp_209319 = ((*packages).data ? ((*packages).data->Sup.len-1) : -1);
				res_209321 = ((NI) 0);
				{
					while (1) {
						if (!(res_209321 <= HEX3Atmp_209319)) goto LA49;
						h_209317 = res_209321;
						{
							NimStringDesc* res_209325;
							if (!!((*packages).data->data[h_209317].Field0 == 0)) goto LA52;
							key_209313 = (*packages).data->data[h_209317].Field0;
							val_209315 = (*packages).data->data[h_209317].Field1;
							{
								if (!eqStrings(val_209315, ((NimStringDesc*) &TMP1772))) goto LA56;
								res_209325 = key_209313;
							}
							goto LA54;
							LA56: ;
							{
								NimStringDesc* LOC59;
								LOC59 = 0;
								LOC59 = rawNewString(key_209313->Sup.len + val_209315->Sup.len + 1);
appendString(LOC59, key_209313);
appendChar(LOC59, 45);
appendString(LOC59, val_209315);
								res_209325 = LOC59;
							}
							LA54: ;
							p_209295 = res_209325;
							addnimblepath_209175(p_209295, info);
						}
						LA52: ;
						res_209321 += ((NI) 1);
					} LA49: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_209356)(NimStringDesc* path, Tlineinfo192352 info) {
	addpathrec_209258(path, info);
	addnimblepath_209175(path, info);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit000)(void) {
}
