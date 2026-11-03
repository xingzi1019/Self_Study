-- test
use java119;
drop table student;
CREATE table student(
  id int,
  name varchar(20)
);
select * from student;
desc student;
=
CREATE table student2(id int,name varchar(20));

insert into student VALUES(1,"张三"),(2,"李四"),(3,"王五");

select * from student;
desc student2;
select * from student2;


-- 插入查询结果 查出来的列的个数和类型 要和插入的表的列的个数和类型匹配
-- 把后面的查询结果插入到 student2 里面
insert into student2 select * from student;
insert into student2 select name from student; -- 这样就不行 会报错
insert into student2 (name) select name from student; -- 这样就行

drop table student2;

CREATE table student2(student_id int,student_name varchar(20));
-- 名字不影响
insert into student2 select * from student;

-- 聚合查询

-- 聚合函数
count(DISTINCT expr)
sum(DISTINCT expr) -- 不是数字没有意义
avg(DISTINCT expr) -- 不是数字没有意义
max(DISTINCT expr) -- 不是数字没有意义
min(DISTINCT expr) -- 不是数字没有意义
-- 上面说的数字 是指数字类型 字符串这种能隐式转换成数字的

select * from exam;

delete from exam; 

INSERT INTO exam (id,name, chinese, math, english) VALUES
(1, '唐三藏', 67, 98, 56),
(2, '孙悟空', 87, 78, 77),
(3, '猪悟能', 88, 98, 90),
(4, '曹孟德', 82, 84, 67),
(5, '刘玄德', 55, 85, 45),
(6, '孙权', 70, 73, 78),
(7, '宋公明', 75, 65, 30);

select count(*) from exam; -- 先执行 select * from exam 然后针对上述的查询结果 应用聚合函数

select count (*) from exam; -- 报错 这个函数和() 不允许有空格 和 C/Java区分开来

select count(name) from exam; -- 先执行 select name from exam 在聚合

INSERT into exam values(null,null,null,null,null); -- 也会被 count(*) 记录

select count(id,name) from exam; -- 报错 count 括号里面不能写多个列

select count(chinese + 10) from exam;

-- 下面这两行是等价的
select count(10) from exam; 
SELECT COUNT(*) FROM exam;
-- COUNT(expr) 的语义是：统计 expr 不为 NULL 的行数

-- 统计 name 为空的个数 下面两行的结果一样
select count(*) - count(name) from exam;
select count(*) from exam where name is null;

-- 统计语⽂成绩小于60分的学⽣个数
select count(*) from exam where chinese < 60;

-- 问: 一个sql条件中 有 limit 有聚合函数执行顺序
/*
  遍历表的每一行
  执行where 把每一行带入条件
  获取到列 表达式求值 定义别名操作
  执行order by 对结果排序
  执行limit 进行长度限制
  再进行聚合
*/

select  * from exam;
-- 统计所以学生数学成绩总分
select sum(math) from exam; -- sum会直接排除空值 在 SQL 中 NULL + 值 的结果就是 NULL
 
select sum(chinese + math + english) as total from exam;
-- 确定表来源 逐行计算表达式 sum聚合

select sum(name) from exam;
show WARNINGS;
-- 警告信息: Truncated incorrect DOUBLE value: '唐三藏'
insert into exam (name) values("100张三");
select sum(name) from exam; -- 插入上面的一行后 sum 的结果变成 100 了 但是警告是没变的
-- 隐式类型转换过程中，尽可能把字符串转正double
-- 如果字符串前半段是数字 是能转换出内容的 预想的情况是整个字符串都能转成数字
-- 100张三 遇到转不了的就截断
-- sql 会尝试把字符串往double转换 

select avg(math) from exam;

select avg(chinese +math +english) from exam;

select max(english) from exam; -- 先查询 english 列 再聚合

select max(english),min(english) from exam;

select max(name) as 最大名,min(name) as 最小名 from exam; -- 猪悟能 100张三

-- 之前的校验规则 就会对字符串来进行大小比较的排序

-- MySQL 的校验规则（Collation）决定了字符串如何比较、排序、是否区分大小写

show charset;
SHOW COLLATION;

-- group by 分组查询

-- 语法
SELECT {col_name | expr} ,... ,aggregate_function (aggregate_expr)
FROM table_references
GROUP BY {col_name | expr}, ... 
[HAVING where_condition]
-- 规则: 把这一列相同的值划分到同一个组中

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

update emp set id = 5 where name = "田七"; 
update emp set id = 6 where name = "马云"; 
update emp set id = 7 where name = "马化腾"; 

select count(*) from emp GROUP BY role; 
select role,count(*) from emp GROUP BY role; 

select id,name,role,salary from group by role; -- 报错 
-- 当分组查询的时候 就已经把数据分成多个组了
-- 每一组只能产出一行结果
-- 那么一组里面有多行数据 应该显示哪一行的呢 会有歧义 所以报错

-- 这些非 group by 的列 不能直接作为 被查询的列 但是可以通过聚合函数 来进行一些分组统计
-- 也可以通过 mysql 提供的配置进行修改

select role,avg(salary),max(salary),min(salary) from emp GROUP BY role;

-- 使用GROUP BY 对结果进行分组处理之后，对分组的结果进行过滤时，不能使用 WHERE 子句，⽽要使用 having 子句
select role,avg(salary) from emp GROUP BY role having avg(salary) < 15000;

-- where 的条件是在聚合之前使用的条件
-- having 的条件是聚合之后使用的条件

-- 查询每个岗位的平均薪资 筛选出平均薪资低于 15000的岗位 但是不包含 "张三"的情况
select role,avg(salary) from emp where name != "张三" GROUP BY role having avg(salary) < 15000;

-- 执行顺序 
-- f w g 聚合 h s o
-- from - where - group by - 聚合 - having - select - order by
























