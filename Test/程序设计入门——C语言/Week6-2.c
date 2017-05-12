#include <stdio.h>
int finished_number(int x) {
	int i, sum = 0;
	for (i = 1; i<x; i++) {
		if (x%i == 0) sum += i;
	}
	if (sum == x) return 1;
	else return 0;
}

int main(void)
{
	int n, m, k = 0;
	int a[3];
	scanf("%d %d", &n, &m);
	if (n < m && n >= 1 && m < 1000) {
		for (int i = n; i <= m; i++) {
			if (finished_number(i) == 1) {
				a[k] = i;
				k++;
			}
		}
		if (k == 0) printf("NIL\n");
		else {
			for (int j = 0; j < k; j++) {
				printf("%d", a[j]);
				if (j != k-1) printf(" ");
			}
		}
	}
	return 0;
}

//
#include<stdio.h>
int main(void)
{
    int n,m,count=0;
    scanf("%d %d",&n,&m);
    for(;n<=m;n++){
        int sum=0;
        for(int i=1;i<n;i++){             
            if (n%i==0)    sum+=i;
        }
        if (sum==n){
            if (count==0)  printf("%d",n);
            else    printf(" %d",n);
            count++;
        }
    }
    if (count==0) printf("NIL\n");
    return 0;
}