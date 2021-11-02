//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct stu
//{
//	int _id;
//	int language;
//	int math;
//	int english;
//	int sum;
//}stu;
//
//int Compar(stu* s1, stu* s2)
//{
//	if (s1->sum > s2->sum || s1->sum < s2->sum)
//		return s1->sum - s2->sum;
//	else if (s1->language > s2->language || s1->language < s2->language)
//		return s1->language - s2->language;
//	else
//		return -(s1->_id - s2->_id);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	stu* flag = (stu*)malloc(sizeof(stu)*n);
//	for (int i = 0; i < n; i++)
//	{
//		flag[i]._id = i + 1;
//		scanf("%d %d %d", &flag[i].language, &flag[i].math, &flag[i].english);
//		flag[i].sum = flag[i].english + flag[i].language + flag[i].math;
//	}
//	qsort(flag, n, sizeof(stu), Compar);
//
//	int tmp = 5;
//	for (int i = n - 1; i >= 0; i--)
//	{
//		if (tmp == 0)
//			break;
//		printf("%d %d\n", flag[i]._id, flag[i].sum);
//		tmp--;
//	}
//	return 0;
//}
//
