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



//#include<stdio.h>
//int main()
//{
//	int arr1[10][10] = { 0 };
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr1[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0, sum = 0;
//	scanf("%d", &n);
//	int prev = 0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		prev = prev * 10 + n;
//		sum += prev;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int tmp = i, count = 0;
//		long long sum = 0;
//		while (tmp)
//		{
//			count++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int maxProduct(int* nums, int numsSize)
//{
//	int i = 0, max = nums[0];
//	for (i = 0; i < numsSize; i++)
//	{
//		int j = 0, sum = 1;
//		for (j = i; j < numsSize; j++)
//		{
//			sum *= nums[j];
//			if (sum > max)
//				max = sum;
//		}
//	}
//	return max;
//}
//int main()
//{
//	int nums[] = { 2,3,-2,4 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int max = maxProduct(nums, size);
//	printf("%d", max);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = (char)(-1 - i);
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}

//#include<stdio.h>
//int fun(char *s)
//{
//	char *p = s;
//	while (*p != '\0') {
//		p++;
//	}
//	return(p - s);
//}
//int main()
//{
//	printf("%d\n", fun("goodbye!"));
//}

//#include<stdio.h>
//int main()
//{
//	//‭00000000000000000000000010100101‬
//	//000001111111111111111111 
//	//00000000000000000000000011111010
//	unsigned char a = 0xA5;
//	unsigned char b = ~a >> 5;
//	printf("%d\n", b);//250
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	const int i = 0;
//	int *j = (int *)&i;
//	*j = 1;
//	printf("%d,%d", i, *j);
//}

//#include<stdio.h>
//void fun(int x, int y, int *c, int *d)
//{
//	*c = x + y;
//	*d = x - y;
//}
//int main()
//{
//	int a = 4, b = 3, c = 0, d = 0;
//	fun(a, b, &c, &d);
//	printf("%d %d\n", c, d);
//}



////回文数判断
//#include<stdio.h>
//#include<stdbool.h>
//bool IsPalindrome(int x)
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int tmp = x;
//	while (tmp)
//	{
//		arr[i++] = tmp % 10;
//		tmp /= 10;
//	}
//	int left = 0, right = i - 1;
//	while (left < right)
//	{
//		if (arr[left] != arr[right])
//			break;
//		left++;
//		right--;
//	}
//	if (left < right)
//		return false;
//	return true;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", IsPalindrome(n));
//	return 0;
//}

//#include<stdio.h>
//void main()
//{
//	char *szStr = "abcde";
//	szStr += 2;
//	printf("%lu\n", szStr);
//	return;
//}


//1027 打印沙漏 (20 分)
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	getchar();//读掉空格

	char flag = getchar();
	int max = 1, count = 1, sum = 0;
	while (1)
	{
		sum += max + 2;
		if (sum * 2 + 1 > n)
			break;
		max += 2;
		count++;
	}

	int i = 0;
	for (i = 0; i < count; i++)
	{
		int z = 0;
		for (z = i; z > 0; z--)
			printf(" ");

		int j = 0;
		for (j = max; j > 0; j--)
		{
			printf("%c", flag);
		}
		printf("\n");
		max -= 2;
	}
	max = 1;
	for (i = count - 2; i >= 0; i--)
	{
		int z = 0;
		for (z = i; z > 0; z--)
			printf(" ");


		int j = 0;
		max += 2;
		for (j = 0; j < max; j++)
		{
			printf("%c", flag);
		}
		printf("\n");
	}
	printf("%d", n - (sum * 2 + 1 - (max + 2) * 2));
	return 0;
}



