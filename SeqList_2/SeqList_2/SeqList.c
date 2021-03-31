#include "SeqList.h"
//初始化
void SeqListInit(SeqList* ps)
{
	assert(ps);
	//分配空间
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}
//销毁
void SeqListDestory(SeqList* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}
//检查
void SeqListcheck(SeqList* ps)
{
	assert(ps);
	size_t new_capacity = 0;
	if (ps->size == ps->capacity)
	{
		new_capacity = ps->capacity == 0 ? 4 : 2 * (ps->capacity);
		ps->a = (SLDateType*)realloc(ps->a, sizeof(SLDateType) * new_capacity);
		ps->capacity = new_capacity;
		printf("扩容成功!\n");
	}
}
//头插
void SeqListPushFront(SeqList* ps, SLDateType x)
{
	assert(ps);
	SeqListcheck(ps);
	size_t end=0;
		end = ps->size;
	while (end>0)
	{
		ps->a[end] = ps->a[end-1];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
//尾插
void SeqListPushBack(SeqList* ps, SLDateType x)
{
	assert(ps);
	SeqListcheck(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	for (size_t i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
//头删
void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	SeqListcheck(ps);
	size_t i = 0;
	for (i = 0; i < ps->size-1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
	printf("头删成功\n");
}
//尾删
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	ps->size--;
	printf("尾删成功!\n");
}
//菜单
void menu()
{
	printf("***********************************\n");
	printf("*****1.PushBack    2.Pushfront*****\n");
	printf("*****3.PopBack     4.Popfront *****\n");
	printf("*****5.Show        6.Find     *****\n");
	printf("*****7.Insert      8.Erase    *****\n");
	printf("*****        0.exit           *****\n");
	printf("***********************************\n");
}

//查找
int SeqListFind(SeqList* ps, SLDateType x)
{
	assert(ps);
	SeqListcheck(ps);
	size_t i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return 0;
}
// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)
{
	assert(ps);
	assert(pos <= ps->size);
	SeqListcheck(ps);
	size_t end = ps->size;
	while (end >= pos)
	{
		ps->a[end] = ps->a[end - 1];
		end--;
	}
	ps->a[pos-1] = x;
	printf("增加成功！\n");
	ps->size++;
}
// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, size_t pos)
{
	assert(ps);
	assert(pos <= ps->size);
	SeqListcheck(ps);
	while (pos < ps->size)
	{
		ps->a[pos - 1] = ps->a[pos];
		pos++;
	}
	ps->size--;
	printf("删除成功！\n");
	
}