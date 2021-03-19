#include "SeqList.h"

void menu()
{
	printf("*******************************\n");
	printf("*1.insert          2.show     *\n");
	printf("*3.getvec          4.delete   *\n");
	printf("*5.find            6.lengthVec*\n");
	printf("*            0.exit           *\n");
	printf("*******************************\n");
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
	int sum = 0;
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
				if (-1 == pos)
				{
					break;
				}
				int temp = InsertVec(&a, pos, num);
				printf("���ڱ��е�%d��λ��\n", temp);
			}
			break;
		case 2:
			Show(&a);
			break;
		case 3:
			printf("����λ�ã�");
			scanf("%d", &pos);
			int val = GetVec(&a, pos);
			printf("��λ�õ�Ԫ��Ϊ:%d\n", val);
			break;
		case 4:
			printf("����Ҫɾ����λ�ã�>");
		    scanf("%d", &i);
			int ret=Delete(&a,i);
			printf("ɾ��λ��:>%d\n",ret);
			break;
		case 5:
			printf("��������ҵ����ݣ�>");
			scanf("%d", &i);
			int tmp=Find(&a, i);
			if (tmp == -1)
			{
				printf("δ�ҵ�������\n");
			}
			else
			{
				printf("�����ݵ�λ��Ϊ��>%d\n", tmp);
			}
			break;
		case 6:
			sum=LengthVec(&a);
			printf("˳�����Ϊ:%d\n", sum);
			break;
		case 0:
			printf("�˳�\n");
			break;
		}
	} while (input);

	return 0;
}