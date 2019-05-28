#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main4()
{
	char arr[] = "student a am i";
	int sz = sizeof(arr) / sizeof(arr[0]);
	int head = 0;
	int i = 0;
	int tail = sz - 1;
	char t;
	int count = 0;
	int flag = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
	while (head <= tail)
	{
		t = arr[head];
		arr[head] = arr[tail];
		arr[tail] = t;
		head++;
		tail--;
	}
	for (i = 0; i < sz - 1; i++)
	{
		if (arr[i] == ' ')
		{
			count++;
		}
		if ((count == 1)&& (arr[i]==' '))
		{
			t = arr[i + 1];
			arr[i + 1] = arr[i + 2];
			arr[i + 2] = t;
			continue;
		}
		if (count == 3)
		{
			head = i + 1;
			tail = sz - 1;
			while (head <= tail)
			{
				t = arr[head];
				arr[head] = arr[tail];
				arr[tail] = t;
				head++;
				tail--;
			}
		break;
		}
	}
	
	for (i = 0; i < sz; i++)
	{
		printf("%c", arr[i]);
	}
	system("pause");
	return 0;
}
