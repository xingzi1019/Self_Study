#define _CRT_SECURE_NO_WARNINGS 1
//set / multiset
//set 与 multiset 的区别： set 不能存相同元素， multiset 可以存相同的元素，其余的使
//⽤⽅式完全⼀致。因此，我们有时候可以⽤ set 帮助我们给数据去重。
//在这⾥只练习使⽤ set 。 set 会⽤， multiset 也会⽤
// size/empty begin/end insert/erase find/count lower_bound/upper_bound
//1. lower_bound ：⼤于等于 x 的最⼩元素，返回的是迭代器
//时间复杂度： O(log N) 
//2. upper_bound ：⼤于 x 的最⼩元素，返回的是迭代器
//时间复杂度： O(log N) 
//#include <iostream>
//#include <set>
//using namespace std;
//int a[] = { 10, 60, 20, 70, 80, 30, 90, 40, 100, 50 };
//int main()
//{
//	set<int>mp;
//	for (auto x:a)
//	{
//		mp.insert(x);
//	}
//	//遍历set的结果应该是有序的
//	for (auto x: mp)
//	{
//		cout << x << ' ';
//	}
//	cout << endl;
//	//if (mp.count(1)) cout << "1" << endl;
//	//if (mp.count(99)) cout << "99" << endl;
//	//if (mp.count(10)) cout << "10" << endl;
//	//mp.erase(30);
//	//mp.erase(10);
//	//for (auto x : mp)
//	//{
//	//	cout << x << ' ';
//	//}
//	//cout << endl;
//	auto x = mp.lower_bound(20);
//	auto y = mp.upper_bound(20);
//	cout << *x << endl;
//	cout << *y << endl;
//	return 0;
//}

//map 能存储双关键字
//map 与 multimap 的区别： map 不能存相同元素， multimap 可以存相同的元素，其余的使⽤⽅式完全⼀致 因此，这⾥只练习使⽤ map 
//map 与 set 的区别： set ⾥⾯存的是⼀个单独的关键字，也就是存⼀个 int 、 char 、
//double 或者 string 。⽽ map ⾥⾯存的是⼀个 pair<key, value> ，（k - v 模型）不仅有⼀个关键字，还会有⼀个与关键字绑定的值
//⽐较⽅式是按照 key 的值来⽐较
//可以这样理解：红⿊树⾥⾯⼀个⼀个的结点都是⼀个结构体，⾥⾯有两个元素分别是 key 和value 
//插⼊、删除和查找的过程中，⽐较的是 key 的值。
//⽐如，我们可以在 map 中：
//• 存 <int, int> ，来统计数字出现的次数；
//• 存 <string, int> ，来统计字符串出现的次数；
//• 存 <string, string> ，表⽰⼀个字符串变成另⼀个字符串；
//• 甚⾄存 <int, vector<int>> 来表⽰⼀个数后⾯跟了若⼲个数......，⽤来存储树。
//因为模板这个强⼤的功能，使得 map 有很多⽤途，后⾯做题的时候再慢慢体会

//size/empty begin/end insert operator[] erase find/count lower_bound upper_bound 
//特别提醒
//insert 向红⿊树中插⼊⼀个元素 这⾥需要插⼊⼀个 pair，可以⽤{} 形式。⽐如： mp.insert({ 1,2 })

//operator []
//重载[] ，使的 map 可以像数组⼀样使⽤。
//这是 map 最好⽤的接⼝，有了这个重载，map 的使⽤就变得特别轻松，不⽤写很多冗余的代码
//它的底层其实就是调⽤了 insert 函数，并且会返回 val 的引⽤。这⾥⼤家知识储备不够，可能 get 不到这个点
//⽬前就先学会使⽤即可
//#include <iostream>
//#include <map>
//using namespace std;
//void print(map<string,int>& mp)
//{
//	for (auto& p : mp)
//	{
//		cout << p.first << ' ' << p.second << endl;
//	}
//}
////统计一堆字符串中,每一个字符串出现的次数
//void fun()
//{
//	string s;
//	map<string, int>mp; // <字符串，字符串出现的次数>
//	for (int i = 1;i <= 10;i++)
//	{
//		cin >> s;
//		mp[s]++; // 体现了 operator[] 的强大
//	}
//	cout << endl;
//	print(mp);
//}
//int main()
//{
//	map<string, int> mp;
//	mp.insert({ "zhangsan",1 });
//	mp.insert({"lisi",2});
//	mp.insert({ "wangwu",3 });
//	print(mp); cout << endl << endl;
//	//operator[]可以让map像数组一样使用
//	cout << mp["zhangsan"] << endl;//1
//	mp["zhangsan"] = 11;
//	cout << mp["zhangsan"] << endl;//11
//	//这时<first,second>的前者就像下标一样 而后者就是该下标对应的值 还是很好理解的
//	//值得注意的是：operator[]有可能会向 map 中插入本不想插入的元素
//	//if (mp["xingzi"]) cout << "Yes" << endl;
//	//else cout << "No" << endl;
//	//但因为上面调用了mp["xingzi"] 所以它会插入这个元素
//	//print(mp); cout << endl << endl;//会多打印东西 所以会插入不想插入的元素
//	//也就是说 []里面的内容如果不存在 map 中 会先插入 然后再拿值
//	//可以先调用 count 来判断 代码如下
//	if (mp.count("xingzi") && mp["xingzi"]) cout << "Yes" << endl;
//	else cout << "No" << endl;
//	print(mp); cout << endl << endl;//这时候就不会出现xingzi
//
//	mp.erase("zhangsan");
//	mp.erase({"lisi",2});//下面的打印发现 lisi 并没有被删除 
//	print(mp); cout << endl << endl;
//	//因此删除操作只需要删除下标 也就是<>里面的前者就行了
//	fun();
//	return 0;
//}






