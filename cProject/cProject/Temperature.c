#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int temperature()
{
	printf("-------------华氏度转摄氏度--------------\n");
	float c, f;
	printf("请输入华氏度：");
	if (scanf("%f", &f) != 1)
	{
		printf("输入错误");
		return 0;
	}
	c =  (f - 32)*5 / 9;
	printf("此华氏度对应的摄氏度为:%g ", c);
	return 0;
}