-- 展示数据库
show databases;
-- 创建数据库
create database test_xz;
-- 创建数据库如果不存在的话
create database if not exists test_xz;
-- 展示警告
show warnings;
-- 展示字符集
show charset;
-- 展示数据库支持的排序规则
show collation;
-- 展示系统默认字符集
show variables like '%character%';
-- 展示系统默认排序规则
show variables like '%collation%';
-- 创建一个库名为 java01 字符集为 utf8mb4 排序规则为 utf8mb4_0900_ai_ci
create database not exists java01 character set utf8mb4 collate utf8mb4_0900_ai_ci;
-- 查看创建语句
show create database test_xz;
-- 将 test001 的数据库字符集改成gbk
alter database test001 character set gbk;
-- 删除数据库
drop database test_xz;