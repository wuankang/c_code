#include "seqlist.h"
bool inc(SeqList* list)
{
	DATA* ptemp = realloc(list->base, sizeof(DATA)*(list->capacity + INC_SIZE));
	if(ptemp==NULL)
	{
		printf("扩容失败，电脑内存不足\n");
		return false;
	}
	list->base = ptemp;
	list->capacity += INC_SIZE;
}
void initSeqList(SeqList* list)
{
	list->capacity = SEQLIST_INIT_SIZE;
	list->size = 0;
	list->base = (DATA*)malloc(sizeof(DATA)*list->capacity);
	assert(list->base != NULL);//求表达式的值 当结果为false的时候 中止程序	
}
void pop_back(SeqList*  list)
{
	
	if (list->size == 0)
	{
		return;
	}
	else
	{
		list->size--;
	}
}

void push_back(SeqList* list, DATA val)
{
	if (list->size == list->capacity && !inc(list))
	{
		printf("顺序表已满\n");
			return;
	}
	list->base[list->size] = val;
	list->size++;
}
void show(SeqList*  list)
{
	if (empty(list))
	{
		printf("seqlist is null\n");
		return;
	}
	int i = 0;
	for (i = 0; i < list->size;i++)
	{
		printf("%d ", list->base[i]);
	}
	printf("\n");
}
bool  empty(SeqList* list)
{
	return list->size == 0;
}

void sort(SeqList* list)
{
	//冒泡
	int i=0;
	int k = 0;
	for (i = 0; i < list->size-1; i++)
	{
		for (k = 0; k < list->size - i - 1; k++)
		{
			if (list->base[k]>list->base[k + 1])
			{
				DATA _swap = list->base[k];
				list->base[k] = list->base[k+1];
				list->base[k+1] = _swap;
			}
		}
	}
}
void push_front(SeqList* list,DATA val)
{
	int i = 0;
	if (list->size == list->capacity && !inc(list))
	{
		printf("顺序表已满\n");
		return;
	}
	for (i = list->size; i > 0 ; i--)
	{
		list->base[i] = list->base[i - 1];
	}
	list->base[0] = val;
	list->size++;
}
void pop_front(SeqList* list)
{
	if (empty(list))
	{
		return;
	}
	else
	{
		for (int i = 0; i < list->size-1; i++)
		{
			list->base[i] = list->base[i + 1];
		}
		list->size--;
	}
}
int find(SeqList* list, DATA val)
{
	if (empty(list))
	{
		return -1;
	}
	for (int i = 0; i < list->size; i++)
	{
		if (list->base[i] == val)
		{
			return i;
		}
	}
	return -1;
}