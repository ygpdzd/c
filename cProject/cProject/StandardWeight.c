#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int weight()
{
	//身高
	int height= 0,input;
	float weight = 0;
	//A://跳转
	printf("----------------计算标准体重---------------\nPlease input your height（cm）.\n");
	while (scanf("%d", &height) != 1)
	{
		setbuf(stdin, NULL);//清空缓存区
	}
	printf("Please tell me your gender.\n(You can use 0 for female and 1 for male)\n");
	setbuf(stdin, NULL);//清空缓存区
	scanf("%d", &input);
	if (input == 1)
	{
		//男生
		printf("You are boy.\n");
		weight = (height - 80) * 0.7; 
		printf("Your standard weight is %g Kg", weight);
	}
	else if (input == 0)	
	{
		//女生
		printf("You are gril.\n");
		weight = (height - 70) * 0.6;
		printf("Your standard weight is %g Kg", weight);
	}
	else 
	{
		//未检测到
		printf("Your gender was not detected.");
		return 0;
	}
	//goto A;//跳转
	return 0;
}
