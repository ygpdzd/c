#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int calculate()
{
	int a, c, d;
	char b;
	printf("-------------------计算-------------------\n");
	printf("请从键盘依次输入一个整数，一个运算符，一个整数,\n用回车分开。\n");
	scanf("%d %c %d", &a, &b, &c);
	switch (b)
	{
	case 42 :
		d = a * c;
		break;
	case 43:
		d = a + c;
		break;
	case 37:
		d = a % c;
		break;
	case 45:
		d = a - c;
		break;
	case 47:
		d = a / c;
		break;
	default:
		break;
	}
	printf("结果为：%d \n", d);
	printf("----------------------------------------\n");
	return 0;
}