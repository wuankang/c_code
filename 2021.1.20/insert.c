//程序功能：用指针形式写一函数"insert（int a[],int i,int k）",
//把整型数K插入整型数组中的第i位。
#include<stdio.h>
void insert(int* p,int m,int k){
	*(p+m+1)=*(p+m);
	*(p+m)=*(p+m-1);
	*(p+1)=k;
}

int main(){
	int a[3]={1,2,3};
	int* p=a;
	int i=0;
	for(i=0;i<3;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	insert(p,2,0);
	for(i=0;i<4;i++){
		printf("%d ",a[i]);
	}
}

