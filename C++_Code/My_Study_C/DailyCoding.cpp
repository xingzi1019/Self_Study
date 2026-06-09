#define  _CRT_SECURE_NO_WARNINGS
//#include <assert.h>//assert
//#include <ctype.h>//islower isupper toupper tolower
//#include <math.h>
//#include <stdbool.h>
//#include <stdio.h>
//#include <stdlib.h>  // 包含srand()和rand()函数
//#include <string.h>
//#include <time.h> // 包含time()函数，用于获取系统时间
//#include <windows.h>//控制台
//#include <algorithm>
#include "Coding.h"

//以下为两个数四则运算需要调用的函数
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int Minus(int x, int y)
//{
//	int z = 0;
//	z = x - y;
//	return z;
//}
//
//int Time(int x, int y)
//{
//	int z = 0;
//	z = x * y;
//	return z;
//}
//
//int Divide(int x, int y)
//{
//	int z = 0;
//	z = x / y;
//	return z;
//}

//int main()
//{
//	int arr[] = { 10,11,12,13,14,15,16,17,18,19 };
//	arr[1];//访问的是下标
//	int i = 0;
//	while (i < 10)//用循环避免重复性低级敲打数字来实现数组的呈现
//	{
//
//		printf("%d\n",arr[i]);//emm....能懂吗？我不知道怎么解释
//		i=i+1;//i++就是i=i+1  懂？
//	}
//
//	/*printf("%d\n",arr[8]);*/
//
//
//
//
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;
//	printf("%d",r);
//
//
//
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while(i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0; 
//}
//void test()
//{
//
//	printf("hello world");
//	return 0;
// int a = 10;
//int b = 20;
//int z = ADD(a, b);
//printf("%d\n", z);
//return 0;
//}

//extern int ADD(int x, int y);
//
//int main()
//{
//	register int num = 3;
//	return 0;
//}
////要声明外部符号
//#define NUM 100

//#define ADD(x,y) (((x)(+)(y))
//int Add(int x, int y)
//{
//	return x + y;
//}
//int a = 10;
//int b = 20;
//int c = Add(a, b);
//printf("%d\n", c);
//
//int a = 10;
	////&a;
	////

//int main()
//{
	//int * p = &a;//p就是指针变量
	////printf("%p\n", &a);//000000253F5BFBA4 0000000E386FF834
	//return 0;

//}

/*void test(struct stu* ps)
{
	printf("%s %d %s %s\n",(*ps).name,);
}*/
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n",a);
//	return 0;
//}

/*struct stu
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};
print(struct stu* ps)
{
	printf("%s %d %s %s",(*ps).name,(*ps).age,(*ps).sex,(*ps).tele);
	printf("%s %d %s %s",ps->name,ps->age,ps->sex,ps->tele);
}
int main()
{
	struct stu s = { "zhangsan",20,"man","1885024615" };

	print(&s);
	return 0;
}*/

/*int a = 10;
if (a = 5)
	printf("hehe");*/
	/*int age = 20;
	if (age > 18)
		printf("成年");*/
		//int age = 20;
		//if (age > 18)
			//printf("成年");
		//else
			//printf("未成年");
	/*#include <stdio.h>
	int main()
	{
		int n = 0;
		char s = 0;
		scanf("%d\n%s", &n, &s);
		char m = 0;
		if ()
			printf("%s", m);
		return 0;
	}*/




	//int main()
	//{
	//
	//	if ()
	//	{
	//
	//	}
	//	else if ()
	//	{
	//
	//	}
	//	else()
	//	{
	//
	//	}
	//	return 0;
	//}
	/*int main()
	{
		int a = 0;
		int b = 2;
		if (a == 1)
		{
			if (b == 2)
				printf("hehe\n");
			else
				printf("haha\n");
		}
		return 0;
	}*/
	//int test()
	//{
	//	int a = 4;
	//	if (a == 3)
	//		return 1;
	//	 else return 0;
	//}
	//int main()
	//{
	//	int r = test();
	//	printf("%d\n",r);
	//	return 0;
	//}
	//
	//int main()
	//{
	//
	//	int num = 0;
	//
	//	scanf("%d",&num);
	//		if (num%2==1)
	//		{
	//			printf("是奇数");
	//		}
	//		else
	//		{
	//			printf("是偶数");
	//		}
	//	return 0;
	//}
	//生成1-100的奇数     如下
	//int main()
	//{
	//	int a = 0;
	//	while (a<101)
	//	{
	//		if (a % 2 == 1)
	//		{
	//			printf("%d\n", a);
	//		}
	//		a++;
	//	}
	//	
	//
	//
	//	return 0;
	//}
	//int main()
	//{
	//
	//	return 0;
	//}
	//多个case可以匹配同个语句
	/*int main()
	{
		int n = 0;
		scanf("%d",&n);
		switch (n)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("weekday");
		case 6:
			printf("weekend\n");
			break;
		case 7:
			printf("weekend\n");
			break;
		default:
			printf("选择错误");
			break;
		}

		return 0;
	}*/
	/*int main()
	{
		int n = 1;
		int m = 2;
		switch (n)
		{
		case 1: m++;//别忘记没有break的话case会继续执行
		case 2: n++;
		case 3:
			switch (n)//switch是可以嵌套的
			{
			case 1:n++;
			case 2:m++; n++;
				break;

			}
		case 4:m++;
			break;
		default:
			break;
		}
		printf("m = %d,n = %d\n",m,n);
		return 0;
	}*/
	//int main()
	//{
	//	int i = 0;
	//	if (i <= 20)
	//	{
	//		while (i<=20)
	//		{
	//			printf("love\n");
	//			i++;
	//
	//		}
	//	}
	//	else
	//	{
	//		printf("等天晴");
	//	}
	//
	//	return 0;
	//}
	//int main()
	//{
	//	int a = 1;
	//	while (a<=10)
	//	{
	//		a++;
	//		if (5 == a)
	//		{
	//			continue;//break;//这里break直接跳出while 不止跳出if
	//		}
	//		printf("%d\n",a);
	//	}
	//
	//	return 0;
	//}
	/*int main()
	{
		*///int ch = getchar();//getchar获取字符 获取的是acsii码值 故用int
		//printf("%c\n",ch);//1
		//putchar(ch);//2
		//return 0;
	//	int ch = 0;
	//	while ((ch = getchar()) != EOF)
	//	{
	//
	//		putchar(ch);//ctrl z来终止
	//
	//	}
	//
	//		return 0;
	//
	//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("输入密码:");
//	scanf("%s",password);//scanf遇到空格会停止
//	//getchar();  //可以监视一下password和ch来理解getchar
//	int ch = 0;
//	while ((ch=getchar())!='\n')//这个\n和我们输入时按下的回车有关系
//	{
//		;
//	}
//	printf("请确认密码（Y/N）");
//	int yuting = getchar();
//	if (yuting =='Y')//建议写成'Y'==ret 书写习惯
//	{
//		printf("ok");					//EOF的意义
//	}
//	else
//	{
//		printf("try again");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	int  t,h, m, s;  //变量t用于存储输入的总秒数
//	scanf("%d",&t);
//	s =t % 60;  //秒
//	m =t % 3600 / 60;  //分
//	h =t / 3600;  //时
//	printf("% d: % d : % d",h,m,s); // 时分秒之间用英文冒号 间隔
//	return 0;
//}
//long main()
//{
//
//	return 0;

//int main()
//{
//
//	return 0;
//}

//int main()
//{
//	double r, s;
//	scanf("r=%.1f", &r);
//	s = 3.14 * r * r;
//	printf("s=%.2f", s);
//	return 0;
//}
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);//只打印数字字符
//	}
//	return 0;
//}
//这段C语言代码的功能是从标准输入（通常是键盘）读取字符，并只输出其中的数字字符（0 - 9），忽略所有非数字字符。
//
//代码的具体解释如下：
//
//1. 首先定义了一个字符变量`ch`并初始化为空字符`'\0'`
//
//2. while ((ch = getchar()) != EOF)是一个循环，功能是：
//- 使用`getchar()`函数从标准输入读取一个字符
//- 将读取到的字符赋值给`ch`
//- 判断是否读取到了文件结束符`EOF`（在Windows系统中通常通过Ctrl + Z输入，
// 在Unix / Linux系统中通常通过Ctrl + D输入）
//- 如果没有读取到`EOF`，则继续循环
//
//3. 循环体内的`if (ch < '0' || ch > '9') continue; `表示：
//- 检查当前字符是否不是数字字符（即ASCII值小于'0'或大于'9'）
//- 如果不是数字字符，则执行`continue`跳过本次循环的剩余部分，直接进入下一次循环
//
//4. `putchar(ch); `表示如果是数字字符，则将该字符输出到标准输出（通常是屏幕）
//
//5. 当读取到`EOF`时，循环结束，程序返回0表示正常退出
//
//简单来说，这段程序的作用是过滤输入中的非数字字符，只保留并输出数字。
// 例如，如果输入"abc123def456"，程序会输出"123456"。
//}

//int main()
//{
//	int arr[] = { 12,34,45,12,65,65 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//		while (i<sz)
//		{
//			printf("%c",arr[i]);
//			i++;
//		}
//	return 0;
//}
//这段C语言代码的主要功能是尝试将一个整型数组中的元素作为字符输出到屏幕上。让我们逐部分解释：
//1. 首先定义了一个整型数组`arr`，并初始化了一组整数：`{12, 34, 45, 12, 65, 65}`
//2. 定义了整型变量`i`并初始化为0，用于数组的索引
//3. `int sz = sizeof(arr) / sizeof(arr[0])`这行代码用于计算数组的长度：
//- `sizeof(arr)`计算整个数组在内存中占用的字节数
//- `sizeof(arr[0])`计算数组中单个元素占用的字节数
//- 两者相除得到数组元素的个数（此例中结果为6）
//4. `while (i < sz)`是一个循环，遍历整个数组：
//	- 循环条件是`i`小于数组长度`sz`
//	- 循环体内使用`printf("%c", arr[i])`尝试将数组元素作为字符输出
//	- 每次循环结束后，`i`自增1，移动到下一个元素
//	5. 循环结束后，程序返回0表示正常退出
//	需要注意的是，这段代码存在一个逻辑问题：
//	数组中存储的是整数（如12、34等），但代码使用`%c`格式符将其作为字符输出。`%c`会将整数解释为ASCII码值，然后输出对应的字符。
//	在ASCII码中：
//	- 12 对应垂直制表符（不可见字符）
//	- 34 对应双引号 `"`
//	- 45 对应减号 `-`
//	- 65 对应大写字母 `A`
//	所以这段程序的实际输出会是：`" - AA`（其中第一个字符是不可见的垂直制表符）

//int main()
//{              //20061019
//	int year = 0;
//	int month = 00;
//	int day = 00;
//	scanf("%4d%2d%2d",&year,&month,&day);//格式字符串 "%4d%2d%2d" 的含义：
//	/*% 4d：表示读取一个整数（d 是整数格式符），且限定读取宽度为 4 个字符，将其赋值给 year 变量。
//		% 2d：表示读取一个整数，限定宽度为 2 个字符，将其赋值给 month 变量。
//		第二个 % 2d：同样读取宽度为 2 个字符的整数，赋值给 day 变量。*/
//	printf("%4d\n%d\n%d\n",year,month,day);
//	printf("year=%04d\n",year);//%2d输出的是空格 2但%02d输出的是02
//	printf("month=%02d\n",month);//注意这种写法可以补充0 比如06 上面只能打印6 而这里可以打印06
//	printf("day=%02d\n",day);//一种新的细节写法
//	return 0;				//就是指定域宽来输入和输出
//}

//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float chinese = 0.0f;
//	double english = 0.0l;
//	scanf_s("%d,%f,%f,%lf",&id,&c,&chinese,&english);
//	printf("%d\n%.2f\n%.2f\n%.2lf\n",id,c,chinese,english);
//	return 0;
//}
//int main()
//{
//
//	int n=printf("Hello world!");
//	printf("\n%d\n",n);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		printf("%d\n",i);
//		i++;
//	}
//
//
//	return 0;
//}
// 
//int main()
//{
//	int i = 0;
//	for (i=1;i<=10;i++)//（初始化部分；条件判断语句；调整部分）
//	{
//		if (i == 5)
//		{
//			continue;//while和for的break都是直接跳出循环//continue同理 回到循环开始时 直接跳过5
//		}//break只会结束自己所在那一层的循环
//		printf("%d\n",i);
//		//printf("%d\n",i+1);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//区间一般写的前闭后开
//	{
//		printf("%d\n", arr[i]);
//		//if (i>7)
//		//{
//			//break;
//		//}
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)//for的判断如果省略 那么判断条件恒成立
//		printf("hehe");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i=0;i<10;i++)
//	{
//		for (j=0;j<10;j++)
//		{//							看重点
//			printf("hehe\n");//注意此处嵌套for执行完这里的10次才会回到外面那一层的循环
//		}//					也就是说j从0到9后外面那一层for才算执行了一次 i才会增加1
//	}//						但是出去了里面那一层for后j还是从0开始
//	//						故一共要执行10*10次 打印100个hehe
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (;i<3;i++)
//	{
//		for (;j<3;j++)
//		{
//			printf("hehe\n"); 
//		}//第二次进来里面for时j并没有变成0而是保留上一次刚跳出里层for那时的值
//	}// 故后面第二次并不会进入到里层就i++了 故i=2和i=3时并不会打印任何东西
//	//总之不要随便省略初始化
//	return 0;//for可以多个变量一起控制
//}
//				计算n的阶乘 n！
//int main()
//{
//	long i = 1;
//	long n = 0;
//	long ret = 1;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d",ret);
//	return 0;
//}\
//					计算1！+2！+3！+4！+.......+n!
//int main()
//{
//	long i = 1;
//	long n = 0;
//	long ret = 1;
//	long sum = 0;
//	scanf("%d", &n);
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//	     sum = sum + ret;
//	}
//	printf("%ld",sum);
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int ret = 0;
//	int sum = 0;
//	scanf("%d",&n);
//	for (n = 1; n <= 3; n++)//错了这一块
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d",sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("下标是%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//int main()
//{
//	int a,n;
//	scanf("%d",&n);
//	for (a = 0; a < n; a++)
//	{
//
//	}
//	return 0;
//}
//int main()															//二分法
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	while (left<=right)
//	{
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("sorry找不到");
//	}
//	return 0;
//}
//int main()
//{
//	printf("1\n");
//	printf("1\n");
//	printf("1\n");
//	printf("1\n");
//	printf("1\n");
//	printf("1\n");
//	printf("1\n"); 
//	printf("1\n"); 
//	printf("1\n");
//	return 0;
//}
//void swap1(int x, int y)//这里的xy叫做形参
//{
//	int z = 0;
//	z = x;//x放到z里面x就空了
//	x = y;//所以把y放进x里面 y就空了
//	y = z;//这里吧z放进y里面
//}
//当实参传递形参的时候，形参是实参的一种拷贝
//对形参的修改不能改变实参  故swap那个函数失效

//好好理解下面函数模板和指针的运用    非常基础的语法理解
//void swap2(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	//int c = Add(a, b);//这里无法改变a和b的值 只能传输a和b的值到Add函数当中
//	//printf("%d\n",c);
//	printf("交换前a=%d b=%d",a,b);
//	//下面的ab叫做实参
//	swap1(a, b);//													传值调用
//	swap2(&a,&b);//当需要改变传入值本身时才需要传入指针，否则不然		传址调用
//	printf("交换后a=%d b=%d",a,b);//对实参进行需要指针
//	return 0;
//}
 //		形参实例化之后其实相当于实参的一份临时拷贝

															 //非常牛逼的打印某个范围内的素数的一个方法
//用到了for和if语句
//此为第一个版本
//int main()//打印100-200之间的素数
//{
//	int i = 0;
//	int count = 0;
//	for (i=100;i<=200;i++)//产生100-200之间的数
//	{
//		//判断i是否为素数(只能被一和它本身整除)2到i-1
//		int flag = 1;
//		int j = 0;
//		for (j=2;j<i-1;j++)// 这里是核心 拿2到i-1的数字去作为除数若不能整除则为素数
//		{
//			if (i%j==0)
//			{
//				flag = 0;
//				break;//这里的break直接跳出里面的这层for循环
//
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("总共有%d个素数",count);
//	return 0;
//}

															 //以下为优化后的第二个版本
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//m=a*b
//		//16=2*8
//		//a和b当中一定有一个数是 <= sqrt(m)的 依此逻辑可以优化代码
//		//比如103只需找2-10
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)//sqrt是开平方 减少循环次数
//		{							 //sqrt是数据库函数 要引入一个头文件#include <math.h>
//			if (i % j == 0)
//			{				
//				flag = 0;				
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("总共有%d个素数", count);
//	return 0;
//}

															 //以下为第三个版本
//int is_prime(int n)//是素数返回1 不是素数返回0  //0为假 非0为真
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}//函数的核心逻辑是通过循环检查 2 到 sqrt(n) 之间的数是否能整除 n
////如果在循环中找到任何一个能整除 n 的数（即 n% j == 0），说明 n 不是素数，会执行 return 0; 提前退出函数
////如果循环完整执行结束（没有找到任何能整除 n 的数），则说明 n 是素数，此时执行 return 1; ，将结果 1 返回给调用者
////return 会直接退出自己所在的函数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++ )
//	{
//		if (is_prime(i))
//		{
//			printf("%d\n", i);
//			count = count + 1;
//		}
//	}
//	printf("\n总共有%d个素数", count);
//	return 0;
//}

															 //写一个函数判断一年是不是闰年
//int panduan(int year)
//{
//	if (year % 4 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	int result = panduan(year);
//	if (result == 1)
//	{
//		printf("%d年是闰年", year);
//	}
//	else
//	{
//		printf("%d不是闰年", year);
//	}
//	return 0;
//}

															 //打印1000-2000之间的闰年
//int yuting(int i)
//{
//	if (i%4==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i = 1000;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (yuting(i))//非0为真 所以上面要返回1
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("总共有%d个闰年",count);
//	return 0;
//}

//整形数组二分查找              函数尽量 高内聚 低耦合			 非常精辟的二分法查找 可以多加复习
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		/*当查找范围是 [left, right]（左闭右闭区间）时，mid 就是这个区间的正中间位置
//后续会根据 arr[mid] 与目标值 k 的大小关系，调整 left 或 right 来缩小范围
//2. 计算逻辑解析
//这行代码的本质是计算 left 和 right 的中间值，我们可以拆解为：
//(right - left)：先计算当前查找范围的长度（右边界与左边界的差值）
//(right - left) / 2：取范围长度的一半，得到从 left 到中间位置的距离
//left + ...：以 left 为起点，加上上述距离，得到中间位置 mid*/
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了返回下标
//		}
//	}
//	return -1;//找不到
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("请输入要查找的数(1-10) 我将为它找到其在数组中的下标\n");
//	int k = 7;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*1. 核心原理
//这行代码通过总字节数除以单个元素字节数，得到数组中元素的数量，公式为：数组元素个数 = 数组总字节大小 / 单个元素字节大小
//2. 各部分解析
//sizeof(arr)sizeof 是 C 语言的一个运算符，用于计算变量 / 类型所占用的字节数。当 arr 是数组名时，sizeof(arr) 计算的是整个数组所占用的总字节数。
//例如代码中的 arr[] = {1,2,3,4,5,6,7,8,9,10} 是 int 类型数组，假设在 32 位或 64 位系统中，int 类型占 4 字节，那么：sizeof(arr) = 10个元素 × 4字节/元素 = 40字节
//sizeof(arr[0])arr[0] 表示数组的第一个元素，sizeof(arr[0]) 计算的是单个元素所占用的字节数。
//由于数组中所有元素类型相同，单个元素的字节数是固定的。*/
////找到了 返回下标
////没找到 返回-1
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//}

//											以下是错误的示范 有助于理解数组的传参    注意和上面的来对比

//int binary_search(int arr[], int k)//这里的int arr[]实际上和int *arr是等价的  解释如下
////c语言中，数组名作为参数传递给函数时，退化为指针
///*数组作为子函数参数时退化为指针，指针中不包含数组的长度信息
//数组传参实际上传递的是首元素的地址而不是整个数组 
//所以在一个函数的内部计算一个函数参数部分的数组的元素是不靠谱的*/
//{
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0])
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("请输入要查找的数(1-10) 我将为它找到其在数组中的下标\n");
//	int k = 7;
//	scanf("%d", &k);
//	int ret = binary_search(arr, k);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//}
//											了解bool类型
//#include <stdbool.h>//需要引入的头文件
//bool is_prime(int n)//是素数返回1 不是素数返回0  //0为假 非0为真
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return false;//这里的false就是0
//		}
//	}
//	return true;//这里true就是真
//}
//int main()
//{
//	int i = 0;
//	for (i=100;i<=200;i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d\n",i);
//		}
//
//	}
//	return 0;
//}

//						写一个函数每次调用这个函数 sum就会增加1
//yuting(int* p)
//{
//	(*p)++;//通过指针里边存的地址找到外部的变量 从而对它进行相关的修改
//}
//int main()
//{
//	int num = 0;
//	yuting(&num);
//	printf("%d\n",num);//1
//	yuting(&num);
//	printf("%d\n", num);//2
//	yuting(&num);
//	printf("%d\n", num);//3
//	yuting(&num);
//	printf("%d\n", num);//4
//	return 0;
//}
//										函数的嵌套调用
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i=0;i<3;i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n",len);
//	//printf("%d\n",strlen("abcde"));//链式访问
//	printf("%d",printf("%d",printf("%d",43)));//printf返回的是打印的字符数43是两个返回2 2是一个字符 返回1
//	//											故终端输出为4321
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (i = 0;i<sz;i++)
//	{
//		printf("&arr[%d] = %p\n",i,&arr[i]);
///*              &arr[0] = 008FF954
//				&arr[1] = 008FF958
//				&arr[2] = 008FF95C
//				&arr[3] = 008FF960
//				&arr[4] = 008FF964
//				&arr[5] = 008FF968
//				&arr[6] = 008FF96C
//				&arr[7] = 008FF970
//				&arr[8] = 008FF974
//				&arr[9] = 008FF978
//*/
//	}
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	for (i = sz - 1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	return 0;
//}
//										二维数组
//1 2 3 4
//2 3 4 5
//3 4 5 6
//int main(void)
//{
//	int arr0[] = { 1,2,3,4,5,6 };
//	int arr1[3][4]/*行列*/ = {{1,2},{3,4},{5,6}};//不够的还是会默认为0
//	int arr2[][4] = { {1,2,3,4} ,{ 1,2,2,4 },{1,2} };// 行数可以不明确 但列数必须明确
//	//char arr2[5][10];
//
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d ",&arr[i][j]);
//		}
//		
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);//通过下标来访问数组
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
//	int i = 0;
//	
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i,j,&arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i <= 8; i++)
//	{
//		printf("%d ", arr[i]);//数组越界编译器不会报错 但自己要检查
//	}
//	return 0;
//}
//							此为一个二维数组的越界（以后尽量把不要去与越界）
//int main()
//{
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int i = 0;
//	
//	for (i=0;i<3;i++)
//	{
//		int j = 0;
//		for (j=0;j<=4;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//数组传参时，形参有两种写法
//1,数组
//2,指针
//形参是数组的形式
//void bubble_sort(int arr[], int sz)//这里的int arr[]传进来是首元素的地址
//{
//	//需要n-1趟                  冒泡排序
//	//int sz = sizeof(arr) / sizeof(arr[0]);//这里的arr看似是数组，本质是指针变量，所以这里的sz算出来是1
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	//			  1,2,3,4,5,6,7,8,9,10
//	//冒泡排序的算法，对数组进行排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//										一维数组的数组名的理解
/*数组名确实能表示首元素的地址
但是有两个例外
1.sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
除了这两种例外其他情况数组名就首元素的地址*/
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);//arr就是首元素的地址
//	printf("%p\n", arr + 1);
//	printf("-----------------------------\n");
//	printf("%p\n", &arr[0]);//首元素的地址
//	printf("%p\n", &arr[0] + 1);
//	printf("-----------------------------\n");
//	printf("%p\n", &arr);//数组的地址
//	printf("%p\n", &arr+1);
//	printf("-----------------------------\n");
//	int n = sizeof(arr);
//	printf("%d ", n);
//	return 0;
//}
//										二维数组数组名的理解
//int main()
//{
//	int arr[3][4];
//	/*int sz = sizeof(arr);
//	printf("%d ",sz);*/
//	arr;//二维数组的数组名表示二维数组首元素（第一行）的地址  是一整行
//	printf("%d\n",arr);
//	printf("%d\n",arr + 1);
//	int sz1 = sizeof(arr) / sizeof(arr[0]);//3 行
//	printf("%d\n",sz1);
//	int sz2 = sizeof(arr[0]) / sizeof(arr[0][0]);//4 列
//	printf("%d\n",sz2);
//	/*arr[0] 的含义
//	arr[0] 表示二维数组的第 0 行，它本身是一个一维数组（包含 4 个 int 元素）。
//sizeof(arr[0]) 的计算
//这表示计算「第 0 行」这个一维数组所占用的总字节数。
//由于每个 int 元素占 4 字节（假设系统中 int 为 4 字节），
//4 个元素的总字节数为：4 个元素 × 4 字节/元素 = 16 字节。
//sizeof(arr[0][0]) 的计算
//arr[0][0] 表示二维数组第 0 行第 0 列的元素（是一个 int 类型的值）。
//因此 sizeof(arr[0][0]) 就是一个 int 类型的字节数，即 4 字节。
//最终结果两者相除：16 字节 ÷ 4 字节 = 4，正好是二维数组的列数。
//总结：
//sizeof(arr[0]) 得到「一行元素的总字节数」
//sizeof(arr[0][0]) 得到「一个元素的字节数」
//两者相除，本质是「一行的总字节数 ÷ 一个元素的字节数 = 一行的元素个数」，也就是二维数组的列数。
//这种计算方式的前提是：必须是真正的二维数组（如 int arr[3][4]），
//而不能是指向指针的指针（如动态分配的二维数组），因为后者无法通过 sizeof 正确获取行数和列数。*/
//	return 0;
//}
/*
在 C 语言中，这三个函数配合使用，核心作用是生成随机数，具体含义如下：
rand()：     核心随机数生成函数，每次调用返回一个 0 到RAND_MAX（通常是 32767）之间的整数，
但它生成的是 “伪随机数”—— 若不做处理，每次程序运行都会得到完全相同的序列。
srand(unsigned int seed)：“随机数种子初始化函数”，用于给rand()设置 “起点”（seed）。
rand()       会根据这个起点按固定算法生成序列，不同种子对应不同序列，相同种子则序列完全一致。
time(NULL)： 获取当前系统时间的函数，返回从 “1970 年 1 月 1 日 00:00:00” 到现在的秒数（即 Unix 时间戳）
，结果是time_t类型，强制转换后可作为srand()的种子。由于时间每秒都在变，
用它做种子能让每次程序运行的起点都不同，从而生成真正 “看起来随机” 的序列。*/


