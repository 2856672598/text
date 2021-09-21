
////LCP 06. 拿硬币
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int minCount(vector<int>& coins)
//	{
//		int count = 0;
//		for (int i = 0; i < (int)coins.size(); i++)
//		{
//			count += coins[i] / 2;
//			if (coins[i] % 2 != 0)
//				count += 1;
//		}
//		return count;
//	}
//};
//
//
//int main()
//{
//	vector<int> nums{ 2,3,10 };
//	cout << Solution().minCount(nums) << endl;
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	string replaceSpace(string s)
//	{
//		string ret;
//		for (int i = 0; i < (int)s.size(); i++)
//		{
//			if (s[i] != ' ')
//				ret += s[i];
//			else
//				ret += "%20";
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	string s("We Are Happy");
//	cout << Solution().replaceSpace(s) << endl;
//	return 0;
//}

////剑指 Offer 11. 旋转数组的最小数字
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int minNumberInRotateArray(vector<int> rotateArray)
//	{
//		int left = 0, right = rotateArray.size() - 1;
//
//		while (left < right)
//		{
//			int mid = left + (right - left) / 2;
//
//			if (rotateArray[mid] > rotateArray[right])
//				//说明最小值一定在mid右侧
//				left = mid + 1;
//			else if (rotateArray[mid] < rotateArray[right])
//				//说明最小值一定在mid或者mid左侧
//				right = mid;
//			else
//				right--;
//		}
//		return rotateArray[left];
//	}
//};
//int main()
//{
//	vector<int> nums{ 3,3,3,1,2, };
//	cout << Solution().minNumberInRotateArray(nums) << endl;
//	return 0;
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution
//{
//public:
//	double Power(double base, int exponent)
//	{
//		double sum = 1;
//		while (exponent)
//		{
//			if (exponent % 2)
//			{
//				sum *= base;
//			}
//
//			base *= base;
//			exponent /= 2;
//		}
//		return sum;
//	}
//};
//
//int main()
//{
//	double base = 2;
//	int exponent = 5;
//	cout << Solution().Power(base, exponent) << endl;
//	return 0;
//}


////LCP 17. 速算机器人
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	int calculate(string s)
//	{
//		int x = 1, y = 0;
//		for (int i = 0; i < (int)s.size(); i++)
//		{
//			if (s[i] == 'A')
//				x = 2 * x + y;
//			else if (s[i] == 'B')
//				y = 2 * y + x;
//		}
//		return x + y;
//	}
//};
//
//int main()
//{
//	string s("AB");
//	cout << Solution().calculate(s) << endl;
//	return 0;
//}

