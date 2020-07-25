#ifndef _H_MD5
#define _H_MD5

#include <memory.h>
#include <string.h>
#include <stdio.h>

typedef char MD5VALUE[33];

char *MD5(char *input, uint32_t inputSize, MD5VALUE outputBuffer);

#endif