#include <stdio.h>
//打印转置n阶行列式
void MatrixTurn(int a[100][100],int n)
{
    int i,j,k;
    for(i=0,j=1;i<100;i++)
    {
        for(j=i+1;j<100;j++)
        {
            k=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=k;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
}

//求矩阵内个元素平均值
void Average(int a[100][100],int n)
{
    int i,j;
    float sum=0,count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
            count++;
        }
    }
    printf("Average=%3.1f\n",(sum/count));
}
//对角线元素之和
void Diagonal(int a[100][100],int n)
{
    int i,j;
    int sum=0;
    if(n%2==0) {
        for(i=0;i<n;i++) {sum=sum+a[i][i]+a[i][n-1-i];}
        }
    if(n%2==1) {
        for(i=0;i<n;i++) {sum=sum+a[i][i]+a[i][n-1-i];}
        sum=sum-a[i/2][i/2];
        }
    printf("sum=%2d\n",sum); 
}
//周边元素之和
void Surround(int a[100][100],int n)
{
    int sum=0;
    int i,j;
    for(i=0;i<n;i++)
    {
        if(i==n-1||i==0)
        {
            for(j=0;j<n;j++)
            {
                sum=sum+a[i][j];
            }
        }
        else {
            sum=sum+a[i][0]+a[i][n-1];
        }       
    }
    printf("Surround=%2d\n",sum);
}


int main(void)
{
    int i,j,n,k,a[100][100];
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    MatrixTurn(a,n);
    Average(a,n);
    Diagonal(a,n);
    Surround(a,n);
}
