#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main5(){
	int a = 0;
	int b = 0;
	int c = 0;//��¼����
	scanf("%d %d", &a, &b);
	if (a < b){
		int t = a;
		a = b;
		b = t;
	}
	while (1){
		c = a % b;
		if (0 == c){
			break;
		}
		else{
		a = b;
		b = c;
		}
	}
	printf("���Լ�� = %d\n", b);
	system("pause");
	return 0;
}
