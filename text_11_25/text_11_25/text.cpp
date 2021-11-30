//#include"text.h"
////using wkn::fun;
//
//using namespace wkn;
//void text1()
//{
//	fun();
//}
//int main()
//{
//	fun();
//	return 0;
//}

//#include<stdio.h>
//void print(int*arr, int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int n = 10;
//	int arr[10] = { 7 ,1, 4, 6, 8 ,9 ,5 ,2, 3, 10 };
//	int count = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (count <= 3)
//		{
//			print(arr, n);
//			count++;
//		}
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//void print(int*arr, int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int n = 10;
//	int arr[10] = { 7 ,1, 4, 6, 8 ,9 ,5 ,2, 3, 10 };
//	int count = 0;
//	for (int i = 0; i < n-1; i++)
//	{
//		int mini = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[j] < arr[mini])
//			{
//				mini = j;
//			}
//		}
//		int tmp = arr[i];
//		arr[i] = arr[mini];
//		arr[mini] = tmp;
//		if (count < 3)
//		{
//			print(arr, n);
//			count++;
//		}
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//void print(int*arr, int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//
//int main()
//{
//	int n = 10;
//	int arr[10] = { 7 ,1, 4, 6, 8 ,9 ,5 ,2, 3, 10 };
//	int count = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		int end = i;
//		int flag = arr[end + 1];
//		while (end >= 0)
//		{
//			if (flag < arr[end])
//			{
//				arr[end + 1] = arr[end];
//			}
//			else
//				break;
//			end--;
//		}
//		arr[end + 1] = flag;
//		if (count < 3)
//		{
//			print(arr, n);
//			count++;
//		}
//	}
//	print(arr, n);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//void print(int*arr, int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//
//int main()
//{
//	int n = 10;
//	int arr[10] = { 7, 1 ,4, 6, 8, 9, 5, 2, 3, 10 };
//	int count = 0;
//	int gap = 5;
//	while (gap)
//	{
//		for (int i = 0; i < n - gap; i++)
//		{
//			int end = i;
//			int flag = arr[end + gap];
//			while (end >= 0)
//			{
//				if (arr[end] > flag)
//					arr[end + gap] = arr[end];
//				else
//					break;
//				end -= gap;
//			}
//			arr[end + gap] = flag;
//		}
//		if (count < 3)
//		{
//			print(arr, n);
//			count++;
//		}
//		gap /= 2;
//	}
//	print(arr, n);
//}


//#include<iostream>
//using namespace std;
//int* _array(int* a, int n1, int* b, int n2)
//{
//	int* ret = (int*)malloc(sizeof(int)*(n1 + n2));
//	int index = 0;
//	int begin1 = 0, begin2 = 0;
//	while (begin1 < n1&&begin2 < n2)
//	{
//		if (a[begin1] > b[begin2])
//		{
//			ret[index++] = b[begin2++];
//		}
//		else
//			ret[index++] = a[begin1++];
//	}
//	while (begin1 < n1)
//		ret[index++] = a[begin1++];
//	while (begin2 < n2)
//		ret[index++] = b[begin2++];
//
//	for (int i = 0; i < n1 + n2; i++)
//		a[i] = ret[i];
//	free(ret);
//	return a;
//}
//
//void _sort(int* arr, int left, int right)
//{
//	if (left >= right)
//		return;
//	int mid = left + (right - left) / 2;
//	_sort(arr, left, mid);
//	_sort(arr, mid + 1, right);
//
//	_array(arr + left, mid - left+1, arr + mid + 1, right - mid);
//}
//
//int* sort(int*arr, int n)
//{
//	_sort(arr, 0, n - 1);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return arr;
//}
//int main()
//{
//	int n = 15;
//	int arr[] = { 3, 44, 38, 5 ,47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48 };
//	sort(arr, n);
//	return 0;
//}

//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		if (i % 7 == 0)
//			cout << i << " ";
//		else
//		{
//			int tmp = i;
//			while (tmp)
//			{
//				if (tmp % 10 == 7)
//				{
//					cout << i << " ";
//					break;
//				}
//				tmp /= 10;
//			}
//		}
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	printf("%.*lf", c, 1.0*a / b);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n;
//	int arr[1000];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//
//	int i = 0, max = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		int j = 0, sum = 1;
//		for (j = i; j < n; j++)
//		{
//			sum *= arr[j];
//			if (sum > max)
//				max = sum;
//		}
//	}
//	if (max < 0)
//		max = -1;
//	printf("%d", max);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int countDigitOne(int n)
//{
//	if (n == 0)
//		return 0;
//	int count = 0;
//	int z = 0;
//	int tmp = n;
//	while (tmp)
//	{
//		z++;
//		tmp /= 10;
//	}
//	int i = 0;
//	while (z)
//	{
//		int base = (int)pow(10, i);
//		int cur = (n / base) % 10;
//		int next = n / (int)pow(10, i + 1);
//		int tail = n % base;
//		if (cur == 1)
//		{
//			count += next * base + (tail + 1) * 1;
//		}
//		else if (cur > 1)
//		{
//			count += (next + 1)*base;
//		}
//		else
//		{
//			count += next * base;
//		}
//		i++;
//		z--;
//	}
//	return count;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", countDigitOne(n));
//}



//#include<stdio.h>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//void adjustdown(int* arr, int pos, int n)
//{
//	int parent = pos;
//	int child = parent * 2 + 1;
//	while (child <= n)
//	{
//		if (child + 1 <= n&&arr[child] < arr[child + 1])
//			child++;
//		if (arr[parent] < arr[child])
//		{
//			swap(arr[child], arr[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//			break;
//	}
//}
//void sort(int* arr, int n)
//{
//	for (int i = (n - 2) / 2; i >= 0; i--)
//	{
//		adjustdown(arr, i, n - 1);
//	}
//	int end = n - 1;
//	while (end > 0)
//	{
//		swap(arr[0], arr[end]);
//		end--;
//		adjustdown(arr, 0, end);
//
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//int main()
//{
//	int n = 10;
//	int arr[] = { 7 ,1, 4, 6, 8, 9, 5, 2, 3, 10 };
//	sort(arr, n);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//void text(int* arr, int n)
//{
//	int max = arr[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//
//	int flag[100] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		flag[arr[i]]++;
//	}
//	int index = 0;
//	for (int i = 0; i <= max; i++)
//	{
//		if (flag[i])
//			cout << i << " " << flag[i] << endl;
//		while (flag[i])
//		{
//			arr[index++] = i;
//			flag[i]--;
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << " ";
//}
//
//int main()
//{
//	int n = 10;
//	int nums[] = { 7 ,1, 4, 6, 8, 9, 5, 2, 3, 10 };
//	text(nums, n);
//	return 0;
//}
