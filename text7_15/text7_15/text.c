#define _CRT_SECURE_NO_WARNINGS
////1089.复写零
//#include<stdio.h>
//void duplicateZeros(int* arr, int arrSize)
//{
//	int left = 0, right = arrSize - 1;
//	while (left < right)
//	{
//		if (arr[left] == 0)
//			right--;
//		left++;
//	}
//	int cur = arrSize - 1;
//	while (cur >= 0)
//	{
//		//当位置不够时不再复写
//		if (arr[right] == 0 && left != right)
//		{
//			arr[cur--] = 0;
//			arr[cur--] = 0;
//		}
//		else
//			arr[cur--] = arr[right];
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 0,0,0,0,0,0,0 };
//	int arrSize = sizeof(arr) / sizeof(arr[0]);
//	duplicateZeros(arr, arrSize);
//	for (int i = 0; i < arrSize; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}


////917. 仅仅反转字母
//#include<stdio.h>
//#include<stdbool.h>
//#include<string.h>
//bool IsLetter(char ch)
//{
//	if (ch >= 'a'&&ch <= 'z' || ch >= 'A'&&ch <= 'Z')
//		return true;
//	else
//		return false;
//}
//char * reverseOnlyLetters(char * s)
//{
//	int size = strlen(s);
//	int left = 0, right = size - 1;
//	while (left < right)
//	{
//		while (left < size && !IsLetter(s[left]))
//			left++;
//		while (right >= 0 && !IsLetter(s[right]))
//			right--;
//		if (left < right)
//		{
//			char tmp = s[left];
//			s[left] = s[right];
//			s[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//	return s;
//}
//int main()
//{
//	char arr[] = "7_28]";
//	reverseOnlyLetters(arr);
//	printf("%s", arr);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int Min(int a, int b)
//{
//	return a > b ? b : a;
//}
//int* shortestToChar(char * s, char c, int* returnSize)
//{
//	int size = strlen(s);
//	int* answer = malloc(sizeof(int)*size);
//	int pos = size;
//	//从左往右遍历
//	for (int i = 0; i < size; i++)
//	{
//		if (s[i] == c)
//			pos = i;
//		answer[i] = abs(i - pos);
//	}
//	//从右往左
//	for (int i = size - 1; i >= 0; i--)
//	{
//		if (s[i] == c)
//			pos = i;
//		answer[i] = Min(answer[i], abs(i - pos));
//	}
//	*returnSize = size;
//	return answer;
//}
//int main()
//{
//	char nums[] = "loveleetcode";
//	char c = 'e';
//	int returnSize = 0;
//	int* res = shortestToChar(nums, c, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//		printf("%d ", res[i]);
//	free(res);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//char * mergeAlternately(char * word1, char * word2)
//{
//	int size1 = strlen(word1), size2 = strlen(word2);
//	
//	char* res = malloc(sizeof(char)*(size1 + size2 + 1));
//	int begin1 = 0, begin2 = 0, cur = 0;
//	while (begin1 < size1 && begin2 < size2)
//	{
//		res[cur++] = word1[begin1++];
//		res[cur++] = word2[begin2++];
//	}
//	while (begin1 < size1)
//		res[cur++] = word1[begin1++];
//	while (begin2 < size2)
//		res[cur++] = word2[begin2++];
//	res[cur] = '\0';
//
//	return res;
//}
//int main()
//{
//	char word1[] = "abc";
//	char word2[] = "pqr";
//	char* res = mergeAlternately(word1, word2);
//	printf("%s", res);
//	free(res);
//	return 0;
//}


////345. 反转字符串中的元音字母
//#include<stdio.h>
//#include<stdbool.h>
//#include<string.h>
//bool IsVowel(char ch)
//{
//	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//		return true;
//	else
//		return false;
//}
//char * reverseVowels(char * s)
//{
//	int size = strlen(s);
//	int left = 0, right = size - 1;
//	while (left < right)
//	{
//		if (IsVowel(s[left]) && IsVowel(s[right]))
//		{
//			char tmp = s[left];
//			s[left] = s[right];
//			s[right] = tmp;
//			left++;
//			right--;
//		}
//
//		if (!IsVowel(s[left]))
//			left++;
//		if (!IsVowel(s[right]))
//			right--;
//	}
//	return s;
//}
//int main()
//{
//	char arr[] = "leetcode";
//	reverseVowels(arr);
//	printf("%s", arr);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int strStr(char * haystack, char * needle)
//{
//	if (strlen(haystack) == 0 || strlen(needle) == 0)
//		return 0;
//	int begin1 = 0, begin2 = 0;
//	while (begin1 < (int)strlen(haystack))
//	{
//		begin2 = 0;
//		if (haystack[begin1] == needle[begin2])
//		{
//			int cur = begin1;
//			while (begin2 < (int)strlen(needle))
//			{
//				if (haystack[cur] == needle[begin2])
//				{
//					cur++;
//					begin2++;
//				}
//				else
//					break;
//			}
//			if (begin2 >= (int)strlen(needle))
//				return begin1;
//		}
//		begin1++;
//	}
//	return -1;
//}
//int main()
//{
//	char arr1[] = "";
//	char arr2[] = "a";
//	int res = strStr(arr1, arr2);
//	printf("%d", res);
//	return 0;
//}


