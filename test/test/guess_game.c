#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void interface(){
	printf("*********************\n");
	printf("******1.play*********\n");
	printf("******0.exit*********\n");
	printf("*********************\n");
}
void game(){
	int guess = 0;
	//0-100����
	//RAND_MAX=32727
	int ret=rand()%100+1;
	while (1){
		printf("����µ���->");
		scanf("%d", &guess);
		if (guess > ret){
			printf("�´���\n");
		}
		else if (guess < ret){
			printf("��С��");
		}
		else{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}

/*int main(){
	int key;
	// ʱ�����ָ����ʱ�䵽�������ʱ��ʱ���,��λ����
	//�������ʱʱ����1970-01-01 08:00:00
	//time���ص��Ǹ�ʱ���
	srand((unsigned int)time(NULL));
	do{
		interface();
		printf("��������(1/0):");
		scanf("%d", &key);
		switch (key){
		case 1:game();
			break;
		case 0:printf("�˳���Ϸ!\n");
			break;
		default:printf("�������\n");
			break;
		}
	} while (key);
	return 0;
}*/