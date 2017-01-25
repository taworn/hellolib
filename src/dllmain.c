/**
 * @file dllmain.c
 * @desc DLL main program.
 */

#include <windows.h>

#if defined(HELLOLIB_DLL)
/**
 * DLL main program for Windows.
 */
BOOL APIENTRY
DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
	switch (reason) {
	case DLL_PROCESS_ATTACH:
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
#endif

