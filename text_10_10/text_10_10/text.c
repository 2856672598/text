//#include<stdio.h>
//#include<stdlib.h>
////O(N^2)
////具体的执行次数  n*n+2*n+10
//void Fun1(int n)
//{
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			count++;
//		}
//	}
//
//	for (int i = 0; i < 2 * n; i++)
//	{
//		count++;
//	}
//
//	for (int i = 0; i < 10; i++)
//		count++;
//	printf("%d ", count);
//}
//
////0(m+n)
//void Fun2(int m, int n)
//{
//	int count = 0;
//	for (int i = 0; i < m; i++)
//		count++;
//	for (int i = 0; i < n; i++)
//		count++;
//	printf("%d ", count);
//}
//
////O(1)
//void Fun3()
//{
//	int count = 0;
//	//执行了100次，为常数项，所以为0(1)
//	for (int i = 0; i < 100; i++)
//	{
//		count++;
//	}
//	printf("%d", count);
//}
//
////0(2^n)
//int Fib(int n)
//{
//	if (n < 3)
//		return 1;
//	return Fib(n - 1) + Fib(n - 2);
//}
//
////执行了(N*(N+1))/2;
//void Bubble(int* nums, int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			if (nums[j] > nums[j+1])
//			{
//				int tmp = nums[j];
//				nums[j] = nums[j + 1];
//				nums[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void Fib1(int n)
//{
//	//空间复杂度为O（N）
//	int* ret = malloc(sizeof(int) * n);
//	ret[0] = 1;
//	ret[1] = 1;
//	for (int i = 2; i < n; i++)
//	{
//		ret[i] = ret[i - 1] + ret[i - 2];
//	}
//	for (int i = 0; i < n; i++)
//		printf("%d ", ret[i]);
//
//	free(ret);
//}
//
//int find(const int* nums, int left, int right, int target)
//{
//	while (left < right)
//	{
//		int mid = left + ((right - left) >> 1);
//		if (nums[mid] > target)
//			right = mid - 1;
//		else if (nums[mid] < target)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;//未找到返回-1；
//}
//
//
////空间复杂度为0（N）
////递归开辟了N个栈帧，每个栈帧使用了常数个空间
//long long Factorial(int n)
//{
//	if (n < 2)
//		return n;
//	return n * Factorial(n - 1);
//}
//int main()
//{
//	//Fun1(10);
//	//Fun2(10, 5);
//	//printf("%d", Fib(10));
//	//int nums[5] = { 5,1,2,9,-45 };
//	//Bubble(nums, 5);
//	//for (int i = 0; i < 5; i++)
//	//	printf("%d ", nums[i]);
//
//	//Fib1(10);
//
//	//printf("%d ", Factorial(5));
//
//	int nums[] = { 1,2,3,6,8,10 };
//	printf("%d", find(nums, 0, 5, 8));
//	return 0;
//}


