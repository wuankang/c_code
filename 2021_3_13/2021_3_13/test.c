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
//}d1;//大小是8个字节
//#pragma pack()
//struct S2
//{
//	int c;//4-7
//	char a;//8
//	char b;//9
//}d2;//大小是8个字节
//struct S1
//{
//	char a : 5;//5个位
//	char b : 2;//2个位
//};
//int main()
//{
//	int i = 0;
//	//申请40个字节，可以当作10个整型的数组，强制转换成int*指针。
//	int* p = (int*)malloc(INT_MAX);
//	//判断是否申请成功
//	if (NULL == p)
//	{
//		printf("申请失败！\n");
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
//	//d.a = 10;//00001010--取右边5个位--01010
//	//d.b = 8;//00001000--取右边2个位--00
//	//printf("%d\n", sizeof(d));//1个字节
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
		//释放
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