#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int countTheDay()
{
	int n,m;
	printf("-------------------���ܼ�------------------\n");
	printf("�ٶ�����������һ����Ӽ�������һ������n,\n���ҽ�����ӽ��쿪ʼ�ĵ�n�������ڼ���\n");
	scanf("%d", &n);
	m = n % 7;
	printf(" %d ��֮������%d",n,m);
	printf("------------------------------------------\n");
	return 0;
}