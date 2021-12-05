//#include"text.h"
////using wkn::fun;
//
//using namespace wkn;
//void text1()
//{
//	fun();
//}
//int main()
//{
//	fun();
//	return 0;
//}

//#include<stdio.h>
//void print(int*arr, int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int n = 10;
//	int arr[10] = { 7 ,1, 4, 6, 8 ,9 ,5 ,2, 3, 10 };
//	int count = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (count <= 3)
//		{
//			print(arr, n);
//			count++;
//		}
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//void print(int*arr, int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int n = 10;
//	int arr[10] = { 7 ,1, 4, 6, 8 ,9 ,5 ,2, 3, 10 };
//	int count = 0;
//	for (int i = 0; i < n-1; i++)
//	{
//		int mini = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[j] < arr[mini])
//			{
//				mini = j;
//			}
//		}
//		int tmp = arr[i];
//		arr[i] = arr[mini];
//		arr[mini] = tmp;
//		if (count < 3)
//		{
//			print(arr, n);
//			count++;
//		}
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//void print(int*arr, int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//
//int main()
//{
//	int n = 10;
//	int arr[10] = { 7 ,1, 4, 6, 8 ,9 ,5 ,2, 3, 10 };
//	int count = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		int end = i;
//		int flag = arr[end + 1];
//		while (end >= 0)
//		{
//			if (flag < arr[end])
//			{
//				arr[end + 1] = arr[end];
//			}
//			else
//				break;
//			end--;
//		}
//		arr[end + 1] = flag;
//		if (count < 3)
//		{
//			print(arr, n);
//			count++;
//		}
//	}
//	print(arr, n);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//void print(int*arr, int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//
//int main()
//{
//	int n = 10;
//	int arr[10] = { 7, 1 ,4, 6, 8, 9, 5, 2, 3, 10 };
//	int count = 0;
//	int gap = 5;
//	while (gap)
//	{
//		for (int i = 0; i < n - gap; i++)
//		{
//			int end = i;
//			int flag = arr[end + gap];
//			while (end >= 0)
//			{
//				if (arr[end] > flag)
//					arr[end + gap] = arr[end];
//				else
//					break;
//				end -= gap;
//			}
//			arr[end + gap] = flag;
//		}
//		if (count < 3)
//		{
//			print(arr, n);
//			count++;
//		}
//		gap /= 2;
//	}
//	print(arr, n);
//}


//#include<iostream>
//using namespace std;
//int* _array(int* a, int n1, int* b, int n2)
//{
//	int* ret = (int*)malloc(sizeof(int)*(n1 + n2));
//	int index = 0;
//	int begin1 = 0, begin2 = 0;
//	while (begin1 < n1&&begin2 < n2)
//	{
//		if (a[begin1] > b[begin2])
//		{
//			ret[index++] = b[begin2++];
//		}
//		else
//			ret[index++] = a[begin1++];
//	}
//	while (begin1 < n1)
//		ret[index++] = a[begin1++];
//	while (begin2 < n2)
//		ret[index++] = b[begin2++];
//
//	for (int i = 0; i < n1 + n2; i++)
//		a[i] = ret[i];
//	free(ret);
//	return a;
//}
//
//void _sort(int* arr, int left, int right)
//{
//	if (left >= right)
//		return;
//	int mid = left + (right - left) / 2;
//	_sort(arr, left, mid);
//	_sort(arr, mid + 1, right);
//
//	_array(arr + left, mid - left+1, arr + mid + 1, right - mid);
//}
//
//int* sort(int*arr, int n)
//{
//	_sort(arr, 0, n - 1);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return arr;
//}
//int main()
//{
//	int n = 15;
//	int arr[] = { 3, 44, 38, 5 ,47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48 };
//	sort(arr, n);
//	return 0;
//}

