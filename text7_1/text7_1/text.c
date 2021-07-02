#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
typedef struct Seat
{
	int row;
	int col;
}Seat;
bool IsPath(char** board, int n, int m, char* word, int wordsz, int insert, Seat pos)
{
	if (pos.row < n && pos.row >= 0
		&& pos.col < m && pos.col >= 0
		&& insert < wordsz 
		&& board[pos.row][pos.col] == word[insert])
		return true;
	else
		return false;
}
bool Path(char** board, int n, int m, char* word, int wordsz, int insert, Seat pos)
{
	if (board[pos.row][pos.col] == word[wordsz - 1] && insert == wordsz - 1)
		return true;
	board[pos.row][pos.col] = '*';
	Seat next;
	//上
	next.row = pos.row - 1;
	next.col = pos.col;
	if (IsPath(board, n, m, word, wordsz, insert + 1, next))
	{
		if (Path(board, n, m, word, wordsz, insert + 1, next))
			return true;
	}
	//下
	next.row = pos.row + 1;
	next.col = pos.col;
	if (IsPath(board, n, m, word, wordsz, insert + 1, next))
	{
		if (Path(board, n, m, word, wordsz, insert + 1, next))
			return true;
	}
	//左
	next.row = pos.row;
	next.col = pos.col - 1;
	if (IsPath(board, n, m, word, wordsz, insert + 1, next))
	{
		if (Path(board, n, m, word, wordsz, insert + 1, next))
			return true;
	}
	//右
	next.row = pos.row;
	next.col = pos.col + 1;
	if (IsPath(board, n, m, word, wordsz, insert + 1, next))
	{
		if (Path(board, n, m, word, wordsz, insert + 1, next))
			return true;
	}

	board[pos.row][pos.col] = word[insert];
	return false;
}

bool exist(char** board, int boardSize, int* boardColSize, char* word)
{
	int row = boardSize;
	int wordsz = strlen(word);
	int insert = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < *boardColSize; j++)
		{
			Seat pos = { i,j };
			if (board[i][j] == word[0])
			{
				if (Path(board, row, *boardColSize, word, wordsz, insert, pos))
					return true;
			}
		}
	}
	return false;
}
int main()
{
	//char arr[3][4] = { {'A','B','C','E' }, {'S', 'F', 'C', 'S'},{'A', 'D', 'E', 'E'} };
	char word[] = "ABCCED";
	int row = 3, col = 4;
	char**arr = malloc(sizeof(char*) * row);
	for (int i = 0; i < row; i++)
	{
		//每行输入完后要回车
		arr[i] = malloc(sizeof(char) * col);
		for (int j = 0; j < col; j++)
		{
			scanf("%c", &arr[i][j]);
		}
		getchar();
	}
	int flag = exist(arr, row, &col, word);
	printf("%d ", flag);
	for (int i = 0; i < row; i++)
	{
		free(arr[i]);
	}

	free(arr);
	return 0;
}