//int main()
//{
//	// 1. 初始化随机数种子：用当前时间确保每次运行种子不同，避免重复序列
//	// 强制转换time_t类型为unsigned int，匹配srand()的参数要求
//	srand((unsigned int)time(NULL));
//
//	// 2. 生成1-100的随机数：核心公式为 [min, max] = rand() % (max - min + 1) + min
//	// 此处max=100，min=1，计算后即为 rand()%100 + 1，确保结果落在1到100之间
//	int random_num = rand() % 100 + 1;
//
//	// 3. 打印结果
//	printf("生成的1-100之间的随机数：%d\n", random_num);
//
//	return 0;
//}
//int find(arr, k, sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		left++;
//		if (left == k)
//		{
//			return left-1;
//		}
//	}
//	if (left!=k)
//	{
//		return 0;
//	}
//	return -1;
//}
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	scanf("%d",&k);
//	int ret = find(arr, k, sz);
//	if (ret != -1)
//	{
//		printf("要查找的数的下标是%d\n", ret);
//	}
//	else
//	{
//		printf("找不到要查找的数的下标\n");
//	}
//	return 0;
//}
//								从两边向中间覆盖呈现一串字符
//int main()
//{
//	char arr1[] = "welcome to Cloud Stack Dream-Building Team!!!!\n";
//	char arr2[] = "##############################################\n";//注意字符串末尾有个\0
//	int right = strlen(arr1) - 1;
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0])-2;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s",arr2);
//		Sleep(300);//注意S要大写
//		//清空屏幕
//		system("cls");//system是一个库函数，可以执行系统命令
//	}
//	printf("%s",arr2);
//
//	return 0;
//}
//                             函数递归   鹏哥46集  
//递				只递不归会栈溢出    每一次函数的调用都会在栈区申请空间			
//归                   
/*函数递归（Recursion）是指一个函数直接或间接调用自身的编程技术。
通过递归，我们可以将复杂问题分解为规模更小的同类问题，从而简化代码实现。
递归的基本构成要素：
递归调用：函数在自身定义中调用自己
终止条件：必须存在一个或多个条件，当满足时递归不再继续（避免无限递归）
递归函数的基本结构
把大事化小*/
//int main(void)
//{
//	unsigned int num = 0;//无符号整数 无符号整数的取值范围只能是非负整数（0 及正数）
//	scanf("%u", &num);//1234
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num = num / 10;
//	}
//	return 0;
//}
//void print(unsigned int n)
//{
//	//print(1234)
//	//print(123)4
//	//print(12)3 4
//	//print(1)2 3 4
//	//1 2 3 4
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n%10);
//
//}
//int main(void)
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);//接受一个整型值（无符号），按照顺序打印他的每一位
//	return 0;
//}
//递归的条件： 递归不能是死递归 要存在限制条件 每次的递归要越来越接近这个限制条件
//编写函数不允许创建临时变量，求字符串的长度
//模拟实现strlen
//int my_strlen(char str[])参数部分写成数组的形式
//int my_strlen(char*str)//参数部分写成指针的形式
//{
//	int count = 0;//计数 临时变量
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//my_strlen(char*str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//		return 0;
//}
////my_strlen("abc");
////1+my_strlen("bc");
////1+1+my_strlen("c");
////1+1+1+my_strlen(" ");
////1+1+1+0
//int main()
//{
//	char arr[] = "abcd";
//	scanf("%s", &arr);
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}
//int main()
//{
//	printf("\n\n\n");
//	printf("    ==================================================\n");
//	printf("    |                                                |\n");
//	printf("    |                恭喜获胜！                      |\n");
//	printf("    |                                                |\n");
//	printf("    |               五子棋游戏胜利界面               |\n");
//	printf("    |                                                |\n");
//	printf("    |                   ╭━━━━━━╮                     |\n");
//	printf("    |                   ┃ WIN  ┃                     |\n");
//	printf("    |                   ╰━━━━━━╯                     |\n");
//	printf("    |                                                |\n");
//	printf("    |           恭喜你完成了五子连珠！               |\n");
//	printf("    |           展现了出色的策略思维！               |\n");
//	printf("    |                                                |\n");
//	printf("    ==================================================\n");
//}
//求n的阶乘
//n=1时 =1
//n>1时 =fac(n-1)
//法一：递归
//long long fac(unsigned int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//long long main(void)
//{
//	unsigned int n;
//	scanf("%d", &n);
//	long long len = fac(n);
//	printf("%d\n", len);
//	return 0;
//}
//法二：迭代(非递归实现)
 /*int diedai(int n)
{
	int i = 0;
	 int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	return ret;
}
int main(void)
{
	 int n;
	scanf("%d", &n);
	 int ret = diedai(n);
	printf("%u\n", ret);
	return 0;
}*/
//求第n个斐波那契的数字大小 1 1 2 3 5 8 13 21 34 55
//用递归会重复计算很多次
//int count = 0;
//int feibo(int n)
//{
//	if (n==3)
//		count++;
//	if (n<=2)
//	{
//		return 1;
//	}
//	else
//	{
//		return feibo(n - 1) + feibo(n - 2);
//	}
//}
//int main(void)
//{
//	int n;
//	scanf("%d",&n);
//	int ret = feibo(n);
//	printf("%d\n",ret);
//	printf("%d\n",count);
//	return 0;
//}
//用迭代来实现尝试看看(速度比递归快很多)      1 1 2 3 5 8 13 21 34 55
//int feibo(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		while (n >= 3)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//	}
//	return c;
//}
//int main(void)
//{
//	int n;
//	scanf("%d",&n);
//	int ret = feibo(n);
//	printf("%d\n",ret);
//	return 0;
//}
//void test(int n)
//{
//	if (n < 10000)
//		test(n+1);
//}
//int main()
//{
//	test(1);
//	return 0;
//}
//int chazhao(int k, int sz, int arr[])
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = left + (right - left) / 2;
//	if (arr[mid] < k)
//	{
//		while (arr[mid] != k)
//		{
//			left = mid + 1;
//			mid++;
//		}
//		return left;
//	}
//	else if (arr[mid] > k)
//	{
//		while (arr[mid] != k)
//		{
//			right = mid - 1;
//			mid++;
//		}
//		return right;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	scanf("%d", &k);
//	if (k > 10 || k < 1)
//	{
//		printf("找不到");
//		return 0;
//	}
//	int n = chazhao(k, sz, arr);
//	if (n!=-1)
//	{
//		printf("找到了下标是%d", n);
//		return 0;
//	}
//	else
//	{
//		printf("找不到");
//		return 0;
//	}
//}
//猜数字小游戏
//电脑产生随机数(1~100)  反馈猜大或猜小了 直到猜对了才结束
//void Gamemenu()
//{
//	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
//	printf("@@@@@@@@@@@@  1.play   @@@@@@@@@@@\n");
//	printf("@@@@@@@@@@@@  2.exit   @@@@@@@@@@@\n");
//	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
//}
////0~RAND_MAX(0~32767)
//void Game()
//{
//	int guess = 0;
//	//RAND_MAX;
//	//srand((unsigned int)time(NULL));
//	//1.生成随机数
//	int ret = rand()%100+1;//生成随机数
//	printf("%d\n",ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//			Sleep(400);
//			system("cls");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//			Sleep(400);
//			system("cls");
//		}
//		else
//		{
//			printf("猜对了 恭喜!\n");
//			Sleep(600);
//			system("cls");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//NULL是空指针的意思 int *p+NULL;
//	do
//	{
//		Gamemenu();
//		printf("请输入选项(1~2):>");
//		printf("猜数字\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			system("cls");
//			Game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误 请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//                               goto语句 不能跨函数交流 适用于一次跳出两层或多层循环
//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}
//关机程序 
//1.电脑运行一分钟就关机 
//2.如果输入"我是猪"就取消关机
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在60s后关机\n如果输入“我是林臻龙的儿子”将终止关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是林臻龙的儿子") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;//也可以用循环来实现
//	}
//	return 0;
//}
//strcmp比较两个字符串大小
//int main()
//{
//	char arr1[20] = {0};
//	char arr2[] = "hello bit";
//	strcpy(arr1,arr2);//										strcpy(被换的,提供换的);
//	printf("%s\n",arr1);//hello bit
//	//memset
//	return 0;
//}
//int main()
//{
//	char arr[20] = "hello bit";
//	memset(arr,'x',5);//xxxxx bit
//	memset(arr+6,'y',3);//hello yyy     用下标
//	printf("%s\n",arr);//xxxxx yyy
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	a = 20;//直接改
//	*p = 30;//间接改
//	return 0;
//}
//							给定两个数 求这两个数的最大公约数
//法一
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i;
//	scanf("%d %d",&a,&b);
//	if (a < b)
//	{
//		for (i = a; i <= a; i--)
//		{
//			if (a % i == 0 && b % i == 0)
//			{
//				printf("%d\n", i);
//				break;
//			}
//		}
//	}
//	else if (a > b)
//	{
//		for (i = b; i <= b; i--)
//		{
//			if (a % i == 0 && b % i == 0)
//			{
//				printf("%d\n",i);
//				break;
//			}
//		}
//	}
//	else
//	{
//		printf("%d",a);
//	}
//	return 0;
//}
//								法二
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;
//	while (1)
//	{
//		if (a % min == 0 && b % min == 0)
//		{
//			break;
//		}
//		min--;
//	}
//	printf("%d\n",min);
//	return 0;
//}
//								法三：辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//  //24 % 18
//  //24 % 18  6
//  //18 %  6  0
//  //那么6就是了
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//1-1/2+1/3-1/4+1/5....+1/99-1/100;
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}
//求十个整数的最大值
//int main()
//{
//	int arr[10] = {21,2,73,14,75,46,37,28,99,10};
//  int j=0;
//  for(j=0;j<10;j++)
// {
//		scanf("%d",&arr[j]);
// }
//	//找最大值
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int max = arr[0];
//	for (i = 1; i <= sz-1; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n",max);
//	return 0;
//}
//						打印99乘法表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (j = 1; j <= 9; j++)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);//还可以%d*%d=%2d  左边的是左对齐(左对齐更好看) 注释的这个是右边对齐
//			/*if (i==j)
//			{
//				printf("\n");
//			}
//			count++;*/
//		}
//		printf("\n");//	这行与注释掉的代码二选一即可
//	}
//	//printf("\n%d",count);
//	return 0;
//}
//int a = 0;
//int b = 0;
//void test()
//{
//	a = 3;
//	b = 4;
//}
//int main()
//{
//	test();
//	printf("%d %d",a,b);
//	return 0;
//}
//void test(int* px, int* py)
//{
//	*px = 3;
//	*py = 4;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}
//int fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * fun(n + 1);
//}
//int main()
//{
//	int ret = fun(2);
//	printf("%d",ret);
//	return 0;
//} 
//递归实现字符串反向排序 不是逆序打印
//int main()
//{
//	char arr[] = "edcba";
//	int sz1 = strlen(arr);//strlen不会去算\0   sizeof会去算\0
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz2 - 2;//这里要求的是下标
//	while (left < right)
//	{
//		char t = arr[left];
//		arr[left] = arr[right];
//		arr[right] = t;
//		left++;
//		right--;
//	}
//	printf("%s\n",arr);
//	return 0;
//}
//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char* str)
//{
//	char tmp = *str;//1
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//2
//	*(str + len - 1) = '\0';//3
//	if (my_strlen(str+1)>=2)
//	{
//		reverse(str + 1);//4
//	}
//	*(str + len - 1) = tmp;//5
//}
//int main()
//{
//	char arr[] = "edcba";
//	int sz = my_strlen(arr);//strlen不会去算\0   sizeof会去算\0
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//void reverse(char arr[],int left,int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	if (left < right)
//	{
//		reverse(arr, left + 1, right - 1);
//	}
//}
//int main()
//{
//	char arr[] = "edcba";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	reverse(arr, left, right);
//	printf("%s\n", arr);
//	return 0;
//}
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//	return 0;
//}
// 递归实现n的k次方
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0/Pow(n,-k);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("n的k次方为%lf\n", ret);
//	return 0;
//}
//#include <math.h>  // 必须包含此头文件
//double pow(double x, double y);x的y次幂
//sizeof 是操作符 是用来计算变量(类型)所占内存空间的大小 单位是字节 不关注内存中存放的内容
//strlen 是一个库函数 是专门求字符串长度的 只能针对字符串 从参数给定的地址向后一直找\0 统计\0之前出现的字符串的个数
//将数组A中的内容和数组B中的内容进行交换 数组一样大
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
// 创建一个整形数组，完成对数组的操作
// 实现函数init()初始化数组为全0
// 实现print() 打印数组的每个元素
// 实现reverse() 函数完成数组元素的逆置
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//两个矩形排放所需最小矩形面积
// 计算两个数的最大值
//int max(int a, int b) {
//	return a > b ? a : b;
//}
//int main() {
//	int T;
//	scanf("%d", &T);
//	while (T--) {
//		int a, b, c, d;
//		scanf("%d %d %d %d", &a, &b, &c, &d);
//		int min_area = INT_MAX;
//		// 枚举第一个矩形的两种摆放方式：(a,b) 和 (b,a)
//		for (int r1w = a, r1h = b; ; r1w = b, r1h = a) {
//			// 枚举第二个矩形的两种摆放方式：(c,d) 和 (d,c)
//			for (int r2w = c, r2h = d; ; r2w = d, r2h = c) {
//				// 方式1：两个矩形并排
//				int len1 = r1w + r2w;
//				int wid1 = max(r1h, r2h);
//				int area1 = len1 * wid1;
//				// 方式2：两个矩形上下叠放
//				int len2 = max(r1w, r2w);
//				int wid2 = r1h + r2h;
//				int area2 = len2 * wid2;
//				// 取当前组合下的最小面积
//				int current_min = area1 < area2 ? area1 : area2;
//				if (current_min < min_area) {
//					min_area = current_min;
//				}
//				// 第二个矩形的两种摆放方式枚举一次后跳出
//				if (r2w == d && r2h == c) break;
//			}
//			// 第一个矩形的两种摆放方式枚举一次后跳出
//			if (r1w == b && r1h == a) break;
//		}
//		printf("%d\n", min_area);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <windows.h>
//
//// 颜色常量定义（Windows控制台颜色）
//#define RESET 7
//#define RED 12
//#define GREEN 10
//#define YELLOW 14
//#define BLUE 9
//#define MAGENTA 13
//#define CYAN 11
//#define WHITE 15
//#define BRIGHT_RED 12
//#define BRIGHT_GREEN 10
//#define BRIGHT_YELLOW 14
//#define BRIGHT_BLUE 9
//#define BRIGHT_MAGENTA 13
//#define BRIGHT_CYAN 11
//#define BRIGHT_WHITE 15
//#define BRIGHT_ORANGE 248
//
//// 设置控制台文本颜色
//void set_color(int color) {
//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(hConsole, color);
//}
//
//// 清除屏幕
//void clear_screen() {
//	system("cls");
//}
//
//// 移动光标位置（行, 列）- 确保位置精确
//void gotoxy(int row, int col) {
//	COORD coord;
//	coord.X = col;  // 列（水平位置）
//	coord.Y = row;  // 行（垂直位置）
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
//}
//
//// 随机颜色生成
//int random_color() {
//	switch (rand() % 6) {
//	case 0: return BRIGHT_RED;
//	case 1: return BRIGHT_GREEN;
//	case 2: return BRIGHT_YELLOW;
//	case 3: return BRIGHT_BLUE;
//	case 4: return BRIGHT_MAGENTA;
//	case 5: return BRIGHT_CYAN;
//	default: return BRIGHT_WHITE;
//	}
//}
//
//// 绘制装饰边框（固定宽度确保内容对齐）
//void draw_border() {
//	const int WIDTH = 70;  // 固定宽度，足够容纳所有内容
//	const int HEIGHT = 16; // 固定高度
//	set_color(CYAN);
//
//	// 顶部边框
//	gotoxy(0, 0);
//	printf("+");
//	for (int i = 0; i < WIDTH; i++) printf("-");
//	printf("+");
//
//	// 侧边边框
//	for (int i = 1; i < HEIGHT; i++) {
//		gotoxy(i, 0);
//		printf("|");
//		gotoxy(i, WIDTH + 1);
//		printf("|");
//	}
//
//	// 底部边框
//	gotoxy(HEIGHT, 0);
//	printf("+");
//	for (int i = 0; i < WIDTH; i++) printf("-");
//	printf("+");
//
//	set_color(RESET);
//}
//
//// 显示彩色生日快乐文字（精确对齐）
//void display_happy_birthday() {
//	// 统一长度的艺术字，确保对齐
//	const char* happy[] = {
//		"  H   H  AAAAA  PPPP   PPPP  Y   Y    ",
//		"  H   H  A   A  P   P  P   P   Y Y    ",
//		"  HHHHH  AAAAA  PPPP   PPPP     Y     ",
//		"  H   H  A   A  P      P        Y     ",
//		"  H   H  A   A  P      P       Y      "
//	};
//
//	const char* birthday[] = {
//		"  B   B  I     RRRR   TTTTT  H   H  DDDD  AAAAA  Y   Y  ",
//		"  B   B  I     R   R    T    H   H  D   D  A   A   Y Y   ",
//		"  B   B  I     RRRR     T    HHHHH  D   D  AAAAA     Y   ",
//		"  B   B  I     R   R    T    H   H  D   D  A   A     Y   ",
//		"  BBBBB  IIIII R   R    T    H   H  DDDD  A   A    Y    "
//	};
//
//	// 计算居中位置（边框宽度70，内容总长度约60，向左偏移5列居中）
//	const int START_COL = 5;
//	const int START_ROW = 3;
//
//	for (int i = 0; i < 5; i++) {
//		gotoxy(START_ROW + i, START_COL);  // 固定行偏移
//		set_color(random_color());
//		printf("%s", happy[i]);
//		set_color(random_color());
//		printf("%s", birthday[i]);  // 紧跟在happy后面，无额外空格
//		set_color(RESET);
//		Sleep(300);
//	}
//}
//
//// 绘制闪烁的蜡烛（居中对齐）
//void draw_candles() {
//	const int CANDLE_COL = 28;  // 计算居中列位置
//	const int FLAME_ROW = 9;    // 火焰行位置
//	const int BODY_ROW1 = 10;   // 蜡烛主体行1
//	const int BODY_ROW2 = 11;   // 蜡烛主体行2
//
//	// 蜡烛火焰（闪烁效果）
//	for (int i = 0; i < 3; i++) {
//		gotoxy(FLAME_ROW, CANDLE_COL);
//		set_color(BRIGHT_RED);    printf("●  ");
//		set_color(BRIGHT_YELLOW); printf("●  ");
//		set_color(BRIGHT_ORANGE); printf("●  ");
//		set_color(BRIGHT_YELLOW); printf("●  ");
//		set_color(BRIGHT_RED);    printf("●");
//		set_color(RESET);
//		fflush(stdout);
//		Sleep(300);
//
//		gotoxy(FLAME_ROW, CANDLE_COL);
//		printf("           ");  // 精确清除火焰（11个空格）
//		fflush(stdout);
//		Sleep(200);
//	}
//
//	// 蜡烛主体（与火焰对齐）
//	gotoxy(BODY_ROW1, CANDLE_COL);
//	set_color(WHITE);
//	printf("|  |  |  |  |");  // 每个蜡烛与火焰一一对应
//	gotoxy(BODY_ROW2, CANDLE_COL);
//	printf("|  |  |  |  |");
//	set_color(RESET);
//}
//
//// 显示标题（居中）
//void display_title() {
//	const char* title = "★★★ 特别的祝福送给特别的你 ★★★";
//	// 计算居中位置（边框宽度70，标题长度30，居中偏移20列）
//	gotoxy(1, 20);
//	set_color(BRIGHT_MAGENTA);
//	printf("%s", title);
//	set_color(RESET);
//}
//
//// 显示底部祝福语（居中）
//void display_wishes() {
//	const char* wishes = "祝你生日快乐，天天开心，万事如意！";
//	// 计算居中位置
//	gotoxy(14, 22);
//	set_color(BRIGHT_GREEN);
//	printf("%s", wishes);
//	set_color(RESET);
//}
//
//int main() {
//	// 设置控制台窗口大小（确保能显示完整内容）
//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//	SMALL_RECT windowSize = { 0, 0, 79, 24 };  // 宽度80，高度25
//	SetConsoleWindowInfo(hConsole, TRUE, &windowSize);
//
//	srand((unsigned int)time(NULL));
//	clear_screen();
//
//	draw_border();       // 绘制边框
//	display_title();     // 显示标题（居中）
//	display_happy_birthday();  // 显示艺术字（对齐）
//	draw_candles();      // 绘制蜡烛（居中）
//	display_wishes();    // 显示祝福语（居中）
//
//	// 移动光标到最后
//	gotoxy(18, 0);
//	return 0;
//}
//那些我不太熟练的操作符
//1.移位操作符 << >> 移动的是二进制位  只有整形才能左移右移 浮点数不支持
// 不要移动负数位是 因为是标准未定义的 !!!!!!
// 整数的二进制表示有三种 原码 反码 补码
// 正的整数的 原码 反码 补码是相同的
// 负的整数的 原码 反码 补码是需要计算的 e.g     
// 7的二进制是
// 00000000000000000000000000000111--原码(也是7的反码和补码)(四个字节 32个比特位)
// 00000000000000000000000000000111--反码
// 00000000000000000000000000000111--补码
// -7的二进制是
// 10000000000000000000000000000111--原码(符号位是第一个)
// 11111111111111111111111111111000--反码(原码的符号位不变 其余的按位相反)
// 11111111111111111111111111111001--补码(反码的最后位加一就是补码)
// 
// 整数在内存中存储的是补码
// 左移乘二 右移除二
//2.
//
// int main()
//{
//	int a = -7;
//	int b = a << 1;//向左移位后 左边丢弃 右边自动补充0
//	//二进制10-1变成1
//	//计算是以补码开始计算的
//	//这里b是以a左移一位后的补码再取减1取到反码 最后相反过来变成原码 例子里的-7变成-14
//	printf("%d\n%d", a, b);
//	return 0;
//}
//右移操作符:
//1.算术移位:右边丢弃 左边补原符号位 vs采用的是算术右移
//2.逻辑移位:右边丢弃 左边补0
//int main()
//{
//	int a = -7;
//	int b = a << 1;
//	int c = a >> -1;
//	printf("%d\n%d\n%d", a, b, c);
//	return 0;
//}
//位操作符  只支持整数 不支持浮点型
//   &按(二进制)位与 有0即0 都1为1
//   |按(二进制)位或 有1为1 都0为0
//   ^按(二进制)位异或 同为0 异为1
//在 C 语言中，对整数进行 ^（异或）、&（与）、|（或）操作时，运算的对象是补码。

