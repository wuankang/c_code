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
	IntVec a;//定义一个顺序表对象
	//初始化表格
	InitVec(&a);
	int pos=0;
	int num=0;
	int i=0;
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			while (1)
			{
				printf("请输入插入的位置和插入的数据(以-1结束)：");
				scanf("%d%d", &pos, &num);
				if (-1 == num)
				{
					break;
				}
				int temp = InsertVec(&a, pos, num);
				printf("它在表中第%d个位置\n", temp);
			}
			break;
		case 2:
			printf("展示为:");
			Show(&a);
			printf("\n");
			break;
		case 3:
			printf("输入位置：");
			scanf("%d", &pos);
			int val = GetVec(&a, pos);
			printf("该位置的元素为:%d\n", val);
			break;
		case 4:
			Delete(&a);
			break;
		case 0:
			printf("退出\n");
			break;
		}
	} while (input);

	return 0;
}