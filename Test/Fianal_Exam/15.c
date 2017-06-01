//10!递归
#include <stdio.h>
int factorial(int n);
int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", factorial(n));
}
int factorial(int n) {
	int result;
	if (n == 0 || n == 1) {
		result = 1;
	}
	else {
		result = factorial(n - 1) * n;  // 递归调用
	}
	return result;
}