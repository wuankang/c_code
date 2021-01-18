#include<stdio.h>

int main(){
	char data[100];
	char string[100];
	char* pdata=data;
	char* ptr=string;
	gets(string);
	int temp=0;
	int height =0;
	while(*ptr!='\0'){
		temp=0;
		height=0;
		while(*ptr>='0'&&*ptr<='9'){
			temp=10*temp+*ptr-'0';
			height=1;
			ptr++;
		}
		if(height){
			*pdata=temp;
			pdata++;
			printf("%d ",temp);
		}
		else{
			ptr++;
		}
	}
	printf("\nhe number of digits is:%d",pdata-data);
	return 0;
}
