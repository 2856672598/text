//#include<stdio.h>
////方法一
////int maxProfit(int* prices, int pricesSize)
////{
////	if (pricesSize < 2)
////		return 0;
////	int max = prices[1] - prices[0];
////	for (int i = 0; i < pricesSize - 1; i++)
////	{
////		for (int j = i + 1; j < pricesSize; j++)
////		{
////			int sum = prices[j] - prices[i];
////			if (sum > max)
////				max = sum;
////		}
////	}
////	if (max > 0)
////		return max;
////	else
////		return 0;
////}
//
////方法二
//int maxProfit(int* prices, int pricesSize)
//{
//	if (pricesSize < 2)
//		return 0;
//	int min = prices[0];
//	int Maxsum = 0;
//	for (int i = 0; i < pricesSize; i++)
//	{
//		if (prices[i] < min)//找出已经遍历过的数组中最小的值
//			min = prices[i];
//		else if (Maxsum < (prices[i] - min))
//			Maxsum = prices[i] - min;
//	}
//	return Maxsum;
//}
//int main()
//{
//	int arr[] = { 7, 2,4,3,1,0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int max = maxProfit(arr, size);
//	printf("%d", max);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//typedef struct Node
//{
//	int val;
//	struct Node* next;
//	struct Node* random;
//}Node;
//Node* copyRandomList(Node* head)
//{
//	Node* cur = head;
//	while (cur)
//	{
//		Node* NewNode = malloc(sizeof(Node));
//		NewNode->val = cur->val;
//		NewNode->random = NULL;
//
//		NewNode->next = cur->next;
//
//		cur->next = NewNode;
//
//		cur = NewNode->next;
//	}
//	cur = head;
//	while (cur)
//	{
//		if (cur->random)
//		{
//			cur->next->random = cur->random->next;
//		}
//		cur = cur->next->next;
//	}
//	//断开
//	Node* res = head->next;
//	Node* prev = head;
//	cur = head->next;
//	while (cur->next)
//	{
//		prev->next = cur->next;
//		cur->next = cur->next->next;
//
//		prev = prev->next;
//		cur = cur->next;
//	}
//	prev->next = cur->next;
//	return res;
//}


//#include<stdio.h>
////double myPow(double x, int n)
////{
////	long long i = 0;
////	int pos = n;
////	int flag = 0;
////	if (n % 2)
////		flag = 1;
////	n /= 2;
////	double sum = 1, tmp = 1;
////	if (pos < 0 )
////	{
////		for (i = n; i < 0; i++)
////		{
////			tmp *= x;
////		}
////		tmp *= tmp;
////		if (flag)
////			tmp *= x;
////		sum = 1 / tmp;
////	}
////	else
////	{
////		for (i = 0; i < n; i++)
////		{
////			sum *= x;
////		}
////		sum *= sum;
////		if (flag)
////			sum *= x;
////	}
////	return sum;
////}
//
//double myPow(double x, int n)
//{
//	double sum = 1;
//	int flag = n;
//	while (flag)
//	{
//		if (flag % 2)
//		{
//			sum *= x;
//		}
//		flag /= 2;
//		x *= x;
//	}
//	if (n < 0)
//		sum /= 1.0;
//	return sum;
//}
//int main()
//{
//	double x = 0;
//	int n = 0;
//	printf("请输入x和n");
//	scanf("%lf %d", &x, &n);
//	printf("%lf", myPow(x, n));
//	return 0;
//}


//#include<stdio.h>
//int search(int* nums, int numsSize, int target)
//{
//	int left = 0, right = numsSize - 1;
//	int sub = -1;
//	while (left <= right)
//	{
//		int min = (left + right) / 2;
//		if (nums[min] == target)
//		{
//			sub = min;
//			break;
//		}
//		if (nums[min] < target)
//			left = min + 1;
//		else
//			right = min - 1;
//	}
//	return sub;
//}
//int main()
//{
//	int arr[] = { -1,0,3,5,9,12 };
//	int target = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int sub = search(arr, sz, target);
//	printf("%d", sub);
//	return 0;
//}

////剑指 Offer 51. 数组中的逆序对
//#include<stdio.h>
////暴力超时
//int reversePairs(int* nums, int numsSize)
//{
//	int count = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		for (int j = i + 1; j < numsSize; j++)
//		{
//			if (nums[i] > nums[j])
//				count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int arr[] = { 7,5,6,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int count = reversePairs(arr, sz);
//	printf("%d", count);
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
/*利用归并排序思想*/
int _Merge(int*nums, int left, int right, int* arr)
{
	int count = 0;
	if (left == right)
		return 0;
	int min = left + (right - left) / 2;
	int begin1 = left, end1 = min;
	int begin2 = min + 1, end2 = right;
	int count1 = _Merge(nums, begin1, end1, arr);
	int count2 = _Merge(nums, begin2, end2, arr);

	//排序
	int insert = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (nums[begin1] > nums[begin2])
		{
			arr[insert++] = nums[begin2];
			begin2++;
			count += min - begin1 + 1;
		}
		else
		{
			arr[insert++] = nums[begin1];
			begin1++;
		}
	}
	while (begin1 <= end1)
	{
		arr[insert++] = nums[begin1];
		begin1++;
	}
	while (begin2 <= end2)
	{
		arr[insert++] = nums[begin2];
		begin2++;
	}
	for (int i = left; i <= right; i++)
		nums[i] = arr[i];
	return count1 + count2 + count;
}
int reversePairs(int* nums, int numsSize)
{
	if (numsSize < 2)
		return 0;
	int left = 0, right = numsSize - 1;
	int* arr = malloc(sizeof(int)*numsSize);
	int count = _Merge(nums, left, right, arr);
	return count;
}
int main()
{
	int arr[] = { 7,5,6,4,3,1,6,8,9,2,3,5,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int count = reversePairs(arr, sz);
	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n%d", count);
	return 0;
}