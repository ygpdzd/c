#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int calculate()
{
	int a = 0, c = 0, d = 0;
	char b = "";
	printf("-------------------����-------------------\n");
	printf("��Ӽ�����������һ��������һ���������һ������,\n�ûس��ֿ���\n");
	if (scanf("%d %c %d", &a, &b, &c) != 3)//��Ҫ�Ŀո񣬷�ֹ�� ���� ����
	{
		setbuf(stdin, NULL);//��ջ�����
		printf("�������");
		return 0;
	}
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
		printf("�������");
		return 0;
	}
	printf("���Ϊ��%d", d);
	return 0;
}