#define _CRT_SECURE_NO_WARNINGS 1

#define MAXLEN 100 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
	int elem[MAXLEN]; // ������ű�Ԫ�ص�����
	int n; // ����һ����������¼������ʵ�ʴ�ŵ�Ԫ�صĸ���
}intVec;

void InitVec(intVec *pVec)
{
	memset(pVec, 0, sizeof(pVec->elem));
	/**********************************************************
	��ʼ�� pVec ָ���˳���Ϊ��
	*********************************************************/
	pVec->n= 0;	// ����˳�����Ԫ�صĸ���Ϊ 0���ձ�
	return;
}

int InsertVec(intVec *pVec, int i, int x)
{
	/**********************************************************
	�� pVec ָ���˳���ĵ� i ��λ��֮ǰ����ֵΪ x ����Ԫ��
	*********************************************************/ 
	int j;

// 1.  �жϲ���λ���Ƿ�Ϸ�
if (i < 1 || i >MAXLEN){ // ������λ�ó���������Χ
	return -1;
}
if (pVec->n == MAXLEN){ // ����Ĵ洢�ռ�����
	return -1;
}

// 2. �Ӳ���λ�õ���β���ɺ���ǰ���ΰ�Ԫ�غ�Ųһ��λ��
for (j = pVec->n; j >= i; j--){
	pVec->elem[j+1]=pVec->elem[j];
}

// 3. ����Ԫ�طŵ�����λ�ã����Ҽ�¼Ԫ�ظ����ı���ֵ�� 1
	pVec->elem[i-1]	= x;
	pVec->n++;

	return i; // ���ز���Ԫ���ڱ��е�λ��
}
int GetVec(intVec *pVec, int i)
{
	/**********************************************************
	��ȡ pVec ָ���˳���ĵ� i ��λ�ô���Ԫ��
	*********************************************************/
	// 1.  �ж϶�ȡλ���Ƿ��ڱ�ĳ��ȷ�Χ��
	//	����ȡλ�÷Ƿ�����ͨ�� exit(0) �˳�
		if (i<0 || i>pVec->n)
		{
			exit(0);
		}

	// 2.  ���ر��е� i ��Ԫ�ص�ֵ
		else
		{
			return pVec->elem[i];
		}
}
int main()
{
	intVec a;	// ����һ��˳������
	int pos;
	int num;
	int i;
	// 1.  ��ʼ����˳���Ϊ�ձ�
		InitVec(&a);

	// 2. �û��������ɸ������������β��뵽��˳�����
		while (scanf("%d%d", &pos, &num)!=EOF)
		{
			InsertVec(&a, pos, num);
		}

	// 3. �ɺ���ǰ�����ζ�ȡ�����˳�����ÿ��λ�ô���Ԫ��
		for (i = 0; i <MAXLEN; i++)
		{
			printf("%d ", a.elem[i]);
		}
	return 0;
}