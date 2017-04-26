//九九乘法表
/*#include <stdio.h>
int main(void)
{
    int i,j;
    for(i=0;i<9;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d*%d=%2d  ",(j+1),(i+1),(i+1)*(j+1));
        }
        printf("\n");
    } 
    return 0;
}*/
#include<stdio.h>
int main()
{
   int i,j;
   for(int i=1,j=1;j<=9;i++){
      printf("%d*%d=%2d ",i,j,i*j);
      if(i==j){
         i=0;
         j++;
         printf("\n");
      }
   }
   return 0;
}