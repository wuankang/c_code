#include<stdio.h>

int main(){
	double prime_sum=1;
	double denominator= 1;
	int minus=-1;
	for(denominator=2;denominator<=100;denominator++){
		prime_sum+=(1/denominator)*minus;
		minus*=(-1);
	}
	printf("1/1-1/2+1/3-1/4+1/5 бнбн + 1/99 - 1/100 = %lf",prime_sum);
	return 0;
}
