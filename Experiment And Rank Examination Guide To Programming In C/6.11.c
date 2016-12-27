#include <stdio.h>
int main(void)
{
    //char strlink(char str1[20],char str2[20]);
    char str1[20],str2[20];
    scanf("%s",str1);
    scanf("%s",str2);
    //printf("%s\n",strlink(str1,str2));
    return 0;
}

/*
char strlink(char str1[20],char str2[20])
{
    int i=0,k=0,j=0;
    while(str1[i]!=EOF)
    {
        i++;
        k++;
    }
    
    do{
        str1[k+1]=str2[j];
        j++;
        k++;
    }
    while(str2[j]!=EOF);
    return str1[20];
}
*/