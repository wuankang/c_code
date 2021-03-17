#define _CRT_SECURE_NO_WARNINGS 1
#define SEQLIST_INIT_SIZE 8 //初始化容量大小
#define INC_SIZE 3 //增配大小
#include<stdio.h>
#include<malloc.h>
#include<assert.h>
#include<stdbool.h>
typedef int DATA;
typedef struct _Seqlist //申明顺序表结构
{
	DATA* base;//数组指针
	int capacity;//最大容量
	int size;//当前元素个数
}SeqList;
//顺序表的初始化
void initSeqList(SeqList* list);
void push_back(SeqList* list,DATA val);
void show(SeqList*  list);
void pop_back(SeqList*  list);
bool empty(SeqList* list);
void sort(SeqList* list);
void push_front(SeqList* list,DATA val);
void pop_front(SeqList* list);
int find(SeqList* list, DATA val);