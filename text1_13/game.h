#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define COUNT 80;//À×Êý
//int i = 0;
//int j = 0;

void Initboard(char board[ROWS][COLS], int rows, int cols,char set);
void DisplayBoard(char board[ROWS][COLS], int rows, int cols);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMind(char board[ROWS][COLS],char show[ROWS][COLS],int row, int col);
int CountMind(char board[ROWS][COLS], int x, int y);