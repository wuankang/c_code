#define _CRT_SECURE_NO_WARNINGS 1
#define SEQLIST_INIT_SIZE 8 //��ʼ��������С
#define INC_SIZE 3 //�����С
#include<stdio.h>
#include<malloc.h>
#include<assert.h>
#include<stdbool.h>
typedef int DATA;
typedef struct _Seqlist //����˳���ṹ
{
	DATA* base;//����ָ��
	int capacity;//�������
	int size;//��ǰԪ�ظ���
}SeqList;
//˳���ĳ�ʼ��
void initSeqList(SeqList* list);
void push_back(SeqList* list,DATA val);
void show(SeqList*  list);
void pop_back(SeqList*  list);
bool empty(SeqList* list);
void sort(SeqList* list);
void push_front(SeqList* list,DATA val);
void pop_front(SeqList* list);
int find(SeqList* list, DATA val);