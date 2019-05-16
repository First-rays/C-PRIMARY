#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void print(int a){
	if (a > 10)
	print(a / 10);
	printf("% d",a%10);
}
int main7(){
	int a = 0;
	scanf("%d", &a);
	print(a);
	system("pause");
	return 0;
}
