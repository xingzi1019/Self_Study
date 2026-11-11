-- 数据库事务
-- 事务把一组SQL语句打包成为一个整体，在这组SQL的执行过程中，要么全部成功，要么全部失败
-- 这组SQL语句可以是⼀条也可以是多条
-- 用来解决原子性问题的

-- 数据库在运行过程中，每次进行上述的增/删/改操作的时候，都会记录一个日志(把当前进行的操作，保存下来)
-- 日志就相当于printIn，只不过把字符串保存到硬盘文件中~~
-- 如果事务正常执行完毕，上面的日志就可以不要了（删除了）
-- 如果事务执行一半，中间出现了任何故障，刚才事务执行了哪些内容细节信息，就包含在日志中了
-- 重新启动的mysql服务器，读取刚才日志中的内容，看一下这个事务已经做了啥，
-- 然后可以根据已经做的操作，把硬盘保存的数据，给还原回去~~恢复如初~~

-- 工作中，相当一部分程序是需要考虑失败的情况的 要知道如何处理
/*
事务的ACID特性
事务的ACID特性指的是 Atomicity (原子性), Consistency (一致性), Isolation (隔离性)和 Durability (持久性)。
- Atomicity (原子性) ：
一个事务中的所有操作，要么全部成功，要么全部失败，不会出现只执行了一半的情况，如果事务在执行过程中发生错误，会回滚（Rollback）到事务开始前的状态，就像这个事务从来没有执行过一样；
- Consistency (一致性)：
在事务开始之前和事务结束以后，数据库的完整性不会被破坏。这表示写入的数据必须完全符合所有的预设规则，包括数据的精度、关联性以及关于事务执行过程中服务器崩溃后如何恢复；
- Isolation (隔离性)：
数据库允许多个并发事务同时对数据进行读写和修改，隔离性可以防止多个事务并发执行时由于交叉执行而导致数据的不一致。事务可以指定不同的隔离级别，以权衡在不同的应用场景下数据库性能和安全；  🎯最重要的🎯
- Durability (持久性)：
事务处理结束后，对数据的修改将永久的写入存储介质，即便系统故障也不会丢失。
*/

use java119;
show tables;

drop table if exists student;

create table student(id int,name varchar(20));

start transaction; -- 开始事务

insert into student values(1,"张三");

savepoint step1;

insert into student values(2,"张三");

savepoint step2;

insert into student values(3,"张三");

savepoint step3;

commit;

select * from student;

rollback to step2; -- step2 后面的操作就被回滚掉了

rollback to step1;

rollback;
-- MySQL 事务中的 ROLLBACK 就是回滚到当前事务中最近一次 COMMIT 之后的状态
-- (如果当前事务中还没有执行过COMMIT，则回滚到事务开始之前的状态)
-- 开启事务，使用专门的日志，记录事务的执行过程
-- 所以已经 commit 之后就不能回滚

select * from student;

/*
有些事务，内部要执行的SQL可能很多
就可以中间插入一些保存点
一旦后续某个操作执行出问题，可以回滚到前方的某个指定保存点，而不必直接回滚到最初状态~~
随着你进行commit或者总的回滚，保存点就无了~~
*/

-- 不过实际开发过程中 一个事务中的 SQL 一般不会特别多 特别复杂 很少会使用到保存点

-- 默认情况下，MySQL是自动提交事务的，也就是说我们执行的每个修改操作，比如插入、更新和删除，
-- 都会自动开启个个事务并在语句执行完成之后自动提交，发生异常时自动回滚。
-- 查看当前事务是否自动提交可以使用以下语句
show variables like 'autocommit';

-- 可以通过以下语句设置事务为⾃动或⼿动提交

# 设置事务自动提交
SET AUTOCOMMIT = 1;     #方式一
SET AUTOCOMMIT = ON;    #方式二

# 设置事务手动提交
SET AUTOCOMMIT = 0;     #方式一
SET AUTOCOMMIT = OFF;   #方式二

-- 下面是重点
-- 事务的隔离性和隔离级别
-- 很多情况下效率性和准确性不可兼得

-- 可以手动的对mysql的隔离性强度 进行设置
-- 隔离性越强 并发越弱 效率越低 准确率越高
-- 隔离性越弱 并发越强 效率越高 准确率越低
/*
MySQL服务可以同时被多个客户端访问，每个客户端执行的DML语句以事务为基本单位，
那么不同的客户端在对同一张表中的同一条数据进行修改的时候就可能出现相互影响的情况，
为了保证不同的事务之间在执行的过程中不受影响，
那么事务之间就需要要相互隔离，这种特性就是隔离性。
*/


-- 提供了四个档位
-- read uncommited 读未提交  隔离性弱 并发性强
-- read commited 读已提交
-- repeatable read 可重复读
-- serializable 串行化       隔离性强 并发性弱

-- 脏读
-- 不可重复读
-- 幻读

-- read uncommited;
-- 对两个事务的执行顺序没有做出任何
-- 会出现脏读
-- 脏读是数据库事务并发控制里的一个经典概念，指的是一个事务读到了另一个事务尚未提交的数据

-- read commited；
-- 引入这个隔离可以解决脏读
-- 要求读取同一个数据的时候 只能读到 commit 之后的数据
-- 虽然解决了脏读 但是又会有新的问题

-- repeatable read;
-- 能够解决不可重复读 一定程度上解决幻读问题
-- 涉及到mysql快照机制 引入了一些特殊的锁操作

-- 幻读是不可重复读的一种扩展情况

-- serializable 根本上解决幻读问题
-- 数据库上的事务 完全是"串行执行"
-- 执行完一个事务才能执行下一个事务
-- 因此准确率最高 执行效率最低



-- 总的来说就是
-- 脏读：读到了别人还没提交的假数据
-- 不可重复读：自己两次读，同一条数据变了
-- 幻读：自己两次查，结果集多了或少了行

##########################################################

-- 事务的隔离级别分为全局作用域和会话作用域，查看不同作用域事务的隔离级别

# 全局作用域
SELECT @@GLOBAL.transaction_isolation;   -- REPEATABLE-READ

# 会话作用域
SELECT @@SESSION.transaction_isolation;  -- REPEATABLE-READ

-- 设置事务的隔离级别和访问模式
SET [GLOBAL|SESSION] TRANSACTION ISOLATION LEVEL level|access_mode;

# 设置全局事务隔离级别为串⾏化，后续所有事务⽣效，不影响当前事务
SET GLOBAL TRANSACTION ISOLATION LEVEL SERIALIZABLE;

-- 这样的修改只是临时生效 后续重启 mysql 服务器会失效
-- 实际开发中 是去修改配置文件
-- 修改配置文件 需要重启mysql服务器才会生效

show tables;
drop table if exists score;
drop table if exists student;

create table student(id int primary key,name varchar(20));

set @@global.TRANSACTION_isolation = 'read-uncommitted';
set @@global.TRANSACTION_isolation = 'read-committed';
set @@global.TRANSACTION_isolation = 'repeatable-read';

select @@global.TRANSACTION_isolation;

start transaction;

desc student;
delete from student;
insert into student values(1,"张三");
insert into student values(2,"李四");
insert into student values(3,"王五");

select * from student;

start transaction;

update student set name = "张六" where id = 1;

commit;

rollback;

select * from student;
























-- 并发处理是“系统能不能同时干很多事”​
-- 数据库事务是“并发时数据还能不能保持正确”


