//三阶魔方矩阵

//（1）将1放在第一行中间一列。
//（2）从2开始直到n×n止各数依次按下列规则存放：
//按右上45°方向行走，也就是说下一个数的行数比前一个数的行数减1，列数加1
//<1>.如果行范围超出矩阵范围，则行数变为n - 1行，列不变。
//<2>.如果列范围超出矩阵范围，则列数变为0列，行不变。
//<3>.如果按上面规则确定的位置上已有数，或上一个数是第0行第n - 1列时，则把下一个数放在上一个数的下面。
//（3）按照上述规则(1)(2)将N ^ 2 个数都放入矩阵中，得到的矩阵即为N阶魔方矩阵。

#include <stdio.h>

int rowover(int x) //判断行是否超过矩阵范围
{
	return (x > 2 || x < 0) ? 1 : 0;
}
int columnvoer(int y) //判断列是否超过矩阵范围
{
	return (y > 2 || y < 0) ? 1 : 0;
}


int main(void)
{
	int a[3][3] = { 0,1,0,0,0,0,0,0,0 };
	int x,y; //a[x][y]
	int i,m,n,j;
	 
	for (i = 2,x = 0, y = 1; i < 10; i++)
	{
		m = x; n = y;
		x = x - 1;
		y = y + 1;
		if (rowover(x) == 1)
		{
			if (columnvoer(y) == 1) { x = 2; y = 0; }
			else x = 2;
		}
		
		if (columnvoer(y) == 1)
		{
			if (rowover(x) == 1) { x = 2; y = 0; }
			else  y = 0; 
		}
		
		if (a[x][y] !=0)
		{
			x = m + 1;
			y = n;
		}
		
		a[x][y] = i;
	}
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%2d  ", a[i][j]);
		}
		printf("\n");
	}
return 0;
}