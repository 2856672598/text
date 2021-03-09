//#include<stdio.h>
//#include<stdbool.h>
//bool isPalindrome(int x)
//{
//	if (x < 0|| (x % 10 == 0 && x != 0))
//		return false;
//	int reverse = 0;
//	while (x > reverse)
//	{
//		reverse = reverse * 10 + x % 10;
//		x /= 10;
//	}
//	if (reverse > x)
//		reverse /= 10;
//	if (reverse == x)
//		return true;
//	return false;
//}
//int main()
//{
//	isPalindrome(11);
//	return 0;
//}


////剑指 Offer 53 - II. 0～n-1中缺失的数字
////https://leetcode-cn.com/problems/que-shi-de-shu-zi-lcof/
//#include<stdio.h>
//int missingNumber(int* nums, int numsSize)
//{
//	int left = 0, right = numsSize - 1;
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		if (middle == nums[middle])
//			left = middle + 1;
//		else
//			right = middle - 1;
//	}
//	return left;
//}
//int main()
//{
//	int arr[] = { 0 };
//	int len = missingNumber(arr, sizeof(arr) / sizeof(arr[0]));
//	printf("%d ", len);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int CMP(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int majorityElement(int* nums, int numsSize)
//{
//	if (numsSize == 1)
//		return nums[0];
//	qsort(nums, numsSize, sizeof(int), CMP);
//	int i = 0, count = 1;
//	int cur, prev;
//	for (i = numsSize - 1; i > 0; i--)
//	{
//		cur = i; prev = i - 1;
//		if (nums[cur] == nums[prev])
//		{
//			count++;
//		}
//		else
//		{
//			if (count >= numsSize / 2 + 1 && count != 1)
//				return nums[cur];
//			count = 1;
//		}
//	}
//	if (count >= numsSize / 2 + 1 && count != 1)
//		return nums[cur];
//	return -1;
//}
//int main()
//{
//	int arr[] = {6,6,6,7,7};
//	int len = majorityElement(arr, sizeof(arr) / sizeof(arr[0]));
//	printf("%d ", len);
//	return 0;
//}

////d大数相加
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//char* solve(char* s, char* t)
//{
//	int sSize = strlen(s);
//	int tSize = strlen(t);
//	int size = sSize > tSize ? sSize : tSize;
//	//开辟size+1个空间 来存放和
//	char *number =(char*) malloc(sizeof(char)*(size + 1));
//	char carry = 0;
//	int i = 0;
//	while (size)
//	{
//		char a = 0, b = 0;
//		if (sSize)
//		{
//			a = s[sSize - 1]-'0';
//			sSize--;
//		}
//		if (tSize)
//		{
//			b = t[tSize - 1]-'0';
//			tSize--;
//		}
//		char sum = a + b + carry;
//		if (sum > 9)
//		{
//			number[i] = sum - 10+'0';
//			i++;
//			carry = 1; 
//		}
//		else
//		{
//			carry = 0;
//			number[i] = sum+'0';
//			i++;
//		}
//		size--;
//	}
//	if (carry)
//	{
//		number[i] = '1';
//		i++;
//	}
//	int left = 0, right = i - 1;
//	//翻转
//	while (left < right)
//	{
//		char tmp = number[left];
//		number[left] = number[right];
//		number[right] = tmp;
//		left++;
//		right--;
//	}
//	//结束时给个0
//	number[i] = 0;
//	return number;
//}
//int main()
//{
//	char arr[] = "1";
//	char arr1[] = "99";
//	char* sum = solve(arr, arr1);
//	printf("%s", sum);
//	return 0;
//}

////输入一个链表，反转链表后，输出新链表的表头。
//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* ReverseList(struct ListNode* pHead)
//{
//	struct ListNode* cur = pHead, *prev = NULL;
//	while (cur)
//	{
//		struct ListNode* next = cur->next;
//		cur->next = prev;
//		prev = cur;
//		cur = next;
//	}
//	return prev;
//}
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 5,2,3,1,4 };
//	int arrLen = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < arrLen; i++)
//	{
//		int j = 0;
//		for (j = 0; j < arrLen - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < arrLen; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//判断链表中是否有环
//#include<stdio.h>
//#include<stdbool.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//bool hasCycle(struct ListNode* head)
//{
//	struct ListNode* cur = head, *next = head;
//	while (next&&next->next)
//	{
//		next = next->next->next;
//		if (next == cur)
//			return true;
//		cur = cur->next;
//	}
//	return false;
//}

//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
//{
//	struct ListNode*cur1 = l1, *cur2 = l2, *cur = NULL;
//	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
//	head->next = NULL;
//	head->val = 0;
//	cur = head;
//	while (cur1 && cur2)
//	{
//		if (cur1->val < cur2->val)
//		{
//			cur->next = cur1;
//			cur1 = cur1->next;
//			cur = cur->next;
//			cur->next = NULL;
//		}
//		else
//		{
//			cur->next = cur2;
//			cur2 = cur2->next;
//			cur = cur->next;
//			cur->next = NULL;
//		}
//	}
//	if (cur1)
//	{
//		cur->next = cur1;
//	}
//	if (cur2)
//		cur->next = cur2;
//	return head->next;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[5][80] = { 0 };
//	char tmp[80] = { 0 };
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%s", arr[i]);
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5 - 1 - i; j++)
//		{
//			if (strcmp(arr[j], arr[j+1]) > 0)
//			{
//				strcpy(tmp, arr[j]);
//				strcpy(arr[j], arr[j+1]);
//				strcpy(arr[j+1], tmp);
//			}
//		}
//	}
//	printf("After sorted:\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* gread = malloc(sizeof(int)*n);
//	double max = 0, min = 100, sum = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &gread[i]);
//		sum += gread[i];
//		if (gread[i] > max)
//			max = gread[i];
//		if (gread[i] < min)
//			min = gread[i];
//	}
//	double average = sum / n;
//	printf("average = %.2f\nmax = %.2f\nmin = %.2f", average, max, min);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 2,8,1,98,45 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		int min = i;
//		for (j = i+1; j < 5; j++)
//		{
//			if (arr[j] < arr[min])
//			{
//				min = j;
//			}
//		}
//		int tmp = arr[i];
//		arr[i] = arr[min];
//		arr[min] = tmp;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int hour = 0, min = 0, second = 0;
//	scanf("%d:%d:%d", &hour, &min, &second);
//	scanf("%d", &n);
//	if (second + n >= 60)
//	{
//		min += (second + n) / 60;
//		second = (second + n) % 60;
//	}
//	else
//		second += n;
//	if (min >= 60)
//	{
//		hour += min / 60;
//		min = min % 60;
//	}
//	if (hour >= 24)
//		hour %= 24;
//	printf("%02d:%02d:%02d", hour, min, second);
//	return 0;
//}

//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//struct book
//{
//	double price;
//	char name[31];
//};
//int main()
//{
//	int n = 0, max = 0, min = 0;
//	scanf("%d", &n);
//	struct book* arr = malloc(sizeof(struct book)*n);
//	for (int i = 0; i < n; i++)
//	{
//		getchar();
//		gets(arr[i].name);
//		scanf("%lf", &arr[i].price);
//		if (arr[i].price > arr[max].price)
//			max = i;
//		if (arr[i].price < arr[min].price)
//			min = i;
//	}
//	printf("%.2f, %s\n", arr[max].price, arr[max].name);
//	printf("%.2f, %s\n", arr[min].price, arr[min].name);
//	return 0;
//}
