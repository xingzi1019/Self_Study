#define _CRT_SECURE_NO_WARNINGS 1
#include "main.h"
using namespace std;
//现在需要C++ 数据结构 算法 三开
//#include <iostream>
//using namespace std; 
//int main()
//{
//	int a=10;
//	int b=20;
//	cout << a+b << endl;
//	cout << "hehe" << endl;
//	cout << "i like c++" << endl;
//	return 0;
//}
//C语言头文件的拓展名是.h但是c++的用法发生了一些变化,对老式C的头文件保留了拓展名.h
//但是C++的自己的头文件没有拓展名了.
//有些C语言的头文件被转换成C++头文件,这些头文件被重命名,去掉了.h 增加了前缀c
//比如math.h变成cmath
//int main()
//{
//	//int num;
//	//cin >> num;
//	//cout << num << endl;
//	////endl 换行和刷新缓冲区
//	//cout << "hehe";
//	//cout << "haha";
//	//cout << endl;
//	//cout << "hello" << " " << "world" << endl;
//	float f;
//	cin >> f;//9.99				9.99999	9.999999
//	cout << f << endl;//9.99	9.99999	10
//	return 0;
//}
//using namespace std;
//意思是使用，使用命名空间 std
//在C++中，变量、函数和类都是大量存在的，这些变量、函数和类的名称如果都存在于全局作用域中，可能会导致很多冲突
//使用名字空间的目的是对标识符的名称进行隔离，以避免命名冲突或名字污染，关键字 namespace 的出现就是针对这种问题的
//std 是C++标准库的名字空间名，C++将标准库的定义实现都放到这个命名空间中
//当我们需要使用标准库中的内容时，就需要加上：using namespace std
//当有了这句代码的时候，表示名字空间 std 中信息都是可见和可用的，比如：cin、cout、endl等
//int main()
//{
//	std::cout << "haha" << std::endl;
//	//多见于企业开发 而不是算法竞赛里面
//	//竞赛还是用的using namespace std;
//}
//short int
//long int 
//long long int
//后面的int可以省略
//int main()
//{
//	double d1 = 1e5;//1.0 * 10^5
//	double d2 = 1e5 + 10;//1.0 * 10^5 +10
//	cout << d1 << endl;//100000
//	cout << d2 << endl;//100010
//	double d3 = 1.23e5 + 10;
//	cout << d3 << endl;//123010
//	return  0;
//}
//布尔类型
//C++有⼀种类型叫： bool （布尔类型），布尔类型的变量的值可以是 true 或 false 
//这种类型的变量专⻔⽤来表⽰真或假的
//当然在C和C++中，0表⽰假，⾮0表⽰真，有时候不使⽤ bool 类型也能表达相同的逻辑
//int main()
//{
//	bool flag = true;
//	if (flag)
//		cout << "hehe" << endl;
//	flag = false;
//	if (!flag)
//		cout << "haha" << endl;
//	cin >> flag;
//	if (flag)
//		cout << "flag为真" << endl;
//	if (!flag)
//		cout << "flag为假" << endl;
//	return  0;
//}
//char是signed char还是unsigned char是取决于编译器的实现的
//常见的编译器是signed char
//sizeof 操作符的操作数可以是类型，也可是变量名或者表达式
//sizeof 的操作数如果不是类型，是表达式的时候，可以省略掉后边的括号的。
//sizeof (类型)
//sizeof 表达式
//int main()
//{
//	int a = 10;
//	std::cout << sizeof a << std::endl;
//	std::cout << sizeof(a) << std::endl;
//	cout << sizeof(int) << endl;
//	cout << sizeof(bool) << endl;//1
//	return 0;
//}
//C/C++的标准规定：
//sizeof(long) >= sizeof(int)
//int main()
//{ 
//	//使用这些需要包含<climits>这个文件
//	cout << CHAR_MIN << endl;
//	cout << CHAR_MAX << endl;
//	cout << INT_MIN << endl;
//	return 0;
//}
// 
//int m = 100;
//int main()
//{
//	int m = 1;
//	int a = 10;
//	cout << m << endl;//1
//	return 0;
//}
//局部和全局变量都在时 优先使用局部变量 若想使用全局变量 则需在局部空间里面增加::
//int main()
//{
//	int m = 1;
//	int a = 10;
//	cout << ::m << endl;//100
//	return 0;
//}
////全局变量：全局变量通常在定义时就被初始化，如果没有明确指定初始值，它们通常会被初始化为0。
//局部变量：局部变量通常不会⾃动初始化。它们需要在使⽤之前明确地赋值或初始化
//如果没有初始化，它们的值将是未定义的，使⽤未初始化的局部变量可能会导致不可预测的⾏为或运⾏时错误，因此局部变量建议初始化
//int m;
//int main()
//{
//	int a;
//	cout << m << a << endl;//DevC++会打印00 而VS会直接报错
//	//vs想打印未初始化的局部变量会报错
//	return 0;
//}
//int main()
//{
//	int a;
//	cout << a;
//	return 0;
//}
//常量:分为以下三类
//字面常量:整形常量(八 十 十六进制数字) 字符常量('a') 浮点型常量(3.14 1e6)
//#define定义的常量
//const 定义的常量
//关于负数取模%
//负数也是⽀持取模的，但是负数求模结果的正负号由第⼀个运算数（操作数）的正负号决定
//int main()
//{
//	int a = 4;
//	int b = 0;
//	int c = a / b;
//	cout << c << endl;
//	cout << 11 % -5 << endl; // 1
//	cout << -11 % -5 << endl; // -1
//	cout << -11 % 5 << endl; // -1
//	return 0;
//}
//c = b = a + 3; //连续赋值，从右向左依次赋值的
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << "输出";
//	cout << a << ' ' << b << endl;
//	return 0;
//}
//混合运算时的类型转换
//整型提升：表达式之中的 char 和 short 类型⼀定会先转换成 int 类型，然后参与运算。
//算术转换：表达式中出现下⾯的任意两种类型的值进⾏计算的时候，要先要将较下⾯的类型转换成另
//外⼀种类型才能计算。
//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int
//这些转换都是隐式⾃动发⽣的，有些编译器会报警告，写程序的⼈并没有感知到，也不需要操⼼细节。
//还有截断和C语言是一样的 这里不过多赘述
//强制类型转换也是一样 不解释
//getchar putchar
//int main()
//{
//	int a = 123;
//	printf("%5d", a);//右对齐
//	printf("\n");
//	printf("%-5d",a);//左对齐
//	cout << 'X' << endl;
//	return 0;
//}

//初次感受类和对象
//第一种
//class calc
//{
//public:
//	int haha = 55;
//	int sum(int* a, int* b)
//	{
//		return *a + *b;
//	}
//private:
//	int div(int* a, int* b)
//	{
//		return a - b;
//	}
//};
//
//int main()
//{
//	calc s;
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int ret = s.sum(&a, &b);
//	cout << ret << endl;
//}
//第二种
//class calc
//{
//public:
//	int a, b, c = 0;
//	void setValues(int x, int y)
//	{
//		a = x;
//		b = y;
//	}
//	void setValues(int x, int y, int z)
//	{
//		a = x;
//		b = y;
//		c = z;
//	}
//	int sum()
//	{  // 不需要参数，直接使用成员变量
//		return a + b + c;
//	}
//};
//
//int main()
//{
//	calc s;
//	//1
//	s.setValues(1, 2);
//	int ret1 = s.sum();//直接调用,不需要参数
//	cout << ret1 << endl;//3
//	//2
//	s.setValues(1, 2, 3);//重载函数
//	int ret2 = s.sum();
//	cout << ret2 << endl;//6
//	return 0;
//}

