#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> 


#if 0
unsigned char i = 0;
int main()
{
	for (i = 0; i <= 255; i++)
	{
		printf("hello world\n");
	}
	system("pause");
	return 0;
}

int main()
{
	unsigned int i; 
	for (i = 9; i >= 0; i--) 
	{
		printf("%u\n", i); 

	}
		system("pause");
	return 0;
}

int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d,b=%d,c=%d", a, b, c);
	system("pause");
	return 0;
}

char *myString()
{
	//注意局部变量，当无static修饰时，此时数组为局部变量。
	//生命周期值存在此代码块中，因此函数返回参数并不是我们想要的参数
	static char buffer[6] = { 0 };   
	char *s = "Hello World!";
	int i = 0;
	for (i = 0; i < sizeof(buffer)-1; i++)
	{
		buffer[i] = *(s + i);
	}
	return buffer;
}
int main3()
{
	printf("%s\n", myString());
	system("pause");
	return 0;
}
#endif