#include "game.h"
void menu(){
	printf("*****************\n");
	printf("*****1.play******\n");
	printf("*****0.exit******\n");
	printf("*****************\n");
}
void game(){
	char board[ROW][COL];
	//��ʼ����Ϸ����
	char ret;
	initBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);
	//��Ϸ���
	while (1){
		//�������
		PlayerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
		DisplayBoard(board, ROW, COL);
		//��������
		ComputerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
	}
	if (ret == '*'){
		printf("���Ӯ��\n");
	}
	if (ret == '#'){
		printf("����Ӯ��\n");
	}
	if (ret == 'Q'){
		printf("ƽ�֣�\n");
	}
}
int main(){
	srand((unsigned int)time(NULL));
	int input = 0;
	do{
		menu();//�˵���ʾ
		printf("��ѡ��>");
		scanf("%d", &input);//ѡ��
		switch (input){
		case 1:game();
			break;
		case 0:printf("�˳���Ϸ��\n");
			break;
		default:printf("����������������룡\n");
			break;
		}
	} while (input);
	return 0;
}