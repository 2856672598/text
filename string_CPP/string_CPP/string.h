#include<iostream>
#include<string.h>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS 1
//namespace solution
//{
//	class string
//	{
//	public:
//		string(const char* ret = "")
//			:_ret(new char[strlen(ret) + 1])
//		{
//			strcpy(_ret, ret);
//		}
//
//		~string()
//		{
//			delete[] _ret;
//			_ret = nullptr;
//		}
//		string(const string& s)
//		{
//			_ret = new char[strlen(s._ret) + 1];
//			strcpy(_ret, s._ret);
//		}
//
//		const string& operator=(const string& s)
//		{
//			if (this != &s)
//			{
//				delete[] _ret;
//				_ret = new char[strlen(s._ret) + 1];
//				strcpy(_ret, s._ret);
//			}
//			return *this;
//		}
//		size_t size()
//		{
//			return strlen(_ret);
//		}
//		char& operator[](const size_t i)
//		{
//			return _ret[i];
//		}
//		void Print()
//		{
//			cout << _ret << endl;
//		}
//
//	private:
//		char* _ret;
//	};
//
//	void text1_string()
//	{
//		string s1("hello");
//		string s2(s1);
//		string s3 = s2;
//		string s4("word");
//		s1.Print();
//		s2.Print();
//		s3.Print();
//		s1 = s4;
//		s1.Print();
//		s2 = s4;
//		s2.Print();
//		s1 = s2 = s3 = s4;
//		s1.Print();
//		s2.Print();
//		s3.Print();
//		s4.Print();
//
//		//string s1("hello");
//		//string s2;
//		//s2 = s1;
//		//s2.Print();
//	}
//}

#include<assert.h>
namespace solution
{
	class string
	{
	public:
		typedef char* iterator;
		string(const char* s = "")
		{
			int size = strlen(s);
			_ret = new char[size + 1];
			_size = _capacity = size;
			strcpy(_ret, s);
		}

		string(const string& s)
		{
			size_t size = s.size();
			_ret = new char[size + 1];
			strcpy(_ret, s._ret);
			_size = _capacity = size;
		}

		~string()
		{
			delete[] _ret;
			_ret = nullptr;
			_size = _capacity = 0;
		}
		char& operator[](const size_t i)const
		{
			assert(i < size());
			return _ret[i];
		}
		const string& operator=(const string& s)
		{
			delete[] _ret;
			_ret = new char[s.size() + 1];
			strcpy(_ret, s._ret);
			return *this;
		}
		void reserve(const size_t n)
		{
			size_t newcapacity = _size + n;
			if (newcapacity > _capacity)
			{
				char* newret = new char[newcapacity + 1];
				strcpy(newret, _ret);
				_capacity = newcapacity;
				delete[] _ret;
				_ret = newret;
			}
		}

		void push_back(const char ch)
		{
			//扩容
			if (_size == _capacity)
			{
				size_t newcapacity = _capacity == 0 ? 2 : 2 * _capacity;
				reserve(newcapacity);
			}
			_ret[_size++] = ch;
			_ret[_size] = '\0';
		}

		void append(const char* ret)
		{
			size_t size = this->size();
			if (size + strlen(ret) > _capacity)
			{
				reserve(size + strlen(ret));
			}
			strcpy(_ret + size, ret);

			_size += strlen(ret);
		}

		string& operator+=(const char* ret)
		{
			append(ret);
			return *this;
		}

		string& operator+=(const char ch)
		{
			push_back(ch);
			return *this;
		}

		size_t find(const char ch, size_t pos = 0)
		{
			if (pos < _size)
			{
				for (size_t i = pos; i < size(); i++)
				{
					if (_ret[i] == ch)
						return i;
				}
			}
			return npos;
		}

		size_t size()const
		{
			return strlen(_ret);
		}

		size_t capacity()const
		{
			return _capacity;
		}

		iterator begin()const
		{
			return _ret;
		}

		iterator end()const
		{
			size_t size = this->size();
			return _ret + size;
		}

		bool operator<(const string& s)const
		{
			return strcmp(_ret, s._ret);
		}

		bool operator==(const string& s)const
		{
			if (strcmp(_ret, s._ret) == 0)
				return true;
			else
				return false;
		}

		bool operator<=(const string& s)const
		{
			if (_ret == s._ret || _ret < s._ret)
				return true;
			else
				return false;
		}

		string& insert(size_t pos, const char ch)
		{
			assert(pos <= _size && pos >= 0);
			if (_size == _capacity)
			{
				size_t newcapacity = _capacity == 0 ? 2 : 2 * _capacity;
				reserve(newcapacity);
			}

			int end = _size;
			while (end >= (int)pos)
			{
				_ret[end + 1] = _ret[end];
				end--;
			}
			_ret[pos] = ch;
			_size++;
			return *this;
		}

		string& insert(size_t pos, const char* s)
		{
			assert(pos <= _size && pos >= 0);
			size_t sz = strlen(s);
			if (sz + _size > _capacity)
			{
				//扩容
				reserve(sz + _size);
			}
			//移动
			int move = _size - pos + 1;
			size_t cur = _size;
			while (move >0)
			{
				_ret[cur + sz] = _ret[cur];

				move--;
				cur--;
			}
			strncpy(_ret + pos, s, sz);

			return *this;
		}

		void resize(size_t n, const char c = '\0')
		{
			if (n < _size)
			{
				_size = n;
				_ret[n] = '\0';
			}
			else
			{
				if (n > _capacity)
				{
					reserve(n);
				}
				for (size_t i = _size; i < n; i++)
				{
					_ret[i] = c;
				}
				_size = n;
				_ret[_size] = '\0';
			}
		}


	private:
		char* _ret;
		size_t _size;
		size_t _capacity;
		static const size_t npos;
	};
	const size_t string::npos = -1;

	ostream& operator<<(ostream& _out, const string& s)
	{
		for (size_t i = 0; i < s.size(); i++)
		{
			_out << s[i] << "";
		}
		cout << endl;
		return _out;
	}
	void text_string1()
	{
		string s1;
		string s2("hello");
		string s3(s2);
		cout << s1;
		cout << s2;
		cout << s3;
		s1 = s2 = s3;
		cout << s1;
	}
	void text_string2()
	{
		//遍历三种方式
		string s1("hello");

		for (size_t i = 0; i < s1.size(); i++)
		{
			cout << s1[i] << " ";
		}
		cout << endl;

		//迭代器
		string::iterator it = s1.begin();
		while (it != s1.end())
		{
			cout << *it << " ";
			it++;
		}
		cout << endl;

		//范围for--->是由迭代器实现的
		for (auto s: s1)
		{
			cout << s << " ";
		}
		cout << endl;

		string s2;
		s2.append("hello");
		s2.push_back(' ');
		s2.push_back('w');
		s2.push_back('o');
		s2.push_back('r');

		s2 += 'l';
		s2 += "lld";
		cout << s2;

		cout << s2.find('w') << endl;
		string s3("hello world hello");
		cout << s3.find('l', 4) << endl;
	}

	void text_string3()
	{
		string s1("hello");
		string s2("hellol");
		cout << (s1 == s2) << endl;
		string s3;
		s1.push_back('c');
		cout << s1 << endl;
		s1.insert(4, 'p');
		cout << s1;
		s1.insert(7, "xxxxxxxxx");
		cout << s1;

		s1.resize(50, 'X');
		cout << s1;
	}
}