//某幼儿园里，有5个小朋友编号为1、2、3、4、5，他们按自己的编号顺序围坐在一张圆桌旁
//他们身上都有若干个糖果(键盘输入)，现在他们做一个分糖果游戏
//从1号小朋友开始，将自己的糖果均分三份（如果有多余的糖果，则立即吃掉），自己留一份，其余两份分给他的相邻的两个小朋友
//接着2号、3号、4号、5号小朋友同样这么做。问一轮后，每个小朋友手上分别有多少糖果
//【输入】
//5个小朋友的糖果数。
//【输出】
//游戏后5个小朋友的糖果数。(按5位宽度输出)
//【输入样例】
//8 9 10 11 12
//【输出样例】
//11    7    9   11    6
//int main()
//{
//	int a, b, c, d, e;
//	cin >> a >> b >> c >> d >> e;
//	// 8 9  10 11 12
//	// 2 11 10 11 14
//	// 5 3  13 11 14
//	// 5 7  4  15 14
//	// 5 7  9  5  19
//	//11 7  9  11  6
//	a /= 3; e += a; b += a;
//	b /= 3; a += b; c += b;
//	c /= 3; b += c; d += c;
//	d /= 3; c += d; e += d;
//	e /= 3; d += e; a += e;
//	printf("%5d%5d%5d%5d%5d\n", a, b, c, d, e);
//	return 0;
//}
//cin 是 C++ 中提供的标准输⼊流对象，⼀般针对的是键盘，也就是从键盘上输⼊的字符流，使⽤
//cin 来进⾏数据的提取， cin ⼀般是和 >> （流提取运算符）配合使⽤的。 cin 的功能和 scanf
//是类似的。
//cout 是C++中提供的标准输出流对象，⼀般针对的控制台的窗⼝，也就是将数据以字符流的形式输
//出到控制台窗⼝上显⽰。 cout ⼀般是和 << （流插⼊运算符）配合使⽤。 cout 的功能和
//printf 是类似的。
// 
//📌 我们在写程序的时候，经常需要处理数据，不管什么类型的数据都是以字符流的形式输⼊和
//输出的，也就是不管在键盘上输⼊什么类型的数据，还是将程序中的各种类型的数据输出显
//⽰到控制台屏幕上，都是以字符流的形式处理的。
//cin 和 cout 的输⼊输出⾮常的⽅便，不需要⼿动控制格式，能够⾃动识别变量类型
// 
//📌 cin 使⽤细节：
//cin 在读取的时候是根据⽤⼾的输⼊，从前往后，从上往下依次扫描。
//cin 在读取的过程中遇到空格，⾃动会跳过，所以不要担⼼在想要的字符前输⼊空⽩字符。
//当⼀⾏读取结束的时候，会⾃动换⾏，读取下⼀⾏的内容。
//cin 后⾯不可以跟换⾏ endl
//cout 的格式输出(加餐)
//printf 函数在输出数据的时候，可以指定格式来输出，⽐如：指定宽度，⽐如指定⼩数点后的位
//数，对⻬⽅式等等。那么 cout 在数据的时候能否指定格式呢？答案是可以的！ cout 结合
//<iomanip>(IO manipulators)头⽂件中的操纵符，可以灵活控制输出格式，从⽽满⾜各种格式化需
//求。
//控制宽度和填充(加餐)
//• setw ：设置字段宽度（只对紧接着的输出项有效）。
//• setfill ：设置填充字符。
//int main() 
//{
//	int a = 123;
//
//	cout << "默认宽度: " << a << endl;
//	cout << "宽度设置为10: " << setw(10) << a << endl;
//	cout << "宽度为10，不够时填充*: " << setw(10) << setfill('*') << a << endl;
//
//	return 0;
//}
// 
//控制数值格式(加餐)
//• fixed ：以固定⼩数点表⽰浮点数，设置后就不会以科学计数法展⽰了。
//• scientific ：以科学计数法表⽰浮点数。
//• setprecision ：设置浮点数的精度，以控制⼩数点后的数字位数，⼀般先固定⼩数点，再设置
//精度。
//int main()
//{
//	double pi = 3.141592653589793;
//
//	cout << "默认: " << pi << endl;
//	cout << "固定小时点方式: " << fixed << pi << endl;
//	cout << "科学计数法方式: " << scientific << pi << endl;
//	cout << "固定小数点，小数点后2位有效数字: " << fixed << setprecision(2) << pi << endl;
//
//	return 0;
//}
//cout 结合其他操作符还能完成⼀些其他的格式输出，但是毕竟 cout 在完成格式化输出的时候，其
//实不如 printf ⽅便，所以在竞赛中，涉及格式化输出的时候，我们⼀般会使⽤ printf 来完成，
//所以下⾯的内容属于选学部分。
//控制整数格式（加餐）
//• dec ：以⼗进制格式显⽰整数（默认）。
//• hex ：以⼗六进制格式显⽰整数。
//• oct ：以⼋进制格式显⽰整数。
//int main() 
//{
//	int n = 255;
//	cout << "十进制 : " << dec << n << endl;
//	cout << "十六进制: " << hex << n << endl;
//	cout << "八进制 : " << oct << n << endl;
//	return 0;
//}
//控制对⻬⽅式（加餐）
//• left ：左对⻬。
//• right ：右对⻬（默认）
//int main() 
//{
//	int n = 123;
//
//	cout << "右对齐: " << setw(10) << right << n << endl;
//	cout << "左对齐: " << setw(10) << left << n << endl;
//
//	return 0;
//}
//int main()
//{
//	double a = 0.1;
//	double b = 0.2;
//	double c = 0.3;
//	if (fabs((a + b) - c) < 1e-9) // 1e-9 表⽰允许的误差范围
//		cout << "a + b 约等于 c" << endl;
//	else
//		cout << "a + b 不等于 c" << endl;
//	return 0;
//}
//学生结构体定义
//struct student
//{
//	//成员列表
//	string name;  //姓名
//	int age;      //年龄
//	int score;    //分数
//};
////值传递
//void printStudent(student stu)
//{
//	stu.age = 28;
//	cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
//}
////地址传递
//void printStudent2(student* stu)
//{
//	stu->age = 28;
//	cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << endl;
//}
//int main() {
//	student stu = { "张三",18,100 };
//	//值传递
//	printStudent(stu);
//	cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
//	cout << endl;
//	//地址传递
//	printStudent2(&stu);
//	cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
//	system("pause");
//	return 0;
//}
//学生结构体定义
//struct student
//{
//	//成员列表
//	string name;  //姓名
//	int age;      //年龄
//	int score;    //分数
//};
//
////const使用场景
//void printStudent(const student* stu) //加const防止函数体中的误操作
//{
//	//stu->age = 100; //操作失败，因为加了const修饰
//	cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;
//
//}
//
//int main() {
//
//	student stu = { "张三",18,100 };
//
//	printStudent(&stu);
//
//	system("pause");
//
//	return 0;
//}
//struct Student
//{
//	string name;
//	int score;
//};
//struct Teacher
//{
//	string name;
//	Student sArray[5];
//};
//void allocateSpace(Teacher tArray[], int len)
//{
//	string tName = "教师";
//	string sName = "学生";
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].name = tName + nameSeed[i];
//
//		for (int j = 0; j < 5; j++)
//		{
//			tArray[i].sArray[j].name = sName + nameSeed[j];
//			tArray[i].sArray[j].score = rand() % 61 + 40;
//		}
//	}
//}
//void printTeachers(Teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << tArray[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t姓名：" << tArray[i].sArray[j].name << " 分数：" << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//int main() 
//{
//
//	srand((unsigned int)time(NULL)); //随机数种子 头文件 #include <ctime>
//	Teacher tArray[3]; //老师数组
//	int len = sizeof(tArray) / sizeof(Teacher);
//	allocateSpace(tArray, len); //创建数据
//	printTeachers(tArray, len); //打印数据
//	system("pause");
//	return 0;
//}
//int main() {
//
//	int a = 10;
//	int b = 20;
//	//int &c; //错误，引用必须初始化
//	int& c = a; //一旦初始化后，就不可以更改
//	c = b; //这是赋值操作，不是更改引用
//	
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//	system("pause");
//
//	return 0;
//}

