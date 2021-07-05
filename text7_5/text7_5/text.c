//#include<stdio.h>
////方法一
////int maxProfit(int* prices, int pricesSize)
////{
////	if (pricesSize < 2)
////		return 0;
////	int max = prices[1] - prices[0];
////	for (int i = 0; i < pricesSize - 1; i++)
////	{
////		for (int j = i + 1; j < pricesSize; j++)
////		{
////			int sum = prices[j] - prices[i];
////			if (sum > max)
////				max = sum;
////		}
////	}
////	if (max > 0)
////		return max;
////	else
////		return 0;
////}
//
////方法二
//int maxProfit(int* prices, int pricesSize)
//{
//	if (pricesSize < 2)
//		return 0;
//	int min = prices[0];
//	int Maxsum = 0;
//	for (int i = 0; i < pricesSize; i++)
//	{
//		if (prices[i] < min)//找出已经遍历过的数组中最小的值
//			min = prices[i];
//		else if (Maxsum < (prices[i] - min))
//			Maxsum = prices[i] - min;
//	}
//	return Maxsum;
//}
//int main()
//{
//	int arr[] = { 7, 2,4,3,1,0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int max = maxProfit(arr, size);
//	printf("%d", max);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//typedef struct Node
//{
//	int val;
//	struct Node* next;
//	struct Node* random;
//}Node;
//Node* copyRandomList(Node* head)
//{
//	Node* cur = head;
//	while (cur)
//	{
//		Node* NewNode = malloc(sizeof(Node));
//		NewNode->val = cur->val;
//		NewNode->random = NULL;
//
//		NewNode->next = cur->next;
//
//		cur->next = NewNode;
//
//		cur = NewNode->next;
//	}
//	cur = head;
//	while (cur)
//	{
//		if (cur->random)
//		{
//			cur->next->random = cur->random->next;
//		}
//		cur = cur->next->next;
//	}
//	//断开
//	Node* res = head->next;
//	Node* prev = head;
//	cur = head->next;
//	while (cur->next)
//	{
//		prev->next = cur->next;
//		cur->next = cur->next->next;
//
//		prev = prev->next;
//		cur = cur->next;
//	}
//	prev->next = cur->next;
//	return res;
//}


#include<stdio.h>
double myPow(double x, int n)
{
	long long i = 0;
	int pos = n;
	int flag = 0;
	if (n % 2)
		flag = 1;
	n /= 2;
	double sum = 1, tmp = 1;
	if (pos < 0 )
	{
		for (i = n; i < 0; i++)
		{
			tmp *= x;
		}
		tmp *= tmp;
		if (flag)
			tmp *= x;
		sum = 1 / tmp;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum *= x;
		}
		sum *= sum;
		if (flag)
			sum *= x;
	}
	return sum;
}
int main()
{
	return 0;
}