#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

enum SeqList_2
{
	Exit,
	PushBack,
	PushFront,
	PopBack,
	PopFront,
	Show,
	Find,
	Insert,
	Erase
};
typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* a;
	size_t size;
	size_t capacity; // unsigned int
}SeqList;

// 对数据的管理:增删查改 
void SeqListInit(SeqList* ps);//初始化
void SeqListDestory(SeqList* ps);//销毁

void SeqListPrint(SeqList* ps);//打印
void SeqListPushBack(SeqList* ps, SLDateType x);//尾插
void SeqListPushFront(SeqList* ps, SLDateType x);//头插
void SeqListPopFront(SeqList* ps);
void SeqListPopBack(SeqList* ps);

// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x);
// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x);
// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, size_t pos);
//菜单
void menu();
