#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int deposit()
{
	printf("----------------���㱾Ϣ��----------------\n");
	float p , pai;
	printf("��ã������������С����\n���������ı���\n");
	scanf("%f",&p);
	pai = p * (float)(1 + 0.3);
	printf("(1)���ڣ�������Ϊr1 = 0.3��\n һ���Ϣ��Ϊ��%g \n",pai);
	pai = p * (float)(1 + 0.03);
	printf("(2)һ���ڶ��ڣ�������Ϊr2 = 0.03��\n һ���Ϣ��Ϊ��%g\n", pai);
	pai = p * (float)(1 + 0.15);
	printf("(3)�����ΰ��궨�ڣ�������Ϊr3= 0.15��\n һ���Ϣ��Ϊ��%g\n", pai);
	printf("------------------------------------------\n");
}