#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int toggleCase()
{
	printf("----------------��Сдת��----------------\n");
	char a;
	printf("������һ����д��ĸ��");
    A:
	setbuf(stdin, NULL);//��ջ�����
	getchar();
	if ( scanf("%c", &a) != 1 || a < 64 && a > 91)
	{
		setbuf(stdin, NULL);//��ջ�����
		printf("�������");
		fflush(stdin);
	    getchar();
		return 0;
		//goto A;
	}
	else
	{
		a = a + 32;
		printf("�ɹ�ת���� %c ", a);
	}
	return 0;
}