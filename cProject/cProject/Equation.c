#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int equation()
{
	float a,b,c,m,n;
	printf("-----------------�ⷽ��-----------------\n");
	printf("����һ��x\n");
	scanf("%f%f%f", &a,&b,&c);
	if (b * b < 4 * a * c)
	{
		printf("�� �����\n");
	}
	else if (b * b == 4 * a * c)
	{
		m = ( - b + sqrt(b * b - 4 * a * c)) / 2;
		printf("��һ���⣺%0.2f \n", m);
	}
	else
	{
		m = (-b + sqrt(b * b - 4 * a * c)) / 2;
		n = (-b - sqrt(b * b - 4 * a * c)) / 2;
		printf("��������x1= %0.2f��x2= %0.2f\n", m, n);
	}
	printf("----------------------------------------\n");

	return 0;
}