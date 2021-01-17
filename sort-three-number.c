#include<stdio.h>
void exchange(int* a,int* b){
	int t=0;
	t=*a;
	*a=*b;
	*b=t;
}

int main(){
	int a=0,b=0,c=0;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){
		exchange(&a,&b);	
	}
	else if(b<c){
		exchange(&b,&c);
	}
	else if(a<c){
		exchange(&a,&c);
	}
	printf("%d %d %d",a,b,c);
	return 0;
}
