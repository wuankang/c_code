#include "contact.h"
//1.������ϵ�� 2.��ʾ��ϵ�� 3.ɾ����ϵ�� 4.������ϵ�� 5.�˳� 6.�޸���ϵ��
//�������绰����ַ

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
	//�˵�������
	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("�˳��ɹ�\n");
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}