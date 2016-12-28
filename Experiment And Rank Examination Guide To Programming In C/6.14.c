#include <stdio.h>
int main(void)
{
    int i,num[25]={0};
    char c;
    while((c=getchar())!='#')
    {
        if(c>=65 && c<=90) num[c-'A']+=1;
        
    }
}