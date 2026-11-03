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
CREATE table student(id int,name varchar(20) default '匿名');

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

-- primary key 主键约束    !!!!!!数据库最重要的约束!!!!!!
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
-- 自增主键的值 是拿最大的值来分配

-- foreign key 外键约束

-- check       限制值

