//   &按(二进制)位与 
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	//00000000000000000000000000000011 --3的补码
//	//10000000000000000000000000000101 --
//	//11111111111111111111111111111010 --
//	//11111111111111111111111111111011 --(-5)的补码
//	//00000000000000000000000000000011 --3的补码
//	//00000000000000000000000000000011 --&后的码
//	//%d意味着打印一个有符号的整数
//	//&两个里面有0即为0 都为1才是1
//	printf("%d\n", c);
//	return 0;
//}
//   |按(二进制)位或
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a | b;
//	//00000000000000000000000000000011 --3的补码
//	//10000000000000000000000000000101 --
//	//11111111111111111111111111111010 --
//	//11111111111111111111111111111011 --(-5)的补码
//	//00000000000000000000000000000011 --3的补码
//	//11111111111111111111111111111011 --|后的结果
//	//11111111111111111111111111111010
//	//10000000000000000000000000000101 --
//	//|两个里面有1即为1 都为0才是0
//	printf("%d\n", c);
//	return 0;
//}
//   ^按(二进制)位异或
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a ^ b;
//	//00000000000000000000000000000011 --3的补码
//	//10000000000000000000000000000101 --
//	//11111111111111111111111111111010 --
//	//11111111111111111111111111111011 --(-5)的补码
//	//00000000000000000000000000000011 --3的补码
//	//11111111111111111111111111111000 --^后的结果
//	//11111111111111111111111111110111
//	//10000000000000000000000000001000
//	printf("%d\n", c);
//	return 0;
//}
//	不创建临时变量(第三个变量) 实现两个数的变换
//int main()
//{
//	int a = 3;
//	int b = 5;
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/  
//	//小学奥数 哈哈哈
//	//但是这种方法可能会溢出 下面用^实现 好好看 好好学
//	a = a ^ b;//a=3^5
//	b = a ^ b;//3^5^5 -->3
//	a = a ^ b;//3^5^3 -->5
//	//3 ^ 3 = 0       a ^ a = 0
//	//011 
//	//011
//	//000 = 0
//	// 
//	//0 ^ 5 = 5		  0 ^ a = a
//	//000
//	//101
//	//101 = 5
//	//3 ^ 3 ^ 5 = 5
//	//3 ^ 5 ^ 3 = 5
//	// ^支持交换律
//	printf("%d\n%d\n", a, b);
//	return 0;
//}
//编写代码实现:求一个整数存储在内存中的二进制的个数
//也就是求补码中二进制的1的个数
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011 --3
//	//00000000000000000000000000000001 --1
//	//00000000000000000000000000000001 --3^1
//	int i = 1;
//	unsigned int mask = 1;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (a & mask)
//			//举例（以 a = 3 为例）：
//			//a 的二进制为 000...0011（32 位）：
//			//当 mask = 000...0001 时，a & mask = 000...0001（非 0）→ count 加 1。
//			//当 mask = 000...0010 时，a & mask = 000...0010（非 0）→ count 加 1。
//			//当 mask 左移到更高位时，a & mask 结果为 0 → 不统计。
//		{
//			count++;
//		}
//		mask <<= 1;//或者写成mask = mask << 1 比较好理解
//	}
//	printf("%d\n", count);
//	return 0;
//}
//												一个很值得借鉴的方法
//int main() 
//{
//	int n;
//	scanf("%d", &n);// 读取套餐数量
//	int min_price;
//	// 读取第一个套餐价格作为初始最小值
//	scanf("%d", &min_price);
//	// 读取剩余n-1个套餐价格，并更新最小值
//	for (int i = 1; i < n; i++) {
//		int p;
//		scanf("%d", &p);
//		if (p < min_price) {
//			min_price = p;
//		}
//	}
//	printf("%d\n", min_price);  // 输出最低价格
//	return 0;
//}
//int x1 = r1 ? b1 : a1;//变量命名的三目操作符
//int y1 = r1 ? a1 : b1;
//int x2 = r2 ? b2 : a2;
//int y2 = r2 ? a2 : b2;
//int x3 = r3 ? b3 : a3;
//int y3 = r3 ? a3 : b3;
//赋值操作符可以连续使用
//int main()
//{
//	int a = 10;
//	int x = 0;
//	int y = 20;
//	a = x = y + 1;//从右向左
//	printf("%d %d %d", a, x, y);//21 21 20
//	return 0;
//}
//复合操作符 += -= *= /= %= >>= <<= &= |= ^=
//int main()
//{
//	int a = 3;
//	a = a + 5;
//	a += 5;
//
//	a = a >> 1;
//	a >>= 1;
//
//
//	return 0;
//}
//单目操作符
//int main()
//{
//	int flag = 3;
//	if (flag)//flag为真进入if
//	{
//		printf("hehe");
//	}
//	if (!flag)//flag为假进入if
//	{
//		printf("haha");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	printf("%p\n", &a);//int需要四个字节 这里取的是第一个地址
//	int* p = &a;//指针变量是用来存放地址的  这里p就是指针变量
//
//	return 0;
//}
//sizeof()计算的是类型或者变量所占内存空间的大小 单位是字节
//计算类型所创建的变量所占空间的大小
// 
//  ~对一个数组的二进制按位取反
//int main()
//{
//	//int a = 0;
//	////~按位取反
//	////00000000000000000000000000000000 --> 补码
//	////11111111111111111111111111111111 --> ~a 这也是内存的补码
//	////11111111111111111111111111111110
//	////10000000000000000000000000000001
//	////-1
//	//printf("%d\n",~a);//-1
//	//int a = 3;
//	////00000000000000000000000000000011
//	////11111111111111111111111111111100 --> 补码
//	////11111111111111111111111111111011
//	////10000000000000000000000000000100 --> 原码
//	////-4
//	//printf("%d\n",~a);
//	//int a = 13;
//	////00000000000000000000000000001101
//	////11111111111111111111111111110010
//	////11111111111111111111111111110001
//	////10000000000000000000000000001110
//	////-14
//	//printf("%d\n",~a);
//	int a = 13;
//	printf("%d\n", a|2);
//	//要单改变13的二进制位上的某一位数的值0/1 可以采用下面的这个方法
//	//00000000000000000000000000001101 13的原反补码
//	//00000000000000000000000000000010 2 的原反补码 可以理解成1向左移动了一位1<<1 这样就不用去算需要|的数字是几了
//	//00000000000000000000000000001111 13 | 2的补码
//	//00000000000000000000000000001110
//	//01111111111111111111111111110001
//	int b = 13;
//	printf("%d\n",b|=(1<<1));
//	int c = 13;
//	//00000000000000000000000000001101 13的原反补码
//	//00000000000000000000000000000101 现在要把13改成这样 也就是把倒4位改成0 那就需要下面这一串二进制数字来&
//	//11111111111111111111111111110111 这串其实是下面这串的~
//	//00000000000000000000000000001000 1<<4 1左移4位
//	int d = c & (~(1 << 3));
//	printf("%d\n",d);
//	return 0;
//}
//操作符 ++  -- 分为前置和后置使用
//void test(int aaa)
//{
//	printf("%d\n", aaa);//10
//}
//int main()
//{
//	int a = 3;
//	int b = ++a;//前置++  先++后使用  a=a+1;b=a;
//	int c = 3;
//	int d = c++;//后置++ 先使用后++  d=c;c=c+1;
//	printf("%d\n", a);//4
//	printf("%d\n", b);//4
//
//	printf("%d\n", c);//4
//	printf("%d\n", d);//3
//	//--同理
//	int e = 3;
//	int f = --e;//前置--  先--后使用
//	int g = 3;
//	int h = g--;//后置--  先使用后--
//	printf("%d\n", e);//2
//	printf("%d\n", f);//2
//	printf("%d\n", g);//2
//	printf("%d\n", h);//3
//	int aa = 10;
//	printf("%d\n", aa--);//10 aa先被使用后被--
//	printf("%d\n", aa);//9
//	int aaa = 10;
//	test(aaa--);//也是先传参再--
//	return 0;
//}
//				*解引用操作符(间接访问操作符)   和指针配合去使用
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);//20
//	return 0;
//}
//  (类型) 强制类型转换
//int main()
//{
//	int a = (int)(3.14);
//	printf("%d\n", a);//3
//	int b = 0;
//	printf("%d\n", sizeof(b));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int);//不能这么写 说明sizeof是操作符不是函数 strlen是库函数(且只能求字符串)
//	return 0;
//}
//两个字符串比较相等应该使用strcmp
//逻辑操作符 && ||
//int main()
//{
//	//&&其实就是 并且
//	int a = 3;
//	int b = 5;
//	int c = a && b;//c=1 a和b里面只要有一个为假就为假 因为a和b都为真所以现在a && b为真
//	if (a && b)
//	{
//		printf("%d\n", c);//1
//		printf("%d\n", a && b);//1
//	}
//	int e = 0;
//	int f = 1;
//	int g = e && f;
//	printf("%d\n", e && f);//0
//	printf("%d\n", g);//0
//	//  ||只要有一个为真就为真 都为假才是假
//	int m = 0;
//	int n = 1;
//	int o = m || n;
//	printf("%d\n", o);//1
//	return 0;
//}
//                                         一道有点坑的题
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//从左向右算 a先使用后++ 所以i = 0 && ++b && d++ 但是&&一个为假就为假 所以0&&++b的结果是0
//	//所以i = 0 && d++ 
//	//同理最后 i = 0
//	//i = a++ || ++b || d++;
//	//最后的最后a被使用完后要++所以a=1 其他的都不变
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//1 2 3 4
//	printf("\n");
//	test1();
//	printf("\n");
//	test2();
//	printf("\n");
//	test3();
//	return 0;
//}
//int test1()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//按照上面的来理解
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//2 3 3 5
//	return 0;
//}
//int test2()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	//对于||来说一个为真后另一个就不去运算 所以++b并没有被计算 一样的d++也没有被计算 
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//2 2 3 4
//	return 0;
//}
//int test3()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//1 3 3 4
//	return 0;
//}
//总结:&&一个为假就为假
//	   ||一个为真就为真
//	 假&&* 左边为假 右边就不计算了
//   真||* 左边为真 右边就不计算了
//条件操作符 也叫三目操作符 exp1 ? exp2 : exp3;
//						   真     算     不算
//                         假    不算      算
//替代简单的if else(仅限于有两种情况的) 
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int b;
//	if (a > 5)
//	{
//		b = 3;
//	}
//	else
//		b = -3;
//	//替换上述if else 的两种写法
//	//(a > 5) ? (b = 3) : (b = -3);
//	//b = (a > 5 ? 3 : -3);
//	return 0;
//}
//逗号表达式
//就是逗号隔开的多个表达式 
//从左向右依次执行 注意了也会执行 除非是下面这种a a>b这种一点没用的
//整个表达式的结果是最后一个表达式的结果
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	//              a = 12         b = 12 +1 ;
//	printf("%d\n", c);//13
//	return 0;
//}
//下标引用 
//int main()
//{
//	int arr[10] = { 0 };
//	arr[7] = 8;//给下标为7的元素赋值为8
//	//[]下标引用操作符
//	7[arr] = 9;//给下标为7的元素赋值为9
//	//arr[7] --> *(arr+7) --> *(7+arr) --> 7[arr]
//	//arr是数组首元素的地址
//	//arr+7就是跳过七个元素,指向了第8个元素 也就是arr[7]
//	//所以(arr+7)就是arr[7]
//	//因为加法支持交换律 所以*(7+arr)等同于*(arr+7)所以可以写成7[arr]
//	//但是不建议这么写 而且定义初始化的时候不能这么写 就访问的时候可以
//	return 0;
//}
//函数定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//	int c = Add(a, b);//()就是函数调用操作符 操作数:Add,a,b 函数调用不一定要有参数
//	printf("%d\n", c);
//	return 0;
//}
//结构访问操作符
//. 结构体.成员名
//> 结构体>成员名
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//void set_stu(struct Stu* ps)
//{
//	//strcpy(ss.name, "zhangsan");//这里得说明一下，由于在定义结构体的时候就已经给成员变量赋值了
//	////							  所以就不能用 = ，得用strcpy
//	//ss.age = 20;
//	//ss.score = 100.0;
//	//strcpy((*ps).name, "zhangsan");
//	//(*ps).age = 20;
//	//(*ps).score = 100.0;//还能简化一下
//	strcpy(ps->name, "zhangsan");
//	ps->age = 20;
//	ps->score = 100.0;
//	//结构体指针->成员
//	//结构体对象.成员
//	//ps.age等价于(*ps).age//用指针更节约空间
//}
//
//void print_stu(struct Stu* ps)//
//{
//	printf("%s %d %.1lf\n", ps->name, ps->age, ps->score);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);//传参的时候把数据放到了拷贝的ss里面去了，影响不到原参s，因为ss是拷贝出来的
//	//			 所以不能传s应该传&s
//	print_stu(&s);//传值浪费空间 传址省空间
//	return 0;
//}
//                      表达式求值
//表达式求值的顺序一部分是由操作符的优先级和结合性决定的
//有些表达式的操作数在求值的过程中可能需要转换为其他类型
//int main()
//{
//	int a = 2 + 6 / 3;
//	printf("%d\n",a);
//	int b = 2 + 3 + 4;//优先级相同的情况下 从左向右	
//	return 0;
//}
//隐式类型转换   整形提升
//C语言里面整形和字符默认int类型
//字符类型是被归到整形家族的 因为字符底层存储的时候存的是阿斯克码值
//只要是整形类型在内存中存储的都是 补码
//int main()
//{
//	//char c = -1;//-1是整数 32个比特位
//	//10000000000000000000000000000001原
//	//11111111111111111111111111111110反
//	//11111111111111111111111111111111补  补码-1等于反码
//	//但是char是一个字节8个比特位
//	//所以c存放的是-1的补码最右边的八个比特位
//	//即11111111 -->c
//	//但C语言会对其 高位补充符号位 进行整形提升
//	//11111111111111111111111111111111 -->整形提升后
//	//整数和负数都会高位补充符号位
//	//无符号整形提升时,高位补0
//	char a = 5;
//	char b = 126;
//	//00000000000000000000000000000101 -->5
//	//00000101 -->a
//	//00000000000000000000000000000101
//	//00000000000000000000000001111110 -->126 
//	//01111110 -->b
//	//00000000000000000000000001111110
//	char c = a + b;
//	//10000011 -->c
//	//11111111111111111111111110000011 -->
//	//10000000000000000000000001111100
//	//10000000000000000000000001111101 -->(-125)
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	//
//	if (a == 0xb6)//这里a会整形提升
//	{
//		printf("a");
//	}
//	if (b == 0xb006)//这里b也会整形提升
//	{
//		printf("b");
//	}
//	if (c == 0xb6000000)// 这里c不会整形提升 
//	{
//		printf("c");
//	}
//	//所以一共只会输出c
//	return 0;
//}
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4 //整形提升之后参与运算 所以是4个字节
//	printf("%u\n", sizeof(-c));//4 //与上述同理
//	//%u打印无符号整形
//	return 0;
//}
//					算术转换
//如果某个操作符的各个操作数属于不同的类型
//那么除非其中一个操作数的转换为另一个操作数的类型
//否则操作就无法进行  下面的层次体系称为"寻常算术转换"
/*
long double
double
float
unsigned long int
long int
unsigned int
int
从下往上转换*/
//复杂表达式的求值有三个影响的因素
//1.操作符的优先级
//2.操作符的结合性
//3.是否控制求值顺序
//两个相邻的操作符先执行哪个?取决于他们的优先级,如果他们的优先级相同,取决于他们的结合性
/*   操作符优先级从上往下
()聚组
()函数调用
[]下标引用
. 访问结构成员
->访问结构指针成员
++后缀自增
--后最自减
! 逻辑反
~ 按位取反
+ 单目,表示正值
- 单目,表示负值
*
&
sizeof
(类型)
* / % + -
<< >> > >= <=
......
这里不在列举 也没啥意义
......
再赋值类型操作符
再逗号(从左向右)
*/
//优先级讨论的是相邻操作符
//int main()
//{
//	//问题表达式 有歧义
//	//a* b + c * d + e * f;
//	// 1   3   2   5   4
//	// 1   4   2   5   3
//	//
//	//c + --c;
//	//非法表达式
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);//4
//	return 0;
//	//上述代码在不同的编译器运行的结果不同
//}
//下面这个也是问题代码
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();//这里哪个函数先调用不清楚
//	printf("%d\n", answer);
//}
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//	return 0;
//}
//青蛙跳台阶
//青蛙一次可以一个或者两个台阶 
//请问青蛙跳到第n个台阶共有多少种跳法  有许多变种子题
//int fun(int num)
//{
//	if (num == 1)
//	{
//		return 1;
//	}
//	if (num == 2)
//	{
//		return 2;
//	}
//	if (num > 2)
//	{
//		return fun(num - 1) + fun(num - 2);//递归实现
//		//有点类似斐波那契
//	}
//}
//int fun(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return fun(n - 1) + fun(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int num = fun(n);
//	int count = 0;
//	printf("共有%d种走上第n阶台阶的方法\n", num);
//	return 0;
//}
//						序列中删除指定数字
//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，
//序列中未被判除数字的前后位置没有发生改变
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	int arr[5] = {0};
//	int i = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (i = 0; i < N; i++)
//	{
//		if (arr[i]!=del)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	/*for (int j=0;j<=5;j++)
//	{
//		if (j!=del)
//		{
//			printf("arr[%d] ", j);
//		}
//	}*/
//
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[5] = {0};
//	int max;
//	int min;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//		int max = arr[1];
//		int min = arr[2]; 
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] <= min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d", max-min);
//	return 0;
//}
//#define MAX_SIZE 1000  // 定义最大可输入的数字个数
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	if (n <= 0 || n > MAX_SIZE)
//	{
//		printf("请输入一个合理的数字个数（1 ~ %d）\n", MAX_SIZE);
//		return 1;
//	}
//	int arr[MAX_SIZE];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	// 初始化 max 和 min 为数组的第一个元素
//	int max = arr[0];
//	int min = arr[0];
//	for (int i = 1; i < n; i++)  // 从第二个元素开始比较
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("%d\n", max - min);
//	return 0;
//}
//void bubbleSort(int arr[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{                // 外层循环控制轮数
//		for (int j = 0; j < n - 1 - i; j++)
//		{        // 内层循环控制每轮比较次数
//			if (arr[j] > arr[j + 1])
//			{               // 如果前一个比后一个大
//				// 交换 arr[j] 和 arr[j + 1]
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入要排序的数字个数: ");
//	scanf("%d", &n);
//	if (n <= 0)
//	{
//		printf("数字个数必须大于 0。\n");
//		return 1;
//	}
//	int arr[1000]; // 假设最多输入 1000 个数字，可根据需求调整
//	printf("请输入 %d 个整数:\n", n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	// 调用冒泡排序函数
//	bubbleSort(arr, n);
//	// 输出排序后的结果
//	printf("排序后的数组（升序）:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//小涛同学参加了闽南师范大学 ACM 队的选拔赛。此次共有 n 个人参加这场比赛
//但是 ACM 队只打算选择前 x% 的同学进入队伍（人数向上取整）
//而小涛同学的排名为第 a 名 
//若小涛同学能成功入队
//输出 "Well done"，否则输出 "Try harder"
//int main() 
//{
//	int n, x, a;//99 20 20
//	scanf("%d %d %d", &n, &x, &a);
//	// 计算前 x% 的人数（向上取整）
//	int selected = (n * x + 99) / 100;
//	if (a <= selected) 
//	{
//		printf("Well done");
//	}
//	else 
//	{
//		printf("Try harder");
//	}
//	return 0;
//}
//一些冷知识:scanf读取成功时返回的是读取的数据的个数
//scanf读取失败时返回EOF
//库函数里有islower(ch)如果是小写字母就返回非零(真) 如果不是小写就返回0
//isupper(ch) 大写返回非零 小写返回0
//int main()
//{
//	char ch = 0;//大小写转换
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		else
//			printf("%c\n", ch + 32);
//		getchar();
//	}
//	return 0;
//}
//islower isupper tolower toupper需要的头文件<ctype.h>
//int main()
//{
//	char ch = 0;//大小写转换
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (islower(ch))
//			printf("%c\n", toupper(ch));
//		else if(isupper(ch))
//			printf("%c\n", tolower(ch));
//		getchar();
//	}
//	return 0;
//}
//getchar 函数的作用
//功能：从标准输入（键盘 / 文件）读取 一个字符（包括换行符 \n、空格等不可见字符）。
//返回值：成功时返回读取到的字符（以 ASCII 码值的形式，比如读取 'a' 就返回 97）；失败或遇到输入结束时，返回 EOF。
//定义：EOF 是 stdio.h 中定义的宏，本质是一个 负整数（通常是 -1，因为字符的 ASCII 码都是非负的，不会和正常字符冲突）。
//作用：标记 “输入流已经读完了”，没有更多数据可以读取了。
//触发场景：
//键盘输入时：Windows 按 Ctrl + Z 再回车，Linux / Mac 按 Ctrl + D，手动触发 EOF。
//读取文件时：文件指针走到末尾，自动触发 EOF。
//putchar 功能是 向标准输出（屏幕 / 文件）输出一个字符，
//接收单个字符（或对应 ASCII 码）作为参数，是最简单的字符输出函数。
//int main() 
//{
//	putchar('A');   // 直接输出字符 'A'
//	putchar(98);    // 输出 ASCII 码 98 对应的字符 'b'
//	putchar('\n');  // 输出换行符（换行）
//	putchar('1');   // 输出数字字符 '1'（不是整数 1）
//	return 0;
//}
//int main() {
//	int c;
//	printf("请输入内容，按 Ctrl+Z（Windows）/ Ctrl+D（Mac/Linux）结束：\n");
//	while ((c = getchar()) != EOF) {
//		if (c >= '0' && c <= '9') { // 只保留数字字符
//			putchar(c); // 输出数字字符
//		}
//	}
//	return 0;
//}
//int main() 
//{
//	char ch = '0';
// //也可以不用getchar 但是要改成while( (scanf(" %c", &ch) ) == 1)
// //这里%c前加上空格的作用是  跳过下一个字符之前的所有空白字符
//	while (scanf("%c", &ch)==1)
//	{
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//			printf("%c is an alphabet\n", ch);
//		else
//			printf("%c is not an alphabet\n", ch);
//		getchar();//回车\n被getchar读取所以被存进了这个函数里面 但是这个库函数本身并不会直接输出 所以相当于直接吸收了回车\n
//	}
//	return 0;
//}
//- 关键原因： scanf("%c", &ch)  是“行缓冲输入”——你输入的字符会先存在缓冲区，只有按下回车，
//缓冲区的字符才会被 scanf 读取，此时才满足  scanf 返回值=1 ，进入循环。​
//- “a + 回车”的处理过程：​
//1. 你输入 'a' 没按回车：缓冲区存 'a'，scanf 不读取，程序停在  scanf  等待；
//2. 按下回车：缓冲区新增 '\n'（回车符），此时缓冲区有 'a' 和 '\n' 两个字符；
//3. scanf 先读取第一个字符 'a'，进入循环执行判断 + 输出；
//4. 最后  getchar()  读取缓冲区剩下的 '\n'（吃掉回车），避免下次 scanf 误读；
//5. 回到  scanf ，等待你下一次输入。
//scanf("%d", ...)  会自动跳过空白字符（空格、回车、制表符），只读取有效数字。
//int main()
//{
//	char ch = 0;
//	while ((scanf(" %c", &ch) == 1))
//	{
//		if (isalpha(ch))//也是一个库函数 判断是否为字母
//		{
//			printf("Yes\n");
//		}
//		else
//			printf("No\n");
//	}
//	return 0;
//}
//变种水仙花数 1461 拆成1和461 或14和61 或146和1 如果拆分之后的乘积之和等于自身 则是一个Lily Number
//1461=1*461+14*61+146*1   655=6*55+65*5;
//求5位数内的所有水仙花数
//法一:最容易的方法
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		//判断  12345  #1 2345 #12 345 #123 45 #1234 5
//		if (((i / 10000) * (i % 10000) + (i / 1000) * (i % 1000) + (i / 100) * (i % 100) + (i / 10) * (i % 10)) == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//法二:
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		//判断  12345  #1 2345 #12 345 #123 45 #1234 5
//		int j = 0;
//		int sum = 0;
//		for (j = 0; j < 4; j++)
//		{
//			int k = (int)pow(10, j);//这里的pow表示10的j次方 <math.h> 参数和返回值都是double类型
//			sum = sum + (i / k) * (i % k);
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//指针 初阶 
//指针和指针类型
//野指针
//指针运算
//指针和数组
//二级指针
//指针数组

//指针是内存中一个最小的编号 也就是地址
//平时口语中的指针，指的通常是指针变量 是用来存放内存地址的变量
//int main()
//{
//	int a = 10;//a是整形变量占用四个字节 应该会有四个字节
//	printf("%p\n", &a);//取出来的是四个字节里面的第一个字节的地址
//	printf("%d\n", sizeof(&a));//4 x86
//	int* pa = &a;
//	//pa是一个指针变量 用来存放地址
//	printf("%p\n", &pa);
//	//本质上指针就是地址
//	//口语中说的指针,其实是指针变量,指针变量就是一个变量,指针变量是用来存放地址的一个变量
//	//指针变量里边存的是地址,而通过这个地址,就可以找到一个内存单元  一个小的单元是一个字节(八个比特位)
//	//对于32位的机器，假设有32根地址线，那么假设每根地址线在寻址的时候产生高电平（高电压） 和低电平（低电压）就是(1或者0)；
//	//可以产生pow(2,32)个不同的地址换算一下就是4GB
//	//32位上的机器一个指针变量的大小应该是4字节
//	//64位上的机器一个指针变量的大小应该是8字节 才能存放一个地址
//	// x86是32位的环境 x64是64位环境
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//	//注意:sizeof 返回的是无符号整形 就是unsigned int
//	printf("%zu\n", sizeof(pc));//4 x8
//	printf("%zu\n", sizeof(ps));//4 x86
//	printf("%zu\n", sizeof(pi));//4 x86
//	printf("%zu\n", sizeof(pd));//4 x86
//	//是给sizeof和strlen准备的
//	return 0;
//}
//指针类型的意义
//int main()
//{
//	int a = 0x11223344;//两个十六进制代表一个字节 0x是16进制的前缀标识
//	int* pa = &a;
//	*pa = 0;
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	char* pa = (char*) & a;
//	//结论 调试监视起来
//	//指针类型不影响指针所占内存的大小 但是决定了解引用时访问几个字节
//	//int* 的指针 解引用访问4个字节
//	//char*的指针 解引用访问1个字节
//	//推广到其他类型
//	*pa = 0;
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pd = (char*)&a;
//
//	printf("pa = %p\n", pa);
//	printf("pd+1 = %p\n", pa + 1);
//	printf("pd = %p\n", pd);
//	printf("pd+1 = %p\n", pd + 1);
//
//	//结论:
//	//指针的类型决定了指针+-1操作时,跳过几个字节
//	//决定了指针的步长
//
//
//	//100       10进制
//	//0x64      16进制
//	//110 0100   2进制
//	//144        8进制
//	//电脑自带的计算器有提供各大进制之间的数字转换
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//
//	int* pi = &a;  //pi 解引用访问4个字节,pi+1也就是跳过4个字节
//	float* pf = &a;//pf 解引用访问4个字节,pf+1也就是跳过4个字节
//	// int* 和 float* 是不是就可以通用啊?
//	// 不能 !!!!!!!
//	//实例如下
//	//*pi = 100;
//	*pf = 100.0;
//	//说白了就是指针变量存放的是地址，他映射到变量的内存地址，
//	//然而指针变量根本不知道变量的类型，所以需要在指针变量中定义类型来决定变量的移动步进。
//	//浮点数在内存中的存放和整形是不一样的，浮点数的存放参考IEEE规则
//	return 0;
//}
//    野指针 指针运算
//野指针:
//int main()
//{
//	int* p;//p没有初始化,就意味着没有明确的指向
//	//一个局部变量不初始化的话,放的是随机值:0xcccccccc
//	*p = 10;//非法访问内存,这里的p就是野指针
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//&arr[0] 数组的地址就是首元素的地址
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//这里11次了数组越界访问
//	//当指针指向的范围超出数组arr的范围时,p就是野指针
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
////因为a是局部变量 一旦出了test这个函数就销毁了 空间就会还给操作系统就会用不了
////内存的空间还在只是不属于我当前程序了 没有这块空间的操作权限了
//int main()
//{
//	int* p = test();
//	//虽然p里面还保留着a的地址 但是p找到这块空间时却访问不了这个空间
//	//也会有野指针产生
//	return 0;
//}
//使用指针的好习惯 避免野指针的出现
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int* p = &a;
//	*p = 20;
//	//NULL -> 0
//	int* p2 = NULL;//空指针
//	*p2 = 100;//err
//	//空指针（NULL 或 nullptr）的设计初衷是表示 “不指向任何有意义的内存区域”。
//	//操作系统会保护这块地址（通常是 0 地址附近），不允许程序读写，否则会触发内存访问错误（如段错误 Segmentation Fault）。
//	int* p3 = NULL;
//	if (p3 != NULL)
//	{
//		*p3 = 100;//ok
//	}
//	/*
//	    如何避免野指针:
//	    1.指针初始化
//	    2.小心指针越界
//		3.指针指向空间释放即时置NULL
//		4.避免返回局部变量的地址 销毁
//		5.指针使用之前检查有效性
//	*/
//	return 0;
//}
//指针运算
//指针+-整数
//指针-指针
//指针的关键运算
//                          指针+-整数
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//把数组的元素初始化
//	//法一:数组下标的写法
//	/*for (i = 0; i < sz; i++)
//	{
//		arr[i] = 1;
//	}*/
//	//法二:指针的写法
//	//int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	*p = 1;
//	//	p++;
//	//}//F10自己监视看一下会更明白和清楚
//	//法三:
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*(p + 1) = 1;
//	}
//	//调试自己监视一下
//	//*p指的是解引用的值，p里面存放的是地址，(*p)+1是解引用之后的值+1，*(p+1)是地址+1通过解引用找到这个地址对应的值。
//	return 0;
//}
//							指针-指针
//int main()
//{
//	//int arr[10] = { 0 };
//	//printf("%d\n", &arr[9] - &arr[0]);
//	//指针-指针(的绝对值 但是不用abs) 得到的是指针与指针之间的元素的个数
//	//不是所有指针都能相减 要指向同一块的空间的指针才能相减
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	printf("%d\n", &ch[0] - &arr[5]);//err
//	return 0;
//}
//法一:指针
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//法二:递归
//法三:指针-指针
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//int  main()
//{
//	int len = my_strlen("abcdef");//这里传参的时候传的是a字符的地址
//	printf("%d\n", len);
//	return 0;
//}
//注意:指针+指针  没有意义

