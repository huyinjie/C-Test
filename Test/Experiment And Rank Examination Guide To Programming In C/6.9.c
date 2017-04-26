//10位同学参加3门课程考试，找出每门课的最高分
#include <stdio.h>
int main(void)
{
    int a[3][10];
    int i,j,max,sum=0;
    for(i=0;i<3;i++)
    {
        printf("Lesson %d\n",i+1);
        for(j=0;j<10;j++)
        {
            printf("student %d:  ",j+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0,max=a[i][j];j<10;j++)
        {
            if(a[i][j]>max) max=a[i][j];
        }
        printf("the max of lesson %d is %d\n",i,max);
    }
    return 0;
}