#include<stdio.h>

int main(){
	int prime_number=0;
	int i;
	printf("the prime_number are:\n");
	for(prime_number=100;prime_number<=200;prime_number++){
		for(i=2;i<=prime_number/2;i++){
			if(prime_number%i==0){
				break;
			}
		}
		if(i>prime_number/2){
			printf("%d\n",prime_number);
		}
	}
	return 0;
}
