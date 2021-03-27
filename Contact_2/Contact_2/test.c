#include "contact.h"
//添加联系人信息
//删除指定联系人信息
//查找指定联系人信息
//修改指定联系人信息
//显示所有联系人信息
//清空所有联系人
//以名字排序所有联系人
void menu()
{
	printf("***************************\n");
	printf("***1.add        2.del   ***\n");
	printf("***3.find       4.modify***\n");
	printf("***5.show       6.clear ***\n");
	printf("***7.sort       0.exit  ***\n");
	printf("***************************\n");
}
enum Choice 
{
	Exit,
	add,
	del,
	find,
	modify,
	show,
	clear,
	sort
};
int main()
{
	Con book;
	int input = 0;
	InitContact(&book);//初始化通讯录
	do
	{
		menu();//菜单显示选择
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case add:
			Add(&book);//添加
			break;
		case del:
			Del(&book);//删除
			break;
		case show:
			Show(&book);//展现
			break;
		case modify:
			Modify(&book);//修改
			break;
		case clear://清空
			Clear(&book);
			break;
		case sort://分类
			Sort(&book);
			break;
		case find:
			Find(&book);//查找
			break;
		case Exit:
			printf("退出成功!\n");
			break;
		default:
			break;
		}
		
	} while (input);
}