//输出1000以内所有的完数
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
} 
