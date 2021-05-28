#include"Queue.h"
#include"Tree.h"
void Text()
{
	BTNode* p1 = malloc(sizeof(BTNode));
	p1->data = 'a';
	BTNode* p2 = malloc(sizeof(BTNode));
	p2->data = 'b';
	BTNode* p3 = malloc(sizeof(BTNode));
	p3->data = 'c';
	BTNode* p4 = malloc(sizeof(BTNode));
	p4->data = 'd';
	BTNode* p5 = malloc(sizeof(BTNode));
	p5->data = 'e';
	BTNode* p6 = malloc(sizeof(BTNode));
	p6->data = 'f';
	p1->left = p2;
	p1->right = p3;
	p2->left = p4;
	p2->right = p5;
	p4->left = p4->right = NULL;
	p5->left = NULL;
	p5->right = p6;
	p6->left = p6->right = NULL;
	p3->left = p3->right = NULL;


	printf("TreeLeafSize£º%d\n", TreeLeafSize(p1));
	printf("TreeSize:%d\n", TreeSize(p1));
	InOrder(p1);
	printf("\n");
	PrevOrder(p1);
	printf("\n");
	PostOrder(p1);
	printf("\n");
	LevelOrder(p1);
	TreeDestory(p1);
}
int main()
{
	Text();
	return 0;
}