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
	IntVec a;//定义一个顺序表对象
	//初始化表格
	InitVec(&a);
	int pos=0;
	int num=0;
	int i=0;
	int input = 0;
	int sum = 0;
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
				if (-1 == pos)
				{
					break;
				}
				int temp = InsertVec(&a, pos, num);
				printf("它在表中第%d个位置\n", temp);
			}
			break;
		case 2:
			Show(&a);
			break;
		case 3:
			printf("输入位置：");
			scanf("%d", &pos);
			int val = GetVec(&a, pos);
			printf("该位置的元素为:%d\n", val);
			break;
		case 4:
			printf("输入要删除的位置：>");
		    scanf("%d", &i);
			int ret=Delete(&a,i);
			printf("删除位置:>%d\n",ret);
			break;
		case 5:
			printf("请输入查找的数据：>");
			scanf("%d", &i);
			int tmp=Find(&a, i);
			if (tmp == -1)
			{
				printf("未找到该数据\n");
			}
			else
			{
				printf("该数据的位置为：>%d\n", tmp);
			}
			break;
		case 6:
			sum=LengthVec(&a);
			printf("顺序表长度为:%d\n", sum);
			break;
		case 0:
			printf("退出\n");
			break;
		}
	} while (input);

	return 0;
}