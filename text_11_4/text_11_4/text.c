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

int main()
{
	text();
	return 0;
}