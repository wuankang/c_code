#include "game.h"
void menu(){
	printf("*****************\n");
	printf("*****1.play******\n");
	printf("*****0.exit******\n");
	printf("*****************\n");
}
void game(){
	char board[ROW][COL];
	//初始化游戏界面
	char ret;
	initBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);
	//游戏框架
	while (1){
		//玩家下棋
		PlayerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
		DisplayBoard(board, ROW, COL);
		//电脑下棋
		ComputerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
		DisplayBoard(board, ROW, COL);
		//判断输赢
	}
	if (ret == '*'){
		printf("玩家赢！\n");
	}
	if (ret == '#'){
		printf("电脑赢！\n");
	}
	if (ret == 'Q'){
		printf("平局！\n");
	}
}
int main(){
	srand((unsigned int)time(NULL));
	int input = 0;
	do{
		menu();//菜单显示
		printf("请选择：>");
		scanf("%d", &input);//选择
		switch (input){
		case 1:game();
			break;
		case 0:printf("退出游戏！\n");
			break;
		default:printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}