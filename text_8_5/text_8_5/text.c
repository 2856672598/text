
#define _CRT_SECURE_NO_WARNINGS 1

////82. 删除排序链表中的重复元素 II
//#include<stdio.h>
//#include<stdlib.h>
//
//struct ListNode
//{
//    int val;
//	struct ListNode *next;
// };
//struct ListNode* deleteDuplicates(struct ListNode* head)
//{
//	assert(head);
//	struct ListNode* tmpHead = malloc(sizeof(struct ListNode));
//	tmpHead->next = head;
//	struct ListNode* cur = tmpHead;
//
//	while (cur->next&&cur->next->next)
//	{
//		if (cur->next->val == cur->next->next->val)
//		{
//			int prev = cur->next->val;
//			while (cur->next&& cur->next->val == prev)
//			{
//				cur->next = cur->next->next;
//			}
//		}
//		else
//			cur = cur->next;
//	}
//	return tmpHead->next;
//}
//int main()
//{
//	struct ListNode* p1 = malloc(sizeof(struct ListNode));
//	struct ListNode* p2 = malloc(sizeof(struct ListNode));
//	struct ListNode* p3 = malloc(sizeof(struct ListNode));
//	struct ListNode* p4 = malloc(sizeof(struct ListNode));
//	struct ListNode* p5 = malloc(sizeof(struct ListNode));
//	struct ListNode* p6 = malloc(sizeof(struct ListNode));
//	struct ListNode* p7 = malloc(sizeof(struct ListNode));
//	struct ListNode* p8 = malloc(sizeof(struct ListNode));
//
//	p1->next = p2;
//	p2->next = p3;
//	p3->next = p4;
//	p4->next = p5;
//	p5->next = p6;
//	p6->next = p7;
//	p7->next = p8;
//	p8->next = NULL;
//	p1->val = 1;
//	p2->val = 2;
//	p3->val = 3;
//	p4->val = 3;
//	p5->val = 3;
//	p6->val = 4;
//	p7->val = 4;
//	p8->val = 5;
//	
//	deleteDuplicates(p1);
//	return 0;
//}


////567. 字符串的排列
//#include<stdio.h>
//#include<assert.h>
//#include<stdbool.h>
//
//bool equals(char* arr1, char* arr2)
//{
//	assert(arr1&&arr2);
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		if (arr1[i] > arr2[i])
//			return false;
//	}
//	return true;
//}
//bool checkInclusion(char * s1, char * s2)
//{
//	assert(s1&&s2);
//	int size1 = strlen(s1);
//	int size2 = strlen(s2);
//	if (size2 < size1)
//		return false;
//	char arr1[26] = "0";
//	char arr2[26] = "0";
//	int i = 0;
//	for (i = 0; i < size1; i++)
//	{
//		arr1[s1[i] - 'a']++;
//		arr2[s2[i] - 'a']++;
//	}
//	if (equals(arr1, arr2))
//		return true;
//	for (i = size1; i < size2; i++)
//	{
//		++arr2[s2[i] - 'a'];
//		--arr2[s2[i - size1] - 'a'];
//		if (equals(arr1, arr2))
//		{
//			return true;
//		}
//	}
//	return false;
//}
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//int compareVersion(char * version1, char * version2)
//{
//	assert(version1&&version2);
//	int i = 0, j = 0;
//	int sum1 = 0, sum2 = 0;
//	int flag1 = 0, flag2 = 0;
//	for (i = 0, j = 0; version1[i] != '\0' || version2[j] != '\0';)
//	{
//		while (version1[i] != '\0'&& version1[i] != '.')
//		{
//			if (version1[i] != '0' || flag1 == 1)
//			{
//				sum1 *= 10;
//				sum1 += version1[i] - '0';
//				flag1 = 1;
//			}
//			i++;
//		}
//		flag1 = 0;
//		if (version1[i] != '\0')
//			i++;
//
//		while (version2[j] != '\0'&&version2[j] != '.')
//		{
//			if (version2[j] != '0' || flag2== 1)
//			{
//				sum2 *= 10;
//				sum2 += version2[j] - '0';
//				flag2 = 1;
//			}
//			j++;
//		}
//		if (version2[j] != '\0')
//			j++;
//		flag2 = 0;
//		if (sum1 != sum2)
//			return sum1 > sum2 ? 1 : -1;
//	}
//	return 0;
//}
//
//int main()
//{
//	char nums1[] = "1.1";
//	char nums2[] = "1.10";
//	int len = compareVersion(nums1, nums2);
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int year = 0, month = 0;
//	while (~scanf("%d %d", &year, &month))
//	{
//		int data[13] = { 0, 31,29,31,30,31,30,31,31,30,31,30,31 };
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			//闰年
//			printf("%d\n", data[month]);
//		}
//		else
//		{
//			if (month == 2)
//				printf("%d\n", 28);
//			else
//				printf("%d\n", data[month]);
//		}
//	}
//	return 0;
//}
//
////443. 压缩字符串
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//int compress(char* chars, int charsSize)
//{
//	assert(chars);
//	int insert = 0;
//	if (charsSize == 1)
//		insert = 1;
//	int left = 0, right = 1;
//	char arr[1000] = "0";
//	while (right < charsSize)
//	{
//		while (right < charsSize && chars[left] == chars[right])
//		{
//			right++;
//		}
//		chars[insert++] = chars[left];
//		if (right - left != 1)
//		{
//			sprintf(arr, "%d", right - left);
//
//			int i = 0;
//			for (i = 0; i < (int)strlen(arr); i++)
//				chars[insert++] = arr[i];
//		}
//		left = right;
//	}
//	return insert;
//}
//int main()
//{
//	char nums[] = "a";
//	int size = strlen(nums);
//	int len = compress(nums, size);
//	int i = 0;
//	for (i = 0; i < len; i++)
//		printf("%c", nums[i]);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int findNthDigit(int n)
//{
//	long long digit = 1;
//	long long  count = 9;
//	while (n > digit*count)
//	{
//		n -= count * digit;
//		digit++;
//		count *= 10;
//	}
//	int flag = (int)pow(10, digit - 1);
//
//	int rema = n % digit;
//	n = flag + n / digit - 1;
//	if (rema)
//		n += 1;
//	int ret = 0;
//	if (rema == 0)
//		ret = n % 10;
//	else
//	{
//		while (digit - rema >= 0)
//		{
//			ret = n % 10;
//			rema++;
//			n /= 10;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int len = findNthDigit(n);
//	printf("%d", len);
//	return 0;
//}



