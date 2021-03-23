#define _CRT_SECURE_NO_WARNINGS

////https://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof/submissions/
//#include<stdio.h>
//#include<malloc.h>
////时间复杂度是O（n^2)
////int findRepeatNumber(int* nums, int numsSize)
////{
////	for (int i = 0; i < numsSize; i++)
////	{
////		for (int j = i+1; j < numsSize; j++)
////		{
////			if (nums[i] == nums[j])
////				return nums[i];
////		}
////	}
////	return -1;
////}
////int findRepeatNumber(int* nums, int numsSize)
////{
////	int* arr = calloc(numsSize, sizeof(int));
////	for (int i = 0; i < numsSize; i++)
////	{
////		arr[nums[i]] += 1;
////		if (arr[nums[i]] == 2)
////		{
////			free(arr);
////			return nums[i];
////		}
////	}
////	free(arr);
////	return -1;
////}
//
////原地比较
//int findRepeatNumber(int* nums, int numsSize)
//{
//	for (int i = 0; i < numsSize; i++)
//	{
//		//先进行排序
//		while (nums[i] != i)
//		{
//			//判断是否重复
//			if (nums[i] == nums[nums[i]])
//				return nums[i];
//			int tmp = nums[i];
//			nums[i] = nums[tmp];
//			nums[tmp] = tmp;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int nums[] = { 0, 1, 2, 3, 4, 11, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int len = findRepeatNumber(nums, size);
//	printf("%d", len);
//	return 0;
//}


//#include<stdbool.h>
//#include<stdio.h>
//bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target)
//{
//	if (matrixSize == 0 || *matrixColSize == 0)
//		return false;
//	int i = 0, j = (*matrixColSize) - 1;
//	while (j >= 0 && i < matrixSize)
//	{
//		if (matrix[i][j] < target)
//			i++;
//		else if (matrix[i][j] > target)
//			j--;
//		else
//			return true;
//	}
//	return false;
//}
//int main()
//{
//	int arr = NULL;
//	int *matrix = arr;
//	int len = 0;
//	findNumberIn2DArray(&matrix, 0, &len, 0);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//char* replaceSpace(char* s)
//{
//	if (s == NULL)
//		return NULL;
//	char* head = calloc(strlen(s)*3+1, sizeof(char));
//	int i = 0, k = 0;
//	for (i = 0; i < (int)strlen(s); i++)
//	{
//		if (s[i] == ' ')
//		{
//			head[k] = '%';
//			head[k + 1] = '2';
//			head[k + 2] = '0';
//			k += 2;
//		}
//		else
//			head[k] = s[i];
//		k++;
//	}
//	//结束后在字符串的末尾添加个\0；
//	head[k] = '\0';
//	return head;
//}
//int main()
//{
//	char arr[] = "     ";
//	int size = strlen(arr);
//	char* len = replaceSpace(arr);
//	printf("%s", len);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//int* reversePrint(struct ListNode* head, int* returnSize)
//{
//	if (head == NULL)
//		return head;
//	int* arr = malloc(1000 * sizeof(int));
//	int i = 0, count = 0;
//	while (head)
//	{
//		arr[i] = head->val;
//		head = head->next;
//		i++;
//		count++;
//	}
//	*returnSize = count;
//	int left = 0, right = count - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	return arr;
//}
//int main()
//{
//	struct ListNode* p1 = malloc(sizeof(struct ListNode));
//	p1->val = 1;
//	struct ListNode* p2 = malloc(sizeof(struct ListNode));
//	p2->val = 2;
//	struct ListNode* p3 = malloc(sizeof(struct ListNode));
//	p3->val = 3;
//	struct ListNode* p4 = malloc(sizeof(struct ListNode));
//	p4->val = 4;
//	p1->next = p2;
//	p2->next = p3;
//	p3->next = p4;
//	p4->next = NULL;
//
//	int size = 0;
//	int* arr = reversePrint(p4->next, &size);
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int numWays(int n)
//{
//	if (n < 2 && n>0)
//		return n;
//	int next = 0, cur = 1, prev = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		next = (cur + prev) % 1000000007;
//		prev = cur;
//		cur = next;
//	}
//	return next;
//}
//int main()
//{
//	int n = 5;
//	int len = numWays(n);
//	printf("%d", len);
//	return 0;
//}