////全局变量
//int g_a = 10;
//int g_b = 10;
//
////全局常量
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main() {
//
//	//局部变量
//	int a = 10;
//	int b = 10;
//
//	//打印地址
//	cout << "局部变量a地址为： " << (int)&a << endl;
//	cout << "局部变量b地址为： " << (int)&b << endl;
//
//	cout << "全局变量g_a地址为： " <<  (int)&g_a << endl;
//	cout << "全局变量g_b地址为： " <<  (int)&g_b << endl;
//
//	//静态变量
//	static int s_a = 10;
//	static int s_b = 10;
//
//	cout << "静态变量s_a地址为： " << (int)&s_a << endl;
//	cout << "静态变量s_b地址为： " << (int)&s_b << endl;
//
//	cout << "字符串常量地址为： " << (int)&"hello world" << endl;
//	cout << "字符串常量地址为： " << (int)&"hello world1" << endl;
//
//	cout << "全局常量c_g_a地址为： " << (int)&c_g_a << endl;
//	cout << "全局常量c_g_b地址为： " << (int)&c_g_b << endl;
//
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "局部常量c_l_a地址为： " << (int)&c_l_a << endl;
//	cout << "局部常量c_l_b地址为： " << (int)&c_l_b << endl;
//
//	system("pause");
//
//	return 0;
//}
//string类型是C++的类型 相当于(int)那种
//int main()
//{
//	//string s1;
//	//string s2 = "haha";
//	//string s3("hehe");
//	//string s4 = s3;
//	//string s5 = s2 + s3;
//	//cout << s1 << endl << s2 << endl << s3 << endl << s4 << endl << s5 << endl;
//	//string s6;
//	////相比于cin getline遇到空格不会停止 而是默认遇到回车 \n 才会停止
//	////getline有两种输入方式 第一种如下
//	//getline(cin, s6);
//	//cout << s6 << endl;
//	////第二种如下 可以自定义结束标志 不在拘泥于回车\n
//	//string s7;
//	//getline(cin, s7, 'a');
//	//cout << s7 << endl;
//	////size() ⽤于获取字符串⻓度 用法如下
//	//cout << s1.size() << endl;
//	//cout << s2.size() << endl;
//	//cout << s3.size() << endl;
//	//cout << s4.size() << endl;
//	//cout << s5.size() << endl;
//	//cout << sizeof(s3) << endl;//28  
//	//返回 string类对象本身在内存中占用的字节数 
//	//返回的是 string类的大小，而不是字符串内容的长度
//	//由你的编译器实现的 std::string内部结构决定的 MSVC是28/32 Clang/GCC是32
//
//	//string 的变量也是有下标的
//	string s = "gugugaga";
//	for (int e = 0; e < s.size(); ++e)
//	{
//		cout << s[e] << ' ';
//	}
//	return 0;
//}

//迭代器
//迭代器是⼀种对象，它可以⽤来遍历容器（⽐如我们现在学习的 string ）中的元素
//迭代器的作⽤类似于指针，或者数组下标。
//
//begin() ：返回指向字符串第⼀个字符的迭代器，需要⼀个迭代器的变量来接收。
//end() ：返回指向字符串最后⼀个字符的下⼀个位置的迭代器（该位置不属于字符串）。
//string 中 begin() 和 end() 返回的迭代器的类型是 string::iterator 。
//
//s.begin()    s.end()
//   |            |
//   |            |  //指向字符串最后⼀个字符的下⼀个位置的迭代器（该位置不属于字符串）上面有提到
//s: a b c d e f
//   0 1 2 3 4 5 ----->下标 
//
//迭代器是可以进⾏⼤⼩⽐较，也可以进⾏ + 或者 - 整数运算的。
//⽐如： it++ ，就是让迭代器前进⼀步， it-- 就是让迭代器退后⼀步。
//同⼀个容器的两个迭代器也可以相减，相减结果的绝对值，是两个迭代器中间元素的个数
//int main()
//{
//	string s = "abcd";
//	string::iterator it1 = s.begin();
//	string::iterator it2 = s.end();
//	if (it1<it2)
//	{
//		cout << "<" << endl;//cout这个
//	}
//	else
//	{
//		cout << '>' << endl;
//	}
//	cout << *it1 << *--it2 << endl;//要用*符号 解引用 和指针有点像
//	it1++, it2--;
//	cout << *it1 << *it2 << endl;
//	cout << it2 - it1 << endl;
//	return 0;
//}
//int main()
//{
//	string s = "abcdefg";
//	//正序遍历
//	for (auto it = s.begin(); it != s.end(); ++it)
//	{
//		cout << *it << ' ';
//	}
//	//逆序遍历
//	//for (string::iterator it = s.end() - 1; it >= s.begin(); --it)//err 执行到最后一次时it还会-- 所以会越界
//	//{
//	//	cout << *it << ' ';
//	//}
//	for (string::iterator it = s.end(); it != s.begin(); )//没问题
//	{
//		--it;  // 先向前移动
//		cout << *it << ' ';
//	}
//	return 0;
//}
//int main()
//{
//	string s = "abcdefghijk";
//	for (string::iterator it = s.begin(); it < s.end(); ++it)
//	{
//		*it = 'x';
//		cout << s << endl;
//	}
//	for (string::iterator it = s.begin(); it != s.end(); ++it)
//	{
//		cout << *it;
//	}
//	return 0;
//}
//push_back()尾插一个字符 使用方法如下
//int main()
//{
//	//string 类型的字符串是⽀持 + 和 += 运算的。这⾥的本质是 string 中重载了operator+= 这个操作符
//	//C++核心编程那里的
//	string s = "abcdef";
//	s.push_back('g');//字符串尾部插入一个字符
//	cout << s << endl;
//	s.push_back('i');
//	cout << s << endl;
//	s += 'j';
//	cout << s << endl;
//	string str;
//	for (auto i = 'a'; i <= 'z'; ++i)
//	{
//		str.push_back(i);
//	}
//	cout << str << endl;
//	return 0;
//}

//pop_back C++11以上才支持的
//int main()
//{
//	string s = "hello";
//	s.pop_back();
//	cout << s << endl;//hell
//	cout << s.size() << endl;//4
//	s.pop_back();
//	cout << s << endl;//hel
//	cout << s.size() << endl;//3
//	s.pop_back();
//	cout << s << endl;//he
//	cout << s.size() << endl;//2
//	s.pop_back();
//	cout << s << endl;//h
//	cout << s.size() << endl;//1
//	s.pop_back();
//	cout << s << endl;//
//	cout << s.size() << endl;//0
//	//没长度了还进行删除就是未定义行为 下面这个为错误示范 编译会直接报错
//	s.pop_back();
//	cout << s << endl;//err
//	cout << s.size() << endl;//err
//	return 0;
//}
//int main()
//{
//	string s = "hello";
//	cout << s << endl;
//	while (s.size())
//	{
//		s.pop_back();
//	}
//	cout << s << endl;
//	return 0;
//}

//介绍几个string的成员函数
//insert find substr 
//insert的函数原型如下
//string& insert (size_t pos, const string& str); //pos位置前⾯插⼊⼀个string字符串
//string& insert(size_t pos, const char* s); //pos位置前⾯插⼊⼀个C风格的字符串
//string& insert(size_t pos, size_t n, char c);//pos位置前⾯插⼊n个字符c
//int main()
//{
//	//1
//	string s1 = "abcdefg";
//	string str1 = "123";
//	s1.insert(3, str1);
//	cout << s1 << endl;//abc123defg
//
//	//2
//	string s2 = "123456";
//	string str2 = "aaaaa";
//	//s2.insert(4, str2.c_str());//c_str()返回一个指向字符串内容的常量C风格字符串指针 
//	s2.insert(4, str2);
//	cout << s2 << endl;//1234aaaaa56
//
//	//3
//	string s3 = "123456";
//	string str3 = "bbbbbb";
//	s3.insert(4, 2, 'c');//记住 这个三个参数的是字符而不是字符串
//	cout << s3 << endl;//123cc56
//	return 0;
//}
//find
//size_t find(const string& str, size_t pos = 0) const;
//查找string类型的字符串str，默认是从头开始查找，pos可以指定位置开始
//size_t find(const char* s, size_t pos = 0) const;
//查找C风格的字符串s，默认是从头开始查找，pos可以指定位置开始
//size_t find(const char* s, size_t pos, size_t n) const;
//在字符串的pos这个位置开始查找C风格的字符串s中的前n个字符，
//size_t find(char c, size_t pos = 0) const;
//查找字符c，默认是从头开始，pos可以指定位置开始
//int main()
//{
//	//0默认
//	string s1 = "hello world hello xingzi";
//	string des1 = "llo";
//	cout << s1.find(des1) << endl;//2 下标为2 默认从第一个位置(下标为0)开始查找
//
//	//1
//	string s2 = "hello world hello xingzi";
//	string des2 = "llo";
//	cout << s2.find(des2, 3) << endl;//14 
//
//	//2
//	string s3 = "hello world hello xingzi";
//	string des3 = "llo";
//	cout << s3.find(des3.c_str(), 3) << endl;//14
//
//	//3
//	string s4 = "hello world hello xingzi";
//	string des4 = "lo";
//	cout << s4.find(des4.c_str(), 7, 2) << endl;//15
//
//	//4
//	string s5 = "hello world hello xingzi";
//	cout << s5.find('x', 3) << endl;//18
//
//	return 0;
//}
//int main()
//{
//	string s = "hello";
//	int n = s.find('o');//返回的是size_t类型 这里会发生隐式类型转换 某些数据可能会有潜在的风险 所以最好还是用size_t来接收
//	cout << n << endl;//4
//	size_t m = s.find('o');
//	cout << m << endl;//4
//	if (string::npos == s.find("bit"))//可以放string也可以是C语言风格的字符串
//	{
//		cout << "no find" << endl;
//	}
//	return 0;
//}

//substr
//⽤于截取字符串中指定位置指定⻓度的⼦串
//string substr (size_t pos = 0, size_t len = npos) const;
//pos 的默认值是0，也就是从下标为0的位置开始截取
//len 的默认值是npos，意思是⼀直截取到字符串的末尾
//substr() :如果函数不传参数，就是从下标为0的位置开始截取，直到结尾，得到的是整个字符串；
//substr(pos) ：从指定下标 pos 位置开始截取⼦串，直到结尾；
//substr(pos, len) ：从指定下标 pos 位置开始截取⻓度为 len 的⼦串
//int main()
//{
//	string s = "hello world hello everyone";
//	string str = s.substr();
//	cout << str << endl;
//	str = s.substr(12);
//	cout << str << endl;
//	str = s.substr(18, 25);//开始位置和要截取的长度
//	cout << str << endl;
//	str = s.substr((s.find("llo")) + sizeof("llo"));//substr多和find一起使用
//	cout << str << endl;
//	return 0;
//}

//string的关系运算
//+ > < >= <= == !=  //注意并没有 - 这个操作 string没有重载这个操作
//string是C++封装的类型 所以是有运算符的重载的 这里放到深入学习C++再说明
//字符串的⽐较是基于字典序进⾏的，⽐较是对应位置上字符的ASCII值的⼤⼩；⽐较的不是字符串的⻓度
//"abc" < "aq"; //'b'的ascii码值是⼩于'q'的
//"abcdef" < "ff";//'a'的ASCII码值是⼩于'f'的
//"100" < "9";//'1'的ASCII码值是⼩于'9'的
//int main()
//{
//	string s = "aaa";
//	string ss = "a";
//	//两个字符串比较时至少得有一个是string类型 不能两个都是C语言风格的字符串
//	//string string
//	//string "abcd"
//	//"abcs" string
//	//"abc"  "abc"    ----->这个是错的 不能这样
//	string str1 = "abc ";
//	string str2 = "abc";
//	if (str1 == str2)
//	{
//		cout << "srtr1 == str2" << endl;
//	}
//	else if (str1 > str2)
//	{
//		cout << "str1 > str2" << endl;//因为空格也有ASCII码值
//	}
//	else
//	{
//		cout << "str1 < str2" << endl;
//	}
//	return 0;
//}

//和string相关的函数
//stoi stol
//stoi 是将字符串转换成 int 类型的值
//stol 是将字符串转换成 long int 类型的值
//这两个函数非常类似，这⾥以 stoi 为例讲解⼀下这⾥函数的使⽤⽅式。
//stoi 函数其实可以将⼀个 string 类型的字符串，转化为整型，函数原型如下：
//int stoi(const string& str, size_t* idx = 0, int base = 10);
//long stol(const string& str, size_t* idx = 0, int base = 10);
//参数解读
//。。str 表⽰被转换的 string 类型的字符串
//。。idx 是⼀个输出型参数，也就是这个通过这个参数会带回⼀个值。 idx 是⼀个指针
//    需要在外边创建⼀个 size_t 类型的值，传递它的地址给 idx ，这个参数将会带回 str 中⽆法正确匹配数字的第⼀个字符的位置。
//。。base 表⽰被解析的字符串中数字的进制值，可能是 2, 8, 10, 16 或者 0 .
//默认情况下这个值是 10 ，表⽰ 10 进制数字
//。如果传递的是 2 ，表⽰被解析的字符串中是 2 进制的数字，最终会转换成 10 进制
//◦ 如果传递的是 8 ，表⽰被解析的字符串中是 8 进制的数字，最终会转换成 10 进制
//◦ 如果传递的是 16 ，表⽰被解析的字符串中是 16 进制的数字，最终会转换成 10 进制
//◦ 如果传递的是 0 ，会根据字符串的内容的信息⾃动推导进制，⽐如：字符串中有 0x ，就认为是 16 进制， 
//  0 开头会被认为是 8 进制，最终会转换成 10 进制。
//int main()
//{
//	string s = "11x22";
//	size_t pos = 0;
//	int n = stoi(s, &pos);
//	cout << n << endl;//11
//	cout << "pos" << pos << endl;//2
//	n = stoi(s, &pos, 2);
//	cout << n << endl;//3  //二进制是11转换成10进制就是3 下面的同理
//	cout << "pos" << pos << endl;//2
//	n = stoi(s, &pos, 8);
//	cout << n << endl;//9
//	cout << "pos" << pos << endl;//2
//	n = stoi(s, &pos, 16);
//	cout << n << endl;//17
//	cout << "pos" << pos << endl;//2
//	n = stoi(s, &pos, 0);
//	cout << n << endl;//11
//	cout << "pos" << pos << endl;//2
//	//假若我不需要pos那可以直接传递空指针 NULL(本质是0)
//	n = stoi(s, 0, 10);//这样子也没问题 一般也是用这个
//	cout << n << endl;//11
//	return 0;
//}

//stod stof
//stod 是将字符串转换成 double 类型的值，函数原型如下，和 stoi 函数的⽐较的话，少了描述
//字符串中数字进制的参数，其他参数⼀致。 stof 是将字符串转换成 flaot 类型的值。
//double stod(const string& str, size_t* idx = 0);
//float stof(const string& str, size_t* idx = 0)
//int main()
//{
//	string s = "3.14x456";
//	size_t pos = 0;
//	double ret = stod(s, &pos);
//	cout << ret << endl;///3.14
//	cout << "pos=" << pos << endl;//4
//	return 0;
//}

//to_string
//函数原型如下
//string to_string(int val);
//string to_string(long val);
//string to_string(long long val);
//string to_string(unsigned val);
//string to_string(unsigned long val);
//string to_string(unsigned long long val);
//string to_string(float val);
//string to_string(double val);
//string to_string(long double val);
//int main()
//{
//	string pi = "pi is " + to_string(3.14159);
//	cout << pi << endl;
//	return 0;
//}

//string支持关系运算
//这里不在赘述

//引用和传引用调用
//引⽤不是新定义⼀个变量,⽽是给已存在变量取了⼀个别名,编译器不会为引⽤变量开辟内存空间,它和它引⽤的变量是同⼀块内存空间
//⽐如：李逵，在家称为"铁⽜"，江湖上⼈称"⿊旋⻛
//引⽤使⽤格式：
//类型& 引⽤变量名 = 引⽤实体;
//int main()
//{
//	int a = 10;
//	int& ra = a;//这个时候ra就是a的引用
//	cout << a << endl;
//	cout << ra << endl;
//	cout << &a << endl;//所以地址打印出来是一样的
//	cout << &ra << endl;
//
//	double d = 3.14;
//	double& rd = d;
//	cout << d << endl;
//	cout << rd << endl;
//	cout << &d << endl;
//	cout << &rd << endl;
//
//	//引用也可以不止一个
//	int xz = 19;
//	int& xz1 = xz;
//	int& xz2 = xz;
//	cout << xz1 << "  " << & xz1 << endl;
//	cout << xz2 << "  " << & xz2 << endl;
//
//	//引用的特性
//	//1. 引⽤在定义时必须初始化
//	//2. ⼀个变量可以有多个引⽤
//	//3. 引⽤⼀旦引⽤⼀个实体，再不能引⽤其他实体
//	int b = 20;
//	int c = 30;
//	int& rb = b;// ❗这是赋值不是重新引用
//	rb = c;//这个相当于把 c 赋值给 b
//	cout << b << endl;//30
//	cout << rb << endl;//30
//	cout << c << endl;//30
//	return 0;
//}

//传引用调用
//void Swap(int& x, int& y)//x是a的引用 y是b的引用 所以用的是同一块地址 所以可以实现值的交换
//{
//	//x和y是a和b的别名
//	int temp = x; //直接使用不需要解引用 更加方便
//	x = y;
//	y = temp;
//	cout << &x << endl;
//	cout << &y << endl;//可以发现打印出来的地址是一样的
//}
////传地址调用
//void Swap2(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//	cout << x << endl;//打印出来的地址也是一样的
//	cout << y << endl;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << a << "  " << b << endl;
//	cout << &a << endl;
//	cout << &b << endl;
//	//Swap(a, b);//不需要取地址更加方便
//	Swap2(&a, &b);
//	cout << a << endl;//20
//	cout << b << endl;//10
//	return 0;
//}
//上⾯这种实现 Swap 函数实现⽅式就是函数的传引⽤调⽤。
//这种调⽤⽅式的本质是将实参变量的地址传递给了形参，⽽形参使⽤指针直接找到实参来进⾏操作。
//所以修改形参的时候，直接改变的就是实参，这就是引⽤的应⽤。当然这⾥也可以使⽤指针来实现，⽐引⽤稍微复杂⼀些

//其实在C++的STL中也提供了⼀个库函数 swap , 这个函数可以⽤来交换两个变量，也可以交换两个数
//组（容器的值），如果掌握了，我们就不需要⾃⼰再⾃⼰实现交换的逻辑，直接使⽤现成的函数
//swap 函数需要的头⽂件 <utility>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	swap(a, b);
//	cout << a << endl;
//	cout << b << endl;
//	int arr1[3] = { 1,2,3 };
//	int arr2[3] = { 4,5,6 };
//	swap(arr1, arr2);
//	for (auto e : arr1)//范围for的用法记得多加巩固
//		cout << e << ' ';
//	cout << endl;
//	for (auto e : arr2)
//		cout << e << ' ';
//	cout << endl;
//	//swap还支持交换vector map set string和其他容器
//	string s1 = "hello";
//	string s2 = "world";
//	swap(s1,s2);
//	cout << s1 << endl;
//	cout << s2 << endl;
//	//其他就不写了 还没学
//	return 0;
//}

//引用字符串传参
//void printString(string& s)
//{
//	cout << s << endl;
//}
//int main()
//{
//	string s("hello world");
//	printString(s);
//}

//传值、传引⽤效率⽐较
//string s("hello world");
//void TestFunc1(string s) 
//{
//	;
//}
//void TestFunc2(string& s) 
//{
//	;
//}
//void Test()
//{
//	// 以值作为函数参数
//	size_t begin1 = clock();//ctime的 clock()函数用于测量程序 CPU 时间
//	for (size_t i = 0; i < 10000000; ++i)
//	{
//		TestFunc1(s);//传值调用
//	}
//	size_t end1 = clock();
//	// 以引⽤作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000000; ++i)
//	{
//		TestFunc2(s);//传址调用
//	}
//	size_t end2 = clock();
//	// 分别计算两个函数运⾏结束后的时间
//	cout << "TestFunc1(string)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(string&)-time:" << end2 - begin2 << endl;
//}
//int main()
//{ 
//	Test();
//	return 0;
//}
//数组在传参的时候，形参和实参本来就是同⼀个数组，所以数组传参的时候，不需要使⽤引⽤参数。

//int IntAdd(int& x ,int& y)
//{
//	return x + y;
//}
//double DoubleAdd(double& x,double& y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	cin >> a >> b;
//	int s = IntAdd(a,b);
//	cout << s << endl;
//	double c = 0;
//	double d = 0;
//	cin >> c >> d;
//	double ss = DoubleAdd(c,d);
//	cout << ss << endl;
//	return 0;
//}

//函数重载：C++中的函数重载（Function Overloading）是指在同⼀个作⽤域中可以有多个同名函数
//它们的函数名称相同，但是参数列表不同
//函数返回类型 函数名(参数1, 参数2,...);
//这⾥的“不同”指的是参数的数量、类型或顺序⾄少有⼀个不同。函数的返回类型并不影响函数的重载
//因为C++编译器不会根据返回类型来区分不同的函数。
//  对刚刚的代码进行修改
//int Add(int& x ,int& y)//修改了函数昵称统一为Add
//{
//	return x + y;
//}
//double Add(double& x,double& y)//
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	cin >> a >> b;
//	int s = Add(a,b);//修改为调用Add
//	cout << s << endl;
//	double c = 0;
//	double d = 0;
//	cin >> c >> d;
//	double ss = Add(c,d);//修改为调用Add
//	cout << ss << endl;
//	return 0;
//}//发现可以正常执行
//编译器会根据调用函数师时传递的参数，自动推导应该使用哪个函数
//void f()
//{
//	cout << "f()" << endl;
//}
//void f(int x)
//{
//	cout << "f(int x)" << endl;
//}
//void f(char c, int n)
//{
//	cout << "char c,int n" << endl;
//}
//void f(int n, char c)
//{
//	cout << "int n,char c" << endl;
//}
//int main()
//{
//	f();
//	f(4);
//	f('a', 1);
//	f(1,'a');
//	return 0;
//}

//进制转换
//#include <iostream>
//using namespace std;
//string s = "0123456789ABCDEF";
//void x_to_m(int x, int m)
//{
//    if (x >= m)
//        x_to_m(x / m, m);
//    cout << s[x % m];
//}
//int main()
//{
//    int x = 0;
//    int m = 0;
//    cin >> x >> m;
//    x_to_m(x, m);
//    return 0;
//}
//10进制的12 ---> 2进制: 1 1 0 1
//12(1101) % 2 = 1   13 / 2 = 6
//6(110)   % 2 = 0    6 / 2 = 3
//3(11)    % 2 = 1    3 / 2 = 1
//1(1)     % 2 = 1    1 / 2 = 0
// 
// 
//位运算与操作符属性
//原码：直接将数值按照正负数的形式翻译成⼆进制得到的就是原码。
//反码：将原码的符号位不变，其他位依次按位取反就可以得到反码。
//补码：反码 + 1 就得到补码。
//由补码得到原码也是可以使⽤：取反， + 1 的操作。
//C语言那里已经解释过这里不在赘述
//整数在内存中是以补码的形式存储的，整数
//在参与位运算的时候，也都是使⽤内存中的补码进⾏计算的，计算的产⽣的结果也是补码，需要转换
//成原码才是真实值

//初识滑动窗口
//力扣第三题
//给定一个字符串 s ，请你找出其中不含有重复字符的 最长 子串 的长度。
//输入: s = "abcabcbb"
//输出 : 3
//解释 : 因为无重复字符的最长子串是 "abc"，所以其长度为 3。注意 "bca" 和 "cab" 也是正确答案。
//class Solution
//{
//public:
//	int lengthOfLongestSubstring(string s)
//	{
//		//采用的是滑动窗口(双指针) [left,right]来维护无重复的子串
//		//用数组记录每个字符最后一次出现的下标
//		//遇到重复字符时 把左指针移到[重复位置+1]
//		int last[128];
//		memset(last, -1, 128);
//		//vector<int>last(128, -1);
//		int left = 0;
//		int max_len = 0;
//		int n = s.size();
//		for (int right = 0; right < n; right++)//遍历母串
//		{
//			char c = s[right];//将当前遍历到的字符赋值给C
//			if (last[c] >= left)//因为字符本质上存储的ASCII码所以可以作为数组访问的索引
//			{
//				left = last[c] + 1;
//			}
//			last[c] = right;
//			max_len = max(max_len, right - left + 1);
//		}
//		return max_len;
//	}
//};

//进制转换最终版
//string ss = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//void x_to_m(int s, int m)
//{
//	if (s > m)
//	{
//		x_to_m(s/m,m);
//	}
//	cout << ss[s % m];
//}
//int main()
//{
//	int n, m;
//	string sss;
//	cin >> n >> sss >> m;
//	int s = stoi(sss, NULL, n);
//	x_to_m(s, m);
//	return 0;
//}

//移位操作符，移动的是存储在内存中的补码的二进制序列
//int main()
//{
//	int num = 10;
//	//00000000 00000000 00000000 00001010 --->10的 原码 反码 补码
//	int n = num << 1;//左移1位
//	//左边抛弃 右边补0 ----->千万记住
//	//00000000 00000000 00000000 00010100
//	cout << "n = " << n << endl;
//	cout << "num = " << num << endl;
//	//需要注意的是这里的num不变 很好理解的参考下面
//	int a = 1;
//	int b = a + 1;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	//总结:正数或者无符号数左移一位有乘2的结果
//
//	int c = -10;
//	//10000000 00000000 00000000 00001010  ---> -10的原码
//	//11111111 11111111 11111111 11110101  ---> -10的反码
//	//11111111 11111111 11111111 11110110  ---> -10的补码
//	int d = c << 1;
//	//11111111 11111111 11111111 11101100  ---> d的补码
//	//10000000 00000000 00000000 00010011
//	//10000000 00000000 00000000 00010100  ---> d的原码
//	cout << "c = " << c << endl;//-10
//	cout << "d = " << d << endl;//-20
//	return 0;
//}

//#define READ_PERMISSION 0x01 // 0001，表⽰读权限
//#define WRITE_PERMISSION 0x02 // 0010，表⽰写权限
//#define EXECUTE_PERMISSION 0x04 // 0100，表⽰执⾏权限
//int main()
//{
//	int permissions = 0x03; // ⼆进制: 0011，具有读和写权限
//	if (permissions & READ_PERMISSION)
//	{
//		printf("阅读权限被设置\n");
//	}
//	else
//	{
//		printf("阅读权限未被设置\n");
//	}
//
//	if (permissions & WRITE_PERMISSION)
//	{
//		printf("写权限被设置\n");
//	}
//	else
//	{
//		printf("写权限未被设置\n");
//	}
//
//	if (permissions & EXECUTE_PERMISSION)
//	{
//		printf("执⾏权限被设置\n");
//	}
//	else
//	{
//		printf("执⾏权限未被设置\n");
//	}
//	return 0;
//}

//获取二进制中的指定位置
//int main()
//{
//	//我们可以对 x 做这样的运算： (x >> i) & 1 ，如果结果是 0 ，表⽰第 i 位是 0 ，如果结果是 1 ，表⽰第 i 位是 1
//	int a = 5;
//	//00000000 00000000 00000000 00000101 --->5的原码 补码
//	//注意最右边是第0位
//	if (((a >> 2) & 1) == 1)
//	{
//		cout << "第3位是1" << endl;
//	}
//	else
//	{
//		cout << "第3位是0" << endl;
//	}
//	if (((a >> 1) & 1) == 1)
//	{
//		cout << "第2位是1" << endl;
//	}
//	else
//	{
//		cout << "第2位是0" << endl;
//	}
//	return 0;
//}


//ACM模式(PTA)
//核心代码模式(LeetCode)
//假设平台已经帮你准备好了main函数,输入,输出的代码
//我们只需要完成,这个指定的函数
//需要根据参数,完成计算,然后返回计算结果就行
//如下面的代码
//颠倒二进制位
//class Solution 
//{
//public:
//    int reverseBits(int n) 
//    {
//        int ret = 0;
//        for (int i = 0; i < 32; i++) 
//        {
//            //获取n中的一个二进制位
//            int b = (n >> i) & 1;
//            //移动这个二进制位到合适的位置然后存放在ret中
//            //我们没有在n本身里面做出修改
//            ret |= (b << (31 - i));
//        }
//        return ret;
//    }
//};

//将指定的二进制位设置为1
//有时候需要将⼀个整数 x 的⼆进制表⽰中的某⼀位（⼏位）设置为 1 ，其余位置保留原值，
//则可以使⽤另⼀个数 m ，使 m 的⼆进制上对应位置为 1 ，其余位置为 0 。然后使两个数进⾏按位或运算（ x | m ），即可得到想要的数
//当然也可以只设置 x ⼆进制中的某 1 位，也就是将 x ⼆进制中的第 i 位（从低到⾼，以最低位为第 0 位）置为 1 
//则可以进⾏下⾯的运算： x |= (1 << i);
//数字的补数
//class Solution {
//public:
//	int findComplement(int num) {
//		int ret = 0;
//		int i = 0;
//		while (num)
//		{
//			if ((num & 1) == 0)
//				ret |= (1 << i);
//			num >>= 1;
//			i++;
//		}
//		return ret;
//	}
//};

//将指定二进制位设置为0
//有时候需要将⼀个整数 x 的⼆进制表⽰中的某 1 位设置为 0 ，其余位置保留原值
//则可以进⾏下⾯的运算： x &= ~(1 << i);       //再提醒~是取反操作
//int main()
//{
//	//0001010
//	//1110111 &
//	//0000010
//	return 0;
//}

//反转指定二进制位
//有时候需要将⼀个整数 x 的⼆进制表⽰中的第 i 位反转（从低到⾼，以最低位为第 0 位）
//也就是原来是 1 的变成 0 ，原来是 0 的变成 1 。则可以使⽤另⼀个数 m ，使得 m 的⼆进制中第 i 位为1 ，其余位置为 0
//然后令两个数进⾏按位异或运算（ x ^ m ），即可得到想要的数。
//int main()
//{
//	//0010010111
//	//  ...     
//	//0011100000 ^
//	//0001110111
//	return 0;
//}

//嵌⼊式开发的时候，假设我们要控制⼀个LED灯的亮灭，某⼀个寄存器的第2位⽤于控制这个LED灯的开关
//现在想每次反转引脚状态可以切换LED的亮灭。就可以下⾯的代码：
//#include <cstdio>
//#define LED_CONTROL_BIT 0x04 // 00000100，第2位控制LED
//int main()
//{
//	unsigned char Register = 0x00; // 初始状态为低电平，LED灭
//	//00000000
//	//00000100
//	//00000100
//	printf("Register: 0x%02X\n", Register); // 输出: 0x00
//
//	Register ^= LED_CONTROL_BIT; // 反转第2位, 第⼀次切换，LED亮
//	printf("Register: 0x%02X\n", Register); // 输出: 0x04
//	//00000100
//	//00000100
//	//00000000
//	Register ^= LED_CONTROL_BIT; // 反转第2位, 第⼆次切换，LED灭
//	printf("Register: 0x%02X\n", Register); // 输出: 0x00
//	return 0;
//}

//将⼆进制中最右边的1变为0
//有时候，我们需要将⼀个整数 x 的⼆进制表⽰中最右边的 1 变为 0 ，这时候就可以使⽤ x & (x - 1) 来得到想要的数字。
//int main()
//{
//	//00101100
//	//     .
//	//00101011 &
//	//00101000 --->成功是实现
//	return 0;
//}

//2的n次幂
 //class Solution 
 //{
 //public:
 //    bool isPowerOfTwo(int n) 
 //    {
 //         return (n > 0) && (n & (n - 1)) == 0; 
 //    }
 //    //二的n次方只有一位是1其余位置都是0
 //};

//只保留⼆进制中最右边的1
//有时候 我们需要将⼀个整数x的⼆进制表⽰中最右边的1保留下来 其他位都置为0 那么 x & -x 就可以得到想要的数字
//int main()
//{
//	//00101100
//	//     .
//	//10101100  -->  -x的原码
//	//11010011  -->  -x的反码
//	//11010100 &-->  -x的补码
//	//00000100
//	//简直不要太巧妙
//	return 0;
//}
//如果x是2的n次幂
//那么 x & (-x) 会等于 x
// x & (-x) == x

//异或的巧⽤
//我们已经学习了异或运算符了，那异或运算符的特点：
//1. x ^ x = 0 ，两个相同的数字异或结果是0
//2. 0 ^ x = x ， 0 和 x 异或还是 x
//3. a ^ b ^ a == a ^ a ^ b 异或是⽀持交换律的
//记住这些规律

//交换两个整数的值 不允许创建第三个变量
//int main()
//{
//	int a = 0;
//	int b = 0;
//	cin >> a >> b;
//	cout << a << " " << b << endl;
//	a = a + b;//这个比较难想到 不好理解 不过之前C语言那里学过 
//	b = a - b;//有个问题a+b的结果如果大于int可以存放的最大值 可能会有溢出的风险
//	a = a - b;
//	cout << a << " " << b << endl;
//	return 0;
//}
//最优解 位运算来实现
//int main()
//{
//	//不容易想到 也不太好理解
//	int a, b;
//	cin >> a >> b;
//	cout << a << " " << b << endl;
//	a = a ^ b;//a' = a ^ b
//	b = a ^ b;//b  = a'^ b //b = a ^ b ^ b
//	a = a ^ b;//a  = a'^ b //a = a ^ b ^ a
//	cout << a << " " << b << endl;
//	//值得注意的是这个仅仅适用于整数类型
//	return 0;
//}

//力扣268 消失的数字的两种解法
//法一 小学数学法
//class Solution {
//public:
//    int missingNumber(vector<int>& nums)
//    {
//        int len = nums.size();
//        int sum = 0, std = ((1 + len) * len) / 2;
//        for (int i = 0; i < len; ++i)
//        {
//            sum += nums[i];
//        }
//        return std - sum;
//    }
//};
////法二 异或版本 一个是题目提供的0~n缺一个的数组 另一个要自己搞的完整0~n的数组
////两个数组异或就只是剩下单身狗 异或^支持交换律且相同^位0 0 ^ x = x 三个规律都用上就很好理解了
//class Solution {
//public:
//    int missingNumber(vector<int>& nums) 
//    {
//        int sum = 0, misssum = 0;
//        for (int i = 0; i <= nums.size(); ++i)
//            sum ^= i;
//        for (int i = 0; i < nums.size(); ++i)
//            misssum ^= nums[i];
//        return sum ^ misssum;
//    }
//};

//操作符属性 C那边很详细这里不想讲太多
//优先级
//值得注意的是
//& | ^ ~ 的优先级低于 == !=  <= >=这些
//所以要记得加括号

//结合性
//优先级一样时 考虑结合性


//结构体和类
//相同的那些这里就不多讲了
//C++中的结构体和C语⾔结构体的有⼀个⽐较⼤的差异就是：C++中的结构体中除了有成员变量之外，还可以包含 成员函数
//1. C++的结构体会有⼀些默认的成员函数，⽐如：构造函数、析构函数等，是编译器默认⽣成的
//如果觉得不合适，也是可以⾃⼰显⽰的定义这些函数，这些函数都是⾃动被调⽤，不需要⼿动调⽤
//2. 除了默认的成员函数之外，我们可以⾃⼰定义⼀些成员函数，这些成员函数可以有，也可以没有，完全根据的实际的需要来添加就可以。
//3. 这些成员函数可以直接访问成员变量
//4. 成员函数的调⽤也使⽤.操作符
//struct stu
//{
//	//成员变量
//	string name;
//	int chinese;
//	int math;
//	int total;
//	//成员函数
//	//自定义一个初始化结构体变量的函数
//	void init_stu()
//	{
//		name = "小明";//成员函数可以直接访问成员变量
//		chinese = 100;
//		math = 100;
//		total = chinese + math;
//	}
//	void print_stu()
//	{
//		cout << "名字: " << name << endl;//结构体和类里面访问成员变量不需要用s1.类似这样的东西 可以直接访问
//		cout << "语文: " << chinese << endl;
//		cout << "数学: " << math << endl;
//		cout << "总分: " << total << endl;
//	}
//};
////在C++中，结构体名本身就是类型名，不需要使用typedef
////C++ 标准中确实不支持真正的匿名结构体。与C语言不同，C++要求所有结构体必须有明确的名称标识符
//int main()
//{
//	stu s1;
//	s1.init_stu();
//	s1.print_stu();
//	return 0;
//}

//构造函数和析构函数
//构造函数：
//构造函数是结构中默认的成员函数之⼀，构造函数的主要的任务是初始化结构体变量。
//写了构造函数，就不需要再写其他成员函数来初始化结构体(类)的成员，⽽且构造函数是在结构变量创建的时候，编译器⾃动被调⽤的。
//构造函数的特征如下：
//• 函数名与结构体(类)名相同。
//• ⽆返回值。
//• 构造函数可以重载。
//• 若未显式定义构造函数，系统会⾃动⽣成默认的构造函数
//析构函数：
//析构函数是⽤来完成结构体变量中资源的清理⼯作，也是结构体中默认的成员函数之⼀
//析构函数在结构体变量销毁的时候，被⾃动调⽤的。
//析构函数的特征如下：
//• 析构函数名是在结构体(类)名前加上字符 ~。
//• ⽆参数⽆返回值类型。
//• ⼀个类只能有⼀个析构函数。若未显式定义析构函数，系统会⾃动⽣成默认的析构函数。注意：析构函数不能重载

//struct stu
//{
//	//成员变量
//	string name;
//	int chinese;
//	int math;
//	int total;
//	//成员函数
//	//构造函数
//	stu()//没有返回值 void都不能写不然编译报错
//	{
//		//不信就cout一下
//		cout << "调用构造函数stu" << endl;
//		name = "二狗";
//		chinese = 98;
//		math = 99;
//		total = chinese + math;
//	}
//	~stu()//同样不能加void
//	{
//		//资源释放的工作
//		cout << "调用析构函数" << endl;
//		chinese = 0;
//	}
//	void print_stu()
//	{
//		cout << "名字: " << name << endl;//结构体和类里面访问成员变量不需要用s1.类似这样的东西 可以直接访问
//		cout << "语文: " << chinese << endl;
//		cout << "数学: " << math << endl;
//		cout << "总分: " << total << endl;
//	}
//};
////在C++中，结构体名本身就是类型名，不需要使用typedef
////C++ 标准中确实不支持真正的匿名结构体。与C语言不同，C++要求所有结构体必须有明确的名称标识符
//int main()
//{
//	{
//		stu s1;
//		//这时候不需要s1.stu(); //error
//		//因为构造函数在创建变量的时候自己偷偷的去调用了
//		//F11可以调试去看看
//		s1.print_stu();
//		//不需要自己手动s1.~stu; //相较于构造函数析构函数允许被调用
//	}
//	//F11 发现离开上面这个大括号的作用域后会进入析构函数~stu
//	//所以编译器会主动去调用构造函数和析构函数
//	return 0;
//}

//运算符重载
//能不能直接cout结构体变量
//struct stu
//{
//	string name;
//	int age;
//};
////运算符的重载
////重载的是<<(输出运算符),让<<支持结构体stu类型的打印
//ostream& operator<<(ostream& os, stu& s)//这里的os相当于cout
//{
//	os << "重载: " << endl;
//	os << "名字: " << s.name << endl;
//	os << "年龄: " << s.age << endl;
//	return os;
//}
//int main()
//{
//	int a = 1;
//	cout << a << endl;
//	char ch = 'b';
//	cout << ch << endl;
//	stu s1 = { "zhangsan",18 };
//	//cout << s1 << endl;//发现并不行
//	//没有与这些操作数匹配的 "<<" 运算符
//	//二元“<<”: 没有找到接受“stu”类型的右操作数的运算符(或没有可接受的转换)
//	//有了上面的重载之后就可以了
//	cout << s1 << endl;
//	return 0;
//}
//除了输出运算符可以重载之外，还有很多其他的操作符可以重载

//介绍⼀个 C++ 的 STL 中的库函数 sort ，可以直接⽤来排序数据，在算法竞赛和⽇常开发中使⽤⾮常频繁。
//只要涉及到数据的排序，⼜没有明确要求⾃⼰实现排序算法的时候，就可以直接使⽤sort函数
// 
//版本1 默认排序方式是升序
//template <class RandomAccessIterator>   
//void sort(RandomAccessIterator first, RandomAccessIterator last);
//void sort(开始位置，结束位置);
//first：指向要排序范围的第⼀个元素的迭代器或者指针。
//last：指向要排序范围的最后⼀个元素之后位置的迭代器或者指针。
//版本2  自定义的排序
//template <class RandomAccessIterator, class Compare>
//void sort(RandomAccessIterator first, RandomAccessIterator last, Compare comp);
//void sort(开始位置，结束位置，⾃定义排序函数);
//first：指向要排序范围的第⼀个元素的迭代器或者指针。
//last：指向要排序范围的最后⼀个元素之后位置的迭代器或者指针。
//comp：是⼀个⽐较函数或者函数对象
//这⾥开始位置和结束位置，可以是指针，也可以是迭代器
//⾃定义排序函数 可以是函数，也可以是仿函数
//int main()
//{
//	int arr[10] = { 2,4,3,1,5,9,7,6,8,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, arr + 10);
//	//sort(arr, arr + len);
//	for (auto& e : arr)
//	{
//		cout << e << ' ';
//	}
//	cout << endl;
//	//对字符串中的字符进⾏排序
//	//这⾥是对字符串中字符的顺序进⾏排序，是按照字符的ASCII值进⾏排序的
//	string s("defxxxabccba");
//	sort(s.begin(), s.end());
//	cout << s << endl;
//	return 0;
//}
//int main()
//{
//	string s = "defhsjfhiuuyyiooi";
//	sort(s.begin(), s.end());//s有迭代器
//	//记住默认是升序
//	cout << s << endl;
//	return 0;
//}
//sort 的第三个参数是⼀个可选的⾃定义⽐较函数（或函数对象），⽤于指定排序的规则
//如果不提供这个参数， std::sort 默认会使⽤⼩于运算符(< ) 来⽐较元素，并按照升序排序
//这个⽐较函数，接受两个参数，并返回⼀个布尔值
//如果第⼀个参数应该排在第⼆个参数之前，则返回 true；否则返回 false
//两种方法
//第一种创建比较函数
//第二种结构体重载()运算符-仿函数

//法一:构造比较函数
//bool comp(int x, int y)
//{
//	return x > y;//降序
//	//口诀: 小生(升) 大降
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, arr + size, comp);
//	for (auto& e : arr)
//	{
//		cout << e << ' ';//降序输出
//	}
//	cout << endl;
//	return 0;
//}

