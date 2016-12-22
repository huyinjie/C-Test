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
    printf("%d",max);
    return 0;
}