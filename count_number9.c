#include<stdio.h>

int main(){
	int count=0;
	int i=0;
	for(i=1;i<=100;i++){
		if(i%10==9){
			count++;
		}		
	}
	printf("amount of nine is %d\n",count);
	return 0;
}
