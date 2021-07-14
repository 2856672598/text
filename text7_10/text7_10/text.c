#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
//{
//	int count = 0;
//	struct ListNode* cur = head;
//	while (cur)
//	{
//		count++;
//		cur = cur->next;
//	}
//	count -= n;
//	cur = head;
//	struct ListNode* prev = cur;
//	while (count)
//	{
//		prev = cur;
//		cur = cur->next;
//		count--;
//	}
//	if (cur == head)
//		head = cur->next;
//	else
//		prev->next = cur->next;
//	return head;
//}
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//int findMagicIndex(int* nums, int numsSize)
//{
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] == i)
//			return i;
//	}
//	return -1;
//}
//int main()
//{
//	int nums[] = { 0, 2, 3, 4, 5 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int ret = findMagicIndex(nums, size);
//	printf("%d", ret);
//	return 0;
//}


////744. 寻找比目标字母大的最小字母
//#include<stdio.h>
////char nextGreatestLetter(char* letters, int lettersSize, char target)
////{
////	for (int i = 0; i < lettersSize; i++)
////	{
////		if (letters[i] > target)
////			return letters[i];
////	}
////	return letters[0];
////}
////二分
//char nextGreatestLetter(char* letters, int lettersSize, char target)
//{
//	int left = 0, right = lettersSize - 1, reti = 0;
//	while (left <= right)
//	{
//		int min = left + (right - left) / 2;
//		if (letters[min] > target)
//		{
//			reti = i;
//			right = min - 1;
//		}
//		else (letters[min] < target)
//			left = min + 1;
//	}
//	return letters[reti];
//}
//int main()
//{
//	char letters[] = { 'c', 'f', 'j' };
//	int size = sizeof(letters) / sizeof(letters[0]);
//	char target = 'd';
//	char max = nextGreatestLetter(letters, size, target);
//	printf("%c", max);
//	return 0;
//}


//#include<stdio.h>
//void Sort(int* nums, int numsSize)
//{
//	for (int i = 0; i < numsSize - 1; i++)
//	{
//		int end = i, flag = nums[end + 1];
//		while (end>=0)
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
//int specialArray(int* nums, int numsSize)
//{
//	Sort(nums, numsSize);
//	for (int i = 1; i <= numsSize; i++)
//	{
//		int target = i, left = 0, right = numsSize - 1;
//		int pos = -1;
//		while (left <= right)
//		{
//			int min = left + (right - left) / 2;
//			if (nums[min] >= target)
//			{
//				pos = min;
//				right = min - 1;
//			}
//			else
//				left = min + 1;
//		}
//		if (numsSize - pos == target)
//			return target;
//	}
//	return  -1;
//}
//int main()
//{
//	int nums[] = { 0,0 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int ret = specialArray(nums, size);
//	printf("%d", ret);
//	return 0;
//}


#include<stdio.h>
#include<math.h>
//int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d)
//{
//	int count = 0;
//	for (int i = 0; i < arr1Size; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < arr2Size; j++)
//		{
//			if (abs(arr1[i] - arr2[j]) < d)
//				flag = 1;
//		}
//		if (!flag)
//			count++;
//	}
//	return count;
//}

//int main()
//{
//	int arr1[] = { 4,5,8 };
//	int arr2[] = { 10,9,1,8 };
//	int d = 2;
//	int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
//	int arr2Size = sizeof(arr2) / sizeof(arr2[0]);
//	int count = findTheDistanceValue(arr1, arr1Size, arr2, arr2Size, d);
//	printf("%d", count);
//	return 0;
//}

//#include<stdbool.h>
//#include<stdio.h>
//bool Find(int nums[4][4], int row, int col, int target)
//{
//	int i = 0, j = col - 1;
//	//从右上角开始判断
//	while (i < row && j >= 0)
//	{
//		if (nums[i][j] < target)
//			i++;
//		else if (nums[i][j] > target)
//			j--;
//		else
//			return true;
//	}
//	return false;
//}
//int main()
//{
//	int arr[4][4] = { 1, 2, 8, 9,2, 4, 9, 12,4, 7, 10, 13 };
//	int target = 10;
//	bool flag = Find(arr, 4, 4, target);
//	printf("%d", flag);
//	return 0;
//}


