#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<stdbool.h>
//#include<assert.h>
////240. 搜索二维矩阵 II
//bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target)
//{
//	assert(matrix && matrixColSize);
//	int row = 0, col = matrixColSize[0] - 1;
//	int flag = 0;
//	while (row < matrixSize && col >= 0)
//	{
//		if (matrix[row][col] > target)
//		{
//			col--;
//		}
//		else if (matrix[row][col] < target)
//			row++;
//		else
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag)
//		return true;
//	return false;
//}
//int main()
//{
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	char nums1[] = "hello";
//	char nums2[] = "hello";
//	const char* p1 = "hello";
//	const char* p2 = "hello";
//	if (nums1 == nums2)//变量nums1 和nums2 是单独开辟空间的
//		printf("nums1 == nums2\n");
//	else
//		printf("nums1!= nums2\n");
//	if (p1 == p2)//p1 p2都是指向同一个字符串常量
//		printf("p1 == p2\n");
//	else
//		printf("p1 != p2\n");
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//void print1(int* nums, int numsSize)
//{
//	assert(nums);
//	int i = 0;
//	for (i = 0; i < numsSize; i++)
//		printf("%d ", nums[i]);
//}
//void Print2(int(*arr)[6], int size)
//{
//	assert(arr);
//	int i = 0;
//	for (i = 0; i < size; i++)
//		printf("%d ", (*arr)[i]);
//}
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//print1(arr, size);
//
//	Print2(&arr, size);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//void print1(int nums[][4], int row, int col)
//{
//	assert(nums);
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", nums[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[4], int row, int col)
//{
//	assert(p);
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int nums[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int row = 3, col = 4;
//	//print1(nums, row, col);
//	print2(nums, row, col);
//	return 0;
//}


//#include<stdio.h>
//void print1(int* nums[], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", nums[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int nums1[] = { 1,2,3,4,5 };
//	int nums2[] = { 2,3,4,5,6 };
//	int nums3[] = { 3,4,5,6,7 };
//
//	int *nums[] = { nums1,nums2,nums3 };
//	int row = 3, col = 5;
//	print1(nums, row, col);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//#include<stdbool.h>
//void reMove(char* s, int left, int right)
//{
//	assert(s);
//	while (left < right)
//	{
//		char ch = s[left];
//		s[left] = s[right];
//		s[right] = ch;
//		left++;
//		right--;
//	}
//}
//void leftRotate(char* s, int k)
//{
//	assert(s);
//	int size = strlen(s);
//	k %= size;
//	reMove(s, 0, k - 1);
//	reMove(s, k, size - 1);
//	reMove(s, 0, size - 1);
//}
//
//int main()
//{
//	char s[] = "ABCD";
//	int k = 5;
//	leftRotate(s, k);
//	printf("%s", s);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<string.h>
////bool isLeftRotate(char* des, char*sour)
////{
////	int size = strlen(des);
////	char* arr = malloc(sizeof(char)*(size * 2 + 1));
////	strcpy(arr, des);
////	strcat(arr, des);
////	int i = 0;
////	int end = size, cur1 = 0, cur2 = 0;
////	int flag = 0;
////	while (end < 2 * size)
////	{
////		while (cur1 < end &&arr[cur1] == sour[cur2])
////		{
////			cur1++;
////			cur2++;
////		}
////		if (cur1 < end)
////		{
////			cur2 = 0;
////			cur1 = ++i;
////			end += 1;
////		}
////		else
////		{
////			flag = 1;
////			break;
////		}
////	}
////	free(arr);
////	if (flag)
////		return true;
////	return false;
////}
//
//bool isLeftRotate(char* des, char*sour)
//{
//	int size = strlen(des);
//	char* arr = malloc(sizeof(char)*(size * 2 + 1));
//	strcpy(arr, des);
//	strcat(arr, des);
//	if (strstr(arr, sour))
//		return true;
//	return false;
//}
//int main()
//{
//	char arr1[] = "AAAAC";
//	char arr2[] = "AAAAA";
//	printf("%d", isLeftRotate(arr1, arr2));
//	return 0;
//}


////1962. 移除石子使总数最小
//#include<stdio.h>
//#include<assert.h>
//void adjustDown(int* nums, int size, int root)
//{
//	assert(nums);
//	int parent = root;
//	int child = root * 2 + 1;//默认左孩子
//	while (child < size)
//	{
//		if (child + 1 < size&&nums[child] < nums[child + 1])
//		{
//			child += 1;
//		}
//		if (nums[child] > nums[parent])
//		{
//			int tmp = nums[child];
//			nums[child] = nums[parent];
//			nums[parent] = tmp;
//			parent = child;
//			child = child * 2 + 1;
//		}
//		else
//			break;
//	}
//}
//void heapSort(int* nums, int size)
//{
//	//建堆
//	int i = 0;
//	for (i = (size - 1 - 1) / 2; i >= 0; i--)
//	{
//		adjustDown(nums, size, i);
//	}
//}
//int minStoneSum(int* piles, int pilesSize, int k)
//{
//	assert(piles);
//	heapSort(piles, pilesSize);
//	while (k)
//	{
//		int floor = 0;
//		if (piles[floor] % 2 != 0)
//		{
//			piles[floor] /= 2;
//			piles[floor] += 1;
//		}
//		else
//			piles[floor] /= 2;
//		k--;
//
//		adjustDown(piles, pilesSize, 0);
//	}
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < pilesSize; i++)
//	{
//		sum += piles[i];
//	}
//	return sum;
//}
//int main()
//{
//	int nums[] = { 4,3,6,7 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	int k = 3;
//	int ret = minStoneSum(nums, numsSize, k);
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>
//int  main()
//{
//	int n = 1000000;
//	int count = 0;
//	while (n)
//	{
//		count += n % 7;
//		n /= 7;
//	}
//	printf("%d", count);
//	return 0;
//}

