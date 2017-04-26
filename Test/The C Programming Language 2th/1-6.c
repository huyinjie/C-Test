//验证布尔表达式getchar()!=EOF的取值是0还是1
#include <stdio.h>
int main(void)
{
    int c;

    while(c=getchar()!= EOF) //c=getchar()!= EOF等价于c=（getchar()!= EOF）
    {
        printf("%d\n",c);
    }
    printf("%d - at EOF\n",c);
}