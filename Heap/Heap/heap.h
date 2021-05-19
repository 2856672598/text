#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
}Heap;

void HeapInit(Heap* php, HPDataType* arr, int size);
void HeapDestory(Heap* php);
void HeadPush(Heap*php, HPDataType x);
void LookDown(Heap* php, int root, int size);
void Swap(HPDataType* a, HPDataType* b);
void HeapQsort(Heap* php);