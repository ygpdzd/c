#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int reverse()
{
	int n,k;
	printf("-----------------逆序输出-----------------\n");
	printf("请输入一个四位数：");
	scanf("%d", &n);
	rewind(stdin);
	setbuf(stdin, NULL);
	fflush(stdin);//清空缓存
	getchar();
	if (n > 9999 || n < 1000)
	{
		printf("输入错误\n");
		
		return;
	}
	//取千，百，十，个位逆序以倍数相加
	k = n / 1000 + ((n / 100) % 10) * 10 + 100 * ((n / 10) % 10) + (n % 10) * 1000;
	printf("其逆序输出为： %d \n", k);
	printf("------------------------------------------\n");
	return 0;
}