//�����ܣ�����10����������2�ַ�ʽ�����10��������1�������10�����ǽ���3����8����
//����С����������������λ�ò���ķ�ʽ���,��2������ǽ���10��������С���������������
//��d:\out.txt��
//����ʾ����
//��������10������8 6 2 1 9 5 3 4 7 0
//��Ļ����ʾ 8 6 1 2 3 4 5 9 7 0,��0 1 2 3 4 5 6 7 8 9 �����ļ�d:\out.txt
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

