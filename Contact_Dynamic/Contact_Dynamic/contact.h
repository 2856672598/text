#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#define SZ 1
#define INCREASE 2
#define MAX_NAME 10
#define MAX_SEX 5
#define MAX_TETL 12
#define MAX_ADDR 20
#define MAX_AGE 4
enum menu
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW
};
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tetl[MAX_TETL];
	char addr[MAX_ADDR];
	int age;
}PeoInfo;
typedef struct Contact
{
	PeoInfo *data;
	int size;
	int capacity;
}Contact;

void Contact_Add(Contact* ps);
void Contact_Show(Contact* ps);
void Contact_Init(Contact* ps);
int Check(Contact* ps);