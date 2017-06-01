//辗转相除法求最大公约数和最小公倍数
//来源http://blog.csdn.net/iwm_next/article/details/7450424


#include<stdio.h>  
int main(void)   /*  辗转相除法求最大公约数 */
{
	int m, n, a, b, t, c;
	printf("Input two integer numbers:\n");
	scanf("%d%d", &a, &b);
	m = a;   n = b;
	while (b != 0)  /* 余数不为0，继续相除，直到余数为0 */
	{
		c = a%b; 
		a = b;  
		b = c;
	}
	printf("The largest common divisor:%d\n", a);
	printf("The least common multiple:%d\n", m*n / a);

	return 0;
}
