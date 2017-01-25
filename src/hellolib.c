/**
 * @file hellolib.c
 * @desc Hello library module file.
 */

#include <hellolib.h>

HELLOLIB_API int32_t HELLOLIB_CALL
hellolib_version()
{
#ifdef HELLOLIB_DLL
	return 0x01000001;
#else
	return 0x01000000;
#endif
}

