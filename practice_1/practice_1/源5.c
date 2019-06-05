#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define row 4
#define col 4
int find_n(int arr[row][col], int n)
{
	int i = 0;
	int j = col-1;
	while (i < row&&j>=0)
	{
		if (n>arr[i][j])
		{
			i++;
		}
		else if (n < arr[i][j])
		{
			j--;
		}
		else
			return 1;
	}
	return 0;
}
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	int ret = 0;
	int arr[row][col] = { 0 };
	printf("请输入%d*%d的矩阵：\n",row,col);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("请输入要查询的数：\n");
	scanf("%d", &n);
	//find_n(arr, n);
	if (find_n(arr, n))
		printf("找到了！\n");
	else
		printf("没有找到！\n");
	system("pause");
	return 0;
}
