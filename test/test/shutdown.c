#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main(){
	char input[20] = "";
	system("shutdown -s -t 60");
again:
	printf("��ĵ������ڹػ���������룺��ϲ��WAK����ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input,"��ϲ��WAK")==0){
		system("shutdown -a");
	}
	else{
		goto again;
	}
	return 0;
}