#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int calculate()
{
	int a = 0, c = 0, d = 0;
	char b = "";
	printf("-------------------计算-------------------\n");
	printf("请从键盘依次输入一个整数，一个运算符，一个整数,\n用回车分开。\n");
	if (scanf("%d %c %d", &a, &b, &c) != 3)//必要的空格，防止有 输入 被吞
	{
		setbuf(stdin, NULL);//清空缓存区
		printf("输入错误");
		return 0;
	}
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
		printf("输入错误");
		return 0;
	}
	printf("结果为：%d", d);
	return 0;
}