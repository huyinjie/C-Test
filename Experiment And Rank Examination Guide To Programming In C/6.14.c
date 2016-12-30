//输入一个以'#'结束的字符串，统计大写字母个数，输出出现频率最高的大写字母及其个数
#include <stdio.h>
int main(void)
{
    int i,m,num[26]={0};
    int max=num[0];
    char c;
    while((c=getchar())!='#')
    {
        if(c>=65 && c<=90) num[c-'A']+=1;
    }
    for(i=0;i<26;i++)
        if(max<num[i])
        {
            max=num[i];
            m=i;
        } 
    printf("%c:",m+65);
    printf("%d\n",max);
}