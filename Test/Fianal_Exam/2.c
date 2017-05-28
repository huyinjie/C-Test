//求10个数的最大值
//普通版
#include <stdio.h>
int main(void)
{
	int str[10], i, max;
	for (i = 0; i < 10; i++) {
		scanf("%d", &str[i]);
	}
	max = str[0];
	for (i = 0; i < 10; i++) {
		if (str[i] >= max) max = str[i];
	}
	printf("Max=%d\n", max);

	return 0;
}

//函数版
#include <stdio.h>
int findmax(int *str); //这里的*str改成str[]等效
int main(void)
{
	int str[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &str[i]);
	}
	printf("Max=%d\n", findmax(str));
	
	return 0;
}
int findmax(int *str) {
	int i, max;
	max = str[0];
	for (i = 0; i < 10; i++) {
		if (str[i] >= max) max = str[i];
	}
	return max;
}