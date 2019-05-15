#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void Init_array(int a[] , int sz){
	int i = 0;
	for (i = 0; i < sz; i++){
		scanf("%d", &a[i]);
	}
	printf("\n");
}

void Reverse_array(int a[], int sz){
	int i = 0;
	for (i = sz-1; i >= 0; i--){
		printf("%d ", a[i]);
	}
}
void Empty_array(int a[], int sz){
	int i = 0;
	for (i = 0; i < sz; i++){
		a[i] = 0;
	}
	printf("\n");
}
void print1(int a[], int sz){
	int i = 0;
	for (i = 0; i < sz; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main4(){
	int a[5] = { 0 };
	int sz = sizeof(a) / sizeof(a[0]);
	Init_array(a, sz);
	print1(a, sz);
	Reverse_array(a,sz);
	Empty_array(a,sz);
	print1(a, sz);
	system("pause");
	return 0;
}