//法二:结构体重载()运算符-仿函数
//关于仿函数、操作符重载，要深⼊学习C++，竞赛中涉及的较少、也⽐较浅，会⽤就⾏
//struct Cmp
//{
//	bool operator()(int x, int y)
//	{
//		//return x > y;//降序
//		return x < y;//升序
//	}
//}cmp;
//int main()
//{
//	int arr[] = { 2,5,4,3,1,6,8,9,7,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, arr + sz, cmp);
//	for (auto& e : arr)
//	{
//		cout << e << ' ';
//	}
//	cout << endl;
//	return 0;
//}

//结构体排序
//struct s
//{
//	string name;
//	int age;
//};
//创建函数的方式
//bool cmp_s_by_name(s s1, s s2)
//{
//	return s1.name < s2.name;//小升
//}
//bool cmp_s_by_age(s& s1, s& s2)
//{
//	return s1.age > s2.age;//大降
//}
//按照仿函数的方式
//struct Cmp
//{
//	bool operator()(s s1, s s2)//重载这个括号
//	{
//		//return s1.name > s2.name;//降序
//		return s1.name < s2.name;//升序
//	}
//}cmp;
//struct Cmp
//{
//	bool operator()(s& s1, s& s2)//重载这个括号
//	{
//		return s1.age > s2.age;//降序
//		//return s1.age < s2.age;//升序
//	}
//}cmp;
//int main()
//{
//	s arr[3] = { {"b",19} ,{"a",12}, {"c",23} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//sort(arr, arr + sz, cmp_s_by_name);
//	sort(arr, arr + sz, cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i].name << ":" << arr[i].age << endl;
//	}
//	return 0;
//}

