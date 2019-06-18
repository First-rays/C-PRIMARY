#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main2()
{
	int money = 0;
	int a = 0;  //喝掉汽水数
	int n = 0;  //瓶子数
	scanf("%d", &money);
	n = money;
	a = money;
	while (n>1)
	{ 
	    a += n / 2;
		n = n / 2 + n % 2;
	}
	printf("%d\n", a);
	system("pause");
	return 0;
}
