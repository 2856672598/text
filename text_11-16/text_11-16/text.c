#include<stdio.h>

void InsertSort(int* number, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int tmp = number[i + 1];
		int end = i;
		while (end >= 0)
		{
			if (number[end] > tmp)
			{
				number[end + 1] = number[end];
				end--;
			}
			else
				break;
		}
		number[end + 1] = tmp;
	}
}

void Print(int*nums, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", nums[i]);
	}
}

void ShellSort(int * nums, int size)
{
	int gap = size;
	//当gap为1时即为插入排序
	while (gap > 1)
	{
		gap /= 2;
		for (int i = 0; i < size - gap; i++)
		{
			int end = i;
			int tmp = nums[end + gap];
			while (end >= 0)
			{
				if (nums[end] > tmp)
				{
					nums[end + gap] = nums[end];
				}
				else
					break;
				end -= gap;
			}
			nums[end + gap] = tmp;
		}
	}
}

void swap(int* a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//void SelectSort(int * number, int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		int maxi = 0;
//		for (int j = 0; j < size - i; j++)
//		{
//			if (number[j] > number[maxi])
//			{
//				maxi = j;
//			}
//		}
//		swap(&number[size - i - 1], &number[maxi]);
//	}
//}


//选择排序优化
void SelectSort(int * number, int size)
{
	int left = 0, right = size - 1;
	while (left < right)
	{
		int maxi = left, mini = left;
		for (int i = left; i <= right; i++)
		{
			if (number[i] > number[maxi])
				maxi = i;
			if (number[i] < number[mini])
				mini = i;
		}
		swap(&number[left], &number[mini]);
		if (maxi == left)
		{
			maxi = mini;
		}
		swap(&number[right], &number[maxi]);
		left++;
		right--;

	}
}

void AdjustUp(int * nums, int size)
{
	int parent, child;
	//从第一个非叶子节点开始
	for (int i = parent; i >= 0; i--)
	{
		parent = i;
		child = parent * 2 + 1;
		//判断右孩子是否大于左孩子
		if (child + 1 < size && nums[child] < nums[child + 1])
		{
			child = child + 1;
		}
		else
			break;
		//和父亲比较 比父亲大进行交换
		if (nums[child] > nums[parent])
		{
			swap(&nums[child], &nums[parent]);
		}
	}
}

void AdjustDown(int* nums, int size)
{
	int parent = 0;
	int child = parent * 2 + 1;//默认为左子树
	while (parent <= size)
	{
		if (child + 1 < size&&nums[child] < nums[child + 1])
		{
			child++;
		}
		else
			break;
		if (nums[child] > nums[parent])
		{
			swap(&nums[child], &nums[parent]);
		}
		parent++;
	}
}

void HeapSort(int* nums, int size)
{
	//大堆 -->升序
}

int main()
{
	int nums[] = { 1,6,3,9,10,3,7,2 };
	int size = sizeof(nums) / sizeof(nums[0]);
	//InsertSort(nums, size);

	//ShellSort(nums, size);

	SelectSort(nums, size);
	Print(nums, size);
	return 0;
}