//冒泡排序
#include <stdio.h>
void bubble_sort(int a[])
{
	int i, j, p;
	for (i = 0; i<9; i++)
	{
		for (j = 0; j<9 - i; j++)
			if (a[j]>a[j + 1])
			{
				p = a[j + 1];
				a[j + 1] = a[j];
				a[j] = p;
			}
	}
}

int main(void)
{
	int a[11], i;
	printf("Input 10 numbers:\n");
	for (i = 0; i<10; i++)
	{
		scanf("%d", &a[i]);
	}
	bubble_sort(a);
	for (i = 0; i<10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}