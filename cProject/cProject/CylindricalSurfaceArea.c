#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14
#include<stdio.h>
void cylinder()
{
	printf("--------------����Բ�������--------------\n");
	float r = 0, h = 0,s = 0;
	printf("������Բ���İ뾶���\n(������뾶���ûس��ֿ�)");
	scanf("%f%f", &r, &h);
	if (r * h < 0)
	{
		printf("�������");
		return;
	}
	//�����������������������
	s = 2 * PI * r * h + 2 * PI * r * r;
	printf("�����Ϊ��%g", s);
	printf("\n------------------------------------------\n");
	return 0;
}