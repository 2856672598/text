#include"heap.h"

void text()
{
	Heap h;
	HeapInit(&h);
	int arr[] = { 3,7,1,56,345,7687,434,2,10 };
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		HeapPush(&h, arr[i]);
		AdjustUp(h._a, h.size - 1);
	}
	Print(&h);
	while (h.size != 0)
	{
		HeapPop(&h);
		Print(&h);
	}
}

void text1()
{
	Heap h;
	HeapInit(&h);
	int arr[] = { 3,7,1,56,345,7687,434,2,10 };
	//Èë¶Ñ
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		HeapPush(&h, arr[i]);
		AdjustUp(h._a, h.size - 1);
	}

	while (!HeapEmpty(&h))
	{
		printf("%d ", h._a[0]);
		HeapPop(&h);
	}
	HeapDestroy(&h);
}

void text2()
{
	int arr[] = { 1,3,5,7,2,4,6,8 };
	int k = 4;
	textTopK(arr, sizeof(arr) / sizeof(arr[0]), k);
}
int main()
{
	//text();
	//text1();

	text2();
	return 0;
}