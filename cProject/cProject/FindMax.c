#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14
#include<stdio.h>
int findMax()
{
	printf("-----------------求最大值-----------------\n");
	double a, b,max;
	printf("请输入两个值,以回车分开。");
	scanf("%f%f", &a, &b);
	if (a > b)
		max = a;
	else
		max = b;
	printf("最大值为：%g", max);

	printf("------------------------------------------\n");
	return 0;
}
