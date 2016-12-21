#include <stdio.h>
#include <math.h>

int primer_number(int a)
{
    int i;
    for(i=2;i<2/a;i++)
    {
        if (a%i==0) return 1;
    }
}
int main(void)
{
    int i;
    for(i=500;i<1001;i++)
    {
        if(primer_number(i)==0) printf("%4d\n",i);
    }
}