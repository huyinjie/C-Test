//对字符串由小到大排列
//没写几个字符串，默认书P100 例4-7
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i, j;
	char t[20];
	char s[5][20] = { "China","American","Japan","France","Australia" };
	for (i = 0; i<4; i++) {
		for (j = i + 1; j<5; j++) {
			if (strcmp(s[i], s[j])>0) {
				strcpy(t, s[i]);
				strcpy(s[i], s[j]);
				strcpy(s[j], t);
			}
		}
	}
	for (i = 0; i<5; i++) {
		printf("%s\n", s[i]);
	}
	return 0;
}