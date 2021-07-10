//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
//{
//	int count = 0;
//	struct ListNode* cur = head;
//	while (cur)
//	{
//		count++;
//		cur = cur->next;
//	}
//	count -= n;
//	cur = head;
//	struct ListNode* prev = cur;
//	while (count)
//	{
//		prev = cur;
//		cur = cur->next;
//		count--;
//	}
//	if (cur == head)
//		head = cur->next;
//	else
//		prev->next = cur->next;
//	return head;
//}
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//int findMagicIndex(int* nums, int numsSize)
//{
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] == i)
//			return i;
//	}
//	return -1;
//}
//int main()
//{
//	int nums[] = { 0, 2, 3, 4, 5 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int ret = findMagicIndex(nums, size);
//	printf("%d", ret);
//	return 0;
//}


////744. 寻找比目标字母大的最小字母
//#include<stdio.h>
////char nextGreatestLetter(char* letters, int lettersSize, char target)
////{
////	for (int i = 0; i < lettersSize; i++)
////	{
////		if (letters[i] > target)
////			return letters[i];
////	}
////	return letters[0];
////}
////二分
//char nextGreatestLetter(char* letters, int lettersSize, char target)
//{
//	int left = 0, right = lettersSize - 1, reti = 0;
//	while (left <= right)
//	{
//		int min = left + (right - left) / 2;
//		if (letters[min] > target)
//		{
//			reti = i;
//			right = min - 1;
//		}
//		else (letters[min] < target)
//			left = min + 1;
//	}
//	return letters[reti];
//}
//int main()
//{
//	char letters[] = { 'c', 'f', 'j' };
//	int size = sizeof(letters) / sizeof(letters[0]);
//	char target = 'd';
//	char max = nextGreatestLetter(letters, size, target);
//	printf("%c", max);
//	return 0;
//}


#include<stdio.h>
void Sort(int* nums, int numsSize)
{
	for (int i = 0; i < numsSize - 1; i++)
	{
		int end = i, flag = nums[end + 1];
		while (end>=0)
		{
			if (nums[end] > flag)
			{
				nums[end + 1] = nums[end];
				end--;
			}
			else
				break;
		}
		nums[end + 1] = flag;
	}
}
int specialArray(int* nums, int numsSize)
{
	Sort(nums, numsSize);
	for (int i = 1; i <= numsSize; i++)
	{
		int target = i, left = 0, right = numsSize - 1;
		int pos = 0;
		while (left <= right)
		{
			int min = left + (right - left) / 2;
			if (nums[min] >= target)
			{
				pos = min;
				right = min - 1;
			}
			else
				left = min + 1;
		}
		if (numsSize - pos == target)
			return target;
	}
	return  -1;
}
int main()
{
	int nums[] = { 3,6,7,7,0 };
	int size = sizeof(nums) / sizeof(nums[0]);
	int ret = specialArray(nums, size);
	printf("%d", ret);
	return 0;
}