////825. 适龄的朋友
//#include<stdio.h>
//int numFriendRequests(int* ages, int agesSize)
//{
//	int arr[121] = { 0 };
//	int i = 0;
//	for (i = 0; i < agesSize; i++)
//	{
//		arr[ages[i]]++;
//	}
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int count = 0;
//	for (i = 0; i < size; i++)
//	{
//		if (arr[i] == 0)
//			continue;
//		int j = 0;
//		for (j = 0; j < size; j++)
//		{
//			if (arr[j] == 0)
//				continue;
//			if (j <= 0.5*i + 7
//				|| j > i
//				|| (j > 100 && i < 100))
//				continue;
//			if (i == j)
//			{
//				count += arr[i] * (arr[j] - 1);
//			}
//			else
//				count += arr[i] * arr[j];
//
//		}
//	}
//	return count;
//}
//int main()
//{
//	int ages[] = { 16,17,18 };
//	int size = sizeof(ages) / sizeof(ages[0]);
//	int ret = numFriendRequests(ages, size);
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//int integerComp(const void* x, const void* y)
//{
//	assert(x&&y);
//	return *(int*)x - *(int*)y;
//}
//int floatComp(const void*x, const void* y)
//{
//	assert(x&&y);
//	if (*(float*)x == *(float*)y)
//		return 0;
//	return (*(float*)x > *(float*)y) ? 1 : -1;
//}
//int charComp(const void* x, const void* y)
//{
//	assert(x&&y);
//	return *(char*)x - *(char*)y;
//}
//void text1()
//{
//	int nums1[] = { 1,6,3,6,2,8 };
//	int size1 = sizeof(nums1) / sizeof(nums1[0]);
//	qsort(nums1, size1, sizeof(int), integerComp);
//	int i = 0;
//	for (i = 0; i < size1; i++)
//		printf("%d ", nums1[i]);
//	printf("\n");
//}
//void text2()
//{
//	char nums2[] = "vftwxpoqadf";
//	int size2 = strlen(nums2);
//	qsort(nums2, size2, sizeof(char), charComp);
//	int i = 0;
//	for (i = 0; i < size2; i++)
//		printf("%c ", nums2[i]);
//	printf("\n");
//}
//void text3()
//{
//	float nums3[] = { 1.45,1.456,7.89,45.6,12.6,89.0,23.65,237.9 };
//	int size3 = sizeof(nums3) / sizeof(nums3[0]);
//	qsort(nums3, size3, sizeof(float), floatComp);
//	int i = 0;
//	for (i = 0; i < size3; i++)
//		printf("%f ", nums3[i]);
//	printf("\n");
//}
//int main()
//{
//	text1();
//	text2();
//	text3();
//	return 0;
//}


