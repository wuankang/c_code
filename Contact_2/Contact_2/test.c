#include "contact.h"
//�����ϵ����Ϣ
//ɾ��ָ����ϵ����Ϣ
//����ָ����ϵ����Ϣ
//�޸�ָ����ϵ����Ϣ
//��ʾ������ϵ����Ϣ
//���������ϵ��
//����������������ϵ��
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
	exit,
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
	InitContact(&book);//��ʼ��ͨѶ¼
	do
	{
		menu();//�˵���ʾѡ��
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{
		case add:
			Add(&book);//���
			break;
		case del:
			Del(&book);//ɾ��
			break;
		case show:
			Show(&book);
			break;
		case modify:
			Modify(&book);
			break;
		case clear:
			break;
		case sort:
			break;
		case find:
			Find(&book);
			break;
		case exit:
			printf("�˳��ɹ�!\n");
			break;
		default:
			break;
		}
		
	} while (input);
}