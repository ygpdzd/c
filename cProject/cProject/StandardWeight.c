#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int weight()
{
	//���
	int height= 0,input;
	float weight = 0;
	//A://��ת
	printf("----------------�����׼����---------------\nPlease input your height��cm��.\n");
	while (scanf("%d", &height) != 1)
	{
		setbuf(stdin, NULL);//��ջ�����
	}
	printf("Please tell me your gender.\n(You can use 0 for female and 1 for male)\n");
	setbuf(stdin, NULL);//��ջ�����
	scanf("%d", &input);
	if (input == 1)
	{
		//����
		printf("You are boy.\n");
		weight = (height - 80) * 0.7; 
		printf("Your standard weight is %g Kg", weight);
	}
	else if (input == 0)	
	{
		//Ů��
		printf("You are gril.\n");
		weight = (height - 70) * 0.6;
		printf("Your standard weight is %g Kg", weight);
	}
	else 
	{
		//δ��⵽
		printf("Your gender was not detected.");
		return 0;
	}
	//goto A;//��ת
	return 0;
}