//指针的关系运算
//标准允许指针向后越界的那一个内存空间与数组的比较 但不允许与数组前面的那块内存空间比较
//可以往后越界访问比较 但是不能越前访问比较 因为有的编译器不支持
//指针与数组
//int main()
//{
//	int arr[10] = { 0 };
//	//arr是首元素的地址(sizeof(数组名)和&(数组名)这两种情况除外)
//	//&arr[0]
//	int* p = arr;
//	//通过指针访问数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p ----- %p\n", &arr[i],p+i);
//		//这两个是一样的
//		//arr[i] -> *(arr+i)
//		//C语言的编译器中，对数组的操作是自动转化为指针来操作的
//	}
//	return 0;
//}
//void test(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//void test(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//arr[i] --> *(p+i)
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	test(arr,sz);
//	return 0;
//}
//							  二级指针
//二级指针变量是用来存放一级指针变量的地址的
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一个一级指针变量
//	int** ppa = &pa;//ppa是一个二级指针变量
//	//int**ppa 中的后面的那个*是说明ppa是指针 
//	//int**ppa 中的前面的int*是说明ppa指向的对象是int*类型
//
//	*pa = 20;
//	printf("%d\n", a);
//
//	//*ppa = 30;
//	//printf("%d\n", a);
//
//	**ppa = 40;
//	printf("%d\n", a);
//	printf("%d\n", *pa);
//	printf("%d\n", **ppa);
//
//	return 0;
//}
//	
//				指针数组
//存放指针的数组就是指针数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//
//	printf("%d ", *pa);
//	printf("%d ", *pb);
//	printf("%d ", *pc);
//
//	printf("\n");
//
//	printf("%p\n", pa);
//	printf("%p\n", &a);
//
//	//parr就是指针数组
//	int* parr[10] = { &a,&b,&c };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//
//	return 0;
//}
//			二级指针模拟二维数组
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6, };
//	//1 2 3 4
//	//2 3 4 5
//	//3 4 5 6
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//
//	int* parr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);//这里不解引用的原因是[]就已经是解引用了
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//				结构体
// 
//结构体类型的声明
//结构体初始化
//结构体成员访问
//结构体传参
//
//结构:结构是一些值的集合,这些值称为成员变量。结构的每个成员可以是不同类型的变量
//数组是一种相同类型元素的集合 结构体是变量组合 函数是函数 两者有本质的区别
//内置类型:int long float char......
//复杂对象的描述就会使用到: 结构体
//struct tag  //struct是关键字 tag是名称
//{
//	member - list;
//}variable-list
//下面这个就是声明的结构体类型
// 第一种写法
//struct Peo
//{
//	//成员变量
//	char name[20];
//	char tele[12];//11位号码最后要放个\0
//	char sex[5];//保密\0
//	int high;
//};
//第二种写法
/*struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
}p1,p2;*///p1和p2是利用struct Peo结构类型创建的两个变量
//p1和p2是两个全局的结构体变量 所以不建议这种写法
//建议下面这种写法
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//};
//int main()
//{
//	struct Peo p1 = {0};//结构体变量的创建
//	return 0;
//}
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;//先
//};
//struct st
//{
//	struct Peo p;//结构体的成员也可以是其他结构体
//	int num;
//	float f;//后
//};
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//}p3, p4;//全局
//struct Peo p5, p6;//全局
//struct St
//{
//	struct Peo p;
//	int num;
//	float f;
//};
//void print2(struct Peo* sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);//结构体指针->成员变量
//}
//void print1(struct Peo p)
//{
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//结构体变量.成员名
//}
//int main()
//{
//	struct Peo p1 = { "张三","16650251879","男",181 }, p2 = { 0 };//局部  对p1初始化
//	struct St s = { {"李四","16658453382","女",166},100,3.14 };
//
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
//
//	print1(p1);//空间和时间浪费比较大
//	print2(&p1);
//
//	return 0;
//}
//						结构体传参(上面就有传参)
//函数传参的时候，参数是需要压栈的
//传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
//结论:结构体传参时最好传结构体的地址
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c=6 a=6
//	b = ++c, c++, ++a, a++;//b=7 c=8 a=8
//	b = b+a++ + c;//b=15+8=23 a=9 
//	printf("a=%d b=%d c=%d\n", a, b, c);//9 23 8
//	return 0;
//}
//							非常牛逼厉害的计算正整数的二进制中1的个数
//int count_num_of_1(int n)//11     1011
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)//11%2==1
//		{
//			count++;
//		}
//		n = n / 2;//n=5 101
//	}
//	return count;
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int n=count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}
//                       法二 二版本 也可计算负数
//int count_num_of_1(unsigned int n)//有点不理解 只是改成unsigned int就可以了
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}
//								法三 但还是不够高效
//int count_num_of_1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> 1) & 1) == 1)
//		{
//			//0000....01011
//			//0000....00001
//			//0000....00001
//			count++;
//		}
//	}
//	return count;
//}//对比2480行代码
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}
// 这么nb牛逼的代码是谁写出来的
//n=15
//n=n&(n-1)
//1111 n
//1110 n-1
//1110 n&n-1
//1101 
//1100 新的n&n-1
//1011
//1000 新新n&n-1
//0111
//0000 新新新n&n-1
//int count_num_of_1(int n)//当前知道的最牛逼高效的代码
//{
//	int count = 0;
//	while (0)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}
//那些刷题平台的题分为IO型和接口型
//判断一个数是不是2的n次方
//2^1 10
//2^2 100
//2^3 1000
//if (n & (n - 1) == 0)
//{
//
//}
//求两个数二进制中不同位的个数
//法一
//int count_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m>>i)&1)!=((n>>i)&1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
////法二 比骄容易想到
////int count_diff_bit(int m, int n)
////{
////	int count = 0;
////	int ret = m ^ n;
////	//同0异1  可以看看3876行那些代码
////	while (ret)
////	{
////		ret = ret & (ret - 1);
////	}
////}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);
//	return 0;
//}
//全局变量和静态变量都是放在静态区的
//全局变量和静态变量不初始化的时候,会被默认初始化为0
//局部变量是放在栈区的
//局部变量,不初始化,默认值是随机值
//int i;
//int main()
//{
//	i--;//-1
//	//sizeof这个操作符计算返回的结果是size_t类型的,是无符号整形的
//	if (i > sizeof(i))//-1 > (无符号)4
//	//隐式类型转换 ​有符号的 int（-1）会被转换为无符号的 size_t 类型，然后再与右边的 sizeof(i)（也是无符号）进行比较！
//	//-1会被转化为非常大的正整数
//	// size_t 是 32 位的无符号整数（4 字节）：
//	//10000000 00000000 00000000 00000001
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111 
//	//当把它当作 ​无符号整数​ 解释时，它的值是：2^32−1 = 4294967295
//	//所以 - 1 转为 unsigned int 或 size_t 后，它实际上是一个 ​非常大的正数(约42亿)
//	{
//		printf(">\n");//>
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//法一:两层for
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//	*---*
//	//	-*-*-
//	//	--*--
//	//	-*-*-
//	//	*---* 
//	for (int i = 0; i < n; i++)
//	{  // 控制行数
//		for (int j = 0; j < n; j++)
//		{  // 控制每行的字符
//			// 判断当前位置是否需要打印*（对称位置）
//			if (j == i || j == n - 1 - i)
//			{
//				printf("*");
//			}
//			else 
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");  // 每行结束换行
//	}
//	return 0;
//}
// 法一的另一种写法
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	//作用是持续读取用户输入的整数，直到输入无效或遇到结束符。
//	//这个循环会反复等待用户输入整数，每次输入一个整数后就执行循环体内的逻辑（比如用这个整数做计算、处理等）。
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if ((i + j) == n - 1)//这里需要一定的敏锐和观察能力
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//法二:二维数组
//int main()
//{
//	int i = 0, j = 0;
//	int n;
//	scanf("%d", &n);
//	char arr[999][999] = { ' ' };//只有数组的第一个元素被初始化了
//	//	*---*
//	//	-*-*-
//	//	--*--
//	//	-*-*-
//	//	*---* 
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == j)
//			{
//				arr[i][j] = '*';
//			}
//			else if ((i + j) == n - 1)
//			{
//				arr[i][j] = '*';
//			}
//			else
//			{
//				arr[i][j] = ' ';
//			}//为啥这个得写
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//计算某年某月有多少天
//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//  //&& || ! 的结果为真为1为假则0
//	//条件成立时返回1不成立返回0 与下面这几行代码一样
//	//if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	//{
//	//	return 1;
//	//}
//	//else
//	//	return 0;
//}
//int main()
//{
//	int y, m;
//	int day = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if ((is_leap_year(y) == 1) && (m == 2))
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//	return 0;
//}
//								调试
//1.发现程序错误的所在							1.程序员自己
//2.以隔离,消除等方式对错误进行定位				2.测试人员
//3.确定错误产生的原因							3.用户
//4.提出纠正错误的解决办法
//5.对程序错误予以改正,重新测试
//Debug
//Debug通常为调试版本,它包含调试信息,并且不做任何优化,便于程序员调试程序
//Release
//Release称为发布版本,它往往是进行了各种优化,使程序在代码大小和运行速度上都是最优的,以便用户很好地使用
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//void test2()
//{
//	printf("hehe");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test();
//	return 0;
//}
//					计算1！+2！+3！+4！+.......+n!
//int xz_nn(int i)
//{
//	int good = 1;
//	for (int j = 1; j <= i; j++)
//	{
//		good = good * j;
//	}
//	return good;
//}
//int main()
//{
//	int n;
//	//scanf("%d", &n);
//	int sum = 0;
//	int i = 0;
//	while ((scanf("%d", &n)) == 1)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			sum = sum + xz_nn(i);
//		}
//		printf("%d", sum);
//		Sleep(500);
//		system("cls");
//		sum = 0;
//	}
//	return 0;
//}
//法二
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	while (scanf("%d", &n)==1)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			for (i = 1; i <= j; i++)
//			{
//				ret = ret * i;
//			}
//			sum = sum + ret;
//			ret = 1;//
//		}
//		printf("%d\n", sum);
//		Sleep(800);
//		system("cls");
//		sum = 0;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//1.栈区内存的使用习惯是先使用高地址处的空间
//再使用低地址处的空间
//2.数组随着下标的增长
//地址是由低到高变化的
//3.如果i和arr之间有适当的空间
//利用数组的越界访问就可能会覆盖到i
//就可能导致死循环的出现

//									优秀的代码
//1.代码正常运行
//2.bug很少
//3.效率高 用时少
//4.可读性高 有清晰的注释 好的变量名称
//5.可维护性高 文档齐全
// 
//									一些coding技巧
//1.使用assert
//2.尽量使用const
//3.养成良好的编码习惯
//4.添加必要的注释
//5.避免编码的陷阱
// 法一
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
// 法二
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//法三
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)//到\0时为假停止 其他任意字符都不为0都为真 所以都会进入循环
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello world";
//	//strcpy再拷贝字符串的时候,会把原字符串中的\0也拷贝过去
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//法四 更保险的做法
//使用assert要引入#include <assert.h>这个头文件
//简要介绍一下assert的用法
//int main() 
// {
//	int a = 5;
//	// 假设 a 应该大于 0，用 assert 验证
//	assert(a > 0);  // 条件为真，程序继续
//	printf("a = %d\n", a);
//
//	a = -1;
//	assert(a > 0);  // 条件为假，触发错误
//	printf("这行不会执行\n");
//	return 0;
//}
//void my_strcpy(char* dest, const char* src)
//{
//	//assert断言
//	//是一个用于调试的宏，主要作用是在程序运行时检查一个条件是否为真。
//	//它的核心目的是帮助开发者发现程序中的逻辑错误，确保某些关键假设在调试阶段得到验证。
//	//assert(src == NULL);//传入空指针 p 也会触发断言（这是 assert 的正常调试作用，用于发现非法输入）
//	//正确写法如下
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello world";
//	char* p = NULL;
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//为什么返回char*呢?
//是为了实现"链式访问"
//strcpy函数返回的目标空间的起始地址
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;//
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello world";
//	char* p = NULL;
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//关键字 const
//用于声明常量或只读变量，其核心作用是保护数据不被意外修改，提高代码的安全性、可读性和可维护性。
//它可以修饰变量、指针、函数参数、函数返回值等
//int main()
//{
//	const int num = 10;
//	//const
//	//num = 20;
//	//int* p = &num;
//	//const int和int const是一样
//	//const int* p = &num;
//	//1.const放在*号左边
//	//意思是:p指向的对象不能通过p来修改,但是p对象本身的值是可以被修改的
//	//*p = 20;//err改不了	
//	//2.const放在*号右边
//	//意思是:指向的对象是可以通过p来改变的,但是不能修改p变量本身的值
//	int* const p = &num;
//	*p = 0;
//	int n = 100;
//	p = &n;
//	//int n = 100;
//	//p = &n;
//	//int** p2 = (int**)&*p;
//	//**p2 = 20;
//	printf("%d\n", num);
//	return 0;
//}
//int my_strlen(const char* str)//const修饰更加安全 防止在后面被修改
//{
//	int count = 0;
//	assert(str);//有些版本Release可能会把assert优化掉
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	int len = my_strlen(arr);//char*
//	printf("%d\n", len);
//	return 0;
//}
//编程常见的错误
//1.编译形错误(语法错误)
//2.链接型错误(出现在链接期间)   test.c ------> 编译 --------> 链接 -------->可执行程序
//3.运行时错误

//ctrl f 快速搜索
//int main()
//{
//	int a = 0;
//	int b = 10;
//	int c = Add(a, b);//这种没有定义Add就调来用的 就是典型的链接错误
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	while ((scanf("%d %d %d", &a, &b, &c) == 3))
//	{
//		if (a + b > c || a + c > b || b + c > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("等边三角形\n");
//			}
//			else if ((a == b && b != c) || (b == c && b != a) || (a == c && b != c))
//			{
//				printf("等腰三角形\n");
//			}
//			else
//				printf("普通三角形\n");
//		}
//	}
//
//	return 0;
//}
//short短整形两个字节

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
// 使用指针不用数组下标来打印数组内容
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//完成字符串的逆序
//int main()
//{
//	char arr[10] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);
//	int left = 0;
//	//int sz2 = sizeof(arr) / sizeof(arr[0]);
//	//printf("%d\n", sz2);
//	//sizeof 完全可以用于字符串（字符数组），只是它计算的是整个数组的内存大小，而非字符串的有效长度。
//	int sz = strlen(arr);
//	int right = sz - 1;
//	while (left < right)
//	{
//		char t = 0;
//
//		t = arr[left];
//		arr[left] = arr[right];
//		arr[right] = t;
//
//		left++,right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和,其中a是一个数字
//例如:2+22+222+2222+22222
//int main()
//{
//	int a;
//	int n;
//	int sum = 0;
//	scanf("%d %d", &a, &n);
//	int nx = a;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i>1)
//		{
//			nx = nx * 10 + a;
//		}
//		sum += nx;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//打印0~10000之间的水仙花数 n位数各位数的n次方之和等于本身 153=1^3+5^3+3^3
//int main()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		//1.计算n是几位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp/10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
// 打印棱形
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
// 法一
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)//6 1 6
//	{
//		for (int j = n - 1; j > i; j--)
//		{
//			printf(" ");
//		}
//		//上半部分分两次打印
//		//for (int j = 0; j <= i; j++)
//		//{
//		//	printf("*");
//		//}
//		//for (int j = 0; j < i; j++)
//		//{
//		//	printf("*");
//		//}
//		//上半部分一次打印
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("@");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < n - 1; i++)//6 1 6
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//下半部分分两次打印
//		//for (int j = n-1; j > i; j--)
//		//{
//		//	printf("*");
//		//}
//		//for (int j = n - 2; j > i; j--)
//		//{
//		//	printf("*");
//		//}
//		//下半部分一次打印
//		//for (int j = 0; j < 2 * n - 3 - 2 * i; j++)
//		//上面这个和下面这个都可以
//		for (int j = 0; j < 2 * (n - 1 - i) - 1; j++)
//		{
//			printf("@");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//法二 二维数组实现
//int main() 
//{
//	int n;
//	printf("请输入棱形上半部分的行数（比如7）：");
//	scanf("%d", &n);
//	// 最大行数 = 2n - 1
//	int total_rows = 2 * n - 1;
//	// 最大列数（星号最多的那一行的字符数） = 2n - 1
//	int max_cols = 2 * n - 1;
//	// 定义二维字符数组，用于存储棱形图案
//	// 注意：数组大小要足够大，这里假设 n <= 10，所以 20x20 足够
//	char diamond[20][20];
//	// 初始化数组，全部填充为空格
//	for (int i = 0; i < 20; i++) 
//	{
//		for (int j = 0; j < 20; j++) 
//		{
//			diamond[i][j] = ' ';
//		}
//	}
//	// ======================
//	// 1. 填充上半部分（包括中间行）
//	// 行号 i 从 0 到 n-1
//	for (int i = 0; i < n; i++)
//	{
//		int stars = 2 * i + 1;  // 当前行的星号个数：1, 3, 5, ..., 2n-1
//		int spaces = (max_cols - stars) / 2;  // 左右空格数，用来居中
//		for (int j = spaces; j < spaces + stars; j++) 
//		{
//			diamond[i][j] = '*';
//		}
//	}
//	// ======================
//	// 2. 填充下半部分
//	// 行号 i 从 n 到 total_rows - 1 （即 n 到 2n-2）
//	for (int i = n; i < total_rows; i++) 
//	{
//		// 对应上半部分的行号是：(total_rows - 1 - i)
//		int original_row = (total_rows - 1) - i;  // 映射回上半部分对应的行
//		int stars = 2 * original_row + 1;
//		int spaces = (max_cols - stars) / 2;
//		for (int j = spaces; j < spaces + stars; j++) 
//		{
//			diamond[i][j] = '*';
//		}
//	}
//	// ======================
//	// 3. 打印二维数组（即打印棱形）
//	for (int i = 0; i < total_rows; i++) 
//	{
//		for (int j = 0; j < max_cols; j++) 
//		{
//			printf("%c", diamond[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);//wang
//}
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18}};
//	fun(students + 1);
//	return 0;
//}
//喝汽水问题,一瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水(编程实现) 39瓶
//int Drink(int money, int sum)
//{
//	sum = sum + money;
//	if (money >= 2)
//	{
//		return Drink(money / 2, sum);
//	}
//}
//int main()
//{
//	int money;
//	scanf("%d", &money);
//	int sum = 0;
//	int total = Drink(money, sum);
//	printf("%d\n", total);
//	return 0;
//}
//int main()
//{
//	int money;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);//2*n-1
//	return 0;
//}
//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//	{
//		return 0;
//	}
//	else if (n == 1)
//	{
//		return 2;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//void main()
//{
//	fib(8);
//	printf("%d\n", cnt);//67
//}
//一道坑题 有关局部变量和全局变量的题
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);//1
//	return 0;
//}
//注释的另一种玩法     但这是预处理指令，不是普通注释。
//#if 0
//int main()
//{
//	//这块代码不会被编译
//	printf("hehe\n");
//	return 0;
//}
//#endif
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
//公倍数的计算 法一
//int main()
//{
//	int m, n;
//	int num;
//	scanf("%d %d", &m, &n);
//	num = m < n ? m : n;
//	while (num % m != 0 || num % n != 0)
//	{
//		if (m < n)
//		{
//			num += m;
//		}
//		else
//			num += n;
//	}
//	printf("%d\n", num);
//	return 0;
//}
//法二
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int num = a < b ? a : b;
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d", i * a);
//	return 0;
//}
//逆置字符串 I like Biejing. ---> Beijing. like I
//把整个句子逆序
//把每个单词逆序
//					很牛逼nbNB的一个方法   复习
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char str[101] = { 0 };
//	gets(str);// 读取用户输入的字符串（注意：gets不安全，实际开发建议用fgets）
//	int len = strlen(str);
//	reverse(str, str + len - 1);
//	char* start = str;
//	while (*start)// 当start未指向字符串结束符'\0'时，循环处理每个单词
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')// 如果不是结束符，说明遇到了空格
//		{
//			end++;
//		}
//		start = end;
//	}
//	printf("%s\n", str);
//	return 0;
//}
//整形存储和大小端
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("gun\n");
//	}
//	return 0;
//}
//signed int 和 int是一样的
//char 分为三种 char 和 signed char 和 unsigned char
//char到底是signed char还是unsigned char标准是未定义的,取决于编译器的实现
//构造类型(自定义类型):
//         数组类型
//         结构体类型   struct 
//		   枚举类型     enum
//		   联合类型     union
// 
//指针类型:
//			int* pi
//			char* pc
//			float* pf
//			void* pv
//
//空类型:
//void 表示空类型(无类型)
//通常应用于函数的返回类型,函数的参数,返回类型
//void test(void)
//第一个void表示test不会返回值
//第二个void表示test不需要传任何参数

