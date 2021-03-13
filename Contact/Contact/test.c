#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//可以保存1000个人的信息
//每个人的信息
//名字
//年龄
//性别
//电话
//地址
//1.增加一个人的信息
//2.删除一个人的信息
//3.修改一个人的信息
//4.查找一个人的信息
//5.显示信息
//6.排序
//7.退出
enum S1
{
	exit,
	add,
	del,
	modify,
	search,
	show,
	sort
};
void menu()
{
	printf("***********************************\n");
	printf("****1.add              2.del   ****\n");
	printf("****3.modify           4.search****\n");
	printf("****5.show             6.sort  ****\n");
	printf("****0.exit                     ****\n");
	printf("***********************************\n");
}
void test()
{
	int input = 0;
	struct Contact con;//创建了一个通讯录
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择：->");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			AddContact(&con);
			break;
		case del:
			DelContact(&con);
			break;
		case modify:
			ModifyContact(&con);
			break;
		case search:
			SearchContact(&con);
			break;
		case show:
			ShowContact(&con);
			break;
		case sort:
			break;
		case exit:
			printf("退出通讯录\n");
			break;
		default:
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}