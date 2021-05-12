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

//876. 链表的中间结点
//https://leetcode-cn.com/problems/middle-of-the-linked-list/
#include<stdio.h>
struct ListNode
{
	int val;
	struct ListNode *next;
};
struct ListNode* middleNode(struct ListNode* head)
{
	struct ListNode* slow = head, *fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}