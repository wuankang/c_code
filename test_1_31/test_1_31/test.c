#define _CRT_SECURE_NO_WARNINGS 1
//函数调用求素数
//#include<stdio.h>
//#include<math.h>
//int prime_number(int num){
//	int i = 0;
//	for (i = 2; i < sqrt(num); i++){
//		if (num%i == 0){
//			return 1;
//		}
//	}
//			return 0;
//}
//int main(){
//	int num = 0;
//	for (num = 100; num <= 200; num++){
//		if (prime_number(num) == 0){
//			printf("%d ",num);
//		}
//	}
//	return 0;
//}
//写一个函数判断是不是润年
//#include<stdio.h>
//int isleap(int i){
//	return (i % 4 == 0 && i % 100 != 0) || (i % 400 == 0);
//	/*if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)){
//		return 0;
//	}
//	return 1;*/
//}
//int main(){
//	int i = 0;
//	for (i = 1000; i <= 2000; i++){
//		if (isleap(i) == 1){
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//二分查找
//#include<stdio.h>
//int binary_find(int arr[],int k,int sz){
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right){
//		int mid = left + (right-left) / 2;
//		if (arr[mid] > k){
//			right = mid - 1;
//		}
//		if (arr[mid] < k){
//			left = mid + 1;
//		}
//		if (arr[mid] == k){
//			return mid;
//			break;
//		}
//	}
//	if (left>right){
//		return -1;
//	}
//	
//}
//int main(){
//	//有序的
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int sz=sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	int ret=binary_find(arr,k,sz);
//	if (ret != -1){
//		printf("%d\n",ret);
//	}
//	else if (ret == -1){
//		printf("没找到！\n");
//	}
//	return 0;
//}
//每调用一个函数，num+1
//void Add(int* p){
//	(*p)++;
//}
//#include<stdio.h>
//int main(){
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}
//交换
//
//大小端
//#include<stdio.h>
//int check_sys(int* pa){
//	char *p = pa;
//	if (*p == 1){
//		return 1;
//	}
//	if (*p == 0){
//		return 0;
//	}
//}
//int main(){
//	int a = 1;
//	int ret=check_sys(&a);
//	if (ret == 1){
//		printf("小端\n");
//	}
//	if (ret == 0){
//		printf("大端\n");
//	}
//
//}
//#include<stdio.h>
//int main(){
//	char a = -128;
//	printf("%u", a);
//	return 0;
//}
//#include<stdio.h>
//int main(){
//	char a = 128;
//	printf("%u", a);
//	return 0;
//}
//128
//00000000000000000000000001000000原码
//01111111111111111111111110111111反码
//01111111111111111111111111000000补码
//11111111111111111111111111000000
//int main(){
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//}
//-20+10
//00000000000000000000000000001010
//10000000000000000000000000010100
//11111111111111111111111111101011
//11111111111111111111111111101100
//11111111111111111111111111110110
//11111111111111111111111111110101
//10000000000000000000000000001010
//-10
//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111
//11111111111111111111111111111111
//
//int main(){
//	int n = 9;
//	float *pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("pFloat的值为：%f\n", *pFloat);
//	return 0;
//}
//00000000000000000000000000001001原码
//01111111111111111111111111110110反码
//01111111111111111111111111110111补码
//