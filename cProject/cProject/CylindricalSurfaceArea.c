#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14
#include<stdio.h>
void cylinder()
{
	printf("--------------����Բ�������--------------\n");
	float r = 0, h = 0,s = 0;
	printf("������Բ���İ뾶���\n(������뾶���ûس��ֿ�)\n");
	if ( scanf("%f%f", &r, &h) != 2 || r * h < 0 )
	{
		printf("�������");
		return 0;
	}
	//�����������������������
	s = 2 * PI * r * h + 2 * PI * r * r;
	printf("�����Ϊ��%g", s);
	return 0;
}