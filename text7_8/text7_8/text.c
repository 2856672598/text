//#include<stdio.h>
//void moveZeroes(int* nums, int numsSize)
//{
//	int left = 0, right = 0;
//	while (right < numsSize)
//	{
//		if (nums[right])
//		{
//			nums[left] = nums[right];
//			left++;
//			right++;
//		}
//		else
//		{
//			right++;
//		}
//	}
//	for (int i = left; i < right; i++)
//		nums[i] = 0;
//}
//int main()
//{
//	int arr[] = { 1,4,0,2,0,8,0,9,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	moveZeroes(arr, sz);
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
////int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
////{
////	*returnSize = 2;
////	int* ret = malloc(sizeof(int) * 2);
////	ret[1] = ret[0] = 0;
////	for (int i = 0; i < numbersSize; i++)
////	{
////		int j = i + 1;
////		while (j < numbersSize)
////		{
////			if ((numbers[i] + numbers[j]) > target)
////				break;
////			else if ((numbers[i] + numbers[j]) == target)
////				break;
////			j++;
////		}
////		if (j < numbersSize && (numbers[i] + numbers[j]) == target)
////		{
////			ret[0] = i + 1;
////			ret[1] = j + 1;
////			break;
////		}
////	}
////	return ret;
////}
//
////利用二分
//int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
//{
//	int* ret = malloc(sizeof(int) * 2);
//	*returnSize = 2;
//	for (int i = 0; i < numbersSize; i++)
//	{
//		//防止重复寻找 每次left应从i的下一个位置开始查找
//		int left = i + 1, right = numbersSize - 1, min = 0;
//		while (left <= right)
//		{
//			min = left + ((right - left) >> 1);
//			if (numbers[min] > (target - numbers[i]))
//			{
//				right = min - 1;
//			}
//			else if (numbers[min] < (target - numbers[i]))
//				left = min + 1;
//			else
//				break;
//		}
//		if (left <= right)
//		{
//			ret[0] = i + 1;
//			ret[1] = min + 1;
//			break;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,4,9,56,90 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int target = 8;
//	int returnSize = 0;
//	int* ret = twoSum(arr, sz, target, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//		printf("%d", ret[i]);
//	free(ret);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<limits.h>
//int reverse(int x)
//{
//	int rev = 0;
//	while (x)
//	{
//		if (rev < INT_MIN / 10 || rev > INT_MAX/10)
//			return 0;
//		rev *= 10;
//		rev += x % 10;
//		x /= 10;
//	}
//	return rev;
//}
//int main()
//{
//	int x = -123456;
//	int ret = reverse(x);
//	printf("%d", ret);
//	return 0;
//}

////121. 买卖股票的最佳时机
//#include<stdio.h>
//int maxProfit(int* prices, int pricesSize)
//{
//	int min = prices[0];
//	int proMax = 0;
//	for (int i = 0; i < pricesSize; i++)
//	{
//		if (min > prices[i])
//			min = prices[i];
//		if ((prices[i] - min) > proMax)
//			proMax = prices[i] - min;
//	}
//	return proMax;
//}
//int main()
//{
//	int nums[] = { 7,1,5,3,6,4 };
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int proMax = maxProfit(nums, sz);
//	printf("%d", proMax);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//////异或
////char findTheDifference(char * s, char * t)
////{
////	int sz1 = strlen(s);
////	int sz2 = strlen(t);
////	int sum = s[0];
////	for (int i = 1; i < sz1; i++)
////		sum ^= s[i];
////	for (int i = 0; i < sz2; i++)
////		sum ^= t[i];
////	return sum;
////}
//
////求和
//char findTheDifference(char * s, char * t)
//{
//	int m = strlen(s), n = strlen(t);
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//		sum += s[i];
//	for (int i = 0; i < n; i++)
//		sum -= t[i];
//	if (sum < 0)
//		sum *= -1;
//	return sum;
//}
//int main()
//{
//	char s[] = "abcd";
//	char t[] = "abcde";
//	char ret = findTheDifference(s, t);
//	printf("%c", ret);
//	return 0;
//}

//#include<stdio.h>
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
//int findContentChildren(int* g, int gSize, int* s, int sSize)
//{
//	Sort(g, gSize);
//	Sort(s, sSize);
//	int count = 0;
//	int begin1 = 0, begin2 = 0;
//	while (begin1 < gSize && begin2 < sSize)
//	{
//		if (g[begin1] <= s[begin2])
//		{
//			begin1++;
//			begin2++;
//			count++;
//		}
//		else
//			begin2++;
//	}
//	return count;
//}
//int main()
//{
//	int g[] = { 1,2,3 };
//	int s[] = { 1,1 };
//	int sSize = sizeof(s) / sizeof(s[0]);
//	int gSize = sizeof(g) / sizeof(g[0]);
//	int count = findContentChildren(g, gSize, s, sSize);
//	printf("%d", count);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void Sort(int* nums, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int end = i, flag = nums[end + 1];
		while (end >= 0)
		{
			if (nums[end] < flag)
			{
				nums[end + 1] = nums[end];
				end--;
			}
			else
				break;
		}
		nums[end + 1] = flag;
	}
}
int Find(int* score, int left, int right, int target)
{
	int min = 0;
	while (left <= right)
	{
		min = left + ((right - left) >> 1);
		if (score[min] > score[right])
		{
			right = min - 1;
		}
		else if (score[min] < score[left])
			left = min + 1;
		else
			break;
	}
	return min;
}
char ** findRelativeRanks(int* score, int scoreSize, int* returnSize)
{
	int* arr = malloc(sizeof(int)*scoreSize);
	for (int i = 0; i < scoreSize; i++)
		arr[i] = score[i];
	char** ret = malloc(sizeof(char*) * scoreSize);
	Sort(score, scoreSize);
	for (int i = 0; i < scoreSize; i++)
	{
		int pos = Find(score, i, scoreSize - 1, arr[i]);
		ret[i] = malloc(sizeof(char) * 15);
		switch (pos)
		{
		case 0:
			sprintf(ret[i], "Gold Medal");
			break;
		case 1:
			sprintf(ret[i], "Silver Medal");
			break;
		case 2:
			sprintf(ret[i], "Bronze Medal");
			break;
		default:
			sprintf(ret[i], "%d", i + 1);
			break;
		}
	}
	free(arr);
	*returnSize = scoreSize;
	return ret;
}
int main()
{
	int nums[] = { 5,4,3,2,1 };
	int sz = sizeof(nums) / sizeof(nums[0]);
	int returnSize = 0;
	char** ret = findRelativeRanks(nums, sz, &returnSize);
	for (int i = 0; i < returnSize; i++)
	{
		printf("%s\n", ret[i]);
	}
}