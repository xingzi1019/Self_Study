-- 数据库索引
/*
    索引是什么
MySQL的索引是一种数据结构，它可以帮助数据库高效地查询、更新数据表中的数据
索引通过一定的规则排列数据表中的记录，使得对表的查询可以通过对索引的搜索来加快速度。
MySQL索引类似于书籍的目录，通过指向数据行的位置，可以快速定位和访问表中的数据
比如 汉语字典的目录（索引）页，我们可以按笔画、偏旁部首、拼音等排序的目录（索引）快速查找到需要的字。
*/

-- 索引的代码
# 1.消耗额外的存储空间
# 2.引入索引可能会拖慢增删改的速度
-- 通常认为索引利大于弊

-- 使用 B+ 树 针对B树的改进 也是N叉树 后面使用双向链表把叶子结点串起来 叶子结点就是完整的数据集合
-- 认识B+树之前 先认识B树(N叉树)
-- 一个节点有多个 key 因此一次IO操作就可以读到一个节点多个key进行比较 IO读写次数就少 速度就快一点

-- MySQL 中的页 就是B+树上面的节点
/*
在.ibd文件中最重要的结构体就是Page(页），页是内存与磁盘交互的最小单元，默认大小为
16KB，每次内存与磁盘的交互至少读取一页，所以在磁盘中每个页内部的地址都是连续的，之所
以这样做，是因为在使用数据的过程中，根据局部性原理，将来要使用的数据大概率与当前访问的
数据在空间上是临近的，所以一次从磁盘中读取一页的数据放入内存中，当下次查询的数据还在这
个页中时就可以从内存中直接读取，从而减少磁盘I/O提高性能
*/
-- 局部性原理：一个经验 时间局部性和空间局部性 
-- 数据页:叶子结点 索引页:非叶子结点
-- 每一个也中即使没有数据也会使用 16KB 的存储空间，同时与索引的B+树中的节点对应

show variables like "innodb_page_size"; -- 16384
-- 一个idb文件可以包含很多页

-- 如果在使用mysql的时候 一个表的行数超过 2kw 需要慎重 如果继续增加 B+树的层数可能会增加

-- 索引分类
/*
主键索引
普通索引
唯一索引
全文索引
聚集索引
非聚集索引
        但是上面这四个分类 不是严格的分类
*/

-- 主键索引
-- 当在一个表上定义一个主键 PRIMARY KEY 时，InnoDB使用它作为聚集索引
-- 推荐为每个表定义一个主键 如果没有逻辑上唯一且非空的列或列集可以使用主键，则添加一个自增列
-- 如果表里面没有主键 数据库会自动创建"隐藏列" 作为主键 围绕隐藏列设定索引


-- 普通索引
-- 针对普通的列  手动创建的索引
-- 一个表里有多个列 也就可以有多个索引

-- 唯一索引
-- 定义一个unique的时候 自动创建唯一索引
-- 与普通索引类似 但区别在于唯一索引的列不允许有重复值
-- 内部结构和主键索引有一定的差别

-- 全文索引
-- 针对字符串类型创建的 字符串可能涉及到模糊查询


-- 聚集索引(聚簇索引)
-- 主键索引就是聚簇索引 叶子结点保存了数据行
-- 数据行就不必通过其他方式来表示了


-- 非聚集索引(非聚簇索引)
-- 聚集索引以外的索引称为非聚集索引或二级索引
-- ⼆级索引中的每条记录都包含该行的主键列，以及二级索引指定的列
-- InnoDB使用这个主键值来搜索聚集索引中的行，这个过程称为回表查询
-- 再创建的B+树索引 叶子结点保存的就是对应数据行的主键Id

-- 上面提到的聚簇和非聚簇有一个前提条件 得使用 MySQL 中的 InnoDB 这样的存储引擎 才是适用的
-- 如果是其他的存储引擎 结果可能不太一样

-- 主键索引

#方式一，创建表时创建主键
create table t_test_pk(
id bigint primary key auto_increment,
namevarchar(20)
);

#方式二，创建表时单独指定主键列
create table t_test_pkl(
id bigint auto_increment,
name varchar(20)，
primary key (id)
);

#方式三，修改表中的列为主键索引
create table t_test_pk2(
id bigint,
name varchar(20)
);

alter table t_test_pk2 add primary key (id) ;
alter table t_test_pk2 modify id bigint auto_increment;

drop table if exists student;

create table student (id int,name varchar(20));
show index from student;  -- 查询索引

create table student (id int primary key,name varchar(20)); -- 不允许为空
show index from student;

create table student (id int unique,name varchar(20));      -- unique允许为空
show index from student;

drop table class;
create table class(classId int primary key,name varchar(20));
create table student (id int unique,name varchar(20),classId int,FOREIGN key(classId) references class(classId));
show index from student;

-- 先有父表的索引 才能创立外键 然后在用外键创立出子表的索引

create index name_index on student(name);
show index from student;
/*
在 非聚簇索引 B+ 树​ 中查找
找到对应的 叶子节点
从叶子节点中取出 主键值
用主键值去 聚簇索引 B+ 树​ 中查找
聚簇索引的叶子节点 本身就是数据行
✅ 直接拿到完整数据
*/

-- 表里面存的数据还比较少的时候创建索引 没什么大问题
-- 一旦表里面的数据庞大到百万千万条时 再创建索引 就是危险操作了
-- 因为索引会构建新的B+树 要扫全表 + 排序 + 写索引
/* 
数据库心里想的是：
我要重构这张表的结构，
万一有人同时改数据，
我的索引就建歪了，
干脆把表锁了，谁都别动
*/

-- 因此再数据库设计之初 就应该把索引都规划好
-- 语法
create index 索引名 on 表名(列名);
show index from 表名;

-- 创建复合索引
-- 是有先后顺序的 先按第一列来查 第一列的值相同了 再按照第二列来查
create index index_name on t_test_index6 (sno, class_id);

-- 查看索引
show keys from student;
show index from student;
desc student;

-- 删除索引
-- 虽然数据库提供这个操作 但实际上一般不会去删除
alter table 表名 drop primary key;

-- 索引应该创建在高频查询的列上
-- • 索引需要占用额外的存储空间
-- • 对表进行插入、更新和删除操作时，同时也会修索引，可能会影响性能
-- • 创建过多或不合理的索引会导致性能下降，需要谨慎选择和规划索引











