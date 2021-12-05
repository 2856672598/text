#include"code.h"
void menu()
{
	cout << "1.输入歌手信息" << endl;
	cout << "2.输出歌手信息" << endl;
	cout << "3.成绩排序" << endl;
	cout << "4.保存歌手信息" << endl;
	cout << "5.查询歌手信息" << endl;
	cout << "6.删除歌手信息" << endl;
	cout << "0.退出" << endl;
}

int main()
{
	Solution nums;
	int choose;
	Message tmp;
	int pos = 0;
	nums.init();
	do
	{
		menu();
		cout << "请选择>";
		cin >> choose;
		switch (choose)
		{
		case 0:
			cout << "退出" << endl;
			break;
		case 1:
			cout << "输入编号>";
			cin >> tmp._id;
			cout << "输入姓名>";
			cin >> tmp._name;
			cout << "输入歌曲>";
			cin >> tmp._music;
			cout << "大众评委的投票>";
			cin >> tmp._popularVotes;
			cout << "专业评委打分>";
			cin >> tmp._judges;
			tmp._totalScore = (tmp._popularVotes + tmp._judges) / 6;
			if (!nums.add(tmp))
				cout << "编号已经存在" << endl;
			else
				cout << "添加成功" << endl;
			break;
		case 2:
			nums.print();
			break;
		case 3:
			nums.sort();
			nums.print();
			break;
		case 4:
			nums.save();
			cout << "保存成功" << endl;
			break;
		case 5:
			cout << "输入您要查找的id>";
			cin >> tmp._id;
			pos = nums.find(tmp._id);
			if (pos == -1)
				cout << "编号不存在" << endl;
			else
				nums._print(pos);
			break;
		case 6:
			cout << "输入您要删除的id>";
			cin >> tmp._id;
			nums.dele(tmp._id);
			break;
		default:
			break;
		}
		system("pause");   //按任意键继续 
		system("cls");  //清屏操作 
	} while (choose);
	nums.save();
	return 0;
}