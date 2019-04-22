#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int i = 0;
	int j = 0;
	int leap = 1;
	for (i = 100; i < 200; i++){
		for (j =2; j <= sqrt(i); j++){
			if (i%j == 0){
				leap = 0;
				break;
			}
			else
				leap = 1;
		}
		if (leap == 1)
			printf("%d\t", i);
	}
	system("pause");
	return 0;
}