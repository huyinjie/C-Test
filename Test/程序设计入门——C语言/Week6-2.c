/*
题目内容：
每个非素数（合数）都可以写成几个素数（也可称为质数）相乘的形式，这几个素数就都叫做这个合数的质因数。比如，6可以被分解为2x3，而24可以被分解为2x2x2x3。

现在，你的程序要读入一个[2,100000]范围内的整数，然后输出它的质因数分解式；当读到的就是素数时，输出它本身。

提示：可以用一个函数来判断某数是否是素数。

输入格式:
一个整数，范围在[2,100000]内。

输出格式：
形如：
n=axbxcxd
或
n=n
所有的符号之间都没有空格，x是小写字母x。abcd这样的数字一定是从小到大排列的。

输入样例：
18

输出样例：
18=2x3x3
*/
//false
#include <stdio.h>
int finished_number(int x) {
	int i, sum = 0;
	for (i = 1; i<x; i++) {
		if (x%i == 0) sum += i;
	}
	if (sum == x) return 1;
	else return 0;
}

int main(void)
{
	int n, m, k = 0;
	int a[3];
	scanf("%d %d", &n, &m);
	if (n < m && n >= 1 && m < 1000) {
		for (int i = n; i <= m; i++) {
			if (finished_number(i) == 1) {
				a[k] = i;
				k++;
			}
		}
		if (k == 0) printf("NIL\n");
		else {
			for (int j = 0; j < k; j++) {
				printf("%d", a[j]);
				if (j != k-1) printf(" ");
			}
		}
	}
	return 0;
}

//correct
#include<stdio.h>
int main(void)
{
    int n,m,count=0;
    scanf("%d %d",&n,&m);
    for(;n<=m;n++){
        int sum=0;
        for(int i=1;i<n;i++){             
            if (n%i==0)    sum+=i;
        }
        if (sum==n){
            if (count==0)  printf("%d",n);
            else    printf(" %d",n);
            count++;
        }
    }
    if (count==0) printf("NIL\n");
    return 0;
}