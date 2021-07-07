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


//#include<stdio.h>
////double myPow(double x, int n)
////{
////	long long i = 0;
////	int pos = n;
////	int flag = 0;
////	if (n % 2)
////		flag = 1;
////	n /= 2;
////	double sum = 1, tmp = 1;
////	if (pos < 0 )
////	{
////		for (i = n; i < 0; i++)
////		{
////			tmp *= x;
////		}
////		tmp *= tmp;
////		if (flag)
////			tmp *= x;
////		sum = 1 / tmp;
////	}
////	else
////	{
////		for (i = 0; i < n; i++)
////		{
////			sum *= x;
////		}
////		sum *= sum;
////		if (flag)
////			sum *= x;
////	}
////	return sum;
////}
//
//double myPow(double x, int n)
//{
//	double sum = 1;
//	int flag = n;
//	while (flag)
//	{
//		if (flag % 2)
//		{
//			sum *= x;
//		}
//		flag /= 2;
//		x *= x;
//	}
//	if (n < 0)
//		sum /= 1.0;
//	return sum;
//}
//int main()
//{
//	double x = 0;
//	int n = 0;
//	printf("请输入x和n");
//	scanf("%lf %d", &x, &n);
//	printf("%lf", myPow(x, n));
//	return 0;
//}


//#include<stdio.h>
//int search(int* nums, int numsSize, int target)
//{
//	int left = 0, right = numsSize - 1;
//	int sub = -1;
//	while (left <= right)
//	{
//		int min = (left + right) / 2;
//		if (nums[min] == target)
//		{
//			sub = min;
//			break;
//		}
//		if (nums[min] < target)
//			left = min + 1;
//		else
//			right = min - 1;
//	}
//	return sub;
//}
//int main()
//{
//	int arr[] = { -1,0,3,5,9,12 };
//	int target = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int sub = search(arr, sz, target);
//	printf("%d", sub);
//	return 0;
//}

////剑指 Offer 51. 数组中的逆序对
//#include<stdio.h>
////暴力超时
//int reversePairs(int* nums, int numsSize)
//{
//	int count = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		for (int j = i + 1; j < numsSize; j++)
//		{
//			if (nums[i] > nums[j])
//				count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int arr[] = { 7,5,6,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int count = reversePairs(arr, sz);
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
///*利用归并排序思想*/
//int _Merge(int*nums, int left, int right, int* arr)
//{
//	int count = 0;
//	if (left == right)
//		return 0;
//	int min = left + (right - left) / 2;
//	int begin1 = left, end1 = min;
//	int begin2 = min + 1, end2 = right;
//	int count1 = _Merge(nums, begin1, end1, arr);
//	int count2 = _Merge(nums, begin2, end2, arr);
//
//	//排序
//	int insert = left;
//	while (begin1 <= end1 && begin2 <= end2)
//	{
//		if (nums[begin1] > nums[begin2])
//		{
//			arr[insert++] = nums[begin2];
//			begin2++;
//			count += min - begin1 + 1;
//		}
//		else
//		{
//			arr[insert++] = nums[begin1];
//			begin1++;
//		}
//	}
//	while (begin1 <= end1)
//	{
//		arr[insert++] = nums[begin1];
//		begin1++;
//	}
//	while (begin2 <= end2)
//	{
//		arr[insert++] = nums[begin2];
//		begin2++;
//	}
//	for (int i = left; i <= right; i++)
//		nums[i] = arr[i];
//	return count1 + count2 + count;
//}
//int reversePairs(int* nums, int numsSize)
//{
//	if (numsSize < 2)
//		return 0;
//	int left = 0, right = numsSize - 1;
//	int* arr = malloc(sizeof(int)*numsSize);
//	int count = _Merge(nums, left, right, arr);
//	return count;
//}
//int main()
//{
//	int arr[] = { 7,5,6,4,3,1,6,8,9,2,3,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int count = reversePairs(arr, sz);
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n%d", count);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
////利用归并思想
////977.有序数组的平方
//int* sortedSquares(int* nums, int numsSize, int* returnSize)
//{
//	int sep = -1;
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] < 0)
//			sep = i;
//		else
//			break;
//	}
//	int* ret = malloc(sizeof(int)*numsSize);
//	assert(ret);
//	*returnSize = 0;
//	int i = sep, j = sep + 1;
//	while (i >= 0 || j < numsSize)
//	{
//		if (i < 0)
//		{
//			ret[(*returnSize)++] = nums[j] * nums[j];
//			j++;
//		}
//		else if (j == numsSize)
//		{
//			ret[(*returnSize)++] = nums[i] * nums[i];
//			i--;
//		}
//		else if (nums[i] * nums[i] < nums[j] * nums[j])
//		{
//			ret[(*returnSize)++] = nums[i] * nums[i];
//			i--;
//		}
//		else
//		{
//			ret[(*returnSize)++] = nums[j] * nums[j];
//			j++;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { -4,-1,0,3,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int returnSize = 0;
//	int* ret = sortedSquares(arr, sz, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//		printf("%d ", ret[i]);
//	free(ret);
//	return 0;
//}

