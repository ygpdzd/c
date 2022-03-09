#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int deposit()
{
	printf("----------------计算本息和----------------\n");
	float p , pai;
	printf("你好，我是您的理财小助手\n请输入您的本金：\n");
	scanf("%f",&p);
	pai = p * (float)(1 + 0.3);
	printf("(1)活期，年利率为r1 = 0.3；\n 一年后本息和为：%g \n",pai);
	pai = p * (float)(1 + 0.03);
	printf("(2)一年期定期，年利率为r2 = 0.03；\n 一年后本息和为：%g\n", pai);
	pai = p * (float)(1 + 0.15);
	printf("(3)存两次半年定期，年利率为r3= 0.15；\n 一年后本息和为：%g\n", pai);
	printf("------------------------------------------\n");
}