//struct S
//{
//	string name;
//	int age;
//};
//bool cmp_s_by_age(const struct S& s1, S& s2)//const struct可以不加
//{
//	return s1.age > s2.age; //按年龄降序
//}
//bool cmp_s_by_name(const struct S& s1, const struct S& s2)
//{
//	return s1.name > s2.name;//按名字降序
//}
////测试⾃定义⽐较函数
//void test1()
//{
//	struct S s[3] = { {"zhangsan", 20}, {"lisi", 25}, {"wangwu", 18} };
//	sort(s, s + 3, cmp_s_by_age);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		cout << s[i].name << " " << s[i].age << endl;
//	}
//}
//struct CmpByNameLess
//{
//	bool operator()(const struct S& s1, const struct S& s2)
//	{
//		return s1.name < s2.name; //按照名字升序
//	}
//};
//struct CmpByAgeGreater
//{
//	bool operator()(const struct S& s1, const struct S& s2)
//	{
//		return s1.age > s2.age; //按照年龄降序
//	}
//};
////测试结构中重载()运算符实现⽐较
//void test2()
//{
//	struct S s[3] = { {"zhangsan", 20}, {"lisi", 25}, {"wangwu", 18} };
//	sort(s, s + 3, CmpByNameLess());
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		cout << s[i].name << " " << s[i].age << endl;
//	}
//}
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}

