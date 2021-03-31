#include "SeqList.h"
void SeqListtest()
{
	SeqList s;
	SeqListInit(&s);
	int input = 0;
	SLDateType ret = 0;
	do
	{
		menu();
		printf("please chose:>");
		scanf("%d", &input);
		switch (input)
		{
		case PushFront:
			printf("please input a num:>");
			scanf("%d", &ret);
			SeqListPushFront(&s, ret);
			break;
		case PushBack:
			printf("please input a num:>");
			scanf("%d", &ret);
			SeqListPushBack(&s, ret);
			break;
		case PopBack:
			SeqListPopBack(&s);
			break;
		case PopFront:
			SeqListPopFront(&s);
			break;
		case Show:
			SeqListPrint(&s);
			break;
		case Find:
			printf("please input a num:>");
			scanf("%d", &ret);
			SLDateType x=SeqListFind(&s, ret);
			if (0 == x)
			{
				printf("未找到!\n");
			}
			else
			{
				printf("该位置下标为%d\n", x);
			}
			break;
		case Exit:
			printf("退出!\n");
			break;
		case Insert:
			printf("please input a pos and num:>");
			size_t pos = 0;
			SLDateType m = 0;
			scanf("%d%d", &pos, &m);
			SeqListInsert(&s, pos, m);
		case Erase:
			printf("please input a pos:>");
			size_t pos_1 = 0;
			scanf("%d", &pos_1);
			SeqListErase(&s,pos_1);
			break;
		default:
			break;
		}
	} while (input);
	SeqListDestory(&s);
}

int main()
{
	SeqListtest();
}