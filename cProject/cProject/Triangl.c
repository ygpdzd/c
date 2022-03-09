#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int triangle()
{
    float area,a, b, c, p;
	printf("请输入三角形三边：\n");
	scanf("%f%f%f", &a,&b,&c);
	if (a > 0 && b > 0 && c > 0)
	{
		if (a + b > c && a + c > b && b + c > a)
		{
			printf("(%g,%g,%g)能围成三角形\n", a, b, c);
			p = (a + b + c) / 2;
			area = sqrt(p * (p - a) * (p - b) * (p - c));
			printf("面积为：%g \n", area);
		}
		else
		{
			printf("(%g,%gf,%gf)不能围成三角形\n", a, b, c);
		}
	}
	return 0;
}