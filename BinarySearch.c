#include<stdio.h>
#pragma warning(disable:4996)
//适用于有序查找--二分查找/折半查找--公式是log以2为底的n（次）（n为个数）
int main(){
	char ch[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0,k = 7;
	int sz = sizeof(ch) / sizeof(ch[0]);
	int left = 0, right = sz - 1;
	while (left <= right){
		int mid = (left + right) / 2;
		if (ch[mid] > k){
			right = mid - 1;
		}
		else if (ch[mid] < k){
			left = mid + 1;
		}
		else{
			printf("找到了！！\n");
			printf("底是%d\n", mid);
			break;
		}
	}
	if (left>right){
		printf("找不到！\n");
	}
	return 0;
}