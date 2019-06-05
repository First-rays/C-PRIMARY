#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
char *myString()
{
	char buffer[6] = { 0 };
	char *s = "Hello World!";
	int i = 0;
	for (i = 0; i < sizeof(buffer)-1; i++)
	{
		buffer[i] = *(s + i);
	}
	return buffer;
}
int main()
{
	printf("%s\n", myString());
	return 0;
}