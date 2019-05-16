#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdlib.h>
int strlen1(char *a){
	int count = 0;
	while (*a != '\0'){
		count++;
		a++;
	}
	return count;
}
int strlen2(char *a){
	if (*a == '\0')
		return 0;
	while (*a != '\0')
		return 1 + strlen2(a+1);
}
int main5(){
	char a[] = "abcdfg";
	int t1 = strlen1(a);
	int t2 = strlen2(a);
	printf("%d %d\n", t1, t2);
	system("pause");
	return 0;
}