//1346. 检查整数及其两倍数是否存在
#include<stdio.h>
#include<stdbool.h>
//bool checkIfExist(int* arr, int arrSize)
//{
//	for (int i = 0; i < arrSize; i++)
//	{
//		for (int j = 0; j < arrSize; j++)
//		{
//			if (i != j && arr[i] * 2 == arr[j])
//				return true;
//		}
//	}
//	return false;
//}

////1346. 检查整数及其两倍数是否存在
//void Sort(int* arr, int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		int end = i, flag = arr[end + 1];
//		while (end >= 0)
//		{
//			if (arr[end] > flag)
//			{
//				arr[end + 1] = arr[end];
//				end--;
//			}
//			else
//				break;
//		}
//		arr[end + 1] = flag;
//	}
//}
//int Find(int* arr, int size, int target)
//{
//	int left = 0, right = size - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > target)
//			right = mid - 1;
//		else if (arr[mid] < target)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//bool checkIfExist(int* arr, int arrSize)
//{
//	Sort(arr, arrSize);
//	for (int i = 0; i < arrSize; i++)
//	{
//		int pos = Find(arr, arrSize, arr[i] * 2);
//		if (pos != -1 && pos != i)
//			return true;
//	}
//	return false;
//}
//int main()
//{
//	int arr[] = { -2,0,10,-19,4,6,-8 };
//	checkIfExist(arr, 7);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//char* compressString(char* S)
//{
//	int size = strlen(S);
//	char* res = malloc(sizeof(char)*(size * 2 + 1));
//	int count = 1, insert = 0;
//	for (int i = 1; i < size + 1; i++)//size的位置为\0不会溢出
//	{
//		if (S[i] == S[i - 1])
//			count++;
//		else
//		{
//			res[insert++] = S[i - 1];
//			insert += sprintf(&res[insert], "%d", count);
//			count = 1;
//		}
//	}
//	res[insert] = '\0';
//	if (insert >= size)
//	{
//		for (int i = 0; i <= size; i++)
//			res[i] = S[i];
//	}
//	return res;
//}
//int main()
//{
//	char nums[] = "a";
//	char* res = compressString(nums);
//	printf("%s", res);
//	free(res);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int** findContinuousSequence(int target, int* returnSize, int** returnColumnSizes)
//{
//	*returnSize = 0;
//	int size = target / 2 + 1;
//	int** res = malloc(sizeof(int*) * size / 2);
//	int* col = malloc(sizeof(int)*size);
//	for (int i = 1; i <= size; i++)
//	{
//		int sum = 0;
//		int cur = 0;
//		for (int j = i; j <= size; j++)
//		{
//			sum += j;
//			if (sum > target)
//				break;
//			else if (sum == target)
//			{
//				res[*returnSize] = malloc(sizeof(int)*size);
//				col[*returnSize] = j - i + 1;
//				for (int z = i; z <= j; z++)
//					res[*returnSize][cur++] = z;
//				(*returnSize)++;
//				break;
//			}
//		}
//	}
//	*returnColumnSizes = col;
//	return res;
//}


////面试题 02.06. 回文链表
//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* Reverse(struct ListNode* head)
//{
//	struct ListNode* prev = NULL, *cur = head;
//	while (cur != NULL)
//	{
//		struct ListNode* next = cur->next;
//		cur->next = prev;
//		prev = cur;
//		cur = next;
//	}
//	return prev;
//}
//bool isPalindrome(struct ListNode* head)
//{
//	if (head == NULL)
//		return true;
//	struct ListNode* fast = head, *slow = head;
//	while (fast->next != NULL && fast->next->next != NULL)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	struct ListNode*flag = Reverse(slow->next);
//	struct ListNode*cur1 = head, *cur2 = flag;
//	while (cur2 != NULL)
//	{
//		if (cur1->val != cur2->val)
//			break;
//		cur1 = cur1->next;
//		cur2 = cur2->next;
//	}
//	slow->next = Reverse(flag);
//	if (cur2 == NULL)
//		return true;
//	else
//		return false;
//}


//// 125. 验证回文串
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//bool isPalindrome(char * s)
//{
//	int size = strlen(s);
//	char* res = malloc(sizeof(char)*size);
//	int count = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (s[i] >= 'A'&&s[i] <= 'Z' || s[i] >= 'a'&&s[i] <= 'z' || s[i] >= '0'&&s[i] <= '9')
//		{
//			if (s[i] >= 'A'&&s[i] <= 'Z')
//				res[count++] = (s[i] + 32);
//			else
//				res[count++] = s[i];
//		}
//	}
//	int left = 0, right = count - 1;
//	while (left < right)
//	{
//		if (res[left] != res[right])
//			break;
//		left++;
//		right--;
//	}
//	free(res);
//	if (left == right)
//		return false;
//	else
//		return true;
//}
//int main()
//{
//	char nums[] = "A man, a plan, a canal: Panama";
//	int flag = isPalindrome(nums);
//	printf("%d", flag);
//	return 0;
//}