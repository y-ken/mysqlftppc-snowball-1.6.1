#ifndef _MYSQLDEP
#ifdef __cplusplus
#include <string>
#include <algorithm>
extern "C" {
#endif

#define FT_PACKAGE PACKAGE
#define FT_PACKAGE_NAME PACKAGE_NAME
#define FT_PACKAGE_STRING PACKAGE_STRING
#define FT_PACKAGE_TARNAME PACKAGE_TARNAME
#define FT_PACKAGE_VERSION PACKAGE_VERSION
#define FT_VERSION VERSION

#undef PACKAGE
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef PACKAGE_TARNAME
#undef PACKAGE_VERSION
#undef VERSION

#include <my_global.h>

#undef PACKAGE
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef PACKAGE_TARNAME
#undef PACKAGE_VERSION
#undef VERSION

#define PACKAGE FT_PACKAGE
#define PACKAGE_NAME FT_PACKAGE_NAME
#define PACKAGE_STRING FT_PACKAGE_STRING
#define PACKAGE_TARNAME FT_PACKAGE_TARNAME
#define PACKAGE_VERSION FT_PACKAGE_VERSION
#define VERSION FT_VERSION

#undef FT_PACKAGE
#undef FT_PACKAGE_NAME
#undef FT_PACKAGE_STRING
#undef FT_PACKAGE_TARNAME
#undef FT_PACKAGE_VERSION
#undef FT_VERSION

#include <m_ctype.h>

#ifdef __cplusplus
}
#endif

#define _MYSQLDEP 1
#endif // _MYSQLDEP
