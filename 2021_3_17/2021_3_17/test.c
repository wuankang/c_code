#include "seqlist.h"
//写一个菜单
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
	initSeqList(&mylist);//初始化顺序表
	int i = 0;
	int item = 0;
	int choose = 0;
	menu();
	while (1)
	{
		printf("请选择:>");
		scanf("%d", &choose);
		switch(choose)
		{
			case 1:
				printf("输入数据(以-1结尾)：>");
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
					printf("输入数据(以-1结尾)：>");
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
				printf("请输入要查找的数据:>");
				scanf("%d", &item);
				int index=find(&mylist,item);
				if (index == -1)
				{
					printf("查无此据\n");
				}
				else
				{
					printf("查到了%d元素，下标为%d\n", item, index);
				}
				break;
			case 7:
				pop_front(&mylist);
				break;
		}
	}

	return 0;
}