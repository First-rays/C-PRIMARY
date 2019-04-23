#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main22(){
	float sum = 0;
	float i = 1.0;
	int j = 0;
	int flag = 1;
	for (j = 1; j <= 100; j++){
		sum += flag * i / j;
		flag = -flag;
	}
	printf("%f\n", sum);
	system("pause");
	return 0;
}