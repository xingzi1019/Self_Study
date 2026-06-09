#define _CRT_SECURE_NO_WARNINGS 1
#include "main.h"
using namespace std;
//循环链表就是在原有的基础上，让最后⼀个元素指向表头即可
//所以就不再写一次了
//下面是动态链表list stl里面
//void print(list<int>& l)
//{
//	for (auto x : l)
//	{
//		cout << x << " ";
//	}
//	cout << endl << endl;
//}
//int main()
//{
//	list<int>l;
//	for (int i = 1; i <= 5; i++)
//	{
//		l.push_back(i);
//		print(l);
//	}
//	for (int i = 1; i <= 5; i++)
//	{
//		l.push_front(i);
//		print(l);
//	}
//	for (int i = 1; i <= 3; i++)
//	{
//		l.pop_back();
//		print(l);
//	}
//	for (int i = 1; i <= 3; i++)
//	{
//		l.pop_front();
//		print(l);
//	}
//	return 0;
//}
