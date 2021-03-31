#include "SeqList.h"
//��ʼ��
void SeqListInit(SeqList* ps)
{
	assert(ps);
	//����ռ�
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}
//����
void SeqListDestory(SeqList* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}
//���
void SeqListcheck(SeqList* ps)
{
	assert(ps);
	size_t new_capacity = 0;
	if (ps->size == ps->capacity)
	{
		new_capacity = ps->capacity == 0 ? 4 : 2 * (ps->capacity);
		ps->a = (SLDateType*)realloc(ps->a, sizeof(SLDateType) * new_capacity);
		ps->capacity = new_capacity;
		printf("���ݳɹ�!\n");
	}
}
//ͷ��
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
//β��
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
//ͷɾ
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
	printf("ͷɾ�ɹ�\n");
}
//βɾ
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	ps->size--;
	printf("βɾ�ɹ�!\n");
}
//�˵�
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

//����
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
// ˳�����posλ�ò���x
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
	printf("���ӳɹ���\n");
	ps->size++;
}
// ˳���ɾ��posλ�õ�ֵ
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
	printf("ɾ���ɹ���\n");
	
}