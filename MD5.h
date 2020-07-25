#ifndef _H_MD5
#define _H_MD5

#include <memory.h>
#include <string.h>
#include <stdio.h>

#ifndef MD5_EXPORT
#define MD5API _declspec(dllimport)
#else
#define MD5API _declspec(dllexport)
#endif

typedef char MD5VALUE[33];

MD5API char *MD5(unsigned char *input, unsigned int inputSize, MD5VALUE outputBuffer, bool isUpper/* «∑Ò¥Û–¥*/);

#endif