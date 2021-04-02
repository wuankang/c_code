#define _CRT_SECURE_NO_WARNINGS 1

// maze.cpp : 定义控制台应用程序的入口点。
//
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#define MAXLEN 100 
typedef struct {
	int* elem;    // 用来存栈数据元素的数组    
	int top;// 指示栈顶位置的标识量 
	int size;//动态空间当前增长的标示量
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
			printf("分配失败！\n");
		}
	}
	pStack->size = new_size;
	return;
}
void  InitStack(intStack* pStack) // 指针类型作为形参，某个栈实例的地址 
{
	/**********************************************************
	1、该栈实例存储数据元素的空间是否已分配好？若没有分配，需在
	此分配空间。本例使用数组 elem 存储数据，空间预先已分配，故          无需额外操作。
	*********************************************************/
	// nothing to do in this case 
	pStack->elem = NULL;
	pStack->size = 0;
	/**********************************************************
	将该栈实例的栈顶标识量置为 0，表达两层含义：（a）栈顶在数组的
	0 号位置；(b)栈当前数据元素个数为零。
	*********************************************************/
	pStack->top = 0;
}
int  IsEmpty(intStack* pStack) // 指针类型作为形参，某个栈实例的地址 
{
	/**********************************************************
	栈为空时返回 1，否则返回 0
	*********************************************************/
	if ((pStack->top) == 0)
		return  1;
	else
		return 0;
}

int  IsFull(intStack* pStack) //指针类型作为形参，某个栈实例的地址 
{
	/**********************************************************
	栈中数据元素个数为 MAXLEN 时返回 1，否则返回 0
	*********************************************************/
	if ((pStack->top - 1) >= MAXLEN)
		return  1;
	else
		return 0;
}
int  Push(intStack* pStack, int x)
{
	/**********************************************************
	1、	若该栈实例已满，则入栈失败
	*********************************************************/
	my_expand(pStack);

	/**********************************************************
	2、	若该栈不满，则将 x 写入该栈的栈顶位置，然后栈顶位置后移
	*********************************************************/    // x 入栈;
		pStack->elem[pStack->top] = x;
		pStack->top++;
	return 1;
}
int  Pop(intStack* pStack)
{
	/**********************************************************
	1、	若该栈为空，则输出出错信息，并返回出错标识量
	*********************************************************/
	if (IsEmpty(pStack))
	{
		printf("\ncan’t pop data from empty stack!\n");
		return 0;
	}

	/**********************************************************
	2、	若该栈不为空，则将栈顶标识量后移，并返回栈顶元素
	*********************************************************/
	//栈顶标识量后移 
	//返回栈顶位置数据元素 
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

