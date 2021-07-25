
////496. 下一个更大元素 I
//#include<stdio.h>
//#include<stdlib.h>
//int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
//{
//	int* ret = malloc(sizeof(int)*nums1Size);
//	*returnSize = 0;
//	for (int i = 0; i < nums1Size; i++)
//	{
//		int j = 0;
//		for (j = 0; j < nums2Size; j++)
//		{
//			if (nums1[i] == nums2[j])
//				break;
//		}
//		while (j < nums2Size)
//		{
//			if (nums2[j] > nums1[i])
//			{
//				ret[(*returnSize)++] = nums2[j];
//				break;
//			}
//			j++;
//		}
//		if (j >= nums2Size)
//			ret[(*returnSize)++] = -1;
//	}
//	return ret;
//}
//int main()
//{
//	int nums1[] = { 2,1,3};
//	int nums2[] = { 2,3,1 };
//	int size1 = sizeof(nums1) / sizeof(nums1[0]);
//	int size2 = sizeof(nums2) / sizeof(nums2[0]);
//	int returnSize = 0;
//	int*  ret = nextGreaterElement(nums1, size1, nums2, size2, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//		printf("%d ", ret[i]);
//	free(ret);
//	return 0;
//}


////5823. 字符串转化后的各位数字之和
//#include<stdio.h>
//int getLucky(char * s, int k)
//{
//	int size = strlen(s);
//	int arr[100] = { 0 };
//	int count = 0;
//	for (int i = 0; i < size; i++)
//	{
//		arr[count++] = s[i] - 'a' + 1;
//	}
//	int sum = 0;
//	for (int i = 0; i < count; i++)
//	{
//		while (arr[i])
//		{
//			sum += arr[i] % 10;
//			arr[i] /= 10;
//		}
//	}
//	int ret = sum;
//	while (k > 1)
//	{
//		ret = 0;
//		while (sum)
//		{
//			ret += sum % 10;
//			sum /= 10;
//		}
//		sum = ret;
//		k--;
//	}
//	return ret;
//}
//int main()
//{
//	char nums[] = { "iiii" };
//	int k = 1;
//	printf("%d", getLucky(nums, k));
//	return 0;
//}

////5824. 子字符串突变后可能得到的最大整数
//#include<stdio.h>
//#include<string.h>
//char * maximumNumber(char * num, int* change, int changeSize)
//{
//	int size = strlen(num), flag = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (flag == 0 && num[i] - '0' == change[num[i] - '0'])
//			continue;
//		else if (num[i] - '0' <= change[num[i] - '0'])
//		{
//			num[i] = change[num[i] - '0'] + '0';
//			flag = 1;
//		}
//		else if (flag == 1)
//			break;
//	}
//	return num;
//}
//int main()
//{
//	char num[] = "334111";
//	int change[] = { 0,9,2,3,3,2,5,5,5,5 };
//	printf("%s", maximumNumber(num, change, 10));
//	return 0;
//}



////540. 有序数组中的单一元素
//#include<stdio.h>
////int singleNonDuplicate(int* nums, int numsSize)
////{
////	int ret = 0;
////	for (int i = 0; i < numsSize; i++)
////	{
////		ret ^= nums[i];
////	}
////	return ret;
////}


//int singleNonDuplicate(int* nums, int numsSize)
//{
//	if (numsSize < 3)
//		return 0;
//	int left = 0, right = numsSize - 1;
//	while (left < right)
//	{
//		int mid = left + (right - left) / 2;
//		if (nums[mid] == nums[mid - 1])
//		{
//			//右边为偶数
//			if ((right - mid) % 2 == 0)
//				right = mid - 2;
//			else
//				left = mid + 1;
//		}
//		else if (nums[mid] == nums[mid + 1])
//		{
//			if ((right - mid + 1) % 2 == 0)
//				right = mid - 1;
//			else
//				left = mid + 1;
//		}
//		else
//			return nums[mid];
//	}
//	return nums[left];
//}
//int main()
//{
//	int nums[] = { 1,1,2,3,3,4,4,8,8 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	printf("%d", singleNonDuplicate(nums, numsSize));
//	return 0;
//}


////11. 盛最多水的容器
//#include<stdio.h>
//int maxArea(int* height, int heightSize)
//{
//	int left = 0, right = heightSize - 1;
//	int max = 0;
//	while (left < right)
//	{
//		int min = height[left] < height[right] ? height[left] : height[right];
//		max = (right - left)*min > max ? (right - left)*min : max;
//		if (height[left] < height[right])
//			left++;
//		else
//			right--;
//	}
//	return max;
//}
//int main()
//{
//	int height[] = { 1,8,6,2,5,4,8,3,7 };
//	int size = sizeof(height) / sizeof(height[0]);
//	printf("%d", maxArea(height, size));
//	return 0;
//}



//36. 有效的数独
#include<stdio.h>
#include<stdbool.h>
bool isValidSudoku(char** board, int boardSize, int* boardColSize)
{
	int row[9][9] = { 0 }, col[9][9] = { 0 }, che[9] = { 0 };
	for (int i = 0; i < boardSize; i++)
	{
		for (int j = 0; j < *boardColSize; j++)
		{
			if (board[i][j] != '.')
			{
				//行
				if (row[i][board[i][j] - '1'] == 1)
					return false;
				else
					row[i][board[i][j] - '1'] += 1;

				//列
				if (col[j][board[i][j] - '1'] == 1)
					return false;
				else
					col[j][board[i][j] - '1'] += 1;
			}
		}
	}
	//判断九宫格
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			memset(che, 0, sizeof(che));
			for (int p = 0; p < 3; p++)
			{
				for (int q = 0; q < 3; q++)
				{
					if (board[i * 3 + p][j * 3 + q] == '.')
						continue;
					else if (che[board[i * 3 + p][j * 3 + q] - '1'] == 1)
						return false;
					else
						che[board[i * 3 + p][j * 3 + q] - '1'] = 1;
				}
			}
		}
	}
	return true;
}
int main()
{
	return 0;
}