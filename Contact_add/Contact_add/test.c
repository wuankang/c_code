#include "contact.h"
//1.增加联系人 2.显示联系人 3.删除联系人 4.查找联系人 5.退出 6.修改联系人
//姓名，电话，地址

void menu()
{
	printf("**************************\n");
	printf("**1.Add**********2.Show***\n");
	printf("**3.Delete*******4.Find***\n");
	printf("**5.Motify*******0.Exit***\n");
	printf("**************************\n");
}

enum function
{
	Exit,
	Add,
	Show,
	Delete,
	Find,
	Motify
};
int main()
{
	struct contact person = { 0 };
	int input = 0;
	Init_Con(&person);
	//菜单走起来
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			Insert_Con(&person);
			break;
		case Show:
			break;
		case Delete:
			break;
		case Find:
			break;
		case Motify:
			break;
		case Exit:
			printf("退出成功\n");
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}