////189. 旋转数组
//#include<stdio.h>
//void reverse(int* nums, int left, int right)
//{
//	while (left < right)
//	{
//		int tmp = nums[left];
//		nums[left] = nums[right];
//		nums[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void rotate(int* nums, int numsSize, int k)
//{
//	k %= numsSize;
//	reverse(nums, 0, numsSize - 1);//先整体翻转,在对左右区间进行翻转
//	reverse(nums, 0, k - 1);
//	reverse(nums, k, numsSize - 1);
//}
//int main()
//{
//	int arr[] = { -1,-100,3,99 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 2;
//	rotate(arr, sz, k);
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize)
//{
//	if (numsSize == 0)
//		return NULL;
//	int* ret = malloc(sizeof(int)*(numsSize - k + 1));
//	int prev = 0, cur = k - 1;
//	*returnSize = 0;
//	while (cur < numsSize)
//	{
//		int max = nums[cur];
//		int flag = prev;
//		while (flag <= cur)
//		{
//			if (nums[flag] > max)
//				max = nums[flag];
//			flag++;
//		}
//		ret[(*returnSize)++] = max;
//		cur++;
//		prev++;
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,3,-1,-3,5,3,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int returnSize = 0;
//	int k = 3;
//	int* ret = maxSlidingWindow(arr, sz, k, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//		printf("%d ", ret[i]);
//	free(ret);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
//{
//	struct ListNode* head = NULL, *tail = NULL;
//	int carry = 0;
//	while (l1 || l2)
//	{
//		int sum = 0;
//		int sum1 = l1 ? l1->val : 0;
//		int sum2 = l2 ? l2->val : 0;
//		sum = sum1 + sum2 + carry;
//
//		if (head == NULL)
//		{
//			head = (struct ListNode*)malloc(sizeof(struct ListNode));
//			head->val = sum % 10;
//			head->next = NULL;
//			tail = head;
//		}
//		else
//		{
//			tail->next = (struct ListNode*)malloc(sizeof(struct ListNode));
//			tail->next->val = sum % 10;
//			tail->next->next = NULL;
//			tail = tail->next;
//		}
//		if (l1)
//			l1 = l1->next;
//		if (l2)
//			l2 = l2->next;
//		if (sum / 10)
//			carry = 1;
//		else
//			carry = 0;
//	}
//	if (carry)
//	{
//		tail->next = (struct ListNode*)malloc(sizeof(struct ListNode));
//		tail->next->next = NULL;
//		tail->next->val = 1;
//	}
//	return head;
//}
//int main()
//{
//	struct ListNode* p1 = malloc(sizeof(struct ListNode));
//	p1->val = 2;
//	struct ListNode* p2 = malloc(sizeof(struct ListNode));
//	p2->val = 4;
//	struct ListNode* p3 = malloc(sizeof(struct ListNode));
//	p3->val = 3;
//	struct ListNode* p4 = malloc(sizeof(struct ListNode));
//	p4->val = 5;
//	struct ListNode* p5 = malloc(sizeof(struct ListNode));
//	p5->val = 6;
//	struct ListNode* p6 = malloc(sizeof(struct ListNode));
//	p6->val = 4;
//	p1->next = p2;
//	p2->next = p3;
//	p3->next = NULL;
//
//	p4->next = p5;
//	p5->next = p6;
//	p6->next = NULL;
//	struct ListNode* sum = addTwoNumbers(p1, p4);
//	while (sum)
//	{
//		printf("%d ", sum->val);
//		sum = sum->next;
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
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
//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
//{
//	*returnSize = 0;
//	if (nums1Size ==0 || nums2Size == 0)
//		return NULL;
//	Sort(nums1, nums1Size);
//	Sort(nums2, nums2Size);
//	int*  ret = malloc(sizeof(int)*(nums1Size < nums2Size ? nums1Size : nums2Size));
//	int cur1 = 0, cur2 = 0;
//	while (cur1 < nums1Size && cur2 < nums2Size)
//	{
//		if (nums1[cur1] < nums2[cur2])
//			cur1++;
//		else if (nums1[cur1] == nums2[cur2])
//		{
//			if (!(*returnSize) || ret[(*returnSize) - 1] != nums1[cur1])
//				ret[(*returnSize)++] = nums1[cur1];
//			cur1++;
//			cur2++;
//		}
//		else
//			cur2++;
//	}
//	return ret;
//}
//int main()
//{
//	int nums1[] = { 1,2,2,1 };
//	int nums2[] = { 2,2 };
//	int sz1 = sizeof(nums1) / sizeof(nums1[0]);
//	int sz2 = sizeof(nums2) / sizeof(nums2[0]);
//	int returnSize = 0;
//	int* ret = intersection(nums1, sz1, nums2, sz2, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//	{
//		printf("%d ", ret[i]);
//	}
//	free(ret);
//	return 0;
//}


