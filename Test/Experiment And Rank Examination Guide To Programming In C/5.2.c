//输出500~1000的素数
#include <stdio.h>
#include <math.h>

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

int main(void)
{
    int i;
    for(i=500;i<=1000;i++)
    {
        if(primer_number(i)==1) printf("%4d\n",i);
    }
}