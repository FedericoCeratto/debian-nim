/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <unistd.h>

N_NIMCALL(NI, ncpicountProcessors)(void) {
	NI result;
	result = 0;
	result = sysconf(_SC_NPROCESSORS_ONLN);
	{
		if (!(result <= ((NI) 0))) goto LA3;
		result = ((NI) 1);
	}
	LA3: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoDatInit)(void) {
}

