#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int temperature()
{
	printf("-------------���϶�ת���϶�--------------\n");
	float c, f;
	printf("�����뻪�϶ȣ�");
	if (scanf("%f", &f) != 1)
	{
		printf("�������");
		return 0;
	}
	c =  (f - 32)*5 / 9;
	printf("�˻��϶ȶ�Ӧ�����϶�Ϊ:%g ", c);
	return 0;
}