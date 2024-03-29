#include "SeqList.h"

void InitVec(IntVec *pVec)
{
	memset(pVec, 0, MAXLEN);
	pVec->n = 0;	// 设置顺序表中元素的个数为 0：空表
	return;
}


int InsertVec(IntVec *pVec, int i, int x)
{
	/**********************************************************
	在 pVec 指向的顺序表的第 i 个位置之前插入值为 x 的新元素
	*********************************************************/ 
	int j;

// 1.  判断插入位置是否合法
if (i < 1 || i > MAXLEN){ // 若插入位置超出了允许范围
	printf("插入位置超出了允许范围\n");
	return -1;
}
if (pVec->n == MAXLEN){// 若表的存储空间已满
	printf("存储空间已满\n");
	return -1;
}

// 2. 从插入位置到表尾，由后往前依次把元素后挪一个位置
for (j = pVec->n; j >= i; j--){
	pVec->elem[j + 1] = pVec->elem[j];
}

// 3. 把新元素放到插入位置，并且记录元素个数的变量值加 1 
	pVec-> elem[i-1]= x;
	pVec->n++;

	return i; // 返回插入元素在表中的位置
}

int GetVec(IntVec *pVec, int i)
{
	/**********************************************************
	读取 pVec 指向的顺序表的第 i 个位置处的元素
	*********************************************************/
	// 1.  判断读取位置是否在表的长度范围内
	//	若读取位置非法，可通过 exit(0) 退出
		if (i<0 || i>pVec->n-1)
		{
			printf("数据未有输入\n");
			exit(0);
		}
		int* tmp = (pVec->elem) + (pVec->n)+1;
			return pVec->elem[*(tmp-i)];
		
}
//展示
void Show(IntVec* pVec)
{
	if (pVec->n > MAXLEN)
	{
		printf("已满\n");
		return;
	}
	else
	{
		for (int i=pVec->n-1; i >= 0; i--)
		{
			printf("%d ", pVec->elem[i]);
		}
	}
}

//删除
void Delete(IntVec* pVec)
{

}