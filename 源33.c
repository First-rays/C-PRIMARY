#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main33(){
	int i = 0;
	int count = 0;
	for (i = 9; i < 100; i++){
		if (i / 10 == 9){
				printf("%d  ", i);
				count++;
		}
		else if (i % 10 == 9){
			printf("%d  ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	system("pause");
	return 0;
} 