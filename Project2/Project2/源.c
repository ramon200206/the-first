#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int input = 0;
	printf("ÿ�˰��Լ�ԭ��������ѧУ����һ�£�\n");
	printf("������,��ʼ����1/0)>:");
	scanf("%d", &input);//1/0
	if (input == 1)
	printf("�ã����о���\n");
	else
		printf("û�о�������������\n");
	return 0;
}

