#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	char input;
//	int a = 0, b = 0, c = 0, d = 0;
//	while (scanf("%c", &input)!=EOF)
//	{
//		if (input >= 'a'&&input <= 'z' || input >= 'A'&&input <= 'Z')
//			a++;
//		else if (input >= '0'&&input <= '9')
//			b++;
//		else if (input == ' ')
//			c++;
//		else d++;
//	}
//	printf("%d %d %d %d", a, b, c, d);
//}

//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double mole = 2;
//	double den = 1;
//	double sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += mole / den;
//		double tmp = mole;
//		mole += den;
//		den = tmp;
//	}
//	printf("%.2lf", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[3][3];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int tmp[3][3];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			tmp[j][i] = arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", tmp[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int ctof(int c)
//{
//	return 32 + c * 9 / 5;
//}
//int main()
//{
//	int flag = -100;
//	while (flag <= 150)
//	{
//		printf("%d ", ctof(flag));
//		flag += 5;
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0;
//	int arr[100];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort()
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	vector<int> nums(n, 0);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> nums[i];
//	}
//	sort(nums.begin(), nums.end());
//
//	int left = 0, right = 0, cur = 0;
//	while (right< n)
//	{
//		if (nums[right] == nums[left])
//		{
//			right++;
//		}
//		else
//		{
//			nums[cur++] = nums[left];
//			left = right;
//			right++;
//		}
//	}
//	nums[cur++] = nums[left];
//
//	printf("%d\n", cur);
//	for (int i = 0; i < cur; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		for (int j = 0; j < 100; j++)
//		{
//			for (int z = 0; z < 100; z++)
//			{
//				if ((i * 5 + j * 3 + z / 3) == 100 && z % 3 == 0)
//				{
//					printf("cock=%d,hen=%d,chicken=%d\n", i, j, z);
//				}
//			}
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[40];
//	arr[0] = 1;
//	arr[1] = 1;
//	for (int i = 2; i < n; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n = 0;
//	cin >> n;
//	vector<string> nums;
//	string tmp;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> tmp;
//		nums.push_back(tmp);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		int a = 0, b = 0, c = 0, d = 0;
//		int flag = 0;
//		for (int j = 0; j < (int)nums[i].size(); j++)
//		{
//			if (nums[i].size() > 16 || nums[i].size() < 8)
//			{
//				printf("NO\n");
//				flag = 1;
//				break;
//			}
//			if (islower(nums[i][j]))
//				a = 1;
//			else if (isupper(nums[i][j]))
//				b = 1;
//			else if (isdigit(nums[i][j]))
//				c = 1;
//			else if (nums[i][j] == '~' || nums[i][j] == '!' || nums[i][j] == '@' || nums[i][j] == '#'
//				|| nums[i][j] == '$' || nums[i][j] == '%' || nums[i][j] == '^')
//				d = 1;
//
//			if ((a + b + c + d) >= 3)
//				break;
//		}
//		if ((a + b + c + d) >= 3)
//		{
//			printf("YES\n");
//		}
//		else if (flag == 0)
//			printf("NO\n");
//	}
//	return 0;
//}




//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	char input;
//	int a = 0, b = 0, c = 0, d = 0;
//	while ((input = getchar()) != '\n')
//	{
//		if (input >= 'a'&&input <= 'z' || input >= 'A'&&input <= 'Z')
//			a++;
//		else if (input >= '0'&&input <= '9')
//			b++;
//		else if (input == ' ')
//			c++;
//		else
//			d++;
//	}
//	printf("%d %d %d %d", a, b, c, d);
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int a = 0, b = 0;
//	vector<int> sum;
//	while (cin >> a >> b)
//	{
//		sum.push_back(a + b);
//	}
//	for (auto e : sum)
//		cout << e << endl;
//	return 0;
//}


//#include<stdio.h>
//int ctof(int c)
//{
//	return 32 + c * 9 / 5;
//}
//int main()
//{
//	int flag = -100;
//	while (flag <= 150)
//	{
//		printf("c=%d->f=%d\n", flag, ctof(flag));
//		flag += 5;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	for (int i = 0; i <= 20; i++)
//	{
//		for (int j = 0; j <= 33; j++)
//		{
//			int z = 100 - i - j;
//			if (z >= 0 && i * 5 + j * 3 + z / 3 == 100 && z % 3 == 0)
//				printf("cock=%d,hen=%d,chicken=%d\n", i, j, z);
//		}
//	}
//	return 0;
//}


////类似于斐波那锲找规律
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n = 0;
//	vector<int>nums(55, 0);
//	nums[0] = 1;
//	nums[1] = 2;
//	nums[2] = 3;
//	for (int i = 3; i < 55; i++)
//	{
//		nums[i] = nums[i - 1] + nums[i - 3];
//	}
//	while (scanf("%d", &n) && n != 0)
//	{
//		printf("%d\n", nums[n - 1]);
//	}
//	return 0;
//}

