#define _CRT_SECURE_NO_WARNINGS 1
//模拟实现strlen
//#include<stdio.h>
//int my_strlen(char* pa){
//	int count = 0;
//	while ((*pa++) != '\0'){
//		count++;
//	}
//	return count;
//}
//
//int main(){
//	char arr1[] = "hello bit";
//	int ret=my_strlen(arr1);
//	printf("%d\n", ret);
//	return 0;
//}
//模拟实现库函数strcpy
//#include<stdio.h>
//void my_strcpy(char* arr1, const char* arr2){
//	while ((*arr1++)=(*arr2++)){
//		;
//	}
//}
//
//int main(){
//	char arr1[] = "xxxxxxxxx";
//	char arr2[] = "hello bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
/*
思路：
1. 给定两个下标left和right，left放在数组的起始位置，right放在数组中最后一个元素的位置
2. 循环进行一下操作
a. 如果left和right表示的区间[left, right]有效，进行b，否则结束循环
b. left从前往后找，找到一个偶数后停止
c. right从后往前找，找到一个奇数后停止
d. 如果left和right都找到了对应的数据，则交换，继续a，
*/
//#include<stdio.h>
//void my_exchange(int* p,int n){
//	//放奇数和偶数
//	int* pp = p + n - 1;
//	while (p < pp){
//		//左边遇到偶数就停
//		while (p < pp && ((*p) %2) == 1){
//			p++;
//		}
//		//右边遇到奇数就停
//		while (p < pp && ((*pp) % 2)==0)
//		{
//			pp--;
//		}
//		if (p < pp){
//			int temp = *p;
//			*p = *pp;
//			*pp = temp;
//		}
//	}
//}
//int main(){
//	int arr[5] = { 0, 1, 2, 3, 4 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	my_exchange(arr,sz);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//		printf("%d ", arr[i]);
//	
//	return 0;
//}
