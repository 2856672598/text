#pragma once
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<stdbool.h>
#include<time.h>

#define U 1
#define D 2
#define L 3 
#define R 4      //ÉßµÄ×´Ì¬£¬U£ºÉÏ £»D£ºÏÂ£»L:×ó R£ºÓÒ



typedef struct snake
{
	int x;
	int y;
	struct snake* next;
}snake;




snake* InitSnake();
void snakeMove(snake* head);
void gotoxy(int x, int y);
void keyboardControl(snake* head);