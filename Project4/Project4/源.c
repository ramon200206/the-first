#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int line = 0;
	while (line < 20000)
	{
		printf("jojo;%d\n", line);
		line++;
		}
	if (line >= 200)
		printf("ko no dio da/n");
	return 0;
     

}