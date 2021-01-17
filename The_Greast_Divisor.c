#include<stdio.h>
int main(){
	int dividend=0,gdc=0;
	printf("please input two digits:");
	scanf("%d%d",&dividend,&gdc);
	int remainder=0;
	int flag=1;
	while(flag){
		remainder=dividend%gdc;
		if(remainder==0){
			flag=0;
		}
		else{
			dividend=gdc;
			gdc=remainder;	
		}
	}
	printf("the greatst divisor is %d",gdc);
	return 0;
}
