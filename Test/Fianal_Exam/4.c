/*
将三个数从小到大输出（利用指针）
冒泡排序 其他排序详见6.c
*/
#include <stdio.h>
int main(void)
{
	int a[3],i,j,temp;
	for (i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}
	for(i=0;i<2;i++){
		for(j=0;j<2-i;j++){
			if(*(a+j)>*(a+j+1)){
				temp = *(a + j);
				*(a + j) = *(a + j + 1);
				*(a + j + 1) = temp;
			}
		}
	}
	for (i = 0; i < 3; i++) {
		printf("%d ", *(a + i));
	}

	return 0;
}