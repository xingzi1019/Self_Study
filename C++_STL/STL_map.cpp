#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <map>
#include <vector>
using namespace std;
// map 存储双关键字
// map 与 set 的区别：
// set ⾥⾯存的是⼀个单独的关键字，也就是存⼀个 int 、 char 、double 或者 string
// ⽽ map 里面存的是⼀个 pair<key, value> ，（k - v 模型）
// 不仅有⼀个关键字，还会有⼀个与关键字绑定的值，比较方式是按照 key 的值来比较
// 
// 可以这样理解：
// 红黑树⾥⾯⼀个⼀个的结点都是⼀个结构体，⾥⾯有两个元素分别是 key 和value
// 插⼊、删除和查找的过程中，比较的是 key 的值
// <int,vector<int>> 这样子十可以用来存储树的 但是查找的效率不高
// size/empty
// begin/end
// insert
// operator[]
// erase
// find/count
// lower_bound/upper_bound
void print(map<string, int>& mp) {
	// 上下都加 & 减少拷贝增加效率
	for (auto& p : mp) {
		cout << p.first << " " << p.second << endl;
	}
}
void fun() {
	string s;
	map<string, int> mp;
	for (int i = 1; i <= 10; i++) {
		cin >> s;
		mp[s]++; // 可以统计相同字符串出现的次数
	}
	print(mp);
}
int main() {
	fun();
}
int main1() {
	// map 的创建
	map<int, int> mp1;
	map<int, string> mp2;
	map<string, int> mp3;
	map<int, vector<int>> mp4;
	map<string, int> mp;
	mp.insert({ "zhangsan",1 });
	mp.insert({ "lisi",2 });
	mp.insert({ "wangwu",3 });
	print(mp);
	// operator []
	// 重载[] 使得 map 可以像数组⼀样使⽤
	// 这是 map 最好⽤的接⼝ 有了这个重载 map 的使⽤就变得特别轻松，不⽤写很多冗余的代码 
	// 它的底层其实就是调⽤了 insert 函数，并且会返回 val 的引用
	// 这里知识储备不够，可能 get 不到这个点。⽬前就先学会使用即可
	cout << mp["张三"] << endl;      // 0    // 这个也会进去噢
	cout << mp["zhangsan"] << endl;  // 1
	mp["zhangsan"] = 110;
	cout << mp["zhangsan"] << endl;  // 110
	// 使用起来非常爽
	// 值得注意的是 operator[] 可能会向 map 里面插入你不想插入的元素
	cout << "=======\n";
	/*if (mp["zaholiu"] == 4) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	cout << mp["zhaoliu"] << endl;
	print(mp);*/
	// 这个要千万注意 🔪
	// 保险一点的写法是先用count
	if (mp.count("zhaoliu") && mp["zaholiu"] == 4) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	print(mp);
	cout << "=================\n";
	mp.erase("zhangsan");
	mp.erase("张三");
	print(mp);
	// count 和 erase 可以只传入 key 值
	fun();
	return 0;
}