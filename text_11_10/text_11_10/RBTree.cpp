#include"RBTree.h"
#include<vector>
int main()
{
	RBTree<DateType> root;
	vector<int> flag{ 16, 3, 7, 11, 9, 26, 18, 14, 15 };
	for (auto e : flag)
	{
		root.Insert(e);
	}

	root.Inorder();

	//¼ì²âÏÂÊÇ·ñÎªºìºÚÊ÷
	cout << root.IsValidRBTree();
	return 0;
}