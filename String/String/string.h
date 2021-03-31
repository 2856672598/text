#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#define MAX 200
typedef struct SString
{
	char arr[MAX];
	int length;
}SString;
void InitString(SString* add);
void StrCopy(SString* add, char* x);
void StrAssign(SString* add, char x);
void Print(SString* add);
int SubString(SString* add, char* sub);
void next(char* sub, int* arr, int size);
void Clear(SString* add);
int StrCompare(SString* add, char* T);