//类和结构体的比较
//C++中为了更好的实现⾯向对象，更喜欢使⽤ class (类)来替换 struct (结构体)
//你可以简单粗暴的理解为 class 和 struct 是⼀回事，但是其实本上还是有区别的
//class 是⽤来定义类类型的关键字，在类中可以定义成员函数和成员变量。
//public 是类成员权限访问限定符，标志类中的成员可以公开访问及调⽤，访问限定符在后续内容中会介绍
//结构体默认public
//class tag
//{
//public:
//
//};
//class s
//{
//	//下面这些默认是私有的 private 的 所以需要手动设置成 public
//public:
//	string name;
//	int age;
//	int grage;
//};
//struct S
//{
//	//
//	string name;
//	int age;
//};
//class Stu
//{
//public:
//	//成员变量
//	string name;
//	int chinese;
//	int math;
//	int total;
//	//成员函数 ---->自定义
//	void init_stu()
//	{
//		name = "小明";
//		chinese = 90;
//		math = 98;
//		total = chinese + math;
//	}
//	//类也是默认有 构造函数 析构函数...
//};
////用类创建的变量也叫对象
//int main()
//{
//	Stu s1;
//	s1.init_stu();
//	s1.name = "明明";
//
//	return 0;
//}
//类有三种访问限定符 public private protected
//public ：成员被声明为 public 后，可以被该类的任何方法访问，包括在类的外部
//protected ：成员被声明为 protected 后，可以被该类访问(暂不介绍)
//private ：成员被声明为 private 后，只能被该类的成员函数访问
//class Stu
//{
//private:
//	//成员变量
//	string name;
//	int chinese;
//	int math;
//	int total;
//public:
//	//成员函数 ---->自定义
//	void init_stu()
//	{
//		name = "小明";
//		chinese = 90;
//		math = 98;
//		total = chinese + math;
//	}
//	//类也是默认有 构造函数 析构函数...
//};
//用类创建的变量也叫对象
//int main()
//{
//	Stu s1;
//	s1.init_stu();
//	//s1.name = "明明";//error
//	return 0;
//}
//习惯上，外部可访问的成员函数通常设置为公有属性（ public ），⽽为了提⾼成员变量的访问安全性
//通常将成员变量设置为私有属性（ private ），即只有类内部可以访问
//struct tag
//{
//private:
//	string name;
//public:
//	int age;
//	void init_tag()
//	{
//		name = "aaa";
//		age = 18;
//	}
//};
//int main()
//{
//	tag s;
//	s.init_tag();
//	s.age = 100;
//	cout << s.age << endl;
//	//cout << s.name << endl;//error
//	return 0;
//}

