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


//#include<stdio.h>
//void Base(int x)
//{
//	if (x >= 6)
//		Base(x / 6);
//	printf("%d", x % 6);
//}
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	Base(x);
//	return 0;
//}



////31. 下一个排列
//#include<stdio.h>
//void nextPermutation(int* nums, int numsSize)
//{
//	//找第二小的数
//	int i = numsSize - 2;
//	while (i >= 0 && nums[i] >= nums[i + 1])
//		i--;
//	if (i >= 0)
//	{
//		int j = numsSize - 1;
//		while (j >= 0 && nums[i] >= nums[j])
//		{
//			j--;
//		}
//		int tmp = nums[i];
//		nums[i] = nums[j];
//		nums[j] = tmp;
//	}
//	int left = i + 1, right = numsSize - 1;
//	while (left < right)
//	{
//		int tmp = nums[left];
//		nums[left] = nums[right];
//		nums[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int nums[] = { 2,2,7,5,4,3,2,2,1 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	nextPermutation(nums, size);
//	for (int i = 0; i < size; i++)
//		printf("%d", nums[i]);
//	return 0;
//}


//#include<stdio.h>
//void Bubb_Sort(int* nums, int size)
//{
//	int i = 0;
//	for (int i = 0; i < size; i++)
//	{
//		int j = 0, flag = 1;
//		for (int j = 0; j < size - 1 - i; j++)
//		{
//			if (nums[j] > nums[j + 1])
//			{
//				int tmp = nums[j];
//				nums[j] = nums[j + 1];
//				nums[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag)
//			break;
//	}
//}
//int main()
//{
//	int nums[] = { 1,2,3,4,5,6,7,8,0 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	Bubb_Sort(nums, size);
//	for (int i = 0; i < size; i++)
//		printf("%d ", nums[i]);
//	return 0;
//}

//#include<stdio.h>
//void Swap(int* nums1, int size1, int* nums2, int size2)
//{
//	int begin1 = 0, begin2 = 0;
//	while (begin1 < size1&& begin2 < size2)
//	{
//		int tmp = nums1[begin1];
//		nums1[begin1] = nums2[begin2];
//		nums2[begin2] = tmp;
//		begin1++;
//		begin2++;
//	}
//}
//int main()
//{
//	int nums1[] = { 1,2,3,4,5 };
//	int nums2[] = { 6,7,8,9,10 };
//	int size1 = sizeof(nums1) / sizeof(nums1[0]);
//	int size2 = sizeof(nums2) / sizeof(nums2[0]);
//	int i = 0;
//	Swap(nums1, size1, nums2, size2);
//	for (i = 0; i < size1; i++)
//		printf("%d ", nums1[i]);
//	printf("\n");
//	for (i = 0; i < size2; i++)
//		printf("%d ", nums2[i]);
//	return 0;
//}

////1012 数字分类 (20 分)
//#include<stdio.h>
//int main()
//{
//	int n = 0, input = 0;
//	int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
//	int flag = 1, count2 = 0, count4 = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		scanf("%d", &input);
//		int rema = input % 5;
//		if (rema == 0 && input % 2 == 0)
//			a1 += input;
//		if (rema == 1)
//		{
//			a2 += flag * input;
//			flag *= -1;
//			count2++;
//		}
//		if (rema == 2)
//			a3 += 1;
//		if (rema == 3)
//		{
//			a4 += input;
//			count4++;
//		}
//		if (rema == 4)
//		{
//			if (input > a5)
//				a5 = input;
//		}
//		n--;
//	}
//	if (a1 == 0)
//		printf("%c ", 'N');
//	else
//		printf("%d ", a1);
//	if (count2 == 0)
//		printf("%c ", 'N');
//	else
//		printf("%d ", a2);
//	if (a3 == 0)
//		printf("%c ", 'N');
//	else
//		printf("%d ", a3);
//
//	if (count4 == 0)
//		printf("%c ", 'N');
//	else
//		printf("%.1lf ", a4*1.0 / count4);
//	if (a5 == 0)
//		printf("%c", 'N');
//	else
//		printf("%d", a5);
//	return 0;
//}


