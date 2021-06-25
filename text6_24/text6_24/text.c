#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("*******************************\n");
//	printf("************  1.play  *********\n");
//	printf("************  0.exit  *********\n");
//	printf("*******************************\n");
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("猜大了\n");
//		else if (guess < ret)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜您猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	int input;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include<stdio.h>
//char firstUniqChar(char* s)
//{
//	int arr[26] = { 0 };
//	int sz = strlen(s);
//	for (int i = 0; i < sz; i++)
//	{
//		arr[s[i] - 'a']++;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[s[i] - 'a'] == 1)
//			return s[i];
//	}
//	return ' ';
//}
//int main()
//{
//	char s[] = " ";
//	char ch = firstUniqChar(s);
//	printf("%c", ch);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int* twoSum(int* nums, int numsSize, int target, int* returnSize)
//{
//	int* arr = malloc(sizeof(int) * 2);
//	int left = 0, right = numsSize - 1;
//	for (int i = 0; i < numsSize; i++)
//	{
//		left = i;
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (nums[i] + nums[mid] > target)
//			{
//				right = mid - 1;
//			}
//			else if (nums[i] + nums[mid] < target)
//			{
//				left = mid + 1;
//			}
//			else
//			{
//				arr[0] = nums[i];
//				arr[1] = nums[mid];
//				*returnSize = 2;
//				return arr;
//			}
//		}
//	}
//	return arr;
//}
//int main()
//{
//	int arr[] = { 16,16,18,24,30,32 };
//	int target = 48;
//	int returnSize = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int* ret = twoSum(arr, size, target, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//	{
//		printf("%d", ret[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int add(int a, int b)
//{
//	while (b != 0)
//	{
//		int c = (unsigned)(a&b) << 1;//进位和
//		a ^= b;//非进位和
//		b = c;
//	}
//	return a;
//}
//int main()
//{
//	int a = 3, b = 4;
//	int sum = add(a, b);
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int Add(int x, int y)
//{
//	while (y != 0)
//	{
//		int a = (x&y) << 1;//有进位
//		x = x ^ y;//无进位
//		y = a;
//	}
//	return x;
//}
//int main()
//{
//	int a = 3, b = 5;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}

//
////剑指 Offer 58 - II. 左旋转字符串
//#include<stdio.h>
//#include<string.h>
//void reverse(char* s, int left, int right)
//{
//	while (left < right)
//	{
//		char tmp = s[left];
//		s[left] = s[right];
//		s[right] = tmp;
//		left++;
//		right--;
//	}
//}
//char* reverseLeftWords(char* s, int n)
//{
//	//先翻转前n个
//	reverse(s, 0, n - 1);
//	int sz = strlen(s);
//	//在翻转n+1到sz个
//	reverse(s, n, sz - 1);
//	//整体翻转
//	reverse(s, 0, sz - 1);
//	return s;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int n = 2;
//	char* ret = reverseLeftWords(arr, n);
//	printf("%s", ret);
//	return 0;
//}

//
////剑指 Offer 22. 链表中倒数第k个节点
//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* getKthFromEnd(struct ListNode* head, int k)
//{
//	int count = 0;
//	struct ListNode* cur = head;
//	while (cur)
//	{
//		count++;
//		cur = cur->next;
//	}
//	cur = head;
//	for (int i = 0; i < count - k; i++)
//	{
//		cur = cur->next;
//	}
//	return cur;
//}
//int main()
//{
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
int* spiralOrder(int matrix[][3], int matrixSize, int* matrixColSize, int* returnSize)
{
	int row = matrixSize, col = *matrixColSize;
	int total = row * col;

	int* arr = malloc(sizeof(int)*total);
	int left = 0, right = col - 1;
	int top = 0, bottom = row - 1;
	*returnSize = 0;
	while (left <= right && top <= bottom)
	{
		//
		for (int column = left; column <= right; column++)
			arr[(*returnSize)++] = matrix[top][column];
		for (int soon = top + 1; soon <= bottom; soon++)
			arr[(*returnSize)++] = matrix[soon][right];

		//下面
		if (top < bottom && left < right)
		{
			for (int column = right - 1; column > left; column--)
				arr[(*returnSize)++] = matrix[bottom][column];
			for (int soon = bottom; soon > top; soon--)
				arr[(*returnSize)++] = matrix[soon][left];
		}
		left++;
		right--;
		bottom--;
		top++;
	}
	return arr;
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int returnSize = 0;
	int col = 3;
	int* arr1 = spiralOrder(arr, 3, &col, &returnSize);
	for (int i = 0; i < returnSize; i++)
		printf("%d ", arr1[i]);
	return 0;
}
