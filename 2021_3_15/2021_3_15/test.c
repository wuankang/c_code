#define _CRT_SECURE_NO_WARNINGS 1

#define MAXLEN 100 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
	int elem[MAXLEN]; // 用来存放表元素的数组
	int n; // 定义一个变量，记录数组中实际存放的元素的个数
}intVec;

void InitVec(intVec *pVec)
{
	memset(pVec, 0, sizeof(pVec->elem));
	/**********************************************************
	初始化 pVec 指向的顺序表为空
	*********************************************************/
	pVec->n= 0;	// 设置顺序表中元素的个数为 0：空表
	return;
}

int InsertVec(intVec *pVec, int i, int x)
{
	/**********************************************************
	在 pVec 指向的顺序表的第 i 个位置之前插入值为 x 的新元素
	*********************************************************/ 
	int j;

// 1.  判断插入位置是否合法
if (i < 1 || i >MAXLEN){ // 若插入位置超出了允许范围
	return -1;
}
if (pVec->n == MAXLEN){ // 若表的存储空间已满
	return -1;
}

// 2. 从插入位置到表尾，由后往前依次把元素后挪一个位置
for (j = pVec->n; j >= i; j--){
	pVec->elem[j+1]=pVec->elem[j];
}

// 3. 把新元素放到插入位置，并且记录元素个数的变量值加 1
	pVec->elem[i-1]	= x;
	pVec->n++;

	return i; // 返回插入元素在表中的位置
}
int GetVec(intVec *pVec, int i)
{
	/**********************************************************
	读取 pVec 指向的顺序表的第 i 个位置处的元素
	*********************************************************/
	// 1.  判断读取位置是否在表的长度范围内
	//	若读取位置非法，可通过 exit(0) 退出
		if (i<0 || i>pVec->n)
		{
			exit(0);
		}

	// 2.  返回表中第 i 个元素的值
		else
		{
			return pVec->elem[i];
		}
}
int main()
{
	intVec a;	// 定义一个顺序表对象
	int pos;
	int num;
	int i;
	// 1.  初始化该顺序表为空表
		InitVec(&a);

	// 2. 用户输入若干个整数，并依次插入到该顺序表中
		while (scanf("%d%d", &pos, &num)!=EOF)
		{
			InsertVec(&a, pos, num);
		}

	// 3. 由后往前，依次读取并输出顺序表中每个位置处的元素
		for (i = 0; i <MAXLEN; i++)
		{
			printf("%d ", a.elem[i]);
		}
	return 0;
}