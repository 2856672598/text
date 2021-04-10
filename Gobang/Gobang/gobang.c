#define _CRT_SECURE_NO_WARNINGS
#include"gobang.h"
void Menu()
{
	printf("##############################\n");
	printf("####1.开始         0.EXIT#####\n");
	printf("##############################\n");
	printf("请选择：>");
}

void Code()
{
	int n = 0;
	do
	{
		Load();
		Menu();
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入错误重新输入\n");
			break;
		}
	} while (n);

}
void Game()
{
	int result = 0;
	while (1)
	{
		ShowBoard(board, ROW, COL);
		PlayMove(board, PLAYER1);
		result = Over(board);
		if (result != NEXT)
			break;
		ShowBoard(board, ROW, COL);
		PlayMove(board, PLAYER2);
		result = Over(board);
		if (result != NEXT)
			break;
	}
	ShowBoard(board, ROW, COL);
	if (result == PLAYER1_WIN)
		printf("玩家一赢\n");
	else if (result == PLAYER2_WIN)
		printf("玩家二赢\n");
	else
		printf("平局\n");
}

void ShowBoard(int board[][COL], int row, int col)
{
	int i = 0;
	printf("\033c");
	printf("    ");
	for (i = 1; i <= col; i++)
	{
		printf("%2d ", i);
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{
		printf("%2d  ", i+1);
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == 0)
				printf(" . ");
			else if (board[i][j] == 1)
				printf("○ ");
			else
				printf("● ");
		}
		printf("\n");
	}
}

void PlayMove(int board[][COL],int Player)
{
	while (1)
	{
		printf("请玩家%d下棋", Player);
		scanf("%d %d", &x, &y);
		if (x<0 || x>ROW || y > COL || y < 0)
			printf("坐标不合法\n");
		else if (board[x-1][y-1] != 0)
			printf("此处已存在\n");
		else
		{
			board[x-1][y-1] = Player;
			break;
		}
	}
}

int Count(int baord[ROW][COL], int row, int col, enum Dir d)
{
	int _x = x - 1;
	int _y = y - 1;
	int count = 0;
	while (1)
	{
		switch (d)
		{
		case LEFT:
			_y--;
			break;
		case RIGHT:
			_y++;
			break;
		case UP:
			_x--;
			break;
		case DOWN:
			_x++;
			break;
		case LEFT_UP:
			_x--, _y--;
			break;
		case LEFT_DOWN:
			_x++, _y--;
			break;
		case RIGHT_UP:
			_x--, _y++;
			break;
		case RIGHT_DOWN:
			_x++, _y++;
			break;
		}
		if (_x<0 || _x>ROW - 1 || _y > COL - 1 || _y < 0)
			break;
		if (board[x - 1][y - 1] == board[_x][_y])
			count++;
		else
			break;
	}
	return count;
}

int Over(int board[][COL])
{
	int count1 = Count(board, ROW, COL, LEFT) + Count(board, ROW, COL, RIGHT) + 1;
	int count2 = Count(board, ROW, COL, DOWN) + Count(board, ROW, COL, UP) + 1;
	int count3 = Count(board, ROW, COL, LEFT_UP) + Count(board, ROW, COL, RIGHT_DOWN) + 1;
	int count4 = Count(board, ROW, COL, LEFT_DOWN) + Count(board, ROW, COL, RIGHT_UP) + 1;
	if (count1 >= 5 || count2 >= 5 || count3 >= 5 || count4 >= 5)
		return board[x - 1][y - 1];
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (board[i][j] == 0)
				return NEXT;
		}
	}
	return DRAW;
}

void Load()
{
	int i = 0;
	char nums[101] = "\0";
	char arr[] = { '|','/','\\','|' };
	printf("正在加载游戏\n");
	for (i = 1; i <= 100; i++)
	{
		nums[i-1] = '#';
		printf("[%-100s][%d%%][%c]\r", nums, i, arr[i % 4]);
		fflush(stdout);
		Sleep(10);
	}
}