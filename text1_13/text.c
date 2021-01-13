#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**************************\n");
	printf("*******  1.paly    *******\n");
	printf("*******  2.exit    *******\n");
	printf("**************************\n");
}
void game()
{
	printf("欢迎来到游戏\n");
	//雷盘
	char mine[ROWS][COLS] = { 0 };
	//玩家看到的
	char show[ROWS][COLS] = { 0 };
	//初始化
	Initboard(mine, ROWS, COLS,'0');
	Initboard(show, ROWS, COLS,'*');
	//打印棋盘
	DisplayBoard(show, ROW, COL);
	//布雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//排雷
	FindMind(mine,show, ROW, COL);
}
void text()
{
	int input;
	do
	{
		menu();
		srand((unsigned int)time(NULL));
		printf("请选择->\n");
		scanf("%d", &input);
		while (getchar() != '\n');
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入有误，请您重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	text();
	return 0;
}