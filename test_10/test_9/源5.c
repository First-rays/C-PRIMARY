#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main5()
{
	int arr[10] = { 1, 3, 2, 5, 5, 3, 2, 6, 1, 91 };
	int i = 0;
	int x = 0;
	int y = 0;
	int count = 0;
	int ret = 0;
	for (i = 0; i < 10; i++)
	{
		ret = ret^arr[i];
	}
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			count=i;
			break;
		}	
	}
//	printf("%d\n", count);
	for (i = 0; i < 10; i++)
	{
		if (((arr[i] >> count) & 1) == 1)
			x ^= arr[i];
		else
			y ^= arr[i];
	}
	printf("%d %d", x, y);
	system("pause");
	return 0;
}
