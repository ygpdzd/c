#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int triangle()
{
	printf("--------------计算三角形面积--------------\n");
    float area,a, b, c, p;
	printf("请输入三角形三边：\n");
	if (scanf("%f%f%f", &a, &b, &c)!= 3)
	{
		printf("输入错误");
		setbuf(stdin, NULL);//清空缓存区
		return 0;
	}
	//三边大于0
	if (a > 0 && b > 0 && c > 0)
	{
		//两边之和大于第三边
		if (a + b > c && a + c > b && b + c > a)
		{
			printf("(%g,%g,%g)能围成三角形", a, b, c);
			p = (a + b + c) / 2;
			area = sqrt(p * (p - a) * (p - b) * (p - c));
			printf("面积为：%g ", area);
		}
		else
		{
			printf("(%g,%gf,%gf)不能围成三角形", a, b, c);
		}
	}
	return 0;
}