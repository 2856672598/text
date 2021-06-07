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
	char* arr = malloc(sizeof(char)*(size + 1));
	int i = size1 - 1, j = size2 - 1, len = 0;

	int flag = 0;
	while (i >= 0 || j >= 0)
	{

		int sum = num1[i] + num2[j] + flag - '0' - '0';
		if (sum > 9)
		{
			sum %= 10;
			flag = 1;
		}
		arr[len++] = sum + '0';
		i--;
		j--;
	}
	if (flag == 1)
		arr[len] = '1';
	int left = 0, right = len;
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	return arr;
}

int main()
{
	char num1[] = "123";
	char num2[] = "1";
	printf("%s", addStrings(num1, num2));
	return 0;
}