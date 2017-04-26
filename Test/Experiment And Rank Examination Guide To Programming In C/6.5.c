#include <stdio.h>
int main(void)
{
    int a[5][5];
    int i,j,sum=0;
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    for(i=0,j=0;i<5;i++,j++)
        sum=sum+a[i][j];
    printf("%d",sum);
    
    return 0;
}