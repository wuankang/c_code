#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main(){
	char input[20] = "";
	system("shutdown -s -t 60");
again:
	printf("你的电脑正在关机，如果输入：我喜欢WAK，则取消关机\n");
	scanf("%s", input);
	if (strcmp(input,"我喜欢WAK")==0){
		system("shutdown -a");
	}
	else{
		goto again;
	}
	return 0;
}