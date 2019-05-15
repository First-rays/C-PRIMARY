#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void change(int* x, int* y){
	int t = 0;
	t = *x;
	*x = *y;
	*y = t;

}
int main2(){
	int a = 10;
	int b = 20;
	printf("a = %d b = %d\n", a, b);
	change(&a, &b);
	printf("a = %d b = %d\n", a, b);
	system("pause");
	return 0;
}