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


#include<stdio.h>
int add(int a, int b)
{
	while (b != 0)
	{
		int c = (unsigned)(a&b) << 1;//进位和
		a ^= b;//非进位和
		b = c;
	}
	return a;
}
int main()
{
	int a = 3, b = 4;
	int sum = add(a, b);
	printf("%d", sum);
	return 0;
}