#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**********************\n");
	printf("***1.text   0. exit***\n");
	printf("**********************\n");
}
void game()
{
	char input;
	srand((unsigned int)time(NULL));
	//存放棋盘的数组
	char board[ROW][COL] = {0};
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家输入
		PlayerMove(board,ROW,COL);
		//打印棋盘
		DisplayBoard(board, ROW, COL);
		//判断输赢
		input = Win(board, ROW, COL);
		if (input != 'F')
			break;
		//电脑输入
		ComputerMove(board, ROW, COL);
		//刷新
		DisplayBoard(board, ROW, COL);
		//输赢判断
		input = Win(board, ROW, COL);
		if (input != 'F')
			break;
	}
	switch (input)
	{
	case '*':
		printf("小明赢\n");
		break;
	case '#':
		printf("电脑赢\n");
		break;
	case 'T':
		printf("平局\n");
		break;
	}
}
void text()
{
	do
	{
		int input;
		menu();
		scanf("%d", &input);
		while (getchar() != '\n');//清空输入缓冲区，防止输入非数字后死循环
		switch (input)
		{

		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			printf("进入游戏\n");
			game();
			break;
		default:
			printf("输入有误请重新输入\n");
			break;
		}
	} while (1);
}
int main()
{
	text();
	return 0;
}