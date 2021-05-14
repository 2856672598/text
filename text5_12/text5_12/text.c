////反转链表
////https://leetcode-cn.com/problems/reverse-linked-list/
//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
////方法一
//struct ListNode* reverseList(struct ListNode* head)
//{
//	struct ListNode* prev = NULL, *cur = head, *next = head->next;
//	if (head == NULL || head->next == NULL)
//		return head;
//	while (cur)
//	{
//		cur->next = prev;
//		prev = cur;
//		cur = next;
//		if (next)
//			next = next->next;
//	}
//	return prev;
//}
////方法二;
//struct ListNode* reverseList(struct ListNode* head)
//{
//	//头插法
//	struct ListNode* newhead = NULL;
//	while (head)
//	{
//		struct ListNode* next = head->next;
//		head->next = newhead;
//		newhead = head;
//		head = next;
//	}
//	return newhead;
//}

////876. 链表的中间结点
////https://leetcode-cn.com/problems/middle-of-the-linked-list/
//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* middleNode(struct ListNode* head)
//{
//	struct ListNode* slow = head, *fast = head;
//	while (fast != NULL && fast->next != NULL)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	return slow;
//}

////21. 合并两个有序链表
//#include<stdio.h>
////https://leetcode-cn.com/problems/merge-two-sorted-lists/
////struct ListNode {
////	int val;
////	struct ListNode *next;
////};
////struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
////{
////	if (l1 == NULL || l2 == NULL)
////		return l1 == NULL ? l2 : l1;
////	struct ListNode* head = NULL;
////	if (l1->val < l2->val)
////	{
////		head = l1;
////		l1 = l1->next;
////	}
////	else
////	{
////		head = l2;
////		l2 = l2->next;
////	}
////	struct ListNode* cur = head;
////	while (l1 != NULL && l2 != NULL)
////	{
////		if (l1->val < l2->val)
////		{
////			cur->next = l1;
////			cur = l1;
////			l1 = l1->next;
////		}
////		else
////		{
////			cur->next = l2;
////			cur = l2;
////			l2 = l2->next;
////		}
////	}
////	if (l1 == NULL)
////		cur->next = l2;
////	if (l2 == NULL)
////		cur->next = l1;
////	return head;
////}
//
////带哨兵位的头节点
//struct ListNode {
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
//{
//	struct ListNode newhead;
//	struct ListNode* cur = &newhead;
//	while (l1 != NULL && l2 != NULL)
//	{
//		if (l1->val > l2->val)
//		{
//			cur->next = l2;
//			cur = l2;
//			l2 = l2->next;
//		}
//		else
//		{
//			cur->next = l1;
//			cur = l1;
//			l1 = l1->next;
//		}
//	}
//	if (l1 == NULL)
//		cur->next = l2;
//	if (l2 == NULL)
//		cur->next = l1;
//	return newhead.next;
//}


////环形链表
//#include<stdio.h>
//#include<stdbool.h>
//struct ListNode {
//	int val;
//	struct ListNode *next;
//};
//
//bool hasCycle(struct ListNode *head)
//{
//	struct ListNode* fast = head, *slow = head;
//	while (fast != NULL && fast->next != NULL)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//		if (fast == slow)
//			return true;
//	}
//	return false;
//}


//142. 环形链表 II
#include<stdio.h>
struct ListNode
{
	int val;
	struct ListNode *next
};
struct ListNode *detectCycle(struct ListNode *head)
{
	struct ListNode* fast = head, *slow = head;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
			break;
	}
	//到这分为两种情况1是fast为空了，或找到了相遇点
	if (fast == NULL || fast->next == NULL)
		return NULL;
	struct ListNode* cur = head;
	while (cur != slow)
	{
		cur = cur->next;
		slow = slow->next;
	}
	return cur;
}