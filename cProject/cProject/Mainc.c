#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
int reverse();
int weight();
int toggleCase();
int deposit();
int temperature();
int triangle();
int main()
{
	int i = -1;
	B:
	printf("---------------------------------\n 0:�˳�\n 1.�����������\n 2.���϶�ת���϶�\n 3.������Ϣ\n 4.���������λ��\n 5.��Բ�������\n 6.�����׼����\n 7.��Сдת��\n ��ѡ��\n");
	scanf("%d", &i);
	switch (i)
	{
	case 0:
		return 0;
	case 1:
		triangle();
		break;
	case 2:
		temperature();
		break;
	case 3:
		deposit();
		break;
	case 4:
		reverse();
		break;
	case 5:
		toggleCase();
		break;
	case 6:
		weight();
		break;
	case 7:
		toggleCase();
		break;
	default:
		printf("����������������롣\n");
		break;
	}
	i = -1;
	goto B;
	return 0;
}