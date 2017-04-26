//找出四个整数中的最大值
#include <stdio.h>
int main(void)
{
    int a[4],i,max;
    for(i=0;i<4;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<4;i++)
    {
        if(a[0]<a[i]) max=a[i];
    }
    printf("%d\n",max);
    return 0;
}