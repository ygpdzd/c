#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int function()
{
	float x,y;
	printf("----------------�ֶκ���----------------\n");
	printf("����һ��x\n");
	scanf("%f", &x);
	if (x < -1)
	{
		y = 2 - x;
	}
	else if (x >= -1 && x <= 0.5f)
	{
		y = -3 * x;
	}
	else if(x > 0.5f)
	{
		y = x - 2;
	}
	else
	{
		printf("�������");
		return 0;
	}
	printf("y ��ֵΪ��%g\n", y);
	printf("----------------------------------------\n");

	return 0;
}