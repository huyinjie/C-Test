//小写字母转换成大写字母
#include <stdio.h>
int main(void)
{
    char m;
    scanf("%c",&m);
    if(m>97&&m<122) printf("%c\n",m-32);
    return 0;
}