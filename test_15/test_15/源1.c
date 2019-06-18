#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void find_twonum(int *arr, int *x, int *y, int sz)
{
	int i = 0;
	int pos = 0;
	int s = 0;
	for (i = 0; i < sz; i++)
	{
		s = s^arr[i];
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
		if (((arr[i] >> pos) & 1) == 1)
		{
			*x = (*x)^arr[i];
		}
		else
		{	
			*y = (*y) ^ arr[i];
		}
	}
}
int main1()
{
	int arr[] = { 1, 1, 2, 2, 3, 4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int numbers1 = 0;
	int numbers2 = 0;
	find_twonum(arr, &numbers1, &numbers2,sz);
	printf("%d %d\n", numbers1, numbers2);
	system("pause");
	return 0;
}
