#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int countTheDay()
{
	int n,m;
	printf("-------------------���ܼ�------------------\n");
	printf("�ٶ�����������һ����Ӽ�������һ������n,\n���ҽ�����ӽ��쿪ʼ�ĵ�n�������ڼ���\n");
	if (scanf("%d", &n) != 1 || n < 1)
	{
		printf("�������");
		return;
	}
	m = (n + 1) % 7;
	if (m == 0)
	{
		printf(" %d ��֮��������", n);
	}
	else 
	{
		printf(" %d ��֮������%d",n,m);
	}
	
	return 0;
}