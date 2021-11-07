#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int HpDateType;

typedef struct Heap
{
	HpDateType* _a;
	int capacity;
	int size;
}Heap;

void HeapInit(Heap* hp);
void HeapDestroy(Heap* hp);
void HeapPush(Heap* hp, HpDateType x);
void HeapPop(Heap* hp);
HpDateType HeapTop(Heap* hp);
void AdjustUp(HpDateType* arr, int pos);
void AdjustDown(HpDateType* arr, int size, int pos);
bool HeapEmpty(Heap* hp);
void Swap(HpDateType* x, HpDateType* y);
void Print(Heap* hp);
void textTopK(HpDateType* arr, int size, int k);
void HeapSort(HpDateType*arr, int n);
