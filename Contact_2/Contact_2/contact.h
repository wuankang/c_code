#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
#define MAX 3
//��ϵ�˵�������Ϣ
struct Data
{
	char name[30];
	char tel[30];
	char addr[30];
};
//ͨѶ¼�Ľṹ
typedef struct Contact
{
	struct Data* data;//���Դ��������
	int capacity;//ͨѶ¼����������
	int count;//ͳ�Ƹ���
}Con;
//��ʼ��ͨѶ¼
void InitContact(Con* pContact);

//���
void Add(Con* pContact);

//չ��
void Show(Con* pContact);

//ɾ��
void Del(Con* pContact);

//�޸�
void Modify(Con* pContact);

//����
void Find(Con* pContact);

//���
void Clear(Con* pContact);

//����
void Sort(Con* pContact);