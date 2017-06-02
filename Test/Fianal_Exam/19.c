//判断字符串是否'回文'
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[20],str2[20],ch;
    scanf("%s",str1);
    int i,l=strlen(str1);
    strcpy(str2,str1);
    for(i=0;i<l/2;i++)
    {
        ch=str1[i];
        str1[i]=str1[l-i-1];
        str1[l-i-1]=ch;
    }
    if (strcmp(str1,str2)==0) printf("yes\n");
    else printf("no\n");
    return 0;
}
