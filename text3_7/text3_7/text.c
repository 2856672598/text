//#include<stdio.h>
//#include<stdbool.h>
//bool isPalindrome(int x)
//{
//	if (x < 0|| (x % 10 == 0 && x != 0))
//		return false;
//	int reverse = 0;
//	while (x > reverse)
//	{
//		reverse = reverse * 10 + x % 10;
//		x /= 10;
//	}
//	if (reverse > x)
//		reverse /= 10;
//	if (reverse == x)
//		return true;
//	return false;
//}
//int main()
//{
//	isPalindrome(11);
//	return 0;
//}


////剑指 Offer 53 - II. 0～n-1中缺失的数字
////https://leetcode-cn.com/problems/que-shi-de-shu-zi-lcof/
//#include<stdio.h>
//int missingNumber(int* nums, int numsSize)
//{
//	int left = 0, right = numsSize - 1;
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		if (middle == nums[middle])
//			left = middle + 1;
//		else
//			right = middle - 1;
//	}
//	return left;
//}
//int main()
//{
//	int arr[] = { 0 };
//	int len = missingNumber(arr, sizeof(arr) / sizeof(arr[0]));
//	printf("%d ", len);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int CMP(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int majorityElement(int* nums, int numsSize)
//{
//	if (numsSize == 1)
//		return nums[0];
//	qsort(nums, numsSize, sizeof(int), CMP);
//	int i = 0, count = 1;
//	int cur, prev;
//	for (i = numsSize - 1; i > 0; i--)
//	{
//		cur = i; prev = i - 1;
//		if (nums[cur] == nums[prev])
//		{
//			count++;
//		}
//		else
//		{
//			if (count >= numsSize / 2 + 1 && count != 1)
//				return nums[cur];
//			count = 1;
//		}
//	}
//	if (count >= numsSize / 2 + 1 && count != 1)
//		return nums[cur];
//	return -1;
//}
//int main()
//{
//	int arr[] = {6,6,6,7,7};
//	int len = majorityElement(arr, sizeof(arr) / sizeof(arr[0]));
//	printf("%d ", len);
//	return 0;
//}

////d大数相加
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//char* solve(char* s, char* t)
//{
//	int sSize = strlen(s);
//	int tSize = strlen(t);
//	int size = sSize > tSize ? sSize : tSize;
//	//开辟size+1个空间 来存放和
//	char *number =(char*) malloc(sizeof(char)*(size + 1));
//	char carry = 0;
//	int i = 0;
//	while (size)
//	{
//		char a = 0, b = 0;
//		if (sSize)
//		{
//			a = s[sSize - 1]-'0';
//			sSize--;
//		}
//		if (tSize)
//		{
//			b = t[tSize - 1]-'0';
//			tSize--;
//		}
//		char sum = a + b + carry;
//		if (sum > 9)
//		{
//			number[i] = sum - 10+'0';
//			i++;
//			carry = 1; 
//		}
//		else
//		{
//			carry = 0;
//			number[i] = sum+'0';
//			i++;
//		}
//		size--;
//	}
//	if (carry)
//	{
//		number[i] = '1';
//		i++;
//	}
//	int left = 0, right = i - 1;
//	//翻转
//	while (left < right)
//	{
//		char tmp = number[left];
//		number[left] = number[right];
//		number[right] = tmp;
//		left++;
//		right--;
//	}
//	//结束时给个0
//	number[i] = 0;
//	return number;
//}
//int main()
//{
//	char arr[] = "1";
//	char arr1[] = "99";
//	char* sum = solve(arr, arr1);
//	printf("%s", sum);
//	return 0;
//}

////输入一个链表，反转链表后，输出新链表的表头。
//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* ReverseList(struct ListNode* pHead)
//{
//	struct ListNode* cur = pHead, *prev = NULL;
//	while (cur)
//	{
//		struct ListNode* next = cur->next;
//		cur->next = prev;
//		prev = cur;
//		cur = next;
//	}
//	return prev;
//}
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 5,2,3,1,4 };
//	int arrLen = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < arrLen; i++)
//	{
//		int j = 0;
//		for (j = 0; j < arrLen - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < arrLen; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

