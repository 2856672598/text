//#pragma once
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<fstream>
//using namespace std;
//
//struct Message
//{
//	string _id;
//	string _name;
//	string _music;
//	size_t _popularVotes;
//	size_t _judges;
//	double _totalScore;
//};
//
//class Solution
//{
//public:
//	bool add(Message& val)
//	{
//		//判断编号是否存在
//		for (int i = 0; i < _nums.size(); i++)
//		{
//			if (val._id == _nums[i]._id)
//				return false;
//		}
//		_nums.push_back(val);
//		return true;
//	}
//
//	void _print(int pos)
//	{
//		cout << "ID\t" << "姓名\t" << "歌曲\t" << "大众评委投票\t" << "专业评委投票\t" << "总分\t" << endl;
//		cout << _nums[pos]._id << "\t" << _nums[pos]._name << "\t" << _nums[pos]._music << "\t" << _nums[pos]._judges << "\t\t"
//			<< _nums[pos]._popularVotes << "\t\t" << _nums[pos]._totalScore << endl;
//	}
//	void print()
//	{
//		cout << "ID\t" << "姓名\t" << "歌曲\t" << "大众评委投票\t" << "专业评委投票\t" << "总分\t" << endl;
//		for (int i = 0; i < (int)_nums.size(); i++)
//		{
//			cout << _nums[i]._id << "\t" << _nums[i]._name << "\t" << _nums[i]._music << "\t" << _nums[i]._judges << "\t\t"
//				<< _nums[i]._popularVotes << "\t\t" << _nums[i]._totalScore << endl;
//		}
//	}
//
//	void sort()
//	{
//		for (int i = 0; i < (int)_nums.size() - 1; i++)
//		{
//			for (int j = 0; j < (int)_nums.size() - 1 - i; j++)
//			{
//				if (_nums[j]._judges > _nums[j + 1]._judges)
//				{
//					swap(_nums[j], _nums[j + 1]);
//				}
//			}
//		}
//	}
//	
//	void init()
//	{
//		ifstream myfile("text.txt");
//		if (!myfile.is_open())
//		{
//			cout << "打开失败" << endl;
//			exit(-1);
//		}
//		Message tmp;
//		while (myfile >> tmp._id >> tmp._name >> tmp._music
//			>> tmp._popularVotes >> tmp._judges >> tmp._totalScore)
//		{
//			_nums.push_back(tmp);
//		}
//	}
//
//	void save()
//	{
//		ofstream myfile("text.txt");
//		if (!myfile.is_open())
//		{
//			cout << "打开失败" << endl;
//			exit(-1);
//		}
//		int index = 0;
//		for (int i = 0; i < (int)_nums.size(); i++)
//		{
//			myfile << _nums[i]._id << " "
//				<< _nums[i]._name << " "
//				<< _nums[i]._music << " "
//				<< _nums[i]._popularVotes << " "
//				<< _nums[i]._judges << " "
//				<< _nums[i]._totalScore << endl;
//		}
//	}
//
//	//找不到返回-1;
//	int find(const string& id)
//	{
//		for (int i = 0; i < (int)_nums.size(); i++)
//		{
//			if (id.compare(_nums[i]._id) == 0)
//				return i;
//		}
//		return-1;
//	}
//
//	void dele(const string& id)
//	{
//		int pos = find(id);
//		if (pos != -1)
//		{
//			swap(_nums[pos], _nums[_nums.size() - 1]);
//			_nums.resize(_nums.size() - 1);
//			cout << "删除成功" << endl;
//		}
//	}
//private:
//	vector<Message> _nums;
//};