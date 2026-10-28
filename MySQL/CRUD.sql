use java119;
show TABLEs;
CREATE TABLE if not EXISTS student(
  id int COMMENT'id',
  name varchar(20) COMMENT '姓名',
  gender int COMMENT "性别"
);
-- 单行数据全列插入
INSERT INTO student VALUES(1,'xz',1);
INSERT INTO student VALUES(2,2,2);     -- 这里会发生隐式类型转换
INSERT INTO student VALUES('3',3,3);   -- 这里会发生隐式类型转换
INSERT INTO student (NAME,id) VALUES('yu',2);
INSERT INTO student (id,NAME) VALUES('3',6);
-- 多行插入
INSERT INTO student VALUES(11,'千',0),(22,"咲",0),(33,"朽",1);
-- 下面这个效率比上面慢很多 下面要进行三次的服务器通信 但是上面只需要一次
INSERT INTO student VALUES(11,'千',0);
INSERT INTO student VALUES(22,"咲",0);
INSERT INTO student VALUES(33,"朽",1);
INSERT student VALUES(44,"守",3);

DESC student;

CREATE TABLE exam (
 id BIGINT,
 name VARCHAR(20) COMMENT '同学姓名',
 chinese float COMMENT '语文成绩',
 math float COMMENT '数学成绩',
 english float COMMENT '英语成绩'
);
-- 插入测试数据
INSERT INTO exam (id,name, chinese, math, english) VALUES
(1, '唐三藏', 67, 98, 56),
(2, '孙悟空', 87, 78, 77),
(3, '猪悟能', 88, 98, 90),
(4, '曹孟德', 82, 84, 67),
(5, '刘玄德', 55, 85, 45),
(6, '孙权', 70, 73, 78),
(7, '宋公明', 75, 65, 30);
-- 查询所有列
SELECT * FROM student; -- 本质危险操作 特别是在生产环境下的表
SELECT * FROM exam;
-- * 是通配符
-- 查询指定列
SELECT id,NAME,chinese FROM exam;
-- 下面这个操作没有修改数据库的内容只是在返回给客户端的时候
-- 在一个临时表上 把上述数据做了加工 当客户端收到临时表后 这个临时表就会被销毁
SELECT name,chinese + 10 FROM exam; -- 只是临时修改
-- 任何一个 SELECT 操作都不会去修改服务器的原始数据

-- 先获取到每一行的数据 再把每一行的数据相加
SELECT name,chinese+math+english from exam;
-- 下面这个也可以查询 只不过用的比较少
SELECT name,1 FROM exam;
-- 表达式查询时指定别名  as 可以省略 但是不建议
SELECT name as "名字",chinese as CHINESE_VALUE from exam;
SELECT name  "名字",chinese  CHINESE_VALUE from exam;
SELECT name  "名字",chinese  "nb" from exam;
SELECT name,chinese + math + english as total from exam as SCORE;
-- as 可以省略
SELECT name,chinese + math + english total from exam SCORE;

-- 结果去重查询
SELECT math FROM exam;
SELECT DISTINCT math FROM exam;
-- distinck 只有你查询的列都是相同时才会去重 如下面这个例子 math 分数一样但是名字不同也不会去重
SELECT DISTINCT name,math FROM exam;

INSERT INTO exam (name,math) VALUES("唐三藏",98);
SELECT DISTINCT name,math FROM exam;

-- WHERE 条件查询
-- 比较运算符
-- 在SQL的条件查询当中 = 表示的就是比较相等 C/C++/Java 里面 = 表示赋值
-- 表空的地方就是空 NULL
-- NULL 这个值是可以参与到各种算数运算当中的 但是运算结果还是 NULL
-- 1 + null 得到 null
-- 1 == null 得到 null
-- <=> 等于 对于 null 的比较是安全的 比如 NULL <=> NULL 的结果还是 TRUE
-- != <> 不等于
-- value BETWEEN a0 AND a1 闭区间
-- VALUE IN (option,...) 如果value 在 option 列表中 则返回TRUE(1) NOT IN 则取反
-- IS NULL 是NULL
-- IS NOT NULL 不是NULL
-- LIKE 模糊匹配 % 表示任意多个(包括0个)字符; _表示任意一个字符,NOT LIKE则取反

-- 运算符
-- AND 类似 &&
-- OR  类似 ||
-- NOT 类似 !
-- where SQL 中的子句
SELECT name FROM exam WHERE name = "唐三藏";
-- 查询英语成绩 < 60 的同学
SELECT name,english FROM exam where english < 60;
/*条件查询过程:
1)遍历这个表的每一行数据
2)把这一行数据 代入到条件中
3)如果条件成立 此时把这个行加入到结果集合当中
  如果条件不成立 这一行直接跳过
4)当完成所以得遍历过程之后 此时得到了结果集合
  还需要根据 select 指定的列/表达式/别名/去重操作
  再针对结果集合做进一步处理
*/
-- 注意: 条件中的列和SELECT要查询的列是可以没有任何关系的
SELECT * FROM exam;
select name,english FROM exam where math < 80;
select name,chinese + math + english FROM exam where english < 80;
select name,chinese,english FROM exam where chinese > english;
select name,chinese + math + english as total FROM exam as TotalScore where chinese + math + english >= 200;
select name,chinese + math + english as total FROM exam as TotalScore where total >= 200; -- 报错
-- 回顾上面的条件查询过程 就很轻松得知报错的原因了 所以那会还不认识 total
select name,chinese,english FROM exam where chinese >= 80 AND english >= 80;
select name,chinese,english FROM exam where chinese >= 80 OR english >= 80;

-- AND 和 OR 的优先级
-- AND > OR
SELECT * FROM exam WHERE chinese > 80 OR math > 70 AND english > 70;
-- 所以上面是先结合了后面的AND 再结合了前面的 OR 语句
-- 所以变成了要么你前面 chinese > 80 要么 math 和 english 同时 > 70
SELECT name,chinese FROM exam where chinese >= 80 && chinese <= 90;
SELECT name,chinese FROM exam WHERE chinese BETWEEN 80 AND 90;
-- 这上面两行代码执行结果一致
INSERT INTO exam(name,chinese) VALUES('关云长',80),('张翼德',90);

