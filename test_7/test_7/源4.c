#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse_string(char* string){
	if (*string != '\0')
		reverse_string(string + 1);
	printf("%c " , *string);
}

int main(){
	char string[10] = { 0 };
	gets(string);
	//scanf("%s", string);
	reverse_string(string);
	printf("\n");
	system("pause");
	return 0;
}