#include "game.h"
//初始化界面
void initBoard(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			board[i][j] = ' ';
		}
	}
}
//打印界面
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
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	printf("玩家下棋->\n");
	while(1){
		printf("请输入你的坐标->");
		scanf("%d%d", &i, &j);
		if (i>=1 && i<=row && j>=1 && j<=col){
			if (board[i - 1][j - 1] != ' '){
				printf("此位置被占用，请重新选择!\n");
			}
			else{
				board[i - 1][j - 1] = '*';
				break;
			}
		}
		else{
			printf("下子错误！请重新选择！\n");
		}
		
	}
}
//电脑走
void ComputerMove(char board[ROW][COL], int row, int col){
	printf("电脑走->\n");
	int x = rand() % row;
	int y = rand() % col;
	while (1){
		if (board[x][y] == ' '){
			board[x][y] = '#';
			break;
		}
	}
}
//判断
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
	//行成型
	for (i = 0; i < row; i++){
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' '){
			return board[i][0];
		}
	}
	//列成型
	for (i = 0; i < col; i++){
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' '){
			return board[0][i];
		}
	}
	//对角线成型
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' '){
		return board[0][0];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' '){
		return board[0][0];
	}
	//平局
	if (isfull(board, row, col) == 1){
		return 'Q';
	}
	//游戏继续
	return 'C';
}