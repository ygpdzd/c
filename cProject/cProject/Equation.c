#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int equation()
{
	float a,b,c,m,n;
	printf("-----------------�ⷽ��-----------------\n");
	printf("��˳������һ��һԪ���η��̵�����ϵ����a��b��c��\n");
	if (scanf("%f %f %f", &a, &b, &c) != 3)
	{
		printf("�������");
		return 0;
	}
	if (b * b < 4 * a * c)
	{
		printf("û�������");
	}
	else if (b * b == 4 * a * c)
	{
		m = ( - b + sqrt(b * b - 4 * a * c)) / 2;
		printf("��һ���⣺%0.2f ", m);
	}
	else
	{
		m = (-b + sqrt(b * b - 4 * a * c)) / 2;
		n = (-b - sqrt(b * b - 4 * a * c)) / 2;
		printf("��������x1= %0.2f��x2= %0.2f", m, n);
	}

	return 0;
}