////题目 1021: [编程入门]迭代法求平方根
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double n = 0;
//	scanf("%lf", &n);
//	double prev = n / 2;
//	double cur = n;
//	while (fabs(prev - cur) >= 0.00001)
//	{
//		double tmp = (prev + n / prev) / 2;
//		prev = cur;
//		cur = tmp;
//	}
//	printf("%.3lf", cur);
//	return 0;
//}


//#include<iostream>
//#include<math.h>
//using namespace std;
//
//class Solution {
//public:
//	int mySqrt(int x)
//	{
//		if (x == 1)
//			return 1;
//		double prev = x / 2.0;
//		double cur = x;
//		while (fabs(prev - cur) >= 0.0001)
//		{
//			double tmp = (prev + x / prev) / 2;
//			prev = cur;
//			cur = tmp;
//		}
//		return (int)prev;
//	}
//};
//int main()
//{
//	int n = 0;
//	cin >> n;
//	cout << Solution().mySqrt(n) << endl;
//	return 0;
//}


//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	vector<string> nums;
//	for (int i = 0; i < 3; i++)
//	{
//		string tmp;
//		cin >> tmp;
//		nums.push_back(tmp);
//	}
//	sort(nums.begin(), nums.end());
//	for (auto e : nums)
//	{
//		cout << e << endl;
//	}
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		int fast = 1, slow = 0;
//		if (nums.size() == 0)
//			return 0;
//		while (fast < (int)nums.size())
//		{
//			if (nums[fast] != nums[slow])
//			{
//				nums[++slow] = nums[fast++];
//			}
//			else
//				fast++;
//		}
//		slow++;
//		return slow;
//	}
//};
//int main()
//{
//	vector<int> nums{ 1,2,2,3,3,4,5,6 };
//	cout << Solution().removeDuplicates(nums) << endl;
//	return 0;
//}

//埃氏筛

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n = 0;
//	cin >> n;
//	vector<bool> flag(n, 1);
//	flag[0] = 0;
//	flag[1] = 0;
//	for (int i = 2; i < n; i++)
//	{
//		for (int j = 2*i; j < n; j += i)
//		{
//			flag[j] = 0;
//		}
//	}
//
//	for (int i = 2; i < n; i++)
//	{
//		if (flag[i] == 1)
//			cout << i << endl;
//	}
//	return 0;
//}


//#include<iostream>
//#include<math.h>
//#include<algorithm>
//using namespace std;
//
//bool isprime(int x)
//{
//	if (x < 2)
//		return false;
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x%i == 0)
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int sum = 0;
//	for (int i = m; i <= n; i++)
//	{
//		if (isprime(i))
//		{
//			sum += i;
//		}
//	}
//	cout << sum << endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	vector<bool> flag(n, true);
//	flag[0] = false;
//	flag[1] = false;
//
//	for (int i = 2; i < n; i++)
//	{
//		for (int j = 2 * i; j < n; j += i)
//		{
//			flag[j] = false;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (flag[i] == 1)
//			cout << i << endl;
//	}
//	return 0;
//}


//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			printf("%d", 0);
//			return 0;
//		}
//	}
//	printf("%d", 1);
//	return 0;
//}

//
////题目 1250: 素数回文
//#include<iostream>
//#include<vector>
//using namespace std;
//
//vector<bool>& isPrime(vector<bool>& flag, int k)
//{
//	for (int i = 2; i < k; i++)
//	{
//		for (int j = 2 * i; j < k; j += i)
//		{
//			flag[j] = false;
//		}
//	}
//	return flag;
//}
//bool isPalindrome(int target)
//{
//	vector<int> flag;
//	while (target)
//	{
//		flag.push_back(target % 10);
//		target /= 10;
//	}
//	if (flag.size() == 1)
//		return true;
//	int left = 0, right = flag.size() - 1;
//	while (left < right)
//	{
//		if (flag[left] != flag[right])
//			return false;
//		left++;
//		right--;
//	}
//	return true;
//}
//int main()
//{
//	int a = 0, b = 0;
//	cin >> a >> b;
//	vector<bool> flag(b, true);
//	flag[0] = flag[1] = false;
//	isPrime(flag, b);
//
//	for (int i = a; i < b; i++)
//	{
//		if (flag[i] && isPalindrome(i))
//			cout << i << endl;
//	}
//	return 0;
//}


#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int left = 0, right = 0;
	cin >> left >> right;
	vector<bool>flag(right + 1, true);
	flag[0] = flag[1] = false;
	for (int i = 2; i <= sqrt(right); i++)
	{
		for (int j = 2 * i; j <= right; j += i)
		{
			flag[j] = false;
		}
	}
	int count = 0;
	for (int i = left; i <= right; i++)
	{
		if (flag[i])
			count++;
	}
	cout << count << endl;
	return 0;
}