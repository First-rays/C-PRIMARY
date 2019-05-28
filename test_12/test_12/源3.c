#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main3()
{
	int a[] = { 1, 2, 4, 3, 1, 2, 4 ,5};
	int i = 0;
	int s = 0;
	int pos = 0;
	int x = 0;
	int y = 0;
	int sz = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < sz; i++)
	{
		s =s ^ a[i];
	}
	for (i = 0; i < 32; i++)
	{
		if (((s >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((a[i] >> pos) & 1) == 1)
			x ^= a[i];
		else
			y ^= a[i];
	}
	printf("%d %d\n", x, y);
	//printf("%d\n", s);
	system("pause");
	return 0;
}