//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		if (i % 7 == 0)
//			cout << i << " ";
//		else
//		{
//			int tmp = i;
//			while (tmp)
//			{
//				if (tmp % 10 == 7)
//				{
//					cout << i << " ";
//					break;
//				}
//				tmp /= 10;
//			}
//		}
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	printf("%.*lf", c, 1.0*a / b);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n;
//	int arr[1000];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//
//	int i = 0, max = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		int j = 0, sum = 1;
//		for (j = i; j < n; j++)
//		{
//			sum *= arr[j];
//			if (sum > max)
//				max = sum;
//		}
//	}
//	if (max < 0)
//		max = -1;
//	printf("%d", max);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int countDigitOne(int n)
//{
//	if (n == 0)
//		return 0;
//	int count = 0;
//	int z = 0;
//	int tmp = n;
//	while (tmp)
//	{
//		z++;
//		tmp /= 10;
//	}
//	int i = 0;
//	while (z)
//	{
//		int base = (int)pow(10, i);
//		int cur = (n / base) % 10;
//		int next = n / (int)pow(10, i + 1);
//		int tail = n % base;
//		if (cur == 1)
//		{
//			count += next * base + (tail + 1) * 1;
//		}
//		else if (cur > 1)
//		{
//			count += (next + 1)*base;
//		}
//		else
//		{
//			count += next * base;
//		}
//		i++;
//		z--;
//	}
//	return count;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", countDigitOne(n));
//}



//#include<stdio.h>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//void adjustdown(int* arr, int pos, int n)
//{
//	int parent = pos;
//	int child = parent * 2 + 1;
//	while (child <= n)
//	{
//		if (child + 1 <= n&&arr[child] < arr[child + 1])
//			child++;
//		if (arr[parent] < arr[child])
//		{
//			swap(arr[child], arr[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//			break;
//	}
//}
//void sort(int* arr, int n)
//{
//	for (int i = (n - 2) / 2; i >= 0; i--)
//	{
//		adjustdown(arr, i, n - 1);
//	}
//	int end = n - 1;
//	while (end > 0)
//	{
//		swap(arr[0], arr[end]);
//		end--;
//		adjustdown(arr, 0, end);
//
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//int main()
//{
//	int n = 10;
//	int arr[] = { 7 ,1, 4, 6, 8, 9, 5, 2, 3, 10 };
//	sort(arr, n);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//void text(int* arr, int n)
//{
//	int max = arr[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//
//	int flag[100] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		flag[arr[i]]++;
//	}
//	int index = 0;
//	for (int i = 0; i <= max; i++)
//	{
//		if (flag[i])
//			cout << i << " " << flag[i] << endl;
//		while (flag[i])
//		{
//			arr[index++] = i;
//			flag[i]--;
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << " ";
//}
//
//int main()
//{
//	int n = 10;
//	int nums[] = { 7 ,1, 4, 6, 8, 9, 5, 2, 3, 10 };
//	text(nums, n);
//	return 0;
//}


