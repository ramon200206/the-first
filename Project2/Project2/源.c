#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int input = 0;
	printf("每人把自己原来的姓名学校介绍一下！\n");
	printf("从你那,开始！（1/0)>:");
	scanf("%d", &input);//1/0
	if (input == 1)
	printf("好，很有精神！\n");
	else
		printf("没有劲，根本听不见\n");
	return 0;
}

