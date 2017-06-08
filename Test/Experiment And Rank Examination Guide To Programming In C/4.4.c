//小写字母转换成大写字母
//普通版
#include <stdio.h>
int main(void)
{
    char m;
    scanf("%c",&m);
    if(m>97&&m<122) printf("%c\n",m-32);
    return 0;
}

//函数版
#include <stdio.h>
char latter(char a);
int main(void)
{
	char m;
	scanf("%c", &m);
	 printf("%c\n",latter(m));
	return 0;
}

char latter(char m) {
	if (m >= 97 && m <= 122) return ("%c\n", m - 32);
	
}