//#pragma once;
//#include<iostream>
//
//template<class K>
//struct BSTreeNode
//{
//	BSTreeNode<K>* _left;
//	BSTreeNode<K>* _right;
//	K _val;
//
//	BSTreeNode(K val = 0)
//		:_left(nullptr)
//		, _right(nullptr)
//		, _val(val)
//	{}
//};
//
//template<class K>
//class BSTree
//{
//public:
//	typedef BSTreeNode<K> Node;
//	BSTree()
//		:_root(nullptr)
//	{}
//
//	bool Insert(const K& date)
//	{
//		//如果树为空
//		if (_root == nullptr)
//		{
//			Node* newnode = new Node(date);
//			if (newnode)
//			{
//				_root = newnode;
//				return true;
//			}
//		}
//
//		Node* cur = _root;
//		Node* parent = NULL;
//		while (cur)
//		{
//			if (cur->_val < date)
//			{
//				parent = cur;
//				cur = cur->_right;
//			}
//			else if (cur->_val > date)
//			{
//				parent = cur;
//				cur = cur->_left;
//			}
//			else
//			{
//				//存在相等的数据
//				return false;
//			}
//		}
//		//找到了插入的位置
//		Node* newnode = new Node(date);
//		if (newnode == NULL)
//			exit(-1);
//		if (parent->_val > date)
//		{
//			//插入到父节点的左边
//			parent->_left = newnode;
//		}
//		else
//		{
//			parent->_right = newnode;
//		}
//		return true;
//	}
//
//	void _InOrder(Node* root)
//	{
//		if (root == nullptr)
//			return;
//		_InOrder(root->_left);
//		cout << root->_val << " ";
//		_InOrder(root->_right);
//	}
//
//	void InOrder()
//	{
//		_InOrder(_root);
//		cout << endl;
//	}
//
//	bool Find(const K& date)
//	{
//		Node* cur = _root;
//		while (cur)
//		{
//			if (cur->_val > date)
//			{
//				cur = cur->_left;
//			}
//			else if (cur->_val < date)
//			{
//				cur = cur->_right;
//			}
//			else
//			{
//				return true;
//			}
//		}
//		return false;
//	}
//
//	bool Erase(const K& date)
//	{
//		Node* cur = _root;
//		Node* parent = NULL;
//		while (cur)
//		{
//			if (cur->_val > date)
//			{
//				parent = cur;
//				cur = cur->_left;
//			}
//			else if (cur->_val < date)
//			{
//				parent = cur;
//				cur = cur->_right;
//			}
//			else
//			{
//				//找到了删除
//				if (cur->_left == NULL)
//				{
//					if (cur == _root)
//					{
//						//删除的是头
//						_root = cur->_right;
//					}
//					else if (parent->_left == cur)
//					{
//						parent->_left = cur->_right;
//					}
//					else if (parent->_right == cur)
//					{
//						parent->_right = cur->_right;
//					}
//					free(cur);
//					return true;
//				}
//				else if (cur->_right == NULL)
//				{
//					//右边为空
//					if (cur == _root)
//					{
//						_root = cur->_left;
//					}
//					else if (parent->_left == cur)
//					{
//
//						//判断cur是parent的左节点还是右节点
//						parent->_left = cur->_left;
//					}
//					else
//					{
//						parent->_right = cur->_left;
//					}
//					free(cur);
//					return true;
//
//				}
//				else
//				{
//					//左右都不为空，需要进行替换删除
//					//找cur右子树的最小 节点
//					Node* leftMin = cur->_right;
//					Node* leftMinParent = cur;
//					while (leftMin->_left != NULL)
//					{
//						leftMinParent = leftMin;
//						leftMin = leftMin->_left;
//					}
//
//					//找到了
//					cur->_val = leftMin->_val;
//					if (leftMinParent->_left == leftMin)
//					{
//						leftMinParent->_left = leftMin->_right;
//					}
//					else
//						leftMinParent->_right = leftMin->_right;
//					free(leftMin);
//					return true;
//				}
//			}
//		}
//		return false;
//	}
//
//private:
//	Node* _root = nullptr;
//};
//
//void TextBSTree()
//{
//	BSTree<int> root;
//	int arr[] = { 5,3,4,1,7,8,2,6,0,9 };
//	for (auto e : arr)
//	{
//		root.Insert(e);
//	}
//	root.InOrder();
//
//	root.Find(10);
//
//	for (auto e : arr)
//	{
//		root.Erase(e);
//		root.InOrder();
//	}
//}


//KV模型
#pragma once
#include<iostream>
#include<string>
#include<vector>
template<class K, class V>
struct BSTreeNode
{
	BSTreeNode<K,V>* _left;
	BSTreeNode<K,V>* _right;
	K _key;
	V _value;

	BSTreeNode(const K& key = 0, const V& value = 0)
		:_left(nullptr)
		, _right(nullptr)
		, _key(key)
		, _value(value)
	{}
};

template< class K ,class V>
class BSTree
{
	typedef BSTreeNode<K, V> Node;
public:
	BSTree()
		:_proot(nullptr)
	{}

	bool BSTreeInsert(const K& key, const V& value)
	{
		if (_proot == nullptr)
		{
			//当树为空时
			Node* newnode = new Node(key, value);
			_proot = newnode;
		}
		Node* cur = _proot;
		Node* parent = _proot;
		while (cur)
		{
			if (cur->_key < key)
			{
				//往右子树插入
				parent = cur;
				cur = cur->_right;
			}
			else if (cur->_key > key)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				//相等了(树中存在了)返回
				return false;
			}
		}

		Node* newnode = new Node(key, value);
		//判断插在左边还是右面
		if (parent->_key > key)
		{
			//插在左边
			parent->_left = newnode;
		}
		else
		{
			//插在右面
			parent->_right = newnode;
		}
		return true;
	}

	void _InOrder(Node* root)
	{
		if (root == nullptr)
			return;
		_InOrder(root->_left);
		cout << root->_key << " " << root->_value << " ";
		_InOrder(root->_right);

	}

	void InOrder()
	{
		_InOrder(_proot);
		cout << endl;
	}

	Node* Find(const K& key)
	{
		Node* cur = _proot;
		while (cur)
		{
			if (cur->_key == key)
				return cur;
			else if (cur->_key > key)
				cur = cur->_left;
			else
				cur = cur->_right;
		}
		return nullptr;
	}

private:
	Node* _proot;
};

void text()
{
	BSTree<int, int> root;
	root.BSTreeInsert(1, 1);
	root.BSTreeInsert(2, 2);
	root.BSTreeInsert(3, 3);
	root.InOrder();
}

void text1()
{
	//英汉互译
	BSTree<string, string>root;
	root.BSTreeInsert("字符串", "string");
	root.BSTreeInsert("查找", "find");

	string input;
	while (cin >> input)
	{
		BSTreeNode<string, string>*pos;
		pos = root.Find(input);
		if (pos = root.Find(input))
			cout << pos->_value << endl;
	}
}

void text2()
{
	//搜索二叉树的应用-->统计
	BSTree<string, int>root;
	vector<string> nums{ "苹果","橙子","橘子","葡萄","苹果","橙子","橘子", "菠萝" };
	for (auto e : nums)
	{
		BSTreeNode<string, int>* pos = root.Find(e);
		//如果树中不存在，则加入该节点，存在的话数量加1 
		if (pos)
			pos->_value++;
		else
			root.BSTreeInsert(e, 1);
	}
	root.InOrder();
}