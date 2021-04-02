#define _CRT_SECURE_NO_WARNINGS 1

// maze.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#define MAXLEN 100 
typedef struct {
	int* elem;    // ������ջ����Ԫ�ص�����    
	int top;// ָʾջ��λ�õı�ʶ�� 
	int size;//��̬�ռ䵱ǰ�����ı�ʾ��
}intStack;
void my_expand(intStack* pStack)
{
	int new_size = pStack->size == 0 ? 4 : 2 * pStack->size;
	if (pStack->top == pStack->size)
	{
		int* p_elem = (int*)realloc(pStack->elem, sizeof(int)*new_size);
		if (p_elem != NULL)
		{
			pStack->elem = p_elem;
		}
		else
		{
			printf("����ʧ�ܣ�\n");
		}
	}
	pStack->size = new_size;
	return;
}
void  InitStack(intStack* pStack) // ָ��������Ϊ�βΣ�ĳ��ջʵ���ĵ�ַ 
{
	/**********************************************************
	1����ջʵ���洢����Ԫ�صĿռ��Ƿ��ѷ���ã���û�з��䣬����
	�˷���ռ䡣����ʹ������ elem �洢���ݣ��ռ�Ԥ���ѷ��䣬��          ������������
	*********************************************************/
	// nothing to do in this case 
	pStack->elem = NULL;
	pStack->size = 0;
	/**********************************************************
	����ջʵ����ջ����ʶ����Ϊ 0��������㺬�壺��a��ջ���������
	0 ��λ�ã�(b)ջ��ǰ����Ԫ�ظ���Ϊ�㡣
	*********************************************************/
	pStack->top = 0;
}
int  IsEmpty(intStack* pStack) // ָ��������Ϊ�βΣ�ĳ��ջʵ���ĵ�ַ 
{
	/**********************************************************
	ջΪ��ʱ���� 1�����򷵻� 0
	*********************************************************/
	if ((pStack->top) == 0)
		return  1;
	else
		return 0;
}

int  IsFull(intStack* pStack) //ָ��������Ϊ�βΣ�ĳ��ջʵ���ĵ�ַ 
{
	/**********************************************************
	ջ������Ԫ�ظ���Ϊ MAXLEN ʱ���� 1�����򷵻� 0
	*********************************************************/
	if ((pStack->top - 1) >= MAXLEN)
		return  1;
	else
		return 0;
}
int  Push(intStack* pStack, int x)
{
	/**********************************************************
	1��	����ջʵ������������ջʧ��
	*********************************************************/
	my_expand(pStack);

	/**********************************************************
	2��	����ջ�������� x д���ջ��ջ��λ�ã�Ȼ��ջ��λ�ú���
	*********************************************************/    // x ��ջ;
		pStack->elem[pStack->top] = x;
		pStack->top++;
	return 1;
}
int  Pop(intStack* pStack)
{
	/**********************************************************
	1��	����ջΪ�գ������������Ϣ�������س����ʶ��
	*********************************************************/
	if (IsEmpty(pStack))
	{
		printf("\ncan��t pop data from empty stack!\n");
		return 0;
	}

	/**********************************************************
	2��	����ջ��Ϊ�գ���ջ����ʶ�����ƣ�������ջ��Ԫ��
	*********************************************************/
	//ջ����ʶ������ 
	//����ջ��λ������Ԫ�� 
	else
	{
		pStack->top--;
		return pStack->elem[pStack->top];
	}
}

int main()
{
	intStack Stack;
	InitStack(&Stack);
	int e = 0;
	Push(&Stack, 10);
	Push(&Stack, 20);
	Push(&Stack, 30);
	while ((e = Pop(&Stack)) != 0)
	{
		printf("%d ", e);
	}
	printf("\n");

	return 0;
}

