-- 视图

/*
视图是一个虚拟的表，它是基于一个或多个基本表或其他视图的查询结果集。
视图本身不存储数据，而是通过执行查询来动态生成数据。
用户可以像操作普通表一样使用视图进行查询、更新和管理。
视图本身并不占用物理存储空间，它仅仅是一个查询的逻辑表示，
物理上它依赖于基础表中的数据。
*/

create database java119_3;
use java119_3;
create table student(id int,name varchar(20));

insert into student values(1,"张三"),(2,"李四"),(3,"王五");

create view v_student AS
select * from student where id <= 2;
-- 不会在硬盘上面创建B+树
-- 先自动执行视图对应的SQL 把视图的数据拿到
-- 再基于视图的查询结果 进行上述查询

select * from v_student;

-- create view v_student_2 (name) AS
-- select * from student;               -- error 前后列名要一样

create view v_student_2 (name) AS
select name from student;

select * from v_student_2;

update student set name = "张三三" where id = 1;
select * from student;
select * from v_student; -- 所以原来的表一遍 所以视图也跟着变 反之也成立

update v_student set name = '张六' where id = 1;

-- 因此就是没有创建新的B+树 就是在修改原来的表

-- 有些视图是不可以修改的
-- 视图修改的核心原则：MySQL 必须能把视图的一行/一列，无歧义地映射回基表的一行一列。做不到就不可更新
-- 不过可以去改原表 前提是有原表修改的权限

-- 视图的优点
-- 1. 简单性：
--            视图可以将复杂的查询封装成一个简单的查询。
--            例如，针对一个复杂的多表连接查询，可以创建一个视图，用户只需查询视图而无需了解底层的复杂逻辑。
-- 2. 安全性：
--            通过视图，可以隐藏表中的敏感数据。
--            例如，一个系统的用户表中，可以创建一个不包含密码列视图，
--            普通用户只能访问这个视图，而不能访问原始表。
-- 3. 逻辑数据独立性：
--                    视图提供了一种逻辑数据独立性，即使底层表结构发生变化，
--                    只需修改视图定义，而无需修改依赖视图的应用程序。使用到应用程序与数据库的解耦
-- 4. 重命名列：
--            视图允许用户重命名列列名，以增强数据可读性。











