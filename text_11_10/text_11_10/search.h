#pragma once
#include<iostream>
#include<vector>
#include<cassert>
using namespace std;

template<class T>
struct TreeNode
{
	TreeNode<T>* _leftchild;
	TreeNode<T>* _rightchild;
	T _date;
	TreeNode(const T& date)
		:_leftchild(nullptr)
		, _rightchild(nullptr)
		, _date(date)
	{}
};

template<class T>
class BSTree
{
	typedef TreeNode<T> Node;
public:
	bool Insert(const T& val)
	{
		if (_root == nullptr)
		{
			_root = new Node(val);
			return true;
		}

		//寻找插入位置
		Node* cur = _root;
		Node* parent = nullptr;
		while (cur)
		{
			if (cur->_date > val)
			{
				//在左子树
				parent = cur;
				cur = cur->_leftchild;
			}
			else if (cur->_date < val)
			{
				parent = cur;
				cur = cur->_rightchild;
			}
			else
				return false;
		}

		if (val < parent->_date)
		{
			parent->_leftchild = new Node(val);
		}
		else
			parent->_rightchild = new Node(val);
		return true;
	}

	bool Erase(const T& val)
	{
		assert(_root);
		Node* cur = _root;
		Node* parent = nullptr;
		while (cur)
		{
			if (cur->_date == val)
				break;
			else if (cur->_date > val)
			{
				parent = cur;
				cur = cur->_leftchild;
			}
			else
			{
				parent = cur;
				cur = cur->_rightchild;
			}
		}

		if (cur == nullptr)
			return false;//说明树中没有该节点

		if (cur->_leftchild == nullptr)
		{
			//左子树为空
			if (_root == cur)
			{
				_root = cur->_rightchild;
				//找到的是根

			}
			else if (parent->_leftchild == cur)
			{
				//删除cur将cur的右子树链接到parent的左侧
				parent->_leftchild = cur->_rightchild;
			}
			else
			{
				parent->_rightchild = cur->_rightchild;
			}
			delete cur;
		}
		else if (cur->_rightchild == nullptr)
		{
			if (_root == cur)
			{
				_root = cur->_leftchild;
			}
			else if (parent->_leftchild == cur)
			{
				parent->_leftchild = cur->_leftchild;
			}
			else
			{
				parent->_rightchild = cur->_leftchild;
			}
			delete cur;
		}
		else
		{
			//需要删除的节点cur左右都不为空
			//需要找到cur的左子树的最大节点
			parent = cur;
			Node* leftMax = cur->_leftchild;
			while (leftMax->_rightchild)
			{
				parent = leftMax;
				leftMax = leftMax->_rightchild;
			}

			//找到了 进行替换
			cur->_date = leftMax->_date;

			//删除leftMax
			//右子树有可能为空
			if (parent->_leftchild == leftMax)
			{
				parent->_leftchild = leftMax->_leftchild;
			}
			else
				parent->_rightchild = leftMax->_leftchild;
			delete leftMax;
		}
		return true;
	}

	void _InOrder(Node* root)
	{
		if (root == nullptr)
			return;
		_InOrder(root->_leftchild);
		cout << root->_date << " ";
		_InOrder(root->_rightchild);
	}

	void InOrder()
	{
		_InOrder(_root);
	}

private:
	Node* _root = nullptr;
};