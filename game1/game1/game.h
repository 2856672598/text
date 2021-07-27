#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
enum
{
	ROW = 3,
	COL = 3
};

void InitBoard(char board[ROW][COL], int row, int col);
void PrinBoard(char board[ROW][COL], int row, int col);

void PlayMove(char board[ROW][COL], int row, int col);
void CompMove(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);