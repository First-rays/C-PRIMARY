#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Is_prime_number(int a){
	int i = 0; 
	for (i = 2; i <= sqrt(a); i++){
		if (a%i == 0)
			return 0;
	}
	return 1;
}

int main(){
	int x = 0;
	scanf("%d", &x);
	int t = Is_prime_number(x);
	if (t == 1)
		printf("%d是素数\n", x);
	else
		printf("%d不是素数\n", x);
	system("pause");
	return 0;
}