#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#pragma region ���÷���
int reverse();//����
int weight();//����
int toggleCase();//��Сд
int deposit();//���
int temperature();//�¶�
int triangle();//����
int cylinder();//Բ��
int findMax();//���ֵ
int education();//ѧ��
int areYouPass();//������
int ASCLL();//ASCLL��
int calculate();//�����
int function();//�ֶκ���
int equation();//����
int weaks();//˵�ܼ�
int countTheDay();//n��֮���ܼ�
#pragma endregion
int main()
{
	int i = -1,j = 0;
   B:
	i = -1;
	printf("-------------------�˵�-------------------\n ");
	printf("0:�˳�\n 1.�����������\n 2.���϶�ת���϶�\n 3.������Ϣ\n 4.���������λ��\n 5.��Բ�������\n 6.�����׼����\n 7.��Сдת��\n 8.��ֵ�����\n 9.��ѧ��\n 10.������\n 11.ASCLL��\n 12.�����\n 13.�ֶκ���\n 14.����Ԫһ�η���\n 15.����˵���ڼ�\n 16.n��֮�����ڼ�\n ��ѡ��");
	while ( scanf("%d", &i) != 1)
	{	
		setbuf(stdin, NULL);//��ջ�����
		//fflush(stdin);//�����������c��׼��û�ж���˺�����
		//printf("\n");//��ѭ���ж�
		//printf(" ��Ч,���������룺\n");
	}
	//while (feof(stdin) || ferror(stdin)) { 
	//	/* ����û������ļ�������־�����ļ��ѱ����꣩�� */
	//	/* ���߷�����д�������˳�ѭ��*/
	//	/* do something */
	//	setbuf(stdin, NULL);//��ջ�����
	//	printf("  ����������������롣\n");
	//	break;
	//}
	switch (i)
	{
	case 0:
		return 0;
	case 1:
		triangle();
		break;
	case 2:
		temperature();
		break;
	case 3:
		deposit();
		break;
	case 4:
		reverse();
		break;
	case 5:
		cylinder();
		break;
	case 6:
		weight();
		break;
	case 7:
		toggleCase();
		break;
	case 8:
		findMax();
		break;
	case 9:
		education();
		break;
	case 10:
		areYouPass();
		break;
	case 11:
		ASCLL();
		break;
	case 12:
		calculate();
		break;
	case 13:
		function();
		break;
	case 14:
		equation();
		break;
	case 15:
		weaks();
		break;
	case 16:
		countTheDay();
		break;
	default:
		printf("  ����������������롣\n");
		break;
	}
	
	i = -1;

	printf("\n����ͣ��");
	system("pause");
	printf("\n------------------------------------------\n");
	goto B;
	return 0;
}