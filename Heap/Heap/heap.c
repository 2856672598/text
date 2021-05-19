#include"heap.h"
void Swap(HPDataType* a, HPDataType* b)
{
	HPDataType tmp = *a;
	*a = *b;
	*b = tmp;
}
//向下查找
void LookDown(Heap* php, int root, int size)
{
	assert(php);
	int parent = root;
	int child = root * 2 + 1;//默认为左孩子
	while (child < size)
	{
		if (size > child + 1 && php->a[child] > php->a[child + 1])
		{
			child++;
		}
		if (php->a[child] < php->a[parent])
		{
			Swap(&php->a[child], &php->a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			return;
	}
}

void HeapInit(Heap* php, HPDataType* arr, int size)
{
	assert(php);
	HPDataType* new = malloc(sizeof(HPDataType)*size);
	if (new)
	{
		memcpy(new, arr, size * sizeof(HPDataType));
		php->a = new;
		php->size = size;
	}
	for (int i = (php->size - 2) / 2; i >= 0; i--)
	{
		LookDown(php, i, php->size);
	}
}

void HeapQsort(Heap* php)
{
	assert(php);
	assert(php->a);
	int flag = php->size - 1;
	while (flag)
	{
		Swap(&php->a[0], &php->a[flag]);
		flag--;
		LookDown(php, 0, flag);
	}
}
void HeapDestory(Heap* php);
void HeadPush(Heap*php, HPDataType x);