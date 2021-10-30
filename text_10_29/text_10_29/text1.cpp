
//// 从前序与中序遍历序列构造二叉树
//#include<iostream>
//#include<vector>
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
//	TreeNode* _buildTree(vector<int>& preorder, vector<int>& inorder, int prei, int inbegin, int inend)
//	{
//		if (prei >= (int)preorder.size())
//			return nullptr;
//		TreeNode* root = new TreeNode(preorder[prei]);
//		
//		//在中序遍历中查找 根节点
//		int cur = 0;
//		while (preorder[prei] != inorder[cur])
//		{
//			cur++;
//		}
//		//判断左子树是否为空，不为空递归调用
//		if (inbegin <= cur - 1)
//			root->left = _buildTree(preorder, inorder, prei++, inbegin, cur - 1);
//		else
//			root->left = nullptr;
//
//		if (cur + 1 <= inend)
//			root->right = _buildTree(preorder, inorder, prei++, cur + 1, inend);
//		else
//			root->right = nullptr;
//		return root;
//	}
//
//	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
//	{
//		int prei = 0;
//		int inbegin = 0, inend = inorder.size() - 1;
//		return _buildTree(preorder, inorder, prei, inbegin, inend);
//	}
//};


////106. 从中序与后序遍历序列构造二叉树
//#include<iostream>
//#include<vector>
//using namespace std;
//struct TreeNode
//{
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
// 
//class Solution {
//public:
//	TreeNode* _buildTree(vector<int>& inorder, vector<int>& postorder, int& posti, int inbegin, int inend)
//	{
//		if (posti < 0)
//			return  nullptr;
//		TreeNode* root = new TreeNode(postorder[posti]);
//
//		//在中序中找到root的位置
//		int cur = 0;
//		while (postorder[posti] != inorder[cur])
//		{
//			cur++;
//		}
//
//		//判断root右子树是否为空
//		if (cur + 1 <= inend)
//		{
//			root->right = _buildTree(inorder, postorder, --posti, cur + 1, inend);
//		}
//		else
//			root->right = nullptr;
//
//		//判断root节点是否有左孩子
//		if (inbegin <= cur - 1)
//		{
//			root->left = _buildTree(inorder, postorder, --posti, inbegin, cur - 1);
//		}
//		else
//			root->left = nullptr;
//		return root;
//	}
//
//	TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder)
//	{
//		int posti = postorder.size() - 1;
//		int inbegin = 0, inend = inorder.size() - 1;
//		return _buildTree(inorder, postorder, posti, inbegin, inend);
//	}
//};


//#include<iostream>
//#include<vector>
//#include<stack>
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
////class Solution
////{
////public:
////	vector<int> preorderTraversal(TreeNode* root)
////	{
////		stack<TreeNode*> s;
////		vector<int> v;
////		if (root == nullptr)
////			return v;
////
////		//将头节点加入栈中
////		s.push(root);
////		while (!s.empty())
////		{
////			TreeNode* root = s.top();
////			//如果弹出的节点左右孩子不为空压入栈中
////			s.pop();
////			//先判断右子树
////			if (root->right != nullptr)
////				s.push(root->right);
////			if (root->left != nullptr)
////				s.push(root->left);
////			v.push_back(root->val);
////		}
////		return v;
////	}
////};
//
//class Solution {
//public:
//	vector<int> preorderTraversal(TreeNode* root)
//	{
//		vector<int> v;
//		stack<TreeNode*> s;
//		TreeNode* cur = root;
//		while (!s.empty() || cur)
//		{
//			//分为左路节点和右子树
//			while (cur)
//			{
//				v.push_back(cur->val);
//				s.push(cur);
//				cur = cur->left;
//			}
//			//走到这时，当前树的左子树已经走到底，此时走当前树的右子树
//			TreeNode* tmp = s.top();
//			s.pop();
//			cur = tmp->right;
//		}
//		return v;
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
//class Solution {
//public:
//	vector<int> singleNumber(vector<int>& nums)
//	{
//		int flag = 0;
//		for (auto e : nums)
//			flag ^= e;
//		//找出flag二进制中第一个为1的位
//		int tmp = 1;
//		while ((flag&tmp) == 0)
//		{
//			tmp <<= 1;
//		}
//
//		//将序列中的数，分组
//		int ret1 = 0, ret2 = 0;
//		for (auto e : nums)
//		{
//			if (e&tmp)
//			{
//				ret1 ^= e;
//			}
//			else
//			{
//				ret2 ^= e;
//			}
//		}
//		vector<int> ret;
//		ret.push_back(ret1);
//		ret.push_back(ret2);
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 1,2,1,3,2,5 };
//	vector<int> ret = Solution().singleNumber(nums);
//	for (auto e : ret)
//		cout << e << " ";
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
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
//class Solution {
//public:
//	vector<int> inorderTraversal(TreeNode* root)
//	{
//		//中序遍历-->先将左路节点入栈--->取出栈顶元素打印-->走右子树
//		stack<TreeNode*>s;
//		vector<int> ret;
//		TreeNode* cur = root;
//		while (cur || !s.empty())
//		{
//			//将左路入栈
//			while (cur)
//			{
//				s.push(cur);
//				cur = cur->left;
//			}
//
//			//出栈顶元素
//			TreeNode* tmp = s.top();
//			s.pop();
//			ret.push_back(tmp->val);
//			
//			//将节点的右子树不为空入栈
//			if (tmp->right)
//			{
//				cur = tmp->right;
//			}
//		}
//		return ret;
//	}
//};


//145.二叉树的后序遍历 非递归
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
	vector<int> postorderTraversal(TreeNode* root)
	{
		stack<TreeNode*> s;
		vector<int> v;
		TreeNode* cur = root;
		TreeNode* prev = nullptr;
		while (cur || !s.empty())
		{
			//将左路节点入栈
			while (cur)
			{
				s.push(cur);
				cur = cur->left;
			}
			//取一下栈顶元素不删除
			TreeNode* tmp = s.top();
			//需要判断右孩子是否已经访问过，否则死循环
			if (tmp->right != nullptr&&prev != tmp->right)
			{
				cur = tmp->right;
			}
			else
			{
				v.push_back(tmp->val);
				prev = s.top();
				s.pop();
			}
		}
		return v;
	}
};