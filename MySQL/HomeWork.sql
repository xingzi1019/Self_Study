-- 设计一张商品表，包含以下字段：商品名称、商品价格、商品库存、商品描述
create table commodity(
goods_name  varchar(20), 
goods_price decimal(10,2),
goods_num int,
goods_description varchar(200));

-- 设计一张老师表，包含以下字段：姓名、年龄、身高、体重、性别、学历、生日、身份证号
create table  teacher(
name varchar(20),
age int,
height decimal(5,2),
weight decimal(5,2),
sex int,
education_background varchar(20),
birthday datetime,
idNum varchar(23) primary key
);

-- 设计一张图书表，包含以下字段：图书名称，图书作者、图书价格、图书分类
create table book(
book_title varchar(20),
book_author varchar(20),
book_price decimal(10,2),
bool_kinds varchar(20)
);

show tables;
-- 在以上创建的商品表中插入一条数据：名称为“学生书包”、价格18.91、库存101、描述为空
insert into commodity values("学生书包",18.91,101,null);
select * from commodity;

-- 在图书表中新增一条记录：Java核心技术、作者“Cay S. Horstman”，价格56.43，分类为“计算机技术”
insert into book values("JAva核心技术","Cay s. Horstman",56.43,"计算机技术");
select * from book;

-- student学生表中，字段有姓名name，年龄age，要求查询姓张，并且年龄在18到25岁之间的学生
DROP TABLE IF EXISTS student;
create  table student(name  varchar(20),age int);
insert into student values("张三",19);
select * from student;
select * from student where name = "张%" and age >= 18 and age <= 25;

-- 查询article文章表中，发表日期create_date在2019年1月1日上午10点30分至2019年11月10日下午4点2分的文章
create table  article(pubDate Datetime,name varchar(20));
select now();
insert into article values("2019-10-19 14:30:00","nbxz");
select * from article where pubdate between "2019-01-01 10:30:00" and "2019-11-10 16:2:00";

-- 查询article文章表中，文章标题title为空，或者满足发表日期create_date在2019年1月1日之后
insert into article values("2018:1:1",null),("2019:1:2 12:00:01","GOOD_BOOK");
select * from article where name = null or pubdate > "2019:1:1 00:00:00";















