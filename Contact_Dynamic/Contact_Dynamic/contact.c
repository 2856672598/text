#include"contact.h"
#include<stdlib.h>
void Contact_Init(Contact* ps)
{
	ps->data= malloc(SZ * sizeof(PeoInfo));
	if (ps->data == NULL)
		return;
	ps->capacity = SZ;
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