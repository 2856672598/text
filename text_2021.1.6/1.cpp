#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr1[100], arr2[100];
	int i = 0;
	int n, m;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	int j = 0;
	i = 0;
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			printf("%d ", arr1[i]);
			i++;
		}
		else
		{
			printf("%d ", arr2[j]);
			j++;
		}
	}
	if (i == n)//打印未比较的数
	{
		for (; j < m; j++)
		{
			printf("%d ", arr2[j]);
		}
	}
	else
		for (; i < n; i++)
		{
			printf("%d ", arr1[i]);
		}
	return 0;
}