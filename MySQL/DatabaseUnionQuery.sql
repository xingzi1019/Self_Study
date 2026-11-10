-- 联合查询
use java119;
show tables;

drop table student;
drop table score;
drop table class;
drop table course;

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

select * from score;

-- 自连接是自己与自己取笛卡尔积，可以把行转化成列，在查询的时候可以使用where条件对结果进行过滤
-- 或者说实现行与行之间的比较。在做表连接时为表起不同的别名
select * from score,score; -- error

select * from score as s1,score as s2;

-- 显示所有"MySQL"成绩比"JAVA"成绩高的成绩信息

select * from course where name = "MySQL" or name = "Java";

select * from score s1,score s2 where s1.student_id = s2.student_id; 

select * from score where course_id = 1 or course_id = 3;
-- 发现在两个不同的数据行 所以需要自连接

select * from score s1,score s2 where s1.student_id = s2.student_id and s1.course_id = 3 and s2.course_id = 1 and s1.score > s2.score;  

select s1.student_id,s1.score as MySQL分数,s2.score as Java分数 from score s1,score s2 where s1.student_id = s2.student_id and s1.course_id = 3 and s2.course_id = 1 and s1.score > s2.score; 

select s1.student_id,s1.score as MySQL分数,s2.score as Java分数 from score s1,score s2 where s1.student_id = s2.student_id and s1.course_id = 3 and s2.course_id = 1 and s1.score > s2.score; 

-- 自连接可以把行关系转成列关系
-- 笛卡尔积的开销代价比较大

-- 子查询
-- 本质上就是把多个查询，合并成一个 SQL 但是是一个败笔
-- 实际开发要慎重使用
-- 子查询是指嵌套在另一个 SQL 查询中的查询语句，也叫内查询

-- 单行子查询
-- 分开写的效果
select * from student;

select name from student where class_id = 2 and name != "不想毕业"; 

-- 合着一起写
select name from student where class_id = 
(select class_id FROM student where name = "不想毕业")
 and name != "不想毕业";

-- 多行子查询
#分开写 java成绩或mysql成绩的信息
select course_id from course where name = "java" or name = "mysql";

select * from score where course_id in(1,3);

#合起来写
select * from score where course_id in(
  SELECT course_id FROM course WHERE name = "Java" or name = "MYSQL"
);

# 使用NOT IN 可以查询除了"MySQL"或"Java"课程的成绩
select * from score where course_id not in (select course_id from course where
name = 'Java' or name = 'MySQL');

-- 多列子查询
-- 单行子查询和多列子查询都只返回一列数据，多列子查询中可以返回多个列的数据，外层查询与嵌套的内层查询的列要匹配
#查询重复录入的分数

select * from score ORDER BY student_id,course_id;

insert into score VALUES(1,1,71),(1,3,99),(1,5,33),(1,6,98); -- 没有主键和unique约束 所以重复的随便可以插入

select * from score GROUP BY student_id,course_id,score HAVING count(*) > 1; -- 意思是这三个相同而给他分到一组去
-- having 用来过滤的 别忘记了

select score from score where (student_id,course_id,score) in
(select * from score GROUP BY student_id,course_id,score HAVING count(*) > 1);

-- 在from⼦句中使用子查询
-- 当一个查询产生结果时, MySQL自动创建一个临时表, 然后把结果集放在这个临时表中, 最终返回给用户在from子句中, 
-- 也可以使用临时表进行子查询或表连接操作 

#查询所有比java01班平均分高的成绩信息
select * FROM student,score,class where student.student_id = score.student_id and student.class_id = class.class_id;

select avg(score.score) FROM student,score,class where student.student_id = score.student_id and student.class_id = class.class_id and class.name = "Java001班";

SELECT * from score,(
select avg(score.score) as score FROM student,score,class where student.student_id = score.student_id and student.class_id = class.class_id and class.name = "Java001班"
) as avg_score
where score.score > avg_score.score;

-- 合并查询
-- 在实际应用中，为了合并多个select操作返回的结果，可以使用集合操作符 union , union all

use test_xz;
show tables;
create table student(student_id int,name varchar(20));

insert into student VALUES(1,"张三"),(2,"李四"),(3,"王五");

CREATE table student2(id int,name varchar(20));

INSERT into student2 VALUES(1,"张三"),(2,"李四"),(100,"王五");

SELECT * from student;
SELECT * from student2;

SELECT * FROM student UNION SELECT * FROM student2;
-- 两张表进行合并 合并完之后进行去重

SELECT * FROM student UNION ALL SELECT * FROM student2; -- 加上 ALL 就不会去重

-- 注意: 要合并的两张表的个数/类型要相同 名字可以不同
SELECT * FROM student UNION ALL SELECT name FROM student2; -- error

SELECT name FROM student UNION SELECT name FROM student2;


































