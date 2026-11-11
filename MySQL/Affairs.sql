select @@global.TRANSACTION_isolation;

start transaction;

select * from student where id = 1;

commit;










