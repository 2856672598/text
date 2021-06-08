#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
//766. ÍÐÆÕÀû´Ä¾ØÕó
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

//344. ·´×ª×Ö·û´®
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
	//·­×ª
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
	//·­×ª
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
int main()
{
	char arr1[] = "11";
	char arr2[] = "1";
	printf("%s", addBinary(arr1, arr2));
	return 0;
}