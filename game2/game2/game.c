#include"game.h"

void InitBoard(char board[ROWS][COLS], int row, int col, char val)
{
	int i = 0;
	for (int i = 0; i < row; i++)
	{
		int j = 0;
		for (int j = 0; j < col; j++)
		{
			board[i][j] = val;
		}
	}
}

void PrinBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("_________________________________\n");
	for (i = 0; i <= row; i++)
		printf(" %d", i);
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		int j = 1;
		printf("%2d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("_________________________________\n");
}

void CreateMine(char board[ROWS][COLS], int row, int col, int size)
{
	int count = size;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x][y] != '1')
			{
				board[x][y] = '1';
				count--;
			}
		}
	}
}


int Get_Mine_Count(char board[ROWS][COLS], int row, int col)
{
	int i = 0, count = 0;
	for (i = row - 1; i <= row + 1; i++)
	{
		int j = 0;
		for (j = col-1; j <= col + 1; j++)
		{
			if (board[i][j] == '1')
				count++;
		}
	}
	return count;
}

//void Open(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col)
//{
//	int count = 0;
//	if (row > 0 && row <= ROW && col > 0 && col <= COL)
//	{
//		count = Get_Mine_Count(mine, row, col);
//	}
//	if (count != 0)
//		show[row][col] = '0' + count;
//	if (count == 0 && row > 0 && row <= ROW && col > 0 && col <= COL && show[row][col] != ' ')
//	{
//		show[row][col] = ' ';
//		Open(show, mine, row - 1, col);
//		//Open(show, mine, row - 1, col + 1);
//		Open(show, mine, row, col + 1);
//		//Open(show, mine, row + 1, col + 1);
//		Open(show, mine, row + 1, col);
//		//Open(show, mine, row + 1, col - 1);
//		Open(show, mine, row, col - 1);
//		//Open(show, mine, row - 1, col - 1);
//	}
//}


void Open(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col)
{
	if (row > 0 && row <= ROW && col > 0 && col <= COL)
	{
		int count = Get_Mine_Count(mine, row, col);
		if (count != 0)
			show[row][col] = '0' + count;
		else if (show[row][col] != ' ')
		{
			show[row][col] = ' ';
			int i = 0;
			for (int i = row - 1; i <= row + 1; i++)
			{
				int j = 0;
				for (j = col - 1; j <= col + 1; j++)
				{
					Open(show, mine, i, j);
				}
			}
		}
		else
		{
			//show[row][col]!=' '递归停止
			return ;
		}

	}
}

void PlayerMove(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col)
{
	int x, y;
	PrinBoard(show, ROW, COL);
	while (1)
	{
		printf("输入需要排查的坐标>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col && show[x][y] == '*')
		{
			if (mine[x][y] == '1')
			{
				printf("您被炸死了\n");
				show[x][y] = '1';
				PrinBoard(show, ROW, COL);
				break;
			}
			else
			{
				Open(show, mine, x, y);
				PrinBoard(show, ROW, COL);
			}
		}
		else
		{
			printf("您当前输入的坐标不合法,请重新输入\n");
		}
		int i = 0, flag = 0;
		for (i = 1; i <= ROW; i++)
		{
			int j = 0;
			for (j = 1; j <= COL; j++)
			{
				if (show[i][j] == '*')
					flag++;
			}
		}
		if (flag == MINES)
		{
			printf("玩家获胜\n");
			break;
		}
	}
}

