#pragma once
#include<iostream>
using namespace std;


template<class K ,class V>
struct VALTreeNode
{
	VALTreeNode<K,V>* _pLeft;
	VALTreeNode<K,V>* _pRight;
	VALTreeNode<K,V>* _pParent;
	pair<K, V> _kv;
	int _bf;//平衡因子
	VALTreeNode(const pair<K, V>& kv)
		:_pLeft(nullptr)
		, _pRight(nullptr)
		, _pParent(nullptr)
		, _kv(kv)
		, _bf(0)
	{}
};

template<class K,class V>
class VALTree
{
public:
	typedef VALTreeNode<K, V> Node;

	void RotateL(Node* parent)
	{
		Node* subR = parent->_pRight;
		Node* subRL = subR->_pLeft;
		parent->_pRight = subRL;

		if (subRL)
			subRL->_pParent = parent;
		subR->_pLeft = parent;
		Node*pparent = parent->_pParent;
		parent->_pParent = subR;

		if (parent == _root)
		{
			_root = subR;
			subR->_pParent = nullptr;
		}
		else
		{
			if (pparent->_pLeft == parent)
			{
				pparent->_pLeft = subR;
			}
			else
				pparent->_pRight = subR;
			subR->_pParent = pparent;
		}
		parent->_bf = subR->_bf = 0;
	}

	void RotateR(Node* parent)
	{
		Node* subL = parent->_pLeft;
		Node* subLR = subL->_pRight;

		parent->_pLeft = subLR;
		if (subLR)
			subLR->_pParent = parent;
		subL->_pRight = parent;
		Node* pPNode = parent->_pParent;
		parent->_pParent = subL;

		if (_root == parent)
		{
			_root = subL;
			subL->_pParent = nullptr;
		}
		else
		{
			if (pPNode->_pLeft == parent)
			{
				pPNode->_pLeft = subL;
			}
			else
				pPNode->_pLeft = subL;
			subL->_pParent = pPNode;
		}
		parent->_bf = subL->_bf = 0;
	}

	void RotateRL(Node* parent)
	{
		Node*subR = parent->_pRight;
		Node* subRL = subR->_pLeft;
		RotateR(parent->_pRight);
		RotateL(parent);//左旋

		//判断是插入在左面还是右面
		int bf = subRL->_bf;

		if (bf == -1)
		{
			//插入在了左面
			subRL->_bf = 0;
			parent->_bf = 0;
			subR->_bf = 1;
		}
		else if (bf == 1)
		{
			//插入在了右面
			subR->_bf = 0;
			parent->_bf = -1;
			subRL->_bf = 0;
		}
		else
		{
			subR->_bf = 0;
			parent->_bf = 0;
			subRL->_bf = 0;
		}

	}

	void RotateLR(Node* parent)
	{
		Node* subL = parent->_pLeft;
		Node* subLR = subL->_pRight;

		RotateL(subL);
		RotateR(parent);

		int bf = subLR->_bf;
		if (bf == -1)
		{
			//在左面
			parent->_bf = -1;
			subL->_bf = 0;
			subLR->_bf = 0;
		}
		else if (bf == 1)
		{
			//右面
			parent->_bf = 0;
			subL->_bf = -1;
			subLR->_bf = 0;
		}
		else
		{
			//bf == 0;
			parent->_bf = 0;
			subL->_bf = 0;
			subLR->_bf = 0;
		}
	}

	bool Insert(const pair<K, V>& kv)
	{
		if (_root == nullptr)
		{
			_root = new Node(kv);
			_root->_pParent = nullptr;
		}

		Node* cur = _root;
		Node* parent = nullptr;
		while (cur)
		{
			if (cur->_kv.first > kv.first)
			{
				//在左子树找位置插入
				parent = cur;
				cur = cur->_pLeft;
			}
			else if (cur->_kv.first < kv.first)
			{
				//在右子树找位置插入
				parent = cur;
				cur = cur->_pRight;
			}
			else
			{
				//重复
				return false;
			}
		}

		cur = new Node(kv);
		if (parent->_kv.first > cur->_kv.first)
		{
			//在左树插入
			parent->_pLeft = cur;
			cur->_pParent = parent;
		}
		else
		{
			//右树插入
			parent->_pRight = cur;
			cur->_pParent = parent;
		}

		//更新平衡因子
		while (parent)
		{
			if (parent->_pLeft == cur)
				parent->_bf--;
			else
				parent->_bf++;

			//判断是否需要继续更新
			if (parent->_bf == 0)
			{
				//插入后此树已经平衡
				break;
			}
			else if (parent->_bf == -1 || parent->_bf == 1)
			{
				//需要继续更新父亲节点
				cur = parent;
				parent = cur->_pParent;
			}
			else if (parent->_bf == 2 || parent->_bf == -2)
			{
				//不满足条件，需要进行旋转
				if (parent->_bf == 2)
				{
					if (cur->_bf == 1)
					{
						RotateL(parent);
					}
					else if (cur->_bf == -1)
					{
						RotateRL(parent);
					}
				}
				else
				{
					if (cur->_bf == 1)
					{
						RotateR(parent);
					}
					else
					{
						RotateLR(parent);
					}
				}
				break;
			}
		}
		return true;
	}
private:
	Node* _root = nullptr;
};