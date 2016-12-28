#include <stdio.h>
int main(void)
{
    size_t my_strlen(const char *str);
    
    char str[20];
    scanf("%s",str);
    int l=my_strlen(str);
    printf("%d\n",l);
    
    return 0;    
}

size_t my_strlen(const char *str)
{
    const char *s;
    for (s = str; *s; ++s)
                ;
    return (s - str);
}