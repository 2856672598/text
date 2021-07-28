#pragma once

#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum
{
	ROW = 10,
	COL = 10,
	ROWS = ROW + 2,
	COLS = COL + 2,
	MINES = 5
};

void InitBoard(char board[ROWS][COLS], int row, int col, char val);
void PrinBoard(char board[ROWS][COLS], int row, int col);

void CreateMine(char board[ROWS][COLS], int row, int col, int size);

void PlayerMove(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col);

int Get_Mine_Count(char board[ROWS][COLS], int row, int col);

void Open(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col, int* flag);