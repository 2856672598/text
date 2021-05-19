#include"heap.h"
void Text()
{
	Heap h;
	HPDataType arr[] = { 27,15, 19,18,28,34,65,49,25,37 };
	HeapInit(&h, arr, sizeof(arr) / sizeof(HPDataType));
	HeapQsort(&h);
	for (int i = 0; i < h.size; i++)
	{
		printf("%d ", h.a[i]);
	}
}
int main()
{
	Text();
	return 0;
}