#define _CRT_SECURE_NO_WARNINGS 1
//素数
//#include<stdio.h>
//#include<math.h>
//int main(){
//	int j = 0;
//	int i;
//		for (i = 101; i <= 200; i += 2){
//			int flag = 1;
//			for (j = 2; j <= sqrt(i); j++){
//				if (i%j == 0){
//					flag = 0;//不是素数
//					break;
//				}
//			}
//			if (flag){
//				printf("%d ", i);
//			}
//		}
//	return 0;
//}
//冒泡排序
//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++){
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++){
//			if (arr[j]<arr[j + 1]){
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1){
//			break;
//		}
//	}
//}
//int main(){
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i;
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}