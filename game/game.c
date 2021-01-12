#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] =' ';
		}
	}
}
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   | 
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col;j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
//玩家输入
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请玩家输入坐标\n");
		scanf("%d %d", &x, &y);
		while (getchar() != '\n');//清空输入缓冲区，防止输入非数字后死循环
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("坐标被占用，请重新输入\n");
		}
		else
		{
			printf("输入的坐标有误\n");
		}
	}
}

//电脑输入
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑输入\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//判断是否平局
//返回值为1代表棋盘已经下满了
int Fall(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
//输赢判断
char Win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{	
		/*for (j = 1; j < row-1; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j - 1] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}*/
		if (board[i][1] == board[i][0] && board[i][0] == board[i][2] && board[i][0] != ' ')
			return board[i][0];

	}
	for (i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}

	/*for (i = 0; i < row; i++)
	{
		for (j = 0; j <=i; j++)
		{
			if (board[i][j] == board[i + 1][j + 1] &&
				board[i][j]==board[i+2][j+2]&& board[i][j != ' '])
			{
				return board[i][j];
			}
		}
	}*/
	//判断两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
		return board[2][0];
	if (1==Fall(board,row,col))
	{
		return 'T';
	}
	else
		return 'F';
}
