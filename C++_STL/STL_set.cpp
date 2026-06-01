#define _CRT_SECURE_NO_WARNINGS 1
#include "main.h"
using namespace std;
// size/empty
// begin/end   范围 for 遍历 按照中序遍历来的
// insert
// erase
// find/count  一般用的是 count 因为 find 返回的是迭代器
// lower_bound ⼤于等于 x 的最⼩元素，返回的是迭代器
// upper_bound ⼤于 x 的最⼩元素，返回的是迭代器
//int a[] = { 10, 60, 20, 70, 80, 30, 90, 40, 100, 50 };
//int main() {
//	set<int> mp;
//	for (auto x: a) {
//		mp.insert(x);
//	}
//	// 遍历 set 的结果 应该是有序的
//	for (auto x: mp) {
//		cout << x << " ";
//	}
//	cout << endl;
//	if (mp.count(1)) cout << "1" << endl;
//	if (mp.count(10)) cout << "10" << endl;
//	if (mp.count(20)) cout << "20" << endl;
//	if (mp.count(30)) cout << "30" << endl;
//	if (mp.count(99)) cout << "99" << endl;
//	mp.erase(10);
//	mp.erase(30);
//	if (mp.count(10)) cout << "10" << endl;
//	else cout << "no 10" << endl;
//	if (mp.count(30)) cout << "30" << endl;
//	else cout << "no 30" << endl;
//
//	auto x = mp.lower_bound(20); // >=
//	auto y = mp.upper_bound(20); // >
//	cout << *x << " " << *y << endl;
//	return 0;
//}