#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//���Ա���1000���˵���Ϣ
//ÿ���˵���Ϣ
//����
//����
//�Ա�
//�绰
//��ַ
//1.����һ���˵���Ϣ
//2.ɾ��һ���˵���Ϣ
//3.�޸�һ���˵���Ϣ
//4.����һ���˵���Ϣ
//5.��ʾ��Ϣ
//6.����
//7.�˳�
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
	struct Contact con;//������һ��ͨѶ¼
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��->");
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
			printf("�˳�ͨѶ¼\n");
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