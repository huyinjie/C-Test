#include <stdio.h>
int main(void)
{
    int x;
    scanf("%d",&x);
    
    if (x<2) printf("%d\n",3*x+5);
    if (x<12&&x>=2) printf("%d\n",x*x);
    if (x>=12) printf("%d\n",4*x-7);
    
    return 0;
}