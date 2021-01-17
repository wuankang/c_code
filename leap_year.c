#include<stdio.h>

int main(){
	int year=0;
	printf("the leap years are:\n");
	for(year=1000;year<=2000;year++){
		if(year%4==0&&year%100!=0){
			printf("%d\n",year);
		}
	}
	return 0;
}
