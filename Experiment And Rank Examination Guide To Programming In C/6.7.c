#include <stdio.h>
int main(void)
{
    int a[5][5];
    int i,j,k;
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
        printf("\n");
    
    for(i=1;i<5;i++)
        for(j=0;j<i;j++)
        {
            k=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=k;
        }
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}