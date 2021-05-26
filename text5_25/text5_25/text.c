#include"tree.h"
#include"queue.h"
void Text()
{
	TNode* root = CreateTree();
	InOrder(root);
	printf("\nTreeSize:%d\n", TreeSize(root));
	printf("TreeDepth:%d\n", TreeDepth(root));
	int depth = 0;
	if (IsBalanced(root, &depth))
		printf("是平衡二叉树\n");
	else
		printf("不是平衡二叉树\n");

	Queue q;
	QueueInit(&q);
	LevelTraversal(root, &q);

	if (CompleteBinaryTree(root, &q))
		printf("为完全二叉树\n");
	else
		printf("不是完全二叉树\n");
	QueueDestory(&q);
	TreeDestory(root);
}
int main()
{
	Text();
	return 0;
}