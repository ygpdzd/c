#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int countTheDay()
{
	int n,m;
	printf("-------------------算周几------------------\n");
	printf("假定今天是星期一，请从键盘输入一个整数n,\n则我将输出从今天开始的第n天是星期几。\n");
	if (scanf("%d", &n) != 1 || n < 1)
	{
		printf("输入错误");
		return;
	}
	m = (n + 1) % 7;
	if (m == 0)
	{
		printf(" %d 天之后是周日", n);
	}
	else 
	{
		printf(" %d 天之后是周%d",n,m);
	}
	
	return 0;
}