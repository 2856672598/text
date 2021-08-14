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


//179. ×î´óÊý
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
int cmp(const void* a, const void* b)
{
	char arr1[100] = "0";
	char arr2[100] = "0";
	sprintf(arr1, "%d%d", *(int*)a, *(int*)b);
	sprintf(arr2, "%d%d", *(int*)b, *(int*)a);
	return strcmp(arr2, arr1);
}
char * largestNumber(int* nums, int numsSize)
{
	assert(nums);
	qsort(nums, numsSize, sizeof(int), cmp);
	char* ret = malloc(sizeof(int) * 101);
	assert(ret);
	if (nums[0] == 0)
	{
		ret[0] = '0';
		ret[1] = '\0';
	}
	else
	{
		int i = 0, insert = 0;
		for (i = 0; i < numsSize; i++)
		{
			insert += sprintf(&ret[insert], "%d", nums[i]);
		}
	}
	return ret;
}
int main()
{
	int nums[] = { 0,0 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	char* ret = largestNumber(nums, numsSize);
	printf("%s", ret);
	return 0;
}