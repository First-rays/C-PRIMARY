#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main1()
{
	char arr1[] = { "nihaoChlia"};
	char arr2[] = { "**********" };
	int sz =strlen(arr1);
	int left = 0;
	int right = sz - 1;
	while (left <= right){
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);;
		system("cls");
		left++;
		right--;

	}
	system("pause");
	return 0;
}