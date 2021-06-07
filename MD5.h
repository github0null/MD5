#ifndef _H_MD5
#define _H_MD5

#include <string.h>
#include <stdint.h>

typedef char MD5_RESULT[33];

char *MD5(uint8_t *input, uint32_t size, MD5_RESULT outputBuffer);

#endif
