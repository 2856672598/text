
#define _CRT_SECURE_NO_WARNINGS 1

////82. É¾³ıÅÅĞòÁ´±íÖĞµÄÖØ¸´ÔªËØ II
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


////567. ×Ö·û´®µÄÅÅÁĞ
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
//			//ÈòÄê
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

//443. Ñ¹Ëõ×Ö·û´®
#include<stdio.h>
#include<assert.h>
#include<string.h>
int compress(char* chars, int charsSize)
{
	assert(chars);
	int insert = 0;
	if (charsSize == 1)
		insert = 1;
	int left = 0, right = 1;
	char arr[1000] = "0";
	while (right < charsSize)
	{
		while (right < charsSize && chars[left] == chars[right])
		{
			right++;
		}
		chars[insert++] = chars[left];
		if (right - left != 1)
		{
			sprintf(arr, "%d", right - left);

			int i = 0;
			for (i = 0; i < (int)strlen(arr); i++)
				chars[insert++] = arr[i];
		}
		left = right;
	}
	return insert;
}
int main()
{
	char nums[] = "a";
	int size = strlen(nums);
	int len = compress(nums, size);
	int i = 0;
	for (i = 0; i < len; i++)
		printf("%c", nums[i]);
	return 0;
}
