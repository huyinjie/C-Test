//最大公约数和最小公倍数（辗转相除法）
//因一个函数两个返回值，故使用指针返回值，return返回状态

#include <stdio.h>
int max(int a, int b);
int min(int a, int b);
int OutPut(int a, int b); //依次返回最大公倍数，最小公约数

int main(void)
{
	int a, b;
	scanf("%d%d", &a, &b);
	OutPut(a, b);
	printf("Least common multiple:%d",)
	return 0;
}
int OutPut(int a, int b) {
	int x, y;
	x = max(a, b);
	y = min(a, b);

	while (m != 0)
	{
		m = x%y;
		x = y;
		y = m;
	}
	printf("the largest common divisor is %d\n", x);
	printf("the least common multiple is %d\n", (a*b) / x);

}
int max(int a, int b){
	if (a>b) return a;
	else return b;
}
int min(int a, int b){
	if (a<b) return a;
	else return b;
}