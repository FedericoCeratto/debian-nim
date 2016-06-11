/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Timeinfo116404 Timeinfo116404;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepair150205 Keyvaluepair150205;
typedef struct Filetime112432 Filetime112432;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 Month111203;
typedef NU8 Weekday111205;
struct  Timeinfo116404  {
  TNimObject Sup;
NI second;
NI minute;
NI hour;
NI monthday;
Month111203 month;
NI year;
Weekday111205 weekday;
NI yearday;
NIM_BOOL isdst;
NimStringDesc* tzname;
NI timezone;
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
typedef Weekday111205 TY117253[7];
struct Keyvaluepair150205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Filetime112432  {
NI32 dwlowdatetime;
NI32 dwhighdatetime;
};
typedef N_STDCALL_PTR(void, TY113810) (Filetime112432* lpsystemtimeasfiletime0);
N_NIMCALL(void, getlocaltime_116438_2726502234)(time_t t0, Timeinfo116404* Result);
N_NIMCALL(void, tmtotimeinfo_117246_2726502234)(struct tm* tm0, NIM_BOOL local0, Timeinfo116404* Result);
N_NIMCALL(void, gettzname_116486_2726502234)(Keyvaluepair150205* Result);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NI, gettimezone_116601_2726502234)(void);
N_NIMCALL(void, genericShallowAssign)(void* dest0, void* src0, TNimType* mt0);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(void, genericReset)(void* dest0, TNimType* mt0);
N_NIMCALL(time_t, gettime_116436_2726502234)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI x0, NI minchars0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NI64, rdfiletime_113801_114176342)(Filetime112432 f0);
NIM_CONST TY117253 weekdays_117251_2726502234 = {((Weekday111205) 6),
((Weekday111205) 0),
((Weekday111205) 1),
((Weekday111205) 2),
((Weekday111205) 3),
((Weekday111205) 4),
((Weekday111205) 5)}
;
STRING_LITERAL(TMP3572, "UTC", 3);
extern TNimType NTI3408; /* RootObj */
TNimType NTI116404; /* TimeInfo */
extern TNimType NTI104; /* int */
TNimType NTI116407; /* range 0..61(int) */
TNimType NTI116409; /* range 0..59(int) */
TNimType NTI116411; /* range 0..23(int) */
TNimType NTI116413; /* range 1..31(int) */
TNimType NTI111203; /* Month */
TNimType NTI111205; /* WeekDay */
TNimType NTI116418; /* range 0..365(int) */
extern TNimType NTI130; /* bool */
extern TNimType NTI138; /* string */
extern TY113810 Dl_113809;

N_NIMCALL(void, gettzname_116486_2726502234)(Keyvaluepair150205* Result) {
{	unsureAsgnRef((void**) (&(*Result).Field0), cstrToNimstr(tzname[(((NI) 0))- 0]));
	unsureAsgnRef((void**) (&(*Result).Field1), cstrToNimstr(tzname[(((NI) 1))- 0]));
	goto BeforeRet;
	}BeforeRet: ;
}

N_NIMCALL(NI, gettimezone_116601_2726502234)(void) {
	NI result0;
{	result0 = (NI)0;
	result0 = timezone;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, tmtotimeinfo_117246_2726502234)(struct tm* tm0, NIM_BOOL local0, Timeinfo116404* Result) {
	Timeinfo116404 LOC1;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Sup.m_type = (&NTI116404);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Sup.m_type = (&NTI116404);
	LOC1.second = ((NI) (((NI) ((*tm0).tm_sec))));
	LOC1.minute = ((NI) (((NI) ((*tm0).tm_min))));
	LOC1.hour = ((NI) (((NI) ((*tm0).tm_hour))));
	LOC1.monthday = ((NI) (((NI) ((*tm0).tm_mday))));
	LOC1.month = ((Month111203) ((*tm0).tm_mon));
	LOC1.year = ((NI) ((NI32)((*tm0).tm_year + ((NI32) 1900))));
	LOC1.weekday = weekdays_117251_2726502234[(((NI) ((*tm0).tm_wday)))- 0];
	LOC1.yearday = ((NI) (((NI) ((*tm0).tm_yday))));
	LOC1.isdst = (((NI32) 0) < (*tm0).tm_isdst);
	{
		if (!local0) goto LA4;
		{
			Keyvaluepair150205 LOC10;
			if (!(((NI32) 0) < (*tm0).tm_isdst)) goto LA8;
			memset((void*)(&LOC10), 0, sizeof(LOC10));
			gettzname_116486_2726502234((&LOC10));
			LOC1.tzname = copyString(LOC10.Field1);
		}
		goto LA6;
		LA8: ;
		{
			Keyvaluepair150205 LOC12;
			memset((void*)(&LOC12), 0, sizeof(LOC12));
			gettzname_116486_2726502234((&LOC12));
			LOC1.tzname = copyString(LOC12.Field0);
		}
		LA6: ;
	}
	goto LA2;
	LA4: ;
	{
		LOC1.tzname = copyString(((NimStringDesc*) &TMP3572));
	}
	LA2: ;
	{
		if (!local0) goto LA16;
		LOC1.timezone = gettimezone_116601_2726502234();
	}
	goto LA14;
	LA16: ;
	{
		LOC1.timezone = ((NI) 0);
	}
	LA14: ;
	genericShallowAssign((void*)Result, (void*)(&LOC1), (&NTI116404));
}

N_NIMCALL(void, getlocaltime_116438_2726502234)(time_t t0, Timeinfo116404* Result) {
	time_t a0;
	struct tm* lt0;
	a0 = t0;
	lt0 = localtime((&a0));
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI116404));
	(*Result).Sup.m_type = (&NTI116404);
	tmtotimeinfo_117246_2726502234((&(*lt0)), NIM_TRUE, Result);
}

