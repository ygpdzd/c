#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14
#include<stdio.h>
int findMax()
{
	printf("-----------------�����ֵ-----------------\n");
	double a, b,max;
	printf("����������ֵ,�Իس��ֿ���");
	scanf("%f%f", &a, &b);
	if (a > b)
		max = a;
	else
		max = b;
	printf("���ֵΪ��%g", max);

	printf("------------------------------------------\n");
	return 0;
}