//数值的表示形式
//2进制
//8进制
//10进制
//16进制
//十进制的21
//0b10101
//025
//21
//0x15
//
//整数的二进制表示有三种形式
//1.正整数的原反补码相同
//2.负整数的原反补码需要计算
//原码:直接通过正负的形式写出的二进序列就是原码
//反码:原码的符号位不变,其他位按位取反
//补码:反码+1
// 
//内存中存放的本质还是二进制序列
//VS调试窗口的内存显示的是16进制是方便我们看的
//
//int main()
//{
//	int a = 20;
//	//20
//	//00000000000000000000000000010100
//	//0x00 00 00 14
//	//00000000000000000000000000010100
//	//00000000000000000000000000010100
//	int b = -10;
//	//10000000000000000000000000001010
//	//0x80 00 00 0a 
//	//11111111111111111111111111110101
//	//0xff ff ff f5
//	//11111111111111111111111111110110
//	//0xff ff ff f6
//	return 0;
//	//0x11 22 33 44
//	//高位         低位
//	//  11 22 33 44				44 33 22 11
//	//低            高        低             高  
//	//大端字节序存储				小端字节序存储
//	//大小端的存储方式取决于硬件
//}
//大端【字节序】存储：
//把一个数据的高位字节序的内容存放在低地址处，把低位字节序的内容放在高地址处，就是大端字节序存储。
//小端【字节序】存储：
//把一个数据的高位字节序的内容存放在高地址处，把低位字节序的内容放在低地址处，就是小端字节序存储。
//int main()
//{
//	int a = 1;
//	printf("%p\n", *(char*)&a);//00000001 小端
//	return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	//核心是截断和整型提升
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	//10000000 00000000 00000000 00000001   --> -1
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111
//	//							 11111111 --> 截断的是后八位
//	printf("a=%d b=%d c=%d", a, b, c);//-1 -1 255
//	//%d 是打印有符号的整形 会发生整形提升 高位补1
//	//%d   打印无符号的整形				 高位补0
//	//11111111 11111111 11111111 11111111 - 内存中的补码
//	//10000000 00000000 00000000 00000000
//	//10000000 00000000 00000000 00000001 -> -1
//	return 0;
//	//有符号的char (-128)~127 最高位是来表示符号的
//	//无符号的char 0~255      最高位也是拿来表示大小的
//}
//unsigned short 
//00000000 00000000     0
//11111111 11111111     65535
//signed   short
//(-32768)~32767
//int main()
//{
//	int i = -20;
//	//100000000 00000000 00000000 00010100
//	//111111111 11111111 11111111 11101011
//	//111111111 11111111 11111111 11101100 -->(-20)的补码
//	unsigned int j = 10;
//	//000000000 00000000 00000000 00001010
//	printf("%d\n", i + j);// -10
//	//111111111 11111111 11111111 11101100 -->(-20)的补码
//	//000000000 00000000 00000000 00001010 -->(+10)的补码
//	//111111111 11111111 11111111 11110110 -->(i+j)的补码
//	//100000000 00000000 00000000 00001001
//	//100000000 00000000 00000000 00001010 -->(-10)
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//9 8 7 6 5 4 3 2 1 0 4294967295不断减少的四十二亿多的死循环
//		Sleep(1000);
//		//0-1是-1 但是i=-1被放在无符号整数里面全部都被当作有效位
//		//11111111 11111111 11111111 11111111 -->(-1)的补码
//	}
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//  //还是截断的知识
//	printf("%d", strlen(a));//255
//	return 0;
//}
//unsigned char i = 0;//0~255
////11111111
////
//int main()
//{
//	int count = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("Hello World\n");
//		count++;
//		//死循环
//	}
//	printf("%d", count);
//	return 0;
//}
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	if (my_strlen("abc") - my_strlen("abcdef") >= 0)
//		printf(">\n");
//	//strlen 返回类型是size_t --> unsigned int (因为长度不可能是负值)
//	//不相信的话可以转到定义去看
//	//快捷键 ctrl加鼠标左键
//	else
//		printf("<\n");
//	//用的是库函数strlen的话       会打印  大于号 ">"
//	//用的是自己的函数my_strlen的话 会打印  小于号 "<"
//	//因为库函数是size_t 而自己定义的my_strlen是int 
//	//想得到正确的也可以强制类型转换(int)strlen
//		return 0;
//}
//					浮点型在内存中的存储
//limits.h  float.h
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);//9
//	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);//1091567616
//	printf("*pFloat的值为：%f\n", *pFloat);//9.000000
//	return 0;
//	/*
//		n的值为：9
//		*pFloat的值为：0.000000
//		num的值为：1091567616
//		*pFloat的值为：9.000000
//	*/
//}
//					浮点数的存储规则
//根据国际标准 任何一个二进制浮点数V = (-1)^S * M * 2^E
//(-1)^s表示符号位,当S=0,V为正数  当S=1,V为负数
//M表示有效数字,大于等于1,小于2
//2^E表示指位数
//V = 5.0f
//101.0 --> 5.0的二进制表示形式
//1.01 * 2^2浮点右移两位  其实就是科学计数法 因为是二进制所以是2^n
//(-1)^0 * 1.01 * 2^2
//V = 9.5f
//9.5的二进制表示1001.1    小数点后第一位是2^(-1) = 0.5
//(-1)^0 * 1.0011 * 2^3
//   S=0  M=1.0011  E=3
//像9.6在内存中就无法精确保存
//IEEE 754 规定:
//对于 float  32位的浮点数,最高的1位是S,接着 8位是指数E,剩下的23位为有效数字M
//对于 double 64位的浮点数,最高的1位是S,接着11位是指数E,剩下的52位为有效数字M
/*
在C语言中
分为三个部分：符号位、指数位和尾数位。以下是具体规则：
### 1. 浮点数的组成（以32位`float`和64位`double`为例）
| 类型   | 总位数 | 符号位（S） | 指数位（E） | 尾数位（M） |
|--------|--------|-------------|-------------|-------------|
| float  | 32     | 1位         | 8位         | 23位        |
| double | 64     | 1位         | 11位        | 52位        |
### 2. 各部分含义
#### （1）符号位（S）
- 占1位，用于表示浮点数的正负：
  - `S=0`：正数
  - `S=1`：负数
#### （2）指数位（E）
- 用于表示科学计数法中的指数部分，采用**偏移码**（biased exponent）存储：
  - 对于`float`（8位指数）：偏移量为`127`（即`2^(8-1) - 1`）
  - 对于`double`（11位指数）：偏移量为`1023`（即`2^(11-1) - 1`）
- 实际指数 = 存储的指数值 - 偏移量
- 例如：`float`的指数位存储值为`130`，则实际指数为`130 - 127 = 3`
#### （3）尾数位（M）
- 用于表示科学计数法中的有效数字（小数部分），采用**隐含1位**的规格化表示：
  - 规格化的二进制浮点数可表示为 `1.M × 2^E`（`1` 是隐含的，不占用存储空间）
  - 尾数位存储的是 `M` 的小数部分（例如：`1.0101` 的尾数位存储 `0101`）
- 对于`float`（23位尾数）：实际有效位数为 `24` 位（隐含1
### 3. 特殊情况（指数位全0或全1）
- **指数位全0**：表示非规格化数（用于表示接近0的极小值），此时隐含位为`0`，位 + 23位存储）
- 对于`double`（52位尾数）：实际有效位数为 `53` 位即 `0.M × 2^(1 - 偏移量)`。
- **指数位全1**：
  - 尾数位全0：表示无穷大（`+∞` 或 `-∞`，由符号位决定）。
  - 尾数位非0：表示NaN（Not a Number，非数值，如`0/0`、`sqrt(-1)`等）。
### 4. 示例（32位`float`存储）
以 `float x = 5.5` 为例：
1. 转换为二进制：`5.5` → 整数部分`101` + 小数部分`0.1` → 合并为 `101.1`。
2. 规格化：`101.1 = 1.011 × 2^2`（即 `1.M × 2^E`，其中 `M=011`，`E=2`）。
3. 符号位：`S=0`（正数）。
4. 指数位：`E + 127 = 2 + 127 = 129` → 二进制 `10000001`。
5. 尾数位：存储 `M=011`，不足23位补0 → `01100000000000000000000`。
最终存储的32位二进制为：
`0 10000001 01100000000000000000000`
### 总结
- 浮点数通过符号位、指数位（偏移存储）和尾数位（隐含1位）表示。
- 精度有限（`float`约6-7位十进制，`double`约15-17位），存在舍入误差。
- 特殊值（0、±∞、NaN）有专门的存储规则。
理解该规则有助于解释浮点数的精度问题（如`0.1 + 0.2 != 0.3`）和范围限制。
*/
/*
  V = 0.5f
	= 0.1
	=1.0 *2^(-1)
	=(-1)^0 * 1.0 * 2^(-1)
		  S   M        E
*/
//有以下规定
//float  -> E（真实值） +127  （中间值） ->126  - 存储
//double -> E（真实值） + 1023（中间值） ->1022 - 存储
//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//1.011 * 2^2
//	//s=0 m=1.011 e=2
//	//0 10000001 01100000000000000000000 
//	//0100 0000 1011 0000 0000 0000 0000 0000 
//	//4    0    b    0    0    0    0    0
//	//2+127=129
//	return 0;
//}
//还原分3种情况
//E有0有1时
//0 10000001 01100000000000000000000 
//(-1)^0 * 1.01100000000000000000000 * 2^2
//E全为0
//E=1-127或(1-1023)即为真实值
//有效数字M不再加上第一位的1，而是还原为0.xXX×x×的小数。这样做是为了表示±0, 0的很小的数字
//E全为1
//这时,如果有效数字M全为0,表示+-无穷大(正负取决于符号位S)
//这时回过头来再看这题
//int main()
//{
//	int n = 9;
//	//00000000 00000000 00000000 00001001
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);//9
//	//0 00000000 00000000000000000001001
//	//E=-126
//	//M=0.00000000000000000001001
//	// + 0.00000000000000000001001 * 2^-126
//	//
//	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
//	*pFloat = 9.0;
//	//1001.0
//	//1.001 * 2^3
//	//S=0 E=3 M=1.001
//	//0 10000010 00100000000000000000000
//	//这个二进制序列直接被当成整数打印出来 可以打开计算器去运算
//	printf("num的值为：%d\n", n);//1091567616
//	printf("*pFloat的值为：%f\n", *pFloat);//9.000000
//	return 0; 
//}
//调整奇数偶数顺序
//使奇数在数组中全部位于偶数前面 并按从小到大排序
//										笨拙的方法一
//void sort(int* arr, int sz, int* arr2)
//{
//	//先分类
//	int j = 0;
//	int m = sz;
//	for (int i = 0; i < sz; i++)
//	{
//
//		if (arr[i] % 2 != 0)
//		{
//			arr2[j] = arr[i];
//			j++;
//		}
//		else
//		{
//			arr2[m - 1] = arr[i];
//			m--;
//		}
//	}
//	//排序
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//scanf("%d", &arr[i]);两种写法一样
//		scanf("%d", arr + i);
//	}
//	//调整
//	int arr2[10001] = { 0 };
//	sort(arr, sz, arr2);
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//先进的法二  (但仍有漏洞)
//void sort(int* arr, int* sz)
//{
//	int left = 0;
//	int right = *sz - 1;
//	while (left < right)
//	{
//		if (arr[left] % 2 == 0 && arr[right] % 2 != 0)
//		{
//			int t = arr[left];
//			arr[left] = arr[right];
//			arr[right] = t;
//		}
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//调整
//	sort(arr, &sz);
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//法三 更进一步
// 调整函数：将奇数放到偶数前面，不排序
//void sort(int* arr, int* sz)
//{
//	int left = 0;
//	int right = *sz - 1;
//	while (left < right)
//	{
//		// 从左往右找到第一个偶数
//		while (left < right && arr[left] % 2 != 0)
//			left++;
//		// 从右往左找到第一个奇数
//		while (left < right && arr[right] % 2 == 0)
//			right--;
//		// 交换奇数和偶数
//		if (left < right)
//		{
//			int t = arr[left];
//			arr[left] = arr[right];
//			arr[right] = t;
//			left++;
//			right--;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	printf("请输入10个整数：\n");
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	// 调整奇偶位置
//	sort(arr, &sz);
//	// 输出结果
//	printf("调整后（奇数在前，偶数在后，未排序）：\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//法四	   涉及malloc
// qsort 比较函数，用于升序排序
//int compare(const void* a, const void* b) 
//{
//	return (*(int*)a - *(int*)b);
//}
//// 调整函数：奇数在前偶数在后，且各自排序
//void sort(int* arr, int sz)
//{
//	int* odds = (int*)malloc(sz * sizeof(int));
//	int* evens = (int*)malloc(sz * sizeof(int));
//	int oddCount = 0, evenCount = 0;
//	// 第一步：分离奇数和偶数
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 != 0) 
//		{
//			odds[oddCount++] = arr[i];  // 奇数
//		}
//		else 
//		{
//			evens[evenCount++] = arr[i]; // 偶数
//		}
//	}
//	// 第二步：分别排序
//	qsort(odds, oddCount, sizeof(int), compare);
//	qsort(evens, evenCount, sizeof(int), compare);
//	// 第三步：合并回原数组：奇数在前，偶数在后
//	int index = 0;
//	for (int i = 0; i < oddCount; i++)
//	{
//		arr[index++] = odds[i];
//	}
//	for (int i = 0; i < evenCount; i++) 
//	{
//		arr[index++] = evens[i];
//	}
//	// 释放临时数组
//	free(odds);
//	free(evens);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	printf("请输入10个整数：\n");
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	// 调整：奇数在前，偶数在后，且各自排序
//	sort(arr, sz);
//	// 输出
//	printf("调整后（奇数在前升序，偶数在后升序）：\n");
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//数据范围：1 ≤ n, m ≤ 1000
//1≤n, m≤1000  ， 序列中的值满足0≤val≤30000
//0≤val≤30000
//输入描述：
//输入包含三行，
//第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//第二行包含n个整数，用空格分隔。
//第三行包含m个整数，用空格分隔。
//输出描述：
//输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。
//法一 简单实现 但时间复杂度为O((n+m)²) 且没利用原序列的升序 冒泡排序
//void sort(int* nx, int* mx, int n, int m)
//{
//	int arr[20002] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = nx[i];
//	}
//	for (int j = n; j < n + m; j++)
//	{
//		arr[j] = mx[j-n];
//	}
//	int left = 0;
//	int right = n + m - 1;
//	//冒泡一下就可以了
//	for (int i = 0; i < m + n - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < m + n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int l = 0; l < m + n; l++)
//	{
//		printf("%d ", arr[l]);
//	}
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int nx[10001] = { 0 };
//	int mx[10001] = { 0 };
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &nx[i - 1]);
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		scanf("%d", &mx[i - 1]);
//	}
//	sort(nx, mx, n, m);
//	return 0;
//}//等会优化一下
//这里引入归并排序
//法二 归并两个有序数组
//void merge(int* nx, int* mx, int n, int m) 
//{
//	int i = 0;  // 第一个数组的索引
//	int j = 0;  // 第二个数组的索引
//	int k = 0;  // 结果数组的索引
//	int result[2000] = { 0 };  // 存储合并结果
//	// 同时遍历两个数组，按顺序放入结果数组
//	while (i < n && j < m) 
//	{
//		if (nx[i] <= mx[j]) 
//		{
//			result[k++] = nx[i++];
//		}
//		else 
//		{
//			result[k++] = mx[j++];
//		}
//	}
//	// 处理第一个数组剩余元素
//	while (i < n) 
//	{
//		result[k++] = nx[i++];
//	}
//	// 处理第二个数组剩余元素
//	while (j < m) 
//	{
//		result[k++] = mx[j++];
//	}
//	// 输出结果
//	for (int l = 0; l < n + m; l++) 
//	{
//		printf("%d ", result[l]);
//	}
//}
//法二 的进阶 归并排序进阶直接打印
//void sort(int* nx, int* mx, int n, int m)
//{
//	//1 3 7 9 22
//	//2 8 10 17 33 44
//	int i = 0, j = 0;
//	int min = nx[0];
//	while (i < n && j < m)
//	{
//		if (nx[i] < mx[j])
//		{
//			printf("%d ", nx[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d ", mx[j]);
//			j++;
//		}
//	}
//	if (i<n)
//	{
//		for (; i < n; i++)
//		{
//			printf("%d ", nx[i]);
//		}
//	}
//	else
//		for (; j < m; j++)
//		{
//			printf("%d ", mx[j]);
//		}
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int nx[10001] = { 0 };
//	int mx[10001] = { 0 };
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &nx[i - 1]);
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		scanf("%d", &mx[i - 1]);
//	}
//	sort(nx, mx, n, m);
//	return 0;
//}
//法三 最牛逼NB的版本了
//int main()
//{
//	int a, b, c[100], temp;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	for (int i = 1; i <= a + b; i++) {
//		scanf("%d", &c[i]);
//	}
//	for (int i = 1; i <= a + b; i++)
//	{
//		for (int j = 1; j <= a + b - i; j++)
//		{
//			if (c[j] > c[j + 1])
//			{
//				temp = c[j];
//				c[j] = c[j + 1];
//				c[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 1; i < a + b + 1; i++) {
//		printf("%d ", c[i]);
//	}
//	return 0;
//}
//指针进阶
//字符指针
//指针数组
//数组指针
//数组参数 指针参数
//函数指针
//函数指针数组
//指向函数指针数组的指针
//回调指针
//指针和数组面试题的解析
//int main()
//{
//	//char ch = 'w';
//	//char* pc = &ch;
//	//*pc = 'b';
//	//printf("%c\n", ch);
//	const char* p = "abcdef";//把字符串首字母a的地址赋值给了p
//	//*p = 'w';//err  放报错可以在char*p前面加上const
//	printf("%s\n", p);
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	return 0;
//}
//字符指针
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	const char* p3 = "abcdef";
//	const char* p4 = "abcdef";
//	//char的abcdef被放在只读区域所以两个指针指向同一块空间
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (p1 == p2)
//		printf("p1=p2\n");//输出
//	else
//		printf("p1!=p2\n");//不输出
//	if (p3 == p4)
//		printf("p3=p4\n");//输出
//	else
//		printf("p3!=p4\n");//不输出
//	if (arr1 == arr2)
//		printf("arr1=arr2\n");//不输出
//	else
//		printf("arr1!=arr2\n");//输出
//	return 0;
//}
//指针数组
//int main()
//{
//	int arr[10] = {0};
//	char ch[5] = { '*' };
//	//指针数组
//	int* arr2[6];
//	char* ch2[5];
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	//一维数组用指针模拟实现二维数组 但是二维数组在内存中是连续存放的 而以下在内存中不一定连续排放
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//*(p+i) --> p[i]这两种是等价的
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 数组指针（Array Pointer）
//​含义​：指向数组的指针，即这个指针指向的是一个整个数组。
//​类型示例​：int(*p)[n];
//这表示 p 是一个指针，它指向一个包含 n 个 int 元素的数组。
//​通俗理解​：指针指向的是一块连续的、固定大小的内存区域（一个数组）。是指针
//int main()
//{
//	//两者有区别
//	//int *p1[10]指针数组
//	//int (*p2)[10]数组指针
//	//p2是数组指针，p2可以指向一个数组，该数组有10个元素，每个元素是int类型
//
//	int arr[10] = { 0 };
//	int* p = arr;
//	int(*p2)[10] = &arr;
//
//	//printf("%p\n", arr);
//	//printf("%p\n", arr+1);
//
//	//printf("%p\n", &arr[1]);
//	//printf("%p\n", &arr[0]+1);
//
//
//	//printf("%p\n", &arr);
//	//printf("%p\n", &arr+1);
//
//	//printf("%p\n", arr[0]);
//	//printf("%p\n", arr[0]);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr;//会有警告
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//错误示范
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);//p是指向数组的,*p其实就相当于数组名 数组名又是首元素的地址
//		//12516148 12516148 12516148 12516148 12516148 12516148 12516148 12516148 12516148 12516148
//		//每次都会产生10串随机的数字
//		printf("%d ", *(*p+i));//这样就是正确的 但不推荐因为比较麻烦
//	}
//	printf("\n");
//	//正确示范
//	int* pp = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pp + i));
//	}
//	return 0;
//}
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int r, int c)//指向数组的指针，即这个指针指向的是一个整个数组
////int (*p)[5]
////p的类型是:int(*)[5]
////p是指向一个整形数组的,数组5个元素 int [5]
////p+1 -> 跳过一个5个int元素的数组
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			//外层的那个*：*(*(p + i) + j)
//			//*(p + i) + j 是第 i 行第 j 列元素的地址。
//			//	再对其解引用 * ，就得到了第 i 行第 j 列的 ​值（int 类型）​。
//			printf("%d ", p[i][j]);//运行结果与往上面3行那行一样
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print1(arr, 3, 5);
//	printf("\n");
//	//二维数组首元素是它的第一行
//	print2(arr, 3, 5);
//	//arr表示第一行的地址
//	//第一行的地址是一个一维数组的地址
//	return 0;
//}
//在 C/C++ 中，&数组名 和 数组名 看似相似，实则代表完全不同的含义，核心区别在于它们的类型和所表示的地址意义：
//1. 数组名（如 arr）
//类型：数组名在大多数语境下会被隐式转换为指向数组第一个元素的指针（即 “指针退化”），类型为 元素类型 * 。
//例如：int arr[5]; 中，arr 会被转换为 int* 类型（指向 arr[0] 的指针）。
//地址值：数组名表示的地址是数组第一个元素的起始地址。
//例外情况：当数组名作为 sizeof、& （取地址符）的操作数时，不会发生指针退化，此时数组名代表整个数组。
//2. & 数组名（如 & arr）
//类型：表示指向整个数组的指针，类型为 元素类型(*)[数组长度]（数组指针）。
//例如：int arr[5]; 中，& arr 的类型是 int(*)[5]（指向包含 5 个 int 的数组的指针）。
//地址值： & arr 表示的地址和数组名（arr）的地址值在数值上相同（都是数组的起始地址），但含义完全不同：
//arr 指向第一个元素（地址是元素的起点）。
//& arr 指向整个数组（地址是数组整体的起点）。
//比如arr[5]={1,2,3,4,5};
//arr + 1 移动的步长是一个元素的大小（4 字节）。
//& arr + 1 移动的步长是整个数组的大小（20 字节）。
//二维数组数组名指的是二维数组中第一个数组的地址，一维数组数组名指的首元素地址，这两个分清楚就能理解这个了
//int main()
//{
//	int arr[5];//
//	int* parr1[10];//整形指针数组
//	int (*parr2)[10];//数组指针
//	int (*parr3[10])[5];//存放数组指针的数组
//	return 0;
//}
//数组参数 指针参数
//数组传参宗旨:形参,实参类型一致就可以了 
//看手机的2025.11.16的截图
//int main()
//{
//
//	return 0;
//}
//函数指针 --> 指向函数的指针就是函数指针
//数组指针 --> 再强调一遍  指向数组的指针就是数组指针
// //							函数指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	//&数组名-取出的数组的地址
//	int (*p)[5] = &arr;
//	//&函数名-取出的就是函数的地址
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//对于函数来说,&函数名和函数名都是函数的地址
//	//所以以下这两种写法一致
//	int (*pf)(int, int) = &Add;
//	int (*ppf)(int, int) = Add;
//	int ret = (*pf)(2,3);//调用函数很神奇的一种写法
//	int ret2 = ppf(3, 4);
//	printf("%d\n", ret);
//	printf("%d\n", ret2);
//	return 0;
//}
//int Add(int x,int y)
//{
//	return x + y;
//}
//void calc(int(*pf(int, int)))
//{
//	int a = 3;
//	int b = 5;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}
//int main()
//{
//	calc(Add);
//	return 0;
//}
//函数一定义就有地址了
//二维数组传参时，除了第一维，后续维度长度必须在形参里写死或用宏 / 常量表达式。
//例如 void bar(int arr[][COLS], int rows) 或 void baz(int (*arr)[COLS], int rows)
//编译器需要这些信息计算 arr[i][j] 时的偏移量；不能只写 int** arr，因为那指向的是指针数组的指针，内存布局不同。
//如果二维数组的列数在运行时才确定，可改用一维数组模拟：void bar(int* arr, int rows, int cols)，
//访问时手动计算索引 arr[i * cols + j]；或者使用动态内存 + 指针数组，
//每行单独 malloc 一段，再传 int** arr 并在函数内部按“指针数组”方式访问。
//动态可变维度（C99 可变长数组, VLA）也可以：void bar(int rows, int cols, int arr[rows][cols])，
//前提是编译器支持 C99。
//简单示例：
//void sum1d(int* arr, int n)
//{
//	int s = 0;
//	for (int i = 0; i < n; i++)
//	{
//		s += arr[i];
//	}
//	printf("%d\n", s);
//}
//#define COLS 5
//void print2d(int rows, int arr[][COLS])
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//调用时分别传 sum1d(a, n); 、print2d(r, matrix); 即可。
//函数指针的使用
//复习下
//void test(const char* str)
//{
//	printf("test()\n");
//	return 0;
//}
//int main()
//{
//	//函数指针 -> 也是一种指针,是指向函数的指针
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	int (*pf)(const char*) = test;
//	(*pf)("abc");
//	test("def");
//	return 0;
//}
//两段有趣的代码 较为晦涩难懂
//int main()
//{
//	( * ( void (*) () ) 0 );
//	//将整数 0 强制转换为一个函数指针（无参数、返回 void），
//	//然后试图调用该地址（0）处的函数。极其危险，通常导致崩溃。用于底层教学或特殊场景。
//	return 0;
//}
//int main()
//{
//	void( *signal( int, void(*)(int) ) )  (int);
//	//这是函数 signal的声明，它用于设置信号处理函数。
//	//它接收一个信号编号和一个函数指针，返回之前的信号处理函数（也是一个函数指针）。
//	//这是标准 C 库函数，用于信号处理（如 SIGINT）。
//	//鹏哥理解:
//	//signal是函数名,以上代码是一次函数声明
//	//声明的signal函数的第一个参数的类型是int,第二个参数的类型是函数指针,该函数指针指向的函数参数是int,返回类型是void
//	//signal函数的返回类型也是一个函数指针,该函数指针指向的函数参数也是int,返回类型也是void
//	return 0;
//}
//typedef 原类型名 新类型名;
//上面的代码晦涩难懂 下面就来简化一下
//typedef void(*)(int)pf_t;//err
//typedef void(*pf_t)(int);//right //把void(*)(int)重命名为pf_t
//int main()
//{
//	//void(*signal(int, void(*)(int)))  (int);
//	pf_t signal(int, pf_t);
//	return 0;
//}
//函数指针的用途
//做一个计算器
//void menu(void)
//{
//	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
//	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
//	printf("@@@@@    1.Add       2.sub         @@@@@\n");
//	printf("@@@@@    3.Mul       4.Div         @@@@@\n");
//	printf("@@@@@         0.EXIT               @@@@@\n");
//	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
//	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void calc(int (*pf)(int, int))
//{
//	int x;
//	int y;
//	int ret = 0;
//	printf("请输入2个操作数:>\n");
//	scanf("%d %d", &x, &y);
//	ret = (*pf)(x, y);
//	//ret = (pf)(x,y);
//	printf("%d\n", ret);
//	Sleep(1000);
//	system("cls");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入你要进行的操作对应的数\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出程序\n");
//			//Sleep(1000);
//			system("cls");
//			break;
//		default:
//			printf("选择错误请重新选择\n");
//			//Sleep(1000);
//			system("cls");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//函数指针的使用在大型工程经常使用
//函数指针也是指针 把函数指针放在数组中就是函数指针数组
//函数指针数组
//int main()
//{
//	int (*pf)(int, int) = Add;
//	int(*arr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d\n", ret);
//	}
//	return 0;
//}
//结合上面两个实现利用函数指针数组实现计算器
//void menu(void)
//{
//	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
//	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
//	printf("@@@@@    1.Add       2.sub         @@@@@\n");
//	printf("@@@@@    3.Mul       4.Div         @@@@@\n");
//	printf("@@@@@         0.EXIT               @@@@@\n");
//	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
//	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input;
//	int x, y;
//	int (*pfarr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	//函数指针数组
//  //转移表
//	do {
//		again:
//		menu();
//		printf("请输入你要进行的操纵\n");
//		scanf("%d", &input);
//		//简化代码避免不必要的冗余代码
//		if (input == 0)
//		{
//			printf("退出星子计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个整数\n");
//			scanf("%d %d", &x, &y);
//			int ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误请重新输入\n");
//		}
//	} while (input);
//	do {
//		printf("真的要退出吗\n");
//		printf("Yes/No\n");
//		char s[4];
//		scanf("%s", &s);
//		if (strcmp(s, "No"))
//			return 0;
//		else if (strcmp(s, "Yes"))
//			goto again;
//		else
//		{
//			printf("输入错误请重新输入\n");
//		}
//	} while (strcmp);
//	return 0;
//}
//指向函数指针数组的指针
//指向函数指针数组的指针是一个指针
//指针指向一个数组,数组的元素是函数指针
//int main()
//{
//	int (*pfarr[5])(int, int) = { 0 };
//	int (*(*ppfarr[5]))(int, int) = &pfarr;
//	return 0;
//}
//回调函数
//回调函数：计算两个数的和
//在 C 语言中，回调函数的实现依赖于函数指针（指向函数的指针变量），
//通过将函数指针作为参数传递给其他函数，实现 “在特定时机调用该函数” 的逻辑。
//核心步骤
//1.定义回调函数：普通函数，用于实现具体逻辑。
//2.声明函数指针类型：明确指针指向的函数的参数和返回值类型。
//3.接收回调的函数：将函数指针作为参数，在内部通过指针调用回调函数。
//int add(int a, int b) 
//{
//	return a + b;
//}
//// 回调函数：计算两个数的积
//int multiply(int a, int b) 
//{
//	return a * b;
//}
//// 函数指针类型（参数为两个int，返回值为int）
//typedef int (*MathOperation)(int, int);//为 "int (*)(int, int)" 定义别名 "MathOperation"
//// 接收回调的函数：执行运算并打印结果
//void calculate(int x, int y, MathOperation op) 
//{
//	int result = op(x, y); // 调用回调函数
//	printf("结果：%d\n", result);
//}
//int main()
//{
//	calculate(3, 4, add);      // 输出：结果：7
//	calculate(3, 4, multiply); // 输出：结果：12
//	return 0;
//}
//冒泡再认识 关键字qsort
//int bubble_sort(int arr[], int sz)
//{
//	int j = 0;
//	//一趟冒泡排序
//	for (j = 0; j < sz - 1; j++)
//	{
//		int flag = 1;
//		for (int i = 0; i < sz - 1 - j; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int t = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = t;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//qsort库函数 使用快速排序的思想实现的一个排序函数
//void qsort(
//	void* base,//你要排序的数据的起始位置
//	size_t num,//待排序的数据元素的个数
//	size_t width,//待排序的数据元素的大小(单位是字节)
//	int(__cdecl* compare)(const void* elem1, const void* elem2) //函数指针-比较函数
//);
//__cdecl 函数调用约定
//int cmp_int(const void* e1, const void* e2)
//{
//	//e1 < e2 返回 <0
//	//e1 = e2 返回  0
//	//e1 > e2 返回 >0
//  //int compare(const void *a, const void *b);
//	//返回负数：a 排在 b 前面
//	//返回 0：a 和 b 相等
//	//返回正数：a 排在 b 后面
//	//if (*(int*)e1 > *(int*)e2)//所以这里强制类型转化为整形指针
//	//{
//	//	return 1;
//	//}
//	//else if (*(int*)e1 = *(int*)e2)//too
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	return -1;
//	//}
//	//上面的写法过于啰嗦 下面写法简洁一点
//	return (*(int*)e1 - *(int*)e2);
//}
//int main()
//{
//	int arr[] = { 6,7,8,9,99,4,3,2,1,0 };
//	//把数组排成升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);//回调函数实现qsort qsort默认排升序
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
//void*是啥 
//int main()
//{
//	int a = 10;
//	char* pa = &a;//int *
//	void* pv = &a;//void* 是无具体类型的指针,可以接受任意类型的地址
//	//void*是无具体类型的指针,所以不能解引用,也不能+-指针
//	return 0;
//}
//qsort和bubble_sort的进阶NB牛逼法 建议多加复习
//里面的char* 函数指针与回调函数需要好好理解
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);//--> 把 e1 转成 int* 类型，再解引用，得到第一个整数
//	//< 0：表示 e1 < e2，排序时 e1 会排在 e2 前面 ✅
//	//== 0：e1 和 e2 相等，顺序无所谓
//	//> 0：e1 > e2，e1 会排在 e2 后面 ✅
//}
//int cmp_Stu_by_age(const void* e1, const void* e2)
//{
//	//return strcmp(((struct Stu*)e1)->age, ((struct Stu*)e2)->age);
//	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
//}
//int cmp_Stu_by_name(const void* e1, const void* e2)
//{
//	//strcmp的返回值恰好是  --->  0 >0 <0 这三种
//	//strcmp的大小比较逻辑是
//	//abc                      --> 大
//	//abbjhdjhjfoisjfoiejf     --> 小
//	//按26位字母顺序来 称之为:字典序升序排序
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void swap(char* buf1, char* buf2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int j = 0;
//	//一趟冒泡排序
//	for (j = 0; j < sz - 1; j++)
//	{
//		int flag = 1;
//		for (int i = 0; i < sz - 1 - j; i++)
//		{
//			if (cmp((char*)base + i * width, (char*)base + (i + 1) * width) > 0)
//			{
//				swap((char*)base + i * width, (char*)base + (i + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//void test1()
//{
//	int arr[] = { 6,7,8,9,99,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	//return 0;
//}
//void test2()
//{
//	//使用qsort来排序结构数据
//	struct Stu s[] = { {"zhangsan",15} ,{"lisi",30}, {"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_Stu_by_name);
//	printf("\n【test2】排序后的结构体数组（按 name）:\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("Name: %+10s, Age: %d\n", s[i].name, s[i].age);
//	}
//}
//void test3()
//{
//	int arr[] = { 6,7,8,9,99,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	//return 0;
//}
//void test4()
//{
//	struct Stu s[] = { {"zhangsan",15} ,{"lisi",30}, {"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_Stu_by_age);
//	printf("\n【test2】排序后的结构体数组（按 age）:\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("Name: %-10s, Age: %d\n", s[i].name, s[i].age);
//	}
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	test4();
//	return 0;
//}
//										指针	笔试题详解
//要去画图 要去画图 要去画图
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	//x86是4 x64是8
//	printf("%d \n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//4        
//	//上面的a表示首元素的地址 a+0还是首元素的地址 所以是4
//	//a   <==> &a[0]
//	//a+0 <==> &a[0]+0
//	printf("%d\n", sizeof(*a));//4        
//	//*a中的a就是首元素的地址,*a就是对首元素地址的解引用,找到的就是首元素       
//	printf("%d\n", sizeof(a + 1));//4     
//	//a+1是第二个元素的地址 与上面同理   
//	printf("%d\n", sizeof(a[1]));//4      
//	printf("%d\n", sizeof(&a));//4  
//	//&a取出的数组的地址,数组的地址,也就是个地址
//	printf("%d\n", sizeof(*&a));//16         
//	//这里的a是整个数组 
//	//&a ----> int(*)[4]
//	//是数组指针 解引用时访问整个数组
//	//指针类型决定解引用时访问的字节数
//	printf("%d\n", sizeof(&a + 1));//4       
//	//&a+1取出整个数组的地址+1就是直接跳过了整个数组指向数组的最后面
//	//&a--> int(*)[4]
//	//&a+1 是从数组a的地址向后跳过了一个(4个整形元素)的数组的大小
//	printf("%d\n", sizeof(&a[0]));//4       
//	printf("%d\n", sizeof(&a[0] + 1));//4 
//	//第二个元素的地址
//	return 0;
//}
//与上面的对照参考一下
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	//字符串才加\0
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));//4
//	//32位系统中指针大小固定为4字节,64位系统会是 8 字节
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4
//	printf("%d\n", sizeof(&arr + 1));//4
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	printf("%d\n", sizeof(arr[0]+1));//4
//	//会发生整型提升 整形的话就是4个字节
//}
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };  // 无 '\0'，不是标准C字符串
//	//strlen是求字符串长度的
//	printf("%d\n", strlen(arr));//随机值 >=6
//	printf("%d\n", strlen(arr + 0));//随机值 >=6
//	//printf("%d\n", strlen(*arr));//strlen('a') --> strlen(97)   野指针
//	//printf("%d\n", strlen(arr[1]));//strlen(98)                 野指针
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值-1
//	//printf("%d\n", strlen(arr[0] + 1));//err
//	//
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	//[a b c d e f \0]
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	printf("%d\n", strlen(arr));        // 6
//	printf("%d\n", strlen(arr + 0));    // 6
//	//printf("%d\n", strlen(*arr));       // 编译警告/运行崩溃（危险！）
//	//printf("%d\n", strlen(arr[1]));     // 编译警告/运行崩溃（危险！）
//	printf("%d\n", strlen(&arr));       // 6
//	printf("%d\n", strlen(&arr + 1));   // 随机值（越界）
//	printf("%d\n", strlen(&arr[0] + 1));// 5
//
//	printf("\n");
//
//	char* p = "abcdef";//       
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(p + 1));//4
//	printf("%d\n", sizeof(*p));//1 对char*类型解引用
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));//4 二级指针
//	printf("%d\n", sizeof(&p + 1));//4
//	printf("%d\n", sizeof(&p[0] + 1));//4
//
//	printf("\n");
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err     野指针
//	//printf("%d\n", strlen(p[0]));//err   野指针
//	printf("%d\n", strlen(&p));//随机值    二级指针
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//	//p[0]：        等价于 *(p + 0)，即 p 指向的字符串首元素 'a'（因为 p 存的是 'a' 的地址）；
//	//&p[0]：       取 'a' 的地址，本质和 p 完全等价（ & p[0] == p），类型是 char* ，指向 'a'；
//	//& p[0] + 1：  字符指针加法，偏移量 = 1 字节（char 类型大小），
//	//              所以指向 'a' 后面的第一个元素 'b'（地址 = 'a' 的地址 + 1）。
//
//	//二维数组
//	int a[3][4] = { 10 };
//	//口口口口
//	//口口口口
//	//口口口口
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 a[0]表示第一个整个的这个一维数组
//	printf("%d\n", sizeof(a[0] + 1));//4  &a[0][0]+1
//	//这里的a是首元素的地址 表示第一行的一个元素的地址 a[0]+1就是第一行第二列的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4
//	//a+1是第二行的地址
//	printf("%d\n", sizeof(*(a + 1)));//16
//	//*(a+1) --> a[1]
//	printf("%d\n", sizeof(&a[0] + 1));//4
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//
//	return 0;
//}
//struct Test
//{
//	int num;
//	char* pcname;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
////已知上面这个是结构体大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1); //00100014
//	//0x100000+20 -->0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//00100001
//	//1,048,576+1 --> 1,048,577
//	//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//00100004
//	//0x100000+4 ---> 0x100004
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);//00 00 00 04
//	//VS是小端存储模式
//	int* ptr2 = (int*)((int)a + 1);//02 00 00 00
//	//00 00 00 01 --> 00 00 00 02
//	//02 00 00 00
//	printf("%x %x", ptr1[-1], *ptr2);//4     02 00 00 00
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	//数组内容是  因为是小括号不是大括号 是逗号表达式 一个小坑
//	// 1 3 5
//	// 0 0 0
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//1
//	return 0;
//}
//int main()
//{
//	//下面这题很难
//	int a[5][5];
//	int (*p)[4];
//	p = a;
//	//a --> int(*)[5]
//	//p --> int(*)[4]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//FFFFFFFC,-4
//
//	//这道简单一点
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	// 1 2 3 4 5
//	// 6 7 8 9 10
//	int* ptr1 = (int*)(&aa + 1);//
//	int* ptr2 = (int*)(*(aa + 1));//
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 5
//
//	return 0;
//}
//int main()
//{
//	char* a[] = { "work","at","alibaba" };//指针数组
//	char** pa = a;//
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}
//终极指针题 难度很大 
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };//指针数组
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);//POINT   这里++ --会改变了指针的位置
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	//* *(cpp-2)+3
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	//*(*(cpp-1)-1)+1
//	return 0;
//}
//字符函数和字符串函数
//求字符串长度
//strlen
//长度不受限的字符串函数
//strcpy
//strcat
//strcmp
//长度受限的字符串函数介绍
//strncpy
//strncat
//strncmp
//字符串查找
//strstr
//strtok
//错误信息报告
//strerror
//字符操作
//内存操作函数
//memcpy
//memmove
//memset
//memcmp
//下面计数器方法实现my_strlen
//还可以用指针-指针
//
//size_t my_strlen(const char* str)
//{
//	assert(str);//确保不是空指针
//	size_t count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//复习strlen
//int main()
//{
//	
//	//strlen 返回值是size_t 其实就是unsigned int
//	char arr1[] = { "abcdef" };
//	char arr2[] = { 'a','b','c' };
//	int len1 = strlen(arr1);//6
//	int len2 = strlen(arr2);//向后一直找到\0
//	printf("%d\n%d\n", len1, len2);//6 >3的随机值
//	if ((strlen("abc") - strlen("abcdef")) > 0)
//	{
//		//相减的-3被当无符号整形来理解 所以是大于
//		printf(">\n");//✔
//	}
//	else
//		printf("<\n");//×
//	char arr[] = "abcdef";
//	size_t n = my_strlen(arr);
//	printf("%u\n", n);
//	return 0;
//}
//strcpy
//int main()
//{
//	char name[20] = { 0 };
//	strcpy(name,"zhangsan");
//	//拷贝遇到\0就结束了
//	//但是也会拷贝\0
//	//目标空间必须足够大，以确保能放得下源字符串
//	//目标空间必须可变
//  //strcpy返回的是目标空间的起始地址
//	printf("%s\n", name);
//	return 0;
//}
//char* my_strcpy(char* arr2, const char* arr1)
//{
//	assert(arr1&&arr2);
//	char* ret=arr1;
//	while (*arr2++ = *arr1++)
//	{
//		;
//	}
//	//*arr2 = *arr1;//\0
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}
//字符串追加strcat
//char* my_strcat(char*arr1,const char* src)
//{
//	assert(arr1 && src);
//	char* ret = arr1;
//	//先找到目标空间的末尾
//	while (*arr1 != '\0')
//	{
//		arr1++;
//	}
//	//while(*arr1++ = *src++)
//	//	;
//	//再拷贝过去
//	while (*src != '\0')
//	{
//		*arr1 = *src;
//		arr1++;
//		src++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[25] = "Hello ";
//	strcat(arr1, "World!");
//	printf("%s\n", arr1);
//	my_strcat(arr1," XZ_yu");
//	//需要注意的是 被追加的字符串要预留足够的空间
//	//追加到\0时停止
//	printf("%s\n", arr1);
//	my_strcat(arr1, arr1);
//	printf("%s\n", arr1);
//	return 0;
//}
//strcmp
//比较两个字符串
//int strcmp( const char *string1, const char *string2 )
//比较一下两个字符串是否相等
//string1 < string2 返回<0的数字
//string1 0 string2 返回 0
//string1 > string2 返回>0的数字
//my_strcmp版本一 法一
//int my_strcmp(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//my_strcmp版本二 法二
//int my_strcmp(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//int main()
//{
//	char arr1[] = "zhangsan";
//	char arr2[] = "zhangsanfeng";
//	int ret1 = strcmp(arr1, arr2);
//	if (ret1 == 0)
//		printf("相等\n");
//	else if (ret1 > 0)
//		printf(">\n");
//	else
//		printf("<\n");//✔😊
//
//	char arr7[] = "zhangsan";
//	char arr8[] = "zhangsanfeng";
//	int ret4 = my_strcmp(arr7, arr8);
//	if (ret4 == 0)
//		printf("相等\n");
//	else if (ret4 > 0)
//		printf(">\n");
//	else
//		printf("<\n");//✔😊
//
//	char arr3[] = { "abd" };
//	char arr4[] = { "b" };
//	int ret2 = strcmp(arr3, arr4);
//	if (ret2 == 0)
//		printf("相等\n");
//	else if (ret2 > 0)
//		printf(">\n");
//	else
//		printf("<\n");//✔😊
//
//	char arr5[] = { "a" };
//	char arr6[] = { "A" };
//	int ret3 = strcmp(arr5, arr6);
//	if (ret3 == 0)
//		printf("相等\n");
//	else if (ret3 > 0)
//		printf(">\n");//✔😊
//	else
//		printf("<\n");
//
//	return 0;
//}
//长度受限的字符串函数介绍
//strncpy
//strncat
//strncmp
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "hello bit";
//	//strcpy(arr1, arr2);
//	strncpy(arr1, arr2, 5);
//	//这里要保证arr2的字符数量大于5
//	//比strcpy多了一个size_t num这个参数
//	printf("%s\n", arr1);
//	return 0;
//}
//strncat和strncmp也是同理
//strstr函数
//查找子串的一个函数
//str1里面查找str2这个子串并返回子串所在字符所在的第一个地址
//查找不到就返回空指针NULL 只要str2里面有一个字符和str1不一样就会返回NULL
//char* my_strstr(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return (char*)p;
//		p++;
//	}
//	return NULL;
//}
//void print(char* p)
//{
//	while (*p != '\0')
//	{
//		printf("%c", *p);
//		p++;
//	}
//	printf("\n");
//}
//int main()
//{
//	char email[] = "zpw@bitejiuyeke.com";
//	char substr1[] = ".com";
//	char substr2[] = "@bitejiuyeke";
//	char* p1 = my_strstr(email, substr1);
//	char* p2 = strstr(email, substr2);
//	if (p1 == NULL)
//		printf("子串不存在\n");
//	else
//	{
//		print(p1);
//	}
//	if (p2 == NULL)
//		printf("子串不存在\n");
//	else
//	{
//		print(p2);
//	}
//	return 0;
//}
//strtok
//char *strtok( char *strToken, const char *strDelimit )
//切割字符串
//第一个参数是被分割的字符串 第二个参数是用作分隔符的字符集合
//但是会把分隔符改成\0并返回子串的首字符地址
//strtok函数找到str中的下一个标记并将其用\0结尾，返回一个指向这个标记的指针。
//（注：strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。)
//strtok函数的第一个参数不为NULL，函数将找到str中第一个标记，strtok函数将保存它在字符串
//中的位置。
//strtok函数的第一个参数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
//如果字符串中不存在更多的标记，则返回NULL指针
//int main()
//{
//	char email[] = "xingzi1019@qq.com.net";
//	char cp[40] = { 0 };
//	const char* sep1 = "@.";
//	strcpy(cp, email);
//
//	/*char* ret1=strtok(cp, sep1);
//	printf("%s\n", ret1);
//	ret1 = strtok(NULL, sep1);
//	printf("%s\n", ret1);
//	ret1 = strtok(NULL, sep1);
//	printf("%s\n", ret1);*/
//	char* ret = NULL;
//	for (ret = strtok(cp, sep1); ret != NULL; ret = strtok(NULL, sep1))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}
//strerror
//char* strerror( int errnum)
//返回错误码所对应的错误消息
//C语言的库函数,在执行失败的时候,都会设置错误码
//int main()
//{
//	printf("%s\n", strerror(0));//No error
//	printf("%s\n", strerror(1));//Operation not permitted
//	printf("%s\n", strerror(2));//No such file or directory
//	printf("%s\n", strerror(3));//No such process
//	printf("%s\n", strerror(4));//Interrupted function call
//	printf("%s\n\n", strerror(5));//Input/output error
//
//	//errno -C语言设置的一个全局的错误码存放的变量
//	FILE* pf = fopen("C:\\Users\\ROGxingzi\\Desktop\\test.txt","r");//绝对路径
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		;
//	}
//	FILE* pf2 = fopen("test.txt", "r");//相对路径
//	if (pf2 == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		;
//	}
//	return 0;
//}
//字符分类函数
//iscontrl
//isspace
//isdigit
//isxdigit
//islower
//isupper
//isalpha
//isalnum
//ispunct
//isgraph
//字符转换
//tolower
//toupper
//介绍memcpy 内存拷贝函数
//void *memcpy(void *dest, const void *src, size_t n)
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int src[] = { 1, 2, 3, 4, 5 };
//	int dest[5];
//	memcpy(dest, src, sizeof(src));
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", dest[i]);
//	}
//
//	printf("\n");
//
//	int src2[] = { 1, 2, 3, 4, 5 };
//	int dest2[5];
//	my_memcpy(dest2, src2, sizeof(src2));
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", dest2[i]);
//	}
//	return 0;
//}
//VS对memcpy有升级处理
//内存函数
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int arr2[20] = { 0 };
//	memcpy(arr2, arr1, sz * 4);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//使用memmove来实现重叠内存之间的数据拷贝
//安全可靠：     memmove被专门设计用来处理源和目标内存块存在重叠的情况。
//结果定义明确： 无论内存是否重叠，memmove都能保证复制的结果是正确的。它会采取必要的策略来避免覆盖还未被复制的数据。
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//从前往后拷贝和memcpy一样
//		void* ret = dest;
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//从后往前拷贝
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//			//鹏哥还是太牛逼了 很强的代码
//		}
//	}
//	return ret;
//}
//void test1()
//{
//
//}
//void test2()
//{
//
//}
//void test3()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1 + 2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//}
//int main()
//{
//	test2();
//	test3();
//	return 0;
//}
//memcmp
//int memcmp(const void *ptr1, const void *ptr2, size_t n)
//按字节比较：memcmp逐字节地比较两个内存块。
//指定比较长度：它需要一个明确的参数 n来指定要比较多少个字节。
//返回值含义：返回一个整数，表示比较结果：
//返回值 < 0：在第一个不匹配的字节处，ptr1的字节小于 ptr2的字节。
//返回值 == 0：两个内存块的前 n个字节完全相同。
//返回值 > 0：在第一个不匹配的字节处，ptr1的字节大于 ptr2的字节。
//不关心数据类型：它将内存视为纯粹的字节序列，不关心这些字节构成的是 int、float还是其他数据结构。
//不停止于 \0：即使遇到字节 0（空字符），只要没比较完 n个字节，就会继续比较。
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	int arr2[] = { 1,2,2 };
//	//01 00 00 00 03 00 00 00 02 00 00 00
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//	return 0;
//}
//memset
//void *memset(void *ptr, int value, size_t n)
//按字节设置：    memset以字节为单位进行操作。它将指针所指向的内存块的每一个字节都设置为给定的值 value。
//设置整个区域：  它需要一个明确的参数 n来指定要设置的字节数。
//返回值：       返回指向目标内存区域 ptr的指针
//需要注意的是他是按字节来操作的
// 用法一:初始化数组某些元素的初始值
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	memset(arr1, 0, 16);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//#define BUFFER_SIZE 16
//int main()
//{
//	char buffer[BUFFER_SIZE];
//	// 场景 1: 创建一个重复的字节模式 (例如，用于测试)
//	memset(buffer, 'A', BUFFER_SIZE - 1); // 填充 'A'
//	buffer[BUFFER_SIZE - 1] = '\0';       // 手动添加字符串结束符
//	printf("Pattern buffer: %s\n", buffer); // 输出: AAAAAAAAAAAAAAA
//	// 场景 2: 在已知大小的结构体中清零
//	struct Point
//	{
//		int x, y;
//		char label[10];
//	}; 
//	struct Point p1;
//	memset(&p1, 0, sizeof(p1)); //将所有成员（包括可能的填充字节）清零
//	printf("Point p1 after memset: x=%d, y=%d\n", p1.x, p1.y); // 输出: x=0, y=0
//	// 场景 3: 重置动态分配的内存
//	char* dynamic_buffer = malloc(BUFFER_SIZE);
//	strcpy(dynamic_buffer, "Some data");
//	printf("Before reset: %s\n", dynamic_buffer);
//	memset(dynamic_buffer, 0, BUFFER_SIZE); // 安全地清空缓冲区
//	printf("After reset: %s\n", dynamic_buffer); // 输出为空字符串
//	free(dynamic_buffer);
//	return 0;
//}
//int main()
//{
//	//char arr[] = "hello bit";
//	//memset(arr + 6, 'x', 3);
//	//printf("%s\n", arr);
//	int arr[10] = { 0 };
//	memset(arr, 1, 40);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//作业来喽
//题目一
//小乐乐喜欢数字，尤其喜欢0和1
//他现在得到了一个数，想把每位的数变成0或1
//如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。
//自己的法一:
//void* transform(char* arr)
//{
//	while (*arr != '\0')
//	{
//		int num = *arr - '0';
//		if (num % 2 == 0)
//		{
//			*arr = '0';
//		}
//		else
//		{
//			*arr = '1';
//		}
//		arr++;
//	}
//}
//int main()
//{
//	char arr[1001] = "3333333333";
//	scanf("%s", arr);
//	transform(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//AI优化的法二
//void transform(char* arr)
//{
//	while (*arr != '\0')
//	{
//		int num = *arr - '0';
//		*arr = (num % 2 == 0) ? '0' : '1';
//		arr++;
//	}
//}
//
//int main()
//{
//	char arr[1001];
//	scanf("%s", arr);
//	transform(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//鹏哥的法三
//int main()
//{
//	int input = 0;
//	int sum = 0;
//	scanf("%d", &input);
//	//12345
//	int i = 0;
//	while (input != 0)
//	{
//		int bit = input % 10;
//		if (bit % 2 == 1)
//		{
//			sum = sum + 1 * pow(10, i);
//			i++;
//		}
//		else
//		{
//			sum = sum + 0 * pow(10, i);
//			i++;
//		}
//		input = input / 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//法四
//int main() 
//{
//	int input = 0;
//	int sum = 0;
//	int multiplier = 1;
//	scanf("%d", &input);
//	while (input != 0) 
//	{
//		// 使用位运算判断奇偶，效率最高
//		if ((input % 10) & 1) 
//		{
//			sum += multiplier;
//		}
//		multiplier *= 10;
//		input /= 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//题目二
//		   * 
//		 * *
//	   * * * 
//	 * * * *
// * * * * *
//法一:自己的二维数组
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char arr[20][40] = { 0 };
//	// 遍历所有行和列，逐个赋值为空格
//	for (int i = 0; i < 20; i++)
//	{
//		for (int j = 0; j < 40; j++)
//		{
//			arr[i][j] = '-';
//		}
//	}
//	//		  * 
//	//	    * *
//	//	  * * * 
//	//  * * * *
//	//* * * * *
//	//给二维数组染上*
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 2 * n - 2; j >= n * 2 - 2 * i - 2; j -= 2)
//		{
//			arr[i][j] = '*';
//		}
//	}
//	//打印
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n * 2; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//法二: 直接打印
//注意是先*再空格
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		//	//		  * 
//		//	//	    * *
//		//	//	  * * * 
//		//	//  * * * *
//		//	//* * * * *
//		//这个做法巧妙在把空格和星号空格当成整体进行输出
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i + j < n - 1)
//				{
//					printf("  ");
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//KiK非常喜欢网购，在一家店铺他看中听一件衣服，他了解到，
//如果今天是“双11"(11月11日)则这件衣服打7折，“双12”(12月12日)则这件衣服打8折，
//如果有优惠券可以额外减50元（优惠券只能在双11或双12使用)，求KiKi最终所花的钱数。
//数据范围：衣服价格满足15 <= val <= 100000
//输入描述：
//一行，四个数字，第一个数表示小明看中的衣服价格，第二和第三个整数分别表示当天的月份、当天的日期、第四个整数表示是否有优惠券
//（有优惠券用1表示，无优惠券用0表示)。注：输入日期保证只有“双11”和“双12”。
//输出描述：
//一行，小明实际花的钱数 （保留两位小数）。（提示：不要指望商家倒找你钱）  太简单了这题
//自己的法一
//int main()
//{
//	float val;
//	int mon, date, iscoupon;
//	scanf("%f %d %d %d", &val, &mon, &date, &iscoupon);
//	//判断是否有优惠券
//	int count;
//	if (iscoupon == 1)
//		count = 50;
//	else
//		count = 0;
//	//判断应该打几折
//	if (mon == 11 && date == 11)
//	{
//		//7折
//		if (val * 0.7 - count >= 0)
//			printf("%.2f", val * 0.7 - count);
//		else
//			printf("0.00");
//	}
//	else if (mon == 12 && date == 12)
//	{
//		//8折
//		if (val * 0.8 - count)
//			printf("%.2f", val * 0.8 - count);
//		else
//			printf("0.00");
//	}
//	else
//	{
//		//没有优惠
//		printf("%.2f", val);
//	}
//	return 0;
//}
//上面这个输出可以集中化处理更节省空间
//整形提升与截断题
//int main()
//{
//	//char -128~127
//	//unsigned char 0~255
//	unsigned char a = 200;
//	//00000000 00000000 00000000 11001000 -->200
//	//11001000							  --> a  截断
//	unsigned char b = 100;
//	//00000000 00000000 00000000 01100100 -->100
//	//01100100							  --> b  截断
//	unsigned char c = 0;
//	c = a + b;//整形提升 高位补0
//	//00000000 00000000 00000000 11001000
//	//00000000 00000000 00000000 01100100
//	//00000000 00000000 00000001 00101100 a + b
//	//00101100  --> 这里又发生截断
//	//转换成10进制就是44
//	printf("%d %d", a + b, c);//300 44
//	return 0;
//}
//题目
//unsigned int a = 0x1234
//unsigned char b =*(unsigned char *)&a
//在32位大端模式处理器上变量b等于
//复习一下大小端存储模式
//内存：低地址-------------------------高地址
//小端           34 12 00 00                低位数据放在低地址 高位数据放在高地址 
//大端           00 00 12 34                高位数据放在低地址 低位数据放在高地址
//题目名称：
//猜名次
//题目内容：
//5位运动员参加了10米台跳水比赛，有人让他们预则比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						//好好理解这个判断条件
//						if ((b == 2) + (a == 3) == 1
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120 && a + b + c + d + e == 15)
//								//过滤一下重复的 不理解的话可以把这个if删掉
//								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//题目：猜凶手
//描述：凶手是四个人中的一个
//A：不是A
//B：是C
//C：是D
//D：C在胡说
//三个真话 一个假话
//鹏哥的牛逼方法
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		//判断
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}
//打印杨辉三角
//    1
//   1 1
//  1 2 1
// 1 3 3 1
//1 4 6 4 1
// 左对齐
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//把杨辉三角对齐需要打印空格挤过去 仿照之前的棱形
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	//打印
//	//    1
//	//   1 1
//	//  1 2 1
//	// 1 3 3 1
//	//1 4 6 4 1
//	for (i = 0; i < 10; i++)
//	{
//		//空格
//		for (j = 0; j < 10 - i; j++)
//			printf("  ");//理解为什么是两个空格
//		//数字
//		for (j = 0; j <= i; j++)
//			printf("%3d ", arr[i][j]);
//		printf("\n");
//	}
//
//	return 0;
//}
//左旋转字符串的k个字符
//鹏哥版本的旋转字符
//void left_rotate(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	//旋转k个字符
//	for (i = 0; i < k; i++)
//	{
//		//旋转一个字符
//		//1
//		char tmp = arr[0];
//		//2
//		int j = 0;
//		//挪动后面的使其往前
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		//3
//		arr[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = strlen(arr);
//	int k = 0;
//	scanf("%d", &k);
//	//朱子峰提出的if else优化
//	//也可以在left_rotate里面补充 K = k % len
//	//这样子可以省去if else 的判断
//	if (k == sz)
//	{
//		;
//	}
//	else if (k > sz)
//	{
//		left_rotate(arr, k - sz);
//	}
//	else
//		left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}
//开学那会ACM教练提到的转置方法 先把字符串分割成两部分 然后两个子串分别转置 最后两个子串合成一个子串后集体再转置
//很巧妙的一个方法  过程如下
//abcdef
//ba fedc
//cdefab
//void reverse(char* left, char* right)
//{
//	//abcdef
//	//abcde
//	assert(left && right);
//	while (left++ < right--)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//	}
//}
//void left_rotate(char arr[], int k)
//{
//	int len = strlen(arr);
//	k = k % len;//不加会越界访问
//	//逆序左边
//	reverse(arr, arr + k - 1);
//	//逆序右边
//	reverse(arr + k, arr + len - 1);
//	//逆序全部
//	reverse(arr, arr + len - 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = strlen(arr);
//	int k = 0;
//	scanf("%d", &k);
//	printf("%s\n", arr);
//	return 0;
//}
//杨氏矩阵
//从左向右和从上往下都是递增的
//查找某个元素是否存在 时间复杂度不大于o(N)
//1 2 3
//4 5 6
//7 8 9
//   找右上角元素来比较
//自己乱七八糟随便写的
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int n;
//	scanf("%d", &n);//n=5
//	for (int i = 0; i < 3; i++)
//	{
//		if (arr[i][3]>=n)
//		{
//			for (int j=2;j>=0;j--)
//			{
//				if (arr[i][j] == n)
//				{
//					printf("在第%d行 第%d列\n", i + 1, j + 1);
//					break;
//				}
//			}
//		}
//	}
//
//	return 0;
//}
//鹏哥的思路版本
//返回两个东西可以靠结构体来实现 也可以通过传参传指针来进行修改
//结构体版本
//struct point
//{
//	int x;
//	int y;
//};
//struct point Find_Num(int arr[3][3], int row, int col, int k)
//{
//	int x = 0, y = col - 1;
//	struct point p = { -1, -1 };
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//			y--;
//		else if (arr[x][y] < k)
//			x++;
//		else
//		{
//			p.x = x;
//			p.y = y;
//			//printf("第%d行 第%d列\n", x+1, y+1);
//			//但是为了保证函数的单一性 不打印东西了 尝试使用结构体来返回两个值
//			return p;
//		}
//	}
//	return p;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k;
//	scanf("%d", &k);//k=5
//	struct point ret = Find_Num(arr, 3, 3, k);
//	printf("第%d行 第%d列\n", ret.x+1, ret.y+1);
//	return 0;
//}
//指针版本
//void Find_Num(int arr[3][3], int* row, int* col, int k)
//{
//	assert(row && col);
//	int x = 0, y = 2;  // y = col - 1 = 3 - 1 = 2
//	*row = -1;
//	*col = -1;
//	while (x <= 2 && y >= 0)  // row-1=2, 所以x<=2
//	{
//		if (arr[x][y] > k)
//			y--;
//		else if (arr[x][y] < k)
//			x++;
//		else
//		{
//			*row = x;
//			*col = y;
//			return;
//		}
//	}
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
//	int k;
//	scanf("%d", &k); // k=5
//	int row, col;  // 用来接收找到的行列下标
//	Find_Num(arr, &row, &col, k);  // 传入地址
//	//要再使用时记得对col和row进行重置
//	if (row != -1 && col != -1) 
//	{
//		printf("第%d行 第%d列\n", row + 1, col + 1);
//	}
//	else 
//	{
//		printf("未找到元素 %d\n", k);
//	}
//	return 0;
//}
//判断一个字符串能否由另一个字符串左旋得到
//使用库函数strstr
//用于在一个字符串（主串）中查找另一个字符串（子串）的首次出现位置，返回指向该位置的指针；若未找到则返回 NULL。
//char *strstr(const char *haystack, const char *needle)
//int is_left_move(int arr1[],int arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//	strncat(arr1,arr1,len1);
//	//abcdefabcdef 这样任何旋转之后的字符串的可能性都会在这个字符串里面
//	//比较不容易想得到
//	char* ret = strstr(arr1,arr1);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1,arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else 
//		printf("No\n");
//	return 0;
//}
//void print(int arr[], int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int cmp_int_asc(const void* a, const void* b)
//{
//	int val1 = *(const int*)a;
//	int val2 = *(const int*)b;
//	return (val1 < val2) ? -1 : (val1 > val2) ? 1 : 0;//嵌套的三目操作符 实现了三种情况
//}
//int cmp_int_desc(const void* a, const void* b)
//{
//	int val1 = *(const int*)a;
//	int val2 = *(const int*)b;
//	return (val1 > val2) ? -1 : (val1 < val2) ? 1 : 0;
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int n;
//	printf("请输入您要排序的整数数据个数\n");
//	scanf("%d", &n);
//	printf("请输入您要排序的数据\n");
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int input = -1;
//	printf("请输入您的选择1/2\n1为2升序\n2为降序\n");
//	scanf("%d", &input);
//	switch (input)
//	{
//	case 1:
//		qsort(arr, n, sizeof(int), cmp_int_asc);
//		print(arr, n);
//		break;
//	case 2:
//		qsort(arr, n, sizeof(int), cmp_int_desc);
//		print(arr, n);
//		break;
//	case 0:
//		printf("退出\n");
//		exit(0);
//		break;
//	default:
//		printf("输入错误请重新选择\n");
//		break;
//	}
//	return 0;
//}
//										复习一下指针相关的知识点
//函数指针
//返回值类型 (*指针名)(参数类型列表)
//指针数组
//元素类型 *数组名[数组长度]
//e.g.指针数组：strs是数组，元素是char*（字符串指针）
//char* strs[] = { "apple", "banana", "cherry" };
//数组指针
//元素类型 (*指针名)[数组长度]
//e.g.声明数组指针p：指向“int类型、长度为3的数组”
//int (*p)[3];
//声明	        本质 	  解读（从右往左）	             元素 / 指向内容
//int* p[3]	    指针数组	  p 是数组，元素是 int* （指针）	 3 个 int 类型指针
//int (*p)[3]	数组指针	  p 是指针，指向 int[3]（数组）	 指向 1 个长度为 3 的 int 数组
//
//矩阵转置
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr[10][10] = { 0 };
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//1 2 3
//	//4 5 6
//	//输出     n=2    m=3
//	//1 4
//	//2 5
//	//3 6
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//上三角矩阵判断
//3
//1 2 3
//0 4 5
//0 0 6
//int JudArr(int arr[][3])
//{
//	int count = 0;
//	for (int i = 1; i < 3; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[i][j] == 0)
//				count++;
//		}
//	}
//	return count == 3 ? 1 : -1;
//}
//int main()
//{
//	int n;
//	int arr[10][10] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			scanf("%d", &arr[i][j]);
//	int ret = JudArr(arr);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}
//int main()
//{
//	int n;
//	int count = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//				goto end;
//			//也可以这里直接printf然后return 0;
//			else
//				count++;
//		}
//	}
//	if (count == n * n)
//		printf("Yes\n");
//	else
//		end:
//		printf("No\n");
//	return 0;
//}
//判断一个整数序列是否有序
//sorted或者unsorted
//int main()
//{
//	int arr[100] = { 0 };
//	int n;
//	int flag = 1;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 1; i < n - 1; i++)
//	{
//		if ((arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) || (arr[i - 1] > arr[i] && arr[i] < arr[i + 1]))
//			flag = 0;
//	}
//	if (flag == 1)
//		printf("Sorted\n");
//	else
//		printf("Unsorted\n");
//
//	return 0;
//}
//进阶:自定义类型:结构体和联合体和枚举(这两种用的比较多)
//struct Stu
//{
//	char name[20];
//	int age;
//}s1,s2;
//s1 s2是全局的结构体变量
//在某一个函数里面创建struct Stu s3这样就是局部变量了
//匿名结构体类型 如下
//只能用一次
//struct 
//{
//	char name[20];
//	int age;
//}s1;
//int main()
//{
//
//	return 0;
//}
//struct Container
//{
//	int data;
//	struct
//	{ // 匿名结构体
//		int x;
//		int y;
//	}; // 没有成员名！
//};
//int main()
//{
//	struct Container c;
//	c.data = 10;
//	c.x = 20; // 直接访问！就像x是Container的成员一样
//	c.y = 30; // 直接访问！
//	printf("%d, %d, %d\n", c.data, c.x, c.y);
//	return 0;
//}
//可以看到，使用匿名结构体后，访问嵌套的成员 x和 y时不再需要写 c.inner.x，而是可以直接写 c.x，代码更加简洁。
//结构体的自引用
//这里提一嘴数据结构
//线形和树形
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//int main()
//{
//	sizeof(struct Node);//error
//	//无法计算这个的长度
//	return 0;
//}
//以下才是正确的自引用方法
//struct Node
//{
//	int data;
//	struct Node* next;
//};//这样才能够实现链表
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	struct Node n1;
//	Node n1;
//	//上面这两行的写法是一样的
//	return 0;
//}
//下面有两种一样的写法
//1
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}* linklist;
////2
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//typedef struct Node* linklist;
//struct Point
//{
//	int x;
//	int y;
//}p1 = { 2,3 };
//
//struct score
//{
//	int n;
//	char ch;
//};
//
//struct Stu
//{
//	char name[20];
//	int age;
//	struct score s;
//};
//
//int main()
//{
//	struct Point p2 = { 3,4 };
//	struct Stu s1 = { "zhangshan",20,{100,'q'} };//结构体的嵌套初始化
//	printf("%s %d %d %c\n", s1.name, s1.age, s1.s.n, s1.s.ch);
//	return 0;
//}
//
//结构体内存对齐和修改默认对齐数
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S1 s1;
//	struct S2 s2;
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//8
//	//为什么不一样
//	//很复杂 看下面的规则
//	//首先得掌握结构体的对齐规则：								(会导致内存的浪费)
//	//1.第一个成员在与结构体变量偏移量为0的地址处。
//	//2.其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//	//对齐数 = 编译器默认的一个对齐数(VS中默认的值为8)    与   该成员大小的❗较小值❗
//	//3.结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
//	//4.如果❗嵌套了结构❗的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，
//	//结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍
//	//结合2025.12.1的17.20的图片来看 鹏哥的137集的18分钟
//	printf("%d\n", offsetof(struct S1, c1));//0
//	printf("%d\n", offsetof(struct S1, i));//4
//	printf("%d\n", offsetof(struct S1, c2));//8
//	//关键字offsetof
//	//offsetof(type, member);
//	//offsetof是 C 语言中的一个宏，用于获取结构体（struct）或联合体（union）中成员的字节偏移量
//	printf("%d\n", offsetof(struct S2, c1));//0
//	printf("%d\n", offsetof(struct S2, c2));//1
//	printf("%d\n", offsetof(struct S1, i));//4
//
//	printf("%d\n", offsetof(struct S3, d));//0
//	printf("%d\n", offsetof(struct S3, c));//8
//	printf("%d\n", offsetof(struct S3, i));//12
//	printf("%d\n", sizeof(struct S3));//16
//
//	printf("%d\n", offsetof(struct S4, c1));//0
//	printf("%d\n", offsetof(struct S4, d));//24
//	printf("%d\n", sizeof(struct S4));//32
//
//	return 0;
//}
//为什么存在内存对齐现象
//1.平台原因
//不是所有硬件平台都能访问任意地址上的任意数据的；某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常
//2.性能原因
//数据结构(尤其是栈)因该尽可能的在自然边界上对齐
//原因在于为了访问未对齐的内存，处理器需要两次内存访问；而对齐的内存访问仅需要一次访问
//so 整体来说:结构体的内存对齐是拿空间来换时间的做法
//补充:32位x86机器 一次访问32个比特位 也就是4个字节 char c;int i 来举例就是
//那怎么在时间较快的前提下尽量节省空间呢
//方法:让占用空间小的成员尽量集中在一起
//怎么修改默认对齐数
//#pragma 这个预处理指令，可以改变编译器的默认对⻬数。
//#pragma pack(8)//设置默认对齐数为8
//#pragma pack(1)//设置默认对⻬数为1
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的对⻬数，还原为默认
//int main()
//{
//	//输出的结果是什么？
//	printf("%d\n", sizeof(struct S));//6
//	return 0;
//}
//结构体在对⻬⽅式不合适的时候，我们可以⾃⼰更改默认对⻬数。
//#pragma pack(4)//设置的开始
//struct S
//{
//	int i;
//	double d;
//};
//#pragma pack()//设置的结束
//
//#pragma pack(1)
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//12
//	printf("%d\n", sizeof(struct S1));//6
//	return 0;
//}
//结构体传参
//struct S
//{
//	int data[1000];
//	int num;
//};
//void print1(struct S ss)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ss.data[i]);
//	}
//	printf("%d\n", ss.num);
//}
//void print2(const struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	struct S s = { {1,2,3},100 };
//	print1(s);
//	print2(&s);
//	return 0;
//}
//位段
//是可以用来节省空间的
//位段的声明和结构是类似的，有两个不同：
//1. 位段的成员必须是 int || unsigned int || signed int || char，在C99中位段成员的类型也可以选择其他类型
//2. 位段的成员名后边有⼀个冒号和⼀个数字
//比如
//struct A
//{
//	int _a : 2;//这里 _a 只需要两个比特位  可以节省空间
//	int _b : 5;//
//	int _c : 10;//
//	int _d : 30;//
//};//这一串就是位段
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8个字节
//	//2+5+10+30=47bit 所以 48bit = 6byte就够了啊
//	//那为什么是8而不是6呢
//	return 0;
//}
//位段的内存分配
//位段的空间上是按照需要以4个字节(int)或者1个字节(char)的方式来开辟的
//跟结构相⽐，位段可以达到同样的效果，并且可以很好的节省空间
//struct S
//{
//	char a : 3;
//	char b : 4;//8-3=5 5-4=1
////---------------- 1<5 所以再开辟一个字节
//	char c : 5;//上个字节剩的我不要了 8-5=3
////---------------- 3<4 这里再开辟一块空间
//	char d : 4;//所以一共需要三个字节
//};
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(struct S));//3
//	//若上一次开辟的不够 下次还是继续使用的话就只是需要2个字节
//	//而这里打印是3说明 上次开辟的我不要了
//	s.a = 10;//二进制是1010 但是上面只是申请了3个比特位 所以会发发生截断 存进去了010 最前面的那个1没有被放进去 
//	s.b = 12;//二进制是1100 上面申请了4个比特位能够放得下
//	s.c = 3;//二进制是11    上面开辟了3个字节 可以放得下为011
//	s.d = 4;//二进制是100   上面开辟了4个字节 可以放得下为0100
//	//内存中数据的存放为下面这样的情况
//	//00000000 00000000 00000000
//	//01100010 00000011 00000100
//	// 6   2     0  3     0  4    -->16进制是这样   
//	//vs是从右向左
//	//区分一下 大小端是字节顺序 这里是在一个字节内的排放
//	printf("%d\n", sizeof(struct S));//3
//	return 0;
//}
//位段的跨平台问题
//1. int 位段被当成有符号数还是⽆符号数是不确定的。
//2. 位段中最⼤位的数⽬不能确定。（16位机器最⼤16，32位机器最⼤32，写成27，在16位机器会出问题。
//3. 位段中的成员在内存中从左向右分配，还是从右向左分配，标准尚未定义。
//4. 当⼀个结构包含两个位段，第⼆个位段成员⽐较⼤，⽆法容纳于第⼀个位段剩余的位时，是舍弃剩余的位还是利⽤，这是不确定的。
//                                                         刚刚上面的分析的舍弃是基于VS的 但并不是所有编译器都这样
//实现一个通讯录
//见其他项目文件
//gets fgets 在标准头文件里面<stdio.h>
//fgets 会读取换行符，需要手动去除
//int main() 
//{
//	char str[20];
//	printf("请输入字符串: ");
//	fgets(str, sizeof(str), stdin);  // 读取最多 19 个字符 + '\0'
//	printf("你输入的是: %s", str);
//	return 0;
//}
//题目:统计并输出某给定字符在给定字符串中出现的次数
//int main()
//{
//	char arr[81];
//	char ch;
//	fgets(arr, sizeof(arr), stdin);
//	// 参数说明：
//	// 1. 目标字符数组
//	// 2. 最大读取字符数（包括 '\0'）
//	// 3. 文件指针（stdin 表示标准输入）
//	ch = getchar();
//	int count = 0;
//	for (int i = 0; arr[i] != '\0'; i++)
//	{
//		if (arr[i] == ch)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//puts的使用 同样在<stdio.h>头文件中
//int main() 
//{
//	char str[] = "Hello";
//	//自动添加换行符
//	puts(str);      // 输出: Hello\n
//	puts("World");  // 输出: World\n
//	return 0;
//}
//getchar的使用
//从标准输入读取一个字符
//注意：返回的是 int 类型（可以处理 EOF）
//基本用法
//int main() 
//{
//	printf("请输入一个字符: ");
//	int ch = getchar();  // 读取单个字符
//	printf("你输入的字符是: ");
//	putchar(ch);  // 输出字符
//	putchar('\n');
//	return 0;
//}
//枚举
//枚举顾名思义就是⼀⼀列举
//把可能的取值⼀⼀列举
//enum Day//枚举常量
//{
//	//默认的值是这样的
//  //这些是常量可以初始化 但是不能赋值
//	Mon,  //0
//	Tues, //1
//	Wed,  //2
//	Tuur, //3
//	Fri,  //4
//	Sat,  //5
//	Sun   //6
//};
//
//enum Sex
//{
//	Male, Female, Secret
//};
//
//enum Color
//{
//	RED=1,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	enum Day d = Fri;
//	printf("%d\n", Mon);//0
//	printf("%d\n", Tues);//1
//	printf("%d\n", Wed);//2
//
//	printf("%d\n", Male);//0
//	printf("%d\n", Female);//1
//	printf("%d\n", Secret);//2
//
//	printf("%d\n", RED);//1
//	printf("%d\n", GREEN);//2
//	printf("%d\n", BLUE);//3
//
//	printf("%d\n",sizeof(enum Day));//4
//	//在 C 标准中，枚举类型通常实现为 int类型的大小
//	return 0;
//}
//联合体(共同体)
//是公用内存的 但同一时间联合体的成员只能存在一个
//union Un
//{
//	int a;
//	char b;
//};
//int main()
//{
//	union Un u;
//	//联合体⼤⼩的计算规则:
//	//联合的⼤⼩⾄少是最⼤成员的⼤⼩
//	//当最⼤成员⼤⼩不是最⼤对⻬数的整数倍的时候，就要对⻬到最⼤对⻬数的整数倍
//	printf("%d\n", sizeof(union Un));//4
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.b));
//	//运行发现这三个的地址一样 说明确实是公用一块空间
//	//所以在一些场景是可以节省空间的
//	return 0;
//}
//结构体 枚举 联合体 都是要内存对齐的
//使用联合体来判断是大端还是小端
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端存储模式\n");
//	else
//		printf("大端存储模式\n");
//
//	return 0;
//}
//进阶:动态内存管理
//相关关键字
//malloc
//free
//calloc
//realloc
//栈区 堆区 静态区
//栈区:局部变量 形式参数
//堆区:malloc calloc realloc free
//静态区:
//关键字:malloc
//void* malloc (size_t size);
//int main()
//{
//	int arr[10] = { 0 };//在栈区开辟
//	//动态内存开辟
//	//INT_MAX
//	int* p = (int*)malloc(INT_MAX);//在堆区开辟
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i) = i);
//	}
//	//没有free
//	//并不是说内存空间就不回收了
//	//当程序退出的时候,系统会自动回收内存空间的
//	return 0;
//	//变长数组 得C99
//	//int n;
//	//scanf("%d", &n);
//	//int arr2[n];
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i) = i);
//	}
//	free(p);
//  //void free (void* ptr);//传过去是要释放的空间的起始地址
//	p = NULL;
//	//free只是解放了p之前所被编程者输入的内容，而真正解放p本身的是把指针p变为空指针
//	return 0;
//}
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	//这串代码只开辟不free释放
//	//会造成内存泄漏
//	//调开任务管理器看看
//	return 0;
//}
//free
//如果参数 ptr 指向的空间不是动态开辟的，那free函数的⾏为是未定义的。
//如果参数 ptr 是NULL指针，则函数什么事都不做。
//calloc
//void* calloc (size_t num, size_t size);
//num:要开辟的元素的个数
//size:每个元素的大小
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	//calloc会将他们初始化为0
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//realloc
//void* realloc (void* ptr, size_t size);
//ptr:要调整的内存空间的起始地址
//size:调整之后新⼤⼩
//返回值为调整之后的内存空间的起始位置
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	//扩容
//	//分为两种情况
//	//1.后面有足够的连续的空间直接接上去开辟新的空间
//	//  并返回原地址
//	//2.后面的空间不够 会重新寻找一块足够的连续情况并将原空间的数据拷贝到新的空间
//	//  返回新开辟的地址 同时旧的空间会被释放
//	int* ptr = (int*)realloc(p, 80);//所以不能直接用p来接收 用一个新的指针来接收
//	if (NULL != ptr)
//	{
//		p = ptr;
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//	//free(p);
//	//p = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//	//realloc(NULL,40);
//	//malloc(40);
//	//上面这两行代码是等价的
//}
//                                       常⻅的动态内存的错误
//1.对NULL指针的解引⽤操作
//void test()
//{
//	int* p = (int*)malloc(INT_MAX);
//	*p = 20;//如果p的值是NULL，就会有问题
//	free(p);
//}
//2.对动态开辟空间的越界访问
//void test()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//当i是10的时候越界访问
//	}
//	free(p);
//}
//3对非动态开辟内存使⽤free释放
//void test()
//{
//	int a = 10;
//	int* p = &a;
//
//	//.....
//
//	free(p);//ok?
//}
//4.使⽤free释放⼀块动态开辟内存的⼀部分
//free没法释放一部分 要释放也只能从头开始释放
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	free(p);//p不再指向动态内存的起始位置 故报错
//}
//5.对同⼀块动态内存多次释放
//void test()
//{
//	int* p = (int*)malloc(100);
//	//......
//	free(p);
//	//p这里是野指针
//	//p = NULL;
//	//把这条野狗拴在树上 就安全多了
//	//......
//	free(p);//重复释放 没有上面的p=NULL就会报错 有了就不会报错
//}
//6.动态开辟内存忘记释放（内存泄漏）
//忘记free
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//
//int main()
//{
//	test();
//	while (1);
//}
//                            动态内存相关经典笔试题
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	//这里的p就被赋值为malloc开辟的首元素的地址
//	//这里p还是形式参数 出了这个函数就销毁0了 但是上面申请的100字节的空间并没有被释放
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	//没有free
//	strcpy(str, "hello world");//str是NULL解引用会崩溃
//	printf(str);
//}
//修改如下 版本一 法一
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//版本二 法二
//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	//会发生内存泄漏
//	Test();
//	return 0;
//}
//对于printf的补充
//int main()
//{
//	printf("hello world\n");
//	//传给printf的不是字符串 而是首元素地址
//	const char* p = "hello world\n";
//	printf(p);
//	return 0;
//}
//指出下列代码的问题
//int* f1(void)
//{
//	int x = 10;
//	return (&x);
//	//野指针
//}
//1.x是局部变量
//在函数 f1()内部声明的 int x = 10;
//存储在栈内存中
//2.函数结束时内存被释放
//当 f1()执行完毕返回时，局部变量 x的生命周期结束
//其占用的栈内存被系统回收，可能被其他数据覆盖
//3.返回的指针变成野指针
//& x返回的地址指向的内存已经不再有效
//后续通过这个指针访问数据是未定义行为
//应该这么修改
//int* f1(void)
//{
//	static int x = 10;//static使变量生命周期延长到整个程序
//	return (&x);
//}
//再来一题
//int* f2(void)
//{
//	int* ptr;
//	*ptr = 10;
//	return ptr;//编译器会直接报错
//	//也是野指针 ptr没有初始化 返回的是随机的地址
//}
//int main()
//{
//	f1();
//	f2();
//	return 0;
//}
//很经典的死循环的一道题
//int main()
//{
//	long i;
//	long a[16];
//	for (i = 0; i <= 17; i++)
//	{
//		a[i] = 0;//数组越界访问 刚好覆盖了i的地址
//      //i的地址在数组a的地址之后越界时刚好覆盖了i 所以i的值刚好更新了
//      //因此执行死循环
//		printf("%d", i);
//	}
//	return 0;
//}
//很容易犯错的的一个经典错误
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//p是函数内的局部数组，存储在栈内存中
//函数返回时，p的内存被释放回收
//str指向的是已经无效的内存地址
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();//野指针
//	//0x cccccccc
//	printf(str);
//}
////下面这个同样的道理
//int* test()
//{
//	int a = 10;
//	return &a;
//	//a出了这个函数就销毁了
//}
//int main()
//{
//	Test();
//	int* p = test();
//	printf("%p\n", p);
//	printf("%d\n", *p);
//	return 0;
//}
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//可以打印 但是会内存泄漏
//	free(str);//ADD这两行代码就没问题了
//	str = NULL;//ADD这两行代码就没问题了
//}
//int main()
//{
//	Test();
//	return 0;
//}
//这里复习一下野指针
//野指针是指指向无效内存区域的指针，是C/C++编程中最危险的bug之一。
//有以下类型和成因
//1.未初始化的指针
//int* p;        // 未初始化，值随机
//*p = 10;       // 危险！操作未知内存区域
//2.指向已释放内存的指针（悬空指针）
//int* p = (int*)malloc(sizeof(int));
//free(p);       // 内存已释放
//*p = 20;       // 野指针！访问已释放内存
//3.超出作用域的局部变量指针
//int* GetMemory()
//{
//	int value = 42;
//	return &value;  // 返回局部变量地址
//}
//int* p = GetMemory();
//printf("%d", *p);   // 野指针！value已销毁
//4. 指针运算越界
//int arr[5] = { 1,2,3,4,5 };
//int* p = arr;
//for (int i = 0; i <= 5; i++)
//{   // i=5时越界
//	*(p + i) = i;              // 最后一次是野指针操作
//}
//继续刷题
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	//str = NULL;//不加这行就是错的 分手了没有忘掉还送东西到别人家里 属与非法访问
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}
//小乐乐和欧几里得
//输入n和m 求n和m的最大公约数和最小公倍数之和          远古时期的笔记也有
//int yue(int n, int m)
//{
//	//暴力遍历法
//	//for (int i = n > m ? n : m; i < n > m ? n : m; i--)
//	//{
//	//	if (n % i == 0 && m % i == 0)
//	//	{
//	//		return i;
//	//	}
//	//}
//	//辗转相除法
//	int c = 0;
//	int max = n > m ? n : m;
//	int min = n < m ? n : m;
//	while (c = max % min)
//	{
//		//24 % 18  6
//		//18    6  
//		//18 %  6 
//		max = min;
//		min = c;
//	}
//	return min;
//}
////补充数学知识:两个数的乘积等于这两个数的最大公约数和最小公倍数的积
////            12 * 8 = 96 = 4 * 24
////所以算出一个之后就可以去算另外一个了
//int bei(int n, int m)
//{
//	//暴力遍历法
//	//for (int i = n > m ? n : m; i > 0; i++)
//	//{
//	//	if (i % n == 0 && i % m == 0)
//	//	{
//	//		return i;
//	//	}
//	//}
//	//辗转相除法 后 利用上面的数字知识得最大公约数 
//	int c = 0;
//	int ret = 0;
//	int max = n > m ? n : m;
//	int min = n < m ? n : m;
//	while (c = max % min)
//	{
//		max = min;
//		min = c;
//	}
//	return n * m / min;
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int max = yue(n, m);
//	printf("最大公约数为%d\n", max);
//	int min = bei(n, m);
//	printf("最小公倍数为%d\n", min);
//	int sum = max + min;
//	printf("最大公约数和最小公倍数之和为%d\n", sum);
//	return 0;
//}
//打印空心正方形图案
//int main()
//{
//	int n;
//	//@ @ @ @
//	//@     @
//	//@     @
//	//@ @ @ @
//	//法一
//	//while (scanf("%d", &n) == 1)
//	//{
//	//	for (int i = 0; i < n; i++)
//	//	{
//	//		for (int j = 0; j < n; j++)
//	//		{
//	//			if (i != 0 && i != n - 1)
//	//			{
//	//				if (j == 0 || j == n - 1)
//	//				{
//	//					printf("@ ");
//	//				}
//	//				else
//	//				{
//	//					printf("  ");
//	//				}
//	//			}
//	//			else
//	//			{
//	//				printf("@ ");
//	//			}
//	//		}
//	//		printf("\n");
//	//		//printf("\n");
//	//	}
//	//}
//	//法二
//	while (scanf("%d", &n) == 1)
//	{
//		char arr[15][15];
//		memset(arr, ' ', sizeof(arr));
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if ((i == 0 || j == 0) || (i == n - 1 || j == n - 1))
//				{
//					arr[i][j] = '@';
//				}
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				printf("%c ", arr[i][j]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//柔性数组
//也许你从来没有听说过柔性数组（flexible array）这个概念，但是它确实是存在的。
//C99 中，结构体中的最后一个元素允许是未知大小的数组，这就叫做『柔性数组』成员。
//柔性数组的特点
//1.结构中的柔性数组成员前面必须至少一个其他成员
//2.sizeof 返回的这种结构大小不包括柔性数组的内存
//3.包含柔性数组成员的结构用malloc()函数进行内存的动态分配，并且分配的内存应该大于结构的大小
//以适应柔性数组的预期大小
//typedef struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;
////有些编译器会报错无法编译可以改成：
//struct st_type2
//{
//	int i;
//	int a[];//柔性数组成员
//}type_a2;
//int main()
//{
//	int sz = sizeof(st_type);
//	printf("%d\n", sz);//4
//	st_type s;
//	printf("%d\n", sizeof(s));//4
//	//所以不能这么创建变量 而应该是要使用malloc等
//	//柔性数组的使用
//	struct st_type2* ps = (struct st_type2*)malloc(sizeof(struct st_type2) + 40);
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	ps->i = 100;
//	printf("%d\n", ps->i);
//	for (int i = 0; i < 10; i++)
//	{
//		ps->a[i] = i + 1;
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		printf("%d ", ps->a[j]);
//	}
//	struct st_type2* ptr = (struct st_type2*)realloc(ps, sizeof(struct st_type2) + 80);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		ptr = NULL;
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//上面的是柔性数组开辟 上面的柔性数组开辟其实更好更不容易出错
//malloc的次数越多 所产生的内存碎片就越多 内存的利用率就不高
//如果我们的代码是在一个给别人用的函数中，你在里面做了二次内存分配，并把整个结构体返回给用户。
//用户调用free可以释放结构体，但是用户并不知道这个结构体内的成员也需要free，
//所以你不能指望用户来发现这个事。
//所以如果我们把结构体的内存以及其成员要的内存一次性分配好了
//并返回给用户一个结构体指针，用户做一次free就可以把所有的内存也给释放掉。
//柔性数组除了这么一个优势之外还有另一个优势
//连续的内存有益于提高访问速度，也有益于减少内存碎片
//(其实，我个人觉得也没多高了，反正你跑不了要用做偏移量的加法来寻址)
//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->n = 100;
//	ps->arr = (int*)malloc(40);
//	//这种方法申请的空间是不连续的 但是上面两种申请的空间是连续的
//	if (ps->arr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i + 1;//??????????????????????????????????
//		//理解起来蛮有难度的
//		//int* arr声明的是一个指针，但通过malloc分配内存后，它可以像数组一样使用下标
//		//[]操作可以使用 这里上面的是int*类型 所以一次4个字节的指针步长
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//扩容
//	int* ptr = (int*)realloc(ps->arr, 80);
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		// 扩容成功，更新指针
//		ps->arr = ptr;//现在ps->arr指向新的80字节内存
//	}
//	//释放
//	//必须先free(ps->arr)，再free(ps)，否则会丢失arr指针导致内存泄漏
//	free(ps->arr);//释放数组内存
//	free(ps);//释放结构体内存
//	ps = NULL;
//	return 0;
//}
//						语言文件操作
//1. 为什么使用文件
//2. 什么是文件
//3. 文件的打开和关闭
//4. 文件的顺序读写
//5. 文件的随机读写
//6. 文本文件和二进制文件
//7. 文件读取结束的判定
//8. 文件缓冲区
//
//文件有两种：程序文件、数据文件（从文件功能的角度来分类的）
//1 程序文件
//包括源程序文件(后缀为.c)目标文件(windows环境后缀为.obj),可执行程序(windows环境后缀为.exe)
//2 数据文件
//文件的内容不一定是程序,而是程序运行时读写的数据
//比如程序运行需要从中读取数据的文件,或者输出内容的文件。
//文件名
//一个文件要有一个唯一的文件标识，以便用户识别和引用
//文件名包含3部分：文件路径 + 文件名主干 + 文件后缀
//例如：              c:\code\test.txt
//为了方便起见,文件标识常被称为文件名
//文件指针
//缓冲文件系统中,关键的概念是“文件类型指针”,简称“文件指针”.
//每个被使用的文件都在内存中开辟了一个相应的文件信息区
//用来存放文件的相关信息（如文件的名字,文件状态及文件当前的位置等）
//这些信息是保存在一个结构体变量中的.该结构体类型是有系统声明的,取名FILE.
//文件的打开
//fopen
//FILE *fopen( const char *filename, const char *mode ); 在<stdio.h>中
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;//和malloc free那些类似 应该挺好理解的
//	return 0;
//}
//文件的顺序读写 
//
//      功能      函数名      适用于       函数原型
//  字符输入函数	 fgetc		所有输入流  int fgetc( FILE *stream );
//  字符输出函数	 fputc		所有输出流  int fputc( int c, FILE *stream );
//文本行输入函数  fgets		所有输入流  char *fgets( char *string, int n, FILE *stream );
//文本行输出函数  fputs		所有输出流  int fputs( const char *string, FILE *stream );
//格式化输入函数  fscanf		所有输入流  int fscanf( FILE *stream, const char *format [, argument ]... );
//格式化输出函数  fprintf		所有输出流  int fprintf( FILE *stream, const char *format [, argument ]...);
//   二进制输入   fread      文件       size_t fread( void *buffer, size_t size, size_t count, FILE *stream );
//   二进制输出   fwrite     文件       size_t fwrite( const void *buffer, size_t size, size_t count, FILE *stream );
// 
//写文件
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//写文件
//	fputc('!', pf);//int fputc( int c, FILE *stream ); <stdio.h>
//	char i = 'a';
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//		fputc(' ', pf);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//读文件
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//写文件
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//读取并更新:当你调用 fgetc(stream)时,它会做两件事：
//	//	读取:从当前文件位置指示器指向的位置读取一个字符(一个字节)
//	//	更新:将文件位置指示器向前移动一个位置,指向下一个要读取的字符
//	int ch = 0;
//	while ((ch = fgetc(pf) != EOF))
//	{
//		printf("%c ", ch);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//写一行数据
//int main()
//{
//	FILE* pf = fopen("test.txt", "a");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//写一行数据
//	fputs("hello XzDream ", pf);
//	fputs("hello XzDream\n", pf);
//	fputs("hello XzDream\n", pf);
//	//fopen"w"的话如果文件里面有内容 会把文件里面的内容销毁
//	//fopen"a"的话则不会销毁 "a"是追加
////关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");//perror:printf error 打印错误信息
//		return 1;
//	}
//	//读一行数据
//	char arr[20];
//	fgets(arr, 10, pf);
//	printf("%s\n", arr);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "zhangshan",25,59.9f };
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//
//	fprintf(pf, "%s %d %.1f\n", s.arr, s.age, s.score);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fscanf(pf, "%s %d %f\n", s.arr, &(s.age), &(s.score));
//	//关于为什么写write是fprintf和读read为什么是fscanf
//	//把fscanf理解成扫描就可以了
//	//输入就是输入到内存，输出就是从内存输出 
//	//scanf	    输入到内存         printf	从内存输出
//	//fscanf	从文件输入到内存   fprintf	从内存输出到文件
//	//printf("%s %d %f\n", s.arr, s.age, s.score);
//	fprintf(stdout, "%s %d %f\n", s.arr, s.age, s.score);
//	//打印到屏幕上面去
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//流
//任何一个C程序,只要运行起来就默认打开3个流
//FILE* stdin  ->标准输入流(键盘)
//FILE* stdout ->标准输出流(屏幕)
//FILE* stderr ->标准错误流(屏幕)
//输入流：数据从外部设备流入程序(如 stdin、fopen打开的文件用于读)
//输出流：数据从程序流向外部设备(如 stdout、fopen打开的文件用于写)
//fread fwrite
//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { 0 };
//	//以二进制的形式写到文件中
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制的方式读
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.arr, s.age, s.score);
//	//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	struct S s = { "zhangsan",25,50.f };
//	//以二进制的形式写到文件中
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	//二进制的方式写
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//sscanf 
//把字符串的内存转换为格式化的数据
//sprintf
//把一个格式化的数据转换成字符串
//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "zhangsan", 20, 55.5f };
//	struct S tmp = { 0 };
//	char buf[100] = { 0 };
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.score);
//	//把s中格式化的数据放到字符串buf中
//	printf("字符串的形式打印%s\n", buf);
//
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));
//	//从字符串s中获取一个格式化的数据到tmp中
//	printf("格式化的形式打印%s %d %f", tmp.arr, tmp.age, tmp.score);
//	return 0;
//}
//文件的随机读写
//fseek
//根据文件指针的位置和偏移量来定位文件指针
//int fseek ( FILE * stream, long int offset, int origin );
//ftell   
//返回文件指针相对于起始位置的偏移量
//long int ftell ( FILE * stream );
//rewind
//让文件指针的位置回到文件的起始位置
//void rewind( FILE *stream );
//SEEK_SET
//SEEK_SET表示文件开头(Start of File),是 fseek()函数的第三个参数（定位模式）的可选值之一。
//fseek()的作用是将文件的读写指针（File Position Indicator）移动到指定位置，而 SEEK_SET明确了移动的参考点是“文件的开头”。
//SEEK_CUR
//含义:当前读写位置 点醒用途:相对当前位置移动（如跳过 n 字节）
//int main()
//{
//	//以二进制的形式写到文件中
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fseek(pf, 2, SEEK_SET);
//	int ch = fgetc(pf);
//	printf("%d ", ftell(pf));//3
//	printf("%c\n", ch);//c
//	ch = fgetc(pf);
//	printf("%d ", ftell(pf));//4
//	printf("%c\n", ch);//d
//	fseek(pf, 2, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%d ", ftell(pf));//7
//	printf("%c\n", ch);//g
//	fseek(pf, -3, SEEK_END);//文件实际是 abcdefghijklmn\r\n（16 字节，\r是第 14 字节，\n是第 15 字节）
//	//所以这里需要-3
//	ch = fgetc(pf);
//	printf("%d ", ftell(pf));//14
//	printf("%c\n", ch);//n
//	rewind(pf);
//	ch = fgetc(pf);//重置文件指针的偏移量
//	printf("%d ", ftell(pf));//1
//	printf("%c\n", ch);//a
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//文本文件和二进制文件
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	//看的时候注意大小端
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//文件读取结束的判定
//被错误使用的feof
//feof
//int feof(FILE *stream);
//牢记：在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束。
//而是应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束。
//1. 文本文件读取是否结束，判断返回值是否为 EOF （ fgetc ），或者 NULL （ fgets ）
//例如：
//fgetc 判断是否为 EOF .
//fgets 判断返回值是否为 NULL .
//2. 二进制文件的读取结束判断，判断返回值是否小于实际要读的个数。
//例如：
//fread判断返回值是否小于实际要读的个数。
//int main(void)
//{
//	int c; // 注意：int，非char，要求处理EOF
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) //NULL本身是0 可以速览定义看一下的
//	{
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//	{
//		putchar(c);
//	}
//	//判断是什么原因结束的
//	if (ferror(fp))
//		puts("I/O error when reading");
//	else if (feof(fp))
//		puts("End of file reached successfully");
//	fclose(fp);
//}
//enum
//{
//	SIZE = 5
//};
//int main(void)
//{
//	double a[SIZE] = { 1.,2.,3.,4.,5. };
//	FILE* fp = fopen("test.bin", "wb"); // 必须用二进制模式
//	if (fp == NULL)
//	{
//		perror("错误信息");
//		return 1;  // 或 exit(1)
//	}
//	fwrite(a, sizeof * a, SIZE, fp); // 写 double 的数组
//	fclose(fp);
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // 读 double 的数组
//	if (ret_code == SIZE)
//	{
//		puts("Array read successfully, contents: ");
//		for (int n = 0; n < SIZE; ++n) printf("%f ", b[n]);
//		putchar('\n');
//	}
//	else
//	{ // error handling
//		if (feof(fp))//判断是否是遇到文件末尾而结束
//		{
//			printf("Error reading test.bin: unexpected end of file\n");
//		}
//		else if (ferror(fp))//判断是否是读的时候遇到错误而结束的
//		{
//			perror("Error reading test.bin");
//		}
//	}
//	fclose(fp);
//}
//文件缓冲区
//为什么需要缓冲区？
//直接向硬件设备（如磁盘、屏幕）读写数据效率极低（比如写一个字符就触发一次磁盘操作）。
//缓冲区的作用是：将数据暂存于内存中，积累到一定量后再批量读写硬件，减少硬件交互次数，大幅提升性能。
//不同的编译器的缓冲区的大小会有所差异
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}
//程序环境和预处理
//程序的翻译环境
//程序的执行环境
//详解：C语言程序的编译 + 链接
//预定义符号介绍
//预处理指令 #define
//宏和函数的对比
//预处理操作符#和##的介绍
//命令定义
//预处理指令 #include
//预处理指令 #undef
//条件编译
//test.c 编译器处理后变成 test.obj(称为目标文件)
//编译 + 链接
//看附图 手机相册命名为“编译链接”
//组成一个程序的每个源文件通过编译过程分别转换成目标代码（object code）。
//每个目标文件由链接器（linker）捆绑在一起，形成一个单一而完整的可执行程序。
//链接器同时也会引入标准C函数库中任何被该程序所用到的函数，而且它可以搜索程序员个人
//的程序库，将其需要的函数也链接到程序中
//编译分成三个部分:预编译/预处理 --> 编译 --> 汇编   
//之后链接
//extern int add(int x,int y);
////在其他文件里面找到add 发生在链接阶段
//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("%d\n",add(a,b));//3
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("long.txt", "w");
//	if (NULL == pf)
//	{
//		perror("errno");
//		return EXIT_FAILURE;//1
//		//return EXIT_SUCCESS;//0
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		fprintf(pf, "File:%s Line:%d Time:%s CiShu:%d\n", __FILE__, __LINE__, __TIME__, i);
//	}
//	return EXIT_SUCCESS;
//}
//__FILE__      //进行编译的源文件
//__LINE__     //文件当前的行号
//__DATE__    //文件被编译的日期
//__TIME__    //文件被编译的时间
//__STDC__    //如果编译器遵循ANSI C，其值为1，否则未定义   //VS不遵循
//#define 定义标识符
//#define MAX 1000
//#define reg register          //为 register这个关键字，创建一个简短的名字
//#define do_forever for(;;)     //用更形象的符号来替换一种实现
//#define CASE break;case        //在写case语句的时候自动把 break写上。
//// 如果定义的 stuff过长，可以分成几行写，除了最后一行外，每行的后面都加一个反斜杠(续行符)。
//#define DEBUG_PRINT printf("file:%s\tline:%d\t date:%s\ttime:%s\n" ,\
//__FILE__,__LINE__ ,\
//__DATE__,__TIME__ )   //上面这两个斜杠叫做续行符 转义了回车 让回车不再是回车
//#define MAX 1000
//#define STR "only for one"
//#define print printf("hehe\n")
//int main()
//{
//	print;
//	printf("%d\n", MAX);
//	printf("%s\n", STR);
//	return 0;
//}
//学习Git
//一条龙 干到底  顺便把GitHub和Gitee给搞好
//用Cursor制作冬至贺卡
//宏定义时考虑到运算优先级和结合性的问题 所以不要吝啬括号
//#define SQUARE1(X) ((X)*(X))
//#define SQUARE2(X) X*X
////所以写宏时不要吝啬括号
//int main()
//{
//	int r1 = SQUARE1(5 + 1);
//	int r2 = SQUARE2(5 + 1);
//	printf("%d\n", r1);//36  ((6)*(6))
//	printf("%d\n", r2);//11
//}
//#define DOUBLE1(X) (X)+(X)
//#define DOUBLE2(X) ((X)+(X))
//int main()
//{
//	int i = 10 * DOUBLE1(3);
//	printf("%d\n", i);//33    = 10*3+3
//	int j = 10 * DOUBLE2(3);
//	printf("%d\n", j);//60    = 10*((3)+(3))
//}
//#define 替换规则
//在程序中扩展#define定义符号和宏时，需要涉及几个步骤。
//1. 在调用宏时，首先对参数进行检查，看看是否包含任何由#define定义的符号。如果是，它们首先
//被替换。
//2. 替换文本随后被插入到程序中原来文本的位置。对于宏，参数名被他们的值替换。
//3. 最后，再次对结果文件进行扫描，看看它是否包含任何由#define定义的符号。如果是，就重复上
//述处理过程。
//注意：
//1. 宏参数和#define 定义中可以出现其他#define定义的变量。但是对于宏，不能出现递归。
//2. 当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索
//#define M 100
//#define DOUBLE(X) ((X)+(X))
//int main()
//{
//	DOUBLE(M + 2);
//	//合法
//}
//#和##的用法
//#的用法
//#define PRINT(N) printf("the value of "#N" is %d\n",N)
//int main()
//{
//	printf("hello world\n");
//	printf("hello ""world\n");
//	//所以字符串是有自动链接的特点的
//	//printf的冷知识补充
//	//都会输出hello world
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	//#N把参数转换成一个字符串
//	//#N会被替换成"a"
//	printf("the value of ""a"" is %d\n", a);
//	printf("the value of ""b"" is %d\n", b);
//}
//#define PRINT(N,FORMAT) printf("the value of"#N" is "FORMAT"\n",N)
//int main()
//{
//	int a = 10;
//	PRINT(a, "%d");
//	float b = 3.14f;
//	PRINT(b, "%lf");
//	return 0;
//}
//##号的用法
//##可以把位于两边的符号合成一个符号
//#define CAT(Class,Num) Class##Num
//int main()
//{
//	int class106 = 100;
//	printf("%d\n", CAT(class, 106));//100
//	//等价于printf("%d\n",class106);
//}
//宏参数的副作用 
//宏的参数是替换进去的 而不是计算完再替换进去的
//先来回顾一下目前常见的副作用
//int main()
//{
//	int a = 10;
//	int b;
//	printf("%d\n", b = ++a);//11  副作用是a在此处也会发生自增
//	printf("%d\n", a);//11
//	return 0;
//}
//#define MAX(x,y) ((x)>(y)?(x):(y)) //再提醒一遍不要吝啬括号
//int main()
//{
//	int m = MAX(2, 3);
//	printf("%d\n", m);//3
//	//这个好理解也没有任何问题
//	int a = 5, b = 4;
//	int c = MAX(a++, b++);//使用诸如此类的宏时会发生不可预测的结果
//	printf("a=%d b=%d c=%d\n", a, b, c);//7 5 6
//	//7好理解 但是5不好理解 因为:(b)没有被执行 b只在(a)>(b)这一块发生了自增
//	//6也不好理解 ?(a++) 先使用a是6的值 然后a再自增变成7
//	return 0;
//}
//宏和函数  非要争个好坏吗? 知道什么时候使用宏 什么时候使用函数就好了
//宏的优势
//1. 用于调用函数和从函数返回的代码可能比实际执行这个小型计算工作所需要的时间更多。所以宏比
//函数在程序的规模和速度方面更胜一筹。
//2. 更为重要的是函数的参数必须声明为特定的类型。所以函数只能在类型合适的表达式上使用。反之
//这个宏怎可以适用于整形、长整型、浮点型等可以用于 > 来比较的类型。宏是类型无关的。
//宏的劣势
//1. 每次使用宏的时候，一份宏定义的代码将插入到程序中。除非宏比较短，否则可能大幅度增加程序的长度。
//2. 宏是没法调试的。
//3. 宏由于类型无关，也就不够严谨。
//4. 宏可能会带来运算符优先级的问题，导致程容易出现错。
//e.g.
//#define MAX(x,y) ((x)>(y)?(x):(y))//没有类型的限制
//int Max(int x, int y)//类型限制为int
//{
//	return (x > y ? x : y);
//}
//#define MALLOC(NUM,TYPE) (TYPE*)malloc((NUM)*sizeof(TYPE))
//int main()
//{
//	//malloc(40);
//	//malloc(10,int);//error
//	int* p1 = MALLOC(10, int);
//	int* p2 = (int*)malloc(10 * sizeof(int));
//	return 0;
//}
//一些编码习惯 宏名写成全大写 函数名用驼峰命名法
// #undef
//这条指令用于移除一个宏定义
//#define M 100
//void test(int m)
//{
//	printf("%d\n", m);
//}
//int main()
//{
//	printf("%d\n", M);
//	test(M);
//#undef M
//	//printf("%d", M);
//	return 0;
//}
//条件编译
//#define __DEBUG__
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef __DEBUG__ //为假的话 后面就不参与编译
//		printf("%d\n",arr[i]);
//#endif // __DEBUG__    //这里的注释是增加代码的可读性的 目的是为了知道这个条件编译和哪个匹配
//	}
//	return 0;
//}
//提供一些常用的条件编译指令
/*
1.
#if 常量表达式
//...
#endif
//常量表达式由预处理器求值。
如：
#define __DEBUG__ 1
#if __DEBUG__
//..
#endif
2.多个分支的条件编译
#if 常量表达式
//...
#elif 常量表达式
//...
#else
//...
#endif
3.判断是否被定义
#if defined(symbol)
#ifdef symbol
#if !defined(symbol)
#ifndef symbol
4.嵌套指令
#if defined(OS_UNIX)
#ifdef OPTION1
unix_version_option1();
#endif
#ifdef OPTION2
unix_version_option2();
#endif
#elif defined(OS_MSDOS)
#ifdef OPTION2
msdos_version_option2();
#endif
#endif
*/
//int main()
//{
//#if 1 //记得这里要放常量表达式
//	printf("hehe\n");
//#endif
//
//#if 0
//	printf("hehe\n");
//#endif
//
//#if 2==3
//	printf("hehe\n");
//#endif
//
//	return 0;
//}
//#define M 3
//int main()
//{
//#if M<5
//	printf("hehe\n");
//#elif M==5
//	printf("haha\n");
//#elif
//	printf("heihei\n");
//#endif
//	return 0;
//}
//#define MAX 100
//int main()
//{
//#if defined(MAX)
//	printf("hehe\n");
//#endif
//	int i = 0;
//#if defined(i)
//	printf("hehe\n");
//#endif
//	return 0;
//}
//int main()
//{
//#if !defined(MAX)
//	printf("max\n");
//#endif
//	return 0;
//}
//其他的一些预编译指令
//#error：强制编译报错（终止编译）
//在预处理阶段检测到非法条件时，立即终止编译，并输出自定义错误信息
//#pragma：编译器专属指令（平台相关）
//核心作用是向编译器发送特定指令（非标准，不同编译器支持的 #pragma 不同），用于控制编译行为
//#line：修改行号 / 文件名（调试辅助）
//修改预处理器记录的「当前行号」和「文件名」

