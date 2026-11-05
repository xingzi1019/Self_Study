-- 联合查询
use java119;
show tables;

drop table student;
drop table score;
drop table calss;

create table course(course_id int primary key auto_increment,name varchar(20));

create table class(class_id int primary key auto_increment,name varchar(20));

create table student(student_id int primary key auto_increment,name varchar(20),sno varchar(20),class_id int);

create table score(student_id int ,course_id int,score int);

# 课程表
insert into course (name) values ('Java'), ('C++'), ('MySQL'), ('操作系统'), ('计
算机⽹络'), ('数据结构');
# 班级表
insert into class(name) values ('Java001班'), ('C++001班'), ('前端001班');
# 学⽣表
insert into student values
(null,'唐三藏', '100001', 1),
(null,'孙悟空', '100002', 1),
(null,'猪悟能', '100003', 1),
(null,'沙悟净', '100004', 1),
(null,'宋江', '200001', 2),
(null,'武松', '200002', 2),
(null,'李逹', '200003', 2),
(null,'不想毕业', '200004', 2);
# 成绩表
insert into score (score, student_id, course_id) values
(70.5, 1, 1),(98.5, 1, 3),(33, 1, 5),(98, 1, 6),
(60, 2, 1),(59.5, 2, 5),
(33, 3, 1),(68, 3, 3),(99, 3, 5),
(67, 4, 1),(23, 4, 3),(56, 4, 5),(72, 4, 6),
(81, 5, 1),(37, 5, 5),
(56, 6, 2),(43, 6, 4),(79, 6, 6),
(80, 7, 2),(92, 7, 6);

select * from course;
select * from class;
select * from student;
select * from score;

-- 需要联合查询的时候
-- 根据需求 明确从哪些表中查询
-- 把这多个表进行笛卡尔积
-- 需要增加条件 去掉笛卡尔积的无效数据 s.class_id = c.class_id 也叫做"链接条件"
-- 根据需求 进一步补充查询条件
-- 对查询到的列进一步的精简

select * from student,class;

-- 发现有没必要的笛卡尔积 筛选掉
select * from student,class where student.class_id = class.class_id;
select * from student as s,class as c where s.class_id = c.class_id; -- 可以 as
-- 数据库的表 => 对象
-- 数据库的列 => 对象的属性

select * from student as s,class as c where s.class_id = c.class_id and s.name = "孙悟空";
select s.name,s.sno,c.class_id,c.name from student as s,class as c 
where s.class_id = c.class_id and s.name = "孙悟空";
-- 联合查询往往不是一步到位 而是一步步精简起来

-- 上面的联合查询也就是在使用内链接
-- 内链接
-- 语法
select 字段 from 表1 别名1, 表2 别名2 where 连接条件 and 其他条件;
select 字段 from 表1 别名1 [inner] join 表2 别名2 on 连接条件 where 其他条件;
 
select * from student join class;

select * from student join class on student.class_id = class.class_id; -- on 指定链接条件

select * from student join class on student.class_id = class.class_id where student.name = "孙悟空";

select student_id,student.name,sno,class.class_id,class.name 
from student join class on student.class_id = class.class_id
where student.name = "孙悟空";

-- 查询唐三藏的成绩
select * from student join score;

select count(*) from score;   -- 20
select count(*) from student; -- 8

-- 注意 在进行多表查询的时候要明确必须存在某一列 同时存在于两个表里

select * from student join score on student.student_id = score.student_id;

select * from student join score on student.student_id = score.student_id where name = "唐三藏";

select student.name,score.course_id,score 
from student join score 
on student.student_id = score.student_id 
where name = "唐三藏";















