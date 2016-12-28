#include <stdio.h>
int main(void)
{
    int i,m,num[25]={0};
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
    printf("%s:%d",i+'A',max);
}