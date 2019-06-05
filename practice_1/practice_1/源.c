#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
//选择排序
void choose_sort(int *arr, int sz)
{
	int i = 0;
	int j = 0;
	int t = 0;
	int flag = 0;
	for (i = 0; i < sz; i++)
	{
		for (j = i + 1; j<sz; j++)
		{
			if (arr[j] < arr[i])
			{
				flag = 1;
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
			if (flag == 0)
				break;
		}
	}
}
//插入排序
void insert_sort(int* arr, int sz)
{
	int i = 0; 
	int j = 0;
	int t = 0;
	for (i = 1; i < sz; i++)
	{
		int temp = arr[i];
		for (j = i-1; j >= 0; j--)
		{
			if (temp < arr[j])
			{
				arr[j+1] = arr[j];
			}
			else
				break;
		}
		arr[j+1]= temp;
	}

}
//打印数组
void print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main1()
{
	int arr[10] = { 56, 8, 3, 4, 5, 6, 7, 1, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//choose_sort(arr, sz);
	insert_sort(arr, sz);
	print(arr, sz);

	system("pause");
	return 0;
}
