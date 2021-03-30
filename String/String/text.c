#include"string.h"
int main()
{
	struct SString* s = malloc(sizeof(struct SString));
	char arr[] = "helloword";
	InitString(s);
	StrAssign(s, arr);

	Print(s);
	return 0;
}