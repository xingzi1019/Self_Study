-- 数据库约束

-- not null
-- default 给列指定默认值 没赋值会有默认值
-- unique  唯一
-- primary key 主键约束
-- foreign key 外键约束
-- check       限制值
use java119;
drop table student;
create table student(id int,name varchar(20));

insert into student values(null,null);

select * from student;

drop table student;

-- not null
create table student(id int not null,name varchar(20) not null);

insert into student values(null,null); -- 报错
select * from student;

desc student;
desc exam;
show tables;

drop table student;

-- default 给列指定默认值 没赋值会有默认值
CREATE table student(id int,name varchar(20) default '匿名'); -- 注意要符合类型

insert into student (id) values(1);

-- unique  唯一 值不能重复
-- 存的时候就不能重复 distinct 是查询的时候不能重复
drop table student;
create table student(id int,name varchar(20));
insert into student value(1,"张三");
insert into student (id,name) value(1,"张三");
insert into student (id,name) value(1,"张三");
select * from student;

drop table student;
create table student(id int unique,name varchar(20));
insert into student value(1,"张三");
insert into student (id,name) value(1,"张三"); -- 报错
insert into student (id,name) value(2,"张三");
UPDATE student set id = 1 where name = "张三"; -- 也报错
-- 插入和修改之前会先查询是否重复

-- primary key 主键约束                                     !!!!!!数据库最重要的约束!!!!!!
-- 描述表的某个列或者某几个列 作为主键 起到身份标识的部分
-- 不能重复 不能为空 基本等价于 unique + not null
drop table student;
create table student(id int primary key,name varchar(20));
desc student;

insert into student values(null,"张三"); -- error
insert into student values(1,"张三");
insert into student values(1,"张三"); -- error
-- 一般在设置标的时候 都会给表设置一个主键列 通常是一个id
-- 但是在手动设置id的时候 可能会出现重复的情况 但是数据库提供了自增主键 auto_increment
select * from student;
drop student;
create table student(id int primary key AUTO_INCREMENT,name varchar(20));
desc student;
insert into student values (null,"张三"); -- 数据库会自动帮我们分配
insert into student values (100,"张三");  -- 自己分配
select * from student;
insert into student values (null,"张三"); -- 101
insert into student values (1000,"张三");
insert into student values (null,"张三");
-- 主键通常使用整数来表示
-- 自增主键的值 是拿最大的值来分配
-- 一般来说每一个表都要有主键 且一个表只能有一个主键
-- 数据库服务器来进行分配的
-- 自增主键仅限于单节点的mysql服务器场景使用
drop table xz;
create table xz(id int primary key AUTO_INCREMENT,name varchar(20) primary key); -- 报错
create table xz(id int primary key AUTO_INCREMENT,name varchar(20) );
show tables;
select * from xz;
-- 业界也流传了很多分布式情况下，唯一的生成算法
-- 使用雪花算法

-- foreign key 外键约束
/*
外键用于定义主表和从表之间的关系
外键约束主定义在从表的列上，主表关联的列必须是主键或唯一约束
当定义外键后，要求从表中的外键列数据必须在主表的主键或唯一列存在或为null
*/
drop table student;
drop table class;


-- 创建外键约束时 需要明确当前表的哪个列和另一个表的哪个列 建立关联关系
create table class(classId int primary key auto_increment,name varchar(20));

create table student(studentId int primary key auto_increment,name VARCHAR(20),classId int,
  foreign key (classId) references class(classId)); -- student 表中的 classId 必须存在于 class 表的 classId 中

show tables;

select * from class;
select * from student;

insert into student values(1,"张三",100);

insert into class   values(1,"aaa1"),(2,"aaa2"),(3,"aaa3");

INSERT into student values(1,"张三",1),(2,"李四",2),(3,"王五",3);

insert into student values(4,'赵六',100);
-- 就是上面提到的 student 表中的 classId 必须存在于 class 表的 classId 中
update student set classId = 4 where name = "王五"; -- update 也不行

delete from class where classId = 2; -- 外键也限制了父表
-- 删除主表某条记录时，从表中不能有对该记录的引用

update class set classId = 100 where classId = 2;

-- 这样就可以
update student set classId = 2 where name = "王五";
delete from class where classId = 3;

insert into student values(4,"nb",null); -- 但是允许是null
-- 也就是说子表存在依赖你要删掉的父表的列时就不能删除

-- 删除主表要先删除从表

drop table student;
drop table class;

create table class(classId int unique,name varchar(20));
create table student(studentId int,name varchar(20),classId int,foreign key (classId) references class(classId));
-- 子表外键引用的父表列，不强制是主键，但必须是“唯一键”
-- 子表中插入数据就会涉及到自动的在父表中进行查询
/*
父表被引用的列通常是 PRIMARY KEY 或 UNIQUE
数据库会自动使用 索引查找（Index Seek）
时间复杂度接近 O(log n)
*/

-- check       限制值
/*
可以应用于一个或多个列，用于限制列中可接受的数据值，从而确保数据的完整性和准确性。
在8.0.16开始全面支持CHECK约束，之前的版本会忽略CHECK的定义
*/
select version(); -- 8.0.46 我们是支持的

drop table student;
drop table class;

create table student(id int,name varchar(20),gender varchar(10) check(gender = '男' or gender = "女"));

select * from student;

insert into student values(1,"张三","武装直升机");
insert into student values(2,"李四","沃尔玛购物袋");

insert into student values(1,"张三","男");
insert into student values(2,"李四","女女");

create table score(id int,score int check(score > 0 and score <= 100));

insert into score values(1,26.32); -- 即使输入小数也会变成整数

select * from score;













