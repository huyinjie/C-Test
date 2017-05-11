//输出1000以内所有的完数

//Way 1
#include <stdio.h> 
int main(void) 
{ 
    int j,i,s; 
    for(j=1;j<=1000;j++) 
    { 
        s=0; 
        for(i=1;i<j;i++) 
        {
            if(j%i==0) s=s+i; 
        }
        if(s==j) printf("%d\n",s); 
    }
    return 0; 
} 

//Way 2
#include <stdio.h>
int main(void)
{
	static int k[10];
	int i, j, n, s;
	for (j = 2; j <= 1000; j++) {
		n = -1; s = j;
		for (i = 1; i<j; i++) {
			if (j%i == 0) {
				n++;
				s = s - i;
				k[n] = i;
			}
		}
		if (s == 0){
			printf("%d是一个完数,它的因子是", j);
			for (i = 0; i<n; i++){
				printf("%d ,", j);
			}
			printf("%d\n", k[n]);
		}
	}
	return 0;
}
