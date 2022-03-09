#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
int reverse();
int weight();
int toggleCase();
int deposit();
int temperature();
int triangle();
int main()
{
	int i = -1;
	B:
	printf("---------------------------------\n 0:退出\n 1.求三角形面积\n 2.华氏度转摄氏度\n 3.计算利息\n 4.逆序输出四位数\n 5.求圆柱表面积\n 6.计算标准体重\n 7.大小写转换\n 请选择：\n");
	scanf("%d", &i);
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
		toggleCase();
		break;
	case 6:
		weight();
		break;
	case 7:
		toggleCase();
		break;
	default:
		printf("输入错误，请重新输入。\n");
		break;
	}
	i = -1;
	goto B;
	return 0;
}