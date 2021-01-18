#include<stdio.h>
#include<string.h>
#include<ctype.h>
void maxlength(char str[]){
	char pos[80];
	strcpy(pos,str);
	int i,k;
	int length=0,maxlength=0;
	for(i=0;i<strlen(str)+1;i++){
		if(isalpha(str[i])){
			length++;
		}
		if(!isalpha(str[i])){
			if(maxlength<length){
				maxlength=length;
				for(k=0;k<maxlength;k++){
					pos[k]=str[i-maxlength+k];
				}
				pos[k]='\0';
			}
			length=0;
		}
	}
		printf("the maxlength = %d\n",maxlength);
		for(k=0;k<maxlength;k++)
			printf("%c",pos[k]);
		printf("\n");
}

int main(){
	char str[80];
	gets(str);
	maxlength(str);
	return 0;
}
