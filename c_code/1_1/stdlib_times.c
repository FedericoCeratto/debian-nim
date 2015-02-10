/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <time.h>
typedef struct tfiletime103079 tfiletime103079;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct timeinfo106405 timeinfo106405;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct keyvaluepair133008 keyvaluepair133008;
struct  tfiletime103079  {
NI32 Dwlowdatetime;
NI32 Dwhighdatetime;
};
typedef N_STDCALL_PTR(void, TY104425) (tfiletime103079* lpsystemtimeasfiletime);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  timeinfo106405  {
  TNimObject Sup;
NI Second;
NI Minute;
NI Hour;
NI Monthday;
NU8 Month;
NI Year;
NU8 Weekday;
NI Yearday;
NIM_BOOL Isdst;
NimStringDesc* Tzname;
NI Timezone;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 TY107054[7];
struct keyvaluepair133008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
N_NIMCALL(NI64, rdfiletime_104404)(tfiletime103079 f);
N_NIMCALL(void, getlocaltime_106453)(time_t t, timeinfo106405* Result);
N_NIMCALL(void, tmtotimeinfo_107048)(struct tm* tm, NIM_BOOL local, timeinfo106405* Result);
N_NIMCALL(void, gettzname_106548)(keyvaluepair133008* Result);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NI, gettimezone_106604)(void);
N_NIMCALL(void, genericShallowAssign)(void* dest, void* src, TNimType* mt);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_NIMCALL(time_t, gettime_106448)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI x, NI minchars);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY107054 weekdays_107053 = {((NU8) 6),
((NU8) 0),
((NU8) 1),
((NU8) 2),
((NU8) 3),
((NU8) 4),
((NU8) 5)}
;
STRING_LITERAL(TMP3095, "UTC", 3);
extern TY104425 Dl_104424;
extern TNimType NTI3211; /* RootObj */
TNimType NTI106405; /* TimeInfo */
extern TNimType NTI108; /* int */
TNimType NTI106408; /* range 0..61(int) */
TNimType NTI106410; /* range 0..59(int) */
TNimType NTI106412; /* range 0..23(int) */
TNimType NTI106415; /* range 1..31(int) */
TNimType NTI103006; /* Month */
TNimType NTI106418; /* range -10000..10000(int) */
TNimType NTI103008; /* WeekDay */
TNimType NTI106424; /* range 0..365(int) */
extern TNimType NTI138; /* bool */
extern TNimType NTI149; /* string */

N_NIMCALL(NF, ntepochTime)(void) {
	NF result;
	tfiletime103079 f;
	NI64 i64;
	NI64 LOC1;
	NI64 secs;
	NI64 subsecs;
	result = 0;
	memset((void*)(&f), 0, sizeof(f));
	Dl_104424((&f));
	LOC1 = 0;
	LOC1 = rdfiletime_104404(f);
	i64 = (NI64)(LOC1 - IL64(116444736000000000));
	secs = (NI64)(i64 / IL64(10000000));
	subsecs = (NI64)(i64 % IL64(10000000));
	result = ((NF)(((double) (((NI) (secs))))) + (NF)(((NF)(((double) (((NI) (subsecs))))) * (NF)(9.9999999999999995e-08))));
	return result;
}

N_NIMCALL(void, gettzname_106548)(keyvaluepair133008* Result) {
	unsureAsgnRef((void**) (&(*Result).Field0), cstrToNimstr(tzname[(0)- 0]));
	unsureAsgnRef((void**) (&(*Result).Field1), cstrToNimstr(tzname[(1)- 0]));
	goto BeforeRet;
	BeforeRet: ;
}

N_NIMCALL(NI, gettimezone_106604)(void) {
	NI result;
	result = 0;
	result = timezone;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, tmtotimeinfo_107048)(struct tm* tm, NIM_BOOL local, timeinfo106405* Result) {
	timeinfo106405 LOC1;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Sup.m_type = (&NTI106405);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Sup.m_type = (&NTI106405);
	LOC1.Second = ((NI) (((NI) ((*tm).tm_sec))));
	LOC1.Minute = ((NI) (((NI) ((*tm).tm_min))));
	LOC1.Hour = ((NI) (((NI) ((*tm).tm_hour))));
	LOC1.Monthday = ((NI) (((NI) ((*tm).tm_mday))));
	LOC1.Month = ((NU8) ((*tm).tm_mon));
	LOC1.Year = ((NI) ((NI32)((*tm).tm_year + ((NI32) 1900))));
	LOC1.Weekday = weekdays_107053[(((NI) ((*tm).tm_wday)))- 0];
	LOC1.Yearday = ((NI) (((NI) ((*tm).tm_yday))));
	LOC1.Isdst = (((NI32) 0) < (*tm).tm_isdst);
	{
		if (!local) goto LA4;
		{
			keyvaluepair133008 LOC10;
			if (!(((NI32) 0) < (*tm).tm_isdst)) goto LA8;
			memset((void*)(&LOC10), 0, sizeof(LOC10));
			gettzname_106548((&LOC10));
			LOC1.Tzname = copyString(LOC10.Field1);
		}
		goto LA6;
		LA8: ;
		{
			keyvaluepair133008 LOC12;
			memset((void*)(&LOC12), 0, sizeof(LOC12));
			gettzname_106548((&LOC12));
			LOC1.Tzname = copyString(LOC12.Field0);
		}
		LA6: ;
	}
	goto LA2;
	LA4: ;
	{
		LOC1.Tzname = copyString(((NimStringDesc*) &TMP3095));
	}
	LA2: ;
	{
		if (!local) goto LA16;
		LOC1.Timezone = gettimezone_106604();
	}
	goto LA14;
	LA16: ;
	{
		LOC1.Timezone = 0;
	}
	LA14: ;
	genericShallowAssign((void*)Result, (void*)(&LOC1), (&NTI106405));
}

