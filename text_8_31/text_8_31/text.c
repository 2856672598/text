#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct A
//{
//	int age;
//	char name[10];
//};
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int cmp_letter(const void* e1, const void* e2)
//{
//	return strcmp((char*)e1, (char*)e2);
//}
//
//int _cmp_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct A*)e1)->name, ((struct A*)e2)->name);
//}
//
//int _cmp_age(const void* e1, const void* e2)
//{
//	return ((struct A*)e1)->age - ((struct A*)e2)->age;
//}
//
//void Swap(char* e1, char* e2, size_t width)
//{
//	size_t i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;
//	}
//}
//
//void BubbleSort(void*base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2))
//{
//	size_t i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		size_t j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1)*width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//void text()
//{
//	int arr[] = { 1,6,8,2,6,4,0,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//}
//
//void text1()
//{
//	char arr[] = "asdfghjkloiyr";
//	int sz = strlen(arr);
//	BubbleSort(arr, sz, sizeof(arr[0]), cmp_letter);
//	printf("%s", arr);
//}
//
////排结构体
//void text2()
//{
//	struct A arr[3] = { {18,"zhansan"},{20,"lisi"},{5,"wangwu"} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//BubbleSort(arr, sz, sizeof(arr[0]), _cmp_age);
//	BubbleSort(arr, sz, sizeof(arr[0]), _cmp_name);
//}
//
//int main()
//{
//	//text();
//	//text1();
//	text2();
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	a += a *= a -= a / 3;
//	printf("%d", a);
//	return 0;
//}


//#include<stdio.h>
//int maxSubArray(int* nums, int numsSize)
//{
//	int sum = 0;
//	int i = 0;
//	int max = nums[0];
//	for (i = 0; i < numsSize; i++)
//	{
//		sum += nums[i];
//		if (sum > max)
//			max = sum;
//		if (sum < 0)
//			sum = 0;
//	}
//	return max;
//}
//
//int main()
//{
//	int nums[] = { -2 };
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int ret = maxSubArray(nums, sz);
//	printf("%d", ret);
//	return 0;
//}

////BC100 有序序列合并
//#include<stdio.h>
//#include<stdlib.h>
//int* merge(int* nums1, int nums1Size, int* nums2, int nums2Size,int* returnSize)
//{
//	int size = nums2Size + nums1Size;
//	int* retArr = (int*)malloc(sizeof(int)*size);
//
//	int begin1 = 0, begin2 = 0;
//	int insert = 0;
//	while (begin1 != nums1Size && begin2 != nums2Size)
//	{
//		if (nums1[begin1] > nums2[begin2])
//		{
//			retArr[insert++] = nums2[begin2++];
//		}
//		else
//			retArr[insert++] = nums1[begin1++];
//	}
//
//	while (begin1 != nums1Size)
//	{
//		retArr[insert++] = nums1[begin1++];
//	}
//
//	while (begin2 != nums2Size)
//	{
//		retArr[insert++] = nums2[begin2++];
//	}
//
//	*returnSize = insert;
//	return retArr;
//}
//
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int nums1[100];
//	int nums2[100];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &nums1[i]);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &nums2[i]);
//	}
//	int returnSize = 0;
//	int* ret = merge(nums1, n, nums2, m, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//		printf("%d ", ret[i]);
//	free(ret);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[50];
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int dele;
//	scanf("%d", &dele);
//	int insert = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != dele)
//		{
//			arr[insert++] = arr[i];
//		}
//	}
//	for (i = 0; i < insert; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[50];
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int i = 0;
//	int descending = 0, ascending = 0;
//	int tmp = 0;
//	while (i < n - 1)
//	{
//		if (arr[i] < arr[i + 1])
//		{
//			ascending++;
//		}
//		else if (arr[i] > arr[i + 1])
//			descending++;
//		if (descending && ascending)
//		{
//			tmp = 1;
//			break;
//		}
//		i++;
//	}
//	if (tmp == 1)
//		printf("unsorted");
//	else
//		printf("sorted");
//	return 0;
//}


#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* des, const char* sou)
{
	assert(des&&sou);
	char* ret = des;
	while (*des++ = *sou++);
	return ret;
}
int main()
{
	char nums1[] = "XXXXXXXXXXXXXXXXXXXXXXX";
	char nums2[] = "hello";
	my_strcpy(nums1, nums2);
	printf("%s", nums1);
	return 0;
}