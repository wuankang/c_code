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
	//0-100的数
	//RAND_MAX=32727
	int ret=rand()%100+1;
	while (1){
		printf("输入猜的数->");
		scanf("%d", &guess);
		if (guess > ret){
			printf("猜大了\n");
		}
		else if (guess < ret){
			printf("猜小了");
		}
		else{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}

/*int main(){
	int key;
	// 时间戳是指现在时间到计算机当时的时间差,单位是秒
	//计算机当时时间是1970-01-01 08:00:00
	//time返回的是个时间戳
	srand((unsigned int)time(NULL));
	do{
		interface();
		printf("请输入数(1/0):");
		scanf("%d", &key);
		switch (key){
		case 1:game();
			break;
		case 0:printf("退出游戏!\n");
			break;
		default:printf("输入错误！\n");
			break;
		}
	} while (key);
	return 0;
}*/