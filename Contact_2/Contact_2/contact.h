#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
#define MAX 3
//联系人的数据信息
struct Data
{
	char name[30];
	char tel[30];
	char addr[30];
};
//通讯录的结构
typedef struct Contact
{
	struct Data* data;//可以存多少数据
	int capacity;//通讯录存的最多人数
	int count;//统计个数
}Con;
//初始化通讯录
void InitContact(Con* pContact);

//添加
void Add(Con* pContact);

//展现
void Show(Con* pContact);

//删除
void Del(Con* pContact);

//修改
void Modify(Con* pContact);

//查找
void Find(Con* pContact);

//清空
void Clear(Con* pContact);

//排序
void Sort(Con* pContact);