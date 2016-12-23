#include <stdio.h>
int main(void)
{
    int a[5][5];
    int i,j,max;
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
        printf("\n");
    
    for(i=0;i<5;i++)
        for(j=0;j<i+1;j++)
            sum=sum+a[i][j];
    printf("%d\n",sum);
    return 0;
}