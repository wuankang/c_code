#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
union c
{
	char i;
	int j;
};
int check_sys()
{
	/*int i = 1;
	return *(char*)&i;*/
	union Un
	{
		short c[7];//14
		int i;//4
	}u;
	printf("%d", sizeof(u));
}
typedef struct{
	int a;
	char b;
	short c;
	short d;
}AA_t;
int main()
{
	printf("%d\n", sizeof(AA_t));
	//union c u;
	//u.j = 0x11223344;
	//u.i = 0x55;
	//printf("%x\n", u.j);
	//return 0;
	//int i = 1;//��ַ �� -- ��
	////00 00 00 01 ��˴洢
	////10 00 00 00 С�˴洢
	//if (1 == *(char*)&i)
	//{
	//	printf("С��\n");
	//}
	//else
	//	printf("���\n");

	//int ret = check_sys();

	/*if (1 == ret)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}*/
}