// MSVC：设置结构体按 16 字节对齐
//#pragma pack(push, 16)  // push 保存当前对齐设置，16 设为新值
//struct Data
//{
//	char a;
//	int b;
//	double c;
//};
//#pragma pack(pop)  // 恢复之前的对齐设置
//// GCC：等价写法（也可用 __attribute__）
//#pragma pack(16)
//struct DataGCC 
//{
//	char a;
//	int b;
//	double c;
//};
//#pragma pack()
//int main()
//{
//	// 原始行号：假设 main 从第4行开始
//	printf("原始：行号=%d，文件=%s\n", __LINE__, __FILE__);  // 输出 6, test.c
//	// 修改行号为 100，文件名为 "my_code.c"
//#line 100 "my_code.c"
//	printf("修改后：行号=%d，文件=%s\n", __LINE__, __FILE__);  // 输出 101, my_code.c
//	// 后续行号自动递增
//	printf("自动递增：行号=%d\n", __LINE__);  // 输出 102
//	return 0;
//}
//offsetof宏的实现
//size_t offsetof( structName, memberName );//函数原型
//来个百度笔试题
//写一个宏 计算结构体中某变量相对于首地址的偏移，并给出说明
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#define OFFSETOF(type,m_name) (size_t)&(((type*)0)->m_name) //太牛逼NB了 好好研究这串代码 算是指针的运用
//#define OFFSETOF(type,m_name) (size_t)&(((type*)0x00000000)->m_name) //也可以这么写
//int main()
//{
//	struct S s = { 0 };
//	struct S* ps = &s;
//	printf("%d\n", OFFSETOF(struct S, c1));//0
//	printf("%d\n", OFFSETOF(struct S, i));//4
//	printf("%d\n", OFFSETOF(struct S, c2));//8
//	//printf("%d\n", offsetof(struct S, c1));//0
//	//printf("%d\n", offsetof(struct S, i));//4
//	//printf("%d\n", offsetof(struct S, c2));//8
//	return 0;
//}
//OK啊 所有知识点结束 记得及时复习巩固和加强刷题训练 顺便再写一篇博客

