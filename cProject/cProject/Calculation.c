#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int calculate()
{
	int a, c, d;
	char b;
	printf("-------------------����-------------------\n");
	printf("��Ӽ�����������һ��������һ���������һ������,\n�ûس��ֿ���\n");
	scanf("%d %c %d", &a, &b, &c);
	switch (b)
	{
	case 42 :
		d = a * c;
		break;
	case 43:
		d = a + c;
		break;
	case 37:
		d = a % c;
		break;
	case 45:
		d = a - c;
		break;
	case 47:
		d = a / c;
		break;
	default:
		break;
	}
	printf("���Ϊ��%d \n", d);
	printf("----------------------------------------\n");
	return 0;
}