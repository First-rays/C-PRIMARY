#include<stdio.h>
#include<stdlib.h>
int main2(){
	int i = 0;
	int leap = 1;
	printf("1000��2000������Ϊ��\n");
	for (i = 1000; i <= 2000; i++){
			if ((i % 4 == 0 && i % 100 != 0 )|| i % 400 == 0)
			    leap = 0;
			else
				leap = 1; 
		if (leap == 0){
			printf("%d\t", i);
		}
	}
	system("pause");
	return 0;
}