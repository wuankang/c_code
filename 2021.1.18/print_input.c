#include<stdio.h>
#include<ctype.h>

int main(){
	struct stu{
	char name[10];
	char select;
	union course{
		int computer;
		char music;
		}selective;
	}student[5];
	int i=0;
	for(i=0;i<5;i++){
		scanf("%s %c",student[i].name,&student[i].select);
		student[i].select=toupper(student[i].select);
		if(student[i].select=='M')
			scanf("%c ",&student[i].selective.music);
		else
			scanf("%d ",&student[i].selective.computer);
	}
	printf("name   music  computer\n");
	for(i=0;i<5;i++){
		printf("%s ",student[i].name);
		if(student[i].select=='M')
			printf("    %c\n",student[i].selective.music);
		else
			printf("           %d\n",student[i].selective.computer);
	}
	return 0;
}
