#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int equation()
{
	float a,b,c,m,n;
	printf("-----------------解方程-----------------\n");
	printf("按顺序输入一个一元二次方程的三个系数（a，b，c）\n");
	if (scanf("%f %f %f", &a, &b, &c) != 3)
	{
		printf("输入错误");
		return 0;
	}
	if (b * b < 4 * a * c)
	{
		printf("没有有理解");
	}
	else if (b * b == 4 * a * c)
	{
		m = ( - b + sqrt(b * b - 4 * a * c)) / 2;
		printf("有一个解：%0.2f ", m);
	}
	else
	{
		m = (-b + sqrt(b * b - 4 * a * c)) / 2;
		n = (-b - sqrt(b * b - 4 * a * c)) / 2;
		printf("有两个解x1= %0.2f，x2= %0.2f", m, n);
	}

	return 0;
}