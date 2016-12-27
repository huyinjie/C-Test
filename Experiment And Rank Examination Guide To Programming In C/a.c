#include <stdio.h>

char *my_strcat(char *dest, const char *src)
{
    size_t i,j;
    for (i=0; dest[i]!='\0'; i++)
        ;
    for (j=0; src[j]!='\0'; j++)
        dest[i+j]=src[j];
    dest[i+j]='\0';
    return dest;
}


int main(void)
{
    char a[10],b[10];
    scanf("%s",a);
    scanf("%s",b);
    my_strcat(a,b);
    printf("%s\n",a);
    return 0;
}