#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int reverse()
{
	int n,k;
	printf("-----------------�������-----------------\n");
	printf("������һ����λ����");
	scanf("%d", &n);
	rewind(stdin);
	setbuf(stdin, NULL);
	fflush(stdin);//��ջ���
	getchar();
	if (n > 9999 || n < 1000)
	{
		printf("�������\n");
		
		return;
	}
	//ȡǧ���٣�ʮ����λ�����Ա������
	k = n / 1000 + ((n / 100) % 10) * 10 + 100 * ((n / 10) % 10) + (n % 10) * 1000;
	printf("���������Ϊ�� %d \n", k);
	printf("------------------------------------------\n");
	return 0;
}