#pragma once
#include<stdio.h>
#include<stdlib.h>
#define MAX 200
typedef struct SString
{
	char arr[MAX];
	int length;
}SString;
void InitString(SString* add);
void StrAssign(SString* add, char* x);
void Print(SString* add);