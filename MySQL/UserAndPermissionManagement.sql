-- 用户和权限管理

-- 权限是按照用户来划分的 
-- root 最高权限的管理员
-- 一般来说都是资深程序员或者DBA来管理
-- 普通程序员的权限是被分配被管理的
-- 所以下面这些不一定会用到 过一遍就好

use mysql;

show tables;

desc user;

-- 查询user表中的记录
select host,user,authentication_string from user;

-- host:允许登录的主机,相当于白名单,如果是localhost,表示只能从本机登录
-- user:用户名
-- *_priv:用户拥有的权限
-- authentication_string:加密后的用户密码

-- 创建用户
-- 语法如下
CREATE USER [IF NOT EXISTS] 'user_name'@'host_name' IDENTIFIED BY 'auth_string';

-- user_name:用户名，用单引号包裹，区分大小写
-- host_name:主机或iP(段），用单引l号包裹
-- auth_string：真实密码，有些密码策略不允许使用简单密码

/*
注意事项
• 如果不指定host_name相当于'user_name'@'%'，%表示所有主机都可以连接到数据库
  强烈建议不要这样设置，因为会导致严重的安全问题
• user_name和host_name分别用单引号包裹，如果写成'user_name@host_name'，相当于'user_name@host_name'@'%'
• host_name可以通过子网掩码设置主机范围
  • 198.0.0.0/255.0.0.0 :A段网络中的任意一台主机
  • 198.51.0.0/255.255.0.0：198.51 B段网络中的任意一台主机
  • 198.51.100.0/255.255.255.0：198.51.100 C段网络中的任意一台主机
  • 198.51.100.1:只包含特定IP地址的主机
• 从MySQL 8.0.23开始，指定为IPv4地址的主机值可以使用CIDR表示法写入，例如198.51.100.44/24
• 允许在IP地址中使用%通配符，比如，主机值'%'匹配任何主机名，198.51.100.% 匹配198.51.100 C段网络中的任何主机。
  MySQL 8.0.35中已弃用，以后可能会删除
*/

# 添加⼀个名为bit的新⽤⼾，允许从本机登录
create user 'bit'@'localhost' identified by '123456';

# 添加⼀个名为bit1的新⽤⼾，允许从192.168.1.1/24网段登录
create user 'bit1'@'192.168.1.1/24' identified by '123456';

# 查询，添加成功
select host, user, authentication_string from user\G;

-- 修改密码

# 为指定用户设置密码 【推荐】
ALTER USER 'user_name'@'host_name' IDENTIFIED BY 'auth_string';

# 为指定用户设置密码
SET PASSWORD FOR 'user_name'@'host_name' = 'auth_string';

# 为当前登录用户设置密码
SET PASSWORD = 'auth_string';

-- 删除用户
-- 语法
DROP USER [IF EXISTS] 'user_name'@'host_name'[, ...];

-- 给用户权限
-- 回收权限


