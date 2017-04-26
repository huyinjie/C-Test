//杨辉三角前十行
#include <stdio.h>
int main(void)
{
    int a[10][11]={0,1};
    int i,j;
    for(i=1;i<10;i++)
        for(j=1;j<=i+1;j++)
            a[i][j]=a[i-1][j]+a[i-1][j-1];
    for(i=0;i<10;i++)
    {
        for(j=1;j<=i+1;j++)
        {
            printf("%3d  ",a[i][j]);
        }
    printf("\n");
    }
    return 0;
}