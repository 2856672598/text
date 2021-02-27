#include<stdio.h>
#include<malloc.h>
//struct A
//{
//	//8
//	int a;
//	union
//	{
//		long b;
//		short c;
//	};
//};
//struct B
//{
//	//16
//	char e;//1
//	struct A d;//8---16
//	int f;//16--20
//};
//int main()
//{
//	size_t a = sizeof(long int );
//	printf("%d\n", a);
//	printf("%d\n", sizeof(struct A));//8
//	printf("%d\n", sizeof(struct B));//16
//}

////LeTCode 给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，
////并返回移除后数组的新长度。
////https://leetcode-cn.com/problems/remove-element/submissions/
//int removeElement(int* nums, int numsSize, int val)
//{
//	int src = 0, dst = 0;
//	while (src < numsSize)
//	{
//		if (nums[src] == val)
//		{
//			src++;
//		}
//
//		//*nums+src 和  *(nums+src) 完全不相同
//		//if (*(nums + src) == val)
//		//{
//		//	src++;
//		//}
//
//		else
//		{
//			nums[dst] = nums[src];
//			src++;
//			dst++;
//		}
//
//		//else
//		//{
//		//	*(nums + dst) = *(nums + src);
//		//	dst++;
//		//	src++;
//		//}
//	}
//	return dst;
//}
//
////删除排序数组中的重复项
////https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/
////方法一
////int removeDuplicates(int* nums, int numsSize) {
////	int i = 0, dst = 0,cur = 1, prev = 0;
////	if (numsSize == 0)//当数组为空时直接返回
////		return 0;
////	while (cur < numsSize)
////	{
////		if (nums[cur] != nums[prev])
////		{
////			nums[dst] = nums[prev];
////			dst++;
////		}
////		cur++;
////		prev++;
////	}
////	nums[dst] = nums[prev];
////	dst++;
////	return dst;
////}
////方法2
////int removeDuplicates(int* nums, int numsSize)
////{
////	int i = 0, j = 0;
////	for (i = 0; i < numsSize - 1; i++)//用i来遍历整个数组
////	{
////		if (nums[i] == nums[i + 1])
////		{
////			j++;//记录重复的个数
////		}
////		nums[i + 1 - j] = nums[i + 1];//把下一个元素复制到前面不重复的位置
////	}
////	return numsSize - j;
////}
//void text2()
//{
//	int nums[8] = { 1,1,2,2,2,3,4,4 };
//	int len = removeDuplicates(nums, sizeof(nums) / sizeof(nums[0]));
//	printf("%d\n", len);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//}
//void text1()
//{
//	int nums[6] = { 1,2,3,2,3,2};
//	int val = 2;
//	int len = removeElement(nums, sizeof(nums) / sizeof(nums[0]), val);
//	printf("len = %d", len);
//}
//int main()
//{
//	//text1();
//	text2();
//	return 0;
//}


////方法1
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//	int cur = m + n - 1;
//	m--;
//	n--;
//	while (m >= 0 && n >= 0)
//	{
//		if (nums1[m] >= nums2[n])
//		{
//			nums1[cur] = nums1[m];
//			m--;
//			cur--;
//		}
//		else
//		{
//			nums1[cur] = nums2[n];
//			n--;
//			cur--;
//		}
//	}
//	while (n >= 0)
//	{
//		nums1[cur] = nums2[n];
//		n--;
//		cur--;
//	}
//}
////方法2
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		nums1[i + m] = nums2[i];
//	}
//	for (i = 0; i < m + n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m+n - i - 1; j++)
//		{
//			if (nums1[j] > nums1[j + 1])
//			{
//				int tmp = nums1[j];
//				nums1[j] = nums1[j + 1];
//				nums1[j + 1] = tmp;
//			}
//		}
//	}
//}
//void text1()
//{
//	int nums1[15] = { 1,3,5,7,8,54,90};
//	int nums2[7] = { 2,4,6,8 };
//	merge(nums1, sizeof(nums1), 7, nums2, sizeof(nums2), 4);
//	for (int i = 0; i < 11; i++)
//	{
//		printf("%d ", nums1[i]);
//	}
//}
//int main()
//{
//	text1();
//	return 0;
//}

//求和
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int i = 0;
	for (i = 0; i < numsSize; i++)
	{
		int j = 0;
		for (j = i+1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				int *a = malloc(sizeof(int) * 2);
				a[0] = i;
				a[1] = j;
				*returnSize = 2;
				return a;
			}
		}
	}
	return NULL;
}
int main()
{
	int nums[] = { 2,7,11,15 };
	int target = 9;
	int returnSize = 0;
	int* arr = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);
	printf("下标为 %d %d", arr[0], arr[1]);
	free(arr);
	arr = NULL;
	return 0;
}