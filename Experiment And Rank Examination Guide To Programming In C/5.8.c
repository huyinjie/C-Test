#include <stdio.h>
#include <math.h>
float high(int n)
{
    float m;
    m=100/(pow(2,n));
    return m;
}

int main(void)
{
    float sum=100,n,i;
    for(i=0;i<8;i++)
    {
        sum=sum+100/(pow(2,n))*2;
    }
    printf("sum=%f\n",sum);
    printf("8th=%f\n",high(8));
    return 0;
}