#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value)
{
	int arr[32] = { 0 };
	int i = 0;
	int head = 0;
	int tail = 31;
	int t = 0;
	int sum = 0;
	for (i = 31; i >=0; i--)
	{
		arr[i] = (value >> i) & 1;
	}
	while (head <= tail)
	{
		t = arr[head];
		arr[head] = arr[tail];
		arr[tail] = t;
		head++;
		tail--;
	}
	for (i = 31; i >= 0; i--)
	{
		sum += arr[i] * pow(2, i);
	}
	return sum;
}
int main1()
{
	unsigned int value = 0;
	scanf("%d", &value);
	printf("%u\n", reverse_bit(value));
	system("pause");
	return 0;
}
