#include <stdio.h>
#include <math.h>

int main(void)
{
    int i,j;
    for(i=500;i<1001;i++)
    {
        for(j=2;j<=sqrt(i);j++)
        {
            if (i%j!=0) continue;
            else break;
        }
        printf("%d");
    }
}