#include "SeqList.h"

void InitVec(IntVec *pVec)
{
	memset(pVec, 0, MAXLEN);
	pVec->n = 0;	// ����˳�����Ԫ�صĸ���Ϊ 0���ձ�
	return;
}


int InsertVec(IntVec *pVec, int i, int x)
{
	/**********************************************************
	�� pVec ָ���˳���ĵ� i ��λ��֮ǰ����ֵΪ x ����Ԫ��
	*********************************************************/ 
	int j;

// 1.  �жϲ���λ���Ƿ�Ϸ�
if (i < 1 || i > MAXLEN){ // ������λ�ó���������Χ
	printf("����λ�ó���������Χ\n");
	return -1;
}
if (pVec->n == MAXLEN){// ����Ĵ洢�ռ�����
	printf("�洢�ռ�����\n");
	return -1;
}

// 2. �Ӳ���λ�õ���β���ɺ���ǰ���ΰ�Ԫ�غ�Ųһ��λ��
for (j = pVec->n; j >= i; j--){
	pVec->elem[j + 1] = pVec->elem[j];
}

// 3. ����Ԫ�طŵ�����λ�ã����Ҽ�¼Ԫ�ظ����ı���ֵ�� 1 
	pVec-> elem[i-1]= x;
	pVec->n++;

	return i; // ���ز���Ԫ���ڱ��е�λ��
}

int GetVec(IntVec *pVec, int i)
{
	/**********************************************************
	��ȡ pVec ָ���˳���ĵ� i ��λ�ô���Ԫ��
	*********************************************************/
	// 1.  �ж϶�ȡλ���Ƿ��ڱ�ĳ��ȷ�Χ��
	//	����ȡλ�÷Ƿ�����ͨ�� exit(0) �˳�
		if (i<0 || i>pVec->n-1)
		{
			printf("����δ������\n");
			exit(0);
		}
		int* tmp = (pVec->elem) + (pVec->n)+1;
			return pVec->elem[*(tmp-i)];
		
}
//չʾ
void Show(IntVec* pVec)
{
	if (pVec->n > MAXLEN)
	{
		printf("����\n");
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

//ɾ��
void Delete(IntVec* pVec)
{

}