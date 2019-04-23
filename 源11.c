#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main11(){
	int i = 0;
	int t;
	int a[5] = { 1, 2, 3, 4, 5 };
	int b[5] = { 6, 7, 8, 9, 10 };
	printf("a数组:\n");
	for (i = 0; i < 5; i++){
		printf("%d \t", a[i]);
	}
	printf("\nb数组:\n");
	for (i = 0; i < 5; i++){
		printf("%d \t", b[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++){
		t = a[i];
		a[i] = b[i];
		b[i] = t;
	}
	printf("a数组:\n");
	for (i = 0; i < 5; i++){
		printf("%d \t", a[i]);
	}
	printf("\nb数组:\n");
	for (i = 0; i < 5; i++){
		printf("%d \t", b[i]);
	}
	system("pause");
	return 0;
}
