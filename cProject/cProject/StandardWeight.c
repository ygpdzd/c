#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int weight()
{
	//输入的字符
	char input[] = "\0";

	//身高
	int height = 0;
	float weight = 0;
	//A://跳转
	printf("----------------计算标准体重---------------\nPlease input your height（cm）.\n");
	fflush(stdin);//清除缓存
	scanf("%d",&height);
	printf("Please tell me your gender.\n(You can use 0 for female and 1 for male)\n");
	fflush(stdin);//清除缓存
	scanf("%s", &input);
	if (strstr(input, "man") != NULL || strstr(input,"男") != NULL || strstr(input, "boy") != NULL||strstr(input,"xiong") != NULL || strstr(input,"雄") != NULL ||strstr(input,"1") != NULL|| strstr(input, "male") != NULL)
	{
		//男生
		printf("You are boy.\n");
		weight = (height - 80) * 0.7;
	}
	else if (strstr(input, "女") != NULL || strstr(input, "woman") != NULL|| strstr(input, "雌") != NULL || strstr(input, "female") != NULL|| strstr(input, "daughter") != NULL || strstr(input, "girl") != NULL|| strstr(input, "0") != NULL)	
	{
		//女生
		printf("You are gril.\n");
		weight = (height - 70) * 0.6;
	}
	else 
	{
		//未检测到
		printf("Your gender was not detected.\n");
	}
	printf("Your standard weight is %g Kg\n", weight);
	printf("------------------------------------------\n");
	//goto A;//跳转
	//清空输入
	strcpy(input , "\0");
	height = 0;
	weight = 0;
	return 0;
}
