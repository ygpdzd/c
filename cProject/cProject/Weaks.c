#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int weaks()
{
	int a;
	printf("------------------ASCLL码-----------------\n");
	printf("说个数,1到7\n");
	scanf("%d", &a);
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
	printf("\n------------------------------------------\n");
	return 0;
}