//字符串复制，strcpy的实现
/*
strcpy 是 C语言的函数之一，来自 C语言标准库，定义于 string.h，它可以复制以 null 为结束字符的内存区块到另一个内存区块内。由于字符串在 C 语言不是首要的数据类型，而是以实现的方式来替代，在内存内以连续的字节区块组成，strcpy 可以有效复制两个配置在内存以指针回传的字符串（字符指针或是字符串指针）。
*/
//参考资料http://blog.csdn.net/yuxikuo_1/article/details/41826469
//官方实现（GCC-4.8.0) https://zh.wikipedia.org/wiki/Strcpy
#include <stdio.h>
#include <assert.h>
char *strcpy(char *dst, const char *src); //destination,source
int main(void)
{
	char a[20] = "Hello,world";
	char b[20];
	printf("%s\n", strcpy(b, a));

	return 0;
}

char *strcpy(char *dst, const char *src)  
{
	assert(dst != NULL && src != NULL);   
	char *ret = dst; 
	while ((*dst++ = *src++) != '\0'); 

	return ret;
}