//#include<stdio.h>
//#include<iostream>
//using namespace std;
//typedef struct Node
//{
//	int _date;
//	struct Node* _next;
//	int _num;
//}Node;
//
//void create(Node*& head, int m)
//{
//	int num = 1;
//	head = new Node;
//	cin >> head->_date;
//	head->_num = num;
//	Node* cur = head;
//	for (int i = 1; i < m; i++)
//	{
//		Node* next = new Node;
//		cin >> next->_date;
//		next->_num = i + 1;
//		cur->_next = next;
//		cur = cur->_next;
//		next->_next = head;
//	}
//}
//
//void Sequence(Node* &head, int m)
//{
//	Node* cur = head;
//	Node* prev = nullptr;
//	while (cur->_next != cur)
//	{
//		for (int i = 1; i < m; i++)
//		{
//			prev = cur;
//			cur = cur->_next;
//		}
//		cout << cur->_num << " ";
//		m = cur->_date;
//		prev->_next = cur->_next;
//		free(cur);
//		cur = prev->_next;
//	}
//	cout << cur->_num << " ";
//}
//
//int main()
//{
//	int m, n;
//	cin >> n >> m;
//	Node* head = nullptr;
//	create(head, n);
//	Sequence(head, m);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>  //输入输出
//#include<string.h> //字符串处理
//#include<stdlib.h> // 程序工具
//#include<iostream> //输入输出流
//#include <windows.h>
//#include<string>
//#include<vector>
//using namespace std;
//
//struct administrator        // 代表管理员的数据类型
//{
//	char name[20];
//	char password[20];
//};
//
//struct administrator admin[1000];
//int index = 0;
//
//typedef struct Node {           //定义表结点
//	char classRoomNum[10];      //教室编号
//	char set[10];               //教室地点
//	struct Node *next;
//} SLNode;
//typedef struct {                //定义教室信息
//	char classRoomNum[10];      //教室编号
//	char set[10];               //教室地点
//	SLNode *head;
//} classRoom;
//
//void ListInitiate(SLNode **head) {      //链表初始化
//	if ((*head = (SLNode *)malloc(sizeof(SLNode))) == NULL)
//		exit(1);                        //初始化失败，则返回错误信息
//	(*head)->next = NULL;                //初始化成功则构造一个空表，头节点指针域置空
//}
//void allQuery(SLNode *head);            //函数声明
//void linkView(SLNode *head);
//void Exit();
//void classRoomInfor();
//void mainMenu();
//void classRoomAdd(SLNode *head, classRoom x);
//void classRoomQuery(SLNode *head);
//SLNode *classRoomInsert(SLNode *head, classRoom x);
//void printclassRoom(SLNode *p);
//void queryMenu();
//void classRoomQuery(SLNode *head);
//void timeSlotQuery(SLNode *head);
//void siteQuery(SLNode *head);
//void volumeQuery(SLNode *head);
//void classRoomRevise(SLNode *head);
//void classRoomDel(SLNode *head);
//
//void logon()
//{
//	FILE* pf = fopen("admin.txt", "r+");
//	if (pf == nullptr)
//	{
//		cout << "打开文件失败" << endl;
//		return;
//	}
//	index = 0;
//	//读入数组中
//	while (fscanf(pf, "%s %s", &admin[index].name, &admin[index].password) != EOF)
//		index++;
//
//	char name[100];
//	char password[100];
//	cout << "欢迎来到注册系统" << endl;
//	cout << "输入您的用户名:";
//	cin >> name;
//	int flag = 0;
//	while (1)
//	{
//		flag = 0;
//		for (int i = 0; i < index; i++)
//		{
//			if (strcmp(name, admin[i].name) == 0)
//			{
//				flag = 1;
//				cout << "用户名重复" << endl;
//				cout << "输入您的用户名:";
//				cin >> name;
//				break;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//	cout << endl << "输入密码:";
//	cin >> password;
//	strcpy(admin[index].name, name);
//	strcpy(admin[index++].password, password);
//	cout << "注册成功" << endl;
//	//for (int i = 0; i < index; i++)
//	//{
//	//	fprintf(pf, "%s %s\n", admin[i].name, admin[i].password);
//	//}
//	fprintf(pf, "%s %s\n", admin[index - 1].name, admin[index - 1].password);
//
//	fclose(pf);
//	system("pause");
//	system("cls");
//}
//
//void signIn()
//{
//	char name[10];
//	printf("请输入账户：");
//	scanf("%s", name);
//	int flag = -1;
//	while (1)
//	{
//		for (int i = 0; i < index; i++)
//		{
//			if (strcmp(name, admin[i].name) == 0)
//			{
//				flag = i;
//				break;
//			}
//		}
//		if (flag != -1)
//			break;
//		printf("用户名错误，重新输入>");
//		scanf("%s", name);
//	}
//	char password[10];
//	printf("输入密码>");
//	scanf("%s", password);
//	while (1)
//	{
//		if (strcmp(password, admin[flag].password) == 0)
//			break;
//		printf("密码错误,输入密码>");
//		scanf("%s", password);
//	}
//	printf("登录成功\n");
//}
//
//int main()
//{                   //**主函数 **
//	int i;
//	int flog = 0;//等于一退出系统
//	classRoom x = { 0 };
//	SLNode *head;       //头节点
//	ListInitiate(&head);//链表初始化
//	FILE* pf = fopen("admin.txt", "r+");
//	while (fscanf(pf, "%s %s", &admin[index].name, &admin[index].password) != EOF)
//		index++;
//	fclose(pf);
//	int input;
//	while (1) {
//		printf("1.注册用户\n");
//		printf("2.登录\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			logon();
//			break;
//		case 2:
//			signIn();
//
//			system("color f0");//背景色
//			printf("\n\t\t 当前日期： ");
//			(100);
//			system("DATE    [/T]");
//			(100);
//			printf("\n\t\t 当前时间： ");
//			(100);
//			system("TIME    [/T]");
//			printf("\n\n\n\t\t\t 欢  ");
//			printf("迎   ");
//			printf("进  ");
//			printf("入 \n\n\n\t\t\t");
//			system("pause");//暂停，等待用户信号
//			system("cls");  //清除屏幕
//			while (1)
//			{
//				mainMenu();
//				printf("\n请输入0-4选择子菜单:");
//				scanf("%d", &i);
//				switch (i) {
//				case 0:
//					Exit();
//					printf("\n您已退出系统,谢谢使用!\n");
//					flog = 1;
//					break;
//				case 1:
//					classRoomAdd(head, x);//添加教室信息
//					break;
//				case 2:
//					allQuery(head);//遍历输出
//					break;
//				case 3:classRoomRevise(head);//修改教室信息
//					break;
//				case 4:
//					classRoomDel(head);//删除教室信息
//					break;
//
//				default:
//					printf("\n您的输入有误,请输入0-4之间的数字!\n");
//					break;
//				}
//				if (flog == 1)
//					break;          //退出系统
//			}
//			system("pause");
//			system("cls");
//			break;
//		}
//		
//	}
//	system("pause");
//	system("cls");   
//	//清除屏幕
//	return 0;
//}
//
//void mainMenu() {
//	printf("\n--------------------------------------------------------------------------------");
//	printf("\n");
//	printf("\n\t\t\t   教室预约管理系统\n");
//	printf("\n\t\t\t\t主菜单\n");
//	printf("\n\t\t1.录入教室信息\t\t2.显示预约教室信息\n");
//	printf("\n\t\t3.修改预约教室信息\t\t4.删除预约教室信息\n");
//	printf("\n\t\t0.退出系统\n");
//	printf("\n\n--------------------------------------------------------------------------------");
//}
//
//
//SLNode *classroomInsert(SLNode *head, classRoom x) {//按教室号升序录入教室信息函数
//	SLNode *p, *q, *s;
//	p = head->next;//
//	q = (SLNode *)malloc(sizeof(SLNode));//分配空间
//	if (q == NULL) exit(1);             //存储空间分配失败
//
//	strcpy(q->classRoomNum, x.classRoomNum);//字符串复制
//
//	strcpy(q->set, x.set);
//	if (head->next == NULL) {//为空
//		head->next = q;
//		head->next->next = NULL;
//	}
//	else {               //非空
//		for (; p; p->next) {//p指针从第一个数据往后移动，直到p为空
//			if (p->next != NULL) {   //录入的教室编号在已录入的两个工号之间
//				if (strlen(p->classRoomNum) < strlen(x.classRoomNum) && strlen(p->next->classRoomNum) > strlen(x.classRoomNum)) {
//					s = p->next;
//					p->next = q;
//					q->next = s;
//					break;
//				}
//				else if (strcmp(p->classRoomNum, x.classRoomNum) == 0) {
//					printf("教室号为%s的教室已存在!\n", p->classRoomNum);
//					break;
//				}
//			}
//			else if (strlen(p->classRoomNum) < strlen(x.classRoomNum) && p->next == NULL) {//如果在排序中为最后一个
//				p->next = q;
//				q->next = NULL;      //尾插法
//				break;
//			}
//			if (strlen(p->classRoomNum) >= strlen(x.classRoomNum)) {  //头插法
//				s = head->next;
//				head->next = q;
//				q->next = s;
//				break;
//			}
//		}
//
//	}
//	printf("该录入完毕!");
//	return head;
//}
//
//void classRoomInfor() {                     //教室包含的 属性
//	printf("\n教室编号\t\t\t空闲时间段\t\t\t教室地点\t\t\t教室容量\n");
//}
//
//void classRoomRevise(SLNode *head) {     //修改操作
//	classRoom x;
//	char n[10];
//	SLNode *p;
//	p = head->next;
//	system("cls");
//	printf("\n请输入要修改信息的教室编号:");
//	scanf("%s", &n);
//	for (; p; p = p->next) {
//		if (strcmp(p->classRoomNum, n) == 0) {
//			printf("\n请输入该教室的新信息!");
//			printf("请输入教室编号:");
//			char tmp[100];
//			scanf("%s", tmp);
//			while (1)
//			{
//				int size = strlen(tmp);
//				if (size == 3 && tmp[1] == '0')
//					break;
//				cout << "教室编号不合法,重新输出" << endl;
//
//				printf("请输入教室编号:");
//				scanf("%s", tmp);
//			}
//			strcpy(x.classRoomNum, tmp);
//
//			printf("请输入教室楼层:");
//			scanf("%s", tmp);
//			while (1)
//			{
//				int size = strlen(tmp);
//				if (size == 1)
//					break;
//				cout << "教室楼层不合法,重新输出" << endl;
//				printf("请输入教室楼层:");
//				scanf("%s", tmp);
//			}
//			strcpy(x.set, tmp);
//
//			strcpy(p->classRoomNum, x.classRoomNum);
//
//			strcpy(p->set, x.set);
//			printf("\n教室信息修改成功!");
//			break;
//		}
//	}
//	if (p == NULL)
//		printf("\n该教室不存在!\n");
//}
//
//void classRoomDel(SLNode *head) {     //删除操作
//	SLNode *p, *s;
//	char x[10];
//	s = head;//初始化s
//	p = head->next;
//	if (head->next == NULL) {
//		printf("\n系统中无教室信息!\n");
//	}
//	else {
//		system("cls");
//		printf("\n请输入要删除的教室的编号:");
//		scanf("%s", &x);
//		for (; p; p = p->next) {
//			if (strcmp(p->classRoomNum, x) == 0) {
//				s->next = p->next;
//				free(p);
//				printf("\n删除成功!请继续!\n");
//				break;
//			}
//			s = p;
//		}
//		if (p == NULL)
//			printf("\n系统中无此教室信息!\n");
//	}
//}
//
//void classRoomAdd(SLNode *head, classRoom x) {   //录入操作
//	int nu;
//	system("cls");
//
//	printf("\n请输入您要录入的教室数:");
//	int tmp = 0;
//	scanf("%d", &tmp);
//	while (1)
//	{
//		if (tmp > 0 && tmp <= 5)
//			break;
//		printf("\n请输入您要录入的教室数(1-5之间):");
//		scanf("%d", &tmp);
//	}
//	nu = tmp;
//	for (int n = 0; n < nu; n++) {
//		printf("\n\n");
//
//		printf("请输入教室编号:");
//		char tmp[10];
//		scanf("%s", tmp);
//		while (1)
//		{
//			int size = strlen(tmp);
//			if (size == 3 && tmp[1] == '0')
//				break;
//			cout << "教室编号不合法,重新输出" << endl;
//
//			printf("请输入教室编号:");
//			scanf("%s", tmp);
//		}
//		strcpy(x.classRoomNum, tmp);
//		printf("请输入教室楼层:");
//		scanf("%s", tmp);
//		while (1)
//		{
//			int size = strlen(tmp);
//			if (size == 1 )
//				break;
//			cout << "教室楼层不合法,重新输出" << endl;
//			printf("请输入教室楼层:");
//			scanf("%s", tmp);
//		}
//		strcpy(x.set, tmp);
//
//		head = classroomInsert(head, x);
//	}
//
//	printf("\n录入完毕!\n");
//}
//
//
//
//void allQuery(SLNode *head) {                   //查询所有教室信息
//	linkView(head);
//}
//
//
//void printclassRoom(SLNode *p) {
//	printf("****************************\n");
//	printf("教 室 编 号 ：%s\t\n", p->classRoomNum);
//	printf("教 室 楼 层：%s\t\n", p->set);
//
//
//}
//
//
//void  linkView(SLNode *head) {              //显示所有教室信息
//	SLNode *p = head;
//	while (p->next) {
//		p = p->next;
//		printclassRoom(p);
//
//	}
//}
//
//
//void Exit() { //退出程序
//	int k = 0;
//	char s = 'Y';
//	if (k) { //判断数据是否修改，如已经修改按指定路径保存至txt文档（D盘）
//		printf("\n确定退出？(y/n):\n");
//		scanf("%c", &s);
//		if (s == 'y' || s == 'Y') {
//
//			printf("\n已安全退出!\n");
//		}
//		exit(0);
//	}
//}


