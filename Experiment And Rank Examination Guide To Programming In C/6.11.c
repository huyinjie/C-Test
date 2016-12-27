#include <stdio.h>

int main(void)
{
<<<<<<< HEAD
	char strlink(char str1[20], char str2[20]);
	char str1[20], str2[20];
	scanf("%s", str1);
	scanf("%s", str2);
	printf("%s", strlink(str1,str2));
	return 0;
=======
    void strlink(char str1[],char str2[]);
    char str1[20],str2[20];
    scanf("%s",str1);
    scanf("%s",str2);
    printf("%s",strlink(str1[20],str2[20]));
    return 0;
>>>>>>> origin/master
}

char strlink(char str1[20], char str2[20])
{
	int i = 0, k = 0, j = 0;
	while (str1[i] != '/0')
	{
		i++;
		k++;
	}

	do {
		str1[k] = str2[j];
		j++;
		k++;
	} while (str2[j] != '\0');
	str1[k] = '\0';
	return str1[20];
}