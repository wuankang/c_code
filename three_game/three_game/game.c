#include "game.h"
//��ʼ������
void initBoard(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			board[i][j] = ' ';
		}
	}
}
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col){
	//   |   |   
	//- -|- -|- -
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			printf(" %c ", board[i][j]);
			if (j < col - 1){
				printf("|");
			}
		}
		printf("\n");  
		if (i < row - 1){
			for (j = 0; j < col; j++){
				printf("---");
				if (j < col - 1){
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
//�������
void PlayerMove(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	printf("�������->\n");
	while(1){
		printf("�������������->");
		scanf("%d%d", &i, &j);
		if (i>=1 && i<=row && j>=1 && j<=col){
			if (board[i - 1][j - 1] != ' '){
				printf("��λ�ñ�ռ�ã�������ѡ��!\n");
			}
			else{
				board[i - 1][j - 1] = '*';
				break;
			}
		}
		else{
			printf("���Ӵ���������ѡ��\n");
		}
		
	}
}
//������
void ComputerMove(char board[ROW][COL], int row, int col){
	printf("������->\n");
	int x = rand() % row;
	int y = rand() % col;
	while (1){
		if (board[x][y] == ' '){
			board[x][y] = '#';
			break;
		}
	}
}
//�ж�
int isfull(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			if (board[i][j] == ' '){
				return 0;
			}
		}
	}
	return 1;
}
char CheckWin(char board[ROW][COL], int row, int col){
	int i;
	//�г���
	for (i = 0; i < row; i++){
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' '){
			return board[i][0];
		}
	}
	//�г���
	for (i = 0; i < col; i++){
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' '){
			return board[0][i];
		}
	}
	//�Խ��߳���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' '){
		return board[0][0];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' '){
		return board[0][0];
	}
	//ƽ��
	if (isfull(board, row, col) == 1){
		return 'Q';
	}
	//��Ϸ����
	return 'C';
}