//#include<iostream>
//using namespace std;
//struct ListNode
//{
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(nullptr) {}
//};
//
//// 1 -> 2 -> 3 -> 4 -> 5
//ListNode *RotateList(ListNode *List)
//{
//	ListNode* prev = nullptr;
//	ListNode* cur = List;
//	while (cur)
//	{
//		ListNode* next = cur->next;
//		cur->next = prev;
//		prev = cur;
//		cur = next;
//	}
//	return prev;
//}
//
//int main()
//{
//	ListNode *Head = new ListNode(1);
//	ListNode *ListTemp = Head;
//	ListTemp->next = new ListNode(2); ListTemp = ListTemp->next;
//	ListTemp->next = new ListNode(3); ListTemp = ListTemp->next;
//	ListTemp->next = new ListNode(4); ListTemp = ListTemp->next;
//	ListTemp->next = new ListNode(5); ListTemp = ListTemp->next;
//
//	ListTemp = RotateList(Head);
//	while (ListTemp) {
//		std::cout << ListTemp->val << std::endl;
//		ListTemp = ListTemp->next;
//	}
//}


//#include<iostream>
//using namespace std;
//#include <string>
//// 获取英文文段中单词的数量，重复单词出现几次算几次，单词中只会出现'a'-'z'和'A'-'Z'
//
//int Words_Num(std::string str)
//{
//	int left = 0, right = 0;
//	//去掉前导空格
//	while (str[right] == ' ')
//	{
//		left++;
//		right++;
//	}
//	int count = 0;
//	while (right < (int)str.size())
//	{
//		//判断是否为字符
//		if (isalpha(str[right]) == false)
//		{
//			right = ++left;
//			continue;
//		}
//		while (right < (int)str.size() && str[right] != ' ')
//			right++;
//		count++;
//		right++;
//		left = right;
//	}
//	//判断最后一个是否为单词
//	if (left != right)
//		count++;
//	return count;
//}
//
//int main()
//{
//	std::string strText = "In developing driver support systems, it is important to prevent the system from intervening with the driver in the middle of corrective action because the driver support system requires a cooperative operation between controllers and drivers.";
//	std::cout << Words_Num(strText) << std::endl;
//}



