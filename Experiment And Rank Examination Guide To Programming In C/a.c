#include <stdio.h>
int main(void)
{
    char str1[20],str2[20];
    int i=0,k=0,j=0;
    
    scanf("%s",str1);
    scanf("%s",str2);
    
    while(str1[i]!='\0')
    {
        i++;
        k++;
    }
    
    while(str2[j]!='\0')
    {
        str1[k+1]=str2[j];
        j++;
        k++;
    }
    printf("%s\n",str1);
    
}