#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int toggleCase()
{
	printf("----------------大小写转换----------------\n");
	char a;
	printf("请输入一个大写字母：");
    A:
	fflush(stdin);
	getchar();
	scanf("%c", &a); 
	if (a < 64 && a > 91)
	{
		printf("输入错误请重新输入。\n");
		goto A;
	}
	else
	{
		a = a + 32;
		printf("成功转换： %c \n", a);
	}
	printf("------------------------------------------\n");
	return 0;
}