#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value != 0)
	{
		if (value % 2 == 1)
			count++;
		value = value >> 1;
	}
	return count;
}

int main1()
{	
	int value = 0;
	scanf("%d", &value);
	int ret = count_one_bits(value);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
