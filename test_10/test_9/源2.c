#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main2()
{
	int num = 0;
	int j = 0;
	int i = 0;
	scanf("%d", &num);
	printf("����λ��\n");
	for (j = 30; j >= 0; j -= 2)
	{
		printf("%d", (num>>j)&1);
	}
	printf("\nż��λ��\n");
	for (i = 31; i > 0; i -= 2)
	{
		printf("%d", (num>>i)&1);
	}
	printf("\n");
	system("pause");
	return 0;
}
