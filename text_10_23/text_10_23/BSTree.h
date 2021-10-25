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

	bool Erase(const K& date)
	{
		Node* cur = _root;
		Node* parent = NULL;
		while (cur)
		{
			if (cur->_val > date)
			{
				parent = cur;
				cur = cur->_left;
			}
			else if (cur->_val < date)
			{
				parent = cur;
				cur = cur->_right;
			}
			else
			{
				//找到了删除
				if (cur->_left == NULL)
				{
					if (cur == _root)
					{
						//删除的是头
						_root = cur->_right;
					}
					else if (parent->_left == cur)
					{
						parent->_left = cur->_right;
					}
					else if (parent->_right == cur)
					{
						parent->_right = cur->_right;
					}
					free(cur);
					return true;
				}
				else if (cur->_right == NULL)
				{
					//右边为空
					if (cur == _root)
					{
						_root = cur->_left;
					}
					else if (parent->_left == cur)
					{

						//判断cur是parent的左节点还是右节点
						parent->_left = cur->_left;
					}
					else
					{
						parent->_right = cur->_left;
					}
					free(cur);
					return true;

				}
				else
				{
					//左右都不为空，需要进行替换删除
					//找cur右子树的最小 节点
					Node* leftMin = cur->_right;
					Node* leftMinParent = cur;
					while (leftMin->_left != NULL)
					{
						leftMinParent = leftMin;
						leftMin = leftMin->_left;
					}

					//找到了
					cur->_val = leftMin->_val;
					if (leftMinParent->_left == leftMin)
					{
						leftMinParent->_left = leftMin->_right;
					}
					else
						leftMinParent->_right = leftMin->_right;
					free(leftMin);
					return true;
				}
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

	for (auto e : arr)
	{
		root.Erase(e);
		root.InOrder();
	}
}