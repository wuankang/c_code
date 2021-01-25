#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EAZY_MODE 10
void InitBoard(char board[ROWS][COLS], int row, int col,char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col,int count);\
void FireMine(char mine[ROWS][COLS],
char show[ROWS][COLS],
int cow,
int col);