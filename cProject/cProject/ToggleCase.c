#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int toggleCase()
{
	printf("----------------大小写转换----------------\n");
	char a;
	printf("请输入一个大写字母：");
    A:
	setbuf(stdin, NULL);//清空缓存区
	getchar();
	if ( scanf("%c", &a) != 1 || a < 64 && a > 91)
	{
		setbuf(stdin, NULL);//清空缓存区
		printf("输入错误");
		fflush(stdin);
	    getchar();
		return 0;
		//goto A;
	}
	else
	{
		a = a + 32;
		printf("成功转换： %c ", a);
	}
	return 0;
}