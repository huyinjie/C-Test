//输出所有的水仙花数
#include <stdio.h>
int unit(int i)
{
    return i%10;
}
int decade(int i)
{
    return i%100/10;
}
int hundreds(int i)
{
    return i/100;
}

int main(void)
{
    int i,a,b,c;
    for(i=100;i<=999;i++)
    {
        a=hundreds(i);
        b=decade(i);
        c=unit(i);
        if(i==a*a*a+b*b*b+c*c*c) printf("%3d\n",i); 
    }
    return 0;
}