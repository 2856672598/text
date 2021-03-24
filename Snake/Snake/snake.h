#pragma once
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<stdbool.h>
#include<time.h>



typedef struct snake
{
	int x;
	int y;
	struct snake* next;
}snake;
snake* InitSnake();
void gotoxy(int x, int y);
void CreateMap(int x, int y);
snake* CreateFood();
void AgainstWall(snake* head);
bool EatFood(snake* food, snake* head);
void KeyDown(snake* head);