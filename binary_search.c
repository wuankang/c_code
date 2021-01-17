#include<stdio.h>

int main(){
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int k=0;
	printf("please input a number(0-9):");
	scanf("%d",&k);
	int right=9,left=0,mid=0;
	while(left<=right){
		mid=(right+mid)/2;
		if(arr[mid]<k){
			left=mid+1;
		}
		else if(arr[mid]>k){
			right=mid-1;
		}
		else{
			printf("找到了! 下标为%d\n",mid);
			break;
		}
	}
	if(left>right){
		printf("找不到！\n");
	}
	return 0;
}
