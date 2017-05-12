#include <stdio.h>
int primer_number(int a);
int main(void)
{
    int x;
    scanf("%d",&x);
    if(x>=2 && x<=100000){
        
    }
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