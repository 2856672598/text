#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	//打开文件
//	FILE* ps = fopen("text.txt", "w");
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('h', ps);
//	fclose(ps);
//	ps = NULL;
//	return 0;
//}

////stdin   stdout  stderr 默认打开的三个流
//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("打开文件失败\n");
//		return 0;
//	}
//	int ch = fgetc(stdin);
//	fputc(ch, pf);
//	//fputc(ch,stdout);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}

//#include<stdio.h>
//#define M(x,y)  x-y
//void main()
//{
//	int a = 4, b = 3, c = 5;
//	printf("%d", a*M(b, c));
//	return 0;
//}

//   fgets   fputs

//int main()
//{
//	char arr[100];
//	FILE*pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("打开文件失败\n");
//		return 0;
//	}
//	//读文件
//	fgets(arr, 100, pf);
//	printf("%s", arr);
//
//	fgets(arr, 100, pf);
//	printf("%s", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char arr[1024];
//	int input;
//	scanf("%s", arr);
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//		return 0;
//	input = fputs(arr, pf);
//	if (~input)
//		printf("写入成功\n");
//	else
//		printf("写入失败\n");
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char arr[1024];
//	//fgets(arr, 1024, stdin);
//	//fputs(arr, stdout);
//
//	gets(arr);
//	puts(arr);
//	return 0;
//}

//   fscanf fprintf

//struct S
//{
//	int n;
//	float a;
//	char arr[6];
//};
//int main()
//{
//	struct S s = { 1,3.14f,"hello" };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("打开文件失败\n");
//		return 0;
//	}
//	fprintf(pf, "%d %f %s", s.n, s.a, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float a;
//	char arr[5];
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("text.txt", "r");
//	fscanf(pf, "%d %f %s", &(s.n), &(s.a), &(s.arr));
//	printf("%d %f %s", s.n, s.a, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//sscanf   sprintf
//struct S
//{
//	int n;
//	float b;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 1,3.14f,"hello" };
//	struct S tmp = { 0 };
//	char buf[1024];
//	//把格式化内容输出到字符串
//	sprintf(buf, "%d %f %s", s.n, s.b, s.arr);
//	//从字符串读取格式化的数据
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.b), &(tmp.arr));
//	printf("%d %f %s", tmp.n, tmp.b, tmp.arr);
//	return 0;
//}

//fread fwrite
struct S
{
	char name[20];
	int age;
	double score;
};
//int main()
//{
//	struct S s = { "张三",20,84 };
//	//打开文件
//	FILE* pf = fopen("text.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//以二进制的形式写入
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	struct S s = { 0 };
	//打开文件
	FILE* pf = fopen("text.txt", "rb");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	//读文件
	fread(&s, sizeof(struct S), 1, pf);
	printf("%s %d %lf", s.name, s.age, s.score);

	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}