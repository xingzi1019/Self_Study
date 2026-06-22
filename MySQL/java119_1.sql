/*navicat可以只运行只选中代码
  搞清楚服务和客户端*/


/*如果不存在java119这个数据库就创建*/
create database if not exists java119; 
/*展示所有数据库*/
show databases;
/*创建其他数据库*/
create database java119_2 charset utf8;
/*mysql的utf8是有bug的 不支持一些emoji表情 大多数是utf8mb4 但是mysql8之后的版本就默认是utf8mb4*/
/*上面和下面的写法都是可以的*/
/* create database java119_2 character set utf8; */

/* 展示校验规则 */
show collation;

/*展示警告*/
show warnings;

/*查看数据库⽀持的字符集编码*/
show charset;

/*
MySQL8.0默认的排序规则是 utf8mb4_0900_ai_ci , MySQL5.7默认排序规则是
utf8mb4_general_ci

utf8mb4_0900_ai_ci是MySQL8.0引⼊的新规则，在老版本中不能识别;
utf8mb4 编码是对 Unicode 字符集的一种实现，用1到4个字节表示一个字符，可以表⽰世界上
⼏乎所有的字符，⽽且更节少空间
*/

/*查看系统默认字符集*/
show variables like '%character%';
/*查看系统默认排序规则*/
show variables like '%collaction%';

/*
一个mysql上面有很多个数据库
实际操作的时候 需要先选择一个 然后进行进一步的操作
use 数据库名
*/

/*这会切换数据库到你写的数据库名里面
  相当于'选中操作'
*/
use java119;

use java119_2;

/*
创建一个库名为班级名
字符编码集为 utf8mb4
排序规则为 utf8mb4_0900_ai_ci的数据库
数据库不存在时则创建
*/
create database if not exists java01 character set utf8mb4 collate utf8mb4_0900_ai_ci;

/*查看创建语句*/
show create database java119;

show create database java119_2;

/*
修改数据库
对数据库的修改主要是修改数据库的字符集，校验规则
但实际当中很少修改
*/

# MySQL专属注释
/* 多行注释 */
-- 单行注释                  这是最常用、最通用的标准写法，几乎所有的数据库都支持

-- 删除数据库             
drop database java119_2;
-- 删除数据库是⼀个危险操作，不要随意删除数据库
-- 删除数据库之后，数据库对应的⽬录及⽬录中的所有⽂件也会被删除
-- 删除数据库之后，使⽤show databases; 语句查看不到对应的数据库

-- 数据类型
/* 在面向对象软件开发的过程中，通常会先进行需求分析从而得到类和属性类是面向对象中的概念，
对应到数据库中的概念就是实体，类中的属性对应实体中的属性。
实体通常以表的形式存在   每个实体对应⼀张表，表中的每条记录(数据⾏)就是实体的⼀个实例，每条记录⼜包含若⼲字段(或称为列)，每个字段代表实体的⼀个属性。如果要定义实体的属性，就要为属性命名并指定合适的数据类型。其他编程语⾔类似，SQL中规定了⽤于描述属性的数据类型。
*/

