////斐波那锲数列
////https://leetcode-cn.com/problems/fei-bo-na-qi-shu-lie-lcof/
//int fib(int n)
//{
//	if (n < 2)
//		return n;
//	int cur = 1, prev = 0, next = 0;
//	for (int i = 2; i <= n; i++)
//	{
//		next = (cur + prev) % 1000000007;
//		prev = cur;
//		cur = next;
//	}
//	return next;
//}
//
//#include<stdio.h>
//int minArray(int* numbers, int numbersSize)
//{
//	if (numbersSize <= 1)
//		return numbers[0];
//	int cur = numbersSize - 2, prev = numbersSize - 1;
//	while (cur >= 0 && numbers[cur] <= numbers[prev])
//	{
//		cur--;
//		prev--;
//	}
//	return numbers[prev];
//}
//int main()
//{
//	int nums[] = { 1,2,2};
//	int len = minArray(nums, sizeof(nums) / sizeof(nums[0]));
//	printf("%d", len);
//	return 0;
//}

////剑指 Offer 17. 打印从1到最大的n位数
////https://leetcode-cn.com/problems/da-yin-cong-1dao-zui-da-de-nwei-shu-lcof/submissions/
//#include<stdio.h>
//#include<math.h>
//int* printNumbers(int n, int* returnSize)
//{
//	int nums = 0;
//	//while (n--)
//	//{
//	//	nums = nums * 10 + 9;
//	//}
//	nums = pow(10, n) - 1;
//	*returnSize = nums;
//	int* head = malloc(sizeof(int)*(nums + 1));
//	for (int i = 0; i < nums; i++)
//	{
//		head[i] = i + 1;
//	}
//	return head;
//}
//int main()
//{
//	int a;
//	printNumbers(3, &a);
//	return 0;
//}

////剑指 Offer 18. 删除链表的节点
////https://leetcode-cn.com/problems/shan-chu-lian-biao-de-jie-dian-lcof/
//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* deleteNode(struct ListNode* head, int val)
//{
//	if (head == NULL && head->next == NULL)
//		return head;
//	struct ListNode* prev = NULL, *cur = head;
//	while (cur != NULL)
//	{
//		if (cur->val == val)
//		{
//			//判断头节点是不是要删除的数
//			if (prev == NULL)
//			{
//				head = cur->next;
//				return head;
//			}
//			prev->next = cur->next;
//			return head;
//		}
//		prev = cur;
//		cur = cur->next;
//	}
//	return head;
//}

////剑指 Offer 24. 反转链表
////https://leetcode-cn.com/problems/fan-zhuan-lian-biao-lcof/
//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* reverseList(struct ListNode* head)
//{
//	if (head == NULL || head->next == NULL)
//		return head;
//	struct ListNode* prev = NULL, *cur = head;
//	while (cur != NULL)
//	{
//		struct ListNode* tmp = cur->next;
//		cur->next = prev;
//		prev = cur;
//		cur = tmp;
//	}
//	return prev;
//}

////剑指 Offer 31. 栈的压入、弹出序列
////https://leetcode-cn.com/problems/zhan-de-ya-ru-dan-chu-xu-lie-lcof/
//#include<stdbool.h>
//#include<stdlib.h>
//#include<stdio.h>
//bool validateStackSequences(int* pushed, int pushedSize, int* popped, int poppedSize)
//{
//	if (poppedSize <= 1)
//		return true;
//	int* cur = malloc(sizeof(int)*pushedSize);
//	int flag = 0, i = 0, j = 0;
//	while (i < pushedSize)
//	{
//		cur[j] = pushed[i];
//		while (j >= 0 && cur[j] == popped[flag])
//		{
//			j--;
//			flag++;
//		}
//		j++;
//		i++;
//	}
//	if (flag == poppedSize)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int arr1[] = { 1,0 };
//	int arr2[] = { 1,0 };
//	bool flag = validateStackSequences(arr1, 2, arr2, 2);
//	if (flag)
//		printf("成功\n");
//	return 0;
//}


