#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int function()
{
	float x,y;
	printf("----------------�ֶκ���----------------\n");
	printf("����һ��x\n");
	if (scanf("%f", &x) != 1)
	{
		printf("�������");
		return 0;
	}
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
	printf("y ��ֵΪ��%g", y);

	return 0;
}