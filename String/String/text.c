#include"string.h"
int main()
{
	struct SString* s = malloc(sizeof(struct SString));
	char arr[] = "abababd";
	InitString(s);
	StrCopy(s, arr);
	//StrAssign(s, 'a');
	//StrAssign(s, 'b');
	//StrAssign(s, 'a');
	//StrAssign(s, 'b');
	//StrAssign(s, 'a');
	//StrAssign(s, 'b');
	//StrAssign(s, 'c');

	//////找到了返回位置，没知道返回-1；
	////int flag = SubString(s, arr);
	////printf("子串在主串的第%d个位置\n", flag);
	////Print(s);
	////Clear(s);

	////printf("\n");
	////StrAssign(s, 'a');

	//int flag = StrCompare(s, arr);
	//if (flag > 0)
	//	printf("第一个大\n");
	//else if (flag == 0)
	//	printf("相等\n");
	//else
	//	printf("第二个大\n");
	Print(s);
	return 0;
}