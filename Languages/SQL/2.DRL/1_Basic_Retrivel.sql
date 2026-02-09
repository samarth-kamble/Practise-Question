USE ORG;

-- Syntax: SELECT <set of column names> FROM <table_name>;
-- Order of execution from RIGHT to LEFT.
SELECT * FROM Worker;

SELECT * FROM Bonus;

SELECT * FROM Title;

SELECT Worker.SALARY, FIRST_NAME FROM Worker;


-- Can we use SELECT keyword without using FROM clause?
-- Yes, using DUAL Tables.
-- Dual tables are dummy tables created by MySQL, help users to do certain obvious actions without referring to user
-- defined tables.


SELECT 55 + 11 ;

-- Current time of the Server
SELECT NOW();

-- Upper case
SELECT UCASE('SAMArth');

-- Lower case
SELECT LCASE('SAMARTH');

