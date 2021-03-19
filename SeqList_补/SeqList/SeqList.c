#include "SeqList.h"

void InitVec(IntVec *pVec)
{
	pVec->capacity = MAXLEN;
	pVec->elem = (int*)malloc(sizeof(int)*pVec->capacity);
	pVec->n = 0;	// ����˳�����Ԫ�صĸ���Ϊ 0���ձ�
	return;
}


int InsertVec(IntVec *pVec, int i, int x)
{
	//�жϿռ��С
	if (pVec->n == pVec->capacity)
	{
		int* ptr = realloc(pVec->elem, sizeof(int)*(pVec->capacity+MAXLEN));
		if (ptr == NULL)
		{
			printf("%s\n", strerror(errno));
			return;
		}
		else
		{
			pVec->elem = ptr;
			pVec->capacity += MAXLEN;
			printf("��ӳɹ�\n");
		}
	}
	/**********************************************************
	�� pVec ָ���˳���ĵ� i ��λ��֮ǰ����ֵΪ x ����Ԫ��
	*********************************************************/ 
	int j;

//// 1.  �жϲ���λ���Ƿ�Ϸ�
//if (i < 1 || i > MAXLEN){ // ������λ�ó���������Χ
//	printf("����λ�ó���������Χ\n");
//	return -1;
//}
//if (pVec->n == MAXLEN){// ����Ĵ洢�ռ�����
//	printf("�洢�ռ�����\n");
//	return -1;
//}

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
		int* tmp = (pVec->elem) + (pVec->n)-1;
			return *(tmp-i+1);
		
}
//չʾ
void Show(IntVec* pVec)
{
	printf("չʾΪ:");
		for (int i=pVec->n-1; i >= 0; i--)
		{
			printf("%d ", pVec->elem[i]);
		}
	printf("\n");
}

//ɾ��
int Delete(IntVec* pVec,int i)
{
	//�ж�λ���Ƿ�Ϸ�
	if (i < 0 || i>pVec->n)
	{
		printf("��λ�ò��Ϸ�\n");
		return -1;
	}
	int* tmp = pVec->elem+pVec->n-1-i;
	for (; *tmp > 0; tmp++)
	{
		pVec->elem[*tmp] = pVec->elem[*(tmp+1)];
	}
	pVec->n--;
	printf("ɾ���ɹ�\n");
	return i;
}

//����
int Find(IntVec* pVec, int i)
{
	for (int j=0; j <pVec->n; j++)
	{
		if (i == pVec->elem[j])
		{
			return (pVec->n)-j;
		}
	}
	return -1;
}
//�������
int LengthVec(IntVec* pVec)
{
	int sum = 0;
	while (pVec->elem[sum] != '\0')
	{
			sum++;
	}
	return sum;
}