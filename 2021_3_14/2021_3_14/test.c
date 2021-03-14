#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void GetMemory(char **p)
//{
//	*p = (char*)malloc(100);
//}
//void test(void)
//{
//	char* str= NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}
//int main()
//{
//	/*char* p = "hehe\n";*/
//	char p[] = "hehe\n";
//	printf(p);
//	return 0;
//}
//char* Getmemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void test()
//{
//	char* str = NULL;
//	str = Getmemory();
//	printf(str);
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//struct S
//{
//	int a;
//	char b;
//	int c[];//柔性数组
//};
//int main()
//{
//	//在计算机包含柔性数组成员的结构体时，计算大小不包含柔性数组成员。
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}
//struct S
//{
//	int a;
//	int b[];//柔性数组指的时这个数组是柔性可变的
//};
//int main()
//{
//	//开辟空间
//	struct S* pc=(struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	pc->a = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		pc->b[i]=i;
//	}
//	return 0;
//}
#include<string.h>
#include<errno.h>
int main()
{
	//..表示上一级目录
	//.当前目录
	FILE* p = fopen("data.txt", "w");
	if (p == NULL)
	{
		printf("打开失败\n");
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("打开成功\n");
	}
	fclose(p);
	p = NULL;
	return 0;
}