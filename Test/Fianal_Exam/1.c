//字符串复制，strcpy的实现
//http://blog.csdn.net/yuxikuo_1/article/details/41826469
#include <stdio.h>
#include <assert.h>
char *strcpy(char *dst, const char *src);
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
