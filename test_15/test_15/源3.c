#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
char* my_strcpy(char* dest, char* src)
{
	char*p = dest;
	while (*dest++ = *src++);
	return p;
}
int main3()
{
	char dest[30] = "abc";
	char* src ="helloworld";
	my_strcpy(dest, src);
	printf("%s\n", dest);


	system("pause");
	return 0;
}
