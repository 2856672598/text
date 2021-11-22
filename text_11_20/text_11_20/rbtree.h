#pragma once
#include<iostream>
#include<string>
using namespace std;

enum Color
{
	BLACK,
	RED
};

template<class T>
struct RBTreeNode
{

	RBTreeNode<T>* _left;
	RBTreeNode<T>*_right;
	RBTreeNode<T>*_parent;
	T _val;
	Color _color;

	RBTreeNode(const T& value)
		:_left(nullptr)
		, _right(nullptr)
		, _parent(nullptr)
		, _color(RED)
		, _val(value)
	{}
};

template<class T>
struct __TreeIterator
{
	typedef T ValueType;
	typedef RBTreeNode<ValueType> Node;
	typedef __TreeIterator<ValueType> Self;

	Node* _node;

	__TreeIterator(Node* node)
		:_node(node)
	{}

	ValueType& operator*()
	{
		return _node->_val;
	}

	ValueType* operator->()
	{
		return &_node->_val;
	}

	bool operator!=(const Self& self)
	{
		return _node != self._node;
	}

	Self& operator=(const Self& self)
	{
		return _node = self._node;
	}

	Self& operator++()
	{
		if (_node->_right)
		{
			//访问右子树中的左子树第一个节点
			Node* left = _node->_right;
			while (left->_left)
			{
				left = left->_left;
			}
			_node = left;
		}
		else
		{
			//右子树为空
			Node* parent = _node->_parent;
			Node* cur = _node;
			while (parent && cur == parent->_right)
			{
				cur = cur->_parent;
				parent = parent->_parent;
			}
			_node = parent;
		}
		return *this;
	}
};

namespace Solution
{
	template<class K,class T,class keyoft>
	class RBTree
	{
	public:
		typedef RBTreeNode<T> Node;
		typedef __TreeIterator<T> iterator;

		iterator begin()
		{
			Node* cur = _root;
			while (cur && cur->_left)
			{
				cur = cur->_left;
			}
			return iterator(cur);
		}

		iterator end()
		{
			return iterator(nullptr);
		}

		void rotationL(Node* parent)
		{
			Node* subR = parent->_right;
			Node* subRL = subR->_left;
			parent->_right = subRL;

			if (subRL)
				subRL->_parent = parent;
			subR->_left = parent;
			Node*pparent = parent->_parent;
			parent->_parent = subR;

			if (parent == _root)
			{
				_root = subR;
				subR->_parent = nullptr;
			}
			else
			{
				if (pparent->_left == parent)
				{
					pparent->_left = subR;
				}
				else
					pparent->_right = subR;
				subR->_parent = pparent;
			}
		}

		void rotationR(Node* parent)
		{
			Node* subL = parent->_left;
			Node* subLR = subL->_right;

			parent->_left = subLR;
			if (subLR)
				subLR->_parent = parent;
			subL->_right = parent;
			Node* pPNode = parent->_parent;
			parent->_parent = subL;

			if (_root == parent)
			{
				_root = subL;
				subL->_parent = nullptr;
			}
			else
			{
				if (pPNode->_left == parent)
				{
					pPNode->_left = subL;
				}
				else
					pPNode->_right = subL;
				subL->_parent = pPNode;
			}
		}

		pair<iterator, bool> Insert(const T& val)
		{
			if (_root == nullptr)
			{
				_root = new Node(val);
				_root->_color = BLACK;
				return make_pair(iterator(_root), true);
			}

			//用于比较
			keyoft kot;
			Node* parent = nullptr;
			Node* cur = _root;
			while (cur)
			{
				if (kot(cur->_val) > kot(val))
				{
					//在左面找
					parent = cur;
					cur = cur->_left;
				}
				else if (kot(cur->_val) < kot(val))
				{
					//在右面找
					parent = cur;
					cur = cur->_right;
				}
				else
				{
					//树中存在
					return make_pair(iterator(cur), false);
				}
			}

			//判断插在左面还是右面
			Node* newnode = new Node(val);
			if (kot(parent->_val) > kot(val))
			{
				parent->_left = newnode;
				newnode->_parent = parent;
			}
			else
			{
				parent->_right = newnode;
				newnode->_parent = parent;
			}

			cur = newnode;
			//需要判断插入后是否需要调整
			while (parent&& parent->_color == RED)
			{
				Node* grandfather = parent->_parent;
				if (grandfather->_left == parent)
				{
					Node* uncle = grandfather->_right;
					if (uncle&&uncle->_color == RED)
					{
						//叔叔存在且为红
						parent->_color = uncle->_color = BLACK;
						grandfather->_color = RED;
						cur = grandfather;
						parent = cur->_parent;
					}
					else
					{
						if (cur == parent->_right)
						{
							//先进行左单旋
							rotationL(parent);
							swap(parent, cur);
						}
						//叔叔不存在或叔叔为黑
						rotationR(grandfather);
						parent->_color = BLACK;
						grandfather->_color = RED;
						break;
					}
				}
				else
				{
					Node* uncle = grandfather->_left;
					if (uncle&&uncle->_color == RED)
					{
						parent->_color = uncle->_color = BLACK;
						grandfather->_color = RED;
						cur = grandfather;
						parent = cur->_parent;
					}
					else
					{
						if (parent->_left == cur)
						{
							rotationR(parent);
							swap(parent, cur);
						}
						rotationL(grandfather);
						parent->_color = BLACK;
						grandfather->_color = RED;
						break;
					}
				}
				_root->_color = BLACK;
			}
			return make_pair(newnode, true);
		}

		void _inOrder(Node* root)
		{
			if (root == nullptr)
				return;
			_inOrder(root->_left);
			cout << root->_val << endl;
			_inOrder(root->_right);
		}

		void inOrder()
		{
			_inOrder(_root);
		}

		iterator find(const K& k)
		{
			keyoft kof;

			Node* cur = _root;
			while (cur)
			{
				if (kof(cur->_val) > k)
				{
					cur = cur->_left;
				}
				else if (kof(cur->_val) < k)
				{
					cur = cur->_right;
				}
				else
					return iterator(cur);
			}
			return iterator(nullptr);
		}
	private:
		Node* _root = nullptr;
	};
}