#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14
#include<stdio.h>
int findMax()
{
	printf("-----------------�����ֵ-----------------\n");
	double a, b,max;
	printf("����������ֵ,�Իس��ֿ���");
	if (scanf("%f%f", &a, &b) != 2)
	{
		fflush(stdin);//��ջ���
		setbuf(stdin, NULL);
		printf("�������");
		return 0;
	}
	//�ж����ֵ
	if (a > b)
		max = a;
	else
		max = b;
	printf("���ֵΪ��%g", max);
	return 0;
}
