#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Is_leap_year(int y){
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		return 1;
	else
		return 0;
}
int main3(){
	int year = 0;
	scanf("%d", &year);
	int t = Is_leap_year(year);
	if (t == 1)
		printf("%d������\n", year);
	else
		printf("%d��������\n", year);
	system("pause");
	return 0;
}