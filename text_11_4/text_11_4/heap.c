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