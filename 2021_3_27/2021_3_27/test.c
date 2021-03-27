#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* singleNumbers(int* nums, int numsSize, int* returnSize)
{
	int ret = 0;
	int i = 0;
	//�ҳ�����������һ�ε��������
	for (i = 0; i<numsSize; i++)
	{
		ret ^= nums[i];
	}
	//�������ret��1��bitλ��
	int pos = 0;
	for (pos = 0; pos<32; pos++)
	{
		if (((ret >> pos) & 1) == 1)
		{
			break;
		}
	}
	int tmp1 = 0;
	int tmp2 = 0;
	int arr1[80];
	int arr2[80];
	for (i = 0; i<numsSize; i++)
	{
		if ((nums[i] >> pos) & 1 == 1)
		{
			arr1[tmp1] = nums[i];
			tmp1++;
		}
		else
		{
			arr2[tmp2] = nums[i];
			tmp2++;
		}
	}
	//������ͬ�����Ž���������ͬ��������
	//���
	int num1 = 0;
	for (i = 0; i<tmp1; i++)
	{
		num1 ^= arr1[i];
	}
	int num2 = 0;
	for (i = 0; i<tmp2; i++)
	{
		num2 ^= arr2[i];
	}
	returnSize[0] = num1;
	returnSize[1] = num2;
	return returnSize;

}
int main()
{
	int arr1[] = { 1, 1, 2, 2, 3, 4 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int arr2[10];
	int* arr3 = singleNumbers(arr1, sz, arr2);
	for (int i = 0; i < 2; i++)
		printf("%d ", arr3[i]);
	return 0;
}