N_NIMCALL(void, getlocaltime_106453)(time_t t, timeinfo106405* Result) {
	time_t a;
	struct tm* LOC1;
	a = t;
	LOC1 = 0;
	LOC1 = localtime((&a));
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI106405));
	(*Result).Sup.m_type = (&NTI106405);
	tmtotimeinfo_107048((&(*LOC1)), NIM_TRUE, Result);
}

N_NIMCALL(time_t, gettime_106448)(void) {
	time_t result;
	result = 0;
	result = time(NIM_NIL);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(NimStringDesc*, ntgetDateStr)(void) {
	NimStringDesc* result;
	timeinfo106405 ti;
	time_t LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	result = 0;
	memset((void*)(&ti), 0, sizeof(ti));
	ti.Sup.m_type = (&NTI106405);
	LOC1 = 0;
	LOC1 = gettime_106448();
	chckNil((void*)(&ti));
	memset((void*)(&ti), 0, sizeof(ti));
	ti.Sup.m_type = (&NTI106405);
	getlocaltime_106453(LOC1, (&ti));
	LOC2 = 0;
	LOC3 = 0;
	LOC3 = nimIntToStr(((NI) (ti.Year)));
	LOC4 = 0;
	LOC4 = nsuIntToStr(((NI) ((NI32)(((NI) (ti.Month)) + 1))), 2);
	LOC5 = 0;
	LOC5 = nsuIntToStr(((NI) (ti.Monthday)), 2);
	LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 45);
appendString(LOC2, LOC4);
appendChar(LOC2, 45);
appendString(LOC2, LOC5);
	result = LOC2;
	return result;
}

N_NIMCALL(NimStringDesc*, ntgetClockStr)(void) {
	NimStringDesc* result;
	timeinfo106405 ti;
	time_t LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	result = 0;
	memset((void*)(&ti), 0, sizeof(ti));
	ti.Sup.m_type = (&NTI106405);
	LOC1 = 0;
	LOC1 = gettime_106448();
	chckNil((void*)(&ti));
	memset((void*)(&ti), 0, sizeof(ti));
	ti.Sup.m_type = (&NTI106405);
	getlocaltime_106453(LOC1, (&ti));
	LOC2 = 0;
	LOC3 = 0;
	LOC3 = nsuIntToStr(((NI) (ti.Hour)), 2);
	LOC4 = 0;
	LOC4 = nsuIntToStr(((NI) (ti.Minute)), 2);
	LOC5 = 0;
	LOC5 = nsuIntToStr(((NI) (ti.Second)), 2);
	LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 58);
appendString(LOC2, LOC4);
appendChar(LOC2, 58);
appendString(LOC2, LOC5);
	result = LOC2;
	return result;
}

