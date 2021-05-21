#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
typedef int HPDataType;
typedef struct Heap
{
	int size;
	int capacity;
	HPDataType* a;
}Heap;

void HeapInit(Heap* php, HPDataType* arr, int size);
void HeapDestory(Heap* php);
void HeapPop(Heap* php);
void HeadPush(Heap*php, HPDataType x);
void AdjustDown(Heap* php, int root, int size);
void AdjustUp(Heap* php, int root, int size);
void Swap(HPDataType* a, HPDataType* b);
//½µÐò
void HeapSort(Heap*php);