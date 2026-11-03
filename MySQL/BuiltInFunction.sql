-- 内置函数
select curdate();

drop table if exists emp;

create table emp (
 id int,
 name varchar(20) ,
 role varchar(20) ,
 salary decimal(10, 2) -- 第一个参数整体小数的长度 第二个参数保留几位小数
);

insert into emp values (1, '张三', '开发', 10000.00);
insert into emp values (2, '李四', '开发', 11000.00);
insert into emp values (3, '王五', '开发', 12000.00);
insert into emp values (4, '赵六', '测试', 9000.00);
insert into emp values (5, '田七', '测试', 11000.00);
insert into emp values (6, '马云', '老板', 100000.00);
insert into emp values (7, '马化腾', '老板', 200000.00);

select * from emp;

select curdate(); -- 数据库服务器的时间日期

select role,avg(salary),CURDATE() as 查询日期 from emp where name != "张三" GROUP BY role having avg(salary) < 15000;

-- 数据库服务器的时间日期
select curtime(); -- 不区分大小写 但是不能和()有空格

select now(); -- 日期 时间

create table test(time datetime);

insert into test values(now());
insert into test values(CURDATE());
insert into test values(CURtime());

SELECT * FROM test;

insert into test values("2000-01-01 12:00:00"); -- sql会把插入的字符串 隐式转换

select time from test ORDER BY time;

SELECT date(time) from test; -- 有点像截取

select adddate("2025-06-05",INTERVAL 10 day);
select adddate("2025-06-05",INTERVAL 10 month);

-- 主流的编程语言 都提供了日期运算功能 (c没有 c++11以下没有)

select * from exam;

-- length(str) 返回字节数 char_length(str) 返回字符串长度
select name,length(name),char_length(name) from exam; -- 我们这个编码方式 中文占用3个字节

select name ,concat(name,"的语文成绩",chinese,"分,数学成绩",math,"分，英语成绩",english) as 成绩 from exam;

-- 虽然字符串提供了这样的一些字符串操作
-- 但是实际开发很少会直接在数据库中进行 
-- 毕竟数据库往往是后端系统中 效率最低的一环
-- 要减少数据库的负担 
-- 字符串的处理多在java代码中完成

-- 字符串的拼接用逗号隔开
select concat_ws(',',chinese,math,english) from exam; -- 67,98,56
-- concat_ws 在更多的编程语言里面被称作join 是 split的逆向操作

select instr("hello sql","sql"); -- 7 下标从1开始

-- 在指定位置进行插入
select insert("hello datebase",8,0,"mysql"); -- hello dmysqlatebase
select insert("hello datebase",8,5,"mysql"); -- hello dmysqlse
-- 第三个参数是你要替换的字符数量 如果为 0 就是直接插入

select substr("hello database",8);
select substr("hello database" from 8 for 3);


show tables;

select * from emp;

select * from test;

select * from exam;

select * from student;

select * from student2;

-- 数学函数
-- crc32(expr) 用来计算"校验和"的算法

select abs(-3.14);

select floor(3.14);

select floor(-3.14); -- -4

select ceil(3.14);

select ceil(-3.14); -- -3

select rand();

-- 1-100
select floor(rand()*100) + 1;

-- 四舍五入 小数点后几位
select round(3.14,1);
select round(3.165,2);

-- 查询数据库服务器的版本号 和客户端无关
select version();

select database(); -- 和 use 相对

select user(); -- root@localhost

-- 数据库可以创建很多用户 分配不同的权限

select name from exam;

select ifnull(name,"匿名") from exam;

-- md5 和 crc32()
select md5();
select crc32();








