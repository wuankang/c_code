// 2021_3_22.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

void Div(int* a, int a_num)
{
	//int* pa = a;
	//int ret = a[0];
	//int pos = 0;
	//int i = 0;
	////��tֵ��ķ�ǰ
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
	////��tֵС�ķź�
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
	printf("����չʾλ:>");
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
	//printf("��Ҫ������:>");
	//int a_num = 0;
	//scanf_s("%d", &a_num);
	//printf("����������A��Ԫ��(��ֹ��һ������0)��>");
	//for (int i = 0; i < a_num; i++)
	//{
	//	scanf_s("%d", &a[i]);
	//}
	////չʾ����
	//Show(a,a_num);
	////��tΪ�ֽ� ��������
	//printf("��a[0]�ֽ�����������С:>\n");
	//Div(a,a_num);
	//Show(a, a_num);
	printf("%d", a[0]);
	return 0;
}

