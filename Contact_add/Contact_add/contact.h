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
	int capacity;//容量
}Con;
//初始化
Init_Con(struct contact* per);
//添加
void Insert_Con(struct contact* per);