#define _CRT_SECURE_NO_WARNINGS
#include"heap.h"
void Text()
{
	Heap h;
	HPDataType arr[] = { 27,15, 19,18,28,34,65,49,25,37 };
	HeapInit(&h, arr, sizeof(arr) / sizeof(HPDataType));
	HeadPush(&h, 2);
	HeadPush(&h, 1);
	HeadPush(&h, 199);

	HeapSort(&h);
	for (int i = 0; i < h.size; i++)
	{
		printf("%d ", h.a[i]);
	}
	//Ïú»Ù
	HeapDestory(&h);
}
int main()
{
	Text();
	return 0;
}