#include <stdio.h>
int main(void)
{
    int a[5],i,j,max;
    
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("\n");
    
    for(i=0;i<5;i++)
        for(j=0;j<4-i;j++)
        {
            if(a[j]>a[j+1])
            {
                max=a[j];
                a[j]=a[j+1];
                a[j+1]=max;
            }
        }
    
    for(i=0;i<5;i++)
        printf("%d\n",a[i]);
    return 0;
}