////1009 说反话 (20 分)
//#include<stdio.h>
//#include<string.h>
//void Swap(char* nums, int left, int right)
//{
//	while (left < right)
//	{
//		char tmp = nums[left];
//		nums[left] = nums[right];
//		nums[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char nums[81];
//	gets(nums);
//	int size = strlen(nums);
//	int begin = 0, cur = 0;
//	while (cur <= size)
//	{
//		if (nums[cur] != ' '&& nums[cur] != '\0')
//			cur++;
//		else
//		{
//			Swap(nums, begin, cur - 1);
//			begin = cur + 1;
//			cur++;
//		}
//	}
//	Swap(nums, 0, size - 1);
//	printf("%s", nums);
//	return 0;
//}


//#include<stdio.h>
//void Init(int* nums, int size, int val)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		nums[i] = val;
//	}
//}
//void Print(int* nums, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//		printf("%d ", nums[i]);
//}
//void Reverse(int* nums, int left, int right)
//{
//	while (left < right)
//	{
//		int tmp = nums[left];
//		nums[left] = nums[right];
//		nums[right] = tmp;
//		right--;
//		left++;
//	}
//}
//int main()
//{
//	int nums[] = { 1,2,3,4,5,9,0,3 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	//Init(nums, size, 0);
//
//	//Print(nums, size);
//
//	Reverse(nums, 0, size - 1);
//	Print(nums, size);
//	return 0;
//}


////1013 数素数 (20 分)
//#include<stdio.h>
//#include<stdbool.h>
//#include<math.h>
//bool Prime(int x)
//{
//	int i = 2;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x%i == 0)
//			return false;
//	}
//	return true;
//}
//int main()
//{
//	int i = 0, count = 0, a, b;
//	int flag = 0;
//	scanf("%d %d", &a, &b);
//	for (i = 2;; i++)
//	{
//		if (Prime(i))
//		{
//			count++;
//			if (count >= a && count <= b)
//			{
//				flag++;
//				printf("%d", i);
//				if (flag % 10 == 0)
//					printf("\n");
//				else if (count != b)
//					printf(" ");
//			}
//			if (count > b)
//				break;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	unsigned tmp = (unsigned)m^n;
//	int count = 0;
//	while (tmp)
//	{
//		if (tmp & 1)
//			count++;
//		tmp >>= 1;
//	}
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	unsigned int tmp = (unsigned)n;
//	int arr[32] = { 0 };
//	int i = 0;
//	while (tmp)
//	{
//		arr[i++] = tmp & 1;
//		tmp >>= 1;
//	}
//	printf("奇数位：");
//	for (i = 0; i < 32; i += 2)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n偶数位：");
//	for (i = 1; i < 32; i += 2)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int NumberOf1(int n)
//{
//	unsigned int tmp = (unsigned)n;
//	int count = 0;
//	while (tmp)
//	{
//		if (tmp & 1)
//			count++;
//		tmp >>= 1;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = NumberOf1(n);
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>
//void Swap1(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void Swap2(int* a, int* b)
//{
//	*a = (*a) ^ (*b);
//	*b = (*a) ^ (*b);
//	*a = (*a) ^ (*b);
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("交换前a = %d,b = %d\n", a, b);
//	Swap2(&a, &b);
//	printf("交换后a = %d,b = %d", a, b);
//	return 0;
//}

//#include<stdio.h>
//void Sort(int* nums, int size)
//{
//	int i = 0;
//	for (i = 0; i < size - 1; i++)
//	{
//		int end = i, flag = nums[end + 1];
//		while (end >= 0)
//		{
//			if (nums[end] > nums[end + 1])
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
//
//int cmp(const void* a, const void* b)
//{
//	return (*(int*)a) - (*(int*)b);
//}
//
//int majorityElement(int* nums, int numsSize)
//{
//	qsort(nums, numsSize, sizeof(int), cmp);
//	int mid = numsSize / 2;
//	int left = 0, right = numsSize - 1;
//	while (mid <= right)
//	{
//		if (nums[left] != nums[mid])
//		{
//			left++;
//			mid++;
//		}
//		else
//			break;
//	}
//	return nums[mid];
//}
//int main()
//{
//	int nums[] = { 3,2,3 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int ret = majorityElement(nums, size);
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a, x;
//	for (a = 0, x = 0; a <= 1 && !x++; a++)
//	{
//		a++;
//	}
//	printf("%d %d", a, x);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int* singleNumbers(int* nums, int size, int* returnSize)
//{
//	int i = 0, tmp = 0;
//	for (i = 0; i < size; i++)
//	{
//		tmp ^= nums[i];
//	}
//	unsigned int flag = 1;
//	while (tmp)
//	{
//		if (tmp & flag)
//			break;
//		flag <<= 1;
//	}
//	int ret1 = 0, ret2 = 0;
//	for (i = 0; i < size; i++)
//	{
//		if (nums[i] & flag)
//		{
//			ret1 ^= nums[i];
//		}
//		else
//			ret2 ^= nums[i];
//	}
//	*returnSize = 0;
//	int* ret = malloc(sizeof(int) * 2);
//	if (ret)
//	{
//		ret[(*returnSize)++] = ret1;
//		ret[(*returnSize)++] = ret2;
//	}
//	return ret;
//}
//int main()
//{
//	int nums[] = { 1,2,10,4,1,4,3,3 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int returnSize = 0;
//	int* ret = singleNumbers(nums, size, &returnSize);
//	int i = 0;
//	for (i = 0; i < returnSize; i++)
//		printf("%d ", ret[i]);
//	free(ret);
//	return 0;
//}

