#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main2()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入两个整数：\n");
	scanf("%d %d", &a, &b);
	//int c = (b - a)/2 + a;
	c = (a&b) + ((a^b)>>1);
	printf("%d\n", c);

	system("pause");
	return 0;
}
