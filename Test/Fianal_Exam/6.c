//选择法排序(默认是整型数组，从小到大排序，非函数)
//来源https://zh.wikipedia.org/wiki/%E9%80%89%E6%8B%A9%E6%8E%92%E5%BA%8F
//冒泡法见4.c
#include<stdio.h>
void selection_sort(int arr[], int len);
int main(void)
{
	int len=0;
	int str[100], i;
	scanf("%d", &len);
	for (i = 0; i < len; i++) {
		scanf("%d", &str[i]);
	}
	selection_sort(str, len);
	for (i = 0; i < len; i++) {
		printf("%2d", str[i]);
	}
	
	return 0;
}
void selection_sort(int arr[], int len) {
	int i, j, min, temp;
	for (i = 0; i < len - 1; i++) {
		min = i;
		for (j = i + 1; j < len; j++)
			if (arr[min] > arr[j])
				min = j;
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}