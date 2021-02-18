#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
enum memu
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SAVE
};
enum
{
	SZ = 1,//默认开辟的空间
	INCREASE = 2,// 每次增加的容量
	MAX_NAME = 20,
	MAX_SEX = 4,
	MAX_ADDR = 20,
	MAX_TEL = 11
};
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
}PeoInfo;
typedef struct Contact
{
	PeoInfo* S;
	int size;
	int capacity;
}Contact;

void InitContact(Contact* ps);
int ReadContact(Contact* ps);

void ContactAdd(Contact* ps);
void ContactShow(Contact* ps);
void ContactSave(Contact* ps);
void ContactDel(Contact* ps);
void ContactSearch(Contact* ps);
void ContactModify(Contact* ps);
//释放内存
void Release(Contact* ps);