#define _CRT_SECURE_NO_WARNINGS


////171. Excel表列序号
//#include<stdio.h>
//#include<string.h>
//int titleToNumber(char * columnTitle)
//{
//	int size = strlen(columnTitle);
//	int sum = 0, multiple = 1;
//	int  i = 0;
//	for (i = size - 1; i >= 0; i--)
//	{
//		int k = columnTitle[i] - 'A' + 1;
//		sum += multiple * k;
//		multiple *= 26;
//	}
//	return sum;
//}
//
//int main()
//{
//	char columnTitle[] = "ZY";
//	int len = titleToNumber(columnTitle);
//	printf("%d", len);
//	return 0;
//}

////434. 字符串中的单词数
//#include<stdio.h>
//int countSegments(char * s)
//{
//	int size = strlen(s);
//	int begin = 0, end = size, cur = 0, count = 0;
//	while (cur <= end && end != 0)
//	{
//		if (s[cur] != ' '&&s[cur] != '\0')
//			cur++;
//		else
//		{
//			if (s[begin] != ' '&&s[begin] != '\0')
//				count++;
//			cur++;
//			begin = cur;
//		}
//	}
//	return count;
//}
//int main()
//{
//	char nums[] = "   ";
//	int len = countSegments(nums);
//	printf("%d", len);
//	return 0;
//}

;
//#include<stdio.h>
//int lengthOfLongestSubstring(char * s)
//{
//	int size = strlen(s);
//	int left = 0, right = 0;
//	int maxleng = 0;
//	int arr[256] = { 0 };//用来记录出现的次数
//	while (right < size)
//	{
//		arr[s[right]]++;
//
//		while (arr[s[right]] > 1)//直到找到和s[right]相同的下一个位置才停止
//		{
//			arr[s[left]]--;
//			left++;
//		}
//
//		if (right - left + 1 > maxleng)
//			maxleng = right - left + 1;
//
//		right++;
//	}
//	return maxleng;
//}
//int main()
//{
//	char s[] = "pwwkew";
//	int len = lengthOfLongestSubstring(s);
//	printf("%d", len);
//	return 0;
//}

////1008 数组元素循环右移问题 (20 分)
//#include<stdio.h>
//void Swap(int* nums, int left, int right)
//{
//	while (left <= right)
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
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int* arr = malloc(sizeof(int)*n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	m = m % n;
//	int left = n - m;
//	Swap(arr, left, n - 1);
//	Swap(arr, 0, left - 1);
//	Swap(arr, 0, n - 1);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", arr[i]);
//		if (i < n - 1)
//			printf(" ");
//	}
//	free(arr);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr1[10][10], arr2[10][10];
//	int i = 0, j = 0;
//	int n, m;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//			if (arr1[i][j] != arr2[i][j])
//				break;
//		}
//	}
//	if (j >= m)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

#include<stdio.h>
int main()
{
	int arr1[10][10] = { 0 };
	int n, m;
	scanf("%d %d", &n, &m);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}

	for (i = 0; i < m; i++)
	{
		int j = 0;
		for (j = 0; j < m; j++)
		{
			arr1[j-1][i] = arr1[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		int j = 0;
		for (j = 0; j < n; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	return 0;
}