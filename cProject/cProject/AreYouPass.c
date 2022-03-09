#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int areYouPass()
{
	int s;
	printf("------------------挂了吗------------------\n");
	printf("你的分数是：");
	scanf("%d", &s);
	if (s < 60)
		printf("Fail!\n再接再厉！");
	else if (s > 90)
		printf("Very Good!");
	else
		printf("Pass!");
	printf("------------------------------------------\n");
	return 0;
}