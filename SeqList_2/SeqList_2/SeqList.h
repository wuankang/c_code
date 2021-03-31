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

// �����ݵĹ���:��ɾ��� 
void SeqListInit(SeqList* ps);//��ʼ��
void SeqListDestory(SeqList* ps);//����

void SeqListPrint(SeqList* ps);//��ӡ
void SeqListPushBack(SeqList* ps, SLDateType x);//β��
void SeqListPushFront(SeqList* ps, SLDateType x);//ͷ��
void SeqListPopFront(SeqList* ps);
void SeqListPopBack(SeqList* ps);

// ˳������
int SeqListFind(SeqList* ps, SLDateType x);
// ˳�����posλ�ò���x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x);
// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SeqList* ps, size_t pos);
//�˵�
void menu();