N_NIMCALL(time_t, gettime_116436_2726502234)(void) {
	time_t result0;
{	result0 = (time_t)0;
	result0 = time(NIM_NIL);
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, ntgetDateStr)(void) {
	NimStringDesc* result0;
	Timeinfo116404 ti0;
	time_t LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	result0 = (NimStringDesc*)0;
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI116404);
	LOC1 = (time_t)0;
	LOC1 = gettime_116436_2726502234();
	chckNil((void*)(&ti0));
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI116404);
	getlocaltime_116438_2726502234(LOC1, (&ti0));
	LOC2 = (NimStringDesc*)0;
	LOC3 = (NimStringDesc*)0;
	LOC3 = nimIntToStr(ti0.year);
	LOC4 = (NimStringDesc*)0;
	LOC4 = nsuIntToStr(((NI) ((NI)(((NI) (ti0.month)) + ((NI) 1)))), ((NI) 2));
	LOC5 = (NimStringDesc*)0;
	LOC5 = nsuIntToStr(((NI) (ti0.monthday)), ((NI) 2));
	LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 45);
appendString(LOC2, LOC4);
appendChar(LOC2, 45);
appendString(LOC2, LOC5);
	result0 = LOC2;
	return result0;
}

N_NIMCALL(NimStringDesc*, ntgetClockStr)(void) {
	NimStringDesc* result0;
	Timeinfo116404 ti0;
	time_t LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	result0 = (NimStringDesc*)0;
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI116404);
	LOC1 = (time_t)0;
	LOC1 = gettime_116436_2726502234();
	chckNil((void*)(&ti0));
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI116404);
	getlocaltime_116438_2726502234(LOC1, (&ti0));
	LOC2 = (NimStringDesc*)0;
	LOC3 = (NimStringDesc*)0;
	LOC3 = nsuIntToStr(((NI) (ti0.hour)), ((NI) 2));
	LOC4 = (NimStringDesc*)0;
	LOC4 = nsuIntToStr(((NI) (ti0.minute)), ((NI) 2));
	LOC5 = (NimStringDesc*)0;
	LOC5 = nsuIntToStr(((NI) (ti0.second)), ((NI) 2));
	LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 58);
appendString(LOC2, LOC4);
appendChar(LOC2, 58);
appendString(LOC2, LOC5);
	result0 = LOC2;
	return result0;
}

N_NIMCALL(NF, toseconds_116458_2726502234)(time_t time0) {
	NF result0;
	result0 = (NF)0;
	result0 = ((NF) (time0));
	return result0;
}

N_NIMCALL(time_t, wintimetounixtime_118250_2726502234)(NI64 t0) {
	time_t result0;
	result0 = (time_t)0;
	result0 = ((time_t) ((NI64)((NI64)(t0 - IL64(116444736000000000)) / IL64(10000000))));
	return result0;
}

N_NIMCALL(NF, ntepochTime)(void) {
	NF result0;
	Filetime112432 f0;
	NI64 i640;
	NI64 LOC1;
	NI64 secs0;
	NI64 subsecs0;
	result0 = (NF)0;
	memset((void*)(&f0), 0, sizeof(f0));
	Dl_113809((&f0));
	LOC1 = (NI64)0;
	LOC1 = rdfiletime_113801_114176342(f0);
	i640 = (NI64)(LOC1 - IL64(116444736000000000));
	secs0 = (NI64)(i640 / IL64(10000000));
	subsecs0 = (NI64)(i640 % IL64(10000000));
	result0 = ((NF)(((double) (((NI) (secs0))))) + (NF)(((NF)(((double) (((NI) (subsecs0))))) * (NF)(9.9999999999999995e-08))));
	return result0;
}

