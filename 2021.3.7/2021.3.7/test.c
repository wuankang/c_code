#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stddef.h>
struct Stu
{
	char a;
	int b;
	char c;
};
//结构体对齐
//offsetof偏移量
//偏移量默认值是8，在vs中，与成员比较的较小值是偏移量
//结构体的整体大小是结构体内成员的最大值的整数倍。
int main()
{
	struct Stu s1;
	//printf("%d\n",offsetof(struct Stu, a));
	//printf("%d\n", offsetof(struct Stu, b));
	//printf("%d\n", offsetof(struct Stu, c));
	//printf("%d\n", sizeof(s1));
	return 0;
}