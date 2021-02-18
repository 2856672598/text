#include"contact.h"
#include<stdlib.h>
void Contact_Init(Contact* ps)
{
	ps->data= malloc(INCREASE * sizeof(PeoInfo));
	if (ps->data == NULL)
		return;
	ps->capacity = INCREASE;
	ps->size = 0;
}
//检测容量
int Check(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		PeoInfo* ptr = realloc(ps->data,(ps->size+ INCREASE) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += INCREASE;
			printf("增容成功\n");
			return 1;
		}
		else
		{
			printf("增容失败\n");
			return 0;
		}
	}
	return 1;
}
void Contact_Add(Contact* ps)
{
	int tmp = 0;
	tmp = Check(ps);
	if (tmp)
	{
		printf("请输入姓名>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入性别>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话>");
		scanf("%s", ps->data[ps->size].tetl);
		printf("请输入地址>");
		scanf("%s", ps->data[ps->size].addr);
		printf("请输入年龄>");
		scanf("%d", &(ps->data[ps->size].age));
		ps->size++;
		printf("添加成功\n");
	}
	else
		printf("添加失败\n");
}

void Contact_Show(Contact* ps)
{
	int i = 0;
	printf("%s\t %2s\t %15s\t %20s\t %5s\n", "姓名", "性别", "电话", "地址", "年龄");
	for (i = 0; i < ps->size; i++)
	{
		printf("%4s\t % 2s\t % 15s\t % 20s\t % 5d\t\n", ps->data[i].name,
			ps->data[i].sex,
			ps->data[i].tetl,
			ps->data[i].addr,
			ps->data[i].age);
	}
}
int Search(const char* x, Contact *ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(x, ps->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void Contact_Search(Contact* ps)
{
	char input[MAX_NAME];
	printf("输入需要查找的姓名>");
	scanf("%s", input);
	int len = Search(input, ps);
	if (len != -1)
	{
		printf("%s\t %2s\t %15s\t %20s\t %5s\n", "姓名", "性别", "电话", "地址", "年龄");
		printf("%4s\t % 2s\t % 15s\t % 20s\t % 5d\t\n", ps->data[len].name,
			ps->data[len].sex,
			ps->data[len].tetl,
			ps->data[len].addr,
			ps->data[len].age);
	}
	else
		printf("此联系人不存在>\n");
}
void Del(int x, Contact* ps)
{
	int i = 0;
	for (i = x; i < ps->size - 1; i++)
	{
		ps->data[i] = ps->data[i + 1];
	}
	ps->size--;
	printf("删除成功\n");
}
void Contact_Del(Contact* ps)
{
	char input[MAX_NAME];
	printf("请输入要删除的人员姓名>");
	scanf("%s", input);
	int len = Search(input, ps);
	if (len != -1)
	{
		Del(len, ps);
	}
	else
		printf("此联系人不存在\n");
}
void Contact_Modify(Contact* ps)
{
	char input[MAX_NAME];
	printf("请输入您要修改的姓名>");
	scanf("%s", input);
	int len = Search(input, ps);
	if (len != -1)
	{
		printf("请输入修改后的姓名>");
		scanf("%s", ps->data[len].name);
		printf("请输入修改后性别>");
		scanf("%s", ps->data[len].sex);
		printf("请输入修改后电话>");
		scanf("%s", ps->data[len].tetl);
		printf("请输入修改后地址>");
		scanf("%s", ps->data[len].addr);
		printf("请输入修改后年龄>");
		scanf("%d", &(ps->data[len].age));
		printf("修改成功\n");
	}
	else
		printf("您要修改的人员不存在\n");
}
//释放
void Release(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}