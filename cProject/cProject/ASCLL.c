#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int ASCLL()
{
	int a;
	printf("------------------ASCLL��-----------------\n");
	printf("�������ֻ��ַ�\n(��֧��0��254)\n");
	scanf("%d", &a);
	if (a > 254 && a < 31)
	{
		printf("��֧��32��254\n");
	}
	printf("ASCLL��Ϊ %d : %c\n", a,a);
	printf("------------------------------------------\n");
	return 0;
}