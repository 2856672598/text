#pragma once;
#include<iostream>

template<class K>
struct BSTreeNode
{
	BSTreeNode<K>* _left;
	BSTreeNode<K>* _right;
	K _val;

	BSTreeNode(K val = 0)
		:_left(nullptr)
		, _right(nullptr)
		, _val(val)
	{}
};

template<class K>
class BSTree
{
public:
	typedef BSTreeNode<K> Node;
	BSTree()
		:_root(nullptr)
	{}

	bool Insert(const K& date)
	{
		//如果树为空
		if (_root == nullptr)
		{
			Node* newnode = new Node(date);
			if (newnode)
			{
				_root = newnode;
				return true;
			}
		}

		Node* cur = _root;
		Node* parent = NULL;
		while (cur)
		{
			if (cur->_val < date)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (cur->_val > date)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				//存在相等的数据
				return false;
			}
		}
		//找到了插入的位置
		Node* newnode = new Node(date);
		if (newnode == NULL)
			exit(-1);
		if (parent->_val > date)
		{
			//插入到父节点的左边
			parent->_left = newnode;
		}
		else
		{
			parent->_right = newnode;
		}
		return true;
	}

	void _InOrder(Node* root)
	{
		if (root == nullptr)
			return;
		_InOrder(root->_left);
		cout << root->_val << " ";
		_InOrder(root->_right);
	}

	void InOrder()
	{
		_InOrder(_root);
		cout << endl;
	}

	bool Find(const K& date)
	{
		Node* cur = _root;
		while (cur)
		{
			if (cur->_val > date)
			{
				cur = cur->_left;
			}
			else if (cur->_val < date)
			{
				cur = cur->_right;
			}
			else
			{
				return true;
			}
		}
		return false;
	}

private:
	Node* _root = nullptr;
};

void TextBSTree()
{
	BSTree<int> root;
	int arr[] = { 5,3,4,1,7,8,2,6,0,9 };
	for (auto e : arr)
	{
		root.Insert(e);
	}
	root.InOrder();

	root.Find(10);
}