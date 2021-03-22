// 2021_3_22.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

void Div(int* a, int a_num)
{
	//int* pa = a;
	//int ret = a[0];
	//int pos = 0;
	//int i = 0;
	////比t值大的放前
	//for (i = 0; i<a_num; i++)
	//{
	//	if (a[i] > ret)
	//	{
	//		*pa = a[i];
	//		pa++;
	//		pos++;
	//	}
	//}
	//*pa = ret;
	////比t值小的放后
	//for (i = a_num - pos; i < a_num; i++)
	//{
	//	*pa = a[i];
	//	pa++;
	//}
	int* pa = a;
	*pa = 1;

}

void Show(int* a,int a_num)
{
	printf("数组展示位:>");
	int i = 0;
	for (i = 0; i < a_num; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int _tmain(int argc, _TCHAR* argv[])
{
	int a[80] = { 0 };
	//int t = 0;
	//printf("需要几个数:>");
	//int a_num = 0;
	//scanf_s("%d", &a_num);
	//printf("请输入数组A的元素(禁止第一个输入0)：>");
	//for (int i = 0; i < a_num; i++)
	//{
	//	scanf_s("%d", &a[i]);
	//}
	////展示数组
	//Show(a,a_num);
	////以t为分界 划分两块
	//printf("以a[0]分界的数，左大右小:>\n");
	//Div(a,a_num);
	//Show(a, a_num);
	printf("%d", a[0]);
	return 0;
}

