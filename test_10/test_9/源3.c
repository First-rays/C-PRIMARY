#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//void print(int n)
//{
//	if (n > 10)
//		print(n / 10);
//	printf("%d ",n % 10);
//}
int main3()
{
	int num = 0;
	scanf("%d", &num);
	//print(num);
	while (num)
	{
		printf("%d\n", num % 10);
		num /= 10;
	}
	system("pause");
	return 0;
}
