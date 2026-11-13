use java119;
show tables;

drop table bank_account;

create table bank_account(id int PRIMARY key AUTO_INCREMENT,name varchar(20),balance int);

desc bank_account;

insert into bank_account values
(null,'张三',1000),
(null,'李四',2000),
(null,'王五',3000);

select * from bank_account;

SELECT @@global.transaction_isolation;

-- set global TRANSACTION ISOLATION level read uncommitted;
-- set global TRANSACTION ISOLATION level read committed;
-- set global TRANSACTION ISOLATION level repeatable read;
set global TRANSACTION ISOLATION level serializable;

--  
start TRANSACTION;

insert into bank_account values(null,'赵六',1000);

DELETE from bank_account where name = '赵六';

update bank_account set balance = 10000 where name = '张三';

select * from bank_account;

rollback;

commit;



















