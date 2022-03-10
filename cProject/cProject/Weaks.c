#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int weaks()
{
	int a;
	printf("------------------说星期几-----------------\n");
	printf("说个数,1到7\n");
	if (scanf("%d", &a) != 1)
	{
		setbuf(stdin, NULL);//清空缓存区
		printf("输入错误");
		return 0;
	}
	switch (a)
	{
	case 1:
		printf("星期一");
		break;
	case 2:
		printf("星期二");
		break;
	case 3:
		printf("星期三");
		break;
	case 4:
		printf("星期四");
		break;
	case 5:
		printf("星期五");
		break;
	case 6:
		printf("星期六");
		break;
	case 7:
		printf("星期日");
		break;
	default:
		break;
	}
	return 0;
}