#pragma once

#include<iostream>
using namespace std;

enum Color
{
	BLACK,
	READ
};

typedef int DateType;

template<class DateType>
struct RBTreeNode
{
	RBTreeNode<DateType>*_pleft;
	RBTreeNode<DateType>*_pright;
	RBTreeNode<DateType>*_parent;
	DateType _val;
	Color _color;

	RBTreeNode(const DateType& val)
		:_pleft(nullptr)
		, _pright(nullptr)
		, _parent(nullptr)
		, _val(val)
		, _color(READ)
	{}
};

template<class DateType	>
class RBTree
{
public:
	typedef RBTreeNode<DateType> Node;

	void RotateL(Node* parent)
	{
		Node* subR = parent->_pright;
		Node* subRL = subR->_pleft;
		parent->_pright = subRL;

		if (subRL)
			subRL->_parent = parent;
		subR->_pleft = parent;
		Node*pparent = parent->_parent;
		parent->_parent = subR;

		if (parent == _root)
		{
			_root = subR;
			subR->_parent = nullptr;
		}
		else
		{
			if (pparent->_pleft == parent)
			{
				pparent->_pleft = subR;
			}
			else
				pparent->_pright = subR;
			subR->_parent = pparent;
		}
	}

	void RotateR(Node* parent)
	{
		Node* subL = parent->_pleft;
		Node* subLR = subL->_pright;

		parent->_pleft = subLR;
		if (subLR)
			subLR->_parent = parent;
		subL->_pright = parent;
		Node* pPNode = parent->_parent;
		parent->_parent = subL;

		if (_root == parent)
		{
			_root = subL;
			subL->_parent = nullptr;
		}
		else
		{
			if (pPNode->_pleft == parent)
			{
				pPNode->_pleft = subL;
			}
			else
				pPNode->_pright = subL;
			subL->_parent = pPNode;
		}
	}

	bool Insert(const DateType& val)
	{
		if (_root == nullptr)
		{
			//如果树为空直接作为根节点
			_root = new Node(val);
			_root->_color = BLACK;
			return true;
		}

		//判断插入在树的左面还是右面
		Node* cur = _root;
		Node* parent = nullptr;
		while (cur)
		{
			if (cur->_val > val)
			{
				//往左子树找插入位置
				parent = cur;
				cur = cur->_pleft;
			}
			else if (cur->_val < val)
			{
				//往右子树找插入位置
				parent = cur;
				cur = cur->_pright;
			}
			else
			{
				//树中存在
				return false;
			}
		}

		//判断插入的位置是在parent的左子树还是右子树
		Node* newnode = new Node(val);
		if (parent->_val > val)
		{
			parent->_pleft = newnode;
			newnode->_parent = parent;
		}
		else
		{
			parent->_pright = newnode;
			newnode->_parent = parent;
		}
		cur = newnode;

		//需要判断是否需要调整
		while (parent && parent->_color == READ)
		{
			Node* grandfather = parent->_parent;
			//需要分情况考虑叔叔所在的位置
			if (parent == grandfather->_pleft)
			{
				Node* uncle = grandfather->_pright;
				//parent，cur 为红，grandfather为黑，uncle存在且为红
				if (uncle && uncle->_color == READ)
				{
					parent->_color = uncle->_color = BLACK;
					grandfather->_color = READ;

					//继续向上更新
					cur = grandfather;
					parent = cur->_parent;
				}
				else
				{
					//叔叔节点不存在或者叔叔节点为黑

					//parent没有位于grandfather和cur之间 进行调整
					if (cur == parent->_pright)
					{
						//对条件三进行左单旋 将得到条件二
						RotateL(parent);
						swap(cur, parent);
					}

					RotateR(grandfather);
					grandfather->_color = READ;
					parent->_color = BLACK;
				}
			}
			else
			{
				//叔叔位于左子树
				Node* uncle = grandfather->_pleft;
				if (uncle && uncle->_color == READ)
				{
					uncle->_color = parent->_color = BLACK;
					grandfather->_color = READ;

					cur = grandfather;
					parent = cur->_parent;
				}
				else
				{
					//parent没有位于grandfather和cur之间 进行调整
					if (cur == parent->_pleft)
					{
						//将情况三调整为情况二
						RotateR(parent);
						swap(cur, parent);
					}

					RotateL(grandfather);
					grandfather->_color = READ;
					parent->_color = BLACK;
				}
			}

			_root->_color = BLACK;
		}
		return true;
	}

	void _Inorder(Node* root)
	{
		if (root == nullptr)
			return;
		_Inorder(root->_pleft);
		cout << root->_val << " ";
		_Inorder(root->_pright);
	}

	void Inorder()
	{
		_Inorder(_root);
	}

	bool _IsValidRBTree(Node* root, size_t k, const size_t blacksize)
	{
		if (root == nullptr)
		{
			//比较黑节点的个数是否相等
			if (k != blacksize)
			{
				cout << "左右不平衡" << endl;
				return  false;
			}
			return true;
		}
		//统计黑节点的个数
		if (BLACK == root->_color)
			k++;

		Node* parent = root->_parent;
		if (parent && root->_color == READ && parent->_color == READ)
		{
			cout << "两个红节点相连" << endl;
			return false;
		}

		return _IsValidRBTree(root->_pleft, k, blacksize) && _IsValidRBTree(root->_pright, k, blacksize);
	}

	bool IsValidRBTree()
	{
		if (_root == nullptr)
		{
			//为空树 满足
			return true;
		}
		//判断根节点是否满足是黑色的
		if (_root->_color != BLACK)
		{
			cout << "根节点不为黑色，不满足" << endl;
		}
		//计算黑节点的个数
		int blackcount = 0;
		Node* cur = _root;
		while (cur)
		{
			if (cur->_color == BLACK)
				blackcount++;
			cur = cur->_pleft;
		}

		size_t k = 0;
		return _IsValidRBTree(_root, k, blackcount);
	}

private:
	Node* _root = nullptr;
};