#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int education()
{
	int years;
	printf("------------------��ѧ��-------------------\n");
	printf("����ѧ�����ˣ�");
	scanf("%[1234567890]", &years);
	printf("û�������Ļ���");
	if (years <= 6)
		printf("����Ӧ����Сѧ����Ҳ����Сѧѧ����");
	else if(years > 6&&years <= 12)
	{
		printf("��������ѧѧ��");
	}
	else if (years > 16 && years < 30)
	{
		printf("���Ǵ�ѧѧ��");
	}
	else if (years >= 30)
	{
		printf("6666666666");
	}
	printf("------------------------------------------\n");
	return 0;
}