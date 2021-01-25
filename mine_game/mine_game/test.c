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
	//初始化界面
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//构架游戏界面
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL,EAZY_MODE);
	//DisplayBoard(mine, ROW, COL);
	//排雷
	FireMine(mine,show, ROW, COL);
}
int main(){
	srand((unsigned int)time(NULL));
	int input = 0;
	do{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input){
		case 1:game();
				break;
		case 0:printf("游戏退出！\n");
				break;
		default:printf("输入错误，请重新输入！\n");
				break;
		}
	} while (input);
}