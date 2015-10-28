/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <dirent.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tlineinfo190352 Tlineinfo190352;
typedef struct Tlinkedlist141028 Tlinkedlist141028;
typedef struct Tlistentry141022 Tlistentry141022;
typedef struct Stringtableobj146212 Stringtableobj146212;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq146210 Keyvaluepairseq146210;
typedef struct Keyvaluepair146208 Keyvaluepair146208;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo190352  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tlinkedlist141028  {
Tlistentry141022* head;
Tlistentry141022* tail;
NI counter;
};
typedef NIM_CHAR TY114385[256];
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
struct  Stringtableobj146212  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq146210* data;
NU8 mode;
};
struct Keyvaluepair146208 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tlistentry141022  {
  TNimObject Sup;
Tlistentry141022* prev;
Tlistentry141022* next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Keyvaluepairseq146210 {
  TGenericSeq Sup;
  Keyvaluepair146208 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, contains_141219)(Tlinkedlist141028* list, NimStringDesc* data);
N_NIMCALL(void, prependstr_141419)(Tlinkedlist141028* list, NimStringDesc* data);
N_NIMCALL(void, addpathrec_207266)(NimStringDesc* dir, Tlineinfo190352 info);
N_NIMCALL(Stringtableobj146212*, nstnewStringTable)(NU8 mode);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, HEX2F_124681)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(NIM_BOOL, direxists_128220)(NimStringDesc* dir);
N_NIMCALL(NIM_BOOL, nosexistsDir)(NimStringDesc* dir);
N_NIMCALL(void, addpackage_207126)(Stringtableobj146212* packages, NimStringDesc* p);
N_NIMCALL(NI, versionsplitpos_207023)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_81216, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_207064)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(NimStringDesc*, getordefault_147020)(Stringtableobj146212* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(Stringtableobj146212* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, addnimblepath_207175)(NimStringDesc* p, Tlineinfo190352 info);
N_NIMCALL(void, message_196161)(Tlineinfo190352 info, NU16 msg, NimStringDesc* arg);
STRING_LITERAL(TMP1758, ".", 1);
STRING_LITERAL(TMP1759, "..", 2);
STRING_LITERAL(TMP1760, "head", 4);
extern Tlinkedlist141028 searchpaths_167136;
extern Tlinkedlist141028 lazypaths_167137;

N_NIMCALL(void, addpath_207012)(NimStringDesc* path, Tlineinfo190352 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_141219((&searchpaths_167136), path);
		if (!!(LOC3)) goto LA4;
		prependstr_141419((&searchpaths_167136), path);
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

static N_INLINE(NIM_BOOL, direxists_128220)(NimStringDesc* dir) {
	NIM_BOOL result;
	result = 0;
	result = nosexistsDir(dir);
	return result;
}

N_NIMCALL(NI, versionsplitpos_207023)(NimStringDesc* s) {
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

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_207064)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
{	result = 0;
	{
		if (!eqStrings(a, ((NimStringDesc*) &TMP1760))) goto LA3;
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

N_NIMCALL(void, addpackage_207126)(Stringtableobj146212* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	x = versionsplitpos_207023(p);
	name = copyStrLast(p, ((NI) 0), (NI)(x - ((NI) 1)));
	{
		NimStringDesc* version;
		if (!(x < (p ? p->Sup.len : 0))) goto LA3;
		version = copyStr(p, (NI)(x + ((NI) 1)));
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = 0;
			LOC7 = getordefault_147020(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_207064(LOC7, version);
			if (!LOC8) goto LA9;
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages, name, ((NimStringDesc*) &TMP1760));
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

N_NIMCALL(void, addnimblepath_207175)(NimStringDesc* p, Tlineinfo190352 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_141219((&searchpaths_167136), p);
		if (!!(LOC3)) goto LA4;
		message_196161(info, ((NU16) 280), p);
		prependstr_141419((&lazypaths_167137), p);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_207266)(NimStringDesc* dir, Tlineinfo190352 info) {
	Stringtableobj146212* packages;
	NI pos;
	packages = nstnewStringTable(((NU8) 2));
	pos = (NI)((dir ? dir->Sup.len : 0) - ((NI) 1));
	{
		if (!(((NU8)(dir->data[pos])) == ((NU8)(47)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		pos += ((NI) 1);
	}
	LA3: ;
	{
		NU8 k_207292;
		NimStringDesc* p_207293;
		DIR* d_207308;
		k_207292 = 0;
		p_207293 = 0;
		d_207308 = opendir(dir->data);
		{
			int LOC72;
			if (!!((d_207308 == NIM_NIL))) goto LA8;
			{
				while (1) {
					{
						struct dirent* x_207310;
						NimStringDesc* y_207312;
						x_207310 = readdir(d_207308);
						{
							if (!(x_207310 == NIM_NIL)) goto LA15;
							goto LA10;
						}
						LA15: ;
						y_207312 = cstrToNimstr(((NCSTRING) ((*x_207310).d_name)));
						{
							NIM_BOOL LOC19;
							struct stat s_207314;
							NU8 k_207316;
							LOC19 = 0;
							LOC19 = !(eqStrings(y_207312, ((NimStringDesc*) &TMP1758)));
							if (!(LOC19)) goto LA20;
							LOC19 = !(eqStrings(y_207312, ((NimStringDesc*) &TMP1759)));
							LA20: ;
							if (!LOC19) goto LA21;
							memset((void*)(&s_207314), 0, sizeof(s_207314));
							{
								if (!NIM_TRUE) goto LA25;
								y_207312 = HEX2F_124681(dir, y_207312);
							}
							LA25: ;
							k_207316 = ((NU8) 0);
							{
								if (!!(((*x_207310).d_type == ((NI8) 0)))) goto LA29;
								{
									if (!((*x_207310).d_type == ((NI8) 4))) goto LA33;
									k_207316 = ((NU8) 2);
								}
								LA33: ;
								{
									if (!((*x_207310).d_type == ((NI8) 10))) goto LA37;
									{
										NIM_BOOL LOC41;
										LOC41 = 0;
										LOC41 = direxists_128220(y_207312);
										if (!LOC41) goto LA42;
										k_207316 = ((NU8) 3);
									}
									goto LA39;
									LA42: ;
									{
										k_207316 = (NU8)(k_207316 + ((NI) 1));
									}
									LA39: ;
								}
								LA37: ;
								k_207292 = k_207316;
								p_207293 = y_207312;
								{
									NIM_BOOL LOC47;
									LOC47 = 0;
									LOC47 = (k_207292 == ((NU8) 2));
									if (!(LOC47)) goto LA48;
									LOC47 = !(((NU8)(p_207293->data[pos]) == (NU8)(46)));
									LA48: ;
									if (!LOC47) goto LA49;
									addpackage_207126(packages, p_207293);
								}
								LA49: ;
								goto LA12;
							}
							LA29: ;
							{
								int LOC53;
								LOC53 = 0;
								LOC53 = lstat(y_207312->data, (&s_207314));
								if (!(LOC53 < ((NI32) 0))) goto LA54;
								goto LA10;
							}
							LA54: ;
							{
								NIM_BOOL LOC58;
								LOC58 = 0;
								LOC58 = S_ISDIR(s_207314.st_mode);
								if (!LOC58) goto LA59;
								k_207316 = ((NU8) 2);
							}
							LA59: ;
							{
								NIM_BOOL LOC63;
								LOC63 = 0;
								LOC63 = S_ISLNK(s_207314.st_mode);
								if (!LOC63) goto LA64;
								k_207316 = (NU8)(k_207316 + ((NI) 1));
							}
							LA64: ;
							k_207292 = k_207316;
							p_207293 = y_207312;
							{
								NIM_BOOL LOC68;
								LOC68 = 0;
								LOC68 = (k_207292 == ((NU8) 2));
								if (!(LOC68)) goto LA69;
								LOC68 = !(((NU8)(p_207293->data[pos]) == (NU8)(46)));
								LA69: ;
								if (!LOC68) goto LA70;
								addpackage_207126(packages, p_207293);
							}
							LA70: ;
						}
						LA21: ;
					} LA12: ;
				}
			} LA10: ;
			LOC72 = 0;
			LOC72 = closedir(d_207308);
		}
		LA8: ;
	}
	{
		NimStringDesc* p_207303;
		p_207303 = 0;
		{
			NimStringDesc* key_207322;
			NimStringDesc* val_207324;
			key_207322 = 0;
			val_207324 = 0;
			{
				NI h_207326;
				NI HEX3Atmp_207328;
				NI res_207330;
				h_207326 = 0;
				HEX3Atmp_207328 = 0;
				HEX3Atmp_207328 = ((*packages).data ? ((*packages).data->Sup.len-1) : -1);
				res_207330 = ((NI) 0);
				{
					while (1) {
						if (!(res_207330 <= HEX3Atmp_207328)) goto LA77;
						h_207326 = res_207330;
						{
							NimStringDesc* res_207334;
							if (!!((*packages).data->data[h_207326].Field0 == 0)) goto LA80;
							key_207322 = (*packages).data->data[h_207326].Field0;
							val_207324 = (*packages).data->data[h_207326].Field1;
							{
								if (!eqStrings(val_207324, ((NimStringDesc*) &TMP1760))) goto LA84;
								res_207334 = key_207322;
							}
							goto LA82;
							LA84: ;
							{
								NimStringDesc* LOC87;
								LOC87 = 0;
								LOC87 = rawNewString(key_207322->Sup.len + val_207324->Sup.len + 1);
appendString(LOC87, key_207322);
appendChar(LOC87, 45);
appendString(LOC87, val_207324);
								res_207334 = LOC87;
							}
							LA82: ;
							p_207303 = res_207334;
							addnimblepath_207175(p_207303, info);
						}
						LA80: ;
						res_207330 += ((NI) 1);
					} LA77: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_207368)(NimStringDesc* path, Tlineinfo190352 info) {
	addpathrec_207266(path, info);
	addnimblepath_207175(path, info);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit000)(void) {
}
