#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX(x,y)(x>y?x:y)
int main()
{
	int a = 10;
	int b = 20;
	int max = MAX(a, b);
	printf("max=%d\n", max);
	return 0;
}