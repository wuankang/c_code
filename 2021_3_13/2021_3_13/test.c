#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>
//struct S2
//{
//	char a;
//	int b;
//};
//struct S1
//{
//	char a;//0
//	int b;//4-7
//	struct S2 c;//8-15
//};
//#pragma pack(2)
//struct S1
//{
//	char a;//0
//	int c;//2-5
//	char b;//6
//}d1;//��С��8���ֽ�
//#pragma pack()
//struct S2
//{
//	int c;//4-7
//	char a;//8
//	char b;//9
//}d2;//��С��8���ֽ�
//struct S1
//{
//	char a : 5;//5��λ
//	char b : 2;//2��λ
//};
//int main()
//{
//	int i = 0;
//	//����40���ֽڣ����Ե���10�����͵����飬ǿ��ת����int*ָ�롣
//	int* p = (int*)malloc(INT_MAX);
//	//�ж��Ƿ�����ɹ�
//	if (NULL == p)
//	{
//		printf("����ʧ�ܣ�\n");
//	}
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = 0;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	//struct S1 d = { 0 };
//	//d.a = 10;//00001010--ȡ�ұ�5��λ--01010
//	//d.b = 8;//00001000--ȡ�ұ�2��λ--00
//	//printf("%d\n", sizeof(d));//1���ֽ�
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	printf("\n");
//	int* ptr=(int*)realloc(p, 20*sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	int j = 0;
//	for (j = 0; j < 20; j++)
//	{
//		printf("%d ", *(p + j));
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}
//
int main()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		return 1;
	}
	else
	{
		int i = 0;
		//err
		for (i = 0; i <5; i++)
		{
			*(p+i) = 0;
		}
		//�ͷ�
		free(p);
		free(p);
		p = NULL;
	}
	return 0;
}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}