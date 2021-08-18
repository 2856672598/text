#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>
#include<stdbool.h>
#include<conio.h>
#define INITLENGTH 3//默认蛇长
#define WIDE 50//游戏界面宽
#define LONG 30//高

char status;//运动方向

typedef struct Node
{
	int x;
	int y;
	struct Node*next;
}Node;

typedef struct Food Food;
struct Food
{
	int x;
	int y;
}*pos;

int foodScore;//食物分值
int sleepTime;//休眠时间
int faction;//分数

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

void Frame(int n);
//游戏说明
void Gamedescription();
//开始和结束边框
void Frame(int n);
//结束打印
void endPrint();