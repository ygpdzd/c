#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int countTheDay()
{
	int n,m;
	printf("-------------------算周几------------------\n");
	printf("假定今天是星期一，请从键盘输入一个整数n,\n则我将输出从今天开始的第n天是星期几。\n");
	scanf("%d", &n);
	m = n % 7;
	printf(" %d 天之后是周%d",n,m);
	printf("------------------------------------------\n");
	return 0;
}