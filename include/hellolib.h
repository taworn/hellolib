/**
 * @file hellolib.h
 * @desc Hello library header file.
 */

#ifndef HELLOLIB_H
#define HELLOLIB_H

#include <inttypes.h>

#ifdef __cplusplus
extern "C" {
#endif

#define HELLOLIB_API
#define HELLOLIB_CALL

/**
 * A hello function.
 * @return A packed 32-bit integer, order from high-to-low: major, minor, revision and build.
 */
HELLOLIB_API int32_t HELLOLIB_CALL hellolib_version();

#ifdef __cplusplus
}
#endif

#endif /* HELLOLIB_H */

