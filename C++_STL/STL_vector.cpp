#define _CRT_SECURE_NO_WARNINGS 1
#include "main.h"
using namespace std;
//C++ 的 STL 提供了⼀个已经封装好的容器 - vector 有的地⽅也叫作可变⻓的数组。
//vector 的底层就是⼀个会自动扩容的顺序表 其中创建以及增删查改等等的逻辑已经实现好了 并且也完成了封装
//const int N = 10;
//struct node
//{
//	int a, b;
//	string s;
//};
//void print(vector<int>& a)
//{
//	//使用语法糖范围for
//	for (auto e : a)
//	{
//		cout << e << ' ';
//	}
//	cout << endl;
//	//利用迭代器来遍历  存在迭代器就可以使用范围for
//	//for (vector<int>::iterator it = a.begin(); it != a.end(); it++)//这样子来写过于麻烦 使用auto可以方便
//	//for (auto it = a.begin(); it != a.end(); it++)
//	//{
//	//	cout << *it << " ";
//	//}
//	//cout << endl;
//	//利用size来遍历
//	//for (int i = 0; i < a.size(); i++)
//	//{
//	//	cout << a[i] << " ";
//	//}
//	//cout << endl;
//}
//int main()
//{
//	//创建vector
//	vector<int> a1;//创建了一个名字为a1的可变长数组				数值默认为0
//	vector<int> a2(N);//创建了一个大小为N的名为a2的可变长数组      数值默认为0
//	vector<int> a3(N, 2);//创建了一个大小为N的可变长数组a3        数值为2
//	vector<int> a4 = { 1,2,3,4,5 };//初始化列表的创建
//	// <>可以存放任意数据类型 vector可以存放C++的所有数据类型 甚至是STL本身
//	vector<string> a5;
//	vector<node> a6;
//	vector<vector<int>> a7;//二维可变长数组
//	//int a[N];
//	vector<int> a8[N];//创建了一个大小为 N 的vector数组   相当于是个二维数组
//	//size ：返回实际元素的个数；
//	//empty ：返回顺序表是否为空，因此是⼀个 bool 类型的返回值。
//	//a.如果为空：返回 true
//	//b.否则，返回 false
//	//时间复杂度： O(1)
//	//print(a2);
//	//print(a3);
//	//print(a4);
//	//if (a1.empty())
//	//{
//	//	cout << "空" << endl;
//	//}
//	//else
//	//{
//	//	cout << "不空" << endl;
//	//}
//	//begin ：返回起始位置的迭代器（左闭）
//	//end ：返回终点位置的下⼀个位置的迭代器（右开）
//	//利⽤迭代器可以访问整个 vector ，存在迭代器的容器就可以使⽤范围 for 遍历
//
//	//push_back ：尾部添加⼀个元素
//	//pop_back ：尾部删除⼀个元素
//	//当然还有 insert 与 erase 。不过由于时间复杂度过⾼，尽量不使⽤
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	a1.push_back(i);
//	//	print(a1);
//	//}
//	//while (!a1.empty())
//	//{
//	//	print(a1);
//	//	a1.pop_back();
//	//}
//	//front / back
//	//1. front ：返回⾸元素；
//	//2. back ：返回尾元素；
//	//时间复杂度： O(1)
//	//cout << a4.front() << " " << a4.back() << endl;
//	
//	//	resize
//	//	• 修改 vector 的⼤⼩
//	//	• 如果⼤于原始的⼤⼩ 多出来的位置会补上默认值，⼀般是 0 
//	//	• 如果⼩于原始的⼤⼩ 相当于把后⾯的元素全部删掉
//	//	时间复杂度： O(N)
//	vector<int> aa(5,1);//创建有5个int类型的vector 初始值都是1
//	print(aa);
//	aa.resize(10);
//	print(aa);
//	aa.resize(3);
//	print(aa);
//	//clear
//	//• 清空 vector
//	//底层实现的时候，会遍历整个元素，⼀个⼀个删除，因此时间复杂度： O(N)
//	cout << aa.size() << endl;
//	aa.clear();
//	cout << aa.size() << endl;
//	return 0;
//}
