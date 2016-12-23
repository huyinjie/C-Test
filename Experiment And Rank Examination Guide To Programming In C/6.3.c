#include <stdio.h>
#define N 5
int main(void)
{
    int a[N+1];
    int i,max;
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    scanf("%d",&a[N]);
    for(i=N-1;i>=0;i--)
    {
        if(a[i]>a[i+1])
        {
            max=a[i];
            a[i]=a[i+1];
            a[i+1]=max;
        }
    }
    printf("\n");
    for(i=0;i<N+1;i++)
        printf("%4d",a[i]);
    return 0;
}