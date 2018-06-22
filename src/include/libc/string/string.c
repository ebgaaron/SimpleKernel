
// This file is a part of MRNIU/SimpleKernel (https://github.com/MRNIU/SimpleKernel).

// string.c for MRNIU/SimpleKernel.

#include "stddef.h"

// 获取字符串长度
size_t strlen(const char* str){
	size_t len = 0;
	while (str[len])
		len++;
	return len;
}
