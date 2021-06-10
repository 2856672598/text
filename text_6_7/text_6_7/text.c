#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
//766. 托普利茨矩阵
//https://leetcode-cn.com/problems/toeplitz-matrix/
bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize)
{
	int row = matrixSize, col = *matrixColSize;
	for (int i = 0; i < row-1; i++)
	{
		for (int j = 0; j < col-1; j++)
		{
			if (matrix[i][j] != matrix[i + 1][j + 1])
				return false;
		}
	}
	return true;
}

//344. 反转字符串
//https://leetcode-cn.com/problems/reverse-string/
void reverseString(char* s, int sSize)
{
	int left = 0, right = sSize - 1;
	while (left < right)
	{
		char tmp = s[left];
		s[left] = s[right];
		s[right] = tmp;
		left++;
		right--;
	}
}

char * addStrings(char * num1, char * num2)
{
	int size1 = strlen(num1);
	int size2 = strlen(num2);

	int size = size1 > size2 ? size1 : size2;
	char* arr = malloc(sizeof(char)*(size + 2));
	int i = size1 - 1, j = size2 - 1, len = 0;

	int flag = 0;
	while (i >= 0 || j >= 0)
	{
		char data1 = '0', data2 = '0';
		if (i >= 0)
			data1 = num1[i];
		if (j >= 0)
			data2 = num2[j];
		int sum = data1 + data2 + flag - '0' - '0';
		if (sum > 9)
		{
			sum %= 10;
			flag = 1;
		}
		else
			flag = 0;
		arr[len++] = sum + '0';
		i--;
		j--;
	}
	if (flag == 1)
		arr[len++] = '1';
	int left = 0, right = len - 1;
	//翻转
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	if (flag == 1)
		arr[size + 1] = '\0';
	else
		arr[size] = '\0';
	return arr;
}


char * addBinary(char * a, char * b)
{
	int sizea = strlen(a), sizeb = strlen(b);
	int size = sizea > sizeb ? sizea + 2 : sizeb + 2;
	char* arr = malloc(sizeof(char)*size);
	int i = sizea - 1, j = sizeb - 1, flag = 0, len = 0;
	while (i >= 0 || j >= 0)
	{
		int data1 = 0, data2 = 0;
		if (i >= 0)
			data1 = a[i] - '0';
		if (j >= 0)
			data2 = b[j] - '0';
		int sum = data1 + data2 + flag;
		if (sum >= 2)
		{
			sum %= 2;
			flag = 1;
		}
		else
			flag = 0;
		arr[len++] = sum + '0';
		i--;
		j--;
	}
	if (flag == 1)
		arr[len++] = '1';
	int left = 0, right = len - 1;
	//翻转
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	arr[len] = '\0';
	return arr;
}

//231. 2 的幂
bool isPowerOfTwo(int n)
{
	if (n == 0)
		return false;
	while (n % 2 == 0)
	{
		n /= 2;
		if (n == 0)
			break;
	}
	//0次方等于1
	if (n == 0 || n == 1)
		return true;
	else
		return false;
}
//922. 按奇偶排序数组 II
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize)
{
	*returnSize = numsSize;
	int* arr = malloc(sizeof(int)*numsSize);
	int i = 0, add = 0, even = 1;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] % 2 == 0)
		{
			arr[add] = nums[i];
			add += 2;
		}
		else
		{
			arr[even] = nums[i];
			even += 2;
		}
	}
	return arr;
}

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
{
	int* arr = malloc(sizeof(int)*(numsSize + 1));
	memset(arr, 0, 4 * (numsSize + 1));
	for (int i = 0; i < numsSize; i++)
	{
		arr[nums[i]] += 1;
	}
	*returnSize = 0;
	for (int i = 1; i <= numsSize; i++)
	{
		if (arr[i] == 0)
		{
			arr[*returnSize] = i;
			(*returnSize)++;
		}
	}
	return arr;
}

//832. 翻转图像
int** flipAndInvertImage(int** image, int imageSize, int* imageColSize, int* returnSize, int** returnColumnSizes)
{
	*returnSize = imageSize;
	*returnColumnSizes = imageColSize;
	for (int i = 0; i < imageSize; i++)
	{
		int left = 0, right = (*imageColSize) - 1;
		while (left < right)
		{
			if (image[i][left] == image[i][right])
			{
				image[i][left] ^= 1;
				image[i][right] ^= 1;
			}
			left++;
			right--;
		}
		if (left == right)
			image[i][left] ^= 1;
	}
	return image;
}