#define _CRT_SECURE_NO_WARNINGS 1
#include "main.h"
using namespace std;
//顺序表和vector
//线性表
//数组就是线性表的一种

//往后实现各种数据结构的时候,如果不做特殊说明,默认里面存储的就是int类型的数据
//数组有两种不同的申请方式 线性表也是
//分为静态申请和动态申请
//new 和 delete来申请和释放空间
//const int N = 10000;
//int a[N];
//int n;
//void print()//打印
//{
//	for (int i = 0; i <= n; i++)
//	{
//		cout << a[i] << ' ';
//	}
//	cout << endl << endl;
//}
//void push_back(int x)//尾插
//{
//	a[++n] = x;
//}
//void push_front(int x)//头插
//{
//	for (int i = n; i >= 1; i--)
//	{
//		a[i + 1] = a[i];
//	}
//	a[1] = x;
//	n++;
//}
//void insert(int p, int x)//任意位置插入
//{
//	for (int i = n; i >= p; i--)
//	{
//		a[i + 1] = a[i];
//	}
//	a[p] = x;
//	n++;
//}
//void pop_back()//尾删
//{
//	n--;
//}
//void pop_front()//头删
//{
//	for (int i = 2; i < n; i++)
//	{
//		a[i - 1] = a[i];
//	}
//	n--;
//}
//void erase(int p)
//{
//	for (int i = p + 1; i <= n; i++)
//	{
//		a[i - 1] = a[i];
//	}
//	n--;
//}
//int find(int x)
//{
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i] == x)
//		{
//			return i;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	cout << "尾插" << endl;
//	push_back(2);
//	print();
//	push_back(5);
//	print();
//	push_back(1);
//	print();
//	push_back(3);
//	print();
//	cout << "头插" << endl;
//	push_front(10);
//	print();
//	cout << "插入" << endl;
//	insert(3, 0);
//	print();
//	//cout << "尾删" << endl;
//	//pop_back();
//	//print();
//	//pop_back();
//	//print();
//	//cout << "头删" << endl;
//	//pop_front();
//	//print();
//	//pop_front();
//	//print();
//	//cout << "指定位置删除" << endl;
//	//erase(3);
//	//print();
//	//erase(1);
//	//print();
//	for (int i = 1; i <= 10; i++)
//	{
//		cout << "查找" << i << ":";
//		cout << find(i) << endl;
//	}
//	return 0;
//}
//自己要判断调用函数时是否合适