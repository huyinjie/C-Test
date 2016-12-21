#include <stdio.h>
int main(void)
{
    int i,j;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        printf("%d%d%d",(i+1),(j+1),(i+1)*(j+1));
    }
    printf("\n");
    return 0;
}