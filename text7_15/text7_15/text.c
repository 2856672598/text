
////1089.复写零
//#include<stdio.h>
//void duplicateZeros(int* arr, int arrSize)
//{
//	int left = 0, right = arrSize - 1;
//	while (left < right)
//	{
//		if (arr[left] == 0)
//			right--;
//		left++;
//	}
//	int cur = arrSize - 1;
//	while (cur >= 0)
//	{
//		//当位置不够时不再复写
//		if (arr[right] == 0 && left != right)
//		{
//			arr[cur--] = 0;
//			arr[cur--] = 0;
//		}
//		else
//			arr[cur--] = arr[right];
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 0,0,0,0,0,0,0 };
//	int arrSize = sizeof(arr) / sizeof(arr[0]);
//	duplicateZeros(arr, arrSize);
//	for (int i = 0; i < arrSize; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}


////917. 仅仅反转字母
//#include<stdio.h>
//#include<stdbool.h>
//#include<string.h>
//bool IsLetter(char ch)
//{
//	if (ch >= 'a'&&ch <= 'z' || ch >= 'A'&&ch <= 'Z')
//		return true;
//	else
//		return false;
//}
//char * reverseOnlyLetters(char * s)
//{
//	int size = strlen(s);
//	int left = 0, right = size - 1;
//	while (left < right)
//	{
//		while (left < size && !IsLetter(s[left]))
//			left++;
//		while (right >= 0 && !IsLetter(s[right]))
//			right--;
//		if (left < right)
//		{
//			char tmp = s[left];
//			s[left] = s[right];
//			s[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//	return s;
//}
//int main()
//{
//	char arr[] = "7_28]";
//	reverseOnlyLetters(arr);
//	printf("%s", arr);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int Min(int a, int b)
//{
//	return a > b ? b : a;
//}
//int* shortestToChar(char * s, char c, int* returnSize)
//{
//	int size = strlen(s);
//	int* answer = malloc(sizeof(int)*size);
//	int pos = size;
//	//从左往右遍历
//	for (int i = 0; i < size; i++)
//	{
//		if (s[i] == c)
//			pos = i;
//		answer[i] = abs(i - pos);
//	}
//	//从右往左
//	for (int i = size - 1; i >= 0; i--)
//	{
//		if (s[i] == c)
//			pos = i;
//		answer[i] = Min(answer[i], abs(i - pos));
//	}
//	*returnSize = size;
//	return answer;
//}
//int main()
//{
//	char nums[] = "loveleetcode";
//	char c = 'e';
//	int returnSize = 0;
//	int* res = shortestToChar(nums, c, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//		printf("%d ", res[i]);
//	free(res);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//char * mergeAlternately(char * word1, char * word2)
//{
//	int size1 = strlen(word1), size2 = strlen(word2);
//	
//	char* res = malloc(sizeof(char)*(size1 + size2 + 1));
//	int begin1 = 0, begin2 = 0, cur = 0;
//	while (begin1 < size1 && begin2 < size2)
//	{
//		res[cur++] = word1[begin1++];
//		res[cur++] = word2[begin2++];
//	}
//	while (begin1 < size1)
//		res[cur++] = word1[begin1++];
//	while (begin2 < size2)
//		res[cur++] = word2[begin2++];
//	res[cur] = '\0';
//
//	return res;
//}
//int main()
//{
//	char word1[] = "abc";
//	char word2[] = "pqr";
//	char* res = mergeAlternately(word1, word2);
//	printf("%s", res);
//	free(res);
//	return 0;
//}


#include<stdio.h>
char * reverseVowels(char * s)
{
	int size = strlen(s);
	int left = 0, right = size - 1;
	while (left < right)
	{

	}
}
int main()
{
	return 0;
}