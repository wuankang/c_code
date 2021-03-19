#define _CRT_SECURE_NO_WARNINGS 1
#define MAXLEN 3 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
#include<errno.h>
typedef struct
{
	int capacity;//空间大小
	int* elem;//用来存放表元素的地方
	int n;//记录数组中实际放的数量
}IntVec;
//初始化顺序表
void InitVec(IntVec *pVec);

//插入
int InsertVec(IntVec *pVec, int i, int x);

//读取
int GetVec(IntVec *pVec, int i);

//展示
void Show(IntVec* pVec);

//删除
int Delete(IntVec* pVec,int i);

//查找位置
int Find(IntVec* pVec, int i);

//计算表长度
int LengthVec(IntVec* pVec);