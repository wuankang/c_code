#define _CRT_SECURE_NO_WARNINGS 1
#define MAXLEN 100 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
	int elem[MAXLEN];//������ű�Ԫ�صĵط�
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
void Delete(IntVec* pVec);