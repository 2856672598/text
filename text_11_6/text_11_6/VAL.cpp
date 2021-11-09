#include"VAL.h"

void text()
{
	VALTree<int, int> root;
	int arr[] = { 4, 2, 6, 1, 3, 5, 15, 7, 16, 14 };
	for (auto e : arr)
	{
		root.Insert(make_pair(e, e));
	}
	root.InOrder();
	cout << root.IsBalance();
}
int main()
{
	text();
	return 0;
}