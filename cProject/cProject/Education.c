#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int education()
{
	int years;
	printf("------------------求学历-------------------\n");
	printf("你上学几年了？");
	setbuf(stdin, NULL);//清空缓存区
	if (scanf("%[1234567890]", &years) != 1||years < 0)
	{
		setbuf(stdin, NULL);//清空缓存区
		printf("输入错误");
		return 0;
	} 
	printf("没跳过级的话，");
	if (years <= 6)
		printf("那你应该是小学生，也就是小学学历。");
	else if(years > 6&&years <= 12)
	{
		printf("你大概是中学学历");
	}
	else if (years > 16 && years < 30)
	{
		printf("你是大学学历");
	}
	else if (years >= 30)
	{
		printf("6666666666");
	}
	return 0;
}