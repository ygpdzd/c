#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14
#include<stdio.h>
int findMax()
{
	printf("-----------------求最大值-----------------\n");
	double a, b,max;
	printf("请输入两个值,以回车分开。");
	if (scanf("%f%f", &a, &b) != 2)
	{
		fflush(stdin);//清空缓存
		setbuf(stdin, NULL);
		printf("输入错误");
		return 0;
	}
	//判断最大值
	if (a > b)
		max = a;
	else
		max = b;
	printf("最大值为：%g", max);
	return 0;
}
