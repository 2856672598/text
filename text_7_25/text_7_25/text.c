#define _CRT_SECURE_NO_WARNINGS
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



////36. 有效的数独
//#include<stdio.h>
//#include<stdbool.h>
//bool isValidSudoku(char** board, int boardSize, int* boardColSize)
//{
//	int row[9][9] = { 0 }, col[9][9] = { 0 }, che[9] = { 0 };
//	for (int i = 0; i < boardSize; i++)
//	{
//		for (int j = 0; j < *boardColSize; j++)
//		{
//			if (board[i][j] != '.')
//			{
//				//行
//				if (row[i][board[i][j] - '1'] == 1)
//					return false;
//				else
//					row[i][board[i][j] - '1'] += 1;
//
//				//列
//				if (col[j][board[i][j] - '1'] == 1)
//					return false;
//				else
//					col[j][board[i][j] - '1'] += 1;
//			}
//		}
//	}
//	//判断九宫格
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			memset(che, 0, sizeof(che));
//			for (int p = 0; p < 3; p++)
//			{
//				for (int q = 0; q < 3; q++)
//				{
//					if (board[i * 3 + p][j * 3 + q] == '.')
//						continue;
//					else if (che[board[i * 3 + p][j * 3 + q] - '1'] == 1)
//						return false;
//					else
//						che[board[i * 3 + p][j * 3 + q] - '1'] = 1;
//				}
//			}
//		}
//	}
//	return true;
//}
//int main()
//{
//	return 0;
//}



////15. 三数之和
//#include<stdio.h>
//#include<stdlib.h>
//void Sort(int* nums, int size)
//{
//	int i = 0;
//	for (i = 0; i < size - 1; i++)
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
//}
//int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes)
//{
//	Sort(nums, numsSize);
//	int** ret = malloc(sizeof(int*)*numsSize*numsSize);
//	*returnColumnSizes = malloc(sizeof(int)*numsSize*numsSize);
//	memset(*returnColumnSizes, 0, sizeof(int)*numsSize);
//	*returnSize = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		int cur = i, left = i + 1, right = numsSize - 1;
//		if (nums[cur] > 0)
//			continue;
//		//去重
//		if (cur > 0 && nums[cur] == nums[cur - 1])
//			continue;
//		while (left < right)
//		{
//			if (nums[cur] + nums[left] + nums[right] < 0)
//				left++;
//			else if (nums[cur] + nums[left] + nums[right] > 0)
//				right--;
//			else
//			{
//				(*returnColumnSizes)[*returnSize] = 3;
//
//				ret[*returnSize] = malloc(sizeof(int) * 3);
//				ret[*returnSize][0] = nums[cur];
//				ret[*returnSize][1] = nums[left];
//				ret[*returnSize][2] = nums[right];
//				(*returnSize)++;
//
//				//去重
//				while (left < right && nums[left] == nums[left + 1])
//					left++;
//				while (left < right && nums[right] == nums[right - 1])
//					right--;
//
//				left++;
//				right--;
//			}
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int nums[] = { -1,0,1,2,-1,-4 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int returnSize = 0;
//	int** returnColumnSizes = malloc(sizeof(int*));
//	int** ret = threeSum(nums, size, &returnSize, returnColumnSizes);
//	for (int i = 0; i < returnSize; i++)
//	{
//		int j = 0;
//		for (j = 0; j < returnColumnSizes[0][i]; j++)
//		{
//			printf("%d ", ret[i][j]);
//		}
//		printf("\n");
//	}
//	free(*returnColumnSizes);
//	free(ret);
//	return 0;
//}

////非递归逆序字符串
//#include<stdio.h>
//int my_Strlen(char* string)
//{
//	int count = 0;
//	while (*string != '\0')
//	{
//		count++;
//		string += 1;
//	}
//	return count;
//}
//void reverse_string(char * string)
//{
//	int size = my_Strlen(string);
//	if (size < 2)
//		return;
//	char tmp = *string;
//	*string = *(string + size - 1);
//	*(string + size - 1) = '\0';
//
//	reverse_string(string + 1);
//	*(string + size - 1) = tmp;
//}
//int main()
//{
//	char string[] = "hello";
//	reverse_string(string);
//	printf("%s", string);
//	return 0;
//}


//#include<stdio.h>
//double my_Pow(double x, double y)
//{
//	if (y == 0)
//		return 1.0;
//	else if (y < 0)
//		return 1.0 / my_Pow(x, -y);
//	else
//		return x * my_Pow(x, y - 1);
//}
//int main()
//{
//	double x, y;
//	scanf("%lf %lf", &x, &y);
//	printf("%lf", my_Pow(x, y));
//	return 0;
//}

////BC51 三角形判断
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if (a + b > c && a - b < c)
//		{
//			if (a == b && b == c)
//				printf("Equilateral triangle!\n");
//			else if (a == b || b == c || a == c)
//				printf("Isosceles triangle!\n");
//			else
//				printf("Ordinary triangle!\n");
//		}
//		else
//			printf("Not a triangle!\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int max = 0, min = 100;
//	int sum = 0, score = 0;
//	for (int i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//	printf("%.2f", (sum - min - max) / 5.0);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	long long x, y, tmp;
//	scanf("%lld %lld", &x, &y);
//	long long a = x, b = y;
//	while (b)
//	{
//		tmp = a % b;
//		a = b;
//		b = tmp;
//	}
//	printf("%lld", x*y / a + a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = (n + 1) / 12;
//	if ((n + 1) % 12)
//		count += 1;
//	int time = count * 4 - 2;
//	printf("%d", time);
//	return 0;
//}


#include<stdio.h>
void Base(int x)
{
	if (x >= 6)
		Base(x / 6);
	printf("%d", x % 6);
}
int main()
{
	int x;
	scanf("%d", &x);
	Base(x);
	return 0;
}