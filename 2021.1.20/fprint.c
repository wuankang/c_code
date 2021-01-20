//程序功能：输入10个整数，以2种方式输出这10个数。第1次输出这10个数是将第3到第8个数
//按从小到大排序其余数据位置不变的方式输出,第2次输出是将这10个数按从小到大排序输出到文
//件d:\out.txt。
//运行示例：
//键盘输入10个数：8 6 2 1 9 5 3 4 7 0
//屏幕上显示 8 6 1 2 3 4 5 9 7 0,将0 1 2 3 4 5 6 7 8 9 存入文件d:\out.txt
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 10
void sort(int a[],int n){
	int i,j,k,t=0;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[k]){
				k=j;
			}
		}
		t=a[k];
		a[k]=a[i];
		a[i]=t;
	}
}
int main(){
	FILE* fp;
	int i,j,a[N]={8,6,2,1,9,5,3,4,7,0};
	for(i=2;i<8;i++){
		for(j=2;j<8-i+1;j++){
			if(a[j]>a[j+1]&&a[j]!=a[j+1]){
				a[j]=a[j]^a[j+1];
				a[j+1]=a[j+1]^a[j];
				a[j]=a[j]^a[j+1];
			}
		}
	}
	for(i=0;i<N;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	if((fp=fopen("d:\out.txt", "w"))==NULL){
		printf("cannot open file d:\\out.txt\n");
		exit(-1);
	}
	sort(a,N);
	for(i=0;i<N;i++){
		fprintf(fp,"%d ",a[i]);
	}
	return 0;
}

