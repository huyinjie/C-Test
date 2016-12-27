#include <stdio.h>
int main(void)
{
    char str[20];
    scanf("%s",str);
    printf("%d",my_strlen(str));
    return 0;
}

int my_strlen(const char * str)
{
    const char *s;
    for (s = str; *s; ++s) {}
    return(s - str);
}