#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu(){
	printf("*********************\n");
	printf("****    1.play    ***\n");
	printf("****    0.exit    ***\n");
	printf("*********************\n");
}
void game(){
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//��ʼ������
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//������Ϸ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL,EAZY_MODE);
	//DisplayBoard(mine, ROW, COL);
	//����
	FireMine(mine,show, ROW, COL);
}
int main(){
	srand((unsigned int)time(NULL));
	int input = 0;
	do{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input){
		case 1:game();
				break;
		case 0:printf("��Ϸ�˳���\n");
				break;
		default:printf("����������������룡\n");
				break;
		}
	} while (input);
}