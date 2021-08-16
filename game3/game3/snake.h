#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>
#include<stdbool.h>
#include<conio.h>
#define INITLENGTH 3
#define WIDE 50
#define LONG 30
char status;
typedef struct Node
{
	int x;
	int y;
	struct Node*next;
}Node;

typedef struct Food
{
	int x;
	int y;
}Food;
Food* pos;
int foodScore;
int sleepTime;
int faction;
void gotoXY(int x, int y);
Node* stackInit();
void drawMap(int wide, int high);
void snakeMove(Node** head, char direct);
void keyboardControl(Node** head);

void Print(Node* newNode);
void createFood(Node* head);

void printFraction();
bool isHitWall(Node* head);
void Setcolor(unsigned short color);

void endPrint();
void Frame(int n);
//ÓÎÏ·ËµÃ÷
void Gamedescription();