#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int areYouPass()
{
	int s;
	printf("------------------������------------------\n");
	printf("��ķ����ǣ�");
	if (scanf("%d", &s) != 1)
	{
		printf("�������");
		return 0;
	}
	if (s < 60)
		printf("Fail!\n�ٽ�������");
	else if (s > 90)
		printf("Very Good!");
	else
		printf("Pass!");
	return 0;
}