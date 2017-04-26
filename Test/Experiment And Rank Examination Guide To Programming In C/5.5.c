#include <stdio.h>
int even(int a)
{
    if (a%2==0) return 1;
    else return 0;
}

int main(void)
{
    int m;
    float i,sum=0;
    scanf("%d",&m);

    for(i=1;i<=m;i++)
    {
        if(even(i)==1) sum=sum-1/i;
        if(even(i)==0) sum=sum+1/i;
    }
    printf("%.2f\n",sum);
    return 0;
}