#define _CRT_SECURE_NO_WARNINGS

////https://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof/submissions/
//#include<stdio.h>
//#include<malloc.h>
////时间复杂度是O（n^2)
////int findRepeatNumber(int* nums, int numsSize)
////{
////	for (int i = 0; i < numsSize; i++)
////	{
////		for (int j = i+1; j < numsSize; j++)
////		{
////			if (nums[i] == nums[j])
////				return nums[i];
////		}
////	}
////	return -1;
////}
////int findRepeatNumber(int* nums, int numsSize)
////{
////	int* arr = calloc(numsSize, sizeof(int));
////	for (int i = 0; i < numsSize; i++)
////	{
////		arr[nums[i]] += 1;
////		if (arr[nums[i]] == 2)
////		{
////			free(arr);
////			return nums[i];
////		}
////	}
////	free(arr);
////	return -1;
////}
//
////原地比较
//int findRepeatNumber(int* nums, int numsSize)
//{
//	for (int i = 0; i < numsSize; i++)
//	{
//		//先进行排序
//		while (nums[i] != i)
//		{
//			//判断是否重复
//			if (nums[i] == nums[nums[i]])
//				return nums[i];
//			int tmp = nums[i];
//			nums[i] = nums[tmp];
//			nums[tmp] = tmp;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int nums[] = { 0, 1, 2, 3, 4, 11, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int len = findRepeatNumber(nums, size);
//	printf("%d", len);
//	return 0;
//}


//#include<stdbool.h>
//#include<stdio.h>
//bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target)
//{
//	if (matrixSize == 0 || *matrixColSize == 0)
//		return false;
//	int i = 0, j = (*matrixColSize) - 1;
//	while (j >= 0 && i < matrixSize)
//	{
//		if (matrix[i][j] < target)
//			i++;
//		else if (matrix[i][j] > target)
//			j--;
//		else
//			return true;
//	}
//	return false;
//}
//int main()
//{
//	int arr = NULL;
//	int *matrix = arr;
//	int len = 0;
//	findNumberIn2DArray(&matrix, 0, &len, 0);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//char* replaceSpace(char* s)
//{
//	if (s == NULL)
//		return NULL;
//	char* head = calloc(strlen(s)*3+1, sizeof(char));
//	int i = 0, k = 0;
//	for (i = 0; i < (int)strlen(s); i++)
//	{
//		if (s[i] == ' ')
//		{
//			head[k] = '%';
//			head[k + 1] = '2';
//			head[k + 2] = '0';
//			k += 2;
//		}
//		else
//			head[k] = s[i];
//		k++;
//	}
//	//结束后在字符串的末尾添加个\0；
//	head[k] = '\0';
//	return head;
//}
//int main()
//{
//	char arr[] = "     ";
//	int size = strlen(arr);
//	char* len = replaceSpace(arr);
//	printf("%s", len);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//int* reversePrint(struct ListNode* head, int* returnSize)
//{
//	if (head == NULL)
//		return head;
//	int* arr = malloc(1000 * sizeof(int));
//	int i = 0, count = 0;
//	while (head)
//	{
//		arr[i] = head->val;
//		head = head->next;
//		i++;
//		count++;
//	}
//	*returnSize = count;
//	int left = 0, right = count - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	return arr;
//}
//int main()
//{
//	struct ListNode* p1 = malloc(sizeof(struct ListNode));
//	p1->val = 1;
//	struct ListNode* p2 = malloc(sizeof(struct ListNode));
//	p2->val = 2;
//	struct ListNode* p3 = malloc(sizeof(struct ListNode));
//	p3->val = 3;
//	struct ListNode* p4 = malloc(sizeof(struct ListNode));
//	p4->val = 4;
//	p1->next = p2;
//	p2->next = p3;
//	p3->next = p4;
//	p4->next = NULL;
//
//	int size = 0;
//	int* arr = reversePrint(p4->next, &size);
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int numWays(int n)
//{
//	if (n < 2 && n>0)
//		return n;
//	int next = 0, cur = 1, prev = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		next = (cur + prev) % 1000000007;
//		prev = cur;
//		cur = next;
//	}
//	return next;
//}
//int main()
//{
//	int n = 5;
//	int len = numWays(n);
//	printf("%d", len);
//	return 0;
//}

//斐波那锲数列
//https://leetcode-cn.com/problems/fei-bo-na-qi-shu-lie-lcof/
int fib(int n)
{
	if (n < 2)
		return n;
	int cur = 1, prev = 0, next = 0;
	for (int i = 2; i <= n; i++)
	{
		next = (cur + prev) % 1000000007;
		prev = cur;
		cur = next;
	}
	return next;
}

#include<stdio.h>
int minArray(int* numbers, int numbersSize)
{
	if (numbersSize <= 1)
		return numbers[0];
	int cur = numbersSize - 2, prev = numbersSize - 1;
	while (cur >= 0 && numbers[cur] <= numbers[prev])
	{
		cur--;
		prev--;
	}
	return numbers[prev];
}
int main()
{
	int nums[] = { 1,2,2};
	int len = minArray(nums, sizeof(nums) / sizeof(nums[0]));
	printf("%d", len);
	return 0;
}