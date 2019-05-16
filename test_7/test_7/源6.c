#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdlib.h>
int fac1(int n){
	int i = 0;
	int sum = 1;
	for (i = 1; i <= n; i++){
		sum *= i;
	}
	return sum;
}
int fac2(int n){
	if (n == 1)
		return 1;
	return n*fac2(n - 1);
}
int main6(){
	int n = 0;
	scanf("%d", &n);
	int t1 = fac1(n);
	int t2 = fac2(n);
	printf("%d %d\n", t1, t2);
	system("pause");
	return 0;
}
