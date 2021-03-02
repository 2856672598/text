
//链表分割
#include<stdio.h>
#include<stdlib.h>
struct ListNode {
	int val;
	struct ListNode *next;
};
struct ListNode* partition(struct ListNode* pHead, int x)
{
	struct ListNode* lesst, *greate, *l1, *l2, *head;
	//开辟两个哨兵链表
	l1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	l2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	lesst = l1;
	greate = l2;
	while (pHead)
	{
		if (pHead->val >= x)
		{
			//大于时，直接头插
			greate->next = pHead;
			greate = pHead;
		}
		else
		{
			lesst->next = pHead;
			lesst = pHead;
		}
		pHead = pHead->next;
	}
	//将小于x的部分和大于等于的部分连在一起
	greate->next = NULL;
	lesst->next = l2->next;
	head = l1->next;
	free(l1);
	free(l2);
	return head;
}
int main()
{
	return 0;
}