#include "SeqList.h"

void menu()
{
	printf("****************************\n");
	printf("*1.insert          2.show  *\n");
	printf("*3.getvec          4.delete*\n");
	printf("*         0.exit           *\n");
	printf("****************************\n");
}
int main()
{
	IntVec a;//����һ��˳������
	//��ʼ�����
	InitVec(&a);
	int pos=0;
	int num=0;
	int i=0;
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			while (1)
			{
				printf("����������λ�úͲ��������(��-1����)��");
				scanf("%d%d", &pos, &num);
				if (-1 == num)
				{
					break;
				}
				int temp = InsertVec(&a, pos, num);
				printf("���ڱ��е�%d��λ��\n", temp);
			}
			break;
		case 2:
			printf("չʾΪ:");
			Show(&a);
			printf("\n");
			break;
		case 3:
			printf("����λ�ã�");
			scanf("%d", &pos);
			int val = GetVec(&a, pos);
			printf("��λ�õ�Ԫ��Ϊ:%d\n", val);
			break;
		case 4:
			Delete(&a);
			break;
		case 0:
			printf("�˳�\n");
			break;
		}
	} while (input);

	return 0;
}