#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int equation()
{
	float a,b,c,m,n;
	printf("-----------------解方程-----------------\n");
	printf("输入一个x\n");
	scanf("%f%f%f", &a,&b,&c);
	if (b * b < 4 * a * c)
	{
		printf("无 有理解\n");
	}
	else if (b * b == 4 * a * c)
	{
		m = ( - b + sqrt(b * b - 4 * a * c)) / 2;
		printf("有一个解：%0.2f \n", m);
	}
	else
	{
		m = (-b + sqrt(b * b - 4 * a * c)) / 2;
		n = (-b - sqrt(b * b - 4 * a * c)) / 2;
		printf("有两个解x1= %0.2f，x2= %0.2f\n", m, n);
	}
	printf("----------------------------------------\n");

	return 0;
}