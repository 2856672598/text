
//�������
//#include<stdio.h>
//#include<stdlib.h>
//void* add(int* numsA, int numsASize, int* numsB, int numsBSize,int* returnSize)
//{
//	//�ж���Ҫ���ٵĿռ��С
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
//		//��ֹԽ�����
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
//		//�ж��Ƿ��н�λ
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
//	//�жϵ����һ����������Ƿ���Ҫ��λ
//	if (sumnext == 1)
//	{
//		retArr[*returnSize] = 1;
//		(*returnSize)++;
//	}
//	//�������е����ݵ���
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


////ɾ�������е��ڸ���ֵ val �����нڵ㡣
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
//	//��ֹͷ������
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
////�ڱ���
////����˫ָ��
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	//���ͷ����Ƿ����val
//	while (head != NULL && head->val == val)
//	{
//		head = head->next;
//	}
//	struct ListNode* prev = NULL;
//	struct ListNode* cur = NULL;
//	//��ֹԽ�����
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


////��ת����------����˫ָ��
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
//	//��curָ���ָ��ʱֹͣ
//	while (cur)
//	{
//		tmp = cur->next;
//		//��ת
//		cur->next = pre;
//
//		//����ָ���λ��
//		pre = cur;
//		cur = tmp;
//	}
//	return pre;
//}
//int main()
//{
//	return 0;
//}


#include<stdio.h>
struct ListNode
{
	int val;
	struct ListNode *next;
	
};
struct ListNode* middleNode(struct ListNode* head)
{
	struct ListNode* slow = head, *fast = head;
	while (fast->next)
	{
		if (fast->next->next == NULL)
		{
			return slow;
		}
		fast = fast->next;
		slow = slow->next;
	}
	return slow;
}

//struct ListNode* middleNode(struct ListNode* head)
//{
//	int count = 0;
//	struct ListNode* tmp = head;
//	//���������������Ĵ�С
//	while (tmp)
//	{
//		count++;
//		tmp = tmp->next;
//	}
//	//�������Ĵ�СΪż���� �м�Ľڵ�Ϊ����  count/2 +1�����м�ĵ�2���ڵ�
//
//	//����СΪ����ʱ count/2  +1�õ��ľ����м�Ľڵ�
//	//���ҵ�n���ڵ�ʱֻ��Ҫ����n-1���ڵ㣬�Ϳ��Եõ���n���ڵ�ĵ�ַ
//
//	count = count / 2; // count = count / 2 +1 ;
//	//���м�Ľڵ�
//	while (count--)   //while( ( count -1 )--)
//	{
//		head = head->next;
//	}
//	return head;
//}
int main()
{
	return 0;
}