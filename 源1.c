#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main1(){
	int a = 10;
	int b = 20;
	printf("a = %d b = %d\n", a, b);
	int t = a;
		a = b;
		b = t;
	printf("a = %d b = %d\n", a, b);
	system("pause");	
	return 0;
}
