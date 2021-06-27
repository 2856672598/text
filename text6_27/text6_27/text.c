
////剑指 Offer 62. 圆圈中最后剩下的数字(约瑟夫环)
//#include<stdio.h>
//#include<stdlib.h>
////暴力求解(leetcode不通过)
//int lastRemaining(int n, int m)
//{
//	int count = 0, start = 0;
//	int* arr = malloc(sizeof(int)*n);
//	for (int i = 0; i < n; i++)
//		arr[i] = 0;
//	while (count < n - 1)
//	{
//		int i = 0;
//		while (1)
//		{
//				start %= n;
//			if (arr[start] == 0)
//				i++;
//			if (i == m)
//			{
//				count++;
//				arr[start] = count;
//				break;
//			}
//			start += 1;
//		}
//	}
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == 0)
//			break;
//	}
//	return i;
//}
//int main()
//{
//	int n = 10, m = 17;
//	int flag = lastRemaining(n, m);
//	printf("\n%d ", flag);
//	return 0;
//}


////剑指 Offer 61. 扑克牌中的顺子
//#include<stdio.h>
//#include<stdbool.h>
////暴力 排序+遍历
//void sort(int* nums, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int end = i, tmp = nums[i + 1];
//		while (end >= 0)
//		{
//			if (nums[end] > tmp)
//			{
//				nums[end + 1] = nums[end];
//				end--;
//			}
//			else
//				break;
//		}
//		nums[end + 1] = tmp;
//	}
//}
//bool isStraight(int* nums, int numsSize)
//{
//	sort(nums, numsSize);
//	int i = 0;
//	int flag = 0;
//	//判断除零外是否出现重复
//	for (i = 0; i < numsSize - 1; i++)
//	{
//		if (nums[i] == nums[i + 1] && nums[i] != 0)
//			return false;
//	}
//	for (i = 0; i < numsSize; i++)
//	{
//		if (nums[i] != 0)
//		{
//			flag = nums[4] - nums[i];
//			break;
//		}
//	}
//	if (flag < 5)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int arr[] = { 1,4,5,4,0 };
//	bool flag = isStraight(arr, 5);
//	printf("%d ", flag);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h>
//bool isUnique(char* astr)
//{
//	int sz = strlen(astr);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int end = i;
//		char flag = astr[end + 1];
//		while (end >= 0)
//		{
//			if (astr[end] > flag)
//			{
//				astr[end + 1] = astr[end];
//				end--;
//			}
//			else if (astr[end] == flag)
//				return false;
//			else
//				break;
//		}
//		astr[end + 1] = flag;
//	}
//	return true;
//}
//int main()
//{
//	char arr[] = "abc";
//	bool flag = isUnique(arr);
//	printf("%d", flag);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//char* replaceSpaces(char* S, int length)
//{
//	int i = 0, count = 0;
//	while (i < length)
//	{
//		if (S[i] == ' ')
//			count++;
//		i++;
//	}
//	int insert = count * 3 + (length - count);
//	S[insert] = '\0';
//	length -= 1, insert -= 1;
//	while (length >= 0)
//	{
//		if (S[length] == ' ')
//		{
//			S[insert--] = '0';
//			S[insert--] = '2';
//			S[insert--] = '%';
//		}
//		else
//			S[insert--] = S[length];
//		length--;
//	}
//	return S;
//}
//int main()
//{
//	int sz = 13;
//	char arr[] = "Mr John Smith    ";
//	char* ret = replaceSpaces(arr, sz);
//	printf("%s", ret);
//	return 0;
//}



#include<stdio.h>
#include<stdbool.h>
void Sort(char* s)
{
	int sz = strlen(s);
	for (int i = 0; i < sz - 1; i++)
	{
		int end = i, flag = s[end + 1];
		while (end >= 0)
		{
			if (s[end] > flag)
			{
				s[end + 1] = s[end];
				end--;
			}
			else
				break;
		}
		s[end + 1] = flag;
	}
}
bool canPermutePalindrome(char* s)
{
	Sort(s);
	int sz = strlen(s);
	int cur = 1, prev = 0;
	int count = 0;//不相等的个数
	while (cur < sz)
	{
		if (s[cur] != s[prev])
		{
			count++;
			cur++;
			prev++;
		}
		else
		{
			cur += 2;
			prev += 2;
		}
	}
	if (count == 0 || sz % 2 == 1 && count == 1)
		return true;
	else
		return false;
}
int main()
{
	char arr[] = "carerac";
	bool flag = canPermutePalindrome(arr);
	printf("%d ", flag);
	return 0;
}