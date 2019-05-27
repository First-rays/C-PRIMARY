#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int  count_bit_one(int n)
{
	int count = 0;
	while (n != 0)
	{
		count++;
		n = n&(n - 1);
	}
	return count;
}
int main4()
{
	int m = 0;
	int n = 0;
	int s = 0;
	int ret = 0;
	scanf("%d%d", &m, &n);
	s = m^n;
	ret = count_bit_one(s);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