//补题 单身狗 力扣260
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次
//编写一个函数找出这两个只出现一次的数字   太牛逼NB了鹏哥这个方法
//void find_single_dog(const int arr[], const int sz, int* pd1, int* pd2)
//{
//	//1,1,2,2,3,3,4,4,5,6  
//	//1,2,3,4,5,1,2,3,4,6
//	//0101 ->5
//	//0110 ->6
//	//0011 ->3
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];//同0异1
//	}
//	int pos = 0;
//	//00000000 00000000 00000000 00000011 -->ret
//	//00000000 00000000 00000000 00000001 -->1
//
//	for (pos = 0; pos < 32; pos++)
//	{
//		if (((ret >> pos) & 1) == 1)
//		{
//			break;// 如果找到为 1 的位，立即跳出循环    且pos的值会被更新
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)//分组来x和y的pos是不同的 所以必定一个在if组 一个在else组
//		{
//			*pd1 ^= arr[i];//好好理解 这块不好懂 
//		}
//		else
//		{
//			*pd2 ^= arr[i];
//		}
//	}
//}
////懂了 song
////分组
////0去异或所有数字得到的就是那两个单生狗的异或
////异或位置上的不同的就是1 pos那里从左往右找到第一个为1的数并更新pos的值 *pd1是0 按照分组来异或 相同的异或完就变成了0 所以
////最后*pd1就是第一组里面的那个单身狗
////同样的else得到的就是另一个单身狗
//int main()
//{
//	int arr[] = { 1,1,2,2,3,3,4,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int dog1 = 0;
//	int dog2 = 0;
//	find_single_dog(arr, sz, &dog1, &dog2);
//	printf("%d %d\n", dog1, dog2);
//	return 0;
//}
//atoi
//int atoi(const char *str)  <stdlib.h>
//返回转换后的长整数
//atoi基本用法
//int main()
//{
//	int val;
//	char str[20];
//	strcpy(str, "9899ads489");
//	val = atoi(str);
//	printf("字符串值 = %s, 整型值 = %d\n", str, val);
//	//字符串值 = 9899ads489, 整型值 = 9899
//	strcpy(str, "runoob.com");
//	val = atoi(str);
//	printf("字符串值 = %s, 整型值 = %d\n", str, val);
//	//字符串值 = runoob.com, 整型值 = 0
//	return(0);
//}
//接下来模拟实现atoi
//enum Status
//{
//	VALID,//0
//	INVALID//1
//};
//enum Status sta = INVALID;
//int  myatoi(const char* str)
//{
//	sta = INVALID;
//	assert(str);
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	while (isspace(*str))
//	{
//		str++;
//	}
//	int flag = 1;
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	long long sum = 0;
//	// 开始转换数字
//	while (*str && isdigit(*str))
//	{
//		int digit = *str - '0';
//		// 检查正溢出
//		if (flag == 1 && sum > INT_MAX / 10 - digit / 10)
//		{
//			sta = INVALID;
//			return INT_MAX;
//		}
//		// 检查负溢出
//		if (flag == -1 && (-sum) < INT_MIN / 10 + digit / 10)
//		{
//			sta = INVALID;
//			return INT_MIN;
//		}
//		sum = sum * 10 + digit;
//		str++;
//	}
//	// 如果遇到了非数字字符且已经转换了数字，则认为是有效转换
//	// 如果整个字符串都没有数字，则是无效转换
//	if (str != (str - (sum == 0 ? 0 : 1))) // 简单判断是否转换了数字
//	{
//		sta = VALID;
//	}
//	return flag * sum;
//}
//int main()
//{
//	char str1[] = "xing1019zi";
//	char str2[] = "1019xingzi1019";
//	char str3[] = "-1019xingzi1019";
//	if (sta == VALID)
//	{
//		printf("合法转换\n");
//	}
//	else if (sta == INVALID)
//	{
//		printf("非法返回\n");
//	}
//	int val1 = myatoi(str1);
//	printf("%s %d\n", str1, val1);//0
//	int val2 = myatoi(str2);
//	printf("%s %d\n", str2, val2);//1019
//	int val3 = myatoi(str3);
//	printf("%s %d\n", str3, val3);//-1019
//	return 0;
//}
//坑
//#define INT_PTR int*
//typedef int* int_ptr;
//INT_PTR a, b;//a是int* b是int
//int_ptr c, d;//c是int* d是int*
////int* a, b;和 int *a, b;是完全等价的
////*只属于 a，不属于 b
//再强调一遍:feof是用来确认上一次读取操作是否因为到达文件末尾而失败
//写一个宏 可以将一个整数的二进制位的奇数和偶数位交换
//#define SWAP_BIT(N) ((((N)&(0x55555555))<<1) + ((N)&(0xaaaaaaaa)>>1))
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	SWAP_BIT(n);
//	return 0;
//}
//int main()
//{
//	unsigned char i = 7;
//	int j = 0;
//	for (; i > 0; i -= 3)
//	{
//		++j;
//	}
//	printf("%d\n", j);
//	//7 4 1 
//	//1 2 3
//	//10000000 00000000 00000000 00000010 --> -2
//	//11111111 11111111 11111111 11111101
//	//11111111 11111111 11111111 11111110 --> -2的补码
//	//							 11111110 --> 放进i  十进制为254 所以1-2之后变成254
//	//254 / 3 = 84 ----2     2 - 3 = -1
//	//10000000 00000000 00000000 00000001 --> -1
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111 --> -1的补码
//	//							 11111111 --> 放进i  十进制为255
//	//255 / 3 = 85 
//	//3+84+1+85=173
//	return 0;
//}
//int main()
//{
//	char a = 0, ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (a % 2 != 0 && (ch >= 'a' && ch <= 'z'))
//		{
//			ch = ch - 'a' + 'A';
//		}
//		a++;
//		putchar(ch);
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int a = -3;
//	unsigned int b = 2;
//	long c = a + b;
//	printf("%ld\n", c);
//	printf("%u\n", c);
//	return 0;
//}
//strcspn
//size_t strcspn(const char *str1, const char *str2); 
//用于计算 字符串 str1开头连续不包含 str2中任意字符的字符个数
//int main()
//{
//	char s[20] = "abcd";
//	char* sp = s;
//	puts(strcat(sp + 1, "ABCD" + 1));
//}
//复习结构体成员的访问
//点直接，箭头解"     .    ->
//变量用点（直接访问）
//指针用箭头（先解引用再访问）
//ptr->member
//(*ptr).member
//(*(ptr)).member
//几个函数介绍 都在math.h里面
//ceil(x)   助记:ceiling天花板  故是向上取整
//floor(x)  助记:floor地板      故是向下取整
//round(x)  助记:round​ 是"圆"的，像四舍五入的"四"和"五"一样圆润
//int main()
//{
//	float a = 1.9;
//	float b = 2.4;
//	float c = 3.5;
//	float d = 4.1;
//
//	printf("%.0f\n", floor(a));//1
//	printf("%.0f\n", round(b));//2
//	printf("%.0f\n", round(c));//3
//	printf("%.0f\n", ceil(d));//4
//
//	return 0;
//}
//文件定位函数
//ftell(stream)获取当前位置
//fseek(stream, offset, origin)移动文件指针
//rewind(stream)回到文件开头
//fflush(stream)刷新缓冲区
//错误处理函数
//feof(stream)检查文件结束
//ferror(stream)检查错误
//clearerr(stream)清除错误标志
//perror(msg)打印错误信息


