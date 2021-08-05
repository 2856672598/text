
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


//567. 字符串的排列
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>

bool equals(char* arr1, char* arr2)
{
	assert(arr1&&arr2);
	int i = 0;
	for (i = 0; i < 26; i++)
	{
		if (arr1[i] > arr2[i])
			return false;
	}
	return true;
}
bool checkInclusion(char * s1, char * s2)
{
	assert(s1&&s2);
	int size1 = strlen(s1);
	int size2 = strlen(s2);
	if (size2 < size1)
		return false;
	char arr1[26] = "0";
	char arr2[26] = "0";
	int i = 0;
	for (i = 0; i < size1; i++)
	{
		arr1[s1[i] - 'a']++;
		arr2[s2[i] - 'a']++;
	}
	if (equals(arr1, arr2))
		return true;
	for (i = size1; i < size2; i++)
	{
		++arr2[s2[i] - 'a'];
		--arr2[s2[i - size1] - 'a'];
		if (equals(arr1, arr2))
		{
			return true;
		}
	}
	return false;
}
int main()
{
	return 0;
}