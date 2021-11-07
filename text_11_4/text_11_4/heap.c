#include"heap.h"
//大堆
void HeapInit(Heap* hp)
{
	assert(hp);
	hp->capacity = hp->size = 0;
	hp->_a = NULL;
}

void HeapDestroy(Heap* hp)
{
	assert(hp);
	free(hp->_a);
	hp->size = hp->capacity = 0;
}

void HeapPush(Heap* hp, HpDateType x)
{
	assert(hp);
	if (hp->size == hp->capacity)
	{
		//需要扩容
		int newcapacity = hp->capacity == 0 ? 4 : 2 * hp->capacity;
		HpDateType* tmp = (HpDateType*)realloc(hp->_a, sizeof(HpDateType)*newcapacity);
		if (tmp == NULL)
		{
			printf(" realloc exit");
			exit(-1);
		}
		hp->capacity = newcapacity;
		hp->_a = tmp;
	}
	hp->_a[hp->size] = x;
	hp->size++;
}

bool HeapEmpty(Heap* hp)
{
	return hp->size == 0;
}

HpDateType HeapTop(Heap* hp)
{
	assert(hp);
	assert(!HeapEmpty(hp));
	return hp->_a[0];
}


void AdjustUp(HpDateType* arr, int pos)
{
	assert(arr);
	int parent = (pos - 1) / 2;
	int child = pos;

	while (child > 0)
	{
		//大堆
		if (arr[parent] < arr[child])
		{
			//交换
			Swap(&arr[parent], &arr[child]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
			break;
	}
}

////小堆
//void AdjustUp(HpDateType* arr, int pos)
//{
//	assert(arr);
//	int parent = (pos - 1) / 2;
//	int child = pos;
//
//	while (child > 0)
//	{
//		//大堆
//		if (arr[parent] > arr[child])
//		{
//			//交换
//			Swap(&arr[parent], &arr[child]);
//			child = parent;
//			parent = (child - 1) / 2;
//		}
//		else
//			break;
//	}
//}

void AdjustDown(HpDateType* arr, int size, int pos)
{
	assert(arr);
	int child = pos * 2 + 1;
	int parent = pos;
	//当孩子超出size时跳出也就是走到叶子节点就可以跳出了
	while (child < size)
	{
		if (child + 1 < size&&arr[child] < arr[child + 1])
			child++;

		if (arr[child] > arr[parent])
		{
			Swap(&arr[child], &arr[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;
	}
}

////小堆
//void AdjustDown(HpDateType* arr, int size, int pos)
//{
//	assert(arr);
//	int child = pos * 2 + 1;
//	int parent = pos;
//	//当孩子超出size时跳出也就是走到叶子节点就可以跳出了
//	while (child < size)
//	{
//		if (child + 1 < size&&arr[child] > arr[child + 1])
//			child++;
//
//		if (arr[child] < arr[parent])
//		{
//			Swap(&arr[child], &arr[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//			break;
//	}
//}

void Swap(HpDateType* x, HpDateType* y)
{
	HpDateType tmp = *x;
	*x = *y;
	*y = tmp;
}

void HeapPop(Heap* hp)
{
	assert(hp);
	assert(!HeapEmpty(hp));
	Swap(&hp->_a[hp->size - 1], &hp->_a[0]);
	hp->size--;
	AdjustDown(hp->_a, hp->size, 0);
}

void Print(Heap* hp)
{
	assert(hp);
	for (int i = 0; i < hp->size; i++)
	{
		printf("%d ", hp->_a[i]);
	}
	printf("\n");
}


void textTopK(HpDateType* arr, int size, int k)
{
	Heap h;
	HeapInit(&h);
	//将前k个数入堆
	//找最大的建小堆，最小的建大堆
	for (int i = 0; i < k; i++)
	{
		HeapPush(&h, arr[i]);
		AdjustUp(h._a, h.size - 1);
	}

	//将k-size-1之间的数据判断是否需要入堆
	for (int i = k; i < size; i++)
	{
		if (arr[i] < HeapTop(&h))
		{
			////入堆
			//h._a[0] = arr[i];
			////向下调整将最小的数浮到堆顶
			//AdjustDown(h._a, h.size, 0);

			HeapPop(&h);
			HeapPush(&h, arr[i]);
		}
	}
	Print(&h);
}

void HeapSort(HpDateType*arr, int n)
{
	assert(arr);
	////方法一：向上进行调整建堆
	//for (int i = 1; i < n; i++)
	//{
	//	AdjustUp(arr, i);
	//}

	//方法二：向下调整建堆
	for (int i = (n - 2) / 2; i >= 0; i--)
	{
		AdjustDown(arr, n, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		Swap(&arr[0], &arr[end]);
		AdjustDown(arr, end, 0);
		end--;
	}
}