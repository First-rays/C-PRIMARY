#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void print(int R, int C){
	int i = 0;
	int j = 0;
	for (i = 1; i <= R; i++){
		for (j = 1; j <= i; j++){
			printf("%d*%d=%d\t", j, i, j*i);
		}
		printf("\n");
	}
}
int main1(){
	int row = 0;
	int col = 0;
	scanf("%d %d", &row, &col);
	print(row,col);
	system("pause");
	return 0;
}