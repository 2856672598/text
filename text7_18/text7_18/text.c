#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<stdbool.h>
//bool Find(int arr[][4], int rowSize, int colSize, int target)
//{
//	int row = 0, col = colSize - 1;
//	while (row < rowSize && col >= 0)
//	{
//		if (arr[row][col] > target)
//			col--;
//		else if (arr[row][col] < target)
//			row++;
//		else
//			return true;
//	}
//	return false;
//}
//int main()
//{
//	int arr[4][4] = { 1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15 };
//	int target = 19;
//	bool falg = Find(arr, 4, 4, target);
//	printf("%d", falg);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char* Replace(char* nums)
//{
//	int size = strlen(nums);
//	char* res = malloc(sizeof(char)*(3 * size + 1));
//	int begin = 0, cur = 0;
//	while (begin <= size)
//	{
//		if (nums[begin] != ' ')
//		{
//			res[cur++] = nums[begin++];
//		}
//		else
//		{
//			res[cur++] = '%';
//			res[cur++] = '2';
//			res[cur++] = '0';
//			begin++;
//		}
//	}
//	return res;
//}
//int main()
//{
//	char nums[] = "abc defgx yz";
//	char* ans = Replace(nums);
//	printf("%s", ans);
//	free(ans);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char acHello[] = "hello\0world";
//	char acNew[15] = { 0 };
//	strcpy(acNew, acHello);
//	printf("%d", strlen(acHello));
//	printf("%d", strlen(acNew));
//	return 0;
//}

//#include<stdio.h>
//int Fib(int n)
//{
//	int sum = 0, prev = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (i == 1)
//			sum += 1;
//		else
//		{
//			int falg = sum + prev;
//			prev = sum;
//			sum = falg;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fib(n));
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//int main(int argc, char *argv[])
//{
//	char arr[1001];
//	scanf("%s", arr);
//	int nums[26] = { 0 };
//	int size = strlen(arr);
//	for (int i = 0; i < size; i++)
//	{
//		nums[arr[i] - 'a']++;
//	}
//	int maxi = 0;
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		if (nums[i] > nums[maxi])
//			maxi = i;
//	}
//	printf("%c\n", maxi + 'a');
//	printf("%d", nums[maxi]);
//	return 0;
//}


////1351. 统计有序矩阵中的负数
//#include<stdio.h>
////int countNegatives(int** grid, int gridSize, int* gridColSize)
////{
////	int count = 0;
////	for (int i = 0; i < gridSize; i++)
////	{
////		for (int j = 0; j < *gridColSize; j++)
////		{
////			if (grid[i][j] < 0)
////				count++;
////		}
////	}
////	return count;
////}
//
//
////二分法
//int countNegatives(int** grid, int gridSize, int* gridColSize)
//{
//	int count = 0;
//	for (int i = 0; i < gridSize; i++)
//	{
//		int left = 0, right = *gridColSize - 1;
//		while (left < right)
//		{
//			int mid = left + (right - left) / 2;
//			if (grid[i][mid] >= 0)
//				left = mid + 1;
//			else
//				right = mid;
//		}
//		if (grid[i][left] < 0)//1，-1或者1，1
//			count += *gridColSize - right;
//	}
//	return count;
//}
//int main()
//{
//
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int* kWeakestRows(int** mat, int matSize, int* matColSize, int k, int* returnSize)
//{
//	*returnSize = 0;
//	int* res = malloc(sizeof(int)*k);
//	int* arr = malloc(sizeof(int)*matSize);
//	for (int i = 0; i < matSize; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < *matColSize; j++)
//		{
//			if (mat[i][j] == 1)
//				count++;
//			else
//				break;
//		}
//		arr[i] = count;
//	}
//	while (k)
//	{
//		int min = 0;
//		for (int i = 0; i < matSize; i++)
//		{
//			if (arr[min] > arr[i])
//				min = i;
//		}
//		arr[min] = *matColSize;
//		res[(*returnSize)++] = min;
//		k--;
//	}
//	free(arr);
//	return res;
//}


//#include<stdio.h>
//#include<stdlib.h>
//void Sort(int* nums, int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		int end = i, flag = nums[end + 1];
//		while (end >= 0)
//		{
//			if (nums[end] > flag)
//			{
//				nums[end + 1] = nums[end];
//				end--;
//			}
//			else
//				break;
//		}
//		nums[end + 1] = flag;
//	}
//}
//int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
//{
//	Sort(nums1, nums1Size);
//	Sort(nums2, nums2Size);
//	*returnSize = 0;
//	int begin1 = 0, begin2 = 0;
//	int size = nums1Size < nums2Size ? nums1Size : nums2Size;
//	int* res = malloc(sizeof(int)*size);
//
//	while (begin1 < nums1Size && begin2 < nums2Size)
//	{
//		if (nums1[begin1] == nums2[begin2])
//		{
//			res[(*returnSize)++] = nums1[begin1];
//			begin1++;
//			begin2++;
//		}
//		else if (nums1[begin1] > nums2[begin2])
//			begin2++;
//		else
//			begin1++;
//	}
//	return res;
//}
//int main()
//{
//	int nums1[] = { 1,4,5,2,6,7 };
//	int nums2[] = { 2,6,7,3,9,0 };
//	int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
//	int nums2Size = sizeof(nums2) / sizeof(nums2[0]);
//	int returnSize = 0;
//	int* res = intersect(nums1, nums1Size, nums2, nums2Size, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//		printf("%d ", res[i]);
//	free(res);
//	return 0;
//}

