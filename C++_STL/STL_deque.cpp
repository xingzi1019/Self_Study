//#define _CRT_SECURE_NO_WARNINGS 1
//#include "main.h"
//using namespace std;
////双端队列也是⼀种特殊线性结构，其允许两端都可以进⾏数据元素⼊队和出队操作
////size/empty
////push_front/push_back()
////pop_front/pop_back()
////front/back
////clear
//struct node
//{
//	int x, y, z;
//};
//int main()
//{
//	deque<node>q;
//	for (int i = 1; i <= 10; i++)
//	{
//		q.push_front({ i, i * 2, i * 3 });
//	}
//	while (!q.empty())
//	{
//		auto t = q.front(); q.pop_front();
//		cout << t.x << " " << t.y << " " << t.z << endl;
//	}
//	for (int i = 1; i <= 10; i++)
//	{
//		q.push_back({ i, i * 2, i * 3 });
//	}
//	while (!q.empty())
//	{
//		auto t = q.back(); q.pop_back();
//		cout << t.x << " " << t.y << " " << t.z << endl;
//	}
//	return 0;
//}