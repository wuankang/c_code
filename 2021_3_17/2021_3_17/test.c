#include "seqlist.h"
//дһ���˵�
void menu()
{
	printf("***********************\n");
	printf("*[1]push back [2]show *\n");
	printf("*[3]pop back  [4]sort *\n");
	printf("*[5]push_front[6]find *\n");
	printf("*[7]pop_front [8]size *\n");
	printf("***********************\n");
}
int main()
{
	SeqList mylist;
	initSeqList(&mylist);//��ʼ��˳���
	int i = 0;
	int item = 0;
	int choose = 0;
	menu();
	while (1)
	{
		printf("��ѡ��:>");
		scanf("%d", &choose);
		switch(choose)
		{
			case 1:
				printf("��������(��-1��β)��>");
				while (1)
				{
					scanf("%d", &item);
					if (item == -1)
					{
						break;
					}
					push_back(&mylist, item);
				}
				
				break;
			case 2:
				show(&mylist);
				break;
			case 3:
				pop_back(&mylist);
				break;
			case 4:
				sort(&mylist);
				break;
			case 5:
				while (1)
					printf("��������(��-1��β)��>");
				{
					scanf("%d", &item);
					if (item == -1)
					{
						break;
					}
					push_front(&mylist, item);
				}
				break;
			case 6:
				printf("������Ҫ���ҵ�����:>");
				scanf("%d", &item);
				int index=find(&mylist,item);
				if (index == -1)
				{
					printf("���޴˾�\n");
				}
				else
				{
					printf("�鵽��%dԪ�أ��±�Ϊ%d\n", item, index);
				}
				break;
			case 7:
				pop_front(&mylist);
				break;
		}
	}

	return 0;
}