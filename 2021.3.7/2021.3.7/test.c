#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stddef.h>
struct Stu
{
	char a;
	int b;
	char c;
};
//�ṹ�����
//offsetofƫ����
//ƫ����Ĭ��ֵ��8����vs�У����Ա�ȽϵĽ�Сֵ��ƫ����
//�ṹ��������С�ǽṹ���ڳ�Ա�����ֵ����������
int main()
{
	struct Stu s1;
	//printf("%d\n",offsetof(struct Stu, a));
	//printf("%d\n", offsetof(struct Stu, b));
	//printf("%d\n", offsetof(struct Stu, c));
	//printf("%d\n", sizeof(s1));
	return 0;
}