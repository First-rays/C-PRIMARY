#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main4(){
	int a = 10;
	int b = 15;
	int c = 30;
	int t;
	if (b > a){
		t = a;
		a = b;
		b = t;
	}
	if (c > a){
		t = a;
		a = c;
		c = t;
	}
	if(c>b){
		t = b;
		b = c;
		c = t;
	}
	printf("%d %d %d\n", a, b, c);
	system("pause");
	return 0;
}