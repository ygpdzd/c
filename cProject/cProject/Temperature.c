#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int temperature()
{
	float c, f;
	printf("�����뻪�϶ȣ�");
	scanf("%f", &f);
	c =  (f - 32)*5 / 9;
	printf("�˻��϶ȶ�Ӧ�����϶�Ϊ:%g \n", c);
	return 0;
}