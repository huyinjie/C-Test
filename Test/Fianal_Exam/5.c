/*
对二维数组m × n矩阵的转置
*/
#include<stdio.h>
void MatrixTurn(int a[100][100], int n, int m);

int main(void)
{
	int i, j, n, m, k;
	int a[100][100];
	printf("m="); //输入行
	scanf("%d", &m); //输入列
	printf("n=");
	scanf("%d", &n);
	
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	MatrixTurn(a, n, m);
	return 0;
}
//m × n矩阵
void MatrixTurn(int a[100][100], int n,int m)
{
	int i, j, k;
	int b[100][100];
	for (i = 0; i< m; i++)
	{
		for (j = 0; j< n; j++)
		{
			b[j][i] = a[i][j];
		}
	}
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
		{
			printf("%3d", b[i][j]);
		}
		printf("\n");
	}
}