#include<stdio.h>

void average(float* p_score,int n){
	float sum=0;
	float average=0;
	float* p_end=p_score+n-1;
	for(;p_score<p_end;p_score++){
		sum+=*p_score;
	}
	printf("%.2f\n",average=sum/3);
}
void score_2(float(*p2)[4],int n){
	int i=0;
	for(i=0;i<n;i++){
		printf("%.2f ",*(*p2+i));
	}
}
int main(){
	float score[3][4]={{63,65,67,69},{82,84,86,88},{90,93,96,99}};
	average(*score,12);
	score_2(score+2,4);
	return 0;
}