//重载+运算符号
//class Time
//{
//public:
//	int hours;      // 小时
//	int minutes;    // 分钟
//	Time()
//	{
//		hours = 0;
//		minutes = 0;
//	}
//	Time(int h, int m)
//	{
//		this->hours = h;
//		this->minutes = m;
//	}
//	void show()
//	{
//		cout << hours << " " << minutes << endl;
//	}
//	// write your code here......
//	Time operator+(Time& t)
//	{
//		Time ret;
//		ret.minutes = minutes + t.minutes;
//		ret.hours = hours + t.hours;
//		if (ret.minutes >= 60)
//		{
//			ret.hours += 1;
//			ret.minutes -= 60;
//		}
//		return ret;
//	}
//
//};
//int main()
//{
//	int h, m;
//	cin >> h;
//	cin >> m;
//	Time t1(h, m);
//	Time t2(2, 20);
//	//t1.operator+(t2)
//	Time t3 = t1 + t2;
//	t3.show();
//	return 0;
//}

//class Time {
//public:
//    int hours;      // 小时
//    int minutes;    // 分钟
//    Time() {
//        hours = 0;
//        minutes = 0;
//    }
//    Time(int h, int m) {
//        this->hours = h;
//        this->minutes = m;
//    }
//    void show() {
//        cout << hours << " " << minutes << endl;
//    }
//    //write your code here......
//    bool operator<(Time& t)
//    {
//        if (hours != t.hours)
//        {
//            return hours < t.hours;
//        }
//        else if (minutes != t.minutes)
//        {
//            return minutes < t.minutes;
//        }
//        else
//        {
//            return false;
//        }
//    }
//};
//int main() {
//    int h, m;
//    cin >> h;
//    cin >> m;
//    Time t1(h, m);
//    Time t2(6, 6);
//    //t1.operator<(t2)
//    if (t1 < t2)
//        cout << "yes";
//    else
//        cout << "no";
//    return 0;
//}

