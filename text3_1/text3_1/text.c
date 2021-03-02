
//大数相加
//#include<stdio.h>
//#include<stdlib.h>
//void* add(int* numsA, int numsASize, int* numsB, int numsBSize,int* returnSize)
//{
//	//判断需要开辟的空间大小
//	int size = numsASize > numsBSize ? numsASize : numsBSize;
//	int* retArr = malloc(sizeof(int)*(size + 1));
//	if (!retArr)
//		exit(-1);
//	int Ai = numsASize - 1;
//	int Bi = numsBSize - 1;
//
//	*returnSize = 0;
//
//	int sumnext = 0;
//	while (size--)
//	{
//		int a = 0, b = 0;
//		//防止越界访问
//		if (Ai >= 0)
//		{
//			a = numsA[Ai];
//			Ai--;
//		}
//		if (Bi >= 0)
//		{
//			b = numsB[Bi];
//			Bi--;
//		}
//
//		int ret = a + b + sumnext;
//		//判断是否有进位
//		if (ret > 9)
//		{
//			ret = ret - 10;
//			sumnext = 1;
//		}
//		else
//		{
//			sumnext = 0;
//		}
//		retArr[*returnSize] = ret;
//		(*returnSize)++;
//	}
//	//判断当最后一个数加完后是否需要进位
//	if (sumnext == 1)
//	{
//		retArr[*returnSize] = 1;
//		(*returnSize)++;
//	}
//	//把数组中的数据倒序
//	int left = 0, right = (*returnSize) - 1;
//	while (left < right)
//	{
//		int tmp = retArr[left];
//		retArr[left] = retArr[right];
//		retArr[right] = tmp;
//		left++;
//		right--;
//	}
//	return retArr;
//}
//int main()
//{
//	int arr1[] = { 9,9,9,9,9,9,9,9,9,9 };
//	int arr2[] = { 1 };
//	int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
//	int arr2Size = sizeof(arr2) / sizeof(arr2[0]);
//	int size = 0;
//	int* arr = add(arr1, arr1Size, arr2, arr2Size, &size);
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	free(arr);
//	arr = NULL;
//	return 0;
//}


////删除链表中等于给定值 val 的所有节点。
////https://leetcode-cn.com/problems/remove-linked-list-elements/
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode *next;
//
//}ListNode;
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	//防止头结点包含
//	while (head != NULL && head->val == val)
//	{
//		head = head->next;
//	}
//	struct ListNode* tmp = head;
//	while (tmp != NULL)
//	{
//		if (tmp->next != NULL && tmp->next->val == val)
//		{
//			tmp->next = tmp->next->next;
//		}
//		else
//		{
//			tmp = tmp->next;
//		}
//	}
//	return head;
//}
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode *next;
//
//}ListNode;
////哨兵法
////利用双指针
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	//检测头结点是否包含val
//	while (head != NULL && head->val == val)
//	{
//		head = head->next;
//	}
//	struct ListNode* prev = NULL;
//	struct ListNode* cur = NULL;
//	//防止越界访问
//	if (head != NULL)
//	{
//		prev = head;
//		cur = head->next;
//	}
//
//	while (cur != NULL && prev != NULL)
//	{
//		if (cur->val == val)
//		{
//			prev->next = cur->next;
//			cur = prev->next;
//		}
//		else
//		{
//			cur = cur->next;
//			prev = prev->next;
//		}
//	}
//	return head;
//}



////反转链表------利用双指针
////https://leetcode-cn.com/problems/reverse-linked-list/
//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode* next;
//};
//struct ListNode* reverseList(struct ListNode* head)
//{
//	struct ListNode* pre = NULL, *cur = head, *tmp = NULL;
//	//当cur指向空指针时停止
//	while (cur)
//	{
//		tmp = cur->next;
//		//翻转
//		cur->next = pre;
//
//		//调整指针的位置
//		pre = cur;
//		cur = tmp;
//	}
//	return pre;
//}
//
//struct ListNode* reverseList(struct ListNode* head)
//{
//	//利用头插法
//	struct ListNode* newHead = NULL;
//	while (head != NULL)
//	{
//		struct ListNode* next = head->next;
//		head->next = newHead;
//		newHead = head;
//		head = next;
//	}
//	return newHead;
//}

