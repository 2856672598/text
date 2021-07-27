#include"game.h"

void menu()
{
	printf("******************************************\n");
	printf("*************     1. play    *************\n");
	printf("*************     2.exit     *************\n");
	printf("******************************************\n");
}
void game()
{
	char board[ROW][COL];
	//初始化棋盘
	InitBoard(board, ROW, COL);

	//打印棋盘
	PrinBoard(board, ROW, COL);

	char flag = 0;
	//下棋
	while (1)
	{
		PlayMove(board, ROW, COL);
		PrinBoard(board, ROW, COL);
		//判断当前状态
		flag = IsWin(board, ROW, COL);
		if (flag != 'c')
			break;

		//电脑下棋
		CompMove(board, ROW, COL);
		PrinBoard(board, ROW, COL);
		//判断当前状态
		flag = IsWin(board, ROW, COL);
		if (flag != 'c')
			break;
	}
	if (flag == '*')
		printf("恭喜玩家获胜\n");
	else if (flag == '#')
		printf("恭喜电脑获胜\n");
	else
		printf("平局啦\n");
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误，");
			break;
		}
	} while (input);
	return 0;
}