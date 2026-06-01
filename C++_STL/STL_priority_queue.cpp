#define _CRT_SECURE_NO_WARNINGS 1
#include "main.h"
using namespace std;
// cpp 的 STL 创建出来的默认就是大根堆
//优先级队列
//在优先级队列中，元素被赋予优先级，当插⼊元素时，同样是在队尾，但是会根据优先级进⾏位置调整
//优先级越⾼，调整后的位置越靠近队头
//同样的，删除元素也是根据优先级进⾏，优先级最⾼的元素（队头）最先被删除
//
//priority_queue
//接口函数如下
//size/empty
//push
//pop
//top
//int a[10] = { 1,41,23,10,11,2, -1,99,14,0 };
//int main()
//{
//	priority_queue<int>heap;
//	for (int i = 0; i < 10; ++i)
//	{
//		heap.push(a[i]);
//	}
//	while (heap.size())//while(!heap.empty())
//	{
//		cout << heap.top() << ' ';
//		heap.pop();
//	}
//	return 0;
//}

//创建内置类型的priority_queue
//int a[10] = { 1, 41, 23, 10, 11, 2, -1, 99, 14, 0 };
//void test1()
//{
//	priority_queue<int> heap1;//默认大根堆
//	priority_queue<int, vector<int>, less<int>> heap2;//大根堆
//	//<数据类型，存储结构，比较方式>//less是小于的比较方式 
//	//less greater 是小于和大于的比较方式
//	priority_queue<int, vector<int>, greater<int>> heap3;//大根堆
//	//记忆方式:
//	//大根堆用小于
//	//小根堆用大于
//	for (int i = 0;i < 10;i++)
//	{
//		heap2.push(a[i]);
//		heap3.push(a[i]);
//	}
//	cout << "大根堆：";
//	while (heap2.size())
//	{
//		cout << heap2.top() << ' ';
//		heap2.pop();
//	}
//	cout << endl;
//	cout << "小根堆：";
//	while (heap3.size())
//	{
//		cout << heap3.top() << ' ';
//		heap3.pop();
//	}
//	cout << endl;
//}
//int main()
//{
//	/*priority_queue<int>heap;
//	for (int i =0;i<10;i++)
//	{
//		heap.push(a[i]);
//	}
//	while (!heap.empty())
//	{
//		cout << heap.top() << ' ';
//		heap.pop();
//	}
//	cout << endl;*/
//	test1();
//	return 0;
//}
//结构体类型
//当优先级队列⾥⾯存的是结构体类型时，需要在结构体中重载 < ⽐较运算符，从⽽创建出⼤根堆或者⼩根堆
//int a[10] = { 1, 41, 23, 10, 11, 2, -1, 99, 14, 0 };
//struct node
//{
//	int a, b, c;
//	//重载 < 运算符
//	//以 b 为基准创建大根堆
//	//bool operator<(const node& x)const
//	//{
//	//	return b < x.b;
//	//}
//	//以 b 为基准创建小根堆
//	bool operator<(const node& x)const
//	{
//		return b > x.b;
//	}
//};
//void test2()
//{
//	priority_queue<node>heap;
//	for (int i = 1; i <= 5; i++)
//	{
//		heap.push({ i + 5,i + 1,i + 2 });
//	}
//	while (heap.size())
//	{
//		node t = heap.top();
//		heap.pop();
//		cout << t.a << " " << t.b << " " << t.c << endl;
//	}
//}
//void test1()
//{
//	//priority_queue<int> heap1;//默认大根堆
//	priority_queue<int, vector<int>, less<int>> heap2;//大根堆
//	priority_queue<int, vector<int>, greater<int>> heap3;//小根堆
//	for (int i = 0; i < 10; i++)
//	{
//		heap2.push(a[i]);
//		heap3.push(a[i]);
//	}
//	cout << "大根堆：";
//	while (heap2.size())
//	{
//		cout << heap2.top() << ' ';
//		heap2.pop();
//	}
//	cout << endl;
//	cout << "小根堆：";
//	while (heap3.size())
//	{
//		cout << heap3.top() << ' ';
//		heap3.pop();
//	}
//	cout << endl;
//}
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}