#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int ASCLL()
{
	int a;
	printf("------------------ASCLL码-----------------\n");
	printf("输入数字或字符\n(仅支持0到254)\n");
	scanf("%d", &a);
	if (a > 254 && a < 31)
	{
		printf("仅支持32到254\n");
	}
	printf("ASCLL码为 %d : %c\n", a,a);
	printf("------------------------------------------\n");
	return 0;
}