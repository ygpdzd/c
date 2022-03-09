#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14
#include<stdio.h>
void cylinder()
{
	printf("--------------计算圆柱表面积--------------\n");
	float r = 0, h = 0,s = 0;
	printf("请输入圆柱的半径与高\n(先输入半径并用回车分开)");
	scanf("%f%f", &r, &h);
	if (r * h < 0)
	{
		printf("输入错误");
		return;
	}
	//计算表面积：侧面加两个底面
	s = 2 * PI * r * h + 2 * PI * r * r;
	printf("表面积为：%g", s);
	printf("\n------------------------------------------\n");
	return 0;
}