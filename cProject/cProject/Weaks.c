#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int weaks()
{
	int a;
	printf("------------------˵���ڼ�-----------------\n");
	printf("˵����,1��7\n");
	if (scanf("%d", &a) != 1)
	{
		setbuf(stdin, NULL);//��ջ�����
		printf("�������");
		return 0;
	}
	switch (a)
	{
	case 1:
		printf("����һ");
		break;
	case 2:
		printf("���ڶ�");
		break;
	case 3:
		printf("������");
		break;
	case 4:
		printf("������");
		break;
	case 5:
		printf("������");
		break;
	case 6:
		printf("������");
		break;
	case 7:
		printf("������");
		break;
	default:
		break;
	}
	return 0;
}