//#include<stdio.h>
////int findKthPositive(int* arr, int arrSize, int k)
////{
////	int maxSize = arr[arrSize - 1];
////	int count = 0, cur = 0, i = 0;
////	for (i = 1; i <= maxSize; i++)
////	{
////		if (i != arr[cur])
////			count++;
////		else
////			cur++;
////		if (count == k)
////			break;
////	}
////	if (count != k)
////		return arr[arrSize - 1] + k - count;
////	else
////		return i;
////}
//
////二分法
//int findKthPositive(int* arr, int arrSize, int k)
//{
//	int left = 0, right = arrSize - 1, mid = 0;
//	while (left < right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] - mid - 1 < k)
//			left = mid + 1;
//		else
//			right = mid;
//	}
//	if (arr[left] - left > k)
//	{
//		return arr[left] + k - (arr[left] - left);
//	}
//	else
//		return arr[left] + k - (arr[left] - left) + 1;
//}
//int main()
//{
//	int nums[] = { 1,2,3,4 };
//	int k = 2;
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int ret = findKthPositive(nums, size, k);
//	printf("%d", ret);
//	return 0;
//}


////202. 快乐数
//#include<stdio.h>
//#include<stdbool.h>
//int SumSqu(int n)
//{
//	int sum = 0;
//	while (n)
//	{
//		int tmp = n % 10;
//		sum += tmp * tmp;
//		n /= 10;
//	}
//	return sum;
//}
//bool isHappy(int n)
//{
//	int fast = n, slow = n;
//	do
//	{
//		fast = SumSqu(fast);
//		fast = SumSqu(fast);
//		slow = SumSqu(slow);
//		if (fast == 1)
//			return true;
//	} while (fast != slow);
//	return false;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", isHappy(n));
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//void Rever(char* s, int left, int right)
//{
//	while (left < right)
//	{
//		char tmp = s[left];
//		s[left] = s[right];
//		s[right] = tmp;
//		left++;
//		right--;
//	}
//}
//char * reverseStr(char * s, int k)
//{
//	for (int i = 0; i < (int)strlen(s); i += 2 * k)
//	{
//		if (i + k < (int)strlen(s))
//			Rever(s, i, i + k - 1);
//		else
//			Rever(s, i, strlen(s) - 1);
//	}
//	return s;
//}
//int main()
//{
//	char nums[] = "abcdefg";
//	int k = 2;
//	reverseStr(nums, k);
//	printf("%s", nums);
//	return 0;
//}

////383. 赎金信
//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h>
//#include<stdlib.h>
//int compare(const void* a, const void* b)
//{
//	return *(char*)a - *(char*)b;
//}
//bool canConstruct(char * ransomNote, char * magazine)
//{
//	qsort(ransomNote, strlen(ransomNote), sizeof(char), compare);
//	qsort(magazine, strlen(magazine), sizeof(char), compare);
//
//	int begin1 = 0, begin2 = 0;
//	int end1 = strlen(ransomNote), end2 = strlen(magazine);
//	while (begin1 < end1 && begin2 < end2)
//	{
//		if (ransomNote[begin1] == magazine[begin2])
//		{
//			begin1++;
//			begin2++;
//		}
//		else if (ransomNote[begin1] > magazine[begin2])
//			begin2++;
//		else
//			break;
//		if (begin1 == end1)
//			return true;
//	}
//	return false;
//}
//int main()
//{
//	char ransomNote[] = "aab";
//	char magazine[] = "baa";
//	bool res = canConstruct(ransomNote, magazine);
//	printf("%d", res);
//	return 0;
//}

//#include<stdio.h>
////超时
////int trailingZeroes(int n)
////{
////	int sum = 1;
////	for (int i = 1; i <= n; i++)
////	{
////		sum *= i;
////	}
////	int count = 0;
////	while (sum)
////	{
////		if (sum % 10)
////			break;
////		else
////			count++;
////		sum /= 10;
////	}
////	return  count;
////}
//
//int trailingZeroes(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count += n / 5;
//		n /= 5;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = trailingZeroes(n);
//	printf("%d", count);
//	return 0;
//}

////面试题 05.01. 插入
//#include<stdio.h>
//int insertBits(int N, int M, int i, int j)
//{
//	int begin = i, end = j;
//	//把i-j之前置为0
//	for (begin; begin <= end; begin++)
//	{
//		N &= ~((unsigned int)1 << i);
//	}
//	N |= M << i;
//	return N;
//}