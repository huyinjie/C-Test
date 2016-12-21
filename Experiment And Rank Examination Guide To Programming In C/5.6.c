#include <stdio.h>
#include <math.h>
int number(int n)
{
    int sum=0,i;
    for(i=n-1;i>=0;i--)
        sum=sum+3*pow(10,i);
}

int main(void)
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+number(i);
    printf("%d\n",sum);
    return 0;
}