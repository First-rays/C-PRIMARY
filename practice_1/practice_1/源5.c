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
	printf("������%d*%d�ľ���\n",row,col);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("������Ҫ��ѯ������\n");
	scanf("%d", &n);
	//find_n(arr, n);
	if (find_n(arr, n))
		printf("�ҵ��ˣ�\n");
	else
		printf("û���ҵ���\n");
	system("pause");
	return 0;
}
