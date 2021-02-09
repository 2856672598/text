#include "contact.h"
//初始化通讯录
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}
//添加
void Contact_Add(struct Contact* ps)
{
	if (ps->size == MAX)
		printf("空间不足\n");
	else
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
		scanf("%s", &(ps->data[ps->size].age));
	}
	ps->size++;
	printf("添加成功\n");
}
//打印
void Contact_Show(const struct Contact* ps)
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
//查找
int Find(const struct Contact* ps, char* name)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(name, ps->data[i].name))
			return i;
	}
	return -1;
}

//删除指定
void Contact_Del(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除的姓名>");
	scanf("%s", &name);
	int ret = Find(ps, name);
	//int i = 0;
	//for (i = 0; i < ps->size; i++)
	//{
	//	if (0 == strcmp(name, ps->data[i].name))
	//		break;
	//}
	if (ret == -1)
	{
		printf("没有此信息\n");
	}
	else
	{
		int j = 0;
		for (j = ret; j < ps->size; j++)
		{
			ps->data[j] = ps->data[j+1];
		}
		printf("删除成功\n");
		ps->size--;
	}
}
//查询指定
void Contact_Search(const struct Contact* ps)
{
	int i = 0;
	char name[MAX_NAME];
	printf("请输入要查询的姓名>");
	scanf("%s", &name);
	int len = Find(ps, name);
	//for (i = 0; i < ps->size; i++)
	//{
	//	if (0 == strcmp(name, ps->data[i].name))
	//		break;
	//}
	if (len == -1)
	{
		printf("没有此信息\n");
	}
	else
	{
		printf("%s\t %2s\t %15s\t %20s\t %5s\n", "姓名", "性别", "电话", "地址", "年龄");
		printf("%4s\t % 2s\t % 15s\t % 20s\t % 5d\t\n",
			ps->data[len].name,
			ps->data[len].sex,
			ps->data[len].tetl,
			ps->data[len].addr,
			ps->data[len].age);
	}
}

//修改
void Contarct_Modify(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("输入要修改的名字>");
	scanf("%s", &name);
	int len = Find(ps, name);
	if (len == -1)
		printf("需要修改的联系不存在\n");
	else
	{
		printf("请输入姓名>");
		scanf("%s", ps->data[len].name);
		printf("请输入性别>");
		scanf("%s", ps->data[len].sex);
		printf("请输入电话>");
		scanf("%s", ps->data[len].tetl);
		printf("请输入地址>");
		scanf("%s", ps->data[len].addr);
		printf("请输入年龄>");
		scanf("%c", &(ps->data[len].age));
		printf("修改完成\n");
	}
}
