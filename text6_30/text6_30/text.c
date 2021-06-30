#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
////剑指 Offer 45. 把数组排成最小的数
//int montage(int a, int b)
//{
//	//char arr1[20] = " ";//a转化为字符型
//	//char arr2[20] = " ";//b转化为字符型
//	//sprintf(arr1, "%d", a);
//	//sprintf(arr2, "%d", b);
//	//char arr3[40] = " ";//存放a和b拼接后的字符串
//	//char arr4[40] = " ";//b和a拼接后的字符串
//	//strncat(arr3, arr1, strlen(arr1));
//	//strncat(arr3, arr2, strlen(arr2));
//
//	//strncat(arr4, arr2, strlen(arr2));
//	//strncat(arr4, arr1, strlen(arr1));
//
//	char arr1[40] = " ";//存放a和b拼接后的字符串
//	char arr2[40] = " ";//b和a拼接后的字符串
//	sprintf(arr1, "%d", a);
//	sprintf(arr2, "%d", b);
//	int size1 = strlen(arr1);
//	int size2 = strlen(arr2);
//	strncat(arr1, arr2, size2);
//	strncat(arr2, arr1, size1);
//	return strcmp(arr1, arr2);
//}
//void Sort(int* arr, int n)
//{
//	int* tmp = malloc(sizeof(int) * 100);
//	for (int i = 0; i < n - 1; i++)
//	{
//		int end = i, flag = arr[i + 1];
//		while (end >= 0)
//		{
//			if (montage(arr[end], flag) > 0)
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
//char* minNumber(int* nums, int numsSize)
//{
//	Sort(nums, numsSize);
//	char* ret = malloc(sizeof(char) * 1000);
//	memset(ret, 0, 1000);//对开辟的空间赋值为0
//	for (int i = 0; i < numsSize; i++)
//	{
//		char arr[20] = " ";
//		sprintf(arr, "%d", nums[i]);
//		strncat(ret, arr, strlen(arr));
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 3,30,34,5,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	char* ret = minNumber(arr, sz);
//	printf("%s", ret);
//	free(ret);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//int* singleNumbers(int* nums, int numsSize, int* returnSize)
//{
//	int result = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		result ^= nums[i];
//	}
//	int sz = sizeof(int) * 8;
//	int i = 0;
//	int flag = 1;
//	while (i < sz)
//	{
//		//找result中1所在的位
//		if (result & flag)
//			break;
//		i++;
//		result >>= 1;
//	}
//	int group1 = 0, group2 = 0;
//	for (int j = 0; j < numsSize; j++)
//	{
//		//根据result中1 所在的位将数组 分为2组
//		if ((nums[j] >> i) & 1)
//		{
//			group1 ^= nums[j];
//		}
//		else
//			group2 ^= nums[j];
//	}
//	int* ret = malloc(sizeof(int) * 2);
//	assert(ret);
//	ret[0] = group1;
//	ret[1] = group2;
//	*returnSize = 2;
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,10,4,1,4,3,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int returnSize = 0;
//	int* ret = singleNumbers(arr, sz, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//		printf("%d ", ret[i]);
//	free(ret);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int singleNumber(int* nums, int numsSize)
//{
//	int arr[32] = { 0 };
//	for (int i = 0; i < numsSize; i++)
//	{
//		int flag = 31;
//		int tmp = nums[i];
//		while (flag >= 0)
//		{
//			if (tmp & 1)
//			{
//				arr[flag]++;
//			}
//			flag--;
//			tmp >>= 1;
//		}
//	}
//	int sum = 0;
//	for (int i = 31; i >= 0; i--)
//	{
//		if (arr[i] % 3 == 0)
//		{
//			arr[i] = 0;
//		}
//		else
//		{
//			arr[i] = 1;
//			sum += (int)pow(2, 31 - i);
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int arr[] = { 3,4,3,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int flag = singleNumber(arr, sz);
//	printf("%d", flag);
//	return 0;
//}

//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* removeDuplicateNodes(struct ListNode* head)
//{
//	struct ListNode* cur = head;
//	while (cur)
//	{
//		struct ListNode* oc = cur;
//		while (oc->next)
//		{
//			if (oc->next->val == cur->val)
//			{
//				oc->next = oc->next->next;
//			}
//			else
//				oc = oc->next;
//		}
//		cur = cur->next;
//	}
//	return head;
//}


//#include<stdio.h>
//#include<stdlib.h>
////void merge(int* A, int ASize, int m, int* B, int BSize, int n)
////{
////	int begin1 = 0, begin2 = 0;
////	int cur = m + n - 1;
////	int* ret = malloc(sizeof(int)*(m + n));
////
////	while (begin1 < m && begin2 < n)
////	{
////		if (A[begin1] > B[begin2])
////		{
////			ret[cur--] = B[begin2++];
////		}
////		else
////		{
////			ret[cur--] = A[begin1++];
////		}
////	}
////	while (begin1 < m)
////	{
////		ret[cur--] = A[begin1++];
////	}
////	while (begin2 < n)
////	{
////		ret[cur--] = B[begin2++];
////	}
////	int flag = 0;
////	for (int i = m + n - 1; i >= 0; i--)
////	{
////		A[flag++] = ret[i];
////	}
////	free(ret);
////}
//void sort(int* arr, int n)
//{
//	for (int i = 0; i < n - 1; i++)
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
//void merge(int* A, int ASize, int m, int* B, int BSize, int n)
//{
//	int cur = m;
//	for (int i = 0; i < n; i++)
//	{
//		A[cur++] = B[i];
//	}
//	sort(A, m + n);
//}
//int main()
//{
//	int arr1[6] = { 1,2,3,0,0,0 };
//	int arr2[] = { 2,5,6 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	merge(arr1, sz1, 3, arr2, sz2, 3);
//	for (int i = 0; i < sz1; i++)
//		printf("%d ", arr1[i]);
//	return 0;
//}

#include"Queue.h"
int* levelOrder(struct TreeNode* root, int* returnSize)
{
	if (root == NULL)
		return NULL;
	Queue Q;
	QueueInit(&Q);
	QueuePush(&Q, root);
	int* ret = malloc(sizeof(int) * 1000);
	while (!QueueEmpty(&Q))
	{
		TreeNode* data = QueueTop(&Q);
		ret[*returnSize++] = data->val;
		QueuePush(&Q, data->left);
		QueuePush(&Q, data->right);
		QueuePop(&Q);
	}
	return ret;
}
int main()
{

}