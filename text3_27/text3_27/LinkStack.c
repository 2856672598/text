#include"LinkStack.h"
LinkStack* InIn()
{
	LinkStack* tmp = malloc(sizeof(LinkStack));
	tmp->s = NULL;
	return tmp;
}
void PushStack(DataNode** head, LinkStack* phead, Data x)
{
	DataNode* tmp = malloc(sizeof(DataNode));
	tmp->next = *head;
	tmp->x = x;
	*head = tmp;
	phead->s = tmp;
}
void Print(DataNode* head)
{
	while (head)
	{
		printf("%d ", head->x);
		head = head->next;
	}
}
//void Print(LinkStack* head)
//{
//	while (head->s)
//	{
//		printf("%d", head->s->x);
//		head->s = head->s->next;
//	}
//}