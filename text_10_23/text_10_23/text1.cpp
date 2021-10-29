
////102. 二叉树的层序遍历
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
// 
//class Solution
//{
//public:
//	vector<vector<int>> levelOrder(TreeNode* root)
//	{
//		vector<vector<int>>vv;
//		if (root == nullptr)
//			return vv;
//		queue<TreeNode*> q;
//		q.push(root);
//		while (!q.empty())
//		{
//			vector<int> v;
//			//当上一次全部出队列后，队列中数据为下一层节点的个数
//			int size = q.size();
//			for (int i = 0; i < size; i++)
//			{
//				TreeNode* front = q.front();
//				q.pop();
//				v.push_back(front->val);
//				//当左子树不为空时入队列
//				if (front->left != nullptr)
//					q.push(front->left);
//
//				//右子树不为空时也入队列
//				if (front->right != nullptr)
//					q.push(front->right);
//
//			}
//			vv.push_back(v);
//		}
//		return vv;
//	}
//};
//
//int main()
//{
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct TreeNode
//{
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution
//{
//public:
//	bool Find(TreeNode* root, TreeNode* x)
//	{
//		if (root == nullptr)
//			return false;
//		return root == x || Find(root->left, x) || Find(root->right, x);
//	}
//
//	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
//	{
//		if (root == nullptr)
//			return nullptr;
//
//		if (root == p || root == q)
//			return root;
//
//		bool pInleft, pInright, qInleft, qInright;
//		//判断p和 q是在当前节点的左子树 还是右子树
//		pInleft = Find(root->left, p);
//		pInright = !pInleft;
//
//		qInleft = Find(root->left, q);
//		qInright = !qInleft;
//
//		//如果p和q一个在左一个在右那么根节点为最近的祖先节点
//		if (pInleft&&qInright || pInright && qInleft)
//			return root;
//
//		if (pInleft&&qInleft)
//			return lowestCommonAncestor(root->left, p, q);
//
//		if (pInright&&qInright)
//			return lowestCommonAncestor(root->right, p, q);
//
//	}
//};
//
//int main()
//{
//	return 0;
//}


//JZ36 二叉搜索树与双向链表
#include<iostream>
using namespace std;
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

class Solution
{
public:

	void _Convert(TreeNode* cur, TreeNode*& prev)
	{
		if (cur == nullptr)
			return;
		_Convert(cur->left, prev);

		//处理节点
		//因为不知道cur的下一个节点是谁，所以只能通过，找到下一个节点后通过prev指向
		cur->left = prev;
		if (prev != nullptr)
			prev->right = cur;
		prev = cur;
		_Convert(cur->right, prev);
	}

	TreeNode* Convert(TreeNode* pRootOfTree)
	{
		TreeNode* prev = nullptr;
		_Convert(pRootOfTree, prev);
	}
};

int main()
{
	return 0;
}