#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int fun(int *str, int sz)
{
	int *it1 = str;
	int t = 0;
	int *left = str;
	int *right = str + sz - 1;
	while (left < right)
	{
		while ((*left) % 2 == 1)
		{
			left++;
		}
		while ((*right) % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			t = *left;
			*left = *right;
			*right = t;
		}
	}
	return str;
}
void show(int *str,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(str + i));
	}
	printf("\n");
}
int main4()
{
	int arr[5] = {0};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	fun(arr,sz);
	show(arr, sz);

	system("pause");
	return 0;
}

#if 0
int main()
{

	int num = 0;
	int count = 0;
	scanf("%d", &num);
	while(num >= 100 || num <= 0)
	{
		scanf("%d", &num);
	}
	while (num!=1)
	{
		if (num % 2 == 0)
		{
			num /= 2;
			count++;
		}
		else
		{
			num = num * 3 + 1;
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
#endif
