#include <stdio.h>
#include <math.h>

int primer_number(int a)
{
    int i,m=0;
    //for(i=2;i<(int)sqrt(a);i++)
    {
        if (a%i==0) return m=1;
    }
    return m;
}

int main(void)
{
    int i;
    for(i=500;i<=1000;i++)
    {
        if(primer_number(i)==0) printf("%4d\n",i);
    }
}