#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void Initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			board[i][j] = set;
		}
	}
}
//void Initboard(char board[ROWS][COLS], int rows, int cols)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= rows; i++)
//	{
//		for (j = 1; j <= cols; j++)
//		{
//			board[i][j] = '*';
//		}
//	}
//}
void DisplayBoard(char board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	//打印行坐标
	for (i = 0; i <= rows; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= rows; i++)
	{
		printf("%d ", i);//列坐标
		for (j = 1; j <= cols; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void FindMind(char board[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	
	int win = 0;
	int sum = COUNT;//雷数
	while (win< ROW * COL - sum)
	{
		int x, y, count;
		printf("请输入坐标进行排雷\n");
		scanf("%d %d", &x, &y);
		while (getchar()!='\n');
		if ((x >= 1 && x <= row) && (y >= 0 && y <= col))
		{
			if (board[x][y] == '1')
			{
				printf("很遗憾，您被炸死了\n");
				break;
			}
			else
			{
				count = CountMind(board, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("您输入的坐标有误，请重新输入\n");
		}
	}
	if (win == ROW * COL - sum)
	{
		printf("恭喜您赢了\n");
	}
}
//生成雷
void SetMine(char board[ROWS][COLS], int row,int col)
{
	int count = COUNT;
	
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//统计周围雷数
int CountMind(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y - 1] +
		board[x - 1][y] +
		board[x - 1][y + 1] +
		board[x][y - 1] +
		board[x][y + 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] - 8 * '0';
}