//#include<stdio.h>
//void Sort(int* nums, int numsSize)
//{
//	for (int i = 0; i < numsSize - 1; i++)
//	{
//		int end = i, flag = nums[end + 1];
//		while (end >= 0)
//		{
//			if (nums[end] > flag)
//			{
//				nums[end + 1] = nums[end];
//				end--;
//			}
//			else
//				break;
//		}
//		nums[end + 1] = flag;
//	}
//
//}
//int maxProduct(int* nums, int numsSize)
//{
//	Sort(nums, numsSize);
//	return (nums[numsSize - 1] - 1)*(nums[numsSize - 2] - 1);
//}
//int main()
//{
//	int nums[] = { 3,4,5,2 };
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int max = maxProduct(nums, sz);
//	printf("%d ", max);
//	return 0;
//}


#include<stdio.h>
//void Sort(int* nums, int numsSize)
//{
//	for (int i = 0; i < numsSize - 1; i++)
//	{
//		int end = i, flag = nums[end + 1];
//		while (end >= 0)
//		{
//			if (nums[end] < flag)
//			{
//				nums[end + 1] = nums[end];
//				end--;
//			}
//			else
//				break;
//		}
//		nums[end + 1] = flag;
//	}
//}
//int findKthLargest(int* nums, int numsSize, int k)
//{
//	Sort(nums, numsSize);
//	return nums[k - 1];
//}


////34. 在排序数组中查找元素的第一个和最后一个位置
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//int LeftFind(int* nums, int numsSize, int target)
//{
//	int left = 0, right = numsSize - 1;
//	while (left < right)
//	{
//		int min = left + ((right - left) >> 1);
//		if (nums[min] > target)
//		{
//			right = min - 1;
//		}
//		else if (nums[min] == target)
//		{
//			right = min;
//		}
//		else
//			left = min + 1;
//	}
//	if (nums[left] == target)
//		return left;
//	else
//		return-1;
//}
//
//int RightFind(int* nums, int numsSize, int target)
//{
//	int left = 0, right = numsSize - 1;
//	while (left <= right)
//	{
//		int min = left + ((right - left) >> 1);
//		if (nums[min] > target)
//		{
//			right = min - 1;
//		}
//		else if (nums[min] < target)
//		{
//			left = min + 1;
//		}
//		else
//		{
//			left = min;
//			//当区间内只有两个数据时，判断这个数是否相等
//			if (min == right - 1 && nums[right] != target)
//				return min;
//			else if (nums[min] == nums[right])
//				return right;
//		}
//	}
//	return -1;
//}
//int* searchRange(int* nums, int numsSize, int target, int* returnSize)
//{
//	*returnSize = 2;
//	int* ret = malloc(sizeof(int) * 2);
//	assert(ret);
//	ret[0] = -1;
//	ret[1] = -1;
//	if (numsSize <= 0)
//		return ret;
//	ret[0] = LeftFind(nums, numsSize, target);
//	ret[1] = RightFind(nums, numsSize, target);
//	return ret;
//}
//int main()
//{
//	int arr[] = { 5,7,7,8,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int returnSize = 0;
//	int target = 8;
//	int* ret = searchRange(arr, sz, target, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//		printf("%d ", ret[i]);
//	free(ret);
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
void AdjustDown(int * retarr, int root, int size)
{
	//小顶锥
	int child = root * 2 + 1;//默认为左孩子
	int parent = root;
	while (child < size)
	{
		if (child + 1 < size && retarr[child] > retarr[child + 1])
		{
			child = child + 1;
		}
		if (retarr[parent] > retarr[child])
		{
			int tmp = retarr[parent];
			retarr[parent] = retarr[child];
			retarr[child] = tmp;

			parent = child;
			child = child * 2 + 1;
		}
		else
			break;
	}
}
int findKthLargest(int* nums, int numsSize, int k)
{
	int* arr = malloc(sizeof(int)*k);
	for (int i = 0; i < k; i++)
	{
		arr[i] = nums[i];
	}
	for (int i = (k - 2) / 2; i >= 0; i--)
	{
		//调整
		AdjustDown(arr, i, k);
	}

	for (int i = k; i < numsSize; i++)
	{
		if (nums[i] > arr[0])
		{
			arr[0] = nums[i];
		}
		AdjustDown(arr, 0, k);
	}
	return arr[0];
}
int main()
{
	int arr[] = { 3,2,3,1,2,4,5,5,6 };
	int k = 4;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = Sort(arr, sz, k);
	printf("%d", ret);
	return 0;
}