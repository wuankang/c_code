#define _CRT_SECURE_NO_WARNINGS 1
#define MAXLEN 3 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
#include<errno.h>
typedef struct
{
	int capacity;//�ռ��С
	int* elem;//������ű�Ԫ�صĵط�
	int n;//��¼������ʵ�ʷŵ�����
}IntVec;
//��ʼ��˳���
void InitVec(IntVec *pVec);

//����
int InsertVec(IntVec *pVec, int i, int x);

//��ȡ
int GetVec(IntVec *pVec, int i);

//չʾ
void Show(IntVec* pVec);

//ɾ��
int Delete(IntVec* pVec,int i);

//����λ��
int Find(IntVec* pVec, int i);

//�������
int LengthVec(IntVec* pVec);