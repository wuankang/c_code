#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int removeElement(int* nums, int numsSize, int val){
//	int* nums1 = nums;
//	int pos = 0;
//	int count = 0;
//	while (pos<numsSize)
//	{
//		if (val != *nums)
//		{
//			*nums1 = *nums;
//			printf("%d ", *nums1);
//			nums1++;
//			count++;
//		}
//		nums++;
//		pos++;
//	}
//	nums1--;
//	printf("\n");
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d ", *(nums1-i));
//	}
//	//printf("\n%d", *(nums1 - 1));
//	return count;
//	/*int src = 0;
//	int dst = 0;
//	while (src < numsSize)
//	{
//		if (nums[src] != val)
//		{
//			nums[dst] = nums[src];
//			dst++;
//		}
//		src++;
//	}
//	return dst;*/
//}
//int removeElement(int* nums, int numsSize)
//{
//	int src1 = 0;
//	int src2 = 1;
//	int dst = 0;
//	while (src2 < numsSize)
//	{
//		nums[dst] = nums[src1];
//		printf("%d ", nums[dst]);
//		dst++;		
//		if (nums[src1] != nums[src2])
//		{
//			src1++;
//			src2++;
//		}
//		else
//		{
//			while (src2<numsSize&&nums[src1]==nums[src2])
//				src2++;
//			src1 = src2;
//			src2++;
//		}
//		
//	}
//	/*if (src1 < numsSize)
//	{*/
//		nums[dst] = nums[src1];
//		printf(" %d\n", nums[dst]);
//		dst++;
//	/*}*/
//	//for (int i = 0; i < dst;i++)
//	//printf("%d ", nums[i]);
//	return dst;
//}
//int main()
//{
//	int arr[] = { 1, 1, 1, 2, 3 ,3 , 4 };
//	/*int val = 2;*/
//	int sz = sizeof(arr) / sizeof(int);
//	int len=removeElement(arr, sz);
//	/*for (int i = 0; i < len;i++)
//	printf("%d", arr[i]);*/
//	printf("\n%d\n", len);
//}
#include<malloc.h>
int main()
{
	int arr[10] = { 0 };//��ջ����������40���ֽڵĿռ�
	//��̬�ڴ濪��  �����Ͽ���
	int* p = (int*)malloc(40);//ϣ����40���ֽڵ���һ��10�����͵�����
	if (p == NULL)
	{
		printf("�ڴ濪��ʧ��\n");
	}
	else
	{
		//���ٳɹ�
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = 0;
		}
	}
	return 0;
}