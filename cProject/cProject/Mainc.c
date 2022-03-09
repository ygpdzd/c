#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#pragma region 引用方法
int reverse();//逆序
int weight();//体重
int toggleCase();//大小写
int deposit();//存款
int temperature();//温度
int triangle();//三角
int cylinder();//圆柱
int findMax();//最大值
int education();//学历
int areYouPass();//过了吗
int ASCLL();//ASCLL码
int calculate();//计算机
int function();//分段函数
int equation();//方程
int weaks();//说周几
int countTheDay();//n天之后周几
#pragma endregion
int main()
{
	int i = -1;
   B:
	i = -1;
	printf("-------------------菜单-------------------\n ");
	printf("0:退出\n 1.求三角形面积\n 2.华氏度转摄氏度\n 3.计算利息\n 4.逆序输出四位数\n 5.求圆柱表面积\n 6.计算标准体重\n 7.大小写转换\n 8.两值求最大\n 9.算学历\n 10.挂了吗\n 11.ASCLL码\n 12.计算机\n 13.分段函数\n 14.求解二元一次方程\n 15.跟你说星期几\n 16.n天之后星期几\n 请选择：");
	rewind(stdin);//建立新缓存区
	setbuf(stdin, NULL);//设置缓存为空
	fflush(stdin);//清除缓存,防止scanf被忽略??无用
	getchar();//拿走一个字符
	scanf("%d", &i);
	rewind(stdin);//建立新缓存区
	setbuf(stdin, NULL);//设置缓存为空
	fflush(stdin);//清除缓存,防止scanf被忽略??无用
	getchar();//拿走一个字符
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
		printf("  输入错误，请重新输入。\n");
		break;
	}
	
	i = -1;

	printf("已暂停，");
	system("pause");
	goto B;
	return 0;
}