//C++中关于类和对象的知识，远不⽌这些，类和对象的相关知识，在算法竞赛很少使⽤，但是在真正的软件开发过程中⾮常重要
// C++的类和对象是C++⾯向对象思想重要组成体现，下来⼀定要深⼊学习和挖掘

//补充知识pair
//pair 是 C++ 标准库中的⼀个模板类，⽤于将两个值组合成⼀个单⼀对象，通常⽤于存储键值对或返回多个值
//它有两个公有成员 first 和 second ，分别表⽰第⼀个值和第⼆个值
//我们可以把 pair 理解成 C++ 为我们提供⼀个结构体，⾥⾯有两个变量
//struct pair
//{
//	type first;
//	type second;
//};
//使⽤的时候，可以指定 first 和 second 为我们想要的任意类型。
//指定的⽅式为 pair<第⼀个关键字的类型, 第⼆个关键字的类型>
//pair<int, int> p1; // 第⼀个 int，第⼆个 int
//pair<long long, int> p2; // 第⼀个 long long，第⼆个 int
//pair<string, int> p3; // 第⼀个 sting，第⼆个 int
//不过，⼀般使⽤ pair 的时候，上述⽅式要写很多代码，我们⼀般会 typedef ⼀下
//typedef pair<int, int> PII;
//PII p1;
//typedef pair<long long, long long> PLL;
//PLL p2;
//int main()
//{
//
//	return 0;
//}

//补充两个
//lower_bound(左,右,数)
//从左右两边地址寻找使得 数 能够有序插入的地址 并返回该插入的地方的地址 有多个地方可以插入就返回靠 左 边的地址
//upper_bound(左,右,数)
//从左右两边地址寻找使得 数 能够有序插入的地址 并返回该插入的地方的地址 有多个地方可以插入就返回靠 右 边的地址
//对同一个序列使用后 两个值相减就可以得到一些需要的东西
