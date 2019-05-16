#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int fac(int n,int k){
	if (k == 1)
		return n;
	return n*fac(n, k - 1);
}
int main2(){
	int n = 0;
	int k = 0;
	printf("请输入底数和指数\n");
	scanf("%d %d", &n,&k);
	int t = fac(n,k);
	printf("%d ^ %d = %d \n",n, k, t);
	system("pause");
	return 0;
}