//杨辉三角
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[100][100] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i][0] = arr[i][i] = 1;
//	}
//	for (i = 2; i < n; i++)
//	{
//		int j = 0;
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		arr[i] = 1;
//		if (((arr[0] != 1) + (arr[2] == 1) + (arr[3] == 1) + (arr[3] != 1)) == 3)
//			break;
//		arr[i] = 0;
//	}
//	printf("%c", 'A' + i);
//	return 0;
//}


////1170. 比较字符串最小字母出现频次
//#include<stdio.h>
//#include<assert.h>
//int f(const char* ret)
//{
//	assert(ret);
//	int arr[26] = { 0 };
//	int size = strlen(ret);
//	int i = 0;
//	char min = 'z';
//	for (i = 0; i < size; i++)
//	{
//		arr[ret[i]-'a']++;
//		if (ret[i] < min)
//			min = ret[i];
//	}
//	return arr[min - 'a'];
//}
//int* numSmallerByFrequency(char ** queries, int queriesSize, char ** words, int wordsSize, int* returnSize)
//{
//	assert(queries);
//	assert(words);
//	int* ret = malloc(sizeof(int)*queriesSize);
//	assert(ret);
//	*returnSize = 0;
//	int i = 0;
//	for (i = 0; i < queriesSize; i++)
//	{
//		int j = 0, count = 0;
//		for (j = 0; j < wordsSize; j++)
//		{
//			if (f(words[j]) > f(queries[i]))
//			{
//				count++;
//			}
//		}
//		ret[*(returnSize)++] = count;
//	}
//	return ret;
//}


////1004. 最大连续1的个数 III
//#include<stdio.h>
//int longestOnes(int* nums, int numsSize, int k)
//{
//	int left = 0, right = 0;
//	int ans = 0, ret = 0;
//	while (right < numsSize)
//	{
//		if (nums[right] == 0)
//			ans++;
//		while (ans > k)
//		{
//			if (nums[left] == 0)
//				ans -= 1;
//			left++;
//		}
//
//		right++;
//
//		if (ret < right - left)
//			ret = right - left;
//	}
//	return ret;
//}
//int main()
//{
//	int nums[] = { 0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1 };
//	int k = 3;
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int ret = longestOnes(nums, size, k);
//	printf("%d", ret);
//	return 0;
//}


#include<stdio.h>
int nthUglyNumber(int n, int a, int b, int c)
{
	int i = 0;
	for (i = 1;; i++)
	{
		if (i%a == 0 || i % b == 0 || a % c == 0)
		{
			n--;
		}
		if (n == 0)
			break;
	}
	return i;
}
int main()
{
	int n = 0;
	int a = 2, b = 11, c = 14;
	scanf("%d", &n);
	int ret = nthUglyNumber(n, a, b, c);
	printf("%d", ret);
	return 0;
}