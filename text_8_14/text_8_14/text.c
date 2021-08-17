#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int add(int x, int y)
//{
//	int c = 0;
//	c = x + y;
//	return c;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 10;
//	c = add(a, b);
//	printf("%d", c);
//	return 0;
//}


////179. 最大数
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<string.h>
//int cmp(const void* a, const void* b)
//{
//	char arr1[100] = "0";
//	char arr2[100] = "0";
//	sprintf(arr1, "%d%d", *(int*)a, *(int*)b);
//	sprintf(arr2, "%d%d", *(int*)b, *(int*)a);
//	return strcmp(arr2, arr1);
//}
//char * largestNumber(int* nums, int numsSize)
//{
//	assert(nums);
//	qsort(nums, numsSize, sizeof(int), cmp);
//	char* ret = malloc(sizeof(int) * 101);
//	assert(ret);
//	if (nums[0] == 0)
//	{
//		ret[0] = '0';
//		ret[1] = '\0';
//	}
//	else
//	{
//		int i = 0, insert = 0;
//		for (i = 0; i < numsSize; i++)
//		{
//			insert += sprintf(&ret[insert], "%d", nums[i]);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int nums[] = { 0,0 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	char* ret = largestNumber(nums, numsSize);
//	printf("%s", ret);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("%d", ((5 + 5) << 1) + (5 - 1));
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//typedef struct Node
//{
//	int val;
//	struct Node* next;
//}Node;
//
//Node* reverseList(Node* list)
//{
//	assert(list);
//	if (list == NULL || list->next == NULL)
//		return list;
//	Node* prev = NULL, *next = NULL;
//	while (list)
//	{
//		next = list->next;
//		list->next = prev;
//		prev = list;
//		list = next;
//	}
//	return prev;
//}
//int main()
//{
//	Node*p1 = malloc(sizeof(Node));
//	Node*p2 = malloc(sizeof(Node));
//	Node*p3 = malloc(sizeof(Node));
//	Node*p4 = malloc(sizeof(Node));
//	p1->next = p2;
//	p2->next = p3;
//	p3->next = p4;
//	p4->next = NULL;
//	p1->val = 1;
//	p2->val = 2;
//	p3->val = 3;
//	p4->val = 4;
//
//	Node* ret = reverseList(p1);
//	while (ret)
//	{
//		printf("%d ", ret->val);
//		ret = ret->next;
//	}
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));//12
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	unsigned long ulA = 0x11000000;
//	//‭00010001000000000000000000000000‬
//	//000000000000000000000000‬00010001
//	printf("%x\n", *(unsigned char *)&ulA);//0
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1);
//	int* p3 = (int*)(a + 1);
//	printf("%d, %x, %d\n", p1[-1], p2[0], p3[1]);//5 2000 3
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char acX[] = "abc";
//	char acY[] = { 'a','b','c' };
//	char *szX = "abc";
//	char *szY = "abc";
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char *str[3] = { "stra","strb","strc" };
//	char *p = str[0];
//	int i = 0;
//	while (i < 3)
//	{
//		printf("%s ", p++);
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//char *myString()
//{
//	char buffer[6] = { 0 };
//	char *s = "Hello World!";
//	for (int i = 0; i < sizeof(buffer) - 1; i++)
//	{
//		buffer[i] = *(s + i);
//	}
//	return buffer;
//}
//int main()
//{
//	printf("%s\n", myString());
//	return 0;
//}


//#include<stdio.h>
//int f(int x, int y)
//{
//	return (x&y) + ((x^y) >> 1);
//}
//int main()
//{
//	int result = f(2, 4);
//	printf("%d\n", result);
//	return 0;
//}

//#include<stdio.h>
//#define sum(a,b,c) a+b+c
//int main()
//{
//	int i = 3;
//	int j = 2;
//	printf("%d\n", i*sum(i, (i + j), j));//16 i*i+i+j+j
//	return 0;
//}

//#include<stdio.h>
////int f(int n)
////{
////	static int i = 1;
////	if (n >= 5)
////		return n;
////	n = n + i;
////	i++;
////	return f(n);
////}
////int main()
////{
////	printf("%d\n", f(1));//7
////}
//
//int func()
//{
//	int i, j, k = 0;
//	for (i = 0, j = -1; j = 0; i++, j++) {
//		k++;
//	}
//	return k;
//}
//int main()
//{
//	printf("%d\n", (func()));
//}


//#include<stdio.h>
//int main()
//{
//	int k, j, s;
//	for (k = 2; k < 6; k++, k++)
//	{
//		s = 1;
//		for (j = k; j < 6; j++)
//			s += j;
//	}
//	printf("%d\n", s);//10
//	return 0;
//}

//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 2) += 2;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 2));
//	return 0;
//}


//int main()
//{
//	int i, x, y;
//	i = x = y = 0;
//	do {
//		++i;
//		if (i % 2)
//			x += i,
//			i++;
//		y += i++;
//	} while (i <= 7);
//	printf("%d %d %d", i, x, y);
//}


//#include <stdio.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1);
//	int* p3 = (int*)(a + 1);
//	printf("%d, %x, %d\n", p1[-1], p2[0], p3[1]);//5 2000 3
//	return 0;
//}



////551. 学生出勤记录 I
//#include<stdio.h>
//#include<stdbool.h>
//#include<assert.h>
//bool checkRecord(char * s)
//{
//	int sz = strlen(s);
//	int i = 0, flag = 0;
//	int arr[2] = { 0 };
//	for (i = 0; i < sz; i++)
//	{
//		if (s[i] == 'A')
//		{
//			arr[0]++;
//			if (arr[0] >= 2)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (s[i] == 'L')
//		{
//			arr[1]++;
//			if (arr[1] == 3)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		else
//			arr[1] = 0;
//	}
//	if (flag == 1)
//		return false;
//	return true;
//}
//int main()
//{
//	char s[] = "PLPALLP";
//	bool ret = checkRecord(s);
//	printf("%d", ret);
//	return 0;
//}


////1423. 可获得的最大点数
////利用滑动窗口
//
//#include<stdio.h>
//#include<assert.h>
//int maxScore(int* cardPoints, int cardPointsSize, int k)
//{
//	assert(cardPoints);
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < cardPointsSize - k; i++)
//	{
//		sum += cardPoints[i];
//	}
//	int min = sum;
//	int left = 0, right = cardPointsSize - k, minSum = sum;
//	while (right < cardPointsSize)
//	{
//		sum += cardPoints[right];
//		minSum += cardPoints[right] - cardPoints[left];
//		right++;
//		left++;
//		if (min > minSum)
//			min = minSum;
//	}
//	sum -= min;
//	return sum;
//}
//
//
//int main()
//{
//	int arr[] = { 9,7,7,9,7,7,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 6;
//	int ret = maxScore(arr, sz, k);
//	printf("%d", ret);
//	return 0;
//}



#include<stdio.h>
#include<stdbool.h>
bool containsNearbyDuplicate(int* nums, int numsSize, int k)
{
	int i = 0, flag = 0;
	for (i = 0; i < numsSize; i++)
	{
		int j = i + 1;
		while (j < numsSize && j - i <= k)
		{
			if (nums[i] == nums[j])
				return true;
			else
				j++;
		}
	}
	return false;
}
int main()
{
	int nums[] = { 1,2,3,4,1 };
	int k = 3;
	int sz = sizeof(nums) / sizeof(nums[0]);
	printf("%d", containsNearbyDuplicate(nums, sz, k));
	return 0;
}