//#include<stdio.h>
//#include<stdbool.h>
//#include<assert.h>
//bool searchMatrix(int(*arr)[5], int target, int rowSize, int colSize)
//{
//	assert(arr);
//	int row = 0, col = colSize - 1;
//	int flag = 0;
//	while (row < rowSize&&col >= 0)
//	{
//		if (arr[row][col] > target)
//		{
//			col--;
//		}
//		else if (arr[row][col] < target)
//			row++;
//		else
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag)
//		return true;
//	return false;
//}
//int main()
//{
//	int matrix[][5] = { 1, 4, 7, 11, 15,
//		2, 5, 8, 12, 19,
//		3, 6, 9, 16, 22,
//		10, 13, 14, 17, 24,
//		18, 21, 23, 26, 30 };
//	int target = 16, row = 4, col = 5;
//	int ret = searchMatrix(matrix, target, row, col);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//int add(const int x, const int y)
//{
//	return x + y;
//}
//int sub(const int x, const int y)
//{
//	return x - y;
//}
//int mul(const int x, const int y)
//{
//	return x * y;
//}
//int div(const int x, const int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*************************************\n");
//	printf("***** 1. ADD             2. SUB******\n");
//	printf("***** 3. Mul             4. DIV******\n");
//	printf("************** 0. EXIT **************\n");
//}
//void calcu(int(*p)(int, int))
//{
//	assert(p);
//	int x, y;
//	printf("请输入两个操作数>");
//	scanf("%d %d", &x, &y);
//	int ret = p(x, y);
//	printf("ret = %d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calcu(add);
//			break;
//		case 2:
//			calcu(sub);
//			break;
//		case 3:
//			calcu(mul);
//			break;
//		case 4:
//			calcu(div);
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
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*p)(int, int) = &add;
//	int ret = p(a, b);
//	printf("%d", ret);//调用
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//int maxSubarray(int* nums, int size)
//{
//	assert(nums);
//	int max = nums[0];
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		int sum = nums[i];
//		int j = 0;
//		for (j = i + 1; j < size; j++)
//		{
//			sum += nums[j];
//			if (sum > max)
//				max = sum;
//		}
//	}
//	return max;
//}
//int main()
//{
//	int nums[] = { 1,-2,3,10,-4,7,2,-5 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int ret = maxSubarray(nums, size);
//	printf("%d", ret);
//	return 0;
//}


////658. 找到 K 个最接近的元素
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
////int comp(const void* x, const void* y)
////{
////	return *(int*)x - *(int*)y;
////}
////int* findClosestElements(int* arr, int arrSize, int k, int x, int* returnSize)
////{
////	int i = 0;
////	for (i = 0; i < arrSize - 1; i++)
////	{
////		int end = i, flag = arr[end + 1];
////		while (end >= 0)
////		{
////			if (abs(arr[end] - x) > abs(flag - x))
////			{
////				arr[end + 1] = arr[end];
////				end--;
////			}
////			else
////				break;
////		}
////		arr[end + 1] = flag;
////	}
////	int* ret = malloc(sizeof(int)*k);
////	for (i = 0; i < k; i++)
////		ret[i] = arr[i];
////	*returnSize = k;
////	qsort(ret, k, sizeof(int), comp);
////	return ret;
////}
//
//int* findClosestElements(int* arr, int arrSize, int k, int x, int* returnSize)
//{
//	assert(arr);
//	int left = 0, right = arrSize - 1;
//	while (right - left >= k)
//	{
//		if (abs(arr[left] - x) <= abs(arr[right] - x))
//			right--;
//		else
//			left++;
//	}
//	*returnSize = k;
//	return &arr[left];
//}
//int main()
//{
//	int nums[] = { 0,0,1,2,3,3,4,7,7,8 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int k = 3, x = 5;
//	int returnSize = 0;
//	int* ret = findClosestElements(nums, size, k, x, &returnSize);
//	int i = 0;
//	for (i = 0; i < returnSize; i++)
//		printf("%d ", ret[i]);
//	//free(ret);
//	return 0;
//}




//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char firstUniqChar(char* s)
//{
//	assert(s);
//	int size = strlen(s);
//	int i = 0;
//	int count[26] = { 0 };
//	for (i = 0; i < size; i++)
//	{
//		count[s[i] - 'a']++;
//	}
//	for (i = 0; i < 26; i++)
//	{
//		if (count[i] == 1)
//			break;
//	}
//	return count[i] + 'a';
//}
//int main()
//{
//	char s[] = "abaccdeff";
//	printf("%c", firstUniqChar(s));
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char firstRepeatChar(char* s)
//{
//	assert(s);
//	int size = strlen(s);
//	int i = 0;
//	int count[26] = { 0 };
//	for (i = 0; i < size; i++)
//	{
//		if (count[s[i] - 'a'] == 1)
//			break;
//		else
//			count[s[i] - 'a']++;
//	}
//	return s[i];
//}
//int main()
//{
//	char s[] = "qwywyer23tdd";
//	printf("%c", firstRepeatChar(s));
//	return 0;
//}

#include<stdio.h>
//long long myPow(int x, int y)
//{
//	int flag = y % 2;
//	long long sum = x;
//	while (y / 2)
//	{
//		sum *= sum;
//		y /= 2;
//	}
//	if (flag)
//		sum *= x;
//	return sum;
//}
