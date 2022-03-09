#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int reverse()
{
	char m[5];
	int n,k;
	printf("请输入一个四位数：");
	fflush(stdin);
	scanf("%d", &n);
	k = n / 1000 + ((n / 100) % 10) * 10 + 100 * ((n / 10) % 10) + (n % 10) * 1000;
	printf("其逆序输出为： %d \n", k);
	return 0;
}