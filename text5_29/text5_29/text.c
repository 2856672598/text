#include<stdio.h>
//向下调整
void Swap(int* a,int * b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void AdjustDwon(int* a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child] > a[child + 1])
		{
			child = child + 1;
		}
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = child * 2 + 1;
		}
		else
			return;
	}
}
void HeapSort(int* a, int n)
{
	//建堆
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDwon(a, n, i);
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[0]);
		Swap(&a[n - i - 1], &a[0]);
		AdjustDwon(a, n - i - 1, 0);
	}
}
// 插入排序
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
				break;
		}
		a[end + 1] = tmp;
	}
}
// 希尔排序
void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 2;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] < tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
					break;
			}
			a[end + gap] = tmp;
		}
	}
}
// 选择排序
void SelectSort(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		int flag = i;
		for (int j = i + 1;j < n; j++)
		{
			if (a[j] < a[flag])
			{
				flag = j;
			}
		}
		int tmp = a[i];
		a[i] = a[flag];
		a[flag] = tmp;
	}
}
int main()
{
	int arr[] = { 5,2,4,6,1,3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	//InsertSort(arr, sizeof(arr) / sizeof(arr[0]));

	//ShellSort(arr, size);
	//for (int i = 0; i < size; i++)
	//{   
	//	printf("%d ", arr[i]);
	//}

	//HeapSort(arr, size);

	//选择排序
	SelectSort(arr, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}