////367. 有效的完全平方数
//#include<stdio.h>
//#include<stdbool.h>
//bool isPerfectSquare(int num)
//{
//	int left = 1, right = num >> 1;
//	while (left <= right)
//	{
//		long long mid = left + (right - left) / 2;
//		if (mid * mid == num)
//			return true;
//		else if (mid * mid > num)
//			right = mid - 1;
//		else
//			left = mid + 1;
//	}
//	return false;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	bool flag = isPerfectSquare(num);
//	printf("%d", flag);
//	return 0;
//}



////33. 搜索旋转排序数组
//#include<stdio.h>
////int search(int* nums, int numsSize, int target)
////{
////	for (int i = 0; i < numsSize; i++)
////	{
////		if (nums[i] == target)
////			return i;
////	}
////	return -1;
////}
//
////二分法
//int search(int* nums, int numsSize, int target)
//{
//	int left = 0, right = numsSize - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (nums[mid] == target)
//			return mid;
//		if (nums[0] <= nums[mid])
//		{
//			//前半部分有序
//			if (target < nums[mid] && target >= nums[0])
//				right = mid - 1;
//			else
//				left = mid + 1;
//		}
//		else
//		{
//			if (target > nums[mid] && target <= nums[numsSize - 1])
//				left = mid + 1;
//			else
//				right = mid - 1;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int nums[] = { 4,5,6,7,8,1,2,3 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int target = 8;
//	printf("%d", search(nums, size, target));
//	return 0;
//}



////338. 比特位计数
//#include<stdio.h>
//#include<stdlib.h>
//int* countBits(int n, int* returnSize)
//{
//	int* res = malloc(sizeof(int)*(n + 1));
//	*returnSize = 0;
//	res[(*returnSize)++] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int count = 0;
//		int tmp = i;
//		unsigned flag = 1;
//		for (int j = 0; j < 32; j++)
//		{
//			if (i & flag)
//			{
//				count++;
//			}
//			flag = flag << 1;
//		}
//		res[(*returnSize)++] = count;
//	}
//	return res;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int returnSize = 0;
//	int* res = countBits(n, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//		printf("%d ", res[i]);
//	free(res);
//	return 0;
//}


//#include<stdio.h>
//#include<stdbool.h>
//
////342. 4的幂
////bool isPowerOfFour(int n)
////{
////	while (n > 1)
////	{
////		if (n % 4 == 0)
////			n /= 4;
////		else
////			break;
////	}
////	if (n == 1)
////		return true;
////	else
////		return false;
////}
//
//bool isPowerOfFour(int n)
//{
//	return n % 3 == 1 && n > 0 && (n&(n - 1)) == 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	bool flag = isPowerOfFour(n);
//	printf("%d", flag);
//	return 0;
//}

////476. 数字的补数
//#include<stdio.h>
//int findComplement(int num)
//{
//	int sum = 0;
//	int count = 0;
//	while (num)
//	{
//		if (!(num & 1))
//		{
//			sum += 1 << count;
//		}
//		num >>= 1;
//		count++;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", findComplement(n));
//	return 0;
//}


//#include<stdio.h>
//int canBeTypedWords(char * text, char * brokenLetters)
//{
//	int size1 = strlen(text);
//	int size2 = strlen(brokenLetters);
//	int begin = 0, end = 0, count = 0;
//	while (end <= size1)
//	{
//		if (text[end] != ' '&&text[end] != '\0')
//		{
//			end++;
//		}
//		else
//		{
//			while (begin < end)
//			{
//				int i = 0;
//				for (i = 0; i < size2; i++)
//				{
//					if (text[begin] == brokenLetters[i])
//						break;
//				}
//				if (i < size2)
//					break;
//				begin++;
//			}
//			if (begin >= end)
//			{
//				count++;
//			}
//			else
//				begin = end;
//			begin++;
//			end++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	char text[] = "leet code";
//	char nums[] = "lt";
//	printf("%d", canBeTypedWords(text, nums));
//	return 0;
//}


//新增的最少台阶数
#include<stdio.h>
int addRungs(int* rungs, int rungsSize, int dist)
{
	int count = 0;
	int prev = 0;
	for (int i = 0; i < rungsSize; i++)
	{
		if (rungs[i] - prev > dist)
		{
			count += (rungs[i] - prev) / dist;
			if (dist == 1 || (rungs[i] - prev) % dist == 0)
				count -= 1;
			prev += dist * ((rungs[i] - prev) / dist);
			i -= 1;
		}
		else
			prev = rungs[i];
	}
	return count;
}
int main()
{
	int arr[] = { 12,24 };
	int dist = 4;
	printf("%d", addRungs(arr, 2, dist));
	return 0;
}