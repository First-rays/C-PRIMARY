#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main3(){
	int i = 0;
	int a[10] = {10, 1, 5, 11, 3, 21, 22, 30, 45, 12 };
	int max = a[0];
	for (i = 1; i < 10; i++){
		if (a[i] > max){
			int t = max;
				max = a[i];
				a[i] = t;
		}
	}
		printf("max = %d\n",max);
	system("pause");
	return 0;
}