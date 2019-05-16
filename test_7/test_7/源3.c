#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int  DigitSum(unsigned  int n){
	if (n<10)
		return n;
	if (n>=10)
	return (n % 10 + DigitSum(n / 10));
}
int main3(){
	unsigned int n = 0;
	scanf("%d", &n);
	int t = DigitSum(n);
	printf("%d\n", t);
	system("pause");
	return 0;
}