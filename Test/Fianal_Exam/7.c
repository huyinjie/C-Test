//求字符串数组长度
#include <stdio.h>
int strlength(char str[]);
int main(void)
{
	char str[10];
	int length, i, k;
	scanf("%s", str);
	printf("%d", strlength(str));

	return 0;
}

int strlength(char str[]) {
	int length = 0, i = 0;
	while (str[i] != '\0') {
		i++;
		length++;
	}
	return length;
}