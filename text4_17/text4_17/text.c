#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//#include<stdio.h>
//int fib(int n)
//{
//	if (n == 1)
//		return 0;
//	if (n <= 3)
//		return 1;
//	return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	printf("第n个斐波那锲");
//	scanf("%d", &n);
//	int len = fib(n);
//	printf("%d", len);
//	return 0;
//}

//#include<stdio.h>
//int sum(int x)
//{
//	if (x >0)
//	{
//		return sum(x - 1)*x;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入n");
//	scanf("%d", &n);
//	int len = sum(n);
//	printf("%d的阶乘为%d", n, len);
//	return 0;
//}


//#include<stdio.h>
//void print(int x)
//{
//	if (x >= 2)
//	{
//		print(x / 2);
//	}
//	printf("%d", x % 2);
//}
//int main()
//{
//	int n = 0;
//	printf("输入n的值");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//#include<stdio.h>
//int multiply(int A, int B)
//{
//	if (B <= 0)
//		return 0;
//	return multiply(A,B-1) + A;
//}
//
//int main()
//{
//	int A = 0, B = 0;
//	printf("输入A，B");
//	scanf("%d %d", &A, &B);
//	int len = multiply(A, B);
//	printf("%d", len);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 3,2,6,3,5,6,5,2,8,4,8 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int flag = 0;
//	for (int i = 0; i < size; i++)
//	{
//		flag = flag ^ arr[i];
//	}
//	printf("%d", flag);
//	return 0;
//}

//27. 移除元素
//https://leetcode-cn.com/problems/remove-element/
#include<stdio.h>
int removeElement(int* nums, int numsSize, int val)
{
	int flag = 0;
	int cur = 0;
	for (cur = 0; cur < numsSize; cur++)
	{
		if (nums[cur] != val)
		{
			nums[flag++] = nums[cur];
		}
	}
	return flag;
}
int main()
{
	int arr[] = { 0,1,2,2,3,0,4,2 };
	int val = 2;
	int size = sizeof(arr) / sizeof(arr[0]);
	size = removeElement(arr, size, val);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}