//#include<stdio.h>
//
//void addArr(int* arr1, int* arr2, int* arr3, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		arr3[i] = arr1[i] + arr2[i];
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 5,4,3,2,1 };
//	int arr3[5] = { 0 };
//	addArr(arr1, arr2, arr3, 5);
//	for (int i = 0; i < 5; i++)
//		printf("%d ", arr3[i]);
//	return 0;
//}

#include<stdio.h>
#include<string.h>
// 获取英文文段中单词的数量，重复单词出现几次算几次，单词中只会出现'a'-'z'和'A'-'Z'
size_t myStrlen(char* str)
{
	size_t count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}

void myGets(char* arr)
{
	char ch;
	int index = 0;
	while ((ch = getchar()) != '\n')
	{
		arr[index++] = ch;
	}
	arr[index] = '\0';
}

int Words_Num(char* str)
{
	int left = 0, right = 0;
	//去掉前导空格
	while (str[right] == ' ')
	{
		left++;
		right++;
	}
	int count = 0;
	while (right < (int)myStrlen(str))
	{
		//判断是否为字符
		if (str[right] < 'A' || str[right] >= 'Z'&&str[right]<'a' || str[right]>'z')
		{
			right = ++left;
			continue;
		}
		while (right < (int)myStrlen(str) && str[right] != ' ')
			right++;
		count++;
		right++;
		left = right;
	}
	//判断最后一个是否为单词
	if (left != right)
		count++;
	return count;
}

int main()
{
	char arr[80] = " t hello word is ha  ";
	myGets(arr);
	int count = Words_Num(arr);
	printf("%d\n", count);
	int flag[255] = { 0 };
	for (int i = 0; i < (int)myStrlen(arr); i++)
	{
		flag[arr[i]] ++;
	}
	for (int i = 0; i < 255; i++)
	{
		if (flag[i])
			printf("%c:%d\n", i, flag[i]);
	}
	return 0;
}