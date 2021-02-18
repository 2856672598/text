#include"Contact.h"
int Check(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		PeoInfo* tmp = realloc(ps->S, (ps->size + INCREASE) * sizeof(PeoInfo));
		if (tmp != NULL);
		{
			ps->S = tmp;
			ps->capacity += INCREASE;
			//printf("扩容成功\n");
			return 1;
		}
		printf("%s\n", strerror(errno));
		return 0;
	}
	//返回值为1 表示扩容成功，0为失败
	return 1;
}
//读取保存的文件
int ReadContact(Contact* ps)
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("text.txt", "rb");
	if (pfRead == NULL)
	{
		printf("RaedContact:%s\n", strerror(errno));
		return 0;
	}
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		Check(ps);
		ps->S[ps->size] = tmp;
		ps->size++;
	}
	fclose(pfRead);
	pfRead = NULL;
	return 1;
}
void InitContact(Contact* ps)
{
	ps->S = malloc(INCREASE * sizeof(PeoInfo));
	if (ps->S == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	ps->size = 0;
	ps->capacity = INCREASE;
	//读取文件
	ReadContact(ps);
	printf("初始化成功\n");
}
void ContactAdd(Contact* ps)
{
	int len = Check(ps);
	if (len == 1)
		printf("扩容成功\n");
	else
		printf("扩容失败\n");
	if (len)
	{
		printf("请输入姓名>");
		scanf("%s", ps->S[ps->size].name);
		printf("请输入性别>");
		scanf("%s", ps->S[ps->size].sex);
		printf("请输入电话>");
		scanf("%s", ps->S[ps->size].tel);
		printf("请输入地址>");
		scanf("%s", ps->S[ps->size].addr);
		printf("请输入年龄>");
		scanf("%d", &(ps->S[ps->size].age));
		ps->size++;
		printf("添加成功:%d\n",ps->size);
	}
}
void ContactShow(Contact* ps)
{
	int i = 0;
	printf("%s\t %2s\t %5s\t %15s\t %20s\n", "姓名",  "年龄", "性别", "电话", "地址");
	for (i = 0; i < ps->size; i++)
	{
		printf("%s\t % 2d\t % 5s\t % 15s\t % 20s\t\n", ps->S[i].name,
			ps->S[i].age,
			ps->S[i].sex,
			ps->S[i].tel,
			ps->S[i].addr
		);
	}
}
//保存通讯录到本地
void ContactSave(Contact* ps)
{
	FILE* pf = fopen("text.txt", "wb");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->S[i]), sizeof(PeoInfo), 1, pf);
	}
	printf("保存成功\n");
}

int Search(Contact* ps, char* name)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(name, ps->S[i].name))
			return i;
	}
	return -1;//未找到
}
//查找
void ContactSearch(Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找的姓名>");
	scanf("%s", &name);
	int len = Search(ps, name);
	if (len != -1)
	{
		printf("%s\t %2s\t %5s\t %15s\t %20s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%s\t % 2d\t % 5s\t % 15s\t % 20s\t\n", ps->S[len].name,
			ps->S[len].age,
			ps->S[len].sex,
			ps->S[len].tel,
			ps->S[len].addr
		);
	}
	else
		printf("未找到此联系人\n");
}

//删除
void  ContactDel(Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除的人员姓名>");
	scanf("%s", name);

	int  len = Search(ps, name);
	if (len != -1)
	{
		int i = len;
		for (i = len; i < ps->size - 1; i++)
		{
			ps->S[i] = ps->S[i + 1];
		}
		printf("删除成功\n");
		ps->size--;
	}
	else
		printf("要删除的人员不存在\n");
}
//修改
void ContactModify(Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改的姓名>");
	scanf("%s", name);
	int len = Search(ps, name);
	if (len != -1)
	{
		printf("请输入修改后的姓名>");
		scanf("%s", ps->S[len].name);
		printf("请输入修改后性别>");
		scanf("%s", ps->S[len].sex);
		printf("请输入修改后电话>");
		scanf("%s", ps->S[len].tel);
		printf("请输入修改后地址>");
		scanf("%s", ps->S[len].addr);
		printf("请输入修改后年龄>");
		scanf("%d", &(ps->S[len].age));
		printf("修改成功\n");
	}
	else
		printf("人员不存在\n");
}
//内存释放
void Release(Contact* ps)
{
	free(ps->S);
	ps->S = NULL;
}