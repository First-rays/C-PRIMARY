#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int search(int arr[10], int k, int sz){
	int right = sz - 1;
	int left = 0;
	while (left <= right){
	int mid = left + (right - left) / 2;
		if (arr[mid] > k){
			right = mid - 1;
		}
		else if (arr[mid] < k){
			left = mid + 1;
		}
		else
			return mid;
	}
			return -1;
}
int main2()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int t = search(arr, k, sz);
	if (t == -1){
		printf("没有找到！\n");
	}
	else
		printf("找到了!%d\n", t);
	system("pause");
	return 0;
}