#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int toggleCase()
{
	printf("----------------��Сдת��----------------\n");
	char a;
	printf("������һ����д��ĸ��");
    A:
	fflush(stdin);
	getchar();
	scanf("%c", &a); 
	if (a < 64 && a > 91)
	{
		printf("����������������롣\n");
		goto A;
	}
	else
	{
		a = a + 32;
		printf("�ɹ�ת���� %c \n", a);
	}
	printf("------------------------------------------\n");
	return 0;
}