#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 3
#include<stdio.h>

struct person
{
	char name[20];
	char tel[20];
	char addr[30];
}data;

typedef struct contact
{
	char* data;
	int capacity;//����
}Con;
//��ʼ��
Init_Con(struct contact* per);
//���
void Insert_Con(struct contact* per);