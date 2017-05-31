//将数组中的数反序输出
#include <stdio.h>
int strlength(char str[]); //返回字符串数组字符数量
int main(void)
{
	char str[10];
	int length, i, k;
	scanf("%s", str);
	length = strlength(str);
	for (i = 0; i < (int)length / 2; i++) {
		k = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = k;
	}
	printf("%s", str);

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