#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int triangle()
{
	printf("--------------�������������--------------\n");
    float area,a, b, c, p;
	printf("���������������ߣ�\n");
	scanf("%f%f%f", &a,&b,&c);
	//���ߴ���0
	if (a > 0 && b > 0 && c > 0)
	{
		//����֮�ʹ��ڵ�����
		if (a + b > c && a + c > b && b + c > a)
		{
			printf("(%g,%g,%g)��Χ��������\n", a, b, c);
			p = (a + b + c) / 2;
			area = sqrt(p * (p - a) * (p - b) * (p - c));
			printf("���Ϊ��%g \n", area);
		}
		else
		{
			printf("(%g,%gf,%gf)����Χ��������\n", a, b, c);
		}
	}
	printf("------------------------------------------\n");
	return 0;
}