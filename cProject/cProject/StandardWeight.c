#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int weight()
{
	//������ַ�
	char input[] = "\0";

	//���
	int height = 0;
	float weight = 0;
	//A://��ת
	printf("----------------�����׼����---------------\nPlease input your height��cm��.\n");
	fflush(stdin);//�������
	scanf("%d",&height);
	printf("Please tell me your gender.\n(You can use 0 for female and 1 for male)\n");
	fflush(stdin);//�������
	scanf("%s", &input);
	if (strstr(input, "man") != NULL || strstr(input,"��") != NULL || strstr(input, "boy") != NULL||strstr(input,"xiong") != NULL || strstr(input,"��") != NULL ||strstr(input,"1") != NULL|| strstr(input, "male") != NULL)
	{
		//����
		printf("You are boy.\n");
		weight = (height - 80) * 0.7;
	}
	else if (strstr(input, "Ů") != NULL || strstr(input, "woman") != NULL|| strstr(input, "��") != NULL || strstr(input, "female") != NULL|| strstr(input, "daughter") != NULL || strstr(input, "girl") != NULL|| strstr(input, "0") != NULL)	
	{
		//Ů��
		printf("You are gril.\n");
		weight = (height - 70) * 0.6;
	}
	else 
	{
		//δ��⵽
		printf("Your gender was not detected.\n");
	}
	printf("Your standard weight is %g Kg\n", weight);
	printf("------------------------------------------\n");
	//goto A;//��ת
	//�������
	strcpy(input , "\0");
	height = 0;
	weight = 0;
	return 0;
}