////75. 颜色分类
//#include<stdio.h>
//void sortColors(int* nums, int numsSize)
//{
//	int i = 0;
//	for (i = 0; i < numsSize - 1; i++)
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
//int main()
//{
//	int nums[] = { 2,0,2,1,1,0 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	int i = 0;
//	sortColors(nums, numsSize);
//	for (i = 0; i < numsSize; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	return 0;
//}


//79. 单词搜索
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
typedef struct Seat
{
	int x;
	int y;
}Seat;
bool Is_Path(char** board, int boardSize, int* boardColSize, Seat pos, char * word)
{
	if (pos.x >= 0 && pos.x < boardSize &&pos.y >= 0 && pos.y < *boardColSize&&board[pos.x][pos.y] == *word)
		return true;
	return false;
}
bool _exist(char** board, int boardSize, int* boardColSize, char * word, Seat pos)
{
	int size = strlen(word);
	if (board[pos.x][pos.y] == *word && size == 1)//ba  ab
		return true;
	
	//防止死递归应该走过的路更改
	board[pos.x][pos.y] = '*';

	//下
	Seat next;
	next.x = pos.x + 1;
	next.y = pos.y;
	if (Is_Path(board, boardSize, boardColSize, next, word + 1))
	{
		//位置合法
		if (_exist(board, boardSize, boardColSize, word + 1, next))
			return true;
		//换条路继续找
	}

	//右
	next.x = pos.x;
	next.y = pos.y + 1;
	if (Is_Path(board, boardSize, boardColSize, next, word + 1))
	{
		//位置合法
		if (_exist(board, boardSize, boardColSize, word + 1, next))
			return true;
	}

	//上
	next.x = pos.x - 1;
	next.y = pos.y;
	if (Is_Path(board, boardSize, boardColSize, next, word + 1))
	{
		//位置合法
		if (_exist(board, boardSize, boardColSize, word + 1, next))
			return true;
	}

	//左
	next.x = pos.x;
	next.y = pos.y - 1;
	if (Is_Path(board, boardSize, boardColSize, next, word + 1))
	{
		//位置合法
		if (_exist(board, boardSize, boardColSize, word + 1, next))
			return true;
	}

	//当前位置的四个方向均不通
	board[pos.x][pos.y] = *word;
	return false;
}

bool exist(char** board, int boardSize, int* boardColSize, char * word)
{
	int i = 0;
	for (i = 0; i < boardSize; i++)
	{
		int j = 0;
		for (j = 0; j < *boardColSize; j++)
		{
			Seat pos;
			pos.x = i;
			pos.y = j;
			if (board[pos.x][pos.y] == *word)
			{
				if (_exist(board, boardSize, boardColSize, word, pos))
					return true;
			}
		}
	}
	return false;
}

int main()
{
	int row = 2;
	int col = 1;
	char** nums = malloc(sizeof(char*) * row);
	int i = 0;
	for (i = 0; i < row; i++)
	{
		nums[i] = malloc(sizeof(char) * col);
		int j = 0;
		for (j = 0; j < col; j ++ )
		{
			scanf("%c", &nums[i][j]);
		}
		getchar();
	}
	char word[] = "ba";
	int flag = exist(nums, row, &col, word);
	printf("%d", flag);
	for (i = 0; i < row; i++)
	{
		free(nums[i]);
	}
	return 0;
}