N_NIMCALL(NI64, ntDiffTime)(time_t a, time_t b) {
	NI64 result;
	NF LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = difftime(a, b);
	result = float64ToInt64(LOC1);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(time_t, wintimetounixtime_107691)(NI64 t) {
	time_t result;
	result = 0;
	result = ((time_t) ((NI64)((NI64)(t - IL64(116444736000000000)) / IL64(10000000))));
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit)(void) {
static TNimNode* TMP3088[11];
static TNimNode* TMP3089[12];
NI TMP3091;
static char* NIM_CONST TMP3090[12] = {
"mJan", 
"mFeb", 
"mMar", 
"mApr", 
"mMay", 
"mJun", 
"mJul", 
"mAug", 
"mSep", 
"mOct", 
"mNov", 
"mDec"};
static TNimNode* TMP3092[7];
NI TMP3094;
static char* NIM_CONST TMP3093[7] = {
"dMon", 
"dTue", 
"dWed", 
"dThu", 
"dFri", 
"dSat", 
"dSun"};
static TNimNode TMP15[33];
NTI106405.size = sizeof(timeinfo106405);
NTI106405.kind = 17;
NTI106405.base = (&NTI3211);
TMP3088[0] = &TMP15[1];
NTI106408.size = sizeof(NI);
NTI106408.kind = 20;
NTI106408.base = (&NTI108);
NTI106408.flags = 3;
TMP15[1].kind = 1;
TMP15[1].offset = offsetof(timeinfo106405, Second);
TMP15[1].typ = (&NTI106408);
TMP15[1].name = "second";
TMP3088[1] = &TMP15[2];
NTI106410.size = sizeof(NI);
NTI106410.kind = 20;
NTI106410.base = (&NTI108);
NTI106410.flags = 3;
TMP15[2].kind = 1;
TMP15[2].offset = offsetof(timeinfo106405, Minute);
TMP15[2].typ = (&NTI106410);
TMP15[2].name = "minute";
TMP3088[2] = &TMP15[3];
NTI106412.size = sizeof(NI);
NTI106412.kind = 20;
NTI106412.base = (&NTI108);
NTI106412.flags = 3;
TMP15[3].kind = 1;
TMP15[3].offset = offsetof(timeinfo106405, Hour);
TMP15[3].typ = (&NTI106412);
TMP15[3].name = "hour";
TMP3088[3] = &TMP15[4];
NTI106415.size = sizeof(NI);
NTI106415.kind = 20;
NTI106415.base = (&NTI108);
NTI106415.flags = 3;
TMP15[4].kind = 1;
TMP15[4].offset = offsetof(timeinfo106405, Monthday);
TMP15[4].typ = (&NTI106415);
TMP15[4].name = "monthday";
TMP3088[4] = &TMP15[5];
NTI103006.size = sizeof(NU8);
NTI103006.kind = 14;
NTI103006.base = 0;
NTI103006.flags = 3;
for (TMP3091 = 0; TMP3091 < 12; TMP3091++) {
TMP15[TMP3091+6].kind = 1;
TMP15[TMP3091+6].offset = TMP3091;
TMP15[TMP3091+6].name = TMP3090[TMP3091];
TMP3089[TMP3091] = &TMP15[TMP3091+6];
}
TMP15[18].len = 12; TMP15[18].kind = 2; TMP15[18].sons = &TMP3089[0];
NTI103006.node = &TMP15[18];
TMP15[5].kind = 1;
TMP15[5].offset = offsetof(timeinfo106405, Month);
TMP15[5].typ = (&NTI103006);
TMP15[5].name = "month";
TMP3088[5] = &TMP15[19];
NTI106418.size = sizeof(NI);
NTI106418.kind = 20;
NTI106418.base = (&NTI108);
NTI106418.flags = 3;
TMP15[19].kind = 1;
TMP15[19].offset = offsetof(timeinfo106405, Year);
TMP15[19].typ = (&NTI106418);
TMP15[19].name = "year";
TMP3088[6] = &TMP15[20];
NTI103008.size = sizeof(NU8);
NTI103008.kind = 14;
NTI103008.base = 0;
NTI103008.flags = 3;
for (TMP3094 = 0; TMP3094 < 7; TMP3094++) {
TMP15[TMP3094+21].kind = 1;
TMP15[TMP3094+21].offset = TMP3094;
TMP15[TMP3094+21].name = TMP3093[TMP3094];
TMP3092[TMP3094] = &TMP15[TMP3094+21];
}
TMP15[28].len = 7; TMP15[28].kind = 2; TMP15[28].sons = &TMP3092[0];
NTI103008.node = &TMP15[28];
TMP15[20].kind = 1;
TMP15[20].offset = offsetof(timeinfo106405, Weekday);
TMP15[20].typ = (&NTI103008);
TMP15[20].name = "weekday";
TMP3088[7] = &TMP15[29];
NTI106424.size = sizeof(NI);
NTI106424.kind = 20;
NTI106424.base = (&NTI108);
NTI106424.flags = 3;
TMP15[29].kind = 1;
TMP15[29].offset = offsetof(timeinfo106405, Yearday);
TMP15[29].typ = (&NTI106424);
TMP15[29].name = "yearday";
TMP3088[8] = &TMP15[30];
TMP15[30].kind = 1;
TMP15[30].offset = offsetof(timeinfo106405, Isdst);
TMP15[30].typ = (&NTI138);
TMP15[30].name = "isDST";
TMP3088[9] = &TMP15[31];
TMP15[31].kind = 1;
TMP15[31].offset = offsetof(timeinfo106405, Tzname);
TMP15[31].typ = (&NTI149);
TMP15[31].name = "tzname";
TMP3088[10] = &TMP15[32];
TMP15[32].kind = 1;
TMP15[32].offset = offsetof(timeinfo106405, Timezone);
TMP15[32].typ = (&NTI108);
TMP15[32].name = "timezone";
TMP15[0].len = 11; TMP15[0].kind = 2; TMP15[0].sons = &TMP3088[0];
NTI106405.node = &TMP15[0];
}

