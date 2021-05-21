//剑指 Offer 40. 最小的k个数 top k问题
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//向下调整----大堆
void AdjustDown(int * retarr, int root, int size)
{
	assert(retarr);
	int parent = root;
	int child = root * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size && retarr[child] < retarr[child + 1])
		{
			child++;
		}
		if (retarr[parent] < retarr[child])
		{
			int tmp = retarr[parent];
			retarr[parent] = retarr[child];
			retarr[child] = tmp;
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;
	}
}
int* getLeastNumbers(int* arr, int arrSize, int k, int* returnSize)
{
	assert(arr);
	*returnSize = k;
	if (k == 0 || arrSize == 0)
		return NULL;
	int* retarr = (int*)malloc(sizeof(int)*k);
	for (int i = 0; i < k; i++)
	{
		retarr[i] = arr[i];
	}
	//建堆
	for (int i = (k - 2) / 2; i >= 0; i--)
	{
		AdjustDown(retarr, i, k);
	}

	for (int j = k; j < arrSize; j++)
	{
		if (arr[j] < retarr[0])
		{
			retarr[0] = arr[j];
		}
		//向下调整
		AdjustDown(retarr, 0, k);
	}
	*returnSize = k;
	return retarr;
}
int main()
{
	int arr[10] = { 0,1,1,2,4,4,1,3,3,2 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int returnsize = 0;
	int* retarr = getLeastNumbers(arr, size, 6, &returnsize);
	for (int i = 0; i < returnsize; i++)
	{
		printf("%d ", retarr[i]);
	}
	return 0;
}