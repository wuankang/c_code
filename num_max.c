#include<stdio.h>
void sort(int* p_max){
	int i=0;
	int j=0;
	int t=0;
	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++){
			if(p_max[j]<p_max[j+1]){
				t=p_max[j];
				p_max[j]=p_max[j+1];
				p_max[j+1]=t;
			}
		}
	}
}
int main(){
	int arr[10];
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr);
	int num_max=arr[0];
	printf("%d",num_max);
	return 0;
}