N_NIMCALL(NI64, ntDiffTime)(time_t a0, time_t b0) {
	NI64 result0;
	NF LOC1;
{	result0 = (NI64)0;
	LOC1 = (NF)0;
	LOC1 = difftime(a0, b0);
	result0 = float64ToInt64(LOC1);
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit000)(void) {
static TNimNode* TMP3565[11];
static TNimNode* TMP3566[12];
NI TMP3568;
static char* NIM_CONST TMP3567[12] = {
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
static TNimNode* TMP3569[7];
NI TMP3571;
static char* NIM_CONST TMP3570[7] = {
"dMon", 
"dTue", 
"dWed", 
"dThu", 
"dFri", 
"dSat", 
"dSun"};
static TNimNode TMP19[33];
NTI116404.size = sizeof(Timeinfo116404);
NTI116404.kind = 17;
NTI116404.base = (&NTI3408);
TMP3565[0] = &TMP19[1];
NTI116407.size = sizeof(NI);
NTI116407.kind = 20;
NTI116407.base = (&NTI104);
NTI116407.flags = 3;
TMP19[1].kind = 1;
TMP19[1].offset = offsetof(Timeinfo116404, second);
TMP19[1].typ = (&NTI116407);
TMP19[1].name = "second";
TMP3565[1] = &TMP19[2];
NTI116409.size = sizeof(NI);
NTI116409.kind = 20;
NTI116409.base = (&NTI104);
NTI116409.flags = 3;
TMP19[2].kind = 1;
TMP19[2].offset = offsetof(Timeinfo116404, minute);
TMP19[2].typ = (&NTI116409);
TMP19[2].name = "minute";
TMP3565[2] = &TMP19[3];
NTI116411.size = sizeof(NI);
NTI116411.kind = 20;
NTI116411.base = (&NTI104);
NTI116411.flags = 3;
TMP19[3].kind = 1;
TMP19[3].offset = offsetof(Timeinfo116404, hour);
TMP19[3].typ = (&NTI116411);
TMP19[3].name = "hour";
TMP3565[3] = &TMP19[4];
NTI116413.size = sizeof(NI);
NTI116413.kind = 20;
NTI116413.base = (&NTI104);
NTI116413.flags = 3;
TMP19[4].kind = 1;
TMP19[4].offset = offsetof(Timeinfo116404, monthday);
TMP19[4].typ = (&NTI116413);
TMP19[4].name = "monthday";
TMP3565[4] = &TMP19[5];
NTI111203.size = sizeof(Month111203);
NTI111203.kind = 14;
NTI111203.base = 0;
NTI111203.flags = 3;
for (TMP3568 = 0; TMP3568 < 12; TMP3568++) {
TMP19[TMP3568+6].kind = 1;
TMP19[TMP3568+6].offset = TMP3568;
TMP19[TMP3568+6].name = TMP3567[TMP3568];
TMP3566[TMP3568] = &TMP19[TMP3568+6];
}
TMP19[18].len = 12; TMP19[18].kind = 2; TMP19[18].sons = &TMP3566[0];
NTI111203.node = &TMP19[18];
TMP19[5].kind = 1;
TMP19[5].offset = offsetof(Timeinfo116404, month);
TMP19[5].typ = (&NTI111203);
TMP19[5].name = "month";
TMP3565[5] = &TMP19[19];
TMP19[19].kind = 1;
TMP19[19].offset = offsetof(Timeinfo116404, year);
TMP19[19].typ = (&NTI104);
TMP19[19].name = "year";
TMP3565[6] = &TMP19[20];
NTI111205.size = sizeof(Weekday111205);
NTI111205.kind = 14;
NTI111205.base = 0;
NTI111205.flags = 3;
for (TMP3571 = 0; TMP3571 < 7; TMP3571++) {
TMP19[TMP3571+21].kind = 1;
TMP19[TMP3571+21].offset = TMP3571;
TMP19[TMP3571+21].name = TMP3570[TMP3571];
TMP3569[TMP3571] = &TMP19[TMP3571+21];
}
TMP19[28].len = 7; TMP19[28].kind = 2; TMP19[28].sons = &TMP3569[0];
NTI111205.node = &TMP19[28];
TMP19[20].kind = 1;
TMP19[20].offset = offsetof(Timeinfo116404, weekday);
TMP19[20].typ = (&NTI111205);
TMP19[20].name = "weekday";
TMP3565[7] = &TMP19[29];
NTI116418.size = sizeof(NI);
NTI116418.kind = 20;
NTI116418.base = (&NTI104);
NTI116418.flags = 3;
TMP19[29].kind = 1;
TMP19[29].offset = offsetof(Timeinfo116404, yearday);
TMP19[29].typ = (&NTI116418);
TMP19[29].name = "yearday";
TMP3565[8] = &TMP19[30];
TMP19[30].kind = 1;
TMP19[30].offset = offsetof(Timeinfo116404, isdst);
TMP19[30].typ = (&NTI130);
TMP19[30].name = "isDST";
TMP3565[9] = &TMP19[31];
TMP19[31].kind = 1;
TMP19[31].offset = offsetof(Timeinfo116404, tzname);
TMP19[31].typ = (&NTI138);
TMP19[31].name = "tzname";
TMP3565[10] = &TMP19[32];
TMP19[32].kind = 1;
TMP19[32].offset = offsetof(Timeinfo116404, timezone);
TMP19[32].typ = (&NTI104);
TMP19[32].name = "timezone";
TMP19[0].len = 11; TMP19[0].kind = 2; TMP19[0].sons = &TMP3565[0];
NTI116404.node = &TMP19[0];
}