////剑指 Offer 15. 二进制中1的个数
////https://leetcode-cn.com/problems/er-jin-zhi-zhong-1de-ge-shu-lcof/submissions/
//#include<stdio.h>
//#include<stdint.h>
//int hammingWeight(uint32_t n)
//{
//	int count = 0;
//	while (n)
//	{
//		count += n & 1;
//		n >>= 1;
//	}
//	return count;
//}
////方法二
//int hammingWeight(uint32_t n)
//{
//	int count = 0;
//	while (n)
//	{
//		count += n % 2;
//		n /= 2;
//	}
//	return count;
//}
////方法三
//int hammingWeight(uint32_t n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		//19
//		//10011---n
//		//10010---n-1
//		//10010----n
//		//10001----n-1
//		//10000----n
//		//01111----n-1
//		//00000---n
//		n = (n - 1)&n;
//	}
//	return count;
//}


////剑指 Offer 43. 1～n 整数中 1 出现的次数
////https://leetcode-cn.com/problems/1nzheng-shu-zhong-1chu-xian-de-ci-shu-lcof/
//#include<stdio.h>
//#include<math.h>
////int countDigitOne(int n)
////{
////	int count = 0;
////	for (int i = 1; i <= n; i++)
////	{
////		int tmp = i;
////		while (tmp)
////		{
////			if (tmp % 10 == 1)
////				count++;
////			tmp /= 10;
////		}
////	}
////	return count;
////}
//int countDigitOne(int n)
//{
//	if (n == 0)
//		return 0;
//	int count = 0;
//	int z = 0;
//	int tmp = n;
//	while (tmp)
//	{
//		z++;
//		tmp /= 10;
//	}
//	int i = 0;
//	int  k= 0;
//	while (z)
//	{
//		int base = (int)pow(10, i);
//		int cur = (n / base) % 10;
//		int next = n / (int)pow(10, i + 1);
//		int tail = n % base;
//		if (cur == 1)
//		{
//			count += next * base + (tail + 1) * 1;
//		}
//		else if (cur > 1)
//		{
//			count += (next + 1)*base;
//		}
//		else
//		{
//			count += next * base;
//		}
//		i++;
//		z--;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int len = countDigitOne(n);
//	printf("%d",len);
//	return 0;
//}


////剑指 Offer 14- I. 剪绳子
////https://leetcode-cn.com/problems/jian-sheng-zi-lcof/submissions/
//#include<stdio.h>
//#include<math.h>
//int cuttingRope(int n)
//{
//	if (n < 3)
//		return 1;
//	int tmp = 0;
//	tmp = n % 3;
//	int sum = 0;
//	int len = n / 3;
//	//当长度为3时，应该分为1,2；
//	if (len == 1 && tmp == 0)
//		return 2;
//	if (tmp == 1)
//	{
//		sum = (int)pow(3, len - 1) * (3 + 1);
//	}
//	else if (tmp == 2)
//	{
//		sum = (int)pow(3, len) * 2;
//	}
//	else if (tmp == 0 && len != 1)
//		sum = (int)pow(3, len);
//	return sum;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int len = cuttingRope(n);
//	printf("%d", len);
//	return 0;
//}

#include<stdio.h>
double myPow(double x, int n)
{
	int i = 0;
	double sum = 1, tmp = 1;
	if (n < 0)
	{
		for (i = n; i < 0; i++)
		{
			tmp *= x;
		}
		sum = 1 / tmp;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum *= x;
		}
	}
	return sum;
}
int main()
{
	int n = 0;
	double x = 0;
	scanf("%lf %d", &x, &n);
	double len = myPow(x, n);
	printf("%f", len);
	return 0;
}