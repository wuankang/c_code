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
//	int c[];//��������
//};
//int main()
//{
//	//�ڼ�����������������Ա�Ľṹ��ʱ�������С���������������Ա��
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}
//struct S
//{
//	int a;
//	int b[];//��������ָ��ʱ������������Կɱ��
//};
//int main()
//{
//	//���ٿռ�
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
	//..��ʾ��һ��Ŀ¼
	//.��ǰĿ¼
	FILE* p = fopen("data.txt", "w");
	if (p == NULL)
	{
		printf("��ʧ��\n");
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("�򿪳ɹ�\n");
	}
	fclose(p);
	p = NULL;
	return 0;
}