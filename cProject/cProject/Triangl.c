#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int triangle()
{
	printf("--------------�������������--------------\n");
    float area,a, b, c, p;
	printf("���������������ߣ�\n");
	if (scanf("%f%f%f", &a, &b, &c)!= 3)
	{
		printf("�������");
		setbuf(stdin, NULL);//��ջ�����
		return 0;
	}
	//���ߴ���0
	if (a > 0 && b > 0 && c > 0)
	{
		//����֮�ʹ��ڵ�����
		if (a + b > c && a + c > b && b + c > a)
		{
			printf("(%g,%g,%g)��Χ��������", a, b, c);
			p = (a + b + c) / 2;
			area = sqrt(p * (p - a) * (p - b) * (p - c));
			printf("���Ϊ��%g ", area);
		}
		else
		{
			printf("(%g,%gf,%gf)����Χ��������", a, b, c);
		}
	}
	return 0;
}