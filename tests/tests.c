/**
 * @file tests.c
 * @desc Testsuite module file.
 */

#include <stdio.h>
#include <hellolib.h>

int main(int argc, char **argv)
{
	int32_t version = hellolib_version();
	int32_t major = (version & 0xFF000000L) >> 24;
	int32_t minor = (version & 0x00FF0000L) >> 16;
	int32_t revision = (version & 0x0000FF00L) >> 8;
	int32_t build = version & 0x000000FFL;

	printf("Hello, library :)\n");
	printf("hellolib version %d.%d.%d build %d\n", major, minor, revision, build);
	return 0;
}

