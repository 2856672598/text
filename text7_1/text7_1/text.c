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
	board[pos.row][pos.col] = '*';
	if (board[pos.row][pos.col] == word[wordsz - 1] && insert == wordsz - 1)
		return true;
	Seat next;
	//ио
	next.row = pos.row - 1;
	next.col = pos.col;
	if (IsPath(board, n, m, word, wordsz, insert + 1, next))
	{
		if (Path(board, n, m, word, wordsz, insert + 1, next))
			return true;
	}
	//об
	next.row = pos.row + 1;
	next.col = pos.col;
	if (IsPath(board, n, m, word, wordsz, insert + 1, next))
	{
		if (Path(board, n, m, word, wordsz, insert + 1, next))
			return true;
	}
	//вС
	next.row = pos.row;
	next.col = pos.col - 1;
	if (IsPath(board, n, m, word, wordsz, insert + 1, next))
	{
		if (Path(board, n, m, word, wordsz, insert + 1, next))
			return true;
	}
	//ср
	next.row = pos.row;
	next.col = pos.col + 1;
	if (IsPath(board, n, m, word, wordsz, insert + 1, next))
	{
		if (Path(board, n, m, word, wordsz, insert + 1, next))
			return true;
	}
	return false;
}

bool exist(char** board, int boardSize, int* boardColSize, char* word)
{
	int row = boardSize;
	int wordsz = strlen(word);
	Seat pos = { 0,0 };
	int insert = 0;
	if (Path(board, row, *boardColSize, word, wordsz, insert, pos))
		return true;
	else
		return false;
}
int main()
{
	//char arr[3][4] = { {'A','B','C','E' }, {'S', 'F', 'C', 'S'},{'A', 'D', 'E', 'E'} };
	char word[] = "AAA";
	char**arr = malloc(sizeof(char*) * 3);
	for (int i = 0; i < 3; i++)
	{
		arr[i] = malloc(sizeof(char) * 4);
		scanf("%s", arr[i]);
	}
	int col = 4;
	int flag = exist(arr, 3, &col, word);
	printf("%d ", flag);
	return 0;
}