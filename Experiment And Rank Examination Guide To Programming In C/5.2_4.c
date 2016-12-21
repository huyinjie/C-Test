#include <stdio.h>
int factorial(int n) //n>1
{
    int m=1,i;
    for(i=1;i<=n;i++)
    {
        m=m*i;
    }
    return m;
}

int main(void)
{
    int n,i,sum=0;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        sum=sum+factorial(i);
    }
    printf("%d\n",sum);
    return 0;
}

