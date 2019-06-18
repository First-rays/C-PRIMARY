#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
char* my_strcat(char* dest, char* src)
{
	char*p = dest;
	while (*dest!='\0')
	{
		dest++;
	}
	while (*dest++ = *src++);
	return p;
}
int main()
{
	char dest[30] = "abc";
	char*src = "defgh";
	my_strcat(dest,src);
	printf("%s\n", dest);


	system("pause");
	return 0;
}
