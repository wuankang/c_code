#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//int* addToArrayForm(int* A, int ASize, int K, int* returnSize){
//	int KSize = 0;
//	int K_tmp = K;
//	//ȡK�ĳ���  1234,+1 123,+1  12,+1 1,+1 0
//	while (K_tmp)
//	{
//		K_tmp = K_tmp / 10;
//		KSize++;
//	}
//	//���ĳ��ȣ����ս�λ�Ļ�999,1�ü�һλ����������λ����+1
//	int len = KSize > ASize ? KSize + 1 : ASize + 1;
//	//���ٴ��ȥ���Ŀռ�
//	int* Arr = (int*)malloc(sizeof(int)*len);
//	//�����������ӵ���
//	int A_end = ASize - 1;//A�������һ��λ��
//	int K_num = 0;
//	int next = 0;//��λ��
//	int reti = 0;
//	while (A_end >= 0 || K_num < KSize)
//	{
//		int Aval = 0;
//		if (A_end >= 0)
//		{
//			Aval = A[A_end];
//			int ret = K % 10;
//			Aval += ret;
//			if (Aval >= 10)
//			{
//				next = 1;
//				Aval -= 10;
//			}
//		}
//		K_num++;
//		Arr[reti++] = Aval;
//		printf("%d ", Arr[reti - 1]);
//		K /= 10;
//		A_end--;
//	}
//	if (next == 1)
//	{
//		Arr[reti++] = 1;
//	}
//	//����һ��
//	int begin = 0;
//	int end = reti - 1;
//	while (begin < end)
//	{
//		int temp = Arr[begin];
//		Arr[begin] = Arr[end];
//		Arr[end] = temp;
//		begin++;
//		end--;
//	}
//	//��ӡ
//	for (int i = 0; i < reti;i++)
//		printf("\n%d ", Arr[i]);
//	return A;
//}


/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* addToArrayForm(int* A, int ASize, int K, int* returnSize){
	int KSize = 0;
	while (K)
	{
		K /= 10;
		KSize++;
	}
	//���ĳ��ȣ����ս�λ�Ļ�999,1�ü�һλ����������λ����+1
	int len = KSize > ASize ? KSize + 1 : ASize + 1;
	//���ٴ��ȥ���Ŀռ�
	int* Arr = (int*)malloc(sizeof(int)*len);
	//�����������ӵ���
	int A_end = ASize - 1;//A�������һ��λ��
	int next = 0;//��λ��
	int reti = 0;
	while (A_end >= 0 || K > 0)
	{
		int x1 = 0;
		if (A_end >= 0)
		{
			x1 = A[A_end];
			A_end--;
		}
		int x2 = 0;
		if (K > 0)
		{
			x2 = K % 10;
			K /= 10;
		}
		int ret = x1 + x2 + next;
		if (ret >= 10)
		{
			next = 1;
			ret -= 10;
		}
		else
		{
			next = 0;
		}
		Arr[reti++] = ret;
		//printf("%d ", Arr[reti - 1]);
	}
	if (next == 1)
	{
		Arr[reti++] = 1;
	}
	//����һ��
	int begin = 0;
	int end = reti - 1; 
		while (begin < end)
		{
			int temp = Arr[begin];
			Arr[begin] = Arr[end];
			Arr[end] = temp;
			begin++;
			end--;
		}
	*returnSize = reti;

	return Arr;
}
int main()
{
	int returnSize = 0;
	int A[] = {0};
	int K =10000;
	int sz = sizeof(A) / sizeof(int);
	int*Arr=addToArrayForm(A, sz, K, &returnSize);
	for (int i = 0; i < returnSize; i++)
	{
		printf("%d ", Arr[i]);
	}
	printf("\n");
	return 0;
}