//学数据结构时下面内容记得拷贝过去和修改一下
//多写写博客
//1、系统过完数据结构 —— 所有代码要全部跟着自己实现一遍
//2、C++新特性、Linux、MySQL
//3、过算法集训 —— 保持力扣刷题
//4、高数 四级                                 鹏哥150集   预处理
/*									  蓝桥杯报名✔ ACM三轮选拔12.18 14.30-17.00✔   linux
									  easyX 控制台 swing 数据库 shutdown命令 句柄 vwmare workstation
									  Git✔  PTA上50题 洛谷200题 LeetCode 汉诺塔(小游戏)
									  英语四级 班主任的科研组 	 数据结构 算法
									  《函数栈帧的创建与销毁》《剑指offer》《高质量C/C++编程指南》
大一上  1.C语言 中国大学MOOC 翁恺✔
		2.《C primer plus》
		3.大概学到指针和结构体✔
		4.菜鸟教程（https://www.runoob.com/）
		5.B站（C语言小项目）✔

大一下：1.数据结构与算法基础
	   2.在学这门课的过程中或者学完之后在力扣(leetcode)和洛谷两个网站去刷算法题，一天一道长期坚持。
	   3.C语言学完之后就可以开始C++学习
		1.基础语法跟B站播放量靠前的网课（黑马、尚硅谷、浙大翁恺等)，书的话看一本《C++ Primer plus》
		2.基础语法学完之后接着补相关技术体系（网络编程、多线程、Linux、数据库等）。参考发的《C++体系学习建议》。
		3.体系学完之后开始准备项目
		4.找项目：在github和gitee去找
*/