//int main()
//{
//	return 0;
//}


////快慢指针
//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//	
//};
//struct ListNode* middleNode(struct ListNode* head)
//{
//	struct ListNode* slow = head, *fast = head;
//	while (fast)
//	{
//		if (fast->next == NULL)
//		{
//			return slow;
//		}
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	return slow;
//}
//
////struct ListNode* middleNode(struct ListNode* head)
////{
////	int count = 0;
////	struct ListNode* tmp = head;
////	//遍历出整个链表的大小
////	while (tmp)
////	{
////		count++;
////		tmp = tmp->next;
////	}
////	//当链表的大小为偶数是 中间的节点为两个  count/2 +1就是中间的第2个节点
////
////	//当大小为奇数时 count/2  +1得到的就是中间的节点
////	//当找第n个节点时只需要访问n-1个节点，就可以得到第n个节点的地址
////
////	count = count / 2; // count = count / 2 +1 ;
////	//找中间的节点
////	while (count--)   //while( ( count -1 )--)
////	{
////		head = head->next;
////	}
////	return head;
////}
//int main()
//{
//	return 0;
//}


//21. 合并两个有序链表
//https://leetcode-cn.com/problems/merge-two-sorted-lists/
//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
//{
//	if (l1 == NULL || l2 == NULL)
//		return  l1 != NULL ? l1 : l2;
//	struct ListNode* head;
//	struct ListNode* cur;
//	if ((l1->val > l2->val))
//	{
//		head = l2;
//		l2 = l2->next;
//	}
//	else
//	{
//		head = l1;
//		l1 = l1->next;
//	}
//	cur = head;
//	while (l1 != NULL && l2 != NULL)
//	{
//		if (l1->val > l2->val)
//		{
//			cur->next = l2;
//			l2 = l2->next;
//			cur = cur->next;
//		}
//		else
//		{
//			cur->next = l1;
//			l1 = l1->next;
//			cur = cur->next;
//		}
//	}
//
//	if (l1)
//		cur->next = l1;
//	else
//		cur->next = l2;
//	return head;
//}


////输入一个链表，输出该链表中倒数第k个结点。
////https://www.nowcoder.com/practice/529d3ae5a407492994ad2a246518148a?tab=answerKey
#include<stdio.h>
#include<stdlib.h>
struct ListNode
{
	int val;
	struct ListNode *next;
};
////struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
////{
////	struct ListNode* slow = pListHead, *fast = pListHead;
////	while (fast != NULL)
////	{
////		if (fast == pListHead)
////		{
////			while (k--)
////			{
////				if (fast)
////				{
////					fast = fast->next;
////				}
////				else
////					return NULL;
////			}
////		}
////		if (fast)
////		{
////			slow = slow->next;
////			fast = fast->next;
////		}
////	}
////	return slow;
////}

struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
{
	struct ListNode* slow = pListHead, *fast = pListHead;
	while (k--)
	{
		if (fast)
		{
			fast = fast->next;
		}
		else
			return NULL;
	}
	while (fast)
	{
		fast = fast->next;
		slow = slow->next;
	}
	return slow;
}

int main()
{
	struct ListNode* p1 = malloc(sizeof(struct ListNode));
	p1->val = 1;
	struct ListNode* p2 = malloc(sizeof(struct ListNode));
	p2->val = 2;
	struct ListNode* p3 = malloc(sizeof(struct ListNode));
	p3->val = 3;
	struct ListNode* p4 = malloc(sizeof(struct ListNode));
	p4->val = 4;
	struct ListNode* p5 = malloc(sizeof(struct ListNode));
	p5->val = 5;
	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = p5;
	p5->next = NULL;

	struct ListNode* arr = FindKthToTail(p1, 4);
	while (arr != NULL)
	{
		printf("%d ", arr->val);
		arr = arr->next;
	}
	return 0;
}