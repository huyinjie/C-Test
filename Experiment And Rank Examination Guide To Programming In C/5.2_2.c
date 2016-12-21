#include <stdio.h>
#include <math.h>

int main(void)
{
    int i,j;
    printf("prime number are: ");
    for(i=500;i<1001;i++)
    {
        for(j=2;j<=(int)sqrt((double)i);j++)
            if (i%j==0) break;
        printf("%4d\n",i);
    }
    return 0;
}