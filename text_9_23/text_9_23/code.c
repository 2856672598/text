//#include<stdio.h>
//#include<stdlib.h>
//struct type
//{
//	int i;
//	int arr[];
//};
//
//int main()
//{
//	printf("%d ", sizeof(struct type));
//	return 0;
//}

//#include<stdio.h>
//
//struct A
//{
//	int _a : 2;//占2个位
//	int _b : 4;//占4个位
//	int _c : 6;//占6个位
//};
//int main()
//{
//	struct A a;
//	a._a = 2;
//	a._b = 6;
//	a._c = 30;
//}

//#include<stdio.h>
//
//union A
//{
//	int a;
//	short b;
//};
//
//int main()
//{
//	printf("%d", sizeof(union A));
//	return 0;
//}

//#include<stdio.h>
//union A
//{
//	int a;
//	char b;
//};
//int main()
//{
//	union A a;
//	a.a = 1;
//	if (a.b == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}