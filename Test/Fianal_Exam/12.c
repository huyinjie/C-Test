//求素数

#include <stdio.h>
int primer_number(int a);

int main(void)
{
	int x;
	scanf("%d", &x);
	if (primer_number(x) == 1) printf("yes");
	if (primer_number(x) == -1) printf("no");

	return 0;
}

int primer_number(int a)
{
	int i, m = 1;
	if (a == 1) return m = -1;
	//for(i=2;i<(int)sqrt(a);i++)	
	for (i = 2; i*i <= a; i++)
	{
		if (a%i == 0) return m = -1;
	}
	return m;
}