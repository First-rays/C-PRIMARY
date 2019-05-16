#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int fib1(int n){
	int i = 0;
	int a = 1;
	int b = 1;
	int c = 1;
	if (n <= 2)
		return 1;
	return fib1(n-2)+fib1(n-1);
}
int fib2(int n){
	int i = 0;
	int a = 1;
	int b = 1;
	int c = 1;
	if (n <= 2)
		return c;
	else{
		for (i = 0; i < n - 2; i++){
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}
int main1(){
	int n = 0;
	scanf("%d", &n);
	int t1 = fib1(n);
	int t2 = fib2(n);
	printf("%d %d\n", t1,t2);
	system("pause");
	return 0;
}