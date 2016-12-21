#include <stdio.h>
int max(int a,int b)
{
    if (a>b) return a;
    else return b;
}
int min(int a,int b)
{
    if (a<b) return a;
    else return b;
}

int main(void)
{
    int a,b,x,y,m;
    scanf("%d%d",&a,&b);
    x=max(a,b);
    y=min(a,b);

    if (m!=0)
    {
        m=x%y;
        x=y;
        y=m;
    }
    printf("the largest common divisor is %d\n",x);
    printf("the least common multiple is %d\n",(a*b)/x);

    return 0;
}