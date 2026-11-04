-- 数据库设计
drop table test;
CREATE table test(id int primary key auto_increment,name varchar(20));

insert into test values(1,'a');
insert into test values(2,'b');
insert into test values(3,'c');

insert into test values(null,'d');

insert into test values(99,'e');
insert into test values(200,'mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm');

insert into test values(null,'f');

select * from test;

show tables;
drop table student;

-- 1 对 1 关系
drop table user;
drop table account;
create table user(
realName varchar(20),
nickName varchar(20) PRIMARY key,
phoneNumber varchar(11),
emailAddress varchar(20),
sex varchar(5) check(sex = "男" or sex = "女"),
school varchar(20)
);

create table account(
psd varchar(20),
nickName varchar(20),
foreign key (nickName) references user(nickName)
);
















