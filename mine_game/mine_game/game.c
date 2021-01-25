#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[ROWS][COLS], int row, int col,char set){
	int i;
	int j;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col){
	int i=0;
	int j=0;
	printf("------ɨ����Ϸ------\n");
	for (i = 0; i <= col; i++){
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++){
		printf("%d ", i);
		for (j = 1; j <=col; j++){
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col,int count){
	while (count){
		int x = rand() % row + 1;
		int y = rand() % col + 1;
			if (board[x][y] == '0'){
				//���괦û����
				board[x][y] = '1';
				count--;
			}
	}

}
int GetMinecot(char mine[ROWS][COLS],int x,int y){
	return mine[x][y] + mine[x - 1][y] + mine[x - 1][y - 1]
		+ mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y]
		+ mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1]
		- 9 * '0';
}
void FireMine(char mine[ROWS][COLS],
	char show[ROWS][COLS],
	int row,
	int col){
	int x = 0;
	int y = 0;
	int win = 0;//81-10=71
	while (win<row*col-EAZY_MODE){
		printf("������Ҫ�Ų�����꣺>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col){
			if (mine[x][y] == '1'){
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, row,col);
				break;
			}
			else{
				int count = GetMinecot(mine,x,y);
				show[x][y] = count+'0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else{
			printf("�����������������!\n");
		}
	}
	if (win == row*col-EAZY_MODE){
		printf("��ϲ�����׳ɹ���\n");
